/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3496
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

class Predicting {
public:
    double avgError(vector<double> data);
};

double Predicting::avgError(vector<double> data) {
    double ret;
    return ret;
}


int test0() {
    vector<double> data = {10.0, 10.0, 10.0, 10.0, 10.0, 10.0};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<double> data = {50.0, 10.0, 50.0, 10.0, 50.0, 10.0, 50.0, 10.0, 50.0, 10.0, 50.0, 10.0};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<double> data = {50.0, 10.0, 50.0, 10.0, 50.0, 10.4, 50.0, 10.0, 10.1, 10.0, 50.0, 10.0};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 5.814285714285714;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<double> data = {50.0, 10.0, 50.0, 10.0, 50.0, 10.0, 48.0, 22.0, 19.2, 30.0, 50.0, 10.0, 50.0, 10.0, 50.0, 10.0};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 6.654545454545455;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<double> data = {99.5, 10.1, 15.0, 10.0, 50.0, 10.0, 48.0, 22.0, 19.2, 30.0, 50.0, 10.0, 50.0, 10.0, 50.0, 10.0};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 8.481818181818182;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<double> data = {50.0, 60.0, 50.0, 60.0, 50.0, 60.0, 60.0};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<double> data = {50.0, 10.0, 50.0, 10.0, 50.0, 10.4, 50.0, 10.0, 50.0, 10.0, 50.0, 10.0};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11428571428571413;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<double> data = {30.0, 50.0, 70.0, 19.0, 22.0, 42.0, 40.0, 38.0};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5333333333333338;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<double> data = {30.0, 30.0, 30.0, 30.0, 30.0, 44.444444, 55.555555, 92.000001};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 15.851852333333332;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<double> data = {35.165, 68.355, 76.267, 72.331, 38.335, 74.623, 39.897, 87.271, 77.835, 22.677};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 6.725439999999997;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<double> data = {82.932, 73.964, 76.249, 72.616, 10.437, 17.237, 13.298, 62.588, 45.838, 64.325, 84.712, 58.193, 39.839, 45.47, 77.586, 76.78, 61.538, 59.157, 24.883, 25.858, 80.865, 39.984, 36.92, 84.033, 89.86, 54.582, 54.294, 55.322, 28.52, 42.298, 16.247, 88.777, 71.847, 12.848, 45.622, 71.955, 81.046};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 20.22365625;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<double> data = {28.105, 64.279, 39.121, 56.279, 16.293, 83.553, 89.273, 24.489, 77.454, 27.516, 34.167, 64.207, 74.262, 77.11, 72.248, 46.357, 79.122, 66.862, 38.167, 35.312, 56.255, 51.953, 40.309, 50.456, 34.341, 75.425, 45.088, 62.486, 44.741, 73.11, 36.43, 79.052};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 17.616466666666664;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<double> data = {62.128, 89.341, 58.595, 51.02, 66.208, 65.688};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 3.9999999999906777E-4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<double> data = {67.38, 30.839, 84.666, 84.759, 61.974, 39.229, 85.407, 44.91, 41.659, 56.668, 77.957, 36.25, 41.039, 62.483, 21.231, 42.211, 15.666, 37.225, 89.01, 89.639, 48.973, 61.016, 54.548, 52.269, 17.82, 86.404, 77.996, 75.694, 44.827, 51.755, 78.462, 20.565, 12.252, 75.093, 13.542, 83.965, 43.213, 51.692, 16.305, 65.087, 43.636, 84.546, 47.849};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 20.948971052631578;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<double> data = {21.536, 54.289, 65.08, 34.626, 69.705, 17.825, 27.372};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7820000000000018;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<double> data = {88.27, 48.394, 56.403, 84.908, 46.96, 48.401, 22.1, 60.57, 14.721, 25.479, 89.688, 82.741, 36.692, 61.451, 80.256, 65.175, 62.117, 18.816, 41.187, 23.855, 60.915, 29.167, 36.688, 84.39, 64.16, 71.975, 70.05, 57.382, 31.27};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 18.373599999999996;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<double> data = {57.92, 69.96, 29.037, 43.019, 18.199, 46.09, 45.844, 11.562, 71.529, 42.813, 65.398, 40.302};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 13.414157142857144;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<double> data = {55.0288, 94.9763, 16.0207, 27.6995, 30.7785, 64.4884, 37.6864, 50.6287, 62.6151, 13.9415, 93.9985, 49.0274, 11.3953, 77.785, 45.5089, 54.5427, 87.2143, 15.6829, 28.4246, 17.9159, 34.8106, 47.4783, 76.0463, 55.8501, 69.2868, 37.3156, 12.5324, 60.9726, 32.3579, 56.1467, 71.756, 16.5755, 34.503, 86.5358, 39.0432, 62.5684, 43.2814, 98.9288, 68.6743};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 20.514395588235292;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<double> data = {63.1809, 63.3869, 74.89, 40.6967, 77.2549, 45.8989, 39.2575, 93.5398, 45.9209, 43.2731, 22.1979, 84.0172, 33.1709, 65.7216, 61.4808, 98.5525, 35.5495, 31.1988, 95.5119, 30.1825, 34.1981, 70.5063, 94.2045, 97.1819, 25.2687, 87.2939, 85.2724, 55.4189, 99.0497, 71.9593, 78.749, 66.0979, 53.0677, 13.5569, 27.532, 15.334, 49.5328, 98.7558};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 24.632385454545453;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<double> data = {67.2433, 92.3917, 41.8806, 29.96, 56.9955, 14.3342, 35.1814, 44.3855, 55.5095, 89.06, 93.2954, 64.0324, 72.2422, 89.071, 11.0163, 82.4378, 57.7041, 54.4163, 38.4719, 83.5337, 62.2608, 52.5513, 82.6576, 63.1864, 92.7296, 34.7612, 59.5032, 19.2727, 63.4062, 39.3481, 15.4988, 93.1196, 13.0323, 47.0003, 32.8907};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 19.705228333333334;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<double> data = {84.2753, 98.5635, 67.5893, 72.0664, 77.3098, 70.5722, 93.809, 59.9701, 54.0181, 78.8754, 74.489, 98.5333, 94.4325, 95.5998, 41.6086, 21.7228, 51.9114, 19.8303, 75.4091, 31.3224, 18.6657, 47.3025, 16.5893, 86.5221, 98.1845, 59.3823, 50.6012, 97.3797, 16.0949, 36.6866, 17.9901, 69.957, 46.0802, 37.6672, 29.9847};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 22.91622733333334;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<double> data = {92.3341, 37.4227, 63.2606, 14.2656, 25.1891, 57.0696, 33.039, 38.623, 91.4579, 69.0341, 88.5519, 36.7992, 86.0057};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 19.706005;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<double> data = {19.9127, 96.5639, 66.2078, 76.3073, 40.4935, 54.7432, 35.75, 23.8679, 33.8356, 12.7247, 29.4327, 44.9431, 69.1906, 16.1003, 95.4543, 25.0352, 84.7313, 71.2864, 76.7934, 83.4953, 12.483, 96.9265, 38.2522, 68.6798};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 17.24972;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<double> data = {82.9102, 70.6848, 21.503, 61.4588, 54.7789, 48.9889, 57.6766, 91.1859, 26.3674, 55.4601, 53.9357, 87.2005, 78.4771, 65.0102, 18.619, 90.296, 26.3894, 53.8588, 91.8369, 58.8028, 74.0577, 28.2406, 65.609, 59.4867, 27.7544, 54.6992, 69.2428, 22.6264, 87.0083, 58.5116, 60.286, 20.4318, 65.6475, 11.8348, 36.3488, 92.8092, 60.7392, 98.124, 48.1292, 39.5459, 52.2657, 34.3519, 38.9279, 93.0152, 11.3157};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 22.0175905;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<double> data = {30.9928, 10.379, 69.6603, 47.9946, 53.9851, 19.4568, 78.4387, 93.1114, 65.8919, 77.2384, 88.8513, 97.8823, 71.6791, 65.1421};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 12.59912888888889;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<double> data = {54.0812, 60.036, 80.0812, 15.1637, 32.4403, 53.4742, 25.3786, 98.8299, 33.473, 72.1351, 90.6394, 59.841, 98.6129, 36.5767, 64.5488, 35.923, 88.258, 39.9222, 59.808, 87.8954, 18.2785, 24.5793, 54.0977, 12.9087, 91.5403, 13.9525, 16.2761, 12.1946, 55.9819, 24.3788, 91.8012, 11.0245, 85.8931, 87.64, 96.4211, 63.8429, 27.8451, 49.3487, 42.2761, 92.2489, 17.9269, 23.5383, 45.4045, 38.7494, 31.792, 88.7442, 78.7298};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 25.836595476190475;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<double> data = {24.1069, 15.8943, 79.606, 40.5045, 18.9679, 43.3665, 65.9771, 10.217, 97.8191, 69.4296, 50.2139, 19.4678, 96.4568, 77.4883, 34.687, 68.4024, 37.6919, 64.3703, 58.1353, 88.1317, 31.207};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 18.314545624999997;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<double> data = {36.9036, 23.2664, 37.181, 57.7563, 90.112, 82.7015, 25.2467, 93.8447, 12.7934, 36.379, 25.3676, 10.9668, 26.1119, 80.9738, 62.118, 96.6573, 28.6608, 82.1577, 99.0469, 23.5081, 17.9598, 76.4171, 74.5659, 57.7013, 76.1946, 10.0879, 66.032, 83.0613, 69.2236, 68.5397, 33.4922, 66.021, 62.9914, 23.217, 79.7378, 51.7631, 76.3347, 29.4711, 48.1567, 76.8621, 84.2973};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 25.734153888888894;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<double> data = {24.9995, 68.7512, 60.9836, 16.8365, 27.6089, 27.3205, 76.0326, 29.592, 85.1405, 18.9486, 53.7544, 72.8465, 73.393, 98.2861, 19.031, 90.4663, 60.2777, 48.11, 78.9935, 89.6396, 73.4864, 42.5672, 64.568, 12.4912, 46.9234, 54.095, 60.9561, 90.903, 27.499, 99.3435, 41.0978, 22.3655, 48.7802, 44.4267, 11.1838, 29.7073, 23.1263, 74.8021, 52.2794, 72.4454, 48.8241, 10.0714, 47.1322};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 21.97105894736842;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<double> data = {43.8252, 99.0689, 96.2206, 82.9679, 92.6142, 35.4726, 62.0685, 70.0696, 57.7783, 89.3567, 55.9874, 60.5441, 22.8681, 14.8506, 36.1812, 42.8886, 28.0758, 79.3973, 61.3791, 92.8697, 35.294, 54.7377, 88.9914, 45.2452, 24.17, 65.0926, 51.9086, 39.7024, 75.6426, 32.7561, 92.9575, 53.6885, 74.5714, 86.437, 71.0858, 90.1038, 58.0282, 22.6759, 18.3773, 32.5227};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 20.415989142857146;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<double> data = {95.6658, 31.9074, 25.8922, 94.5231, 55.699, 19.5199, 35.4012, 72.4949, 61.6923, 33.6213, 71.4017, 15.9383, 27.9797, 81.9929, 93.1828, 54.0565, 40.7572, 59.7366, 89.4143, 73.9424, 24.4447, 41.3916, 68.0316, 32.1409, 33.3412, 47.2805, 93.4327, 34.33, 68.8061, 63.1755};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 16.5132788;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<double> data = {84.7066, 77.34, 57.3003, 96.1217, 81.6385, 19.8578, 53.7956, 52.4607, 51.1753, 37.4639, 96.6326, 14.0568, 24.9281, 64.0269, 73.0964, 37.3074, 93.9106, 80.9162, 40.8945, 78.6941, 44.8909, 94.1496, 37.9199, 81.7072, 10.8679, 39.2987, 18.7591};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 23.16801363636364;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<double> data = {99.0, 39.0, 19.0, 38.0, 83.0, 87.0, 54.0, 57.0, 39.0, 60.0, 78.0, 29.0, 10.0, 22.0, 36.0, 55.0, 64.0, 79.0, 80.0, 70.0};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 13.253333333333332;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<double> data = {50.0, 60.0, 50.0, 60.0, 50.0, 60.0, 60.0};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<double> data = {42.25180591152108, 78.17980235984584, 96.02634922482405, 40.58619042157095, 28.99690772946481, 95.42930700433745, 60.698867736447575, 65.4750568371753, 60.114536947006016, 65.70844075899055, 97.92331414587117, 17.892536648972055};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 8.880320508649147;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<double> data = {20.0, 20.0, 20.0, 20.0, 10.0, 100.0};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 70.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<double> data = {14.586716505257238, 17.575290010646093, 18.804511433353387, 15.522547896254405, 13.502284781928106, 11.296175351413897, 19.811484956328687, 18.765414696185104, 17.874809050989082, 18.342972086923538, 19.987332068666067};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0136267194726973;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<double> data = {82.9102, 70.6848, 21.503, 61.4588, 54.7789, 48.9889, 57.6766, 91.1859, 26.3674, 55.4601, 53.9357, 87.2005, 78.4771, 65.0102, 18.619, 90.296, 26.3894, 53.8588, 91.8369, 58.8028, 74.0577, 28.2406, 65.609, 59.4867, 27.7544, 54.6992, 69.2428, 22.6264, 87.0083, 58.5116, 60.286, 20.4318, 65.6475, 11.8348, 36.3488, 92.8092, 60.7392, 98.124, 48.1292, 39.5459, 52.2657, 34.3519, 38.9279, 93.0152, 11.3157};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 22.0175905;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<double> data = {44.0, 66.0, 77.0, 88.0, 77.0, 55.0, 12.0, 12.0, 12.0, 45.0, 66.0, 78.0, 78.0, 45.0, 33.0, 45.0, 66.0, 12.0, 55.0, 12.0, 45.0, 78.0, 78.0, 55.0, 12.0, 12.0, 45.0, 45.0, 45.0, 87.0, 78.0, 88.0, 78.0, 54.0, 45.0, 12.0, 45.0, 77.0, 44.0, 66.0, 98.0, 78.0, 44.0, 54.0, 68.0, 68.0, 77.0, 85.0, 55.0, 10.0};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 19.9;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<double> data = {20.0, 20.0, 20.0, 20.0, 20.0, 100.0};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 80.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<double> data = {25.0, 25.0, 10.0, 10.0, 10.0, 100.0};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 60.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<double> data = {51.0, 99.0, 17.0, 45.0, 67.0, 69.0, 89.0, 52.0, 65.0, 62.0, 12.0, 30.0, 60.0, 37.0, 92.0, 63.0, 71.0, 16.0, 72.0, 18.0};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 21.3;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<double> data = {40.0, 40.0, 40.0, 10.0, 10.0, 100.0};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<double> data = {11.0, 21.0, 49.0, 17.0, 32.0, 39.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 11.0, 19.0, 99.0, 99.0, 99.0, 11.0, 11.0, 11.0, 11.0, 29.0, 95.0, 48.0, 97.0, 59.0};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 19.16190476190476;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<double> data = {10.0, 10.0, 10.0, 10.0, 25.0, 100.0};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 75.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<double> data = {10.0, 10.0, 10.0, 10.0, 10.0, 50.0};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 40.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<double> data = {10.0, 11.0, 12.0, 13.0, 14.0, 24.0};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<double> data = {10.0, 30.0, 30.0, 30.0, 10.0, 60.0, 60.0};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<double> data = {99.0, 99.0, 99.0, 20.0, 15.0, 19.0};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<double> data = {90.2, 70.9, 70.5, 30.3, 90.9, 50.9, 30.7};
    Predicting* pObj = new Predicting();
    clock_t start = clock();
    double result = pObj->avgError(data);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07999999999999652;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=8005&pm=3496
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <set>
#include <map>
#include <queue>
using namespace std;
 
#define si size()
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ii;
#define rev(A) reverse((A).begin(), (A).end())
#define s(A) sort((A).begin(), (A).end())
 
//----------------------------
 
class Predicting {
  public:
  double avgError(vector <double> a) {
    double best = 1e15;
    int numpred = a.si - 5;
    for (int i = -10; i <= 10; i++) {
      for (int j = -10; j <= 10; j++) {
        for (int k = -10; k <= 10; k++) {
          for (int m = -10; m <= 10; m++) {
            int n = 10 - (i+j+k+m);
            if (n < -10 || n > 10) continue;
            double total = 0;
            for (int at = 5; at < a.si; at++) {
              double pred = (a[at-5]*i + a[at-4]*j + a[at-3]*k + a[at-2]*m + a[at-1]*n) / 10.0;
              total += fabs(pred - a[at]);
            }
            best <?= total;
          }
        }
      }
    }
    return best / numpred;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/