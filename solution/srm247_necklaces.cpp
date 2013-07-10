/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3487
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

class Necklaces {
public:
    int inequity(int n, vector<int> gems);
};

int Necklaces::inequity(int n, vector<int> gems) {
    int ret;
    return ret;
}


int test0() {
    int n = 1;
    vector<int> gems = {5, 12, 2, 9};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 2;
    vector<int> gems = {5, 12, 9, 2};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 4;
    vector<int> gems = {100, 92, 133, 201, 34, 34, 34, 94, 108};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 4;
    vector<int> gems = {100, 107, 103, 109, 103, 102, 110, 140, 190, 130, 120, 200, 300, 109, 108, 107, 106, 155, 144, 103, 108, 300, 400, 130, 120, 140, 230, 150, 110, 107, 102, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 5;
    vector<int> gems = {100, 107, 103, 109, 103, 102, 110, 140, 190, 130, 120, 200, 300, 109, 108, 107, 106, 155, 144, 103, 108, 300, 400, 130, 120, 140, 230, 150, 110, 107, 102, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 4;
    vector<int> gems = {90, 1, 100, 1, 90, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 2;
    vector<int> gems = {1, 1, 1, 1, 1, 1, 6, 1, 1};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
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
    int n = 3;
    vector<int> gems = {1, 1, 1, 1, 1, 1, 6, 1, 1, 1};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 3;
    vector<int> gems = {1010, 912, 1, 812, 922, 922, 6, 34, 811, 11, 123, 234, 345, 456, 345, 345, 234, 5467, 345, 234, 456, 234, 234, 1, 4, 32, 5, 32};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 1155;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 4;
    vector<int> gems = {1010, 912, 1, 812, 922, 922, 6, 34, 811, 11, 123, 234, 345, 456, 345, 345, 234, 5467, 345, 234, 456, 234, 234, 1, 4, 32, 5, 32};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 2770;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 5;
    vector<int> gems = {1010, 912, 1, 812, 922, 922, 6, 34, 811, 11, 123, 234, 345, 456, 345, 345, 234, 5467, 345, 234, 456, 234, 234, 1, 4, 32, 5, 32};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 3560;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 20;
    vector<int> gems = {1010, 912, 1, 812, 922, 922, 6, 34, 811, 11, 123, 234, 345, 456, 345, 345, 234, 5467, 345, 234, 456, 234, 234, 1, 4, 32, 5, 32};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 5393;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 4;
    vector<int> gems = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 49, 1000, 345, 23, 23};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 595;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 7;
    vector<int> gems = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 49, 1000, 345, 23, 23};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 825;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 1;
    vector<int> gems = {6};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
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
    int n = 2;
    vector<int> gems = {1, 100000};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 99999;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 27;
    vector<int> gems = {86261, 26865, 88477, 46270, 4895, 88972, 8701, 25981, 60377, 37943, 21831, 61223, 99331, 30094, 98178, 41214, 37295, 43332, 44932, 68243, 71617, 5340, 58306, 41235, 10774, 5640, 46021, 34257, 52864, 49340, 91710, 97548, 95055, 56109, 67856, 48220, 67820, 30891, 57387, 6079};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 72676;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 7;
    vector<int> gems = {67033, 1914, 92336, 1316, 15281, 81870, 71786, 73639, 84138, 47641, 47675, 93017, 79401, 79526, 39417, 35474, 15675, 22066, 16639, 24537, 79838, 24476, 55732, 23947, 84953, 31880, 87852, 41995, 60588, 24527, 73160, 80288, 24419, 18951, 21529, 49103, 68, 86795, 23810, 29397, 75047, 65191, 10907, 30753, 29509, 81858, 38066, 75469, 97449, 11431};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 43751;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 48;
    vector<int> gems = {5284, 66738, 36713, 80704, 24061, 45204, 26949, 72608, 73957, 12931, 20506, 90915, 23175, 32930, 57283, 35460, 18398, 45672, 39228, 58085, 12482, 46607, 28741, 98984, 64346, 34907, 49509, 84909, 66037, 15748, 92427, 95689, 1588, 38050, 99728, 25887, 28799, 10773, 62680, 64829, 13559, 20974, 45048, 38070, 31531, 29918, 78865, 22743, 54501};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 94444;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 41;
    vector<int> gems = {39433, 62940, 65765, 40060, 16514, 66860, 44229, 44406, 54855, 37826, 42045, 22145, 87714, 74609, 45537, 65486, 86972, 65475, 33278, 83692, 7960, 7209, 39589, 39878, 70508, 93235, 9775, 67304, 36124, 36315, 84658, 44770, 45429, 57595, 68895, 14245, 39875, 17087, 69396, 51434, 18159, 22037, 68229, 66194, 312, 11297};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 78066;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 16;
    vector<int> gems = {43564, 66701, 1348, 84259, 4356, 51006, 45466, 3783, 28250, 79745, 69611, 16459, 82951, 95844, 31591, 13782, 42397, 87394, 51439, 16707, 9438, 21782, 33149, 40579, 91416, 58481, 64752, 59457, 20157, 16390, 5336, 78304, 29955, 27906, 31195, 67073, 11444};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 48590;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 23;
    vector<int> gems = {5249, 22707, 14427, 89988, 16703, 3532, 50374, 6636, 86811, 85782, 87381, 40105, 13306, 91657, 92822, 11794, 64934, 54198, 96346, 67924, 22899, 31559, 645, 23961, 19548, 1299, 98565, 84471, 39467, 41342, 88767, 78578, 92215, 28779, 59620, 58159, 75048, 95167, 2339, 22934, 81910, 53236, 37593, 78530, 99503, 86294, 18083, 95849};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 65243;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 6;
    vector<int> gems = {92308, 81283, 70507, 4040, 80642, 71897, 48766, 43602, 95514, 78891, 87044, 87572, 25332, 19453, 95085, 92375, 10305};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 51724;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 27;
    vector<int> gems = {38676, 39936, 44856, 90890, 90538, 38705, 36366, 1094, 11546, 52161, 99221, 3643, 40514, 69795, 63218, 25166, 62133, 99296, 73514, 99212, 98260, 60037, 24012, 9937, 11275, 94011, 17687, 10087, 17194, 19828, 6953, 97190, 59806, 78401, 13030};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 78084;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 8;
    vector<int> gems = {55201, 1857, 30498, 5097, 28499, 40522, 4629, 80025, 61100, 40756, 41887, 21346, 72420, 79073, 70057, 30412, 37035, 98829, 98102, 85335, 29722, 27988, 57641, 52473, 79395, 2849, 52740, 60435, 14602, 69556, 17484, 68814, 96813, 1614, 85704, 35767, 42303, 54684, 68168, 61077, 10642, 9598, 7267, 39043, 37746, 25139, 12312, 26318, 30671, 21827};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 34720;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 12;
    vector<int> gems = {24083, 41288, 90263, 74455, 45970, 19834, 69799, 21125, 56894, 81846, 13954, 52517, 2074, 85642, 68283, 96504, 73095, 76703, 82490, 29322, 62970, 45860, 79005, 29612, 99182, 95347, 83231, 38319, 98454};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 67820;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 2;
    vector<int> gems = {52766, 16587, 86824};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 17471;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 37;
    vector<int> gems = {93123, 1609, 62002, 87945, 19235, 50304, 95458, 83877, 78379, 37673, 62304, 11744, 78063, 22984, 44685, 35341, 77319, 34873, 3538, 81968, 40828, 88757, 33024, 73282, 74626, 29181, 59161, 16481, 87205, 51782, 583, 14417, 57468, 63298, 37577, 79699, 21371, 14631, 73007, 24321, 9572, 3582, 30427, 5987, 55869, 26570, 65447, 75473, 77852, 46290};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 66277;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 5;
    vector<int> gems = {50687, 86669, 29249, 59451, 62809, 62633, 41827, 42281, 14279, 29528, 60625, 47125, 93568, 45560, 1009};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 13192;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 2;
    vector<int> gems = {9374, 22636, 15053, 20042, 77822, 21839, 70389, 99475, 90105, 90794, 18986, 12224, 26243, 98651, 52542, 97788, 61615, 11621, 97039, 39710, 59898, 40025, 73449, 21267, 48913, 61911, 64089, 8084, 58560, 89262, 41226, 50166, 50808, 67743};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 1807;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 9;
    vector<int> gems = {24284, 33856, 92457, 54038, 88905, 40476, 18125, 80404, 52159, 56791, 47950, 37239, 17520, 2736, 63314, 66454, 85667, 90399, 41655, 85006};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 57276;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 7;
    vector<int> gems = {40784, 65914, 4782, 15203, 18589, 40321, 93195, 37291, 72327, 35978, 69645, 96051, 49173, 61930, 42702, 24992, 8269, 71838, 88283, 99742, 29130, 66804, 72034, 98278, 72502, 7204, 10905, 29560, 46693, 98236, 26952, 22632, 16687, 28408, 79125};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 58350;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 39;
    vector<int> gems = {47761, 63531, 56180, 64796, 50924, 2213, 11819, 63211, 80115, 73980, 1306, 70847, 54625, 69259, 72020, 82471, 46007, 88283, 45834, 88306, 4460, 76592, 21961, 53897, 97409, 11663, 37306, 98248, 45329, 64202, 86247, 74619, 49479, 32970, 64318, 67378, 48267, 74072, 57069, 6241, 17365, 80264, 19757, 19062, 9506};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 84216;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 2;
    vector<int> gems = {48759, 50403, 95950, 21442, 91223, 81778, 33563, 83093, 91285, 93824, 28332, 36760, 88306, 15370, 50081, 1822, 67309, 79754, 83101, 86093, 86812, 16522, 23193, 81629, 65321, 45715, 62180, 95199, 99206, 63043, 70645, 86298, 62703, 70141, 12719, 60145, 16731, 84923};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 3527;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 43;
    vector<int> gems = {84510, 17214, 23381, 1798, 52926, 12998, 69357, 93661, 74384, 11261, 76185, 59364, 35407, 20877, 20861, 38846, 70840, 29874, 65478, 51091, 47492, 49258, 51831, 15028, 74659, 43689, 7890, 51579, 97330, 83145, 94144, 85552, 20472, 99135, 46173, 63913, 61859, 83849, 20195, 26729, 24730, 46051, 20241};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 97337;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 9;
    vector<int> gems = {90552, 67991, 83317, 93218, 81814, 62465, 6061, 27876, 37754, 24670, 21355, 38535, 55979, 62571, 40516, 24494, 59843, 16673, 94855, 83319, 68807, 6968, 68771, 15474, 28471, 57526, 65606, 15517};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 47451;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 45;
    vector<int> gems = {80479, 98941, 79024, 35004, 62213, 95483, 82370, 45513, 66129, 74456, 92184, 92923, 2757, 47311, 646, 22991, 72304, 98149, 28746, 39815, 94250, 39247, 1337, 52442, 21945, 34625, 65301, 86684, 28695, 50350, 92251, 11205, 9002, 51361, 8120, 34240, 42035, 56503, 78972, 61874, 92098, 2294, 91431, 57445, 86662, 34734, 24927};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 96647;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 21;
    vector<int> gems = {97931, 90436, 97062, 25148, 71668, 51355, 16952, 91408, 96739, 34822, 59782, 47744, 27073, 14516, 87689, 74062, 96894, 19573, 17686, 63554, 33737, 66726, 76913, 23558, 19026, 15723, 94318, 98641, 59226, 56890, 40740};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 59224;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 3;
    vector<int> gems = {48980, 15409, 52577, 34362, 84303, 60548, 10506, 38605, 99310, 41835, 80166, 66122, 55474, 19353, 56816, 11334, 43145, 9139, 30294, 96647, 80229, 44056, 10752, 88543, 15592, 55403, 52427, 84773, 46139, 45502, 82574, 7089, 99710, 45117, 60094, 40532, 93145};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 4750;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 2;
    vector<int> gems = {5394, 16465, 75837, 61261, 68413, 3127, 15754, 88338, 73839, 55866, 78027, 10741, 83268, 48605, 5053, 54004, 48305, 56451, 58896, 18039, 47813, 88742, 43283, 8302, 28346};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 835;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 19;
    vector<int> gems = {74615, 66072, 51103, 44378, 40091, 29895, 75924, 23249, 41944, 1198, 52168, 20207, 27961, 47213, 74188, 64018, 21249, 43795, 81393, 78707, 65478, 25885, 735, 36880, 60794, 68268, 14686, 10645};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 40882;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 20;
    vector<int> gems = {81489, 43015, 46639, 39672, 25892, 60908, 10970, 63647, 76954, 99675, 15435, 62513, 8585, 40700, 1129, 18195, 86305, 25051, 24574, 89098, 66727};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 91090;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 12;
    vector<int> gems = {76438, 31072, 72896, 78551, 79279, 26856, 15577, 1496, 44667, 97603, 21644, 82410, 49034, 68363, 42718, 48364, 48974, 83496, 69582, 45803, 20762, 65757, 10245, 38598, 10645, 19295, 38042, 27345, 44475, 65761, 49218, 21556, 35761, 76426, 29203, 73363, 70274, 51592, 54708};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 59441;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 3;
    vector<int> gems = {43870, 25667, 76749, 15680, 79001, 21314, 20439, 46697, 89568, 19871, 21948, 20316, 81289, 98366, 56916, 75080, 62761, 90309, 71133, 61179, 21284, 15747, 25753, 63457, 13858, 62174, 86770, 48729, 8066, 85529, 8701, 41558, 29896, 78366, 16060, 69519, 79633, 69165, 18206, 86499, 11080, 10721, 60609, 42125, 41682};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 2216;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 19;
    vector<int> gems = {18399, 76355, 89070, 28135, 92926, 27987, 51238, 11051, 48858, 89611, 82101, 24215, 95144, 5593, 87900, 22744, 42046, 92772, 73042, 250, 92011, 97593, 78932, 66884, 40273, 18819, 87049, 83871, 15871, 44089, 29841, 21972, 93615, 19218, 10729, 72210, 52184, 16916, 6494, 7855};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 61526;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 11;
    vector<int> gems = {97356, 6630, 73187, 61651, 35025, 45215, 1834, 77142, 1811, 31052, 91784, 89683, 76618, 70447, 1766, 19862, 32651, 49465, 70791};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 48354;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 15;
    vector<int> gems = {65101, 95179, 83417, 2828, 18051, 98749, 1577, 60254, 74089, 4985, 35585, 70262, 43844, 65758, 11346, 46540, 84212, 56875, 35458, 22452, 6677, 83450, 27652, 63298};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 62003;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 32;
    vector<int> gems = {76387, 88730, 19092, 1562, 59097, 58420, 94056, 81607, 14716, 27657, 23134, 2433, 7415, 47420, 45373, 97735, 67478, 24616, 37045, 49869, 88538, 65537, 25884, 91063, 41197, 88777, 97338, 98869, 5232, 7123, 91040, 95734, 21968, 60396, 79539, 76618, 76728, 53674, 76199, 3704, 84511, 3828, 6854};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 78779;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 50;
    vector<int> gems = {90220, 22000, 56558, 12716, 81269, 52124, 62851, 83953, 84997, 84604, 39458, 71322, 808, 78046, 83372, 8571, 43758, 41903, 71001, 35393, 42258, 54651, 92364, 81767, 37480, 84911, 27377, 52871, 93283, 46912, 55733, 15117, 98048, 16292, 56162, 27303, 96306, 89373, 7382, 5753, 43, 30742, 42559, 67118, 85763, 56742, 91733, 59176, 98184, 63730};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 98141;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 3;
    vector<int> gems = {95523, 911, 4404, 69833, 22626, 64005, 94758, 97207, 86248, 78415, 78606, 57949, 52013, 87710, 26648, 77004, 9043, 40413, 49720, 84408, 5830, 43536, 56962, 18987, 64271, 12534};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 17415;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 28;
    vector<int> gems = {62102, 80685, 86873, 95451, 27825, 93876, 88310, 2244, 85613, 18955, 96268, 33939, 46103, 51991, 98965, 66487, 54376, 38339, 44611, 53470, 59915, 6880, 22174, 14607, 74092, 90604, 704, 56663, 51167, 12913, 22825, 44092, 92682, 89988, 72127, 74253, 42800, 110, 8229, 75930, 53787, 74887, 13687, 3904, 19494, 14750};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 69710;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 44;
    vector<int> gems = {19300, 12469, 87000, 5921, 1839, 24585, 2429, 23237, 26257, 67152, 87692, 50806, 37736, 53659, 89436, 36969, 52474, 33083, 408, 4179, 6870, 87135, 51511, 75856, 25378, 59483, 94298, 16161, 24582, 28229, 17857, 53331, 22837, 7513, 9674, 3162, 97811, 381, 11559, 90749, 97799, 10878, 82362, 20010, 92190};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 97403;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 49;
    vector<int> gems = {94634, 85113, 63510, 34904, 46383, 38581, 4430, 20223, 810, 22741, 56429, 8617, 77562, 86318, 29330, 50189, 44703, 30703, 38068, 23309, 78444, 79274, 34367, 43633, 474, 52003, 25628, 41535, 29081, 78069, 21198, 94937, 22593, 15835, 26265, 44628, 31367, 62338, 37021, 70448, 4396, 43912, 49184, 6488, 42351, 84432, 62825, 29336, 93859, 50694};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 94127;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 8;
    vector<int> gems = {66299, 39785, 74932, 26575, 41345, 52250, 82637, 60143, 47430, 3456, 3679, 17547, 11924, 89685, 64680, 30463, 55039, 35632, 42704, 43071, 43993, 98319, 695};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 43403;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 44;
    vector<int> gems = {62913, 2126, 86006, 18436, 46542, 69979, 56952, 95179, 89444, 24543, 14613, 18422, 16415, 30516, 71452, 45909, 24595, 80304, 93018, 80356, 81689, 6087, 52173, 65017, 58900, 63757, 44225, 8439, 73503, 41688, 51401, 92127, 37749, 29059, 95483, 68422, 92764, 88911, 67400, 19233, 95566, 76485, 83062, 36957, 44262, 64599, 32924};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 80953;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 25;
    vector<int> gems = {38180, 27706, 71416, 62973, 9594, 65491, 26171, 56994, 7797, 78856, 73800, 18698, 94886, 66066, 21793, 66143, 67311, 9019, 61900, 41890, 44106, 1145, 53056, 476, 6121, 32680, 61561, 63427, 21369, 86691, 35819, 18629, 18016, 96735, 60339, 73427, 72517, 11108, 43688, 43277, 1262, 72329, 35985, 94022, 54980, 12235, 35856, 44820, 25812, 95817};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 68275;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 46;
    vector<int> gems = {22767, 26911, 34892, 41890, 23920, 32829, 45135, 62858, 52381, 18244, 88185, 37066, 18503, 67261, 89112, 46545, 69996, 48341, 99973, 22634, 10140, 10552, 20501, 1926, 8312, 80393, 1583, 40871, 42966, 19195, 21272, 56075, 46209, 73551, 5386, 83123, 83006, 39627, 69379, 63088, 52201, 57043, 92026, 63081, 85022, 70215};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 98390;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 10;
    vector<int> gems = {84083, 22457, 61652, 44397, 86146, 31657, 56474, 20734, 24645, 98591, 43170, 62381, 42714, 19555, 9157, 5973, 56934, 38300, 80189, 96836, 32118, 52900, 53177, 6663, 2304, 62757, 75152, 1012, 50280};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 68726;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 25;
    vector<int> gems = {96851, 15070, 93028, 55131, 26889, 63813, 23632, 56738, 47490, 17583, 21761, 67437, 67258, 9667, 68023, 52422, 43913, 89665, 28859, 43785, 93193, 74044, 33662, 74452, 50821, 50758, 65997};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 81781;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 11;
    vector<int> gems = {79402, 95955, 61520, 89790, 35122, 14187, 75773, 48243, 81128, 38912, 13138, 99494, 99098, 3044, 95093, 42658, 6903, 26889, 87617, 34105, 92085, 42751, 15154, 65077, 85813, 40267, 8954, 49501, 58815, 11040, 31441, 77568, 95879};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 65414;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 38;
    vector<int> gems = {20609, 54961, 24962, 67519, 41534, 16496, 63983, 83437, 72319, 17162, 36123, 73981, 55320, 47415, 78830, 86616, 65147, 9416, 78621, 85597, 63261, 58821, 76032, 15213, 52067, 32335, 89521, 39650, 65641, 15748, 9250, 38208, 33518, 18400, 7867, 85188, 41728, 20320, 71344, 75193, 87327, 36546, 39323};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 72359;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 17;
    vector<int> gems = {89993, 15771, 86896, 69314, 35037, 3048, 48525, 37685, 53551, 75665, 3730, 9611, 20122, 74228, 10586, 22030, 11684, 74713, 87642, 62875, 40739, 24876, 8976, 18699, 10077};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 73891;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 2;
    vector<int> gems = {84988, 20968, 65431, 84766, 26752, 74289, 76386, 32525, 46690, 12376, 65652, 46694, 43280, 74231, 48434, 85036, 63369, 66275, 76574, 42460, 17189, 16140};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 1381;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 13;
    vector<int> gems = {84763, 76895, 88937, 80007, 94771, 9066, 3670, 13775, 69321, 40159, 36931, 76063, 3546, 80306, 61496, 80275, 3247, 99069, 53366, 64236, 28259, 37955, 78390, 3873, 24370, 91088, 6050, 50989, 85440, 41823, 31402, 46374, 67906, 694, 10981, 98766, 50221, 17836, 50373};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 66051;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 42;
    vector<int> gems = {63819, 19540, 79920, 2259, 90609, 16336, 83749, 79293, 49680, 9345, 52484, 50465, 18452, 66867, 17651, 18841, 64325, 51477, 61360, 85171, 88386, 29324, 84768, 71397, 26478, 33428, 13768, 78701, 43751, 19701, 48789, 66563, 13200, 24926, 84533, 72831, 80721, 72480, 42632, 22688, 11637, 56457, 33297, 14560, 96913, 11900, 59143, 59441};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 82353;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 2;
    vector<int> gems = {9385, 16883, 31865, 8367, 52654, 7158, 47529, 57419, 42297, 30631, 48766, 539, 22219, 33817, 95794, 787, 115, 57905, 26711, 22043, 95360, 87021, 23376, 70947, 70776, 68081, 40283, 15460, 12641, 29424, 90834, 85301, 48380, 48468, 89639, 65190};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 5935;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 25;
    vector<int> gems = {1234, 653, 4213, 654, 87, 456, 342, 6, 867, 546, 423, 234, 65, 576, 8, 546, 3, 765, 786, 654, 3, 56, 57, 234, 234, 7, 96, 7, 865, 2341, 123, 53, 645, 774, 432, 543, 197, 864, 54, 23, 6534, 23, 1112, 213, 234, 345, 654, 76, 34, 24};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 6102;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 8;
    vector<int> gems = {100, 92, 133, 201, 34, 34, 34, 94, 108, 100, 92, 133, 201, 34, 34, 34, 94, 108, 100, 92, 133, 201, 34, 34, 34, 94, 108, 100, 92, 133, 201, 34, 34, 34, 94, 108, 100, 92, 133, 201, 34, 34, 34, 94, 108, 100, 92, 133, 201, 34};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 107;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 10;
    vector<int> gems = {100, 92, 133, 201, 34, 34, 34, 94, 108, 101, 56, 34, 34, 34, 567, 234, 34, 12, 45, 87, 34, 123, 312, 344, 321, 123, 33, 78, 567, 342, 121, 111, 111, 123};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 223;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 25;
    vector<int> gems = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    Necklaces* pObj = new Necklaces();
    clock_t start = clock();
    int result = pObj->inequity(n, gems);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=270505&rd=7222&pm=3487
********************************************************************************
#include <vector>
#include <string>
#include <cstdio>
using namespace std;
 
#define V(x) vector<x >
#define vs V(string)
#define vi V(int)
#define vd V(double)
 
#define fr(x,y,z) for((x)=(y);(x)<(z);(x)++)
#define fo(x,y) fr(x,0,y)
#define fir(n) fo(i,n)
#define fjr(n) fo(j,n)
#define fkr(n) fo(k,n)
#define fi fir(n)
#define fj fjr(n)
 
#define pb push_back
#define sz size()
#define cs c_str()
 
 
 
 
vi f;
int nc,nf;
int best;
 
int g[51][51];
int gmin[51][51];
//int prev[51][51];
 
#define B 999999999
int c[51][51];
 
void go(void) {
int i,j,k,b=1,min=1;
 
fir(nf) {
c[i][i]=0;
for(j=i+1;j<=nf;j++) c[i][j]=c[i][j-1]+f[j-1];
}
 
while(1) {
fir(nc+1) fjr(nf+1) g[i][j]=gmin[i][j]=B;
g[0][0]=0;
//gmin[0][0]=B;
 
fir(nc) fjr(nf) for(k=j+1;k<=nf;k++) {
if(c[j][k]>=min && g[i+1][k]>(g[i][j] >? c[j][k])) {
//printf("upd %d %d %d\n",i,j,k);
 
g[i+1][k]=(g[i][j] >? c[j][k]);
gmin[i+1][k]=gmin[i][j] <? c[j][k];
}
}
 
//fir(nc+1) { fjr(nf+1) printf("%9d/%9d ",g[i][j],gmin[i][j]); puts(""); }
 
if(g[nc][nf]==B) break;
//printf("sol %d %d\n",g[nc][nf],gmin[nc][nf]);
best <?= (g[nc][nf]-gmin[nc][nf]);
min=gmin[nc][nf]+1;
}
 
}
 
class Necklaces { public: int inequity(int nn, vi ff) {
f=ff;
nc=nn;
nf=f.sz;
int i,j,k;
best=B;
for(i=0;i<nf;i++) {
go();
k=f[0];
for(j=0;j<nf-1;j++) f[j]=f[j+1];
f[nf-1]=k;
}
return best;
}};

********************************************************************************
*******************************************************************************/