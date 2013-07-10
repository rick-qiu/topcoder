/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1660
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

class ConvexPolygon {
public:
    double findArea(vector<int> x, vector<int> y);
};

double ConvexPolygon::findArea(vector<int> x, vector<int> y) {
    double ret;
    return ret;
}


int test0() {
    vector<int> x = {0, 0, 1};
    vector<int> y = {0, 1, 0};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {-10000, -10000, 10000, 10000};
    vector<int> y = {10000, -10000, -10000, 10000};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0E8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {-10000, -10000, 10000, 10000, 9999};
    vector<int> y = {10000, -10000, -10000, 9999, 10000};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.999999995E8;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {-4139, -8591, -9184, -9743, -9840, -9912, -9944, -9974, -9979, -9994, -9997, -9998, -10000, -10000, -9999, -9998, -9997, -9990, -9882, -9488, -9241, -2353, 710, 7121, 7509, 9871, 9888, 9934, 9967, 9990, 9995, 9998, 9999, 10000, 9996, 9993, 9953, 9890, 9848, 9513, 9095};
    vector<int> y = {-9999, -9995, -9979, -9948, -9891, -9655, -9512, -9291, -9182, -7776, -7422, -5036, 3523, 4185, 6835, 8198, 9193, 9684, 9953, 9990, 9999, 10000, 10000, 9995, 9994, 9981, 9979, 9890, 9734, 9550, 9505, 9244, 7732, -4496, -8321, -9676, -9812, -9927, -9935, -9996, -9999};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.996549835E8;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {-3803, -6043, -7954, -8510, -9469, -9911, -9963, -9994, -9997, -10000, -10000, -9999, -9981, -9976, -9920, -9860, -9799, -9643, -9539, -8028, -6925, -5483, 1837, 4918, 9644, 9701, 9772, 9914, 9976, 9993, 9997, 9998, 9998, 9997, 9988, 9931, 9853, 9790, 9697, 9472, 7142};
    vector<int> y = {-10000, -9999, -9997, -9993, -9974, -9960, -9911, -9578, -9305, -5960, -2177, 7639, 8665, 8839, 9413, 9894, 9925, 9959, 9964, 9984, 9993, 10000, 10000, 9999, 9993, 9975, 9945, 9840, 9743, 9008, 6329, -954, -4733, -8886, -9120, -9458, -9799, -9959, -9983, -9997, -10000};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.99532343E8;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {-515, -3660, -9446, -9644, -9779, -9835, -9935, -9941, -9967, -9985, -9993, -9997, -9999, -10000, -10000, -10000, -9995, -9993, -9969, -9901, -9647, -8591, -8547, 1425, 3802, 6640, 9449, 9854, 9943, 9959, 9978, 10000, 10000, 9998, 9988, 9955, 8883, 8565, 7717, 4618};
    vector<int> y = {-10000, -10000, -9998, -9989, -9982, -9977, -9885, -9879, -9851, -9641, -9479, -8720, -7694, -6563, 3874, 5751, 8261, 9170, 9927, 9979, 9990, 9999, 9999, 9999, 9999, 9998, 9995, 9984, 9979, 9955, 9805, 9494, -6566, -8993, -9266, -9970, -9988, -9992, -9998, -10000};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.998175535E8;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {-8865, -9612, -9678, -9926, -9970, -9996, -9997, -9996, -9990, -9984, -9970, -9955, -9878, -9645, -8998, -974, -340, 6659, 9865, 9907, 9970, 9987, 9990, 9997, 9998, 9999, 10000, 10000, 9999, 9995, 9985, 9931, 9868, 9462, 9445, 9095, 8504};
    vector<int> y = {-10000, -9996, -9994, -9929, -9809, -7014, 3456, 6675, 8385, 8796, 9749, 9823, 9975, 9989, 10000, 10000, 10000, 9998, 9995, 9974, 9736, 9485, 9293, 8298, 6531, 3824, -844, -2502, -8129, -9307, -9868, -9926, -9961, -9985, -9986, -9992, -9999};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.997059345E8;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {6864, 3388, -2948, -6813, -9071, -9715, -9940, -9988, -9994, -9998, -10000, -10000, -10000, -9996, -9983, -9941, -9859, -9441, -6368, -403, 950, 4238, 6446, 8900, 9298, 9829, 9978, 9988, 9992, 10000, 10000, 10000, 9998, 9989, 9979, 9942, 9930, 8830};
    vector<int> y = {-10000, -10000, -10000, -10000, -9983, -9966, -9950, -9704, -7496, -5980, -5004, 2461, 6447, 8865, 9844, 9921, 9949, 9992, 10000, 10000, 10000, 9999, 9998, 9990, 9981, 9962, 9941, 9731, 9340, 7044, 1131, -7103, -8644, -9228, -9757, -9929, -9981, -9998};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.997589695E8;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {8626, 1365, -6588, -9207, -9731, -9936, -9969, -9988, -9997, -10000, -10000, -10000, -10000, -9976, -9560, -6629, -2546, 2299, 8319, 8986, 9717, 9886, 9958, 9980, 9988, 9998, 10000, 10000, 10000, 10000, 9999, 9996, 9979, 9876, 9287};
    vector<int> y = {-10000, -10000, -9997, -9993, -9991, -9925, -9774, -9631, -9106, -4155, 1150, 1748, 8931, 9934, 9993, 9997, 9999, 9999, 9999, 9998, 9994, 9947, 9914, 9306, 9059, 8196, 5280, 4687, -2466, -4231, -7133, -9117, -9895, -9965, -9998};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.99786881E8;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {5029, -7604, -9375, -9863, -9950, -9982, -9996, -10000, -10000, -9992, -9977, -9931, -9906, -9846, -9525, -8617, -7555, -5904, -4284, 6781, 8444, 9512, 9798, 9920, 9951, 9969, 9989, 9996, 9999, 10000, 9990, 9946, 9934, 9609, 6999};
    vector<int> y = {-10000, -9997, -9994, -9980, -9957, -9854, -9226, -8105, 1649, 7652, 9088, 9692, 9865, 9923, 9973, 9983, 9993, 9997, 10000, 10000, 10000, 9999, 9928, 9657, 9431, 9295, 9088, 8917, 7972, -6748, -9464, -9844, -9939, -9993, -9998};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.99622566E8;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {2128, -1318, -7104, -7779, -8518, -9162, -9552, -9768, -9878, -9941, -9961, -9976, -9997, -10000, -10000, -9982, -9450, -9151, -8877, -6374, -6168, 3930, 5986, 9468, 9752, 9873, 9971, 9975, 9982, 9995, 9996, 9999, 10000, 10000, 9999, 9996, 9984, 9436};
    vector<int> y = {-10000, -10000, -9999, -9998, -9992, -9978, -9968, -9958, -9942, -9716, -9474, -8996, -8314, -1686, 9518, 9897, 9974, 9985, 9995, 10000, 10000, 10000, 10000, 9994, 9915, 9876, 9520, 9484, 9399, 8897, 8646, 4528, 2929, -5343, -6650, -9777, -9968, -9993};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.996829365E8;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {-186, -7774, -9860, -9912, -9977, -9998, -9999, -10000, -9993, -9989, -9968, -9836, -9481, -6580, -3205, -875, 1069, 2414, 8803, 9670, 9755, 9982, 9999, 10000, 10000, 10000, 10000, 10000, 9989, 9951, 9925, 9548, 7706, 7152, 6649};
    vector<int> y = {-10000, -10000, -9998, -9987, -9924, -8168, -7747, -3049, 9374, 9564, 9951, 9977, 9992, 9997, 9999, 10000, 10000, 9999, 9990, 9979, 9974, 9822, 9717, 9290, -3182, -6147, -8000, -8173, -9329, -9785, -9926, -9972, -9996, -9999, -10000};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.997152665E8;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {7644, 2063, -4887, -8929, -9496, -9882, -9915, -9933, -9987, -9996, -9999, -10000, -10000, -10000, -9998, -9995, -9983, -9883, -9009, -5547, -4538, 181, 5662, 6398, 9156, 9732, 9904, 9913, 9947, 9961, 9975, 9984, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 9991, 9988, 9101};
    vector<int> y = {-10000, -10000, -9999, -9997, -9996, -9957, -9909, -9857, -9686, -6993, -3825, -2042, 2221, 3518, 6042, 9569, 9921, 9990, 9995, 9999, 10000, 10000, 9999, 9998, 9994, 9992, 9974, 9969, 9895, 9799, 9492, 9234, 7635, 4248, -777, -1032, -5855, -6229, -8301, -9707, -9993, -9997};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.99804645E8;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {-1917, -5248, -7825, -8658, -9670, -9783, -9926, -9961, -9956, -9910, -9828, -9471, -7591, -2798, 3629, 7287, 7941, 8380, 8835, 8958, 9449, 9985, 9945, 9878, 9672, 9513, 8781, 8422, 8330, 7097};
    vector<int> y = {-9995, -9984, -9910, -9714, -9314, -9064, -7113, 1516, 6132, 9297, 9531, 9724, 9968, 9984, 9961, 9850, 9763, 9685, 9594, 9546, 9017, 6477, -3759, -5631, -7598, -8175, -9760, -9905, -9918, -9991};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.91427404E8;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {-4879, -7071, -7767, -7881, -9108, -9543, -9748, -9855, -9932, -9967, -9951, -9912, -9881, -9692, -9151, -8969, -6929, 894, 6930, 8444, 9202, 9623, 9951, 9970, 9969, 9832, 9551, 8297, 6693, 4285};
    vector<int> y = {-9927, -9789, -9741, -9709, -9077, -8080, -7352, -6779, -5946, -2781, 359, 5261, 6473, 8928, 9597, 9663, 9899, 9945, 9965, 9945, 9616, 9312, 8881, -345, -6295, -8581, -9465, -9851, -9912, -9916};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.89750654E8;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {-3074, -8275, -8428, -9055, -9411, -9451, -9681, -9873, -9983, -9998, -10000, -9898, -9843, -9760, -9355, -9196, -8779, -5939, 4843, 9034, 9658, 9937, 9970, 9982, 9964, 9928, 9820, 9357, 7398, 2999};
    vector<int> y = {-9986, -9944, -9939, -9898, -9836, -9804, -9446, -7921, -5760, -1375, 3397, 7839, 8365, 8931, 9798, 9914, 9933, 9936, 9900, 9880, 8759, 6432, 5796, 4415, 192, -7354, -9217, -9384, -9667, -9985};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.920043245E8;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {987, -4328, -7688, -8815, -9130, -9650, -9813, -9891, -9951, -9977, -9916, -9793, -9536, -8883, -5392, 4619, 8652, 9468, 9678, 9944, 9986, 9991, 9997, 9995, 9811, 9374, 8905, 8405, 8282, 5881};
    vector<int> y = {-9997, -9993, -9978, -9795, -9380, -8574, -7354, -6246, -1534, 3045, 6409, 8472, 8957, 9765, 9930, 9975, 9758, 9445, 9271, 8453, 4693, 1367, -5346, -7273, -8334, -8856, -9348, -9757, -9786, -9971};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.913747745E8;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {2983, -8446, -9150, -9449, -9912, -9971, -9925, -9808, -9674, -9018, -8847, -5405, -2320, 2748, 3635, 4000, 4967, 6849, 7948, 8546, 9218, 9783, 9918, 9950, 9975, 9989, 9986, 9535, 9380, 8432, 6446};
    vector<int> y = {-9981, -9977, -9881, -9753, -9222, -8890, 4592, 7769, 8677, 9612, 9624, 9789, 9857, 9964, 9959, 9954, 9898, 9663, 9453, 9289, 9071, 8435, 8055, 6123, 4510, -3665, -6466, -9149, -9712, -9880, -9943};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.89855996E8;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {-754, -3640, -7781, -8980, -9352, -9465, -9669, -9720, -9828, -9927, -9988, -9988, -9983, -9917, -9828, -9684, -8982, 9023, 9263, 9600, 9849, 9888, 9958, 9986, 9955, 9871, 9714, 9060, 8104, 3894};
    vector<int> y = {-9978, -9976, -9939, -9893, -9857, -9661, -8974, -8675, -7713, -5539, -3936, -3521, -1690, 3620, 8811, 9454, 9993, 9961, 9398, 7537, 5294, 4083, -159, -5050, -6212, -7342, -8118, -9593, -9781, -9925};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.9102138E8;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {2499, -5030, -7522, -9597, -9781, -9972, -10000, -9991, -9978, -9946, -9895, -9740, -9637, -9428, -323, 4454, 8504, 9725, 9771, 9821, 9967, 9989, 9999, 9986, 9980, 9959, 9727, 9210, 6478, 4985};
    vector<int> y = {-9960, -9951, -9948, -9865, -9740, -8508, 514, 3543, 5030, 5985, 7066, 8311, 8965, 9993, 9972, 9932, 9872, 9502, 8932, 8129, 2731, 1045, -560, -6334, -7554, -7892, -9760, -9890, -9943, -9955};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.947343615E8;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {-2556, -7622, -8303, -9810, -9876, -9931, -9953, -9992, -10000, -9713, -9541, -8279, -4469, -3726, -2546, 4433, 8273, 9612, 9869, 9885, 9936, 9947, 9996, 9872, 9475, 9105, 9020, 7976, 6847, 5180};
    vector<int> y = {-9994, -9990, -9891, -9645, -9502, -7649, -4278, 4052, 8459, 9439, 9609, 9797, 9960, 9977, 9998, 9974, 9949, 9567, 8737, 8320, 6097, 4965, -6980, -8055, -8964, -9527, -9591, -9918, -9952, -9982};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.94283304E8;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {-4864, -6525, -9431, -9724, -9981, -9993, -9982, -9894, -9681, -9193, -6624, -1215, 4838, 7386, 8503, 9286, 9712, 9778, 9792, 9804, 9923, 9946, 9990, 9997, 9838, 9626, 9338, 8532, 8479, 3654};
    vector<int> y = {-9998, -9988, -9856, -8917, -6329, -1683, 5936, 8186, 9302, 9896, 9944, 9996, 9993, 9946, 9828, 9677, 9496, 9425, 9234, 9046, 6987, 6117, -1243, -3688, -7672, -9161, -9465, -9929, -9932, -9986};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.943907225E8;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {4518, -8283, -9315, -9882, -9965, -9975, -9991, -9981, -9962, -9889, -9793, -9677, -9554, -8718, -5157, -4122, 2960, 6235, 8662, 9140, 9554, 9796, 9997, 9995, 9983, 9930, 9872, 9213, 8457, 7853};
    vector<int> y = {-9999, -9989, -9562, -8538, -6630, -6391, -2264, 4498, 6906, 8010, 8940, 9708, 9794, 9924, 9983, 9986, 9968, 9954, 9850, 9788, 9564, 8928, 8253, 2414, -3132, -8802, -9256, -9657, -9925, -9984};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.954723565E8;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {2203, -8160, -8805, -9152, -9699, -9734, -9912, -9971, -9986, -9998, -9987, -9691, -9413, -5108, -3942, 481, 7221, 7958, 9742, 9838, 9915, 9993, 9996, 9973, 9955, 9885, 9850, 9740, 9033, 8151};
    vector<int> y = {-9989, -9988, -9834, -9635, -9134, -8990, -7525, -5792, -4917, 573, 5724, 9154, 9968, 9985, 9988, 9981, 9952, 9885, 9226, 8388, 6611, 4776, 1399, -4483, -7700, -8679, -9115, -9676, -9898, -9971};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.948633235E8;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {-6996, -8637, -9516, -9862, -9933, -9980, -9991, -9985, -8976, -8809, -5217, 2003, 7664, 9101, 9727, 9930, 9948, 9996, 9996, 9992, 9983, 9976, 9917, 9586, 9426, 9389, 8708, 7326, 850, -2340};
    vector<int> y = {-9993, -9942, -9555, -9028, -8132, -1051, 4824, 7709, 9792, 9882, 9988, 9998, 9995, 9892, 8967, 7755, 7582, 2078, 1819, -708, -5637, -7564, -8443, -9341, -9590, -9611, -9790, -9963, -9985, -9989};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.94720623E8;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {-2622, -6046, -8427, -9373, -9517, -9681, -9829, -9895, -9950, -9994, -9997, -9993, -9976, -9950, -9863, -9756, -9624, -8212, 23, 5780, 7816, 9080, 9686, 9718, 9890, 9984, 9984, 9969, 9891, 9869, 8013, 3371};
    vector<int> y = {-9995, -9991, -9963, -9934, -9917, -9802, -9489, -9264, -8261, -4628, 741, 4312, 6512, 7199, 8871, 9619, 9871, 9964, 9985, 9957, 9908, 9693, 9469, 9307, 8374, 6166, 348, -4862, -8957, -9847, -9908, -9987};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.961334945E8;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {-2849, -8983, -9628, -9544, -412, 4250, 5919, 6654, 8519, 9414, 9826, 9776, 8430, 7474};
    vector<int> y = {-9851, -8465, -7252, 9316, 9927, 9818, 9380, 9105, 7170, 5366, 1094, -1850, -6800, -9849};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.556308735E8;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {5886, -3453, -7676, -8182, -9775, -8144, -7584, -1800, 1115, 4450, 9353, 9639, 9329, 8639, 7304};
    vector<int> y = {-9943, -8844, -8164, -6537, -111, 6799, 9142, 9261, 9304, 8904, 5603, 3417, -5824, -8244, -9430};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.208252885E8;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {-9321, -9827, -9050, -6036, 4899, 6815, 9535, 9892, 9776, 8652, 6434};
    vector<int> y = {-9818, 4527, 6779, 8457, 9976, 9480, 767, -1206, -1980, -7643, -9609};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.397320645E8;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {-893, -8943, -9735, -9465, -6194, -77, 5501, 7146, 8616, 9330, 9399, 9096};
    vector<int> y = {-9898, -9749, -723, 3668, 8715, 9387, 9990, 8278, 2571, -1601, -8515, -9309};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.34909909E8;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {100, 80, 30, -30, -80, -100, -80, -30, 30, 80};
    vector<int> y = {0, 58, 95, 95, 58, 0, -58, -95, -95, -58};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 29020.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {-1646, -9172, -9830, -9802, -9749, -9474, -8668, -6832, 120, 8380, 9338, 9307, 8042};
    vector<int> y = {-9998, -8619, -7863, 3976, 4541, 5975, 8127, 9500, 9612, 8734, 5216, -9042, -9689};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.55115104E8;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {-6010, -7937, -8782, -9506, -9654, -9852, -9854, -9998, -9999, -9996, -9901, -9811, -9444, -8798, -8580, -2085, 6842, 8339, 9827, 9946, 9993, 9959, 9940, 9855, 9657, 8504, 8262, 7552, 6326, 5537, 4723};
    vector<int> y = {-9976, -9947, -9873, -9739, -9654, -8501, -8475, -5009, 475, 4926, 7078, 8673, 9417, 9785, 9820, 9974, 9986, 9979, 9862, 9211, -5070, -6599, -7121, -8624, -8912, -9710, -9766, -9863, -9914, -9941, -9962};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.939960635E8;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {100, 99, 96, 92, 87, 80, 72, 63, 53, 42, 30, 18, 6, -6, -18, -30, -42, -53, -63, -72, -80, -87, -92, -96, -99, -100, -99, -96, -92, -87, -80, -72, -63, -53, -42, -30, -18, -6, 6, 18, 30, 42, 53, 63, 72, 80, 87, 92, 96, 99};
    vector<int> y = {0, 12, 24, 36, 48, 58, 68, 77, 84, 90, 95, 98, 99, 99, 98, 95, 90, 84, 77, 68, 58, 48, 36, 24, 12, 0, -12, -24, -36, -48, -58, -68, -77, -84, -90, -95, -98, -99, -99, -98, -95, -90, -84, -77, -68, -58, -48, -36, -24, -12};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 30894.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {60, 59, 58, 55, 52, 48, 43, 38, 32, 25, 18, 11, 3, -3, -11, -18, -25, -32, -38, -43, -48, -52, -55, -58, -59, -60, -59, -58, -55, -52, -48, -43, -38, -32, -25, -18, -11, -3, 3, 11, 18, 25, 32, 38, 43, 48, 52, 55, 58, 59};
    vector<int> y = {0, 7, 14, 22, 28, 35, 41, 46, 50, 54, 57, 58, 59, 59, 58, 57, 54, 50, 46, 41, 35, 28, 22, 14, 7, 0, -7, -14, -22, -28, -35, -41, -46, -50, -54, -57, -58, -59, -59, -58, -57, -54, -50, -46, -41, -35, -28, -22, -14, -7};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 11058.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {10000, 9921, 9685, 9297, 8763, 8090, 7289, 6374, 5358, 4257, 3090, 1873, 627, -627, -1873, -3090, -4257, -5358, -6374, -7289, -8090, -8763, -9297, -9685, -9921, -10000, -9921, -9685, -9297, -8763, -8090, -7289, -6374, -5358, -4257, -3090, -1873, -627, 627, 1873, 3090, 4257, 5358, 6374, 7289, 8090, 8763, 9297, 9685, 9921};
    vector<int> y = {0, 1253, 2486, 3681, 4817, 5877, 6845, 7705, 8443, 9048, 9510, 9822, 9980, 9980, 9822, 9510, 9048, 8443, 7705, 6845, 5877, 4817, 3681, 2486, 1253, 0, -1253, -2486, -3681, -4817, -5877, -6845, -7705, -8443, -9048, -9510, -9822, -9980, -9980, -9822, -9510, -9048, -8443, -7705, -6845, -5877, -4817, -3681, -2486, -1253};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.13298308E8;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {10000, 9917, 9672, 9269, 8713, 8014, 7183, 6234, 5183, 4047, 2845, 1595, 320, -960, -2225, -3453, -4625, -5721, -6723, -7614, -8380, -9009, -9490, -9815, -9979, -9979, -9815, -9490, -9009, -8380, -7614, -6723, -5721, -4625, -3453, -2225, -960, 320, 1595, 2845, 4047, 5183, 6234, 7183, 8014, 8713, 9269, 9672, 9917};
    vector<int> y = {0, 1278, 2536, 3752, 4907, 5981, 6956, 7818, 8551, 9144, 9586, 9871, 9994, 9953, 9749, 9384, 8865, 8201, 7402, 6482, 5455, 4338, 3151, 1911, 640, -640, -1911, -3151, -4338, -5455, -6482, -7402, -8201, -8865, -9384, -9749, -9953, -9994, -9871, -9586, -9144, -8551, -7818, -6956, -5981, -4907, -3752, -2536, -1278};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.13255571E8;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {-6010, -7937, -8782, -9506, -9654, -9852, -9854, -9998, -9999, -9996, -9901, -9811, -9444, -8798, -8580, -2085, 6842, 8339, 9827, 9946, 9993, 9959, 9940, 9855, 9657, 8504, 8262, 7552, 6326, 5537, 4723};
    vector<int> y = {-9976, -9947, -9873, -9739, -9654, -8501, -8475, -5009, 475, 4926, 7078, 8673, 9417, 9785, 9820, 9974, 9986, 9979, 9862, 9211, -5070, -6599, -7121, -8624, -8912, -9710, -9766, -9863, -9914, -9941, -9962};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.939960635E8;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {-1646, -9172, -9830, -9802, -9749, -9474, -8668, -6832, 120, 8380, 9338, 9307, 8042};
    vector<int> y = {-9998, -8619, -7863, 3976, 4541, 5975, 8127, 9500, 9612, 8734, 5216, -9042, -9689};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.55115104E8;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {0, 0, 1};
    vector<int> y = {0, 1, 0};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {0, 0, 1};
    vector<int> y = {1, 2, 1};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {1, 1, -1};
    vector<int> y = {1, -1, 0};
    ConvexPolygon* pObj = new ConvexPolygon();
    clock_t start = clock();
    double result = pObj->findArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=262889&rd=4635&pm=1660
********************************************************************************
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <sstream>
#include <set>
#include <map>
using namespace std;
 
class ConvexPolygon
{
public:
    double findArea(vector <int> x, vector <int> y)
    {
        x.push_back(*x.begin());
        y.push_back(*y.begin());
 
        double ans = 0.0;
 
        int i;
        for (i=0; i < (x.size()-1); ++i)
        {
            ans += x[i]*y[i+1]-x[i+1]*y[i];
        }
 
        ans = abs(ans);
 
        ans /= 2.0;
 
        return ans;
    }
};

********************************************************************************
*******************************************************************************/