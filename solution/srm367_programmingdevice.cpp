/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8212
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

class ProgrammingDevice {
public:
    int minPackets(vector<int> offset, vector<int> size, int maxData);
};

int ProgrammingDevice::minPackets(vector<int> offset, vector<int> size, int maxData) {
    int ret;
    return ret;
}


int test0() {
    vector<int> offset = {0, 10, 20, 30};
    vector<int> size = {8, 5, 3, 11};
    int maxData = 6;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
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
    vector<int> offset = {0, 10, 20, 30};
    vector<int> size = {8, 2, 3, 11};
    int maxData = 6;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> offset = {15, 95};
    vector<int> size = {1, 20};
    int maxData = 100;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> offset = {77, 7777, 777};
    vector<int> size = {700, 70000, 7000};
    int maxData = 1;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 77700;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> offset = {50, 10};
    vector<int> size = {100, 35};
    int maxData = 7;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> offset = {0, 1000000000};
    vector<int> size = {1000000000, 1000000000};
    int maxData = 2000000000;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> offset = {0, 1000000000};
    vector<int> size = {1000000000, 1000000000};
    int maxData = 1;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> offset = {0, 1000000000};
    vector<int> size = {999999990, 1000000000};
    int maxData = 2000000000;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> offset = {0, 1000000000};
    vector<int> size = {999999990, 1000000000};
    int maxData = 1000001000;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> offset = {745805579, 676874121, 379656197, 848113610, 89587158, 451523175, 550, 147380788, 938736125, 532882074, 738566487, 329594432, 822596439, 621115948, 115131131, 948154911, 421264571, 155842622, 244574963, 15931562, 586844424};
    vector<int> size = {11499137, 9393821, 4302149, 14626991, 10630027, 14009930, 11051113, 8222075, 26104, 15608095, 914594, 6362715, 14841524, 13998693, 14029867, 14765012, 15306666, 8562181, 8069123, 13273431, 9582221};
    int maxData = 42266312;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> offset = {707247239, 569205780, 26931382, 431};
    vector<int> size = {7066980, 12085965, 4513495, 14513012};
    int maxData = 715276339;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> offset = {149, 721992119};
    vector<int> size = {10392251, 1588905};
    int maxData = 510909561;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> offset = {955600405, 824, 629723063};
    vector<int> size = {6248574, 14632307, 2697668};
    int maxData = 735293618;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> offset = {273463461, 138};
    vector<int> size = {5641257, 14936313};
    int maxData = 986263102;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> offset = {186592286, 155634176, 92327797, 468, 114545882, 161976449, 32362083, 99904667, 227570737, 95157915, 40399859, 19146625, 184332965, 21134641, 35729150, 213325026, 116732115, 131139098, 176689682, 124265668, 179872145, 109495529, 89669678, 172657842, 207018619, 26674390, 11452339, 166219863, 148803649, 143309911, 50836650, 7867600, 199722804, 49012180, 39370322, 162234598, 122241199, 212294459, 78206689, 69522609, 222977071, 74175741, 192626728, 82402724, 168924888, 59557889, 137486694, 46720965, 192292149, 5530094};
    vector<int> size = {5692360, 6309643, 2761707, 5482172, 2125173, 257554, 3365044, 9571939, 5909045, 4675851, 6248464, 1913653, 2227140, 5503398, 3592201, 9630636, 5442994, 6320069, 3109932, 6825131, 4384669, 5013905, 2623745, 3988500, 5219077, 5624489, 7688727, 2691283, 6769904, 5447928, 8697133, 3551188, 7291293, 1816292, 1011111, 3952469, 2005766, 999882, 4169349, 4650030, 4587707, 3956264, 7067626, 7218024, 3692588, 9928929, 5778689, 2264481, 296961, 2261365};
    int maxData = 26383;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 8802;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> offset = {148278816, 23848475, 161306270, 184310969, 186063694, 91386709, 106193212, 185781746, 60511321, 171839804, 63817406, 105702250, 82480963, 116146888, 84656332, 18282073, 35320171, 136307964, 64025541, 77606022, 150685455, 126151900, 46672461, 44211391, 7482709, 189959987, 31422093, 153710148, 95124134, 171775323, 57906989, 65877791, 921, 22815824, 132676359, 70138506, 94455700, 140235319, 120922140, 121357561, 122187741, 51514852, 44631999, 175127799, 34947695, 16873811, 141289549, 35141604, 102220434, 165956363};
    vector<int> size = {2382937, 7568997, 4618509, 1442934, 3869649, 3036798, 9936045, 270388, 3298850, 3280962, 197802, 482448, 2140905, 4743566, 6711087, 4529611, 8889494, 3903045, 1832488, 4865222, 2993403, 6495625, 4829298, 395001, 9364019, 2098989, 3518062, 7592274, 7091173, 56125, 2590875, 4235761, 7463567, 1023391, 3629175, 7438289, 651985, 1042299, 407054, 800866, 3938189, 6373605, 2022654, 9169638, 179556, 1388911, 6960431, 171109, 3473306, 5800907};
    int maxData = 11738;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 16312;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> offset = {198822800, 121808162, 226378898, 98088415, 105215218, 115937983, 81501299, 206881107, 241001975, 33189353, 752, 27543543, 68474849, 46341826, 126386166, 173196799, 93583635, 183088172, 199143587, 174830678, 164587713, 134863880, 236012353, 36498443, 8861884, 76131627, 126955190, 13242841, 137156013, 91061841, 2056079, 213196081, 98802691, 113103870, 96325564, 52976638, 29993196, 194221949, 19846765, 65047321, 247584786, 161453586, 167645145, 140282295, 146866896, 56322870, 190017876, 222303418, 62487817, 153937399};
    vector<int> size = {318078, 4573711, 9632326, 710722, 7884419, 5865300, 9558443, 6314379, 6580882, 3305402, 2052699, 2443759, 7652258, 6631643, 568175, 1631555, 2740474, 6929018, 7733613, 8254462, 3056951, 2288765, 4987790, 9838407, 4379231, 5368972, 7903070, 6603850, 3122125, 2518239, 6802544, 9107329, 6408764, 2831144, 1761089, 3343102, 3194052, 4597980, 7691398, 3426521, 2574370, 3129150, 5549568, 6581154, 7068048, 6159238, 4199046, 4073090, 2553961, 7513547};
    int maxData = 1965;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 127254;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> offset = {10829423, 165309115, 197095487, 180965733, 139289762, 123091649, 56757534, 14627146, 45309480, 144935983, 81945547, 165556224, 40170981, 190876793, 129628667, 152468162, 35202847, 43667844, 84964923, 90415206, 133542128, 136099831, 193102949, 7009481, 48591135, 152258644, 3872562, 67402502, 169173290, 22467436, 107810583, 254, 27859561, 190631061, 125063867, 101400242, 161701906, 115326251, 204567842, 96410876, 140175980, 154772761, 74696385, 62820845, 205346384, 8013367, 84371949, 39439662, 174341283, 9427054};
    vector<int> size = {3773373, 242386, 7448298, 9628316, 846268, 1912312, 6054184, 7768937, 3231091, 7266543, 2381598, 3571061, 3462617, 2188048, 3886270, 2263606, 4167613, 1632861, 5405125, 5947542, 2519013, 3164252, 3942483, 957758, 8150238, 154212, 3096692, 7288404, 5108316, 5325428, 7477924, 3814715, 7282502, 196153, 4527709, 6398723, 3600478, 7711249, 777554, 4920620, 4717144, 6898089, 7229676, 4554727, 5682905, 1353839, 517931, 661900, 6600375, 1392751};
    int maxData = 25590;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 8196;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> offset = {121110230, 68950233, 17341301, 411, 213774510, 174235470, 13887186, 109272087, 91095016, 79220225, 82946221, 142759116, 11488744, 77040202, 156421687, 46953210, 135234408, 115162195, 219427467, 24080492, 62811131, 180906280, 187461964, 44294714, 13740236, 179830532, 63238336, 40531041, 53446234, 210668336, 8030876, 164327017, 127362239, 101075186, 197182017, 68758781, 106046784, 120240233, 74818245, 202639091, 67527389, 194260571, 148926822, 148964011, 32061433, 64332664, 173473638, 95042934, 149241972, 186557362};
    vector<int> size = {6205069, 5823011, 6738394, 7995288, 5626032, 5575282, 3413319, 5851806, 3913048, 3700935, 8122621, 6137931, 2239712, 2151875, 7858580, 6487592, 7521317, 5057394, 3805915, 7972254, 418547, 5612568, 6752617, 2618850, 103964, 1040302, 1090339, 3728077, 9361346, 3086261, 3431578, 9124789, 7867322, 4927244, 5410712, 158774, 3221472, 864926, 2204132, 8021790, 1223905, 2875267, 7899, 248482, 8455364, 3180210, 719299, 5987163, 7149156, 881147};
    int maxData = 15889;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 13991;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> offset = {418469424, 421460020, 257300272, 200800106, 120018735, 99175916, 348095753, 320283030, 91563609, 270280275, 6740199, 468999883, 70263672, 88243530, 382, 59017634, 228163584, 369844075, 331163533, 310381732, 85235924, 132777822, 106244584, 377313110, 340061854, 458060381, 28849306, 380441262, 47071872, 188390159, 409125853, 359997162, 177313371, 77446073, 147015200, 238647761, 426266880, 286244457, 20179747, 36660158, 301741991, 217715321, 162716114, 383184986, 403102383, 352040611, 440485993, 390034794, 206749888, 141329901};
    vector<int> size = {2220008, 4173000, 7057182, 1273932, 2830159, 5252377, 2020038, 8327176, 5347827, 7180524, 7629768, 3826469, 4116878, 1080832, 5635502, 4077742, 8359005, 5692504, 2588679, 4453371, 2342096, 6436578, 5077019, 18221, 2085082, 4485428, 6158990, 686224, 6442365, 9648241, 6331242, 4541398, 5065908, 4197651, 5794222, 9522862, 5500320, 7633658, 3367204, 733070, 2861053, 5434359, 7425314, 4622669, 265646, 5265269, 7943753, 3665534, 1393495, 4240524};
    int maxData = 1;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 232328368;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> offset = {241094466, 15656330, 7215773, 129355065, 414073267, 222281854, 406297120, 99085587, 73110946, 328328766, 46098317, 340350867, 229271597, 471800803, 89569316, 201034118, 176607780, 421899036, 166967750, 382739228, 264757923, 289110156, 444990452, 234738330, 193385615, 258908618, 57190751, 28272517, 434844620, 80114904, 257106658, 36820096, 374906096, 148786256, 833, 270511991, 159220520, 457044837, 362760759, 186865917, 296607077, 279910022, 115236839, 106939807, 353392617, 427310184, 135093310, 211989970, 312413088, 392007835};
    vector<int> size = {9195538, 9458934, 2350187, 2400381, 1708964, 774706, 4520615, 5091348, 4712369, 5413176, 7783886, 5146151, 462326, 307660, 9090339, 1572177, 3384834, 1677832, 83555, 2221571, 5475957, 3743362, 5247216, 5865910, 6476048, 1421493, 7287532, 7190847, 6409283, 3909237, 1781273, 7249246, 5034598, 4483408, 517434, 2229601, 1136606, 4951101, 8791837, 207980, 9812326, 6800976, 7199699, 846743, 5990357, 6081690, 6623643, 3512860, 9352920, 5456127};
    int maxData = 1;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 228443859;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> offset = {457355266, 197689951, 67894519, 88503282, 315121779, 14602765, 390271266, 413736150, 170012228, 237365249, 262366722, 382422380, 465405661, 110440998, 285901585, 106760826, 78243124, 186248504, 292894361, 435386104, 45769413, 271161544, 446715589, 343297005, 462, 502794009, 368594764, 35678838, 402863627, 222038985, 426578047, 118201955, 38788291, 28338231, 491403245, 161859640, 330960182, 469941169, 302521249, 104735148, 445568235, 362059036, 250079695, 53610699, 310124378, 127501177, 479822744, 353669624, 207835844, 145939433};
    vector<int> size = {1981440, 2054522, 5515426, 6903969, 7928764, 9929412, 3620124, 5391421, 7431448, 4308498, 647191, 2951824, 3449011, 34581, 2341415, 3284599, 5767212, 6258711, 7654392, 2483789, 2274123, 6229750, 6581775, 2637480, 8933900, 3814558, 6055883, 1854035, 4290967, 9913101, 5785018, 744192, 5858365, 6252126, 1468496, 3211844, 4248137, 1188312, 3428155, 372869, 693451, 1489672, 6567887, 6626377, 973917, 9726247, 5232871, 5991748, 6711454, 8875734};
    int maxData = 1;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 227970193;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> offset = {76876997, 62532060, 31823950, 5468, 49173606, 68842476, 5514746, 34586871, 86514769, 34586386, 9108436, 9447, 74649592, 10104, 5515260, 76882240, 51299369, 51302693, 71538250, 51301430, 74648347, 44159128, 31822790, 71537010, 76880862, 5513549, 8399, 68844429, 62530973, 57082683, 13191870, 7194, 76880304, 11374740, 9107592, 68842887, 51300727, 76881359, 31821278, 31819003, 86513233, 31820255, 76879286, 31822108, 71536323, 21889487, 51303877, 9109490, 76878204, 6371};
    vector<int> size = {566, 6309643, 2761707, 356, 2125173, 66, 126, 9571939, 5909045, 187, 736, 397, 2227140, 5503398, 3592201, 9630636, 336, 575, 3109932, 559, 275, 5013905, 87, 730, 141, 523, 223, 2691283, 672, 5447928, 8697133, 642, 419, 1816292, 483, 745, 588, 70, 293, 742, 599, 20, 650, 378, 682, 9928929, 5778689, 2264481, 735, 255};
    int maxData = 383;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 241255;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> offset = {87630470, 21368263, 100603161, 123479957, 123483092, 62269689, 72841372, 123480462, 44612707, 111028072, 47911784, 72839064, 55555013, 82778151, 55557297, 16835511, 28945620, 87623527, 48111378, 55554123, 90014716, 83991403, 38235396, 37836893, 7467988, 123484778, 28939003, 93008967, 62271526, 111025440, 44612375, 48112271, 2921, 21365237, 83992987, 48114393, 62269762, 87625842, 82780187, 83187492, 83989611, 38237168, 38232470, 114309211, 28940741, 16833666, 87626971, 28943463, 69364538, 105223244};
    vector<int> size = {2382937, 7568997, 4618509, 14, 729, 18, 9936045, 1464, 3298850, 3280962, 197802, 472, 833, 282, 6711087, 4529611, 8889494, 1129, 776, 578, 2993403, 605, 1102, 395001, 9364019, 2098989, 910, 7592274, 7091173, 917, 127, 125, 7463567, 1355, 3629175, 7438289, 1121, 775, 407054, 800866, 1129, 6373605, 1086, 9169638, 1344, 651, 1395, 1269, 3473306, 5800907};
    int maxData = 738;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 170112;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> offset = {108219895, 52918241, 135456207, 50073743, 50079941, 52915624, 40507665, 115958211, 145090410, 16567390, 5752, 16561090, 35135616, 26411982, 52920908, 89528784, 50069596, 99419302, 108222478, 91162312, 80921123, 53494407, 145088556, 16572030, 8863387, 35137592, 53491216, 8865967, 53497523, 50068054, 2060401, 122272725, 50077652, 50084085, 50072714, 26415047, 16564248, 103621845, 8866899, 35133404, 151673022, 77791443, 83979015, 56622538, 63206256, 26417843, 99420488, 131380568, 32577781, 70277192};
    vector<int> size = {1450, 1299, 9632326, 1354, 1457, 438, 9558443, 6314379, 6580882, 1896, 2052699, 1467, 762, 1769, 568175, 1631555, 1206, 890, 7733613, 8254462, 3056951, 1011, 1078, 9838407, 1367, 5368972, 1490, 424, 3122125, 625, 6802544, 9107329, 352, 2831144, 877, 1594, 528, 4597980, 7691398, 1617, 894, 3129150, 5549568, 6581154, 7068048, 6159238, 4199046, 4073090, 2553961, 7513547};
    int maxData = 965;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 157116;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> offset = {15622, 76059271, 89835531, 76064451, 66734732, 59133131, 33416930, 17164, 22034266, 66737088, 39476353, 76059591, 20398584, 85890399, 61048481, 66894726, 20395883, 20399754, 41860505, 41861816, 61049612, 63570393, 85892559, 11186, 25265516, 66738784, 9351, 39473548, 76061527, 7786670, 59130762, 7254, 13113378, 85693542, 61045647, 52731826, 76057640, 59132201, 97285172, 47810080, 66735191, 69158972, 39474194, 39471866, 98063146, 12374, 41858882, 20397465, 76063205, 13333};
    vector<int> size = {849, 230, 7448298, 9628316, 220, 1912312, 6054184, 7768937, 3231091, 867, 2381598, 261, 789, 768, 614, 2263606, 309, 1632861, 337, 5947542, 2519013, 3164252, 3942483, 986, 8150238, 154212, 756, 132, 416, 5325428, 264, 771, 7282502, 196153, 1177, 6398723, 422, 249, 777554, 4920620, 760, 6898089, 524, 839, 1097, 707, 851, 4, 555, 835};
    int maxData = 590;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 166151;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> offset = {59553040, 29891308, 10257016, 9411, 103624489, 90578785, 10253044, 47771976, 43849869, 35721758, 35725597, 67429587, 8009946, 35718916, 80731395, 18721053, 67425526, 53625846, 109252104, 10259241, 28084909, 91621303, 92505881, 18719444, 10251747, 90580952, 28504003, 18716166, 18723136, 100537719, 8006454, 80733719, 59557255, 47767206, 92512231, 29732286, 47769879, 58685455, 35716085, 92514740, 28507768, 92508555, 73569676, 73580050, 10259614, 28506151, 89859096, 47765095, 73582111, 91622609};
    vector<int> size = {1761, 5823011, 1388, 7995288, 5626032, 552, 1331, 5851806, 3913048, 1697, 8122621, 6137931, 2239712, 471, 460, 310, 1723, 5057394, 1641, 74, 418547, 208, 1083, 1220, 1194, 1040302, 511, 1523, 9361346, 3086261, 1762, 9124789, 7867322, 1222, 484, 158774, 260, 864926, 472, 8021790, 1223905, 1593, 7899, 780, 8455364, 184, 719299, 637, 7149156, 881147};
    int maxData = 889;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 122822;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> offset = {249, 1427, 1046, 1188, 993, 1398, 903, 713, 513, 1850, 2209, 909, 294, 466, 758, 827, 2139, 187, 59, 1696, 2373, 2533, 1195, 136, 357, 1515, 2065, 2071, 522, 547, 2292, 1121, 826, 1387, 1254, 2456, 562, 1616, 1763, 1550, 425, 2343, 732, 1935, 1330, 1025, 633, 2013, 0, 940};
    vector<int> size = {34, 75, 63, 3, 30, 22, 4, 5, 3, 75, 75, 22, 61, 37, 55, 76, 58, 58, 72, 62, 80, 33, 58, 46, 60, 34, 2, 57, 21, 12, 45, 57, 1, 6, 76, 77, 61, 68, 78, 55, 27, 29, 13, 75, 50, 9, 73, 43, 57, 51};
    int maxData = 10;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 243;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> offset = {173, 159, 118, 18, 91, 14, 104, 71, 57, 67, 187, 93, 0, 110, 202, 149, 148, 96, 137, 131, 142, 25, 175, 199, 87, 45, 143, 64, 156, 75, 37, 183, 133, 124, 141, 154, 29, 129, 53, 209, 167, 6, 83, 192, 195, 9, 140, 145, 66, 7};
    vector<int> size = {2, 8, 6, 7, 2, 4, 6, 4, 7, 4, 5, 3, 6, 8, 7, 5, 1, 8, 3, 2, 1, 4, 8, 3, 4, 8, 2, 2, 3, 8, 8, 4, 4, 5, 1, 2, 8, 2, 4, 4, 6, 1, 4, 3, 4, 5, 1, 3, 1, 2};
    int maxData = 1;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 213;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> offset = {168, 7, 91, 1154, 631, 792, 1254, 842, 918, 447, 607, 297, 981, 354, 542, 1233, 893, 1056, 135, 95, 49, 477, 496, 330, 271, 1142, 1167, 593, 732, 1092, 1188, 964, 242, 45, 0, 401, 741, 825, 912, 640, 1017, 693, 646, 572, 202, 1050, 714, 1113, 723, 1025};
    vector<int> size = {32, 30, 3, 13, 7, 31, 31, 47, 38, 22, 20, 25, 36, 46, 25, 19, 16, 28, 27, 37, 38, 14, 45, 21, 19, 9, 16, 6, 4, 17, 42, 16, 25, 2, 7, 43, 46, 10, 1, 2, 3, 18, 40, 20, 35, 4, 3, 25, 1, 20};
    int maxData = 6;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 199;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> offset = {345, 459, 323, 605, 188, 769, 554, 269, 675, 532, 98, 478, 669, 133, 835, 420, 695, 833, 762, 649, 619, 382, 52, 502, 19, 0, 714, 511, 264, 244, 737, 854, 330, 589, 389, 800, 360, 568, 353, 153, 179, 223, 65, 848, 434, 495, 37, 449, 288, 526};
    vector<int> size = {4, 16, 3, 12, 31, 29, 9, 19, 17, 18, 31, 13, 4, 16, 10, 10, 14, 2, 4, 20, 26, 3, 8, 9, 16, 17, 23, 15, 1, 19, 20, 15, 12, 11, 30, 29, 18, 18, 2, 22, 6, 20, 29, 2, 13, 5, 11, 10, 32, 3};
    int maxData = 4;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 197;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> offset = {90, 811, 423, 1524, 1174, 549, 1466, 309, 472, 1000, 390, 1067, 948, 1504, 935, 219, 502, 1146, 622, 1611, 1247, 1058, 178, 165, 570, 0, 858, 362, 135, 1366, 1272, 276, 1208, 1456, 1315, 940, 35, 888, 589, 1573, 149, 754, 661, 1292, 1125, 910, 719, 255, 1407, 399};
    vector<int> size = {36, 44, 44, 46, 26, 21, 34, 49, 26, 51, 7, 56, 52, 12, 3, 35, 46, 21, 31, 45, 22, 6, 41, 12, 14, 30, 25, 21, 8, 40, 11, 30, 37, 10, 50, 5, 51, 15, 26, 29, 10, 52, 53, 17, 14, 16, 29, 19, 47, 20};
    int maxData = 7;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 224;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> offset = {1193, 2066, 868, 1601, 723, 1210, 1575, 3, 39, 991, 1930, 1774, 1402, 2447, 1657, 1853, 2208, 267, 2136, 222, 2369, 683, 1433, 949, 552, 2289, 374, 1108, 93, 289, 152, 783, 1798, 1553, 2051, 671, 1749, 1979, 1333, 1076, 985, 1499, 1278, 1378, 0, 1415, 621, 1785, 522, 445};
    vector<int> size = {9, 63, 75, 45, 54, 62, 12, 24, 51, 77, 35, 7, 11, 2, 78, 77, 80, 11, 71, 45, 73, 40, 56, 32, 61, 74, 58, 75, 45, 73, 68, 76, 44, 22, 1, 3, 20, 68, 35, 29, 3, 49, 46, 15, 1, 9, 50, 8, 29, 67};
    int maxData = 10;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 229;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> offset = {1836, 393, 1447, 1561, 0, 4, 1485, 1633, 1265, 1544, 1327, 1233, 1036, 1905, 132, 2000, 137, 164, 1570, 42, 735, 1336, 1413, 97, 210, 582, 1530, 1682, 184, 842, 1215, 784, 1978, 514, 1182, 465, 713, 762, 1093, 1752, 1132, 333, 1384, 997, 1820, 658, 915, 284, 896, 922};
    vector<int> size = {59, 61, 33, 7, 2, 37, 44, 49, 53, 15, 8, 30, 53, 69, 1, 68, 17, 16, 57, 48, 22, 46, 30, 25, 63, 71, 12, 69, 23, 52, 17, 53, 17, 62, 28, 47, 18, 14, 29, 56, 40, 49, 23, 27, 12, 52, 2, 43, 12, 65};
    int maxData = 9;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 215;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> offset = {1457, 1270, 0, 255, 629, 170, 1340, 1722, 1924, 1892, 707, 1153, 2237, 546, 100, 850, 1362, 908, 1707, 1858, 1194, 623, 2072, 1179, 889, 465, 795, 588, 1782, 1064, 1517, 1425, 82, 1075, 1580, 2128, 1556, 2146, 1619, 1666, 357, 942, 272, 982, 42, 417, 1131, 146, 1990, 420};
    vector<int> size = {46, 58, 40, 6, 72, 74, 9, 59, 59, 29, 80, 13, 64, 42, 39, 28, 63, 33, 5, 32, 63, 1, 55, 10, 14, 77, 55, 26, 63, 10, 28, 22, 8, 42, 26, 10, 15, 80, 39, 35, 50, 32, 72, 80, 34, 2, 17, 18, 70, 34};
    int maxData = 10;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 209;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> offset = {1880, 929, 1698, 253, 1343, 825, 1921, 1722, 109, 169, 1465, 476, 718, 1624, 1511, 461, 0, 153, 737, 1817, 297, 667, 533, 984, 883, 1760, 1558, 1030, 186, 446, 1246, 1119, 362, 1207, 1068, 599, 228, 1672, 1968, 564, 31, 1402, 1286, 778, 373, 51, 1148, 395, 901, 1855};
    vector<int> size = {41, 53, 19, 35, 55, 58, 44, 27, 41, 8, 42, 53, 16, 48, 38, 4, 30, 16, 36, 29, 56, 43, 28, 37, 7, 57, 61, 32, 37, 5, 31, 21, 3, 35, 46, 62, 14, 17, 24, 25, 14, 57, 55, 47, 21, 54, 53, 43, 25, 17};
    int maxData = 8;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 231;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> offset = {1134, 1168, 88, 588, 617, 808, 457, 1097, 722, 186, 0, 11, 886, 966, 279, 996, 685, 912, 852, 302, 625, 123, 1175, 365, 268, 794, 556, 256, 443, 519, 46, 926, 761, 1041, 1062, 502, 643, 1057, 399, 1092, 251, 947, 37, 80, 332, 565, 1189, 209, 217, 144};
    vector<int> size = {34, 4, 35, 27, 8, 38, 40, 31, 37, 17, 6, 24, 23, 26, 19, 40, 32, 11, 33, 29, 13, 15, 11, 32, 10, 12, 9, 6, 13, 37, 34, 20, 32, 10, 27, 12, 39, 3, 40, 3, 1, 17, 7, 4, 32, 17, 13, 7, 34, 37};
    int maxData = 5;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 227;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> offset = {740, 61, 696, 518, 291, 302, 569, 315, 658, 451, 352, 150, 610, 684, 828, 373, 481, 827, 857, 703, 708, 784, 0, 50, 845, 118, 381, 325, 565, 209, 584, 221, 182, 82, 224, 662, 257, 771, 23, 802, 429, 368, 722, 280, 863, 492, 545, 413, 632, 11};
    vector<int> size = {31, 16, 6, 27, 8, 12, 13, 5, 1, 30, 11, 32, 17, 9, 17, 7, 10, 1, 4, 4, 10, 13, 7, 8, 9, 28, 31, 22, 2, 9, 26, 2, 24, 31, 29, 18, 21, 11, 27, 25, 19, 1, 14, 6, 14, 22, 19, 14, 26, 10};
    int maxData = 4;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 203;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> offset = {270, 527, 1017, 804, 1029, 255, 674, 1066, 861, 460, 611, 298, 409, 308, 198, 432, 577, 835, 652, 202, 722, 982, 944, 547, 393, 906, 335, 784, 356, 1082, 93, 505, 1070, 1106, 1149, 398, 0, 742, 96, 157, 29, 726, 416, 269, 244, 679, 844, 140, 475, 50};
    vector<int> size = {26, 14, 7, 26, 31, 12, 2, 1, 40, 14, 36, 6, 2, 22, 3, 24, 28, 3, 20, 40, 4, 32, 38, 25, 5, 33, 19, 14, 31, 24, 2, 19, 6, 40, 35, 6, 25, 37, 40, 37, 20, 10, 14, 1, 7, 39, 11, 15, 29, 37};
    int maxData = 5;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 218;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> offset = {1456, 1131, 1889, 2303, 1958, 2150, 659, 2083, 1912, 2228, 2075, 1586, 924, 1155, 231, 1038, 2207, 70, 0, 1402, 357, 1662, 828, 1637, 1322, 581, 905, 2035, 105, 522, 87, 1439, 130, 491, 1197, 1140, 1110, 757, 732, 1870, 1821, 1280, 1727, 1780, 150, 295, 858, 991, 1525, 427};
    vector<int> size = {61, 9, 22, 72, 72, 47, 61, 55, 46, 63, 5, 43, 66, 39, 57, 68, 18, 16, 65, 31, 67, 64, 23, 24, 70, 68, 10, 40, 17, 47, 16, 11, 20, 31, 72, 5, 19, 62, 20, 16, 45, 35, 46, 37, 69, 52, 43, 44, 58, 64};
    int maxData = 9;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 249;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> offset = {360, 196, 426, 382, 587, 510, 466, 667, 613, 265, 648, 709, 220, 0, 635, 577, 530, 402, 554, 622, 291, 318, 50, 124, 40, 496, 177, 338, 258, 77, 608, 309, 692, 106, 168, 502, 116, 491, 130, 15, 367, 673, 237, 86, 94, 153, 450, 71, 457, 411};
    vector<int> size = {5, 22, 22, 18, 18, 18, 22, 6, 7, 24, 18, 23, 16, 15, 12, 7, 21, 6, 22, 12, 18, 18, 20, 5, 10, 3, 16, 21, 5, 6, 4, 6, 16, 9, 6, 5, 5, 5, 20, 23, 14, 16, 21, 8, 10, 15, 4, 5, 6, 14};
    int maxData = 3;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 226;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> offset = {1133, 288, 1563, 1389, 0, 17, 1329, 2160, 1515, 1444, 655, 584, 574, 1059, 768, 515, 64, 1177, 633, 952, 305, 1622, 1954, 358, 391, 1030, 651, 1255, 2035, 672, 1825, 750, 1545, 2124, 137, 905, 1789, 412, 1879, 147, 2106, 210, 481, 841, 1650, 1760, 447, 1728, 1661, 990};
    vector<int> size = {37, 16, 55, 45, 8, 47, 50, 69, 30, 68, 8, 40, 7, 71, 72, 55, 66, 69, 6, 33, 45, 21, 71, 30, 9, 20, 4, 69, 69, 71, 53, 11, 15, 29, 8, 47, 30, 29, 65, 62, 16, 67, 27, 63, 3, 22, 31, 26, 64, 40};
    int maxData = 9;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 235;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> offset = {249, 1427, 1046, 1188, 993, 1398, 903, 713, 513, 1850, 2209, 909, 294, 466, 758, 827, 2139, 187, 59, 1696, 2373, 2533, 1195, 136, 357, 1515, 2065, 2071, 522, 547, 2292, 1121, 826, 1387, 1254, 2456, 562, 1616, 1763, 1550, 425, 2343, 732, 1935, 1330, 1025, 633, 2013, 0, 940};
    vector<int> size = {34, 75, 63, 3, 30, 22, 4, 5, 3, 75, 75, 22, 61, 37, 55, 76, 58, 58, 72, 62, 80, 33, 58, 46, 60, 34, 2, 57, 21, 12, 45, 57, 1, 6, 76, 77, 61, 68, 78, 55, 27, 29, 13, 75, 50, 9, 73, 43, 57, 51};
    int maxData = 2000000000;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> offset = {406894957, 0, 529193604, 707660424, 311634371, 950442515, 108739409, 990744646, 832438477};
    vector<int> size = {53842378, 15128057, 37278354, 65028061, 37340766, 16062987, 63327752, 16829157, 70089660};
    int maxData = 1243099099;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> offset = {462848457, 915322304, 0, 837987219, 682664192, 342881865, 206869033};
    vector<int> size = {26512881, 5952803, 64626881, 26090530, 15201747, 25005380, 19589468};
    int maxData = 1713406736;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> offset = {342467049, 568192749, 0, 664609968, 850403389, 173763443, 416949542};
    vector<int> size = {2300277, 6219482, 50896875, 58656066, 63948384, 37685464, 29279285};
    int maxData = 1337926100;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> offset = {281985367, 174467019, 529975269, 0, 354059653, 900986532, 750362590};
    vector<int> size = {3474779, 404054, 70595004, 24508266, 32375315, 57444637, 18951788};
    int maxData = 1324792001;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> offset = {0, 94141070, 538109245, 369932424, 724094226, 929836838, 225964561};
    vector<int> size = {43000933, 39938857, 28359462, 78994233, 34728696, 69840715, 57073099};
    int maxData = 1243145435;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> offset = {0, 449974984, 191773728, 86251808, 327590391, 845855444, 671630963};
    vector<int> size = {19128475, 74812758, 21937550, 46706150, 49002386, 40446541, 36070834};
    int maxData = 1183595946;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> offset = {479504954, 208301028, 497570232, 787382793, 843144134, 0, 708529726, 350100071, 319884610};
    vector<int> size = {6235113, 53718987, 73035982, 24149241, 16148279, 58557364, 39220730, 51982833, 28985839};
    int maxData = 1914309992;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> offset = {0, 983312374, 766291157, 125275496, 589104702, 402281929, 192746246};
    vector<int> size = {29228140, 47137272, 62414164, 58577335, 48252453, 30077569, 28132534};
    int maxData = 1444196433;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> offset = {152956530, 992467557, 763460707, 644467990, 837494701, 225995118, 0, 448626906};
    vector<int> size = {61679342, 25820820, 72546358, 25980030, 14090079, 62546492, 64897044, 418060};
    int maxData = 1005829822;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> offset = {302149220, 492784113, 0, 230761895, 767522701, 570711832, 931474195};
    vector<int> size = {20363197, 9914006, 49375583, 43359901, 29328590, 23859739, 25453071};
    int maxData = 1007057958;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> offset = {406894957, 0, 529193604, 707660424, 311634371, 950442515, 108739409, 990744646, 832438477};
    vector<int> size = {53842378, 15128057, 37278354, 65028061, 37340766, 16062987, 63327752, 16829157, 70089660};
    int maxData = 243099099;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> offset = {462848457, 915322304, 0, 837987219, 682664192, 342881865, 206869033};
    vector<int> size = {26512881, 5952803, 64626881, 26090530, 15201747, 25005380, 19589468};
    int maxData = 713406736;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> offset = {342467049, 568192749, 0, 664609968, 850403389, 173763443, 416949542};
    vector<int> size = {2300277, 6219482, 50896875, 58656066, 63948384, 37685464, 29279285};
    int maxData = 337926100;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> offset = {281985367, 174467019, 529975269, 0, 354059653, 900986532, 750362590};
    vector<int> size = {3474779, 404054, 70595004, 24508266, 32375315, 57444637, 18951788};
    int maxData = 324792001;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> offset = {0, 94141070, 538109245, 369932424, 724094226, 929836838, 225964561};
    vector<int> size = {43000933, 39938857, 28359462, 78994233, 34728696, 69840715, 57073099};
    int maxData = 243145435;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> offset = {479504954, 208301028, 497570232, 787382793, 843144134, 0, 708529726, 350100071, 319884610};
    vector<int> size = {6235113, 53718987, 73035982, 24149241, 16148279, 58557364, 39220730, 51982833, 28985839};
    int maxData = 314309991;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> offset = {0, 983312374, 766291157, 125275496, 589104702, 402281929, 192746246};
    vector<int> size = {29228140, 47137272, 62414164, 58577335, 48252453, 30077569, 28132534};
    int maxData = 444196433;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> offset = {406894957, 0, 529193604, 707660424, 311634371, 950442515, 108739409, 990744646, 832438477};
    vector<int> size = {53842378, 15128057, 37278354, 65028061, 37340766, 16062987, 63327752, 16829157, 70089660};
    int maxData = 43099097;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> offset = {462848457, 915322304, 0, 837987219, 682664192, 342881865, 206869033};
    vector<int> size = {26512881, 5952803, 64626881, 26090530, 15201747, 25005380, 19589468};
    int maxData = 13406729;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> offset = {342467049, 568192749, 0, 664609968, 850403389, 173763443, 416949542};
    vector<int> size = {2300277, 6219482, 50896875, 58656066, 63948384, 37685464, 29279285};
    int maxData = 37926097;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
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
    vector<int> offset = {281985367, 174467019, 529975269, 0, 354059653, 900986532, 750362590};
    vector<int> size = {3474779, 404054, 70595004, 24508266, 32375315, 57444637, 18951788};
    int maxData = 24791998;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> offset = {0, 94141070, 538109245, 369932424, 724094226, 929836838, 225964561};
    vector<int> size = {43000933, 39938857, 28359462, 78994233, 34728696, 69840715, 57073099};
    int maxData = 43145433;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> offset = {0, 449974984, 191773728, 86251808, 327590391, 845855444, 671630963};
    vector<int> size = {19128475, 74812758, 21937550, 46706150, 49002386, 40446541, 36070834};
    int maxData = 83595945;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> offset = {479504954, 208301028, 497570232, 787382793, 843144134, 0, 708529726, 350100071, 319884610};
    vector<int> size = {6235113, 53718987, 73035982, 24149241, 16148279, 58557364, 39220730, 51982833, 28985839};
    int maxData = 14309983;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> offset = {0, 983312374, 766291157, 125275496, 589104702, 402281929, 192746246};
    vector<int> size = {29228140, 47137272, 62414164, 58577335, 48252453, 30077569, 28132534};
    int maxData = 44196429;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> offset = {152956530, 992467557, 763460707, 644467990, 837494701, 225995118, 0, 448626906};
    vector<int> size = {61679342, 25820820, 72546358, 25980030, 14090079, 62546492, 64897044, 418060};
    int maxData = 5829822;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> offset = {302149220, 492784113, 0, 230761895, 767522701, 570711832, 931474195};
    vector<int> size = {20363197, 9914006, 49375583, 43359901, 29328590, 23859739, 25453071};
    int maxData = 7057949;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> offset = {406894957, 0, 529193604, 707660424, 311634371, 950442515, 108739409, 990744646, 832438477};
    vector<int> size = {53842378, 15128057, 37278354, 65028061, 37340766, 16062987, 63327752, 16829157, 70089660};
    int maxData = 3099075;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 126;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> offset = {462848457, 915322304, 0, 837987219, 682664192, 342881865, 206869033};
    vector<int> size = {26512881, 5952803, 64626881, 26090530, 15201747, 25005380, 19589468};
    int maxData = 3406665;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> offset = {342467049, 568192749, 0, 664609968, 850403389, 173763443, 416949542};
    vector<int> size = {2300277, 6219482, 50896875, 58656066, 63948384, 37685464, 29279285};
    int maxData = 7926067;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> offset = {406894957, 0, 529193604, 707660424, 311634371, 950442515, 108739409, 990744646, 832438477};
    vector<int> size = {53842378, 15128057, 37278354, 65028061, 37340766, 16062987, 63327752, 16829157, 70089660};
    int maxData = 4;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 93731797;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> offset = {462848457, 915322304, 0, 837987219, 682664192, 342881865, 206869033};
    vector<int> size = {26512881, 5952803, 64626881, 26090530, 15201747, 25005380, 19589468};
    int maxData = 1;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 182979690;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> offset = {342467049, 568192749, 0, 664609968, 850403389, 173763443, 416949542};
    vector<int> size = {2300277, 6219482, 50896875, 58656066, 63948384, 37685464, 29279285};
    int maxData = 1;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 248985833;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> offset = {281985367, 174467019, 529975269, 0, 354059653, 900986532, 750362590};
    vector<int> size = {3474779, 404054, 70595004, 24508266, 32375315, 57444637, 18951788};
    int maxData = 2;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 103876923;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> offset = {0, 94141070, 538109245, 369932424, 724094226, 929836838, 225964561};
    vector<int> size = {43000933, 39938857, 28359462, 78994233, 34728696, 69840715, 57073099};
    int maxData = 4;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 87984002;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> offset = {0, 1000000000};
    vector<int> size = {1000000000, 1000000000};
    int maxData = 1;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> offset = {0, 10, 20, 30};
    vector<int> size = {8, 5, 3, 11};
    int maxData = 6;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> offset = {77, 7777, 777};
    vector<int> size = {700, 70000, 7000};
    int maxData = 1;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 77700;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> offset = {1};
    vector<int> size = {1};
    int maxData = 1;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> offset = {0, 15, 22, 100, 129, 200, 230};
    vector<int> size = {10, 5, 3, 29, 1, 29, 1};
    int maxData = 30;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> offset = {999999999, 1000000000};
    vector<int> size = {1, 1000000000};
    int maxData = 2000000000;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> offset = {0, 1000000000};
    vector<int> size = {1000000000, 1000000000};
    int maxData = 1500000000;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> offset = {0, 10, 20, 30};
    vector<int> size = {8, 2, 3, 11};
    int maxData = 6;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> offset = {10, 0, 20, 30};
    vector<int> size = {5, 8, 3, 11};
    int maxData = 6;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> offset = {10, 100};
    vector<int> size = {90, 1};
    int maxData = 100;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> offset = {10, 20, 40, 30};
    vector<int> size = {4, 4, 4, 4};
    int maxData = 3;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> offset = {1, 1000000000};
    vector<int> size = {999999999, 1000000000};
    int maxData = 1;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999999;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> offset = {50000000, 49000000, 48000000, 47000000, 46000000, 45000000, 44000000, 43000000, 42000000, 41000000, 40000000, 39000000, 38000000, 37000000, 36000000, 35000000, 34000000, 33000000, 32000000, 31000000, 30000000, 29000000, 28000000, 27000000, 26000000, 25000000, 24000000, 23000000, 22000000, 21000000, 20000000, 19000000, 18000000, 17000000, 16000000, 15000000, 14000000, 13000000, 12000000, 11000000, 10000000, 9000000, 8000000, 7000000, 5000000, 4000000, 3000000, 2000000, 1000000};
    vector<int> size = {1000000, 990000, 980000, 970000, 960000, 950000, 940000, 930000, 920000, 910000, 900000, 890000, 880000, 870000, 860000, 850000, 840000, 830000, 820000, 810000, 800000, 790000, 780000, 770000, 760000, 750000, 740000, 730000, 720000, 710000, 700000, 690000, 680000, 670000, 660000, 650000, 640000, 630000, 620000, 610000, 600000, 590000, 580000, 570000, 560000, 550000, 540000, 530000, 520000};
    int maxData = 750000;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> offset = {0, 10, 20};
    vector<int> size = {1, 1, 1};
    int maxData = 30;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> offset = {2000, 0};
    vector<int> size = {1000, 1000};
    int maxData = 1000;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> offset = {0, 8, 21, 49, 61};
    vector<int> size = {7, 12, 4, 7, 20};
    int maxData = 50;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> offset = {1};
    vector<int> size = {1000000000};
    int maxData = 1;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> offset = {15, 95, 300};
    vector<int> size = {1, 20, 200};
    int maxData = 1000;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> offset = {100, 200, 110};
    vector<int> size = {10, 10, 10};
    int maxData = 30;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> offset = {0, 10, 11};
    vector<int> size = {1, 1, 1};
    int maxData = 2;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> offset = {0, 1000000000};
    vector<int> size = {1000000000, 1000000000};
    int maxData = 2000000000;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> offset = {0, 10, 20, 30};
    vector<int> size = {8, 5, 3, 11};
    int maxData = 100000000;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> offset = {1, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000, 13000, 14000, 15000, 16000, 17000, 18000, 19000, 30000, 41111, 51111, 61111, 71111, 81111, 91111, 101111, 111111, 121111, 131111};
    vector<int> size = {1, 8, 7, 9, 5, 8, 9, 8, 9, 7, 8, 88, 89, 89, 87, 45, 36, 89, 45, 12, 54, 45, 78, 54, 54, 65, 99, 98, 45, 46, 45, 74, 456, 897, 897, 456, 987, 798, 897, 468};
    int maxData = 1111;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> offset = {0, 2, 50};
    vector<int> size = {1, 1, 100};
    int maxData = 10;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> offset = {30, 20, 10, 0, 50, 100, 200, 900000000, 900000010, 900000020, 900000030, 900000050, 900000060, 900000070, 900000090, 900000110, 900000120, 900000130, 900000140, 900000150, 900000160, 900000170, 900000180, 900000190, 900000200};
    vector<int> size = {11, 3, 2, 8, 49, 96, 899999797, 7, 1, 8, 11, 9, 8, 18, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1};
    int maxData = 6;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 150000021;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> offset = {0, 5, 9};
    vector<int> size = {2, 2, 2};
    int maxData = 2;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> offset = {0, 999999997, 999999999};
    vector<int> size = {499999998, 1, 1000000000};
    int maxData = 499999997;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> offset = {100, 1, 10};
    vector<int> size = {1000, 5, 2};
    int maxData = 6;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 169;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> offset = {1000000000};
    vector<int> size = {100000};
    int maxData = 2000000000;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> offset = {4};
    vector<int> size = {4};
    int maxData = 4;
    ProgrammingDevice* pObj = new ProgrammingDevice();
    clock_t start = clock();
    int result = pObj->minPackets(offset, size, maxData);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22376958&rd=10783&pm=8212
********************************************************************************
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <sstream>
#include <map>
#include <queue>
#include <cstdlib>
 
#define min(a, b) (a > b ? b : a)
#define max(a, b) (a > b ? a : b)
 
#define MAX 1024
using namespace std;
vector <pair <long long, long long> > a;
 
class ProgrammingDevice
        {
        public:
        int minPackets(vector <int> offset, vector <int> size, int maxData)
            {
            int i;
            int ans = 0;
            long long add, upto = -1;
            
            a.clear();
            
            for (i=0; i<(int)offset.size(); i++)
                {
                a.push_back(make_pair(offset[i], size[i]));
                }
            sort(a.begin(), a.end());
            
            for (i=0; i<(int)a.size(); i++)
                {
                if (a[i].first + a[i].second < upto) continue;
                
                add = (a[i].first + a[i].second - max(upto, a[i].first) + maxData - 1) / maxData;
                ans += add;
//                cout << "Sending " << add << " packets from " << upto << endl;
                upto = max(upto, (long long)a[i].first) + (long long)maxData * add;
                }
            
            return ans;
            }
        // end of minPackets
 
 
        };
 
// Powered by PopsEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/