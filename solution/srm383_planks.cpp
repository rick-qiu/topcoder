/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8396
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

class Planks {
public:
    int makeSimilar(vector<int> lengths, int costPerCut, int woodValue);
};

int Planks::makeSimilar(vector<int> lengths, int costPerCut, int woodValue) {
    int ret;
    return ret;
}


int test0() {
    vector<int> lengths = {26, 103, 59};
    int costPerCut = 1;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 1770;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> lengths = {26, 103, 59};
    int costPerCut = 10;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 1680;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> lengths = {26, 103, 59};
    int costPerCut = 100;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 1230;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> lengths = {5281, 5297, 5303, 5309, 5323, 5333, 5347, 5351, 5381, 5387};
    int costPerCut = 5;
    int woodValue = 20;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 1057260;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> lengths = {31, 73, 127, 179, 181, 191, 283, 353, 359, 1019};
    int costPerCut = 25;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 25145;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> lengths = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    int costPerCut = 1;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 500000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> lengths = {25, 50, 75, 100, 125, 150, 175};
    int costPerCut = 5;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 6895;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> lengths = {25, 50, 75, 100, 125, 150, 175, 200};
    int costPerCut = 200;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 5600;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> lengths = {5968, 7944, 9894, 9078, 4475, 2129, 7201, 5561, 9086, 6804, 2813, 7521, 9386, 3651, 791, 607, 717, 6162, 9554, 8808, 2697, 4348, 3150, 1800, 1495, 3252, 4047, 6393, 8299, 7007, 8059, 2437, 4218, 7776, 4147, 8601, 1273, 4099, 7109, 1786, 2327, 9054, 1874, 1116, 8078, 597, 1884, 4097, 3958, 8350};
    int costPerCut = 754;
    int woodValue = 671;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 165495054;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> lengths = {2763, 4724, 2143, 8933, 3695, 2511, 2560, 5726, 8115, 1732, 5125, 1767, 355, 7881, 233, 4654, 8991, 76, 9157, 3580, 2465, 4900, 8354, 3541, 9964, 9544, 9454, 9644, 8705, 1279, 3633, 8092, 6840, 9464, 4384, 709, 7117, 2651, 9889, 2100, 4201, 7790, 2224, 9350, 5427, 541, 6737, 8606, 3414, 8132};
    int costPerCut = 552;
    int woodValue = 581;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 150693498;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> lengths = {149, 3983, 902, 1953, 7292, 6404, 5028, 9786, 7240, 9071, 6485, 9912, 1834, 2206, 5446, 5825, 5560, 8766, 8938, 7762, 7381, 9206, 8868, 5467, 179, 7250, 2899, 2000, 3637, 1939, 3237, 846, 6793, 9621, 9445, 5387, 1158, 1617, 4407, 848, 8771, 7828, 423, 1611, 9032, 9424, 6876, 2304, 6985, 7937};
    int costPerCut = 498;
    int woodValue = 297;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 77792388;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> lengths = {720, 1139, 1608, 9726, 9514, 8722, 7543, 8254, 2069, 8001, 3893, 1294, 9671, 1583, 4569, 281, 435, 6759, 9359, 2953, 3896, 104, 1518, 844, 9195, 2116, 7257, 8123, 3510, 5388, 7715, 1464, 1665, 6044, 2966, 9990, 5264, 6579, 4613, 957, 8893, 5654, 9472, 29, 8519, 1622, 7512, 483, 4538, 703};
    int costPerCut = 388;
    int woodValue = 474;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 109401600;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> lengths = {5681, 7665, 7124, 1604, 4698, 7956, 1140, 3354, 2489, 6632, 6083, 4432, 9904, 1979, 6964, 2379, 1726, 2735, 5940, 8343, 373, 4299, 3358, 6789, 10000, 7936, 795, 8946, 1732, 687, 7806, 4814, 6886, 1497, 5247, 3595, 5693, 6375, 6278, 3556, 9898, 8091, 8987, 1008, 1206, 2599, 6363, 2343, 7354, 13};
    int costPerCut = 478;
    int woodValue = 284;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 67499596;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> lengths = {3317, 4470, 5974, 5724, 4937, 711, 3130, 1566, 5287, 4016, 6821, 1627, 1661, 1799, 9016, 5624, 2877, 7941, 2999, 2545, 1407, 8175, 2163, 9409, 1882, 8856, 9891, 5279, 1999, 7684, 5993, 3291, 5078, 1232, 9250, 314, 9389, 3809, 5581, 1646, 4557, 827, 2448, 1897, 1088, 2451, 3911, 3907, 5793, 6054};
    int costPerCut = 63;
    int woodValue = 698;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 150795388;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> lengths = {5154, 8970, 9235, 9722, 1556, 5606, 548, 5918, 738, 9774, 5678, 3285, 1855, 3554, 8312, 7832, 5265, 3080, 6028, 8827, 2206, 6854, 2904, 9793, 8710, 6548, 532, 7605, 8993, 1410, 5733, 6647, 667, 4550, 6178, 9444, 3164, 9465, 2837, 4474, 2813, 6754, 7076, 8361, 2088, 4930, 9793, 8269, 2479, 818};
    int costPerCut = 542;
    int woodValue = 460;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 123278296;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> lengths = {8672, 3434, 6213, 4347, 2232, 4708, 135, 9446, 341, 3073, 5011, 47, 4400, 970, 1321, 6247, 187, 8185, 7232, 491, 4391, 5544, 2085, 2720, 5834, 4458, 1829, 8178, 9567, 1305, 4012, 7770, 477, 1968, 8063, 78, 6285, 2922, 8023, 7869, 9318, 5707, 7935, 8811, 5275, 2430, 880, 6906, 2184, 9582};
    int costPerCut = 939;
    int woodValue = 698;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 156477972;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> lengths = {8569, 2280, 487, 738, 8156, 6833, 4059, 2367, 4759, 6964, 1214, 8620, 4685, 3919, 1181, 9763, 2429, 4703, 158, 3187, 2107, 4040, 210, 7411, 6371, 6185, 8959, 1141, 956, 7072, 671, 6687, 8138, 9546, 4419, 1430, 198, 6814, 2093, 2203, 8753, 3275, 4044, 283, 1670, 1886, 7033, 7202, 1920, 9};
    int costPerCut = 386;
    int woodValue = 119;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 23852474;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> lengths = {9277, 2864, 7348, 8574, 2161, 2101, 9246, 546, 2685, 6903, 2644, 2769, 7282, 4679, 8369, 1221, 3649, 299, 273, 9007, 868, 3862, 8750, 9439, 9586, 1303, 5817, 5521, 7407, 5249, 2139, 26, 6402, 8107, 8061, 3284, 7884, 329, 7781, 4119, 8565, 5387, 4273, 4280, 5417, 8693, 249, 8406, 3507, 4943};
    int costPerCut = 984;
    int woodValue = 962;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 237684544;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> lengths = {2889, 4333, 3931, 7407, 5432, 2129, 3702, 7803, 9537, 6047, 1203, 3676, 7908, 2994, 5332, 9086, 1868, 4701, 1259, 2732, 3100, 9973, 784, 3118, 3352, 1821, 2019, 8690, 8087, 9538, 274, 5437, 6295, 9512, 1613, 147, 3985, 5460, 3896, 3686, 2046, 7244, 4017, 8476, 3227, 9115, 882, 6244, 4905, 8266};
    int costPerCut = 497;
    int woodValue = 202;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 46922850;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> lengths = {4105, 9867, 599, 9433, 1590, 743, 6294, 720, 3474, 8476, 9999, 3896, 1190, 7903, 3402, 1029, 6100, 5224, 5574, 3835, 9439, 126, 2140, 3474, 7870, 5360, 2399, 7117, 252, 518, 9895, 2216, 9940, 951, 879, 8865, 4795, 4124, 811, 6713, 4606, 677, 6750, 2522, 5678, 2762, 491, 8058, 409, 5413};
    int costPerCut = 882;
    int woodValue = 169;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 35337024;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> lengths = {2075, 734, 6717, 664, 661, 8983, 9075, 4018, 2556, 170, 2973, 6335, 2277, 863, 288, 3615, 96, 7074, 2890, 4596, 1426, 6197, 1320, 6059, 3720, 3794, 7495, 9421, 6088, 1155, 3770, 9168, 5546, 3253, 6780, 5603, 968, 74, 4374, 8587, 6162, 686, 7907, 5831, 3332, 1149, 1761, 9674, 6012, 1155};
    int costPerCut = 275;
    int woodValue = 938;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 190357679;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> lengths = {2727, 5156, 1541, 277, 4507, 4381, 1384, 2404, 3930, 9338, 7855, 8034, 6837, 9386, 3713, 2334, 1471, 1551, 7728, 7950, 6804, 907, 1456, 311, 1402, 7880, 5900, 5755, 759, 5446, 2294, 8179, 2307, 3274, 8445, 3661, 1391, 5428, 5940, 7239, 6966, 7986, 5793, 1293, 8163, 4516, 6787, 1231, 2627, 6400};
    int costPerCut = 536;
    int woodValue = 30;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 6355712;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> lengths = {5452, 2727, 2733, 2328, 5327, 5495, 5879, 7130, 2250, 4402, 9858, 166, 48, 9103, 104, 6798, 4653, 8752, 3908, 3263, 7077, 7956, 8744, 9193, 7596, 3245, 7628, 8382, 972, 8740, 7239, 3001, 7234, 8955, 4274, 9073, 4489, 1268, 8075, 94, 9788, 1, 6536, 2156, 1910, 1260, 5022, 2989, 7036, 5383};
    int costPerCut = 312;
    int woodValue = 988;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 250109808;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> lengths = {3917, 2934, 8299, 1311, 1209, 9388, 2978, 6212, 6352, 7219, 4245, 3600, 1436, 6080, 5431, 9611, 1586, 5302, 368, 9200, 5141, 7898, 784, 8044, 1628, 3959, 1510, 2101, 7140, 8339, 9600, 4333, 456, 2209, 5860, 9942, 3697, 5977, 4702, 7321, 9161, 1621, 9930, 3282, 9812, 8109, 676, 414, 7089, 7765};
    int costPerCut = 606;
    int woodValue = 23;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 5335698;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> lengths = {7005, 5733, 642, 9135, 714, 9785, 1081, 2252, 4334, 4314, 1804, 5091, 2974, 9598, 6025, 6712, 2220, 2491, 9783, 8948, 334, 9026, 5709, 7064, 5506, 5497, 5137, 8129, 3087, 9961, 7677, 4700, 8237, 362, 6502, 1372, 2296, 5851, 6751, 2586, 3841, 7526, 8075, 8461, 1061, 2819, 4899, 5962, 866, 4860};
    int costPerCut = 327;
    int woodValue = 509;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 127807557;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> lengths = {6888, 4882, 8968, 985, 4124, 2382, 3525, 8508, 9443, 490, 4900, 8087, 1388, 2321, 9412, 5340, 7279, 403, 272, 504, 3349, 7566, 1222, 8052, 2087, 9658, 89, 8598, 652, 6531, 789, 5294, 3613, 7469, 5825, 9342, 8204, 2115, 5673, 248, 1029, 3552, 9404, 1599, 3171, 1362, 3, 1799, 7109, 8987};
    int costPerCut = 900;
    int woodValue = 198;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 42725430;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> lengths = {243, 1546, 869, 2111, 2268, 7961, 7941, 3780, 3985, 9096, 744, 3228, 1384, 2363, 3905, 222, 1673, 5568, 6533, 6685, 7101, 6179, 5517, 2140, 9993, 9221, 9564, 3380, 9317, 2746, 9858, 419, 529, 5794, 7296, 3527, 58, 3946, 765, 1692, 1274, 6132, 4889, 9186, 1614, 6276, 2336, 7202, 924, 1757};
    int costPerCut = 945;
    int woodValue = 258;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 52824438;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> lengths = {1924, 8235, 6303, 5943, 5190, 6850, 8967, 2891, 6436, 1191, 8643, 5104, 8218, 7550, 367, 5364, 8299, 6660, 7914, 9077, 8782, 3197, 5808, 3606, 3497, 3217, 677, 3186, 2044, 8914, 2564, 3584, 305, 5185, 6329, 1960, 9026, 6113, 6972, 2246, 2620, 1132, 719, 1052, 5939, 1574, 601, 2557, 2070, 2447};
    int costPerCut = 941;
    int woodValue = 631;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 141260898;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> lengths = {26, 25, 25, 50};
    int costPerCut = 30;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> lengths = {15, 15, 30, 31, 35, 60, 30, 15, 15, 15, 15, 15, 60, 30, 15, 15, 39, 33, 15, 35, 30, 30, 30, 30, 30, 31, 37, 64, 150, 30, 30, 30, 15, 15, 15, 31, 15, 15};
    int costPerCut = 40;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 370;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> lengths = {100, 101, 200, 99, 100, 201, 200, 100, 100, 100, 100, 99, 101, 102, 103};
    int costPerCut = 450;
    int woodValue = 4;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 3100;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> lengths = {200, 200, 200, 400};
    int costPerCut = 1000;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 600;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> lengths = {10000};
    int costPerCut = 800;
    int woodValue = 530;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 5300000;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> lengths = {10, 10, 10, 10, 10, 20, 20, 20, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 3000, 3000, 5000, 5001, 3000, 3001, 2000, 2001, 10, 10, 10, 10};
    int costPerCut = 1000;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 15000;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> lengths = {10, 10, 10, 10, 10, 10, 10, 10, 100, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    int costPerCut = 120;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 2100;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> lengths = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    int costPerCut = 1000;
    int woodValue = 1000;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 500000000;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> lengths = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    int costPerCut = 1;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 90000;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> lengths = {4, 4, 2};
    int costPerCut = 1;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> lengths = {200, 200, 200, 400};
    int costPerCut = 1;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> lengths = {10, 10, 11, 20};
    int costPerCut = 100;
    int woodValue = 7;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> lengths = {10000};
    int costPerCut = 1;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> lengths = {24, 103, 59};
    int costPerCut = 1;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 1771;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> lengths = {3, 6};
    int costPerCut = 1;
    int woodValue = 1000;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 8999;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> lengths = {1, 2};
    int costPerCut = 1;
    int woodValue = 100;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 299;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> lengths = {3, 3, 3, 3, 3, 3, 3, 3, 6};
    int costPerCut = 4;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> lengths = {200, 200, 200, 400, 300, 300, 300};
    int costPerCut = 1000;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> lengths = {1, 1, 1};
    int costPerCut = 2;
    int woodValue = 21;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> lengths = {10, 5, 5, 5, 5, 5};
    int costPerCut = 75;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 275;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> lengths = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 4600, 100, 208, 509};
    int costPerCut = 102;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 4610;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> lengths = {30, 10};
    int costPerCut = 1;
    int woodValue = 40;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 1598;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> lengths = {200, 200, 200, 400};
    int costPerCut = 300;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 700;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> lengths = {100, 100, 100, 100};
    int costPerCut = 1000;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 400;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> lengths = {200, 200, 200, 200, 200, 400};
    int costPerCut = 250;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 1150;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> lengths = {5, 5, 5, 5, 5, 5, 5, 10};
    int costPerCut = 6;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> lengths = {3, 3, 3, 3, 3, 5, 6, 9};
    int costPerCut = 4;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> lengths = {3, 6, 9, 12, 15};
    int costPerCut = 1;
    int woodValue = 100;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 4490;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> lengths = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 1, 1, 1, 1};
    int costPerCut = 1;
    int woodValue = 1000;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 59955;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> lengths = {10000};
    int costPerCut = 200;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> lengths = {400, 200, 200, 200};
    int costPerCut = 1000;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 600;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> lengths = {24, 6, 12, 18};
    int costPerCut = 1;
    int woodValue = 20;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 1194;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> lengths = {11, 6, 6};
    int costPerCut = 1000;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> lengths = {10, 11, 18};
    int costPerCut = 1;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> lengths = {5, 10};
    int costPerCut = 10;
    int woodValue = 3;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> lengths = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10};
    int costPerCut = 51;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 549;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> lengths = {3, 6};
    int costPerCut = 1;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 89;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> lengths = {200, 200, 200, 400};
    int costPerCut = 1000;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 600;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> lengths = {6, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    int costPerCut = 4;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> lengths = {12, 8, 16};
    int costPerCut = 3;
    int woodValue = 2;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> lengths = {2, 2, 3};
    int costPerCut = 100;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> lengths = {1000};
    int costPerCut = 102;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> lengths = {13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 169};
    int costPerCut = 131;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 5318;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> lengths = {10000};
    int costPerCut = 1000;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> lengths = {10000, 10000};
    int costPerCut = 1;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 20000;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> lengths = {400, 400, 400, 400};
    int costPerCut = 10;
    int woodValue = 100;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 160000;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> lengths = {10, 2};
    int costPerCut = 1;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> lengths = {25};
    int costPerCut = 1000;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> lengths = {5};
    int costPerCut = 1000;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> lengths = {200, 200, 200, 400};
    int costPerCut = 1000;
    int woodValue = 1000;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 999000;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> lengths = {22, 10, 8};
    int costPerCut = 40;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> lengths = {10000};
    int costPerCut = 1;
    int woodValue = 1000;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 10000000;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> lengths = {2, 2, 4};
    int costPerCut = 1;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> lengths = {10000};
    int costPerCut = 100;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 100000;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> lengths = {10000};
    int costPerCut = 1000;
    int woodValue = 1000;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 10000000;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> lengths = {1, 3};
    int costPerCut = 1;
    int woodValue = 1000;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 3998;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> lengths = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 19, 20};
    int costPerCut = 11;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 109;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> lengths = {4000, 4000, 4000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};
    int costPerCut = 1000;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 23000;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> lengths = {200, 200, 200, 400};
    int costPerCut = 1000;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 9000;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> lengths = {2, 1};
    int costPerCut = 1;
    int woodValue = 1000;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 2999;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> lengths = {1, 1, 1, 1};
    int costPerCut = 300;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> lengths = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 8, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int costPerCut = 3;
    int woodValue = 2;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> lengths = {4, 2, 2, 2};
    int costPerCut = 1000;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> lengths = {100, 200};
    int costPerCut = 50;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 250;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> lengths = {10000};
    int costPerCut = 1;
    int woodValue = 5;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 50000;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> lengths = {200, 200, 200, 300, 600};
    int costPerCut = 250;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 700;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> lengths = {5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int costPerCut = 6;
    int woodValue = 5;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> lengths = {26, 103, 59, 5};
    int costPerCut = 1;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 1814;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> lengths = {2, 4, 6};
    int costPerCut = 1;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> lengths = {1, 1};
    int costPerCut = 1;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
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
    vector<int> lengths = {10000};
    int costPerCut = 100;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> lengths = {5000, 10000};
    int costPerCut = 10;
    int woodValue = 100;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 1499990;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> lengths = {4000, 4000};
    int costPerCut = 1;
    int woodValue = 1000;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 8000000;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> lengths = {4, 2, 1};
    int costPerCut = 1;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> lengths = {1000, 1001};
    int costPerCut = 1;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 1999;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> lengths = {10000, 10000, 7000, 9000, 1241, 3412, 1, 1, 1, 1, 1};
    int costPerCut = 1000;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 26000;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> lengths = {10000, 10000, 10000, 10000};
    int costPerCut = 1000;
    int woodValue = 100;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 4000000;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> lengths = {100, 1000, 100};
    int costPerCut = 1000;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> lengths = {25, 50};
    int costPerCut = 1;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> lengths = {12, 4, 4, 4, 4, 4, 4, 4};
    int costPerCut = 5;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> lengths = {1, 2, 3};
    int costPerCut = 75;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> lengths = {200, 200, 200, 400};
    int costPerCut = 10;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 990;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> lengths = {10000};
    int costPerCut = 102;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> lengths = {10000, 5000};
    int costPerCut = 1000;
    int woodValue = 50;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 749000;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> lengths = {10, 20, 10, 10};
    int costPerCut = 15;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> lengths = {10, 10, 20};
    int costPerCut = 9;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> lengths = {200, 200, 200, 400, 200, 200, 200, 200, 200, 200, 400};
    int costPerCut = 1000;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 1800;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> lengths = {2, 2, 4, 4, 5};
    int costPerCut = 10;
    int woodValue = 3;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> lengths = {200, 200, 200, 400};
    int costPerCut = 100;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 9900;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> lengths = {3, 3, 3, 3, 3, 3, 6, 6, 6, 9, 9};
    int costPerCut = 7;
    int woodValue = 2;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> lengths = {4, 4, 4, 8, 8, 8, 8, 8, 8, 8};
    int costPerCut = 1;
    int woodValue = 18;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 1217;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> lengths = {10, 10, 12, 20};
    int costPerCut = 11;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> lengths = {200, 200, 200, 300, 400};
    int costPerCut = 201;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 799;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> lengths = {200, 200, 200, 401};
    int costPerCut = 1000;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 600;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> lengths = {1};
    int costPerCut = 1;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
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
    vector<int> lengths = {200, 200};
    int costPerCut = 1;
    int woodValue = 100;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 40000;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> lengths = {10, 15};
    int costPerCut = 1;
    int woodValue = 100;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 2497;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> lengths = {4, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int costPerCut = 100;
    int woodValue = 49;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 1174;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> lengths = {3, 6};
    int costPerCut = 2;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> lengths = {200, 200, 200, 200, 200, 200, 600, 500};
    int costPerCut = 280;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 1240;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> lengths = {200, 200, 200, 398, 400};
    int costPerCut = 399;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 601;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> lengths = {13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 169, 26};
    int costPerCut = 150;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 5310;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> lengths = {1, 1, 1, 2};
    int costPerCut = 6;
    int woodValue = 5;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> lengths = {200, 200, 200, 400, 400, 300, 300, 300};
    int costPerCut = 1000;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> lengths = {200, 200, 200, 400, 200, 200, 200, 200, 200, 200, 200};
    int costPerCut = 1000;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 2000;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> lengths = {200, 200, 200, 600, 200};
    int costPerCut = 600;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 800;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> lengths = {2000, 4000};
    int costPerCut = 1;
    int woodValue = 1000;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 5999999;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> lengths = {10, 20};
    int costPerCut = 1;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> lengths = {3, 3, 3, 3, 3, 3, 4, 4, 4, 6, 6, 6, 9, 9};
    int costPerCut = 7;
    int woodValue = 2;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> lengths = {100, 100, 100, 101, 200};
    int costPerCut = 150;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 350;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> lengths = {200, 200, 200, 400};
    int costPerCut = 201;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 799;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> lengths = {10000};
    int costPerCut = 1;
    int woodValue = 42;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 420000;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> lengths = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    int costPerCut = 1000;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 500000;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> lengths = {6, 8, 10};
    int costPerCut = 10;
    int woodValue = 10;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> lengths = {20, 40, 21, 20, 20, 20, 20, 20, 20};
    int costPerCut = 25;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 155;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> lengths = {10, 10, 10, 11, 20, 11};
    int costPerCut = 13;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> lengths = {1, 1, 1, 1, 2};
    int costPerCut = 1;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> lengths = {2, 3, 4, 2, 2, 2};
    int costPerCut = 11;
    int woodValue = 5;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> lengths = {2, 2, 3, 4};
    int costPerCut = 3;
    int woodValue = 1;
    Planks* pObj = new Planks();
    clock_t start = clock();
    int result = pObj->makeSimilar(lengths, costPerCut, woodValue);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=10806&pm=8396
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <set>
#include <iostream>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <utility>
#include <iterator>
#include <numeric>
#include <list>
#include <complex>
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef complex<double> pnt;
typedef pair<int, int> pii;
 
#define RA(x) (x).begin(), (x).end()
#define FE(i, x) for (typeof((x).begin()) i = (x).begin(); i != (x).end(); i++)
#define SZ(x) ((int) (x).size())
 
 
class Planks
{
public:
    int makeSimilar(vector <int> lengths, int costPerCut, int woodValue);
};
 
int Planks::makeSimilar(vector <int> lengths, int costPerCut, int woodValue)
{
    ll best = 0;
    for (ll l = 1; l <= 10000; l++)
    {
        ll cur = 0;
        for (int i = 0; i < SZ(lengths); i++)
        {
            ll p = lengths[i] / l;
            ll cost = costPerCut * (lengths[i] % l ? p : p - 1);
            ll profit = p * l * woodValue;
            if (profit > cost) cur += profit - cost;
        }
        best = max(best, cur);
    }
    return best;
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/