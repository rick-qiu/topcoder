/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10760
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

class Nisoku {
public:
    double theMax(vector<double> cards);
};

double Nisoku::theMax(vector<double> cards) {
    double ret;
    return ret;
}


int test0() {
    vector<double> cards = {5.0, 8.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 40.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<double> cards = {1.5, 1.8};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<double> cards = {8.26, 7.54, 3.2567};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 202.82857868;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<double> cards = {1.5, 1.7, 1.6, 1.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 9.920000000000002;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<double> cards = {10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E50;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<double> cards = {7.81766, 3.85378};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 30.1275417548;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<double> cards = {5.70216, 4.91392, 9.6267};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 269.73973032551424;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<double> cards = {7.03476, 5.9535, 6.44887, 8.80417};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2377.9005399656953;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<double> cards = {2.62158, 2.977, 1.80268, 3.39773, 8.36079};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 399.6656009333401;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<double> cards = {5.55754, 3.32546, 3.99118, 3.70137, 4.29932, 3.89958};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 4577.367125202294;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<double> cards = {8.6567, 7.86938, 4.96033, 9.27207, 2.18706, 2.93639, 3.62568, 3.33488, 2.64776, 2.28127, 6.0195, 4.42516, 7.26543, 9.99041, 2.41605, 7.00428, 4.44719, 4.8827};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.044067921968039E12;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<double> cards = {5.80937, 9.81643, 8.75915, 1.79267, 4.73352, 2.9275, 2.9058, 5.4856, 3.60501, 4.7097, 3.06224, 2.83059, 1.68458, 3.26268, 2.14842, 5.48844, 3.35253, 6.70429, 6.52142, 2.93687, 1.65934, 6.63675, 2.0463, 4.97966, 6.0123, 5.34671, 7.11036, 2.90532, 5.48402, 8.18955, 7.64127, 8.33337, 6.82876, 2.93654, 7.3643};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2117967730802522E22;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<double> cards = {2.70033, 9.69567, 5.77093, 3.69219, 7.93287, 4.91654, 7.29623, 4.85222, 3.38581, 8.05099, 9.57427, 6.17443, 3.0358, 4.42426, 2.44217, 7.39639, 5.51171, 3.8698, 5.25161, 7.44887};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.512667801882131E14;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<double> cards = {2.81637, 4.82096, 5.11082, 4.52299, 3.7384, 5.87487, 7.43401, 8.85206, 8.89759, 5.19835, 8.18882, 9.58285, 5.01887, 3.14983, 5.36001, 6.61785, 9.11171, 9.51013, 8.80104, 1.55748, 8.76461, 5.67998, 5.87998, 3.3357, 8.09169, 1.7841, 5.95324, 4.48027, 2.33672, 4.44412, 1.56365, 2.68296, 8.59931, 8.03962, 4.61244, 3.91419, 8.49305, 4.11159, 4.18926, 3.41778, 3.78855, 6.92939, 4.35551, 5.0932, 6.71885, 1.73214};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1117759783161546E32;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<double> cards = {4.15117, 8.2544, 3.62677, 7.84743, 3.02483, 6.83959, 7.33332, 5.30816, 3.67079, 2.13596, 3.81859, 4.52583, 3.87123, 4.13072, 9.75208, 1.50375, 3.46796, 8.56141, 1.59984, 4.26152, 6.19159, 5.92727, 3.82022, 7.28512, 4.53305, 4.17158, 5.6995, 6.21899, 6.43192, 5.64797, 4.52144, 4.88686, 2.12321, 1.99675, 7.84535, 4.14316, 2.18043, 9.22004, 8.09482};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 8.030924287782813E25;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<double> cards = {2.0497, 8.80643, 4.07115, 3.98284, 7.03189, 3.23689, 3.5905, 7.37137, 9.75027, 2.67376, 4.83349, 4.85694, 2.33003, 4.52248, 4.37819, 7.35294, 4.8256, 3.41128, 1.66689, 1.53824, 4.49845, 2.48509, 3.70256, 9.00558, 8.97031, 8.75148, 5.95223, 8.6856, 4.98928, 5.59934, 6.77521, 4.38381, 5.09527, 5.51156, 3.16723, 5.87532, 4.52184, 2.05285, 4.97176, 2.34901, 4.63822, 4.98427, 5.20387, 3.03224, 3.54255, 7.96954, 4.82909, 3.59708, 2.84707, 9.51884};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 6.659177462025523E32;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<double> cards = {1.50079, 6.59814, 4.14827, 8.41055, 4.74505, 7.57162, 6.08915, 5.26846, 7.03909, 3.49333, 1.64239, 9.69515, 8.31351, 5.21793, 7.81623, 2.57482, 3.97905, 6.51709, 5.83968, 4.07736, 2.80019, 4.06758, 4.40807, 2.31127, 6.67753, 5.22861, 8.32476, 9.68042, 7.19256, 3.73374, 1.58421, 8.91274, 1.58704, 3.7244, 7.34168, 8.35895, 6.77723, 6.09435, 3.85984, 5.22815, 6.04108, 5.86148, 5.79672, 4.38552, 4.53726, 2.04348, 1.9408, 6.81178, 5.41459, 3.25922};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0055960639921041E34;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<double> cards = {5.08977, 3.97888, 4.27056, 6.64873, 3.84695, 3.24847, 7.40931, 5.60483, 3.19581, 7.62836, 7.56948, 3.70258, 2.15332, 8.79012, 6.74727, 8.70131, 5.53305, 8.17513, 3.27549, 7.39474, 2.94935, 6.5986, 8.63161, 2.27005, 9.46231, 4.95356, 3.98501, 4.62347, 7.45357, 5.74342, 7.75832, 4.83644, 3.10693, 7.4168, 4.53543, 6.33654, 5.33556, 6.99374, 3.28884, 9.77166, 7.99752, 3.1883, 3.17033, 6.02445, 2.46613, 4.60288, 5.82752, 1.64405, 5.28179, 3.86081};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.208203486676352E35;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<double> cards = {4.35328, 3.05562, 7.40092, 4.04531, 1.93065, 2.01252, 3.81763, 7.91324, 7.63846, 4.76665, 6.9098, 6.77535, 3.50172, 3.91574, 3.84179, 5.12301, 6.2492, 9.91969, 7.62172, 1.81416, 6.46491, 3.81472, 8.41239, 7.54258, 5.61582, 5.10401, 2.70817, 2.03466, 7.14036, 4.7049, 4.71467, 1.78707, 4.5961, 4.6406, 4.0358, 8.03214, 1.88262, 2.98777, 2.06378, 6.0065, 4.64187, 2.3141, 5.31321, 4.04667, 7.17873, 7.54083, 5.05023, 5.87159, 1.72668, 3.13334};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5647063342653578E32;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<double> cards = {7.85231, 6.13353, 5.31069, 1.84163, 4.97371, 8.10014, 9.86057, 3.5975, 7.07512, 3.11507, 2.60752, 3.84279, 7.18588, 5.62026, 6.60084, 5.0415, 5.96878, 2.41507, 8.45476, 4.06024, 1.57575, 1.53016, 6.94623, 3.73113, 7.08884, 5.12646, 7.50221, 6.11361, 6.3102, 2.39631, 2.28409, 5.14206, 3.36072, 9.568, 5.47749, 4.54909, 7.61652, 2.31895, 3.04736, 7.18545, 7.34492, 8.72319, 4.75228, 1.89987, 2.57489, 3.97051, 2.32953, 5.51952, 9.1033, 4.16332};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2695206198296655E33;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<double> cards = {1.75641, 1.77082};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5272300000000003;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<double> cards = {1.67831, 1.99275, 1.92525};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 7.18099419;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<double> cards = {1.82508, 1.62431, 1.91344, 1.65564};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 12.313917179999999;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<double> cards = {1.81816, 1.99677, 1.94593, 1.98295, 1.8743};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 28.995325710909377;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<double> cards = {1.55816, 1.62841, 1.53585, 1.71464, 1.58691, 1.79202};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 35.01950645417952;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<double> cards = {1.57064, 1.76212, 1.54496, 1.83326, 1.89201, 1.9348};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 43.32142020814632;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<double> cards = {1.84909, 1.65491, 1.94071, 1.8579, 1.96206, 1.66111, 1.81377, 1.6827, 1.83825, 1.74644, 1.67105, 1.89142, 1.55541, 1.54008, 1.89713, 1.99875, 1.77712, 1.82688, 1.70301, 1.61857, 1.58601, 1.82859, 1.8018, 1.77819, 1.99971, 1.98552, 1.87649, 1.64731, 1.84405, 1.60499, 1.79315, 1.6061, 1.85353, 1.99427, 1.98089, 1.88045, 1.52629};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6826116285243586E10;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<double> cards = {1.77992, 1.57083, 1.78295, 1.72492, 1.65518, 1.88335, 1.7201, 1.86758, 1.61819, 1.80219, 1.59406, 1.61604, 1.68763, 1.96151, 1.88392, 1.62721, 1.54044, 1.96966, 1.66669, 1.66383, 1.72111, 1.64897, 1.58046, 1.78762, 1.5432, 1.65848, 1.96059, 1.56807, 1.91788, 1.54322, 1.82742, 1.84975, 1.87501, 1.71641, 1.80281, 1.93539, 1.90272, 1.60379, 1.95591, 1.81818, 1.52331, 1.82434};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4303239984918674E11;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<double> cards = {1.60844, 1.89395, 1.88783, 1.55244, 1.58477, 1.88297, 1.88994, 1.98556, 1.80359, 1.89194, 1.97992, 1.6792, 1.82828, 1.69388, 1.62105, 1.78665, 1.69387, 1.64321, 1.9799, 1.94639, 1.52189, 1.8055, 1.64507, 1.63917, 1.97038, 1.85119, 1.91827};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8623337077262614E7;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<double> cards = {1.60528, 1.8222, 1.85643, 1.89294, 1.5658, 1.52335, 1.70631, 1.51486, 1.63311, 1.51113, 1.7717, 1.84037, 1.63597, 1.81629, 1.58087, 1.8151, 1.79482, 1.76732, 1.63559, 1.66482, 1.97261, 1.90613, 1.69313, 1.51875, 1.91425};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 4971552.856178601;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<double> cards = {1.86031, 1.528, 1.65458, 1.70593, 1.59134, 1.50486, 1.53774, 1.85251, 1.58323, 1.89354, 1.58733, 1.55273, 1.72918, 1.54286, 1.51195, 1.91105, 1.88617, 1.89827, 1.82607, 1.59659, 1.66685, 1.73783, 1.73749, 1.79267, 1.82338, 1.53156, 1.715, 1.64231, 1.8036, 1.74025, 1.95848, 1.63509, 1.53953, 1.83034, 1.91619, 1.66315, 1.98476, 1.71456, 1.60356, 1.59982, 1.98704, 1.75678, 1.63527, 1.67009, 1.57249, 1.78464, 1.50952, 1.89179, 1.85407, 1.78706};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4741782485549117E13;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<double> cards = {1.68226, 1.77282, 1.56727, 1.77164, 1.59528, 1.53103, 1.70434, 1.86761, 1.73023, 1.65781, 1.6452, 1.9215, 1.6956, 1.79709, 1.70396, 1.76727, 1.82706, 1.83952, 1.86351, 1.60216, 1.73228, 1.82687, 1.97242, 1.62436, 1.85673, 1.53477, 1.85929, 1.96678, 1.96635, 1.86027, 1.96607, 1.51538, 1.6463, 1.66849, 1.78623, 1.55919, 1.68066, 1.70226, 1.94163, 1.72564, 1.9943, 1.83412, 1.92512, 1.63641, 1.94082, 1.5277, 1.84097, 1.50747, 1.59473, 1.89235};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 4.146299122874238E13;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<double> cards = {1.50824, 1.53211, 1.97314, 1.83584, 1.91381, 1.7599, 1.57189, 1.99205, 1.59247, 1.72912, 1.89253, 1.57062, 1.67556, 1.67129, 1.87008, 1.5659, 1.69815, 1.74817, 1.88226, 1.71902, 1.71877, 1.82859, 1.78927, 1.83315, 1.71797, 1.8196, 1.54974, 1.60624, 1.65469, 1.50017, 1.93441, 1.91093, 1.7465, 1.80886, 1.97331, 1.51483, 1.64002, 1.66741, 1.66822, 1.82884, 1.7008, 1.50744, 1.67912, 1.54883, 1.52256, 1.94585, 1.82014, 1.67509, 1.92597, 1.74781};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9863603711554695E13;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<double> cards = {1.65035, 1.98868, 1.59719, 1.78946, 1.79649, 1.97944, 1.6389, 1.90637, 1.73976, 1.70761, 1.55255, 1.98618, 1.89503, 1.5845, 1.89335, 1.69628, 1.98501, 1.80014, 1.55278, 1.78954, 1.52578, 1.95171, 1.61969, 1.65016, 1.52578, 1.65189, 1.55271, 1.97901, 1.71545, 1.80556, 1.97552, 1.65019, 1.52729, 1.93091, 1.64932, 1.52202, 1.73969, 1.77169, 1.68276, 1.60717, 1.98636, 1.95746, 1.58228, 1.80478, 1.64283, 1.57032, 1.88805, 1.64952, 1.72769, 1.69827};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.52866020868071E13;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<double> cards = {1.83509, 1.99045, 1.80678, 1.66379, 1.88645, 1.58015, 1.63145, 1.59325, 1.82982, 1.6662, 1.53802, 1.97147, 1.7437, 1.57241, 1.69991, 1.86024, 1.74416, 1.56587, 1.5591, 1.59827, 1.96595, 1.57819, 1.617, 1.7555, 1.96848, 1.58027, 1.79056, 1.81858, 1.79915, 1.73837, 1.6081, 1.99232, 1.85703, 1.54136, 1.84358, 1.96355, 1.6662, 1.80675, 1.64778, 1.72604, 1.64813, 1.89403, 1.52346, 1.77484, 1.51832, 1.88876, 1.9616, 1.55353, 1.90848, 1.7119};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4455955288127152E13;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<double> cards = {2.93905, 9.18583};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 26.997613661499997;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<double> cards = {4.88188, 7.88647, 6.75908};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 260.2299883697855;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<double> cards = {5.82974, 4.21817, 3.03506, 2.6664};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 199.0058515062333;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<double> cards = {9.72316, 3.48802, 6.98119, 5.32167, 4.90543};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 6180.7457613792385;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<double> cards = {3.84873, 6.38743, 3.25805, 9.73648, 9.47539, 6.18344};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 45690.989686846086;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<double> cards = {5.08912, 5.00413, 9.67507, 5.28888, 8.79621, 5.34381, 3.17549, 9.79233, 5.89349, 3.06906, 6.52516, 4.93094, 4.11048, 9.45412, 7.3177, 9.20218, 3.40799, 6.07817, 4.33523, 5.71003, 4.90522, 3.90266, 7.58225, 3.66726, 7.55198, 8.24366, 5.31751, 6.9613, 6.64599, 6.38259, 8.55658, 8.43945, 2.21294, 9.91926, 2.03118, 3.15682, 5.79576, 7.82648, 4.33148, 2.95828, 6.96888, 4.75222, 8.53528, 3.46796};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 4.48221329521038E32;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<double> cards = {9.56912, 6.34318, 5.50621, 8.70552, 2.32646, 9.00131, 6.45292, 3.41554, 6.1809, 5.84143, 6.1717, 4.48974, 5.44555, 6.39954, 7.12084, 2.7124, 6.90651, 9.70641, 5.58588, 7.60776, 2.54367, 4.63876, 4.57719, 4.77597, 5.59789, 5.00106, 8.63786, 2.01824, 9.38618, 3.85967, 5.52339, 2.37794, 8.15516, 4.30507, 5.31017, 4.61397, 6.43681, 7.23822, 9.04213, 3.01157, 2.108, 2.21462, 3.63503, 7.62985, 6.26454, 7.40807, 9.95421, 6.51148, 3.10692};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0378984047455966E35;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<double> cards = {2.06457, 8.34133, 2.64584, 9.53516, 2.28532, 4.71429, 2.26472, 2.832, 3.79193, 3.63315, 4.13063, 4.16195, 8.525};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 6.061480872726459E7;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<double> cards = {8.18869, 3.93203, 5.70075, 6.07989, 8.74043, 2.25154, 4.27737, 4.06109, 3.59399, 3.94437, 5.18726, 8.68556, 6.38745, 2.81992, 6.11691, 6.05536, 8.49104, 4.46387, 7.2222, 4.21924, 5.79202, 6.29521, 2.46531, 5.54004, 9.60914, 2.89799, 3.80651, 2.98136, 6.47055, 9.20639};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7602397563718205E21;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<double> cards = {2.3454, 5.80172, 9.22719};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 125.55764156725273;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<double> cards = {4.96121, 7.00644, 7.00299, 7.3769, 7.21988, 9.42961, 4.44328, 3.67405, 2.70254, 5.1948, 5.29397, 5.19951, 5.48347, 7.23637, 8.82116, 5.1176, 4.11569, 3.73059, 3.82725, 3.47756, 3.48836, 3.94613, 5.42148, 6.13993, 2.81598, 8.77104, 7.64868, 2.64039, 8.10603, 5.83184, 2.29395, 6.7398, 8.68826, 3.50667, 7.3586, 5.0016, 8.47788, 3.09072, 5.46775, 9.04025, 7.00157, 4.58674, 6.11722, 4.19742, 6.08743, 7.81618, 7.49984, 2.65848, 7.40896, 7.41982};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9455887589144136E36;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<double> cards = {6.7632, 2.96881, 5.38778, 7.90314, 9.30001, 3.93394, 7.06215, 4.01801, 6.16176, 2.11365, 2.22834, 9.58557, 5.3827, 5.11611, 4.06371, 2.63908, 8.19681, 5.60032, 2.95215, 5.24746, 5.18803, 2.29635, 7.12141, 2.18098, 7.03306, 4.87757, 5.11329, 4.79668, 4.53224, 4.8506, 2.5647, 2.82626, 6.74547, 6.02912, 3.96798, 5.67639, 2.05406, 7.93318, 2.00658, 5.4445, 7.19869, 3.29689, 5.53087, 4.38174, 8.53925, 7.36563, 2.59837, 7.59279, 8.28709, 5.75043};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 7.13543586647185E33;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<double> cards = {3.48305, 6.88772, 6.49114, 8.6312, 9.25382, 7.50785, 6.97982, 5.53613, 2.60658, 6.92011, 4.74545, 4.15907, 5.11841, 6.72072, 9.52543, 3.13142, 9.60466, 7.38432, 7.76406, 5.64885, 7.05454, 2.99166, 6.90673, 7.95147, 9.10679, 2.8949, 6.00544, 2.57313, 9.17356, 5.92966, 7.34249, 6.67363, 5.97961, 5.56853, 2.93656, 5.37537, 6.81277, 2.08819, 3.51589, 3.78229, 4.85771, 7.69138, 9.00525, 3.45159, 2.4728, 7.11235, 3.27378, 3.40494, 2.88935, 2.63067};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 8.879587505842683E35;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<double> cards = {2.29165, 5.88312, 6.26981, 4.8384, 8.91638, 7.82371, 4.91997, 2.60309, 9.08539, 4.20934, 4.32941, 4.3099, 4.14662, 8.70051, 6.33705, 7.31262, 6.21305, 6.85928, 7.89955, 5.22759, 7.59929, 5.52738, 3.68055, 4.46047, 2.43758, 7.24395, 5.43568, 5.70079, 5.05657, 8.18918, 7.9888, 9.66787, 4.21018, 8.887, 6.69017, 7.50174, 2.72536, 3.40684, 4.35057, 5.94692, 2.26491, 7.90762, 2.61357, 4.93646, 2.37484, 7.68099, 7.79383, 5.28979, 6.76924, 7.12626};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.50090655143472E36;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<double> cards = {6.73517, 5.54374, 3.51454, 9.55605, 3.9056, 6.19046, 6.45988, 4.97809, 8.18483, 9.60015, 4.62303, 8.68892, 6.30736, 3.53563, 6.10597, 4.94751, 4.48578, 3.32096, 4.62284, 7.05218, 4.58313, 3.61861, 2.97468, 9.3817, 3.74415, 3.5819, 9.02987, 6.72138, 7.92168, 6.50767, 5.52852, 4.01264, 7.1972, 7.49549, 7.01538, 9.61484, 3.634, 3.98793, 2.30934, 6.04755, 3.67107, 4.48133, 8.29685, 2.30461, 3.28766, 5.74898, 3.53957, 8.908, 8.76817, 4.00052};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1007824176021692E36;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<double> cards = {1.5, 1.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<double> cards = {1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 8.47288609443E11;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<double> cards = {10.0, 10.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<double> cards = {2.81766, 1.85378, 2.20216, 2.91392, 2.1267, 2.53476, 2.9535, 2.94887, 2.80417, 1.62158, 2.977, 2.80268, 2.39773, 2.36079, 1.55754, 1.82546, 2.99118, 2.20137, 1.79932, 1.89958, 2.23227, 2.6567, 2.86938, 2.96033, 1.77207, 2.18706, 1.93639, 2.12568, 2.33488, 2.14776, 1.78127, 2.5195, 1.92516, 2.26543, 2.49041, 1.91605, 2.00428, 1.94719, 2.3827, 2.09998, 2.30937, 1.81643, 2.75915, 2.29267, 2.23352, 2.9275, 1.9058, 2.9856, 2.60501, 2.7097};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.15438226627297843E18;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<double> cards = {2.06224, 2.33059, 2.18458, 2.26268, 2.64842, 2.48844, 1.85253, 1.70429, 2.02142, 2.43687, 1.65934, 1.63675, 1.5463, 2.47966, 1.5123, 2.84671, 2.61036, 1.90532, 1.98402, 1.68954, 1.64127, 2.33337, 1.82876, 1.93654, 2.3643, 2.01657, 2.70033, 1.69567, 2.27093, 2.19219, 1.93287, 2.41654, 2.29623, 2.35222, 2.38581, 1.55099, 2.07427, 2.67443, 2.0358, 2.92426, 1.94217, 2.89639, 2.51171, 1.8698, 1.75161, 2.44887, 2.89228, 2.81637, 2.82096, 1.61082};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.32036019115439856E17;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<double> cards = {2.52299, 2.2384, 2.37487, 2.93401, 2.85206, 2.39759, 2.69834, 2.18882, 2.08285, 1.51887, 2.64983, 2.86001, 1.61785, 1.61171, 2.01013, 2.80104, 1.55748, 2.26461, 2.17998, 2.37998, 2.3357, 2.09169, 1.7841, 1.95324, 2.48027, 2.83672, 1.94412, 1.56365, 2.18296, 2.09931, 2.03962, 2.11244, 2.41419, 2.49305, 2.61159, 1.68926, 2.41778, 2.78855, 2.42938, 2.35551, 2.5932, 2.21885, 2.73214, 2.71339, 1.65117, 1.7544, 2.12677, 2.84743, 2.02483, 2.33959};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 6.9130776778567501E17;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<double> cards = {2.83332, 2.80816, 2.17079, 1.63596, 2.81859, 2.02583, 2.37123, 1.63072, 2.25208, 2.00375, 1.96796, 2.56141, 1.59984, 1.76152, 2.69159, 2.92727, 2.32022, 2.78512, 1.53305, 2.17158, 2.1995, 1.71899, 2.93192, 1.64797, 2.52144, 1.88686, 2.62321, 2.49675, 1.84535, 2.14316, 2.18043, 1.72004, 2.09482, 2.0497, 2.30643, 1.57115, 2.98284, 2.53189, 2.73689, 2.0905, 2.87137, 1.75027, 1.67376, 1.83349, 2.85694, 2.83003, 1.52248, 1.87819, 2.85294, 2.8256};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 4.2734325540276896E17;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<double> cards = {2.91128, 2.16689, 1.53824, 1.99845, 2.48509, 2.20256, 2.50558, 2.97031, 2.25148, 1.95223, 2.6856, 1.98928, 1.59934, 1.77521, 2.88381, 1.59527, 2.51156, 1.66723, 2.37532, 2.02184, 1.55285, 1.97176, 1.84901, 2.63822, 2.98427, 2.70387, 2.53224, 2.04255, 1.96954, 2.82909, 2.09708, 2.84707, 2.01884, 1.50079, 2.09814, 2.14827, 2.41055, 2.24505, 1.57162, 1.58915, 1.76846, 2.53909, 2.49333, 1.64239, 2.19515, 2.31351, 1.71793, 1.81623, 2.07482, 1.97905};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 9.2180994417609712E16;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<double> cards = {2.01709, 1.83968, 2.07736, 2.80019, 2.06758, 2.40807, 2.31127, 2.17753, 2.72861, 2.32476, 2.18042, 2.19256, 2.73374, 2.58421, 2.91274, 2.58704, 1.7244, 2.34168, 2.35895, 2.27723, 2.59435, 1.85984, 1.72815, 2.54108, 2.36148, 1.79672, 2.88552, 2.53726, 2.04348, 2.9408, 2.31178, 2.41459, 1.75922, 2.58977, 1.97888, 1.77056, 1.64873, 1.84695, 2.24847, 2.40931, 1.60483, 1.69581, 1.62836, 1.56948, 1.70258, 2.15332, 2.29012, 1.74727, 2.70131, 2.53305};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.36541972815117856E17;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<double> cards = {1.67513, 2.27549, 2.89474, 1.94935, 2.0986, 2.63161, 1.77005, 2.96231, 2.95356, 2.48501, 2.62347, 2.45357, 2.24342, 2.75832, 2.33644, 2.10693, 2.4168, 2.53543, 2.83654, 2.33556, 1.99374, 1.78884, 2.27166, 2.99752, 2.1883, 1.67033, 1.52445, 2.96613, 1.60288, 2.82752, 2.14405, 2.78179, 2.36081, 1.85328, 1.55562, 2.90092, 2.04531, 2.93065, 1.51252, 1.81763, 2.91324, 2.63846, 1.76665, 1.9098, 2.27535, 2.00172, 2.91574, 2.34179, 2.62301, 2.7492};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.06994140418049178E18;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<double> cards = {1.91969, 1.62172, 2.31416, 2.96491, 1.81472, 1.91239, 1.54258, 2.61582, 2.10401, 2.20817, 2.03466, 2.14036, 2.7049, 2.21467, 1.78707, 1.5961, 2.1406, 2.0358, 1.53213, 2.38262, 2.98777, 2.56378, 1.5065, 2.64187, 2.3141, 2.31321, 2.04667, 2.17873, 1.54083, 1.55023, 2.37159, 2.22668, 2.13334, 1.85231, 1.63353, 2.31069, 2.34163, 1.97371, 1.60014, 2.36057, 1.5975, 2.57512, 2.11507, 2.60752, 2.84279, 2.18588, 1.62026, 2.10084, 2.5415, 2.46878};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 5.4861661030869936E16;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<double> cards = {2.41507, 2.45476, 2.06024, 2.57575, 2.53016, 1.94623, 1.73113, 2.08884, 2.12646, 1.50221, 2.61361, 2.8102, 2.89631, 2.28409, 2.64206, 2.36072, 2.068, 2.97749, 2.04909, 2.61652, 1.81895, 1.54736, 2.18545, 2.34492, 2.72319, 1.75228, 1.89987, 2.57489, 1.97051, 2.32953, 2.01952, 1.6033, 1.66332, 2.25641, 2.77082, 2.67831, 1.99275, 2.92525, 2.82508, 1.62431, 2.41344, 1.65564, 2.81816, 2.99677, 2.94593, 2.48295, 2.8743, 2.55816, 2.12841, 2.53585};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.66351416515256346E18;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<double> cards = {2.21464, 2.58691, 2.79202, 2.89201, 1.57064, 2.26212, 2.54496, 1.83326, 2.39201, 1.9348, 1.70441, 2.84909, 2.15491, 1.94071, 2.3579, 1.96206, 2.16111, 1.81377, 2.6827, 2.83825, 2.24644, 2.17105, 2.39142, 1.55541, 2.54008, 2.89713, 1.99875, 1.77712, 2.32688, 2.70301, 2.61857, 2.08601, 2.32859, 2.8018, 2.27819, 2.49971, 1.98552, 1.87649, 2.64731, 1.84405, 2.60499, 2.79315, 2.6061, 2.35353, 2.49427, 2.98089, 1.88045, 2.52629, 2.84424, 1.77992};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.76331746122597504E18;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<double> cards = {2.3518, 1.91, 1.621, 2.4621, 1.7294, 1.5467, 1.9158, 2.48, 1.9161, 1.5426, 1.7785, 2.4395, 2.0814, 1.5524, 1.5254, 2.2699, 2.3495, 1.646, 2.0061, 2.3055};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1506401.8683900617;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<double> cards = {1.5, 1.7, 1.6, 1.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 9.920000000000002;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<double> cards = {1.502269, 1.692934, 2.049378, 1.781093, 2.024297, 1.668562, 2.080468, 2.453028, 1.700562, 1.970382, 2.18925, 2.462278, 1.523116, 1.982096, 1.997779, 1.700486, 2.06146, 1.585851, 1.993929, 2.132603, 2.046587, 2.008028, 2.291208, 2.162583, 2.304453, 1.980298, 1.999282, 2.109113, 1.972461, 2.472517, 2.302306, 2.423355, 1.509508, 2.002753, 1.959643, 2.03553, 2.20252, 2.113555, 1.825475, 2.373023, 2.108626, 2.046902, 2.113034, 1.902414, 1.846223, 1.843127, 2.185035, 1.704535, 2.385611, 2.080933};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 4.063263476189453E15;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<double> cards = {1.612708, 6.842567, 1.598388, 1.903316, 2.758433, 5.553122, 5.913518, 9.566708, 5.98934, 8.342093, 1.738228, 7.595819, 1.831856, 2.826666, 9.744089, 6.786204, 2.534496, 7.492616, 3.219528, 1.606736, 4.223878, 1.874428, 1.881272, 2.499851, 7.819105, 1.920776, 2.781697, 9.560056, 1.617518, 8.231626, 1.572765, 2.31172, 2.830014, 2.076081, 1.521789, 3.088635, 3.235307, 2.329611, 2.5774, 2.891343, 2.177065, 2.660891, 1.718008, 1.921154, 6.447095, 3.50414, 1.665405, 2.318258, 3.362511, 3.889283};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 4.792858617126947E25;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<double> cards = {1.58, 1.969, 1.57, 1.625, 1.923, 1.644, 1.571, 1.711, 1.682, 1.965, 1.993, 1.784, 1.722, 1.764, 1.661, 1.633, 1.571, 1.83, 1.616, 1.912, 1.578, 1.508, 1.813, 1.719, 1.733, 1.569, 1.877, 1.527, 1.84, 1.799, 1.955, 1.549, 1.621, 1.518, 1.731, 1.621, 1.625, 1.54, 1.925, 1.955, 2.121, 2.222, 1.988, 1.754, 1.646, 1.887, 1.877, 7.2, 1.86, 1.893};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7225285273351366E14;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<double> cards = {6.335, 1.75, 1.65, 1.67, 1.72, 1.51, 1.66, 1.61, 4.793, 1.62, 7.649, 3.492, 1.64, 1.53, 9.059, 8.421, 1.7, 1.77, 7.383, 1.54, 1.69, 3.915, 5.926, 1.76, 1.73, 1.78, 4.027, 1.6, 8.777, 5.172, 1.52, 6.362, 1.58, 1.5, 1.74, 4.763, 1.63, 8.69, 1.56, 1.71, 8.426, 8.54, 1.59, 1.57, 1.79, 3.886, 1.8, 1.55, 8.386, 1.68};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.233193918138081E23;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<double> cards = {1.7, 1.7, 1.713, 1.513, 1.502, 1.5, 1.505, 1.51, 1.51, 1.5, 1.5, 1.5, 1.67, 1.64, 2.0, 2.04, 2.04, 3.01, 3.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 227176.64744635238;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<double> cards = {1.74, 1.8, 1.94, 1.98, 1.99};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 27.686472000000002;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<double> cards = {1.5, 1.6, 1.7, 1.8, 1.9, 2.0, 2.1, 2.2, 2.3, 1.5, 1.7, 1.9, 1.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 4969.967217600001;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<double> cards = {1.5, 1.6, 1.7, 1.8, 1.9, 2.0, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3.0, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4.0, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5.0, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6.0, 6.1, 6.2, 6.3, 6.4};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2361267322669717E28;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<double> cards = {1.5, 1.6, 1.7, 10.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 52.699999999999996;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<double> cards = {10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E50;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<double> cards = {8.6313123, 5.6, 5.3, 9.9121212, 4.27, 6.67577, 5.454353, 5.534534, 5.009, 7.012312312, 8.6311311, 5.6123, 5.3, 9.9, 7.00007, 6.67577, 5.454353, 5.534534, 5.009, 9.0312, 8.6, 5.012312, 5.3, 9.91234, 7.11117, 6.67577, 5.454353, 5.534534, 5.009, 9.031231212, 8.132126, 2.631231123, 5.3, 9.9, 10.0, 6.67577, 5.454353, 5.534534, 5.009, 9.0, 1.5316, 5.6, 5.312312312312, 8.9, 7.7131231231, 6.677, 5.454353, 5.534534, 5.009, 9.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 5.472489787062014E39;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<double> cards = {1.5, 1.5, 1.51, 1.51, 1.51, 1.62, 1.525234334, 1.645343453, 1.73454545, 2.53434343, 2.0, 2.0, 2.0, 2.0, 2.0, 6.0, 10.0, 9.13, 1.9191919191919, 1.9191919191919, 1.73432432432, 1.834354543, 1.99993434, 3.53423432432, 2.83424324, 2.834345, 2.8454325, 3.845454, 5.0000004, 6.0002001, 5.343434, 3.343434, 1.513434, 1.526464, 1.500252, 1.634303, 3.3432324, 2.32432, 2.343523, 2.9345, 2.002022, 2.132323, 2.09112321, 2.213214, 2.9199902, 2.2424324, 2.52352, 2.62343, 3.001123};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 4.8255034114507645E19;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<double> cards = {1.5, 1.51, 1.52, 1.53, 1.54, 1.55, 1.56, 1.57, 1.58, 1.59, 1.6, 1.61, 1.62, 1.63, 1.64, 2.01, 2.02, 2.03, 2.04, 2.05, 2.06, 2.07, 2.08, 2.09, 2.1, 2.11, 2.12, 2.13, 2.14, 2.15, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6538515165304897E12;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<double> cards = {2.045, 2.489, 2.247, 2.157, 2.01, 1.794, 1.644, 2.304, 1.724, 1.661, 1.537, 1.865, 1.69, 1.827, 1.717, 1.989, 1.571, 1.697, 1.757, 1.851, 3.169, 3.929, 2.325, 1.748, 3.467, 3.119, 1.659, 4.044, 1.649, 3.459, 4.634, 2.761, 4.246, 6.334, 7.756, 5.731, 3.932, 7.141, 6.768, 7.814, 3.58, 5.662, 2.007, 5.211, 6.09, 6.098, 2.054, 1.751, 7.187, 3.378};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.178081344303787E23;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<double> cards = {4.420646205707249, 4.565743971836355, 4.580376914364928, 3.863829493150251, 5.217763551734663, 3.0572298975239045, 3.8673191983649993, 3.8202249481734443, 3.4651762851416827, 5.114983438013313, 2.9997489882813744, 1.8859406405836272, 3.394800405479965, 2.989790306632132, 4.179143117638713, 2.375712439214418, 1.912435552932028, 3.1382039527794086, 1.9697948990068563, 1.6894634425511335, 2.8149983612352303, 2.8967489661123476, 1.801181544227647, 4.871999958186632, 2.1299346830032144, 3.7683262334780454, 1.987837485807613, 4.3252529274183935, 1.9895343318794674, 2.218891142529519, 4.626718536427659, 5.03402791280015, 3.0036463521450583, 2.7145071329482486, 5.095323991397531, 4.810755360387569, 2.270078400125883, 3.1859090524305356, 4.862123594238577, 1.8342669129325642, 1.9627437348893766, 2.189740265384842, 1.934119589668506, 5.152152416153184, 3.8633998863790686, 1.7426606057242697, 1.5046536093196483, 2.835785046946516, 4.253605966237515, 2.1365528027347866};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0469078107307165E24;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<double> cards = {2.038363, 1.75267, 1.726368, 2.169081, 1.760585, 1.628945, 1.643807, 1.653157, 1.906708, 1.647052, 2.383851, 1.694006, 1.575714, 2.386911, 1.578854, 1.726438, 2.256551, 1.549466, 1.686654, 2.290649, 1.980078, 2.209294, 2.472248, 2.195424, 1.967633, 2.308504, 2.301846, 1.903661, 2.232382, 2.240248, 2.325371, 1.717917, 1.626608, 1.771529, 1.885432, 1.549485, 1.850316, 2.421794, 1.537026, 2.392102, 1.89416, 1.528423, 2.336362, 2.00713, 1.522183, 2.495543, 2.279089, 1.889757, 2.424473, 2.246318};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6318170795374405E15;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<double> cards = {2.0414029729914622, 1.6241920123405236, 2.196413343248535, 1.5787884343180232, 2.479661283390189, 1.9796064169231566, 2.114502622805744, 1.52140091462217, 1.6262820947205245, 2.1737135753625765, 2.35547836565878, 1.8357136981452973, 1.5288990651903545, 1.6623818383840665, 1.6775655482301137, 2.2883306506737933, 1.9768124957282416, 2.2222383909918455, 2.487526855345071, 1.746992331758514, 1.833500995752227};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2485858.27845893;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<double> cards = {1.829746, 1.546657, 1.994931, 1.762618, 2.093609, 1.983779, 1.808267, 1.917017, 1.742183, 1.817954, 2.020164, 1.975045, 1.77571, 2.028587, 1.852654, 1.690362, 1.973653, 1.655718, 1.550172, 1.93553, 1.801144, 1.755733, 1.688165, 2.050853, 1.537135, 2.092126, 2.075188, 2.013407, 1.542518, 1.60593, 1.916926, 2.019559, 2.08742, 2.009012, 2.011319, 1.975045, 1.656029, 1.544185, 1.643083, 1.886163, 1.548286, 1.655901, 1.746742, 2.045781, 2.096319, 1.61525, 1.606626, 1.608219, 1.915131, 2.042961};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4574531573669028E14;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<double> cards = {1.5, 1.51, 1.52, 1.53, 1.54, 1.55, 1.56, 1.57, 1.58, 1.59, 1.6, 1.61, 1.62, 1.6300000000000001, 1.6400000000000001, 1.6500000000000001, 1.6600000000000001, 1.6700000000000002, 1.6800000000000002, 1.6900000000000002, 1.7000000000000002, 1.7100000000000002, 1.7200000000000002, 1.7300000000000002, 1.7400000000000002, 1.7500000000000002, 1.7600000000000002, 1.7700000000000002, 1.7800000000000002, 1.7900000000000003, 1.8000000000000003, 1.8100000000000003, 1.8200000000000003, 1.8300000000000003, 1.8400000000000003, 1.8500000000000003, 1.8600000000000003, 1.8700000000000003, 1.8800000000000003, 1.8900000000000003, 1.9000000000000004, 1.9100000000000004, 1.9200000000000004, 1.9300000000000004, 1.9400000000000004, 1.9500000000000004, 1.9600000000000004, 1.9700000000000004, 1.9800000000000004};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8389612805791055E13;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<double> cards = {1.55446, 1.55159, 1.9017, 8.69137, 1.50273, 3.15897, 1.55724, 1.60161, 1.79717, 1.75408, 1.57363, 5.20188, 1.77175, 1.52196, 2.42134, 1.64855, 1.71459, 8.16553, 7.91498, 1.86764, 1.80285, 1.60546, 1.51842, 1.67718, 1.96857, 1.71923, 1.57256, 1.69723, 1.57241, 1.76296, 7.78191, 6.91794, 1.96011, 1.74358, 1.70336, 1.52532, 1.63646, 4.67269, 7.59606, 1.54305, 1.83679, 1.61159, 1.92102, 1.93228, 1.81085, 1.64666, 1.95151, 1.98215, 1.83538, 8.15485};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 9.365295775221821E18;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<double> cards = {1.5, 1.52, 1.54, 1.56, 1.58, 1.6, 1.62, 1.64, 1.66, 1.68, 1.7, 1.72, 1.74, 1.76, 1.78, 1.8, 1.82, 1.84, 1.86, 1.88, 1.9, 1.92, 1.94, 1.96, 1.98, 2.0, 2.02, 2.04, 2.06, 2.08, 2.1, 2.12, 2.14, 2.16, 2.18, 2.2, 2.22, 2.24, 2.26, 2.28, 2.3, 2.32, 2.34, 2.36, 2.38, 2.4, 2.42, 2.44, 2.46, 2.48};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.202334266865656E15;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<double> cards = {1.55199972065, 2.10499326906, 1.74117676385, 1.8038181047, 2.01274564147, 1.53597373158, 1.82706770059, 2.11177976529, 1.67884922685, 1.66300469835, 1.92370227885, 1.90778231618, 1.96397142991, 1.70075512969, 1.58169193315, 2.167079008, 1.8237051079, 1.70182876919, 1.69227164681, 1.88048474082, 1.59009212516, 1.96520714679, 1.82395142347, 1.51747418795, 1.56147013334, 2.11463666589, 1.62181076988, 2.01975979167, 1.70782778624, 1.81607836142, 2.00886634345, 1.70574938207, 1.86832816614, 2.12886783269, 1.74967910347, 2.13181039, 2.17324274036, 1.83721296099, 1.55834845882, 1.50655748451, 2.18712343285, 1.70402899604, 1.96767027018, 1.77492330312, 2.13610075431, 1.99757611027, 1.8821717907, 1.88814225841, 2.07817322442, 1.96704737521};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.987975790357762E14;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<double> cards = {1.91, 2.17, 8.84, 2.5, 9.19, 6.74, 4.28, 7.08, 7.12, 6.14, 2.55, 2.95, 2.31, 1.77, 5.11, 6.41, 7.45, 8.92, 1.77, 7.86, 5.41, 3.54, 8.52, 3.03, 4.42, 5.32, 7.71, 4.66, 6.68, 8.45, 7.97, 2.76, 5.21, 4.88, 4.19, 8.62, 2.17, 8.49, 3.85, 4.44, 8.53, 7.61, 2.72, 8.83, 2.23, 8.14, 8.91, 6.61, 4.03, 6.18};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 4.924917310209855E34;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<double> cards = {1.5096686127038432, 1.8626580470838388, 1.6551248254575563, 1.7875665385133672, 1.6059620909501058, 1.705160891927985, 1.5416129857057903};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 65.027561919173;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<double> cards = {3.141592, 9.999, 2.6, 1.53, 1.5, 1.5, 1.5, 5.74, 1.6, 2.4, 2.33, 5.333, 10.0, 10.0, 10.0, 10.0, 1.566, 1.999, 3.233, 2.67, 8.888, 1.6, 1.6, 1.6, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0, 3.0, 2.0, 2.0, 2.0, 2.1, 2.2, 1.9, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3.0, 3.3, 10.0, 9.0, 5.54, 7.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 9.986166742701874E23;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<double> cards = {1.5602407188049776, 1.5236677040960669, 1.93851075231022, 1.756534887705116, 2.0093609399210064, 1.6791750653173456, 1.8520523220830971, 1.7798751366402747, 1.7376367937279633, 1.5756668521997859, 1.6429040254174934, 1.821807957741942, 1.5243635244309166, 1.5712946505069814, 1.5319266570718773, 1.9909771658436262, 1.87592786286355, 1.6827773738874197, 1.9974789736698448, 2.044123862368955, 1.9595970356466608, 1.5456735148663672, 1.8131689373113653, 2.005703310508384, 1.5950781795353681, 1.9326295600057826, 2.092554455298524, 1.5077188226699008, 1.8242276934487736, 1.8413419063069048, 2.020059804167501, 2.094615070529142, 1.7642511540530088, 1.8848675986158705, 1.7417102136367908, 2.043346808180048, 2.003445350139911, 1.5565680300657319, 1.7523726954039678, 1.7727625469322634, 1.5209948011124463, 1.9003676749533893, 2.048027393587864, 1.6592157623590125, 1.8035461911637216, 1.9941589943860967, 1.912179506661839, 2.0368401897213184, 1.6912450708876179, 1.650082518136088};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 8.698415523900786E13;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<double> cards = {1.5, 1.6, 1.7, 1.8, 1.9, 2.0, 2.1, 2.2, 2.3};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 455.58975000000004;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<double> cards = {1.91, 1.55, 1.6, 1.81, 1.94, 1.66, 1.53, 1.83, 1.84, 1.85, 2.49, 2.67, 2.51, 2.61, 2.63, 2.87, 2.66, 2.24, 2.8, 2.83, 4.45, 8.84, 6.97, 4.53, 5.92, 7.65, 8.97, 7.9, 3.9, 5.67, 8.4, 9.96, 3.5, 6.22, 7.67, 5.84, 7.31, 6.62, 5.11, 3.8, 9.63, 9.78, 7.78, 4.9, 4.48, 7.58, 7.2, 3.0, 5.13, 8.59};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 6.423352348955895E30;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<double> cards = {1.5, 1.5, 1.6};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 4.800000000000001;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<double> cards = {2.354709433843171, 2.2453927612627997, 3.336935513232023, 3.3158398514484544, 3.4427066100406774, 3.03661796942444, 2.113712499960023, 2.0368361209288643, 1.5145328847271076, 2.350338141876593, 2.126505524590583, 2.336169073549989, 2.270304115927013, 2.7974566325255106, 2.0934502903021808, 2.3379125067241304, 1.501741662229256, 2.4416372820922314, 3.3822370866716245, 2.740741340546637, 3.0432073445075236, 1.682798908873201, 2.897784674951163, 1.8439136933064004, 3.3886341380082956, 2.752015853815596, 3.3677736846967883, 1.8690158425748638, 1.5168935321818944, 1.6909331570770059, 2.8586205068025654, 2.404679563299031, 3.438844824745039, 1.6126317524258513, 3.35642438055785, 2.0065598520219607, 2.512513342529483, 2.027208256417473, 1.8118758446554772, 2.2524382946595276, 2.6685493373298588, 2.0641612693213975, 2.175065132652051, 1.8823958473723, 2.3463208019246533, 1.535004932138037, 1.6355848432268434, 2.046577771323446, 2.1616977097765235};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.93372044075228109E18;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<double> cards = {2.143, 2.15321, 1.9314, 1.513, 1.534, 1.6535};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 50.660833778595745;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<double> cards = {1.5, 2.2};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.7;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<double> cards = {1.5, 1.8};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.3;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<double> cards = {1.50521, 1.52153, 1.58917, 1.68054, 1.70236, 1.73833, 1.86869, 1.88343, 1.95574, 1.96578, 1.99003, 2.01393, 2.01665, 2.02006, 2.09537, 2.13692, 2.14142, 2.19278, 2.20257, 2.24779, 2.26049, 2.38539, 2.39776, 2.43089, 2.45643};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 6.764324051690388E7;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<double> cards = {1.5, 1.6, 1.7};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 5.27;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<double> cards = {1.501, 1.502, 1.503, 1.504, 1.505, 1.506, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.6, 1.7, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 2.01, 2.02, 2.000000001, 2.000000002, 2.000000001, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.8, 1.9, 2.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9818320323561113E12;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<double> cards = {6.0, 9.999999, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.65, 1.54621, 6.0, 9.999999, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.65, 1.54621, 8.26, 7.54, 3.2567, 1.5, 1.7, 1.65421, 1.56, 1.52123, 2.01, 1.999, 8.26, 7.54, 3.2567, 1.5, 1.7, 1.65421, 1.56, 1.52123, 2.01};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6380481377041112E16;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<double> cards = {1.5, 1.51, 1.52, 1.53, 1.54, 1.55, 1.56, 1.57, 1.58, 1.59, 1.6, 1.61, 1.62, 1.63, 1.64, 1.65, 1.66, 1.67, 1.68, 1.69, 1.9, 1.92, 1.94, 1.96, 1.98, 2.0, 2.02, 2.04, 2.06, 2.08, 2.1, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 3.5, 4.5, 1.56, 1.7, 3.2, 1.8, 1.9, 2.3, 3.12, 5.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 9.971580101235515E18;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<double> cards = {1.5, 2.0, 2.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 8.75;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<double> cards = {1.5, 1.6, 1.7, 1.8, 1.9, 2.0, 5.0, 8.0, 9.0, 10.0, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0, 5.0, 8.0, 9.0, 10.0, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0, 5.0, 8.0, 9.0, 10.0, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0, 5.0, 8.0, 9.0, 10.0, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0, 5.0, 8.0, 9.0, 10.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 8.760586237519505E25;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<double> cards = {3.0, 1.5, 2.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 10.5;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<double> cards = {2.29858, 2.45905, 1.75198, 1.70118, 2.01396, 1.83654, 1.59464, 1.66578, 1.74957, 1.83149, 2.12412, 1.69372, 1.56961, 2.15364, 1.54838, 2.00021, 1.50177, 1.5613, 1.59202, 2.48067, 1.89788, 2.38731, 2.01549, 1.57471, 2.18673, 1.99988, 1.77205, 2.1639, 1.90745, 2.3388, 2.23275, 2.22273, 2.15226, 2.17344, 2.23883, 1.6269, 1.81414, 2.31137, 1.92323, 2.16263, 2.14553, 2.26634, 1.9276, 2.33824, 1.96904, 2.28246, 1.6133, 1.94864, 2.11583, 1.67693};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.173915666852423E15;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<double> cards = {3.84799, 1.89041, 1.77317, 2.10739, 5.62228, 1.56336};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 290.94231634777225;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<double> cards = {1.5, 1.5, 1.5, 1.7, 1.7, 1.9, 2.1, 2.2, 2.0, 2.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 654.2382;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<double> cards = {1.525253215, 1.5633835, 2.34626, 2.32635262, 2.43626231, 2.65734, 2.6795, 2.7696596975, 3.326236, 3.548858, 3.23144312, 3.32623636, 4.23154252, 4.4784567, 4.5743, 5.47546, 6.36736735, 7.45, 7.34532542, 8.3421, 8.4527752, 8.67969, 8.484584, 9.2354325, 9.3254, 9.4562546, 9.145115, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 5.425476257, 3.325623623, 1.5678648, 2.345325, 2.5674, 4.576458, 4.567856, 7.35636};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8434552506188637E29;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<double> cards = {2.0, 1.5, 2.4, 1.5, 10.0, 9.8, 3.6, 4.7, 5.8, 6.9, 2.0, 1.5, 2.4, 1.5, 10.0, 9.8, 3.6, 4.7, 5.8, 6.9, 2.0, 1.5, 2.4, 1.5, 10.0, 9.8, 3.6, 4.7, 5.8, 6.9, 2.0, 1.5, 2.4, 1.5, 10.0, 9.8, 3.6, 4.7, 5.8, 6.9, 2.0, 1.5, 2.4, 1.5, 10.0, 9.8, 3.6, 4.7, 5.8, 6.9};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 8.303089882364632E29;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<double> cards = {1.5, 1.6, 1.5, 1.7};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 9.920000000000002;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<double> cards = {1.50088, 1.8945, 1.63531, 2.0661, 1.90949, 1.8359, 1.7452, 2.12715, 2.07597, 2.02261, 1.62187, 2.10124, 1.99734, 1.85946, 1.71279, 1.51049, 1.56398, 1.75511, 1.60312, 1.61613, 2.19195, 1.81198, 1.58336, 1.50327, 1.50624, 1.76451, 1.87215, 1.89982, 1.92122, 1.925, 1.61636, 1.96412, 1.81554, 1.74648, 1.53993, 1.92537, 2.04831, 2.06181, 1.86391, 1.71136, 2.11316, 2.00866, 2.16911, 2.14798, 1.87754, 2.001, 2.001, 2.001, 2.001, 2.001};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1138719387557378E14;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<double> cards = {1.64, 2.64, 1.8, 2.8, 2.77, 2.1};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 147.91746816;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<double> cards = {1.5, 1.5, 2.0, 2.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 12.25;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<double> cards = {1.5, 1.6, 1.7, 1.8, 1.9, 3.1};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 64.14209999999999;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<double> cards = {1.5, 2.0, 2.0, 2.9};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 20.3;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<double> cards = {1.5, 1.5, 1.5, 1.9, 1.9};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 19.38;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<double> cards = {1.5, 2.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<double> cards = {1.7, 1.5, 1.6};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 5.27;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<double> cards = {1.5, 1.6, 1.7, 1.8, 1.9};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 20.690999999999995;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<double> cards = {1.523, 6.5, 1.813, 9.5, 1.753, 8.5, 1.654, 5.5, 1.999, 9.5, 1.523, 2.5, 1.813, 4.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.338469535501179E7;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<double> cards = {1.5, 1.55, 1.6, 1.65, 1.7, 1.75, 1.85};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 63.507031250000004;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<double> cards = {1.5, 1.51, 1.52, 1.53, 1.54, 1.55, 1.56, 1.57, 1.58, 1.59, 1.9, 1.91, 1.92, 1.93, 1.94, 1.99, 1.96, 1.97, 1.98, 1.99, 2.0, 2.01, 2.02, 2.03, 2.04, 2.09, 2.06, 2.07, 2.08, 2.09, 2.4, 2.41, 2.42, 2.43, 2.44, 2.49, 2.46, 2.47, 2.48, 2.49, 3.0, 3.01, 3.02, 3.03, 3.04, 3.09, 3.06, 3.07, 3.08, 3.09};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.90752370838580384E17;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<double> cards = {1.5, 1.51, 1.53, 1.54, 1.55, 1.67, 1.69, 1.6123, 1.6321, 1.72, 1.723, 1.727, 1.729, 1.84, 1.85, 1.83, 1.821, 1.927, 1.932, 1.972, 1.927, 2.3, 2.03, 2.04, 2.05, 2.07, 2.4, 2.27, 2.2727, 2.272727, 2.72, 4.5, 7.4, 5.023, 5.67, 7.099, 9.123, 1.654321, 1.728, 5.4, 2.4, 3.5, 3.3333, 2.22222, 7.2727, 2.3, 1.89, 2.78, 1.65, 1.599};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.831056468975836E19;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<double> cards = {2.0, 2.2, 2.3, 1.62, 2.66, 2.7, 1.74, 1.78, 2.05, 2.99, 2.9, 1.94, 1.98, 2.02, 2.06, 2.1, 2.14, 2.18, 2.22, 2.26, 2.3, 2.34, 2.38, 2.42, 2.46, 2.5, 2.54, 2.58, 2.62, 2.66, 2.7, 2.74, 2.78, 2.82, 2.86, 2.9, 2.94, 2.98, 3.02, 3.06, 3.1, 3.14, 3.18, 3.22, 3.26, 3.3, 3.34, 3.38, 3.42};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 9.291585678854647E19;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<double> cards = {1.5, 1.7, 1.6, 1.5, 1.9, 1.7, 2.7, 9.0, 10.0, 3.78};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 32979.260160000005;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<double> cards = {5.0, 1.6, 1.7, 1.8, 2.3, 2.4, 2.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 409.8599999999999;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<double> cards = {1.5, 1.5, 1.5, 1.5, 1.6, 1.7, 1.5, 1.5, 1.5, 1.5, 1.6, 1.7};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 885.6576000000002;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<double> cards = {1.9734, 1.5053, 1.6999, 1.65464, 1.824535, 1.75653, 1.964566, 1.65446, 1.667865, 1.65446, 1.667865, 1.87654, 1.6756};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3230.8833144467967;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<double> cards = {1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.937102445E8;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<double> cards = {1.5, 1.6, 1.6, 1.7, 1.8, 1.8, 1.9, 1.9, 1.9, 2.3, 2.4, 2.6, 2.6, 3.0, 6.0, 7.0, 7.0, 7.0, 7.0, 7.0, 7.0, 7.0, 7.0, 7.0, 7.0, 7.0, 7.0, 7.0, 7.0, 10.0, 10.0, 10.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2256835648925861E20;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<double> cards = {1.9, 2.3, 1.7, 1.6, 2.01, 1.98, 1.75};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 111.52589599999997;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<double> cards = {1.5, 1.58, 1.6, 1.69, 1.7, 1.8, 1.9, 2.1, 2.0, 2.2};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 648.5864616000001;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<double> cards = {1.5, 1.6, 1.8, 2.0, 1.7, 1.9, 2.0, 2.1, 10.0, 10.0, 1.7};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 33339.6;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<double> cards = {1.5, 1.6, 2.0, 2.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2600000000000002E31;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<double> cards = {1.9999999999999991, 1.9999999999999991, 1.9999999999999991, 1.9999999999999991, 1.9999999999999991, 1.9999999999999991, 1.9999999999999991, 1.9999999999999991, 1.9999999999999991, 1.9999999999999991, 1.9999999999999991, 1.9999999999999991, 1.9999999999999991, 1.9999999999999991, 1.9999999999999991, 1.9999999999999991, 1.9999999999999991, 1.9999999999999991, 1.9999999999999991, 1.9999999999999991, 1.9999999999999993, 1.9999999999999993, 1.9999999999999993, 1.9999999999999993, 1.9999999999999993, 1.9999999999999993, 1.9999999999999993, 1.9999999999999993, 1.9999999999999993, 1.9999999999999993, 1.9999999999999993, 1.9999999999999993, 1.9999999999999993, 1.9999999999999993, 1.9999999999999998, 2.0, 1.9999999999999991, 1.9999999999999991, 1.9999999999999993, 1.9999999999999993, 1.9999999999999996, 1.9999999999999996, 1.9999999999999998, 1.9999999999999998, 2.0, 2.0, 10.0, 10.0, 10.0, 10.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0368744177663398E17;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<double> cards = {1.5, 1.6, 1.7, 1.8};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 10.889999999999999;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<double> cards = {1.909, 1.91, 1.92, 1.93, 1.94, 1.95, 1.96, 1.97, 1.98, 1.99, 1.709, 1.71, 1.72, 1.73, 1.74, 1.75, 1.76, 1.77, 1.78, 1.79, 1.809, 1.81, 1.82, 1.83, 1.84, 1.85, 1.86, 1.87, 1.88, 1.89, 1.501, 1.51, 1.52, 1.53, 1.54, 1.55, 1.56, 1.57, 1.58, 1.59, 2.001, 2.01, 2.2, 2.23, 2.4, 2.25, 2.26, 2.7, 2.8, 2.9};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 5.096728404915993E14;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<double> cards = {1.5, 2.1};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.6;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<double> cards = {7.0, 1.5, 1.7, 2.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 44.800000000000004;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<double> cards = {2.340188, 1.894383, 2.283099, 2.29844, 2.411647, 1.697551, 1.835223, 2.26823, 1.777775, 2.05397, 1.977397, 2.128871, 1.864784, 2.013401, 2.45223, 2.416195, 2.135712, 2.217297, 1.641603, 2.106969};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3169084.2096645557;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<double> cards = {1.51, 1.76, 1.54, 2.01};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 11.615999999999998;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<double> cards = {1.5, 1.6, 1.7, 1.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 9.920000000000002;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<double> cards = {1.5, 1.6, 1.7, 1.8, 1.9, 3.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 62.072999999999986;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<double> cards = {1.5, 1.5, 10.0, 10.0, 1.6, 1.6};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 961.0000000000001;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<double> cards = {1.5, 1.6, 1.7, 4.0, 3.0, 10.0, 10.0, 10.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 63240.0;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<double> cards = {4.5, 1.9, 3.0, 1.8, 2.0, 1.7};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 184.81500000000003;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<double> cards = {1.7, 1.8, 1.9, 2.0, 2.3, 2.4, 2.9, 3.0, 3.1, 3.2, 3.7, 3.8, 4.1, 4.2, 4.3, 4.4, 4.7, 4.8, 5.3, 5.4, 5.9, 6.0, 6.1, 6.2, 6.7, 6.8, 7.1, 7.2, 7.3, 7.4, 7.9, 8.0, 8.3, 8.4, 8.9, 9.0, 9.7, 9.8};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0901355059646776E26;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<double> cards = {1.5, 2.0, 2.3};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 8.049999999999999;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<double> cards = {1.522, 1.646, 1.806, 1.73, 1.913, 1.868, 1.6, 2.091, 1.862, 1.555, 2.11, 2.259, 1.924, 2.037, 2.248, 1.583, 1.895, 1.541, 1.902, 1.85, 2.191, 1.936, 2.074, 2.12, 2.096, 1.521, 1.648, 2.299, 1.968, 1.984, 1.781, 2.234, 1.553, 1.899, 1.518, 2.238, 2.0, 2.088, 2.027, 1.967, 2.028, 1.993, 2.148, 1.583, 1.707, 1.521, 2.21, 1.717, 1.913, 2.214};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 5.4347736459071944E14;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<double> cards = {1.6, 1.5, 2.0, 3.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 18.6;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<double> cards = {1.5, 1.55, 1.65, 1.8, 1.95};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 20.592;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<double> cards = {2.5, 2.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 6.25;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<double> cards = {1.92, 1.612, 1.713, 1.513, 1.502, 1.5, 1.505, 1.51, 1.51, 1.501, 1.501, 1.5, 1.67, 1.64, 2.01, 2.04, 2.04, 3.01, 3.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 236947.4925228515;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<double> cards = {1.5, 1.6, 1.7, 1.8, 1.9, 2.0, 2.1, 2.2, 2.3, 2.3, 2.1, 1.7, 1.8};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 7701.74472375;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<double> cards = {1.5, 1.5, 1.6, 1.6, 1.7, 1.7, 1.8, 1.7, 1.8, 2.0, 2.1, 10.0, 6.0, 7.0, 4.5, 3.4, 3.3, 3.33333, 4.3333, 5.3333};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5115440060163078E9;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<double> cards = {2.999, 2.202, 2.446, 3.091, 1.57, 3.431};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 293.44338624708115;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<double> cards = {7.18024, 9.1059, 8.31549, 4.43182, 3.72839, 10.0, 2.35876, 3.18365, 7.73962, 9.69458, 1.8186, 1.90375, 6.00104, 4.47394, 10.0, 3.53827, 3.47144, 4.33752, 5.69403, 6.90314, 10.0, 9.77728, 2.33588, 6.70752, 6.56653, 5.71997, 4.11383, 10.0, 6.38647, 4.15564, 7.87421, 3.487, 7.80157, 2.02032, 10.0, 4.64423, 10.0, 4.64331, 2.40454, 7.57971, 5.48285, 10.0, 10.0, 3.31641, 5.3443, 4.60974, 8.67133, 2.1955, 5.64337, 4.79773};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6138525611451483E36;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<double> cards = {1.7, 1.8, 1.9, 2.0, 2.1};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 28.749000000000002;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<double> cards = {1.5, 1.6, 1.7, 2.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 11.549999999999999;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<double> cards = {1.5, 1.6, 1.8, 1.9, 10.0, 10.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1156.0;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<double> cards = {1.5, 1.6, 1.7, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 1.5, 1.6, 1.7, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 1.5, 1.6, 1.7, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 1.5, 1.6, 1.7, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 1.5, 1.6, 1.7, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 4.578986863509994E32;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<double> cards = {1.5, 1.5, 1.6, 1.7};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 9.920000000000002;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<double> cards = {1.5, 1.6, 1.53, 4.0, 5.0, 10.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 969.6000000000001;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<double> cards = {1.5, 1.6, 1.7, 1.8, 1.9, 2.0, 2.1, 2.2, 2.3, 2.5, 2.6, 2.8, 2.9, 3.0, 4.0, 5.0, 6.0, 7.0, 3.6, 9.0, 5.6, 3.5, 5.7, 3.6, 2.5, 8.6, 6.4, 6.0, 6.8, 4.5, 3.7, 4.6, 8.5, 3.5, 8.6, 9.7, 3.6, 9.7, 3.5, 2.4, 7.5, 7.6, 8.6};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2115935687505805E26;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<double> cards = {1.5, 1.5, 2.0, 2.0, 2.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 30.625;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<double> cards = {2.143, 2.15321, 1.9314, 1.513, 1.534, 1.6535, 1.5, 1.5, 1.5, 1.5, 2.143, 2.15321, 1.9314, 1.513, 1.534, 1.6535, 1.5, 1.5, 1.5, 1.5, 2.143, 2.15321, 1.9314, 1.513, 1.534, 1.6535, 1.5, 1.5, 1.5, 1.5, 2.143, 2.15321, 1.9314, 1.513, 1.534, 1.6535, 1.5, 1.5, 1.5, 1.5, 2.143, 2.15321, 1.9314, 1.513, 1.534, 1.6535, 1.5, 1.5, 1.5, 1.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9812407306028008E13;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<double> cards = {1.6, 2.1, 2.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 9.25;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<double> cards = {2.0, 1.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<double> cards = {2.9, 2.9};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 8.41;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<double> cards = {1.51, 1.5, 1.6, 1.7, 1.8, 1.9, 1.95};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 72.41949;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<double> cards = {2.9, 2.9, 1.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 12.76;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<double> cards = {1.5, 1.5, 1.8, 3.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 16.200000000000003;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<double> cards = {1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0, 2.1, 2.2, 2.3, 2.4, 2.5, 5.0, 5.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 4.073837314599359E9;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<double> cards = {1.9, 2.1};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<double> cards = {1.5, 1.5, 1.6, 1.6, 1.7, 1.7, 1.8, 1.8, 1.9, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 8.486268134400003E8;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<double> cards = {1.6, 1.7, 1.5, 2.666, 2.7, 2.6, 2.655};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 261.86195014199996;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<double> cards = {1.5, 1.6, 1.7, 1.8, 1.9, 2.0, 2.1, 2.2, 2.3, 2.5, 2.6, 2.8, 2.9, 3.0, 4.0, 5.0, 6.0, 7.0, 3.6, 9.0, 5.6, 3.5, 5.7, 3.6, 2.5, 8.6, 6.4, 6.0, 6.8, 4.5, 3.7, 4.6, 8.5, 3.5, 8.6, 9.7, 3.6, 9.7, 3.5, 2.4, 7.5, 7.6, 8.6, 6.5, 7.8, 9.7, 10.0, 4.6, 7.4, 2.8};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 5.679161718727246E31;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<double> cards = {1.5, 1.7, 2.5, 2.9};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 23.2;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<double> cards = {1.7, 1.679, 1.9065, 1.788, 1.7004, 9.0, 2.0, 1.911, 1.5005};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1422.9159722163627;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<double> cards = {1.5, 1.51, 1.52, 1.52, 1.54, 1.55, 1.56, 1.57, 1.58, 1.59, 1.6, 1.61, 1.62, 1.63, 1.64, 1.65, 1.66, 1.67, 1.68, 1.69, 1.7, 3.0, 3.0, 4.0, 4.0, 5.0, 6.0, 6.0, 5.0, 4.0, 4.0, 5.0, 6.0, 6.0, 7.0, 7.0, 8.0, 6.0, 5.0, 6.0, 8.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.896173043703714E19;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<double> cards = {1.5, 1.6, 1.8, 1.9, 2.9, 2.9, 2.9, 2.9, 2.9};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2371.0888244000002;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<double> cards = {1.5, 1.5, 2.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<double> cards = {1.5, 1.7, 1.6, 2.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 13.2;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<double> cards = {1.5, 1.7, 1.6, 1.8};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 10.889999999999999;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<double> cards = {1.5, 1.6, 1.7, 1.8, 1.9, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 417130.55999999994;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<double> cards = {1.5, 1.7, 1.9, 2.0, 3.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 37.8;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<double> cards = {1.5, 1.5, 1.5, 1.6, 1.7, 2.0, 3.9845, 4.987, 10.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 6899.107560800001;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<double> cards = {2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1554436208840475E19;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<double> cards = {1.5, 1.6, 1.7, 8.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 42.16;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<double> cards = {1.555555555, 1.56515225, 1.666868686, 1.56515225, 1.56515225, 1.565152251, 1.56512225, 1.52315225, 2.56515225, 2.56515225, 1.76515225, 1.68281, 1.68, 10.0, 1.62315225, 1.777777, 1.8888888, 2.0, 2.0, 1.898989898989, 1.52877, 2.56515225, 2.56515225, 1.76515225};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 4.6310497824625134E7;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<double> cards = {2.54482436344718, 2.11273629384624, 2.42167619574202, 2.18150594057541, 2.53719277556723, 2.00305674758475, 1.78619562938206, 1.75687948750523, 2.40492614939624, 2.0063597830541, 1.83076310153894, 2.06081484893233, 2.45188989858414, 1.52068279511021, 2.10463687443842, 2.7899796430719, 2.96621867331131, 2.07741924550714, 2.49115208022437, 2.62445566546885, 2.62411431086844, 1.58312784181668, 2.73955192316753, 2.87764230467319, 2.14667767967167, 4.02604195807059, 9.79528660315601, 7.92035309078589, 3.36996129280719, 4.60904933214688, 3.78610268270645, 9.85296819372797, 7.43008980447915, 9.56710817636832, 4.23754213297499, 6.75105080416873, 8.56797739124642, 8.60001648167536, 4.90528887410784, 8.8541877868366, 3.34942291090159, 7.61579813198868, 4.60135511275245, 9.92892400376945, 5.54600849082155, 7.98237169611828, 3.1525829908135, 4.00444126711996, 3.4375308606672, 4.47072700054591};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 9.2753460072762E27;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<double> cards = {1.9, 2.1, 2.1, 2.1};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 17.64;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<double> cards = {1.5, 1.6, 1.7, 2.6};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 13.702;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<double> cards = {1.500412323, 1.684672323, 1.563342323, 1.765002323, 1.691692323, 1.657242323, 1.614782323, 1.793584949, 1.769624949, 1.744644949, 1.557052323, 1.781452323, 1.732812323, 1.668272323, 1.599612323, 1.504912323, 1.529952323, 1.619424949, 1.548274949, 1.554364949, 6.959632323, 2.869972323, 6.928232323, 5.982602323, 4.755502323, 8.311172323, 6.606432323, 9.535504949, 5.243104949, 6.054274949, 9.496572321, 8.136672323, 5.681672323, 3.511732323, 4.422402323, 6.510732323, 8.020932323, 6.418104949, 6.972404949, 7.785934949, 6.830802325, 6.660332323, 4.162932323, 8.487802323, 5.964032323, 5.904402323, 6.269202323, 7.552604949, 6.195204949, 6.890304949};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3719111305822444E29;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<double> cards = {1.5, 1.6, 1.7, 1.8, 1.9, 3.1, 3.2, 3.3, 3.4, 3.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 8060.352854399998;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<double> cards = {1.5, 1.5, 1.5, 2.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 10.5;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<double> cards = {1.5, 1.8, 2.6, 3.7, 4.2, 1.9, 2.1, 2.3};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1237.8169440000001;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<double> cards = {1.5, 1.5, 1.51, 1.6, 1.6, 1.6, 1.6, 1.63, 1.84, 1.84, 1.99};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 713.7984733183999;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<double> cards = {1.51, 1.52, 1.53};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 4.6359;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<double> cards = {2.16, 2.18, 2.2, 1.5, 1.52, 1.54, 1.56, 1.58, 1.6, 1.62, 1.64, 1.74, 1.76, 1.78, 1.8, 1.82, 1.84, 1.86, 1.88, 1.9, 1.92, 1.94, 1.96, 1.98, 2.0, 2.02, 2.04, 2.06, 2.08, 2.1, 2.12, 2.14, 2.22, 2.24, 2.26, 2.28, 2.3, 2.32, 2.34, 2.36, 2.38, 2.4, 2.42, 2.44, 2.46, 2.48, 1.66, 1.68, 1.7, 1.72};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.202334266865656E15;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<double> cards = {1.5, 1.6, 1.7, 1.8, 1.9, 2.0, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3.0, 1.5, 1.6, 1.7, 1.5, 1.6, 1.7, 1.5, 1.6, 1.7, 1.5, 1.6, 1.7, 2.3, 2.4, 2.5, 2.6, 2.3, 2.4, 2.5, 2.6};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 6.490721613184293E11;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<double> cards = {4.73505, 2.27455, 4.8173, 1.76985, 2.17725, 2.6886};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 550.5896892345253;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<double> cards = {1.5, 1.5, 1.6, 10.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 48.00000000000001;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<double> cards = {1.5, 1.5, 1.5, 1.5, 1.5, 1.7, 1.7, 1.7, 10.0, 1.5, 1.7, 1.9, 1.9, 2.0, 1.999999999, 1.9888, 1.9879, 2.121};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 422505.6528546414;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<double> cards = {1.9, 1.6, 9.0, 1.6, 7.0, 9.0, 1.8};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 6747.3;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<double> cards = {1.5, 1.5, 2.5, 2.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 18.75;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<double> cards = {1.5, 1.7, 1.8, 1.9, 2.5, 2.3, 3.1, 3.5, 3.7, 4.1, 4.7, 4.5, 4.6, 4.6, 4.2};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.116924896384175E7;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<double> cards = {1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 8.47288609443E11;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<double> cards = {9.9, 1.578, 1.67, 5.7};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 183.28464;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<double> cards = {1.6, 1.6, 1.7};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 5.44;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<double> cards = {1.65, 1.77, 1.85, 1.86, 1.93};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 24.522965999999997;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<double> cards = {1.5, 10.0, 1.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 30.0;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<double> cards = {2.1, 2.1, 2.1, 2.1};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 19.448100000000004;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<double> cards = {1.79, 1.58, 1.72, 2.29};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 13.5837;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<double> cards = {1.5, 1.55, 1.6, 1.65, 1.7, 1.75, 1.8, 2.9, 2.95, 3.0, 3.01, 10.0, 2.5, 2.0, 2.1};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 533665.9980180701;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<double> cards = {1.99, 2.01};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<double> cards = {2.5314, 2.32022, 1.6216};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 9.978323148;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<double> cards = {1.7, 1.6, 1.5, 1.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 9.920000000000002;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<double> cards = {1.6, 2.99};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 4.784000000000001;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<double> cards = {1.5, 1.6, 1.7, 2.2};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 12.209999999999999;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<double> cards = {1.5, 1.6, 1.7, 1.8, 3.0, 4.0, 2.9, 1.9, 5.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3600.2339999999995;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<double> cards = {1.5, 1.5, 2.01, 2.01};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 12.320099999999998;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<double> cards = {1.6, 1.6, 2.01, 2.01};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 13.0321;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<double> cards = {1.5, 1.5, 1.5, 2.1};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 10.8;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<double> cards = {1.5, 2.0, 2.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    vector<double> cards = {1.9, 5.0, 6.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 57.0;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    vector<double> cards = {5.0, 2.0, 6.0, 3.0, 6.0, 3.0, 5.0, 6.0, 7.0, 3.0, 1.6, 2.0, 5.0, 3.0, 6.0, 9.0, 3.0, 1.7, 5.0, 7.0, 9.0, 1.5, 7.2, 4.0, 3.0, 4.3, 2.3, 1.9, 4.0, 3.0, 7.0, 8.0, 9.0, 7.1, 1.8, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 9.9, 3.4, 6.0, 4.0, 1.9, 1.88, 1.92};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 5.36060222708653E30;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    vector<double> cards = {1.5, 8.0, 10.0, 3.0, 2.0, 2.7, 3.9, 10.0, 9.1};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 804913.2;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    vector<double> cards = {1.5, 1.5, 1.6, 1.7, 2.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 19.840000000000003;
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    vector<double> cards = {1.56, 1.99, 1.97};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0247;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    vector<double> cards = {2.1, 2.1, 2.1};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 9.261000000000001;
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    vector<double> cards = {1.99, 1.99, 1.99, 1.99, 1.99, 1.99, 1.5, 2.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 220.65677200000002;
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    vector<double> cards = {1.5, 1.7, 1.8, 1.9, 2.5, 2.3, 3.1, 3.5, 3.7, 4.1, 4.7, 4.5, 4.6, 4.6, 4.2, 4.4, 9.7, 9.9, 9.6, 9.8, 9.1, 9.5, 8.9, 8.7, 8.6, 5.5, 6.6, 6.2, 4.2, 7.4, 3.2, 2.4, 4.5, 5.4, 6.5, 4.4, 5.4};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 9.766561383237238E24;
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    vector<double> cards = {5.0, 8.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 40.0;
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    vector<double> cards = {1.5, 2.01, 4.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 14.04;
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    vector<double> cards = {1.80835, 1.66695, 1.7569};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 6.191519147499999;
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    vector<double> cards = {2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 1.6, 1.6, 1.6, 1.6, 1.6, 1.6, 1.6};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3554621393597297E18;
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    vector<double> cards = {10.0, 5.0, 10.0, 5.0, 4.0, 6.5, 4.2, 2.1, 1.7, 1.55, 1.8, 2.6, 3.2, 1.9, 1.8, 1.7, 1.5, 1.5, 5.2, 2.3, 6.7, 5.5, 1.66, 1.5235897, 3.88, 3.56, 1.64, 3.3, 1.53};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2378547509826853E14;
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    vector<double> cards = {1.5, 1.67, 1.84, 2.01, 2.18, 2.35, 2.52, 2.69, 2.86, 3.03, 3.2, 3.37, 3.54, 3.71, 3.88, 4.05, 4.22, 4.39, 4.56, 4.73, 4.9, 5.07, 5.24, 5.41, 5.58, 5.75, 5.92, 6.09, 6.26, 6.43, 6.6, 6.77, 6.94, 7.11, 7.28, 7.45, 7.62, 7.79, 7.96, 8.13, 8.3, 8.47, 8.64, 8.81, 8.98, 9.15, 9.32, 9.49, 9.66, 9.83};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.834055565807519E35;
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    vector<double> cards = {1.5, 1.5, 2.9, 2.9};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 25.229999999999997;
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    vector<double> cards = {1.5, 2.1, 2.5};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    vector<double> cards = {1.5, 1.5, 2.0001, 2.0001};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 12.250700010000001;
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    vector<double> cards = {1.5, 1.6, 1.7, 1.8, 1.9, 2.0, 2.1, 2.2, 2.3, 2.4, 2.4, 2.6, 2.7, 2.8, 2.9, 3.0, 1.5, 1.6, 1.7, 1.5, 1.6, 1.7, 1.5, 1.6, 1.7, 1.5, 1.6, 1.7, 2.3, 2.4, 2.5, 2.6};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7366479232600124E10;
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    vector<double> cards = {2.3372, 2.5893, 2.652, 2.7259};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 43.748351047438135;
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    vector<double> cards = {1.510636, 6.290475, 3.143086, 8.374294, 6.472579, 5.578921, 4.477477, 9.11568, 8.49414, 7.846141, 2.979919, 8.801019, 7.539262, 5.865047, 4.083956, 1.627369, 2.276925, 4.597842, 2.752159, 2.910138, 9.902463, 5.288385, 2.512207, 1.539689, 1.575747, 4.711982, 6.019135, 6.355068, 6.614994, 6.660909, 2.912992, 7.135884, 5.331706, 4.493042, 1.984832, 6.665319, 8.158208, 8.322153, 5.919004, 4.066576, 8.945769, 7.676748, 9.625156, 9.368603, 6.084506, 2.709876, 5.427686, 3.50029, 8.829035, 3.28161};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.991672119980397E34;
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    vector<double> cards = {1.6, 1.7, 1.8, 10.0, 10.0, 10.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 5939.999999999999;
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    vector<double> cards = {1.5, 1.5, 1.6, 1.7, 2.0, 2.1, 3.0, 4.0, 2.9, 1.5, 4.0};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 10149.350400000003;
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    vector<double> cards = {1.51, 1.53, 1.52};
    Nisoku* pObj = new Nisoku();
    clock_t start = clock();
    double result = pObj->theMax(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 4.6359;
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    test232() == 0 ? ++passed : ++failed;
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    test236() == 0 ? ++passed : ++failed;
    test237() == 0 ? ++passed : ++failed;
    test238() == 0 ? ++passed : ++failed;
    test239() == 0 ? ++passed : ++failed;
    test240() == 0 ? ++passed : ++failed;
    test241() == 0 ? ++passed : ++failed;
    test242() == 0 ? ++passed : ++failed;
    test243() == 0 ? ++passed : ++failed;
    test244() == 0 ? ++passed : ++failed;
    test245() == 0 ? ++passed : ++failed;
    test246() == 0 ? ++passed : ++failed;
    test247() == 0 ? ++passed : ++failed;
    test248() == 0 ? ++passed : ++failed;
    test249() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22736346&rd=14148&pm=10760
********************************************************************************
#include <vector> 
#include <string> 
#include <algorithm> 
#include <list> 
#include <set> 
#include <queue> 
#include <stack> 
#include <sstream> 
#include <numeric> 
#include <functional> 
#include <utility> 
#include <bitset> 
#include <iostream> 
#include <cmath> 
#include <map> 
using namespace std; 
 
class Nisoku 
{ 
public: 
    double theMax(vector <double> cards); 
}; 
 
double Nisoku::theMax(vector <double> c) 
{ 
    int n=c.size(); 
    sort(c.begin(),c.end()); 
    double ans=0; 
    for (int i=0;i<=n;i+=2) 
    { 
        int l=0, r=i-1; 
        double now=1; 
        while (l<=r) 
        { 
            now*=(c[l]+c[r]); 
            l++; 
            r--; 
        } 
        for (int j=i;j<n;++j) 
            now*=c[j]; 
        if (now>ans) 
            ans=now; 
    } 
    return ans; 
}

********************************************************************************
*******************************************************************************/