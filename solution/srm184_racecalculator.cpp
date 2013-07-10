/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2250
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

class RaceCalculator {
public:
    int bestRace(vector<int> distances, vector<int> times);
};

int RaceCalculator::bestRace(vector<int> distances, vector<int> times) {
    int ret;
    return ret;
}


int test0() {
    vector<int> distances = {1600, 3200, 16000};
    vector<int> times = {299, 655, 4020};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> distances = {1600, 2000, 3200, 3000, 5000, 9600};
    vector<int> times = {234, 306, 499, 462, 802, 1629};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> distances = {1000, 2000, 3000, 4000};
    vector<int> times = {160, 330, 510, 750};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> distances = {1000, 50000, 10000, 5000};
    vector<int> times = {200, 70010, 2250, 1080};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> distances = {81726, 89673, 85728, 81002, 87683, 83445, 82600, 88405, 83704, 86984, 86025, 80974, 84320, 89155, 86248, 90064, 83888, 89949, 86955, 83725, 87128, 88473, 90002, 79145, 84877, 80055};
    vector<int> times = {1273, 1467, 1374, 1254, 1421, 1337, 1299, 1432, 1341, 1405, 1379, 1253, 1349, 1460, 1395, 1486, 1344, 1483, 1403, 1342, 1411, 1433, 1485, 1212, 1360, 1241};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> distances = {47392, 45524, 43847, 44793, 44723, 46402, 50800, 49937, 49044, 48873, 48105};
    vector<int> times = {3122, 3084, 3044, 3057, 3056, 3095, 3339, 3182, 3162, 3157, 3145};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> distances = {36681, 28173, 34994, 36573, 34287, 32418, 27248, 36260, 33681, 38323, 28650, 29468, 31956, 31138, 35310, 27607, 29510, 37681, 33238, 27657, 30370, 35134, 32591, 37284, 31309};
    vector<int> times = {4051, 3808, 4014, 4048, 3991, 3943, 3784, 4034, 3966, 4347, 3818, 3841, 3929, 3875, 4019, 3799, 3842, 4333, 3952, 3801, 3854, 4017, 3945, 4326, 3885};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> distances = {71186, 81079, 78891, 84379, 90129, 76698, 81725, 88749, 93974, 78848, 80433, 93396, 78084, 73623, 85126, 89731, 72570, 86421, 88293, 91083, 83868, 82955, 92199, 81928, 71902, 87330, 78321, 79443, 91840, 75109, 79720, 81181, 92268, 74829, 81134, 82623, 85567, 93804, 71613, 76012, 74299, 78005, 72702, 77008, 92403, 86810};
    vector<int> times = {79095, 79616, 79570, 79729, 80039, 79297, 79631, 79816, 80242, 79569, 79607, 80232, 79556, 79247, 79740, 79839, 79205, 79767, 79799, 80160, 79722, 79700, 80208, 79638, 79195, 79785, 79563, 79584, 80178, 79274, 79588, 79620, 80210, 79271, 79619, 79694, 79752, 80239, 79101, 79284, 79257, 79549, 79207, 79519, 80215, 79772};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> distances = {25972, 26595, 26823};
    vector<int> times = {483, 503, 510};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
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
    vector<int> distances = {61716, 64242, 74454, 58405, 62281, 68906, 70684, 67526, 73288, 61381, 72311, 69328, 73840, 73174, 72543, 64546, 68235, 70643, 74419, 72133, 69733, 72082, 68307, 61973, 65351, 64530, 62803, 60828, 63324, 58532, 65666, 59434, 66631, 71410, 59992, 68311, 71028};
    vector<int> times = {10306, 10490, 11010, 10246, 10325, 10571, 10607, 10551, 10993, 10296, 10696, 10576, 10999, 10988, 10890, 10495, 10560, 10606, 11009, 10693, 10584, 10691, 10562, 10321, 10512, 10494, 10374, 10288, 10431, 10250, 10518, 10263, 10531, 10673, 10279, 10563, 10618};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> distances = {85807, 84549, 84336, 85509, 86760, 86623, 84675};
    vector<int> times = {1303, 1278, 1176, 1299, 1317, 1313, 1281};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> distances = {69112, 69010, 68072};
    vector<int> times = {6442, 6433, 6245};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
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
    vector<int> distances = {85211, 86767, 87086, 86253, 86098, 88024};
    vector<int> times = {1439, 1523, 1528, 1506, 1497, 1545};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
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
    vector<int> distances = {10535, 10867, 8927, 9682, 11200};
    vector<int> times = {422, 428, 405, 413, 443};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
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
    vector<int> distances = {66158, 62487, 62198, 64011, 66314, 66315, 61215, 61300, 65329, 64696, 66629, 63977, 63040, 67116};
    vector<int> times = {6355, 6259, 6206, 6292, 6369, 6370, 6183, 6189, 6328, 6300, 6685, 6290, 6268, 6757};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> distances = {93630, 86375, 96033, 91136, 95441, 79367, 88437, 94991, 87780, 92068, 82041, 90141, 83899, 85881, 79000, 83321, 92229, 85045, 78422, 84778, 81197, 81655, 95707, 82477, 89273, 94125, 80904, 79943, 93219, 86568, 80148, 87087};
    vector<int> times = {1879, 1727, 1941, 1815, 1932, 1378, 1760, 1917, 1748, 1846, 1498, 1784, 1542, 1674, 1325, 1528, 1854, 1621, 1315, 1608, 1480, 1493, 1936, 1512, 1769, 1896, 1474, 1395, 1866, 1730, 1442, 1736};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> distances = {56581, 56724, 57594, 55717, 56469, 56748, 55274};
    vector<int> times = {919, 924, 941, 875, 916, 925, 870};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> distances = {60729, 60732, 70916, 69460, 58853, 64543, 57051, 63061, 65576, 67211, 63688, 66501, 65413, 57937, 70118, 68064, 59439, 66441, 69323, 68550, 56904, 62272, 70075, 61312, 60213, 55915};
    vector<int> times = {8306, 8307, 8791, 8753, 8268, 8390, 8136, 8364, 8541, 8702, 8373, 8673, 8538, 8160, 8763, 8711, 8286, 8671, 8728, 8716, 8120, 8354, 8762, 8335, 8294, 8103};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> distances = {32013, 33778, 30690, 31887, 34366, 35188, 33070, 36025, 29832, 32846, 28835, 30432, 30252, 31522, 32376, 32654};
    vector<int> times = {5834, 5884, 5803, 5821, 5891, 6050, 5869, 6063, 5780, 5865, 5653, 5792, 5789, 5816, 5841, 5861};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> distances = {29734, 27792, 32115, 28419, 30535, 26919, 26632, 26648, 31149, 31191, 29378, 29477};
    vector<int> times = {686, 557, 764, 664, 720, 545, 541, 542, 749, 752, 678, 680};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> distances = {45174, 41244, 41771, 54115, 42903, 51286, 56331, 51434, 54379, 53477, 46701, 50431, 52604, 44807, 51399, 52287, 43848, 49414, 47807, 55397, 48450, 47850, 55304, 45064, 57423, 47166, 45791, 47274, 49462, 46729, 56833, 53045, 47702, 42619};
    vector<int> times = {4821, 4686, 4725, 5083, 4750, 5034, 5130, 5037, 5087, 5075, 4845, 5022, 5053, 4795, 5036, 5049, 4783, 4959, 4873, 5109, 4947, 4875, 5106, 4818, 5163, 4858, 4834, 4865, 4966, 4848, 5156, 5058, 4871, 4743};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> distances = {80604, 75962, 78394, 81316, 74435, 79025, 82084, 78709, 79081, 74961, 73772, 76321, 73971, 77600, 83024, 75698, 73473, 80956, 80043, 77225};
    vector<int> times = {1552, 1414, 1463, 1564, 1382, 1497, 1576, 1470, 1498, 1391, 1367, 1419, 1370, 1452, 1593, 1406, 1358, 1557, 1511, 1432};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> distances = {19202, 13093, 15636, 9157, 13746, 16509, 11440, 13308, 12221, 18837, 10667, 15881, 14461, 13325, 14062, 9302, 15352, 11010, 16283, 17432, 10186, 18148};
    vector<int> times = {673, 490, 559, 322, 516, 574, 430, 493, 446, 661, 350, 565, 531, 494, 524, 328, 555, 421, 571, 626, 343, 635};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> distances = {86743, 87797, 72528, 80965, 84520, 77845, 85211, 78710, 73676, 75287, 82798, 86025, 82259, 81918, 73029, 82636, 86540, 73440, 78193, 74381, 79032, 87650, 79319, 80261, 76260, 72512, 77190, 84313, 83327, 71607, 83021, 79516, 76524, 75025};
    vector<int> times = {2439, 2469, 2044, 2281, 2406, 2196, 2414, 2230, 2071, 2119, 2369, 2428, 2359, 2340, 2053, 2363, 2435, 2064, 2201, 2094, 2235, 2466, 2243, 2258, 2167, 2043, 2186, 2402, 2382, 2028, 2378, 2246, 2171, 2115};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> distances = {41849, 40946, 40471, 42487};
    vector<int> times = {1829, 1808, 1798, 1840};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> distances = {32080, 28876, 37863, 34565, 38835, 33685, 42997, 40870, 39348, 38249, 31246, 27926, 42013, 40399, 40240, 31624, 25851, 29518, 32977, 35580, 29814, 38379, 37327, 25314, 26426, 24849, 27060, 34914, 33345, 30594, 36472, 41729};
    vector<int> times = {1583, 1335, 1704, 1634, 1724, 1618, 1811, 1772, 1748, 1708, 1532, 1299, 1793, 1767, 1764, 1555, 1192, 1409, 1605, 1654, 1475, 1710, 1683, 1183, 1245, 1177, 1289, 1640, 1614, 1522, 1671, 1789};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> distances = {63091, 51070, 49134, 62942, 48695, 56941, 60036, 58135, 46935, 53173, 53459, 55877, 46079, 54288, 50299, 54705, 52012, 57610, 55065, 47435, 47770, 52872, 59053, 49903, 56225, 49955, 60714, 52100, 62044, 61698, 57245, 56202, 59257, 52555};
    vector<int> times = {3201, 2805, 2732, 3197, 2718, 3032, 3097, 3056, 2655, 2877, 2888, 3000, 2204, 2905, 2793, 2968, 2844, 3045, 2988, 2662, 2667, 2864, 3078, 2787, 3005, 2789, 3156, 2846, 3183, 3169, 3038, 3004, 3081, 2858};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> distances = {29169, 25027, 20664, 23882, 28020, 16976, 27295, 25714, 17682, 28433, 28155, 18763, 19973, 21293, 28318, 24511, 25763, 26318, 22371, 19562, 17797, 22313, 22152, 23199, 25751, 23507, 24819};
    vector<int> times = {1451, 1336, 1245, 1319, 1414, 1109, 1400, 1361, 1131, 1441, 1416, 1202, 1220, 1252, 1434, 1327, 1363, 1374, 1269, 1215, 1134, 1267, 1265, 1299, 1362, 1315, 1332};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> distances = {15743, 18865, 18453, 15287, 15194, 17381, 17669, 16522};
    vector<int> times = {6943, 7112, 7059, 6915, 6906, 7046, 7050, 6957};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> distances = {71054, 72053, 71174};
    vector<int> times = {713, 739, 717};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> distances = {73493, 74449, 73631, 72950, 73564, 74163};
    vector<int> times = {1189, 1234, 1194, 1178, 1192, 1229};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> distances = {87187, 79523, 81819, 82472, 82447, 81397, 85468, 81015, 83130, 82069, 82905, 84742, 82224, 87806, 77826, 84729, 80208, 88613, 86682, 88928, 87953, 84641, 78706, 83763, 81105, 86089};
    vector<int> times = {3372, 3078, 3145, 3171, 3165, 3138, 3352, 3112, 3184, 3157, 3181, 3344, 3161, 3394, 3004, 3343, 3086, 3407, 3365, 3415, 3396, 3338, 3024, 3194, 3116, 3359};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> distances = {82531, 81873, 84685, 83396, 84121, 82139, 85147};
    vector<int> times = {1706, 1688, 1831, 1726, 1804, 1700, 1837};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> distances = {13438, 12814, 13677, 13587, 13274, 15125, 14201};
    vector<int> times = {651, 637, 656, 654, 643, 796, 784};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> distances = {92613, 94170, 91411, 93608, 85256, 85423, 87436, 84806, 89571, 87828, 86470, 94302, 92504, 88828, 90438, 91535, 85682, 86508};
    vector<int> times = {5638, 5662, 5610, 5649, 5145, 5156, 5226, 5139, 5583, 5239, 5214, 5666, 5633, 5259, 5593, 5612, 5163, 5215};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> distances = {54432, 53466, 52464, 57641, 64217, 64963, 51889, 56050, 56587, 61245, 51467, 54383, 57989, 66518, 52010, 63651, 52996, 65643, 55958, 59320, 60664, 53530, 55281, 52646, 57053, 65868, 67366, 62232, 51952, 59697, 59285, 62804, 60438, 58646};
    vector<int> times = {3063, 3047, 3008, 3174, 3420, 3432, 2998, 3126, 3142, 3341, 2992, 3062, 3182, 3454, 3002, 3412, 3027, 3441, 3121, 3221, 3325, 3049, 3110, 3011, 3147, 3447, 3468, 3357, 3000, 3284, 3218, 3368, 3320, 3200};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> distances = {46441, 45428, 45710};
    vector<int> times = {487, 469, 473};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> distances = {63641, 85307, 68906, 66830, 69377, 61841, 70180, 71151, 82193, 75302, 67449, 79525, 62161, 77596, 64346, 86175, 75622, 86206, 72714, 73868, 66431, 63245, 82780, 72410, 83742, 68000, 78527, 84599, 60785, 74646, 62836, 80655, 77076, 65038, 72043, 81541, 60934, 67632, 82076, 71139, 73208, 66200, 74724, 65695, 79775, 81926, 76154, 70233};
    vector<int> times = {5379, 6771, 5526, 5462, 5533, 5211, 5559, 5572, 6452, 5938, 5490, 6130, 5227, 6054, 5397, 6916, 5976, 6917, 5744, 5767, 5442, 5371, 6536, 5735, 6750, 5498, 6074, 6763, 5195, 5926, 5282, 6271, 6017, 5412, 5582, 6417, 5199, 5493, 6450, 5571, 5759, 5435, 5927, 5422, 6135, 6432, 5986, 5561};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> distances = {29053, 28081, 30219, 29422, 29331, 30497, 30783, 29261, 27479, 28316};
    vector<int> times = {513, 498, 565, 524, 522, 572, 579, 516, 489, 504};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> distances = {16880, 17984, 17079};
    vector<int> times = {338, 357, 341};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> distances = {41580, 40388, 42320, 37661, 43633, 46607, 47939, 43293, 46309, 37945, 43693, 48330, 38716, 49108, 45073, 45788, 36808, 48759, 47289, 42036, 44292, 37989, 41138, 39564, 45224};
    vector<int> times = {1620, 1606, 1642, 1531, 1663, 1785, 1835, 1656, 1778, 1541, 1664, 1840, 1580, 1857, 1724, 1741, 1520, 1846, 1826, 1627, 1710, 1544, 1614, 1590, 1726};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> distances = {43865, 45596, 39659, 42358, 42577, 44793, 45855, 40232, 43336, 41935, 40030, 41042, 41860};
    vector<int> times = {4886, 4912, 4174, 4446, 4450, 4898, 4945, 4191, 4479, 4430, 4184, 4417, 4429};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> distances = {43295, 43237, 43286};
    vector<int> times = {43242, 43237, 43241};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> distances = {36784, 36539, 36088};
    vector<int> times = {508, 505, 481};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> distances = {36140, 29738, 26182, 30386, 18135, 25357, 16536, 37898, 34628, 26239, 43033, 34415, 32382, 35544, 24485, 31142, 24282, 19692, 42516, 42308, 41673, 33273, 28211, 15568, 20954, 28191, 39496, 26335, 22603, 17441, 23477, 29081, 31527, 21905, 21818, 18715, 37116, 20639, 23258, 16808, 28023, 40008, 14745, 38505, 38025, 40789, 27106, 19553, 34138};
    vector<int> times = {7782, 7517, 7427, 7530, 7118, 7417, 7044, 7830, 7760, 7431, 8139, 7756, 7577, 7773, 7379, 7541, 7376, 7143, 8131, 8118, 8111, 7587, 7499, 7030, 7315, 7498, 8078, 7432, 7343, 7108, 7360, 7510, 7559, 7331, 7325, 7127, 7793, 7157, 7357, 7053, 7495, 8088, 7021, 7867, 7832, 8101, 7478, 7140, 7602};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> distances = {75619, 74230, 74342, 75025};
    vector<int> times = {931, 898, 904, 919};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
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
    vector<int> distances = {93244, 86660, 97093, 81171, 98321, 96375, 88624, 97164, 93326, 95023, 83354, 87500, 98091, 89908, 89339, 85309, 92391, 85628, 84595, 90025, 90585, 88144, 86981, 92554, 98638, 82487, 81551, 89975, 94423, 84196, 92151, 98144, 97766, 98371, 91223, 94215, 86209, 95968};
    vector<int> times = {18833, 18593, 19014, 18447, 19038, 18983, 18677, 19018, 18835, 18900, 18494, 18644, 19033, 18759, 18716, 18529, 18820, 18535, 18520, 18763, 18777, 18657, 18608, 18823, 19045, 18482, 18455, 18761, 18886, 18513, 18817, 19035, 19026, 19041, 18789, 18870, 18585, 18910};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> distances = {32186, 31427, 32696, 30514, 29942, 32766};
    vector<int> times = {539, 530, 546, 505, 482, 548};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> distances = {18764, 25333, 17553, 22169, 23211, 27084, 20269, 24055, 27192, 20513, 25082, 25919, 23745, 20105, 23091, 19701, 17754, 17059, 27486, 18212, 27978, 25446, 21429, 25167, 24800, 24438, 27695, 16206, 24765, 26603};
    vector<int> times = {20383, 21116, 20340, 20596, 20943, 21209, 20444, 21063, 21213, 20450, 21099, 21147, 20979, 20433, 20904, 20420, 20343, 20334, 21218, 20350, 21224, 21118, 20478, 21107, 21093, 21072, 21221, 20257, 21092, 21203};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> distances = {12107, 11367, 12434};
    vector<int> times = {324, 304, 329};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
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
    vector<int> distances = {88576, 88916, 87943, 87380, 86619};
    vector<int> times = {1405, 1422, 1372, 1353, 1334};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> distances = {34807, 32048, 39595, 33527, 31369, 32024, 39764, 31772, 38498, 34497, 41331, 31437, 36610, 37934, 35671, 42149, 37592, 40728, 32742, 41886, 39376, 38824, 33747, 34971, 39325, 38278, 33418};
    vector<int> times = {854, 643, 928, 795, 603, 642, 933, 636, 907, 847, 964, 604, 882, 899, 868, 989, 895, 957, 729, 982, 925, 911, 800, 857, 923, 904, 792};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> distances = {76543, 73526, 72416, 74582, 77512, 73692, 72628, 72298, 75359, 76921, 76519, 76132, 71502};
    vector<int> times = {24054, 23880, 23845, 23957, 24341, 23885, 23849, 23842, 24021, 24059, 24050, 24044, 23834};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> distances = {39028, 36311, 39403, 43582, 40463, 38080, 39789, 42131, 41380, 43258, 42809, 43492, 37089, 40245, 37127};
    vector<int> times = {6274, 6154, 6285, 6454, 6303, 6218, 6291, 6385, 6374, 6444, 6423, 6448, 6187, 6299, 6188};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
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
    vector<int> distances = {1600, 2000, 3200, 3000, 5000, 9600};
    vector<int> times = {234, 306, 499, 462, 802, 1629};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> distances = {1600, 3200, 16000};
    vector<int> times = {299, 655, 4020};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> distances = {16000, 3200, 1600};
    vector<int> times = {4020, 655, 299};
    RaceCalculator* pObj = new RaceCalculator();
    clock_t start = clock();
    int result = pObj->bestRace(distances, times);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=260952&rd=4740&pm=2250
********************************************************************************
#include <cmath> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <iostream> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
// #include <algorithm> 
// #include <iterator> 
// #include <map> 
// #include <queue> 
// #include <set> 
 
class RaceCalculator 
{ 
  public: 
  int bestRace (vector <int> distances, vector <int> times) 
  { 
    int i,j,k,m,n,o; 
    char *p,*q,*r; 
 
    double bad[64]; 
    int best; 
 
    for (i = 0; i < distances.size (); i++) 
    { 
      bad[i] = -1000000; 
 
      for (j = 0; j < distances.size (); j++) 
      for (k = j+1; k < distances.size (); k++) 
      { 
        if (j == i || k == i) 
          continue; 
 
        double D = distances[i]; 
        double T1 = times[j]; 
        double T2 = times[k]; 
        double D1 = distances[j]; 
        double D2 = distances[k]; 
        double expectedTime = T1*exp(log(T2/T1)*log(D1/D)/log(D1/D2)); 
        double badness = (times[i] - expectedTime) / expectedTime; 
 
        if (badness > bad[i]) 
          bad[i] = badness; 
      } 
    } 
 
    best = 0; 
 
    for (i = 1; i < distances.size (); i++) 
      if (bad[i] < bad[best]) 
        best = i; 
 
    return best; 
  } 
 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/