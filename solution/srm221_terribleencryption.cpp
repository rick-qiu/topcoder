/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1924
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

class TerribleEncryption {
public:
    string decrypt(string pool, vector<int> data, vector<int> keys);
};

string TerribleEncryption::decrypt(string pool, vector<int> data, vector<int> keys) {
    string ret;
    return ret;
}


int test0() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    vector<int> keys = {17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "BJGNHDFPCMOKELI";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string pool = "AEIOUAEIOUaeiouaeiou";
    vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5};
    vector<int> keys = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 15, 16, 17, 18};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "EIOUAEIOUaEOeoe";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string pool = "abcdeffedcbaABCDEFFEDCBA";
    vector<int> data = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    vector<int> keys = {3, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "bfbeAcedecB";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string pool = "abcdefghijklmnopqrstuvwxyz";
    vector<int> data = {11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11};
    vector<int> keys = {2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15, 16, 17};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "bcdbfcdfblgjldo";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string pool = "HmmBlahHmmBlah";
    vector<int> data = {1, 1, 1, 1, 1, 1, 1};
    vector<int> keys = {10, 9, 8, 7, 6, 5, 4};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "mmmmmmm";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {36466, 42154, 11222, 18597, 74213, 24261, 20391, 91049, 88468, 12409, 99876, 13197, 47639, 73327, 74414, 86762, 87286, 29101, 13618, 5779, 48400, 25523, 53178, 2497, 71341, 17955, 39008, 46066, 17246, 67089, 5076, 97578, 26714, 75700, 16444, 59047, 54184, 51911, 70481, 53663, 35665, 54507, 51265, 39966, 57339, 61476, 74847, 93551, 93042, 4210};
    vector<int> keys = {4325, 2449, 4441, 3190, 333, 805, 23, 2017, 3591, 4615, 2069, 2585, 284, 3542, 113, 2949, 4933, 3067, 1721, 3458, 2571, 4783, 3899, 1275, 1187, 4994, 1083, 481, 2707, 179, 3485, 1727, 145, 3733, 757, 4727, 157, 2266, 1493, 2482, 4217, 2036, 1153, 1103, 4993, 1055, 403, 3843, 895, 4637};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "kRqrCaQTJxkhjbfRDjDNSANhfnEXsYugOIFiYdYZSxGQfQRkhX";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {29256, 25784, 70805, 23526, 34783, 37985, 58779, 26063, 86326, 34032, 15386, 78813, 27535, 73844, 3302, 13895, 70449, 41963, 54178, 1677, 37783, 5236, 93317, 64781, 81558, 84597, 33684, 53302, 31359, 15184, 72877, 14308, 8845, 65598, 17804, 5594, 69056, 49334, 43558, 36164, 93585, 89241, 65331, 64091, 65903, 89312, 65208, 46137, 4884, 27216};
    vector<int> keys = {953, 743, 1928, 3547, 4098, 4191, 460, 1177, 3719, 3797, 2967, 850, 212, 3941, 1607, 587, 2816, 2409, 4665, 4538, 3751, 2621, 1048, 1232, 3527, 1757, 383, 1007, 3241, 1643, 8, 4185, 2786, 1961, 3355, 4423, 2089, 431, 337, 4103, 157, 1999, 3067, 823, 4473, 3831, 1271, 2090, 1729, 2005};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "JwpwHgTgmbvbtxlObcbXlijbnfiRClFgBIOuIcavtjJPPAJNNB";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {59944, 68479, 96606, 63912, 62104, 96914, 76227, 27241, 34040, 77481, 40922, 55063, 15960, 42731, 66176, 83913, 45154, 35741, 15724, 17157, 75480, 81357, 96919, 24934, 9384, 64732, 69319, 67475, 47771, 76611, 11651, 10871, 97897, 95435, 20011, 60295, 4956, 2614, 18427, 57277, 89128, 69231, 11857, 74843, 76618, 9937, 1257, 97143, 10553, 72939};
    vector<int> keys = {2285, 2114, 3445, 2251, 2377, 2031, 1741, 58, 1873, 647, 1229, 2494, 1157, 3974, 2613, 3176, 2621, 2332, 4787, 445, 2161, 979, 1117, 159, 4285, 601, 2411, 4791, 2887, 4189, 142, 3223, 4257, 1456, 2330, 328, 4817, 3835, 3335, 3979, 3893, 3491, 2238, 205, 3981, 1544, 3548, 4940, 2258, 3133};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "iLkvsjaDQSNBQBdlpJBSxrBwdoXgrCLjENBXLdrJidLHBFXlHM";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {45052, 86039, 87011, 15699, 45657, 35588, 66209, 99409, 44684, 84952, 76044, 25379, 67552, 56382, 59160, 58368, 24827, 11963, 79317, 23752, 85455, 478, 43659, 45184, 65651, 41719, 49892, 66560, 19840, 83511, 85632, 9808, 93191, 96853, 25644, 7990, 84049, 45400, 56769, 31827, 68960, 76949, 10050, 96982, 63018, 36596, 94891, 99318, 23889, 93975};
    vector<int> keys = {2959, 512, 3045, 1502, 2215, 4813, 4618, 4744, 645, 3611, 2377, 3104, 4517, 2173, 2077, 2521, 1779, 3286, 4967, 75, 4244, 1873, 3131, 2113, 1065, 3942, 467, 57, 4903, 3691, 3277, 3237, 2027, 3226, 4405, 1431, 4702, 2999, 998, 1363, 169, 4193, 1331, 3461, 343, 1145, 897, 355, 3706, 1529};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "EXaXwMVdJUtPnqCfIlMNFfXwfFmgeXLSSxdIjItmwUMDjaiqlA";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {10994, 20769, 21328, 33879, 18715, 64397, 12503, 89874, 62919, 8124, 80518, 94456, 63463, 38116, 65275, 20582, 13549, 67686, 20394, 88496, 97222, 60114, 89261, 15473, 3614, 85072, 13749, 60396, 73403, 21473, 74615, 71171, 93903, 70074, 13827, 76264, 5793, 80254, 55969, 35612, 96695, 27160, 28414, 80644, 34642, 97732, 78065, 28410, 37936, 57152};
    vector<int> keys = {4813, 2528, 3543, 4642, 2919, 2572, 265, 4237, 4490, 1397, 1703, 1217, 2185, 1597, 4358, 1675, 4041, 4667, 2155, 411, 4881, 967, 3184, 3204, 355, 2109, 4088, 1997, 525, 1860, 2468, 2729, 1502, 737, 1292, 3213, 578, 2211, 1012, 891, 4338, 2663, 3571, 25, 3547, 1209, 2544, 4247, 657, 743};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "EjIxavbDdWgfCipSGLEBxcdpsZjaqlrHHZvbnJfAPTVEgwXEOo";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {44510, 61703, 71565, 90891, 20618, 1418, 74260, 30634, 67030, 23138, 45535, 43235, 7989, 52349, 91571, 55327, 22491, 75376, 91929, 99342, 68616, 16316, 35812, 71550, 34851, 63259, 80041, 5983, 59174, 75384, 61583, 85184, 50907, 47568, 74453, 49000, 35178, 69777, 38553, 68647, 15377, 94779, 46243, 24813, 15043, 19612, 71432, 65795, 17399, 93764};
    vector<int> keys = {1227, 3406, 3811, 3883, 365, 2193, 551, 821, 869, 3803, 3461, 4301, 1279, 2070, 3084, 1334, 1286, 3593, 343, 1871, 1955, 4083, 4303, 4201, 3667, 4696, 2032, 1112, 4357, 2083, 2619, 2711, 1489, 985, 3639, 4309, 3791, 4784, 1729, 4934, 4518, 320, 2771, 4681, 2692, 3631, 4077, 722, 1487, 433};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "MhxbMPjGCGbEVnVFvDGgfHkjpfpFTKtqOHMOSrgXldFBpikbML";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {13742, 53963, 38977, 42134, 13652, 73697, 97039, 38886, 28900, 14105, 12975, 32863, 81114, 29117, 21521, 25864, 98787, 9441, 69808, 2372, 39929, 7480, 22415, 20961, 83900, 555, 33972, 70146, 61583, 57914, 30254, 10661, 21709, 31428, 80, 25863, 50353, 59870, 2397, 67287, 70501, 62344, 35640, 13336, 49074, 97668, 99690, 55680, 29904, 83446};
    vector<int> keys = {239, 4506, 4645, 3045, 3309, 4401, 3604, 1867, 4423, 4594, 4921, 1238, 2477, 4740, 1434, 1795, 1406, 4456, 4469, 519, 4951, 1407, 3343, 2026, 3609, 4243, 2473, 1549, 2980, 269, 223, 3663, 2664, 29, 959, 3370, 1507, 169, 3986, 562, 1381, 1735, 2953, 3489, 4907, 4637, 289, 3931, 1381, 1203};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "lPwnqvdpIhxJThrdRVJcKqlNNoffRaDPXSMbuXRpOsUCbhbtau";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {88650, 55096, 80010, 30575, 51577, 75506, 72930, 23655, 1113, 99532, 3737, 99163, 20027, 50221, 68390, 88435, 99357, 23776, 93045, 63954, 50942, 98906, 93531, 46070, 53899, 87714, 29411, 56727, 90230, 12240, 36951, 90122, 86944, 72518, 57878, 34748, 9950, 44389, 28916, 86469, 48379, 8248, 60885, 38063, 87130, 63582, 15527, 17092, 90094, 28345};
    vector<int> keys = {4163, 3553, 157, 1293, 4482, 1721, 1907, 1847, 2425, 1223, 383, 4884, 1706, 69, 3779, 1091, 1151, 2625, 274, 1283, 3035, 919, 4372, 929, 2999, 4181, 1570, 3868, 187, 379, 209, 3375, 2323, 3327, 2441, 1559, 2487, 3410, 1731, 4819, 2658, 1781, 1978, 349, 3739, 1559, 2204, 385, 3845, 3266};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "tNiQHVhGbnUvXZXIkafWwRDWHgLDAsEIDBMfsnKNNcbmGgXmYZ";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {91078, 8825, 87707, 53710, 72139, 2984, 86486, 63997, 85603, 24179, 6962, 40930, 72645, 84833, 77904, 23320, 64115, 81581, 83205, 89770, 69859, 49078, 1446, 85292, 43292, 26482, 18737, 43312, 74636, 36151, 19303, 85289, 22223, 99617, 84536, 88469, 12832, 31970, 73134, 61210, 29244, 62549, 12485, 54878, 56017, 27202, 4558, 71479, 72960, 65345};
    vector<int> keys = {4851, 3493, 1685, 277, 98, 1757, 107, 2542, 4091, 24, 3333, 31, 4577, 2390, 1649, 3719, 4486, 400, 4189, 4221, 4444, 701, 2729, 4643, 27, 4247, 4543, 4535, 3107, 1686, 2782, 3267, 4433, 1481, 3519, 3624, 4461, 4529, 4813, 2989, 1763, 3263, 1281, 2531, 2748, 2393, 3045, 4720, 1369, 2279};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "iHSnJqZjoLjcAvDMpVTJRNKbFVKmsrJhwAsnVWRnvxYJNdgTfc";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {30417, 68395, 63641, 11075, 88746, 51573, 99881, 8161, 89305, 47661, 62901, 61394, 95134, 97498, 11781, 54359, 73052, 49813, 99386, 3849, 7229, 10735, 67743, 39757, 53480, 34693, 27288, 81314, 55644, 62831, 91564, 16452, 87285, 64030, 26196, 97801, 39503, 23129, 23760, 66214, 48735, 51172, 34642, 674, 47266, 63247, 68085, 72072, 23485, 80963};
    vector<int> keys = {2380, 4952, 3432, 2884, 3443, 2219, 3736, 1236, 1822, 229, 2189, 2065, 3829, 1579, 1828, 3052, 1405, 1801, 695, 3296, 4633, 4286, 466, 935, 4027, 3120, 557, 2841, 1369, 1493, 3299, 4849, 728, 479, 607, 2762, 1946, 1161, 1021, 2023, 386, 3, 293, 521, 1469, 3843, 2207, 4421, 76, 725};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "hhZBgNfXjdWnTZhBcKBxLrxwKRiEVPMcPSqvPpuVnBladwJNBC";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {55111, 80758, 68620, 27583, 64578, 79719, 12206, 55099, 29397, 25963, 85294, 31295, 13082, 19284, 70277, 58788, 81900, 53049, 49542, 3652, 31458, 52079, 90353, 97378, 56723, 86148, 77322, 63054, 66291, 81818, 77098, 16441, 88273, 96392, 86816, 66539, 27378, 49559, 342, 54797, 10625, 30626, 24510, 27306, 2544, 12238, 91322, 30073, 79838, 5101};
    vector<int> keys = {2074, 2699, 1509, 4124, 4973, 1646, 3999, 4398, 1085, 829, 797, 3706, 4863, 421, 968, 4481, 2881, 3038, 2149, 2433, 4307, 1394, 4174, 879, 4926, 2563, 2249, 3887, 2294, 3939, 3189, 793, 674, 2959, 129, 3712, 2059, 1955, 3457, 2375, 2283, 4177, 991, 3755, 833, 2687, 4775, 389, 3647, 3221};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "PPgffTGhSkWvEbFPdNxlCdbBhmaAnpsqDFcRNThIGhJfuCItmq";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {96502, 105, 57631, 21866, 34338, 83993, 80898, 19358, 61032, 56159, 12190, 83747, 50651, 23271, 34599, 24597, 17666, 78307, 16210, 56537, 5458, 5232, 60747, 24664, 86656, 36663, 77735, 33204, 36494, 89193, 26959, 55469, 62716, 99208, 47150, 46614, 88551, 95762, 74679, 89763, 88893, 76512, 94412, 80816, 74077, 97699, 41973, 97527, 471, 49834};
    vector<int> keys = {225, 851, 479, 4231, 3383, 111, 2795, 3203, 3325, 429, 1943, 2689, 519, 4801, 530, 3494, 3503, 2565, 2003, 2207, 659, 1097, 3472, 1897, 4391, 4717, 2986, 3673, 3741, 3608, 3933, 597, 1147, 4211, 627, 4495, 76, 25, 208, 502, 1000, 4357, 3901, 1997, 3444, 3477, 2693, 2162, 4966, 1549};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "mEqvgMqFrLJvFLxpQhoKjFDPJTBxJNvlnmLdHXTPHDBFhlIvfx";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {4690, 56800, 61140, 1724, 77366, 89699, 17594, 89585, 15034, 38868, 5341, 75682, 82180, 72540, 91606, 224, 53169, 23541, 7410, 20742, 46225, 36696, 34018, 95782, 93829, 65785, 28855, 38872, 11797, 72574, 83082, 63119, 5594, 38747, 74633, 2916, 44308, 507, 17685, 55936, 40241, 55145, 12398, 36011, 95216, 69063, 67208, 65425, 13479, 37529};
    vector<int> keys = {3191, 1773, 3163, 3061, 4721, 1521, 1153, 3438, 1059, 4967, 4231, 1921, 3189, 131, 4879, 2215, 2032, 4243, 3851, 1613, 4423, 4615, 11, 4215, 4681, 2158, 3091, 365, 2613, 4907, 367, 3607, 3167, 2750, 1949, 4211, 871, 4111, 2317, 3461, 449, 337, 1549, 2839, 3153, 1291, 4405, 1451, 2800, 4749};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "uwdYDmovDjLTVECnJipYsLCwIFgNEuvPMhGXkTricApHTElFTt";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {6999, 26232, 60736, 85951, 98068, 88619, 14289, 4050, 38569, 718, 50150, 43151, 82508, 18630, 99056, 76131, 99651, 46017, 26656, 23803, 15935, 91811, 23002, 85764, 21575, 1415, 52672, 61729, 11774, 5854, 21717, 15064, 5163, 1765, 55618, 69025, 5871, 9227, 11046, 80577, 36558, 54127, 63443, 6721, 71801, 87075, 22342, 63849, 43897, 81867};
    vector<int> keys = {4100, 3221, 1247, 4721, 3069, 3418, 4295, 4571, 719, 833, 1499, 1863, 1545, 1513, 659, 1066, 754, 3289, 4623, 3499, 4214, 2804, 127, 2309, 1888, 972, 929, 4926, 159, 1659, 3595, 909, 2011, 3102, 1331, 3156, 599, 2034, 1339, 4322, 787, 4899, 1113, 1718, 2707, 1478, 923, 2260, 435, 1487};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "xJfIBRYDjSRmMxQVpcaHdjRsDxRdUgNdppOHBDtVtaHDYDnnDP";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {66084, 13454, 55867, 42861, 19245, 98750, 83660, 68929, 13402, 93762, 59834, 28662, 39295, 97470, 94252, 14584, 84059, 43700, 37721, 19697, 96709, 65300, 3641, 83866, 7620, 47466, 72245, 39021, 83529, 57830, 65852, 88684, 61025, 40625, 2771, 27356, 3539, 27591, 47407, 90939, 69506, 49221, 74540, 30637, 62705, 26540, 56937, 19690, 59677, 85816};
    vector<int> keys = {1741, 3685, 3323, 110, 4282, 1923, 4553, 2283, 4917, 2593, 4553, 1465, 521, 1547, 437, 2977, 3593, 2731, 4769, 876, 3046, 629, 944, 3373, 2269, 1499, 4673, 2852, 2864, 1829, 2889, 3031, 456, 1246, 1421, 3271, 4837, 685, 1496, 4283, 3563, 2624, 2827, 1027, 2408, 1461, 1319, 3691, 2063, 3983};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "vnqflrpHOYhDtWDFehCBHslkHqPTNXuqdbUHkfLUefkDrwGXJq";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {66622, 357, 2954, 39018, 50875, 202, 29758, 36516, 26803, 6128, 46003, 68396, 45907, 90080, 18945, 99395, 10353, 22952, 97306, 80696, 52333, 25443, 35844, 71527, 94934, 6133, 66567, 57675, 77631, 68589, 19891, 91137, 30072, 70561, 82367, 71736, 68870, 35241, 1505, 53722, 73911, 47080, 12795, 88200, 73015, 12767, 69172, 5725, 26780, 31807};
    vector<int> keys = {4951, 890, 3393, 3691, 4734, 3537, 1313, 653, 4987, 1965, 631, 1195, 2956, 3491, 4436, 4077, 523, 4741, 1037, 647, 4499, 2012, 1457, 2646, 501, 4653, 245, 4193, 757, 3833, 4586, 292, 2419, 4611, 1562, 755, 43, 2797, 871, 4095, 2110, 4683, 392, 1679, 4198, 273, 77, 3113, 2377, 1392};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "NNhGdsfNDMaprdfYdEQAGDKfgRwqSSTbtJFGIevNLQngtJDXrn";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {58828, 48337, 51650, 73837, 64108, 26058, 64049, 58092, 34129, 18550, 29437, 70280, 33253, 27937, 93203, 28615, 20670, 35069, 99940, 61667, 82450, 74513, 45344, 34856, 15144, 59816, 97099, 67922, 92055, 55639, 16549, 31640, 92268, 80557, 19664, 69530, 62051, 77169, 13188, 63492, 8416, 4609, 29821, 51023, 95447, 92633, 64931, 6117, 25409, 46165};
    vector<int> keys = {1937, 227, 2977, 2024, 1883, 2347, 1545, 4069, 2483, 881, 1783, 1409, 38, 4845, 4050, 2484, 251, 4377, 3851, 485, 413, 573, 2163, 1537, 1951, 3237, 709, 3435, 3947, 1527, 441, 3973, 3323, 104, 1069, 847, 758, 2660, 985, 1795, 1449, 4804, 1004, 2127, 2383, 2636, 1240, 2842, 215, 4273};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "HfTrRHnFISBnNXRhYkUcMxsniFNXamLhwdmTfJRhWhjGBPLPEu";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {8240, 4510, 72073, 79269, 27166, 38494, 89381, 82225, 27014, 24037, 20182, 49919, 91273, 57737, 5950, 42997, 46761, 14644, 37915, 76045, 73968, 53102, 58969, 26354, 60419, 54575, 96695, 12092, 12456, 94177, 17030, 38175, 11698, 21705, 66653, 12561, 13786, 82678, 41454, 55660, 39143, 24228, 78286, 61254, 98101, 11636, 17694, 18532, 26086, 27894};
    vector<int> keys = {1323, 3591, 3923, 2045, 19, 3599, 406, 499, 2117, 3457, 1233, 2209, 1548, 1496, 2791, 1042, 643, 2743, 2991, 1334, 4589, 1441, 775, 4957, 2733, 1099, 598, 905, 17, 1678, 3733, 3308, 195, 3361, 3915, 865, 4547, 2959, 2347, 4967, 4764, 2813, 1957, 4163, 4352, 777, 3139, 2145, 71, 1381};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "qaLYOCNNjakBvNZHbgQDlcdZqDLrKvZXvEHpjRCNPPfbpSYrxF";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {39554, 38547, 577, 11483, 53990, 70153, 24440, 33053, 82633, 3978, 46613, 2807, 74750, 61057, 11910, 68957, 53366, 88297, 25056, 24448, 68428, 26075, 58490, 79122, 64990, 17586, 99637, 55031, 32846, 73246, 37938, 96193, 50613, 44597, 58764, 58017, 49472, 93879, 93910, 56177, 99618, 67802, 76469, 9877, 65907, 97052, 61691, 10274, 88289, 46658};
    vector<int> keys = {241, 1831, 1586, 3830, 3769, 1848, 1003, 851, 964, 4963, 2910, 4745, 1499, 386, 1211, 1249, 1765, 4668, 3221, 3359, 4763, 1121, 3497, 1849, 1083, 2075, 504, 1100, 4679, 2589, 2969, 2252, 1537, 4295, 1115, 4300, 4309, 1792, 4017, 1062, 3305, 2199, 4317, 4418, 3671, 3741, 1966, 3171, 4292, 213};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "hgLvDlOTxwHmqHBBfTtcuiNiZpNVFIWDjmODcNhpHfaLfTVuFF";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {51968, 48330, 86101, 11633, 52712, 41065, 10197, 13047, 54923, 50187, 98231, 83103, 43709, 47906, 63832, 19612, 48570, 74291, 18675, 27504, 49303, 38176, 79842, 90631, 20210, 63266, 37386, 71039, 86214, 86489, 61039, 26597, 97819, 62229, 66122, 4758, 5753, 38266, 90454, 52763, 30703, 47094, 56425, 82709, 78725, 99750, 5376, 43714, 48685, 78340};
    vector<int> keys = {4139, 1049, 2122, 2548, 987, 2278, 2956, 4399, 1624, 1813, 1217, 1274, 3174, 4291, 975, 2669, 3989, 2005, 2009, 3269, 3084, 1031, 3229, 793, 2041, 3319, 1093, 3288, 361, 875, 1371, 4312, 2720, 3319, 3235, 3095, 383, 1859, 3729, 107, 2355, 3179, 1668, 1761, 887, 4447, 607, 2401, 3837, 971};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "NelfghrlPvCldhrZhQfMHUGlroFxLialnfNRwqRJMMfbTmAEoo";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {84282, 67761, 48675, 35824, 35943, 98797, 2523, 59549, 96660, 11784, 58653, 84863, 25453, 63593, 20364, 93125, 31864, 22220, 68334, 57205, 87029, 14005, 87939, 81954, 96139, 86431, 22571, 38565, 43280, 40668, 4412, 22204, 85728, 79932, 13045, 99549, 31540, 27222, 51841, 15676, 81624, 89179, 12219, 98194, 55475, 81541, 16698, 30631, 48363, 86099};
    vector<int> keys = {4351, 3953, 799, 633, 343, 401, 3938, 748, 1643, 2765, 3737, 2438, 4583, 1721, 583, 4744, 3957, 3743, 3779, 2393, 1543, 2669, 2885, 2735, 682, 4272, 3167, 1288, 413, 767, 887, 3673, 4193, 3613, 2767, 1493, 4397, 2791, 4605, 7, 3751, 4976, 2162, 4897, 3981, 2433, 1115, 2752, 1025, 4635};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "ShlhMMLPFOwhBoFXdUhDGSdnrTsriLRwihbQtCBFZHPrwFCXbn";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {88857, 63929, 58857, 84298, 92508, 57572, 20857, 74196, 57754, 15766, 48231, 43914, 33769, 42734, 18614, 50043, 72804, 69287, 45138, 75367, 77193, 59249, 84718, 38127, 90194, 50818, 67665, 68042, 73685, 50320, 44631, 54263, 6820, 12694, 70794, 32669, 21532, 75568, 11732, 7730, 63070, 61932, 60659, 97627, 26821, 30183, 2418, 50395, 76207, 29709};
    vector<int> keys = {2308, 180, 4538, 1645, 1481, 1175, 3159, 4217, 4487, 125, 1526, 4351, 3693, 3757, 189, 2389, 3925, 1228, 4175, 2452, 3767, 3217, 4779, 2861, 3467, 733, 2017, 3337, 303, 2237, 22, 2659, 3417, 2047, 3127, 3634, 3861, 2139, 353, 2451, 1857, 2617, 4142, 325, 1796, 1366, 3383, 341, 2766, 1258};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "DxXvAhaoNkREPGNYsNbZsHMURXnvqdDdsZPZbxkmFDjmfXLOJX";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {73227, 68439, 39604, 19717, 82842, 78546, 89574, 5126, 35369, 98481, 97051, 7219, 33918, 2223, 65624, 94177, 15001, 83530, 78953, 47900, 39513, 21097, 185, 1101, 95207, 51260, 56919, 72324, 70028, 23266, 92461, 39410, 77316, 28280, 5973, 40848, 1015, 9, 61672, 84009, 81934, 82201, 20364, 69432, 84510, 46265, 35359, 11134, 67628, 20864};
    vector<int> keys = {2963, 2218, 1639, 3229, 1397, 3205, 3629, 1207, 1543, 2375, 2939, 3688, 2653, 1441, 235, 4844, 1171, 151, 4285, 3011, 1973, 921, 3138, 1610, 1951, 927, 4505, 4297, 57, 1211, 1440, 3971, 4751, 4981, 1249, 3223, 2201, 2768, 1337, 3020, 3349, 649, 757, 2147, 371, 4416, 3675, 2487, 597, 1025};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "QpoclpeNoVvrjbEfecHUTnxphJTUpLViKnZbxDpTGmiXtPOurJ";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {28886, 53878, 31026, 30477, 15755, 13489, 60143, 50415, 1274, 34925, 3086, 4235, 3994, 61892, 64514, 99183, 46376, 8904, 34977, 44381, 48919, 70839, 54896, 2538, 47207, 79575, 40499, 45576, 26471, 69335, 32580, 58079, 98482, 30850, 16971, 21236, 16358, 18494, 44184, 14370, 34310, 24286, 44961, 91136, 71409, 47981, 98300, 23133, 31106, 73400};
    vector<int> keys = {2953, 2653, 47, 2056, 4257, 2797, 1473, 803, 4561, 2278, 3237, 1403, 4311, 3077, 4063, 4988, 2963, 401, 2695, 2076, 3564, 1621, 2523, 4085, 4862, 719, 3974, 61, 4096, 2458, 3883, 516, 643, 3983, 3854, 3663, 4263, 739, 1055, 3581, 4723, 4051, 1549, 133, 1943, 3949, 2501, 887, 1291, 2903};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "mhIPXASraZsErjffDHwlJXIRFAFiLnJvlprpUnsTfcaDHrUZJS";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {78201, 93845, 61387, 22481, 85570, 85447, 10220, 41781, 9042, 64934, 90169, 93596, 32132, 38169, 81508, 7115, 52602, 57840, 57916, 23129, 53108, 64453, 6596, 51206, 65144, 23926, 28202, 28771, 19365, 89511, 39235, 36610, 44648, 35745, 51587, 40619, 38083, 47803, 96625, 10616, 78619, 893, 94476, 13576, 98132, 31207, 43122, 90883, 55505, 82491};
    vector<int> keys = {824, 352, 4081, 522, 29, 3803, 683, 3872, 3521, 3057, 1294, 1751, 4897, 3434, 2523, 3189, 4195, 2197, 935, 1827, 4925, 4524, 3057, 591, 2729, 1675, 241, 1197, 1756, 3962, 2708, 2377, 4595, 4562, 330, 4039, 4047, 4274, 3786, 679, 862, 2435, 4915, 2931, 3353, 2831, 3149, 2091, 2138, 4679};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "XHLdQcBpUSpLLPkBrkGovnEOoBrepFfDHjrciDBgZRuxRPARvx";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {90649, 37258, 80055, 93589, 28484, 83292, 30107, 41646, 45668, 72369, 4478, 61757, 90326, 26744, 1834, 38637, 77447, 34131, 80559, 40886, 46213, 33661, 87796, 33584, 60725, 35142, 36357, 18602, 79375, 87926, 67479, 82057, 85017, 89593, 49652, 60107, 50622, 39245, 41552, 56592, 13219, 95349, 90591, 59072, 42727, 93888, 47645, 3374, 21641, 18994};
    vector<int> keys = {1554, 4553, 3449, 1172, 477, 1787, 3109, 2147, 1433, 548, 425, 3519, 2327, 4217, 1969, 2303, 2755, 3722, 4612, 609, 3816, 1837, 4719, 4175, 261, 3613, 896, 4159, 4966, 2473, 895, 65, 1792, 3064, 2801, 675, 1721, 4818, 4031, 2759, 2166, 266, 1393, 4297, 1811, 539, 3827, 1439, 1446, 2097};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "RfufqpXUrPqqPKVtXvZlJTCOkrLavjiDJxCrUjxtRLMlkltjJC";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {68973, 76768, 15298, 77928, 76447, 14899, 87650, 52979, 34735, 72015, 94716, 72233, 77313, 63551, 2044, 23912, 70589, 23630, 8216, 57012, 18968, 55678, 52471, 6288, 23915, 80338, 79161, 47270, 2866, 71491, 35889, 46619, 88381, 49065, 4447, 71272, 83125, 40756, 76725, 33577, 42045, 33861, 91354, 79030, 89556, 13148, 41076, 68245, 56581, 20998};
    vector<int> keys = {3272, 1093, 2261, 299, 3007, 1745, 4017, 3521, 4148, 401, 2141, 999, 430, 1007, 2945, 2487, 1632, 2137, 2181, 1907, 3959, 3291, 623, 4543, 407, 279, 4430, 2651, 3127, 4337, 3445, 966, 849, 2428, 1146, 4287, 2684, 2131, 4663, 2558, 1849, 2467, 1677, 881, 3461, 521, 4381, 4356, 1964, 2223};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "rKTRxntTPJuXHmEqtnJYRhBBDJBGXMOnKbTJZENniaRKexhDJD";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {67130, 64293, 84963, 1468, 26065, 45680, 89613, 56468, 86618, 86105, 76376, 57630, 57630, 51016, 85139, 43814, 19439, 26432, 15243, 85078, 292, 6012, 62323, 87234, 25696, 52468, 72656, 96996, 16330, 75566, 15528, 84570, 95003, 29623, 91746, 86531, 38653, 9643, 54774, 63382, 77443, 17186, 19854, 63426, 99824, 74515, 76063, 87389, 69726, 88768};
    vector<int> keys = {837, 5, 334, 3091, 124, 583, 3781, 1435, 4343, 2707, 2161, 1799, 2899, 3615, 480, 787, 4339, 2683, 4310, 1753, 3113, 2881, 2410, 4015, 4589, 2525, 1619, 4997, 1273, 4173, 4531, 3247, 2915, 2963, 4861, 2137, 1728, 1723, 3869, 1673, 2469, 2687, 3239, 2005, 2755, 2397, 1798, 3171, 745, 2101};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "XCNnFAXvTpgUUaJYhXlZdnldgHeRrObYqrCLlEUMPpifnFFlVC";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {67161, 82674, 33308, 86067, 82057, 8977, 27316, 62435, 14874, 68850, 33043, 44404, 37634, 82618, 51885, 50141, 74074, 27094, 92748, 14191, 86467, 65229, 93950, 84499, 36749, 97732, 73020, 76057, 53490, 74255, 42806, 66694, 97657, 1483, 51581, 90530, 22187, 50761, 14622, 70289, 63056, 98887, 5315, 30892, 82829, 32239, 64869, 53706, 11606, 6656};
    vector<int> keys = {3577, 4165, 4329, 3128, 2707, 1242, 4423, 4036, 3241, 1559, 4404, 1535, 4721, 3837, 848, 1569, 4117, 3647, 4955, 3649, 773, 328, 4867, 1428, 4154, 3647, 917, 2866, 4949, 1869, 4249, 2159, 1881, 2942, 4235, 4247, 344, 1158, 989, 3726, 3993, 2337, 3696, 459, 752, 433, 2992, 461, 2587, 4599};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "AxnNVdsrXcviIqVffLbncLornRnnIFZMPNQcVvPBEhvqTWnJVM";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {89437, 20896, 55638, 45070, 91460, 29604, 98816, 14076, 88364, 14140, 31192, 70935, 73164, 43025, 51213, 37798, 62905, 54903, 44823, 81070, 17848, 9127, 34358, 12346, 85449, 54672, 87318, 56767, 2113, 23874, 67501, 13872, 13613, 29835, 59124, 41220, 68469, 9325, 58338, 36841, 97675, 6649, 5933, 83013, 18896, 38145, 30038, 40899, 93549, 11881};
    vector<int> keys = {3915, 131, 4309, 1963, 789, 4607, 3997, 3821, 495, 1359, 643, 2201, 475, 4384, 4, 19, 2529, 544, 3517, 3233, 3679, 920, 2339, 3911, 61, 41, 1369, 3943, 3951, 1109, 4259, 3059, 4792, 2386, 4135, 4019, 2294, 2797, 2591, 852, 313, 792, 3781, 2446, 1123, 4993, 87, 3619, 2434, 3588};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "wmMrCJYcTqwWixBLixjDMNPBFNIxIArZbBsxLKOhhZpPtvDfBp";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {34717, 6938, 81113, 62691, 12346, 93477, 54382, 6888, 28881, 54808, 85693, 38661, 17575, 99405, 56576, 8526, 89410, 57447, 11010, 59354, 80328, 99237, 52564, 60595, 47119, 6080, 13398, 25579, 77613, 89952, 76247, 58504, 96974, 224, 79481, 64900, 58596, 13196, 24836, 12220, 5493, 73364, 37629, 45641, 76041, 44084, 51, 48255, 6559, 29736};
    vector<int> keys = {4478, 4227, 2623, 4064, 475, 4060, 4703, 3701, 2549, 2225, 1882, 3809, 2254, 4232, 4989, 1931, 2393, 76, 3011, 1371, 4969, 3122, 59, 2313, 1532, 3727, 2021, 4576, 1042, 845, 2967, 223, 2191, 4493, 1340, 3849, 4777, 3879, 4213, 3657, 2759, 1085, 4525, 827, 704, 4577, 2137, 3263, 4490, 4903};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "bvpJGrNkEvhMNtBUYJvSUPvPPWIHrXqDiJLupiDQtnTlNASGTF";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {39211, 73750, 49122, 28709, 90414, 30351, 22225, 37519, 63303, 78889, 5236, 50838, 18266, 8908, 2220, 6040, 97023, 26304, 33245, 79974, 66444, 27541, 63710, 32374, 55686, 57916, 11887, 11884, 66153, 41201, 7414, 24408, 49108, 27895, 9089, 56135, 26756, 59757, 41613, 76935, 79157, 89449, 77797, 23713, 31560, 25821, 75292, 77881, 54582, 97760};
    vector<int> keys = {3752, 1531, 4057, 1355, 3439, 2072, 3714, 3010, 443, 4055, 2423, 781, 477, 4141, 413, 3837, 989, 773, 2066, 1351, 439, 4989, 1567, 4951, 3413, 771, 217, 2249, 1828, 1004, 2509, 1837, 1799, 1236, 1813, 2027, 3819, 2401, 941, 4129, 2167, 2519, 273, 1418, 2153, 1232, 4185, 204, 4849, 3909};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "bJInpNFnKEfHqJIAEuxpRncSIQNTXvKPGRfbDEglTMiRVXhNAl";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {85596, 37892, 95967, 67385, 47110, 55734, 72690, 12825, 82327, 15441, 51026, 87551, 62095, 32919, 18267, 71068, 52113, 74092, 49442, 81667, 325, 325, 71404, 6186, 43089, 48944, 26433, 50102, 324, 46991, 31205, 22769, 28769, 93594, 83689, 80133, 42039, 49143, 17938, 70388, 86332, 37940, 44682, 66828, 81447, 5041, 44283, 26528, 98198, 67753};
    vector<int> keys = {4891, 2269, 3379, 2598, 687, 2699, 803, 3754, 2739, 3310, 2419, 1705, 4858, 3115, 4876, 2485, 1333, 2991, 4847, 3552, 2973, 453, 4419, 3827, 2417, 1901, 4529, 2323, 1465, 2965, 3788, 3505, 3039, 3085, 3472, 2125, 1160, 2605, 3263, 4139, 2401, 1221, 3521, 3061, 3572, 1835, 2734, 1787, 669, 726};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "xDhRTZTjpfcajifWggGHFunaHIOSEQvxVTtvdldxUgVxrLVdDD";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {59399, 40685, 21438, 90194, 89060, 18856, 28981, 56073, 14245, 25575, 75012, 60439, 44713, 98541, 46260, 93387, 18579, 26506, 87141, 94805, 80124, 10402, 51251, 65518, 3267, 12743, 95190, 5855, 39525, 60862, 50822, 86154, 37738, 7540, 50841, 74461, 16922, 81201, 36909, 8151, 73326, 77074, 49637, 98219, 68079, 50592, 85351, 97691, 72814, 74791};
    vector<int> keys = {293, 207, 2407, 4221, 3099, 4445, 3642, 4142, 4428, 3721, 1357, 401, 97, 3421, 1739, 752, 3605, 4609, 4979, 2893, 479, 911, 2939, 579, 3115, 4802, 2639, 2881, 3218, 3279, 4175, 89, 3727, 303, 2641, 2390, 3397, 2777, 1084, 3095, 4517, 861, 3298, 3034, 3085, 883, 2986, 4041, 3709, 896};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "gLKPmutjdJSoYTDLxRrQMhsUcTGGhUhtnblBwrZBeWdFdMvIxN";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {57957, 92126, 79701, 98960, 14583, 28316, 55520, 40273, 52300, 53855, 92237, 93750, 36689, 83775, 7381, 96088, 15198, 46236, 2584, 83909, 34911, 43156, 2361, 42146, 53654, 27424, 68204, 39974, 21193, 96926, 14202, 73101, 35141, 77975, 98598, 36445, 69630, 33741, 29403, 97011, 33899, 86872, 1637, 23205, 42637, 89757, 78744, 53883, 70282, 10717};
    vector<int> keys = {2071, 871, 2659, 2241, 1724, 1539, 3627, 3212, 2299, 2541, 1830, 1637, 300, 4673, 2650, 121, 1357, 2701, 3987, 732, 2102, 4047, 557, 401, 2977, 3131, 4545, 4909, 2846, 1443, 4261, 2462, 4953, 4872, 4319, 1431, 1139, 1882, 2249, 80, 2975, 2579, 1660, 1192, 2424, 2768, 811, 3946, 1863, 404};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "ijdZnukHFgrXJuVaalmvnMoNhoYPNttrlVcIZtULxJhjdrInhx";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {47588, 37398, 75468, 16873, 30477, 23006, 30644, 33708, 8044, 46469, 78189, 30282, 89596, 14785, 57620, 19304, 34062, 80471, 70249, 86925, 52923, 80963, 68900, 42585, 33499, 54421, 79287, 24919, 83822, 60727, 38481, 61509, 53906, 15823, 22333, 4941, 32487, 42607, 60783, 57989, 53153, 52202, 7626, 56689, 69277, 95693, 39644, 1635, 73298, 68363};
    vector<int> keys = {447, 755, 2711, 4578, 3370, 3023, 1887, 55, 2673, 861, 964, 4649, 4803, 3609, 2917, 3427, 3629, 1376, 3474, 4357, 2072, 2408, 3637, 2437, 3875, 3147, 4057, 2635, 3245, 3101, 17, 3826, 3711, 1159, 1027, 3029, 2017, 1723, 3811, 3096, 1413, 19, 283, 4555, 3102, 4912, 355, 976, 3543, 1485};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "gHpxDMHvoBBhtEZdtrJgfFWJYieirSMZqsfPKVsZQRgnhjEJpH";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {67490, 60609, 36919, 23593, 32675, 21552, 7267, 164, 74312, 17240, 80545, 66127, 50789, 40686, 95687, 13918, 34979, 22397, 35680, 27355, 74935, 29153, 49502, 83630, 88576, 40534, 12669, 50389, 79845, 66326, 91075, 71720, 90896, 58212, 7684, 47504, 72514, 25165, 37117, 36868, 63293, 83486, 69270, 58341, 17009, 59691, 89872, 16879, 7196, 17245};
    vector<int> keys = {1163, 3052, 3405, 4832, 3521, 3013, 1395, 17, 3551, 1233, 4573, 893, 173, 4553, 2642, 1329, 3247, 1999, 1877, 4813, 642, 643, 2429, 3619, 1629, 4275, 4547, 3044, 419, 1841, 2538, 4427, 1967, 2311, 1069, 1657, 4837, 2309, 2256, 687, 1322, 3203, 1297, 3209, 4462, 2533, 4707, 1202, 1975, 2916};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "UHxXgerOeGQIJSnpZYZSXBvnvOaTnkvWYMCQTTfHxbHSRbrPGV";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {42674, 40502, 748, 67290, 53133, 15230, 68705, 69263, 68756, 98706, 10981, 5357, 1334, 43012, 15165, 1219, 60866, 7673, 9566, 16861, 39970, 8259, 24942, 39726, 78183, 72246, 17948, 65593, 17786, 13031, 50216, 42117, 81256, 20946, 5750, 20600, 84505, 48784, 33711, 73014, 49802, 38518, 23687, 83352, 97587, 95830, 56193, 15054, 77344, 69500};
    vector<int> keys = {3701, 4247, 2335, 1867, 4930, 491, 2442, 4154, 4743, 2209, 767, 4090, 4717, 3089, 3347, 3330, 4369, 3522, 4673, 2309, 1573, 4949, 3841, 1331, 88, 4037, 3303, 1490, 2369, 2644, 4161, 4006, 2431, 181, 1573, 987, 2111, 3023, 1606, 871, 1817, 2895, 2070, 3769, 4372, 4229, 4088, 3491, 3911, 2753};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "MHCZlgbRqWQDqQBJjZNZnqThdrOlpPOtcaUWdOHeQbNEBhjJKQ";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {63237, 38219, 47387, 9339, 98851, 22166, 68139, 93710, 48284, 55039, 29033, 11184, 63618, 44209, 10656, 47474, 47304, 92908, 10074, 17231, 74142, 23582, 56276, 58123, 28784, 58476, 78370, 24308, 83349, 17055, 22088, 13319, 54314, 67672, 32505, 58574, 32997, 14353, 33877, 33471, 79770, 8661, 41100, 42407, 8540, 51299, 31552, 19131, 65125, 88459};
    vector<int> keys = {4547, 672, 1040, 694, 1109, 3633, 1129, 4561, 3901, 3163, 3419, 3067, 367, 427, 1927, 1545, 2903, 3225, 721, 1110, 3191, 4735, 659, 2031, 3947, 1127, 1193, 729, 2831, 2084, 4535, 4837, 955, 2069, 76, 839, 1427, 4395, 3033, 1600, 3667, 343, 3163, 4533, 2909, 3078, 467, 374, 49, 2959};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "ETNNBOeVMexLpYonZWkpUDBTiQutExChiVhoACKfpEeooZoFlu";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {18343, 62252, 52256, 50720, 16626, 59699, 78658, 49571, 35232, 49332, 44846, 51466, 9198, 50567, 97063, 24962, 65159, 83829, 76236, 93853, 58887, 19125, 32430, 48545, 14329, 96812, 88543, 81557, 87293, 41364, 93045, 41292, 14146, 45745, 9102, 37766, 8734, 51316, 10555, 14134, 39172, 86208, 93992, 18694, 50245, 53710, 70560, 73437, 96859, 81445};
    vector<int> keys = {3559, 1865, 243, 2381, 3235, 757, 2027, 1451, 103, 2369, 1779, 2671, 167, 1937, 194, 1937, 786, 1973, 3541, 1985, 364, 2743, 671, 2883, 1236, 4711, 2, 439, 2632, 3155, 1433, 4253, 1577, 3838, 311, 465, 663, 3191, 3123, 1531, 4741, 3161, 2187, 2505, 3902, 4817, 3421, 1333, 1310, 1711};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "SDVUfstAkJwFoAbYlnrRFvCOLxBDndoFZtPVPGMMqrwTtivmTi";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {71694, 57062, 70399, 40585, 14673, 51778, 56466, 89920, 88807, 3821, 92173, 31585, 41829, 27975, 33825, 96521, 37892, 38182, 27813, 12807, 97048, 64220, 8072, 22299, 86600, 86847, 90929, 46920, 16229, 57016, 33572, 97397, 83852, 91836, 12689, 52147, 29785, 7620, 35809, 59446, 83055, 58657, 19422, 32192, 25639, 99285, 55200, 11245, 57859, 76383};
    vector<int> keys = {1249, 4473, 4890, 3793, 665, 1407, 3443, 4637, 2359, 4597, 2213, 3602, 1955, 2513, 529, 4260, 4287, 4469, 4301, 232, 3953, 1019, 1403, 2299, 2659, 446, 2642, 623, 3173, 489, 4891, 4837, 2747, 3059, 2456, 3957, 1968, 293, 2585, 4491, 1261, 411, 3409, 2533, 3869, 2179, 2641, 579, 3428, 1183};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "kAxhgGMJmiHZYVXphardqaiOBdbbLncsOrZaFvxgCYGEZtTnJL";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {65247, 41777, 99305, 7069, 60227, 94084, 11940, 6788, 84767, 55903, 36858, 27205, 12268, 91592, 73228, 49359, 76054, 62031, 63686, 7501, 28280, 7810, 40328, 66540, 77336, 14802, 16486, 84608, 78458, 97020, 40640, 93952, 39490, 38393, 86371, 22878, 56544, 32482, 25396, 11683, 12795, 47112, 19473, 46290, 57688, 19531, 71394, 44731, 33585, 56952};
    vector<int> keys = {3859, 103, 2247, 2200, 3722, 2357, 1847, 2733, 4221, 147, 3517, 1104, 2301, 2017, 2419, 4096, 2857, 2825, 1541, 2946, 1013, 3413, 1597, 2257, 4295, 1139, 3295, 2079, 1851, 947, 973, 2925, 1241, 2760, 2892, 2539, 2467, 3997, 1755, 1733, 3989, 2765, 4367, 3887, 1955, 731, 2521, 2400, 647, 3085};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "mFLdhmPJDGXJqckhbuaTFvCOaLuuCJJmAHHtBTkrEcPJqKdVSc";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {2128, 59531, 32025, 94043, 4917, 6631, 998, 15499, 68875, 40848, 55388, 75072, 21884, 22216, 80518, 46222, 70197, 15625, 4416, 80975, 18521, 95884, 48061, 1564, 4463, 54084, 21195, 32261, 10070, 28926, 50875, 88725, 90983, 9047, 28087, 97280, 7223, 65371, 71508, 12392, 48680, 76129, 36896, 37030, 23101, 1407, 45613, 27617, 14687, 48980};
    vector<int> keys = {1371, 2433, 3758, 4929, 3908, 293, 3129, 1366, 4589, 4643, 123, 1801, 673, 3545, 4907, 3697, 725, 643, 3217, 2949, 4749, 3569, 2259, 2069, 3873, 1997, 1387, 3989, 3221, 1507, 608, 4292, 4066, 390, 4611, 4847, 1978, 3915, 1927, 3711, 4153, 2978, 2983, 3403, 2887, 664, 11, 3032, 4385, 2689};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "NvbEnYefMZSZnGwXIKNYnnexUYODjVdPJhfinLQfGFqbFLIfcg";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {17857, 58312, 58574, 83473, 14953, 11113, 64780, 55876, 93947, 13147, 79808, 53554, 8254, 47194, 42701, 66514, 21494, 64186, 32484, 77062, 25847, 77544, 265, 95670, 75205, 17735, 30467, 37145, 10935, 79983, 12357, 48749, 56188, 53181, 46507, 14932, 68470, 13899, 19886, 66935, 69579, 5788, 57991, 19756, 17039, 1731, 2781, 43862, 41798, 63775};
    vector<int> keys = {3555, 2725, 2663, 3709, 994, 3371, 221, 4077, 1360, 899, 1813, 3023, 4823, 2757, 2287, 3957, 4207, 969, 4661, 1015, 1376, 2447, 1433, 1567, 4219, 3306, 230, 1107, 26, 1786, 2974, 4371, 161, 4771, 1178, 4743, 393, 409, 3847, 3929, 3055, 271, 2860, 1411, 3499, 3281, 4621, 2605, 1493, 391};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "SwpHrffthpEHuGqUXwFNVSlWGHrKHNdkKPTmRqpuitpGYvVhsU";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {66587, 42998, 32712, 34642, 42002, 90155, 69745, 31291, 22437, 75397, 11058, 7417, 13518, 71597, 18624, 60202, 50287, 46966, 45650, 62913, 93900, 94579, 31120, 72544, 60799, 30136, 17534, 36809, 83877, 32277, 85713, 10263, 41552, 74493, 94819, 34264, 67737, 38006, 555, 96197, 73360, 946, 42, 59616, 68384, 70727, 17947, 48869, 72214, 63755};
    vector<int> keys = {262, 1997, 3181, 1613, 769, 592, 1063, 373, 1000, 1508, 2599, 2939, 1795, 4271, 2099, 1177, 670, 1333, 4049, 3805, 1967, 2908, 497, 2407, 599, 4111, 3363, 563, 4739, 878, 4355, 896, 219, 2915, 3130, 4597, 3871, 137, 596, 4398, 4181, 1475, 3973, 763, 2409, 3232, 3168, 3394, 269, 4269};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "PqJkwvKgXFrrgmsRNDjbKJFWCoEqpVCtjWdtRZHNMGXaCXXXkC";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {42873, 83485, 85167, 1518, 55096, 54628, 66696, 70753, 79439, 14416, 24534, 89104, 76596, 92783, 47739, 12103, 89170, 84378, 9204, 82098, 25357, 2688, 14068, 91711, 64275, 26415, 73450, 19390, 97042, 20378, 8072, 44594, 83825, 5133, 85299, 87344, 63799, 57024, 32631, 19730, 2355, 43493, 50899, 65388, 97837, 37292, 71182, 37072, 98752, 7593};
    vector<int> keys = {3047, 3107, 2803, 1879, 1645, 1077, 527, 2806, 336, 3093, 59, 2931, 4703, 3258, 2990, 3950, 1577, 1109, 1877, 3389, 3974, 4105, 4009, 655, 782, 3383, 2343, 3341, 2347, 2961, 2995, 2527, 534, 854, 4624, 2719, 4141, 989, 1052, 3793, 2182, 4097, 595, 3481, 3905, 4349, 4339, 765, 2727, 2446};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "dPBmkYgTvqDRHXTRwJvFNbpklaxWqGXFptDapdrEpKsrNUwNSR";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {73686, 53309, 66829, 38330, 39650, 71228, 48769, 1402, 97128, 44363, 17174, 94837, 95024, 7497, 16991, 76994, 50172, 9242, 5100, 32817, 7031, 27452, 17586, 91076, 77210, 67874, 66102, 78211, 24663, 32771, 9460, 54349, 45639, 42828, 37698, 93961, 16440, 57877, 87607, 6148, 46576, 69784, 81063, 37681, 80072, 34314, 40506, 65707, 33499, 67865};
    vector<int> keys = {2287, 2985, 4533, 2043, 4513, 221, 228, 2925, 505, 113, 309, 716, 325, 568, 2718, 665, 995, 1361, 4723, 4531, 2324, 3295, 4649, 597, 2277, 4943, 4295, 2943, 221, 3298, 2061, 826, 1211, 1361, 4835, 922, 1433, 2980, 1624, 1357, 3315, 2507, 1246, 4498, 1659, 4337, 4693, 871, 3278, 3833};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "uOuVOsJNCbOpxbVYmbWdPwfBTmcAWJAhVmWLGhBEGatjeKFOBd";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {78935, 99530, 29377, 29152, 86350, 46760, 83697, 93465, 49097, 60060, 56750, 94438, 74391, 83684, 40683, 53784, 45709, 11568, 23949, 16439, 48534, 44686, 38142, 97981, 36991, 6600, 95061, 3863, 83925, 63514, 15021, 28727, 46567, 47958, 44796, 17211, 10056, 3703, 51562, 56430, 41934, 53582, 57810, 74706, 2128, 41599, 51463, 41142, 4989, 16036};
    vector<int> keys = {3264, 1133, 63, 4769, 2611, 3233, 823, 4553, 113, 439, 2903, 3511, 3959, 4879, 2662, 139, 3845, 3697, 1429, 751, 1997, 3705, 4819, 602, 91, 301, 2420, 3921, 4822, 777, 3302, 4675, 2107, 1289, 1691, 122, 2297, 1158, 57, 4799, 707, 3527, 1151, 319, 3867, 604, 223, 2479, 1859, 3527};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "lDKOsKJjlmkWokBInQEoVpLlnpVmJndmpsAtHtCiQSsSTBPYjv";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {44459, 37657, 81047, 28273, 27374, 58716, 7822, 35544, 33510, 24851, 15137, 87445, 14298, 14614, 20121, 62376, 46097, 84898, 94438, 37374, 22471, 89805, 78184, 33511, 5944, 97443, 85003, 29559, 74107, 55960, 37431, 55998, 7159, 91875, 54032, 96039, 41810, 46104, 8001, 75467, 59908, 66088, 90724, 18948, 89257, 76035, 43119, 86853, 68786, 41518};
    vector<int> keys = {3134, 4185, 3529, 1479, 2731, 2039, 3609, 4955, 3809, 2316, 3276, 2381, 739, 2421, 1726, 355, 999, 967, 2565, 2873, 2887, 2804, 891, 2113, 4679, 1927, 3692, 512, 227, 39, 3871, 2231, 3806, 1543, 3807, 1445, 2387, 4307, 2096, 394, 491, 4067, 3559, 4579, 3718, 3514, 1919, 4408, 43, 4589};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "ZXprDavsUXrmQhHGDKvsqlMfkFdVefpVPbnEXDvlgKZibxOxDo";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<int> data = {33089, 97927, 70015, 38106, 98436, 52997, 22687, 3843, 42244, 61246, 55914, 51082, 19712, 74759, 90189, 93589, 34299, 49120, 92330, 40515, 31478, 49059, 21679, 62076, 32596, 22130, 78983, 1287, 2084, 58508, 45593, 85231, 77697, 29676, 94861, 34372, 70520, 39146, 42464, 29043, 59135, 24269, 77895, 68539, 60656, 19815, 85450, 50114, 60278, 31171};
    vector<int> keys = {991, 138, 3394, 2429, 1675, 3571, 2831, 4178, 4073, 2235, 2873, 1927, 3725, 4902, 116, 3581, 3089, 3157, 3401, 3097, 2223, 4904, 1473, 4789, 403, 3359, 518, 3386, 1811, 2391, 1515, 469, 214, 3401, 3298, 2861, 3939, 1611, 4739, 925, 2129, 4601, 2884, 4957, 4875, 2456, 717, 441, 1319, 2329};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "MNLsQXvRnLwiwBHgQnTtfXKjKmBfpkqwHHhJdVNgXKZruDVNaH";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string pool = "abc";
    vector<int> data = {5, 5, 5, 5, 5};
    vector<int> keys = {2, 7, 13, 47, 23};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "bacbc";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<int> data = {5};
    vector<int> keys = {3};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string pool = "ab";
    vector<int> data = {2};
    vector<int> keys = {5};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<int> data = {11, 2, 3, 4};
    vector<int> keys = {1987, 5, 5, 5};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "WDCE";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<int> data = {7};
    vector<int> keys = {3};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string pool = "abc";
    vector<int> data = {5, 5, 5, 5, 5};
    vector<int> keys = {2, 7, 13, 47, 23};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "bacbc";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<int> data = {5};
    vector<int> keys = {3};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string pool = "ab";
    vector<int> data = {2};
    vector<int> keys = {5};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<int> data = {11, 2, 3, 4};
    vector<int> keys = {1987, 5, 5, 5};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "WDCE";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<int> data = {7};
    vector<int> keys = {3};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string pool = "abc";
    vector<int> data = {5, 5, 5, 5, 5};
    vector<int> keys = {2, 7, 13, 47, 23};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "bacbc";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<int> data = {5};
    vector<int> keys = {3};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string pool = "ab";
    vector<int> data = {2};
    vector<int> keys = {5};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<int> data = {11, 2, 3, 4};
    vector<int> keys = {1987, 5, 5, 5};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "WDCE";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<int> data = {7};
    vector<int> keys = {3};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string pool = "abc";
    vector<int> data = {5, 5, 5, 5, 5};
    vector<int> keys = {2, 7, 13, 47, 23};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "bacbc";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<int> data = {5};
    vector<int> keys = {3};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string pool = "ab";
    vector<int> data = {2};
    vector<int> keys = {5};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<int> data = {11, 2, 3, 4};
    vector<int> keys = {1987, 5, 5, 5};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "WDCE";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string pool = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<int> data = {7};
    vector<int> keys = {3};
    TerribleEncryption* pObj = new TerribleEncryption();
    clock_t start = clock();
    string result = pObj->decrypt(pool, data, keys);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=293874&rd=5867&pm=1924
********************************************************************************
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <sstream>
#include <iostream>
 
using namespace std;
 
// basic typedefs 
typedef vector<int>    vi;
typedef vector<vi>    vvi;
typedef vector<string> vs;
typedef vector<vs>    vvs;
typedef string        str;
typedef double        dbl;
typedef long long      ll;
typedef istringstream ist;
typedef ostringstream ost;
 
// basic abbreviations
#define mp(a,b) make_pair(a,b)
#define sz size()
#define vp(v,a) v.push_back(a)
 
// basic loop macro
#define rep(var,n)    for(int var=0;var<((int)n);var++)
#define foreach(it,s) for(__typeof(s)::iterator it=s.begin(); it!=s.end(); it++)
#define ri(n) rep(i,n)
#define rj(n) rep(j,n)
#define rk(n) rep(k,n)
 
class TerribleEncryption {
public:
  string decrypt(string, vector <int>, vector <int>);
};
 
string TerribleEncryption::decrypt(string pool, vector <int> data, vector <int> keys) {
  str ret(data.sz,' ');
  
  ri(data.sz) {
    int k=1;
    for(k=1; k<keys[i]; k++)  if ((data[i]*k)%keys[i] == 1)
      break;
      
    int j = k % (pool.sz);
    ret[i] = pool[j];
  }
  
  return ret;
}
 
 
//Powered by [KawigiEdit]

********************************************************************************
*******************************************************************************/