/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9976
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

class TheTower {
public:
    vector<int> count(vector<int> x, vector<int> y);
};

vector<int> TheTower::count(vector<int> x, vector<int> y) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> x = {1, 2, 4, 9};
    vector<int> y = {1, 1, 1, 1};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 10};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {15, 15, 14, 16};
    vector<int> y = {14, 16, 15, 15};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {4, 4};
    vector<int> y = {7, 7};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {8, 1, 9, 9, 7};
    vector<int> y = {7, 7, 7, 7, 10};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1, 6, 13};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {3, 3, 6, 1, 5, 7};
    vector<int> y = {1, 9, 9, 2, 1, 6};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 5, 13, 21, 31};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {3};
    vector<int> y = {1};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {1, 10, 10, 3, 3};
    vector<int> y = {8, 10, 6, 9, 1};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 10, 19, 28};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {1, 1, 5, 1, 1};
    vector<int> y = {1, 9, 6, 7, 7};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2, 7, 13};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {3, 8, 1};
    vector<int> y = {5, 5, 10};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 12};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {5, 1, 5, 1, 5};
    vector<int> y = {8, 3, 6, 5, 3};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 5, 10, 16};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {9000, 9124, 5387, 9124, 9436, 9798, 9290, 9436, 5134, 8562, 8528, 5134, 9364, 7040, 9364, 5589};
    vector<int> y = {4356, 6368, 8851, 6368, 6610, 7528, 6133, 6610, 10783, 10060, 10680, 10783, 8867, 9216, 8867, 8795};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 401, 955, 1343, 3011, 5268, 7525, 10143, 14395, 19227, 24083, 28885, 33945, 39923, 45901};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {6962, 6645, 5221, 5396, 5612, 6380, 5221, 4948, 5221, 10088};
    vector<int> y = {5778, 6528, 4664, 5285, 5500, 7437, 4664, 5212, 4664, 7684};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 796, 1617, 2844, 5151, 7891, 11027, 18118};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {6276, 6276, 6276, 8104, 4270, 10685, 7794, 6278, 4270, 5680, 10413, 4802};
    vector<int> y = {6480, 6480, 6480, 9984, 4882, 4400, 8792, 10575, 4882, 4238, 5584, 9830};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 2838, 6442, 10046, 13876, 17973, 22797, 27830, 33162, 39651};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {8716, 5960, 8716, 5622, 5622, 7368, 9170, 4069, 9269, 9875, 4700, 8716, 7635, 7635, 8716, 7635, 9264, 4750, 10188, 4505};
    vector<int> y = {8068, 10888, 8068, 7679, 7679, 6389, 5870, 5424, 4104, 7266, 10654, 8068, 10552, 10552, 8068, 10552, 10512, 5618, 7072, 6218};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 1961, 4429, 7081, 10073, 13100, 16296, 19677, 23631, 27196, 30761, 35278, 40854, 46915, 53254, 58852, 65062};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {8235, 5250, 5250, 4686, 5120, 10398, 6356, 5465, 7492, 6262, 7360, 10160, 9744, 8054};
    vector<int> y = {4578, 8478, 8478, 7710, 9960, 8375, 9041, 5475, 8600, 4900, 5632, 5680, 9716, 5884};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1332, 2944, 4613, 6977, 10195, 14785, 19526, 24562, 28845, 33668, 39344, 45843};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {9600, 10570, 7594, 8155, 8712, 5308, 7640, 5481, 5960, 4798, 6555, 5308, 9600};
    vector<int> y = {10560, 10550, 8876, 9498, 7960, 7357, 9432, 6817, 7444, 5700, 7400, 7357, 10560};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 713, 1452, 2569, 4909, 8541, 12375, 16087, 20380, 26541, 32702, 38268};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {4260, 5155, 4260, 10104, 4567, 7080, 10104, 5485, 8666, 9675, 5515, 9675, 9176, 7025};
    vector<int> y = {4200, 7096, 4200, 6032, 9385, 4986, 6032, 8816, 8294, 9270, 7300, 9270, 8300, 4604};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1469, 3454, 6151, 8848, 13554, 18714, 23933, 28977, 33674, 39858, 45778, 51698};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {4136, 7520, 6844, 6520, 5550, 4352, 4136, 10244, 10960, 5845, 4528, 6950, 9812, 5710, 6147, 7750, 7206, 8475, 4136};
    vector<int> y = {10208, 4000, 4840, 4650, 8842, 5265, 10208, 5747, 8462, 7296, 6760, 8060, 7523, 7360, 4064, 9525, 10432, 7040, 10208};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 2780, 5563, 8648, 11969, 15424, 18400, 21970, 25836, 29829, 33801, 38324, 43017, 48555, 53775, 59485, 65027};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {4660, 4660, 4921, 5204, 8367, 8480, 8367, 6688, 8537, 5862, 4660, 5688, 4660, 5312, 4921, 9110, 4660, 9229, 8782};
    vector<int> y = {4123, 4123, 7400, 8536, 6369, 7518, 6369, 10910, 9552, 7520, 4123, 10475, 4123, 4875, 7400, 6965, 4123, 7032, 8102};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 1404, 4942, 8480, 13079, 17657, 21956, 27145, 32624, 37409, 41999, 46687, 51294, 56615, 61984};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {4521, 9000, 10304, 10022, 4280, 4521, 8568, 10236, 10188, 9253, 7155, 4056, 6616, 4085};
    vector<int> y = {8052, 9844, 9428, 9572, 8046, 8052, 8405, 7170, 5787, 9600, 10325, 10228, 9700, 4780};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 247, 2517, 4369, 7134, 9704, 13370, 18090, 23943, 29942, 35941, 41611, 50742};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {851001, 851001, 890852, 851001, 289611, 215529, 447134, 752252, 890852, 890852, 851001, 701607, 890852, 890852, 268590, 450721, 890852, 161665, 890852, 701607, 890852, 219949, 890852, 314089, 708701, 289611, 219949, 521105, 219949, 129401, 513793, 890852, 689601, 521105, 447134, 525721, 890852, 447134, 109680, 450721, 182390, 711871, 123425, 828105, 513793, 828105, 244835, 546031, 701607, 890852};
    vector<int> y = {413357, 413357, 766291, 413357, 341523, 16434, 90227, 41605, 766291, 766291, 413357, 546365, 766291, 766291, 378796, 230963, 766291, 773941, 766291, 546365, 766291, 203213, 766291, 695685, 333277, 341523, 203213, 160985, 203213, 273565, 566997, 766291, 65045, 160985, 90227, 504717, 766291, 90227, 289133, 230963, 532866, 267489, 980027, 942657, 566997, 942657, 476636, 713617, 546365, 766291};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239113, 478226, 871011, 1263796, 1656581, 2049366, 2446861, 2856032, 3265203, 3674374, 4250727, 4827080, 5402394, 5989248, 6596766, 7234698, 7931684, 8755119, 9565091, 10408238, 11185088, 11898100, 12611518, 13324936, 13976167, 14643650, 15270752, 15991627, 16709332, 17427037, 18194555, 19019365, 19830676, 20636179, 21415609, 22252856, 23187130, 24256697};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {662373, 69513, 936619, 662373, 936619, 69513, 662373, 662373, 807552, 662373, 15466, 15466, 255901, 187633, 936619, 256887, 807552, 860571, 74595, 93156, 807552, 662373, 662373, 807552, 331701, 772401, 74595, 662373, 289261, 228097, 936619, 757033, 605386, 442987, 315634, 599486, 221667, 506676, 260516, 662373, 772401, 633605, 289261, 187633};
    vector<int> y = {993265, 405770, 860997, 993265, 860997, 405770, 993265, 993265, 683399, 993265, 129476, 129476, 245756, 426751, 860997, 690055, 683399, 533551, 600877, 97499, 683399, 993265, 993265, 683399, 243725, 787463, 600877, 993265, 213201, 214483, 860997, 514986, 584989, 566657, 762317, 10817, 662295, 559271, 942301, 993265, 787463, 544848, 213201, 426751};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 315830, 631660, 1038174, 1444688, 1851202, 2257716, 2710537, 3165582, 3593304, 3835600, 4196979, 4612595, 5055618, 5495195, 5967053, 6450214, 6963940, 7489584, 8066012, 8631886, 9406250, 10180614, 11016066, 11826372, 12640759, 13417761, 14267727, 15111037, 15955152, 16825641, 17696130, 18599322, 19754439, 20926501, 22098563};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {596651, 596651, 934266, 596651, 417748, 596651, 640225, 462269, 640225, 760711, 336148, 903751, 462269, 600041, 596651, 596651, 596651, 462269, 9368, 492481, 596651, 596651, 755553, 937521, 25356, 640225, 25356, 51876, 699117, 596651, 760711, 88033, 184103, 596651, 51876, 596651, 596651, 201914, 462269, 127875, 25356, 122156, 849057, 566617};
    vector<int> y = {477734, 477734, 115161, 477734, 41648, 477734, 634529, 268951, 634529, 399361, 890065, 656526, 268951, 724189, 477734, 477734, 477734, 268951, 634370, 306519, 477734, 477734, 921358, 104869, 125305, 634529, 125305, 636341, 918913, 477734, 399361, 726097, 975569, 477734, 636341, 477734, 477734, 644046, 268951, 592189, 125305, 897326, 872229, 849701};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200369, 400738, 601107, 843540, 1085973, 1335818, 1611203, 1954368, 2297533, 2640698, 2983863, 3385864, 3871756, 4415401, 4976450, 5559681, 6162207, 6777196, 7424097, 8096931, 8797119, 9500501, 10203883, 10917618, 11661537, 12418518, 13312605, 14222988, 15146712, 16070436, 16994160};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {114781, 114781, 114781, 114781, 114781, 910885, 114781, 114781, 343236, 114781, 563450, 472227, 443393, 716593, 342289, 902675, 789257, 114781, 114781, 496281, 114781, 902675, 643111, 548109, 952995, 114781, 250365, 114781, 632949, 933176, 780081, 149697, 716593, 716593, 213536, 114781, 780081, 992321, 250365, 338735, 372301, 580009, 213536, 114781, 626685};
    vector<int> y = {181525, 181525, 181525, 181525, 181525, 747177, 181525, 181525, 786447, 181525, 762773, 202705, 713631, 514935, 358741, 356989, 735447, 181525, 181525, 541126, 181525, 356989, 374601, 807445, 563626, 181525, 218482, 181525, 29097, 423349, 785345, 774489, 514935, 514935, 412625, 181525, 785345, 185163, 218482, 217254, 322623, 386337, 412625, 181525, 441545};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172541, 345082, 604765, 934620, 1264475, 1643101, 2041719, 2446443, 3074323, 3744363, 4414959, 5136365, 5877466, 6649390, 7482767, 8308569, 9154831, 9987660, 10820489, 11635776, 12479199, 13271244, 14129848, 15016555, 15904233, 16863637, 17831124, 18731638, 19632152, 20589989};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {690457, 690457, 690457, 366237, 29957, 237982, 878407, 45209, 690457, 690457, 836685, 690457, 193963, 690457, 672995, 574379, 690457, 157376, 29957, 776191, 29957, 690457, 42901, 764043, 403544, 46581, 193963, 603266, 982291, 474090, 690457, 690457, 776191, 29957, 29957, 29957, 29957, 370996, 690457, 82329, 690457, 843844, 260225, 756335};
    vector<int> y = {254685, 254685, 254685, 216389, 20047, 257361, 579660, 723851, 254685, 254685, 373571, 254685, 321761, 254685, 575155, 596751, 254685, 514197, 20047, 135605, 20047, 254685, 198177, 35201, 436841, 249976, 321761, 109701, 152863, 825141, 254685, 254685, 135605, 20047, 20047, 20047, 20047, 347137, 254685, 9948, 254685, 205657, 327310, 425729};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202415, 407229, 612043, 844218, 1081140, 1346254, 1639324, 1977256, 2339772, 2733428, 3145341, 3600492, 4058636, 4527705, 5030562, 5543487, 6107057, 6670627, 7319212, 8023276, 8810099, 9602692, 10455557, 11350695, 12245833, 13140971, 14036109, 14931247, 15826385, 16704061, 17801013};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {851169, 971462, 749780, 239600, 615549, 341642, 17110, 91178, 41800, 656042, 379099, 835762, 923918, 546452, 71264, 646967, 557711, 583601, 32489, 547868, 774260, 403340, 26654, 145565, 145140, 203374, 331931, 314657, 708789, 400628, 202295, 137228, 161540, 43101, 129510, 513862, 449642, 571222, 402089, 641175, 992949, 526175, 775448, 673413, 148940, 289235, 526008, 182522, 712120, 123730};
    vector<int> y = {413659, 599029, 890857, 38639, 51764, 427970, 544460, 426956, 221976, 970829, 874022, 291510, 79876, 777116, 629254, 840478, 268970, 450947, 328791, 998639, 724568, 581662, 903429, 920350, 295738, 403540, 51143, 695825, 333595, 446888, 105949, 465319, 110792, 977454, 274087, 567188, 362945, 689789, 128466, 590069, 461371, 504938, 348350, 622001, 515816, 258670, 330173, 533117, 268341, 980036};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 37281, 113092, 259714, 375927, 549308, 717807, 915323, 1126139, 1371673, 1638921, 1921239, 2222661, 2543968, 2876532, 3245045, 3595991, 4028513, 4448792, 4893116, 5317172, 5758455, 6184077, 6635876, 7133081, 7637451, 8090132, 8629266, 9123266, 9647563, 10201205, 10776724, 11302264, 11831621, 12371734, 12940001, 13518813, 14117158, 14757191, 15430349, 16100132, 16817594, 17556775, 18306930, 19083573, 19873982, 20682681, 21511849, 22386920, 23290244};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {942725, 829324, 507737, 71634, 476641, 714016, 333685, 353432, 711749, 993267, 190865, 134885, 979604, 391056, 982288, 988676, 859852, 703690, 807775, 968736, 475148, 205867, 403482, 245764, 426843, 540436, 257278, 976382, 821621, 454043, 671988, 270944, 267829, 592708, 239884, 213017, 4045, 244059, 787631, 84551, 309206, 11039, 651429, 881897, 931881, 515265, 585048, 566764, 762384, 11048};
    vector<int> y = {141103, 778864, 494999, 187308, 311621, 517292, 953790, 856907, 902673, 69983, 936736, 474419, 615329, 85423, 869596, 315641, 474749, 430362, 683419, 381688, 15950, 808032, 220958, 755869, 917163, 540322, 690161, 947578, 860614, 74870, 93260, 722893, 25313, 440652, 698375, 586406, 77058, 803665, 386311, 309547, 800669, 289677, 228575, 702011, 487405, 303158, 647747, 931802, 473189, 485212};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 25608, 63792, 132800, 215277, 340313, 448555, 650765, 848227, 1089269, 1336279, 1633852, 2070981, 2523114, 3003806, 3547311, 4023542, 4446312, 4902925, 5389699, 5846673, 6340143, 6854130, 7466823, 8045954, 8650589, 9260978, 9918563, 10580387, 11164791, 11725922, 12327623, 12930544, 13569104, 14197133, 14863644, 15481308, 16124162, 16750810, 17412299, 18087361, 18819202, 19528796, 20272590, 21000103, 21820083, 22669231, 23579777, 24493473, 25422634};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {800135, 559329, 942716, 436203, 435251, 496520, 416141, 502615, 185861, 820052, 618945, 171602, 741093, 664301, 41840, 192404, 640370, 462384, 926240, 483293, 693200, 744071, 460871, 73999, 724517, 40269, 223451, 162907, 869973, 603206, 9962, 492501, 760751, 246138, 872138, 921425, 105633, 125520, 647621, 342456, 902928, 422207, 139108, 241757, 488534, 88322, 184375, 891574, 379205, 755473};
    vector<int> y = {507059, 924737, 756086, 73121, 764306, 633756, 312170, 563019, 898704, 597199, 784217, 934269, 138098, 678764, 270778, 527022, 634898, 269141, 399830, 760911, 336308, 903770, 289445, 761730, 998506, 117155, 929396, 329762, 840714, 924590, 634394, 306557, 89111, 271784, 522791, 877662, 266811, 826938, 566337, 380858, 52460, 699302, 753139, 410906, 491832, 726199, 975944, 375705, 928332, 664286};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 21817, 69046, 135448, 296761, 492655, 713115, 990093, 1245878, 1545705, 1798563, 2115728, 2405431, 2747719, 3101875, 3482224, 3876912, 4279145, 4673291, 5079322, 5475960, 5948662, 6446108, 6959261, 7438571, 7982785, 8502519, 9035698, 9557282, 10103758, 10659316, 11219401, 11780639, 12361250, 12919117, 13489320, 14061757, 14663096, 15274347, 15944261, 16593965, 17266382, 17963244, 18670647, 19416394, 20170994, 20976063, 21798804, 22758429, 23759360};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {503165, 398085, 942383, 437898, 543313, 592314, 906974, 122402, 849942, 567224, 415117, 751400, 338596, 401780, 151972, 226357, 955022, 803867, 388826, 619249, 343835, 47732, 199490, 852244, 691233, 647589, 821694, 987041, 882757, 163624, 639641, 663629, 496289, 915804, 752331, 249070, 374618, 807680, 563996, 351548, 250798, 340958, 434711, 209491, 851995, 606023, 305813, 26057, 851783, 213541};
    vector<int> y = {96350, 202715, 202634, 356234, 27294, 705814, 852602, 897518, 872284, 849951, 115225, 408545, 808487, 558846, 857510, 432776, 911009, 283754, 808777, 216974, 786982, 514397, 564226, 472874, 444268, 716696, 343024, 903157, 789861, 77255, 388019, 375275, 541256, 124573, 299402, 745769, 51906, 628388, 472482, 564930, 218702, 112002, 633044, 933224, 780367, 149866, 14729, 752205, 860955, 412727};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 13170, 72025, 157514, 251017, 412451, 558937, 866581, 1154003, 1465000, 1743923, 2054542, 2387863, 2745324, 3118394, 3518854, 3914964, 4352341, 4761096, 5185872, 5611629, 6062854, 6482089, 6930232, 7392546, 7867245, 8373514, 8896323, 9416510, 9962527, 10517246, 11095161, 11652264, 12212593, 12772805, 13381328, 13991074, 14705652, 15409139, 16136667, 16893393, 17678223, 18436376, 19219863, 20024446, 20820126, 21604055, 22409854, 23299846, 24214005};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1};
    vector<int> y = {1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1999998, 3999996, 5999994, 7999992, 9999990, 11999988, 13999986, 15999984, 17999982, 19999980, 21999978, 23999976, 25999974, 27999972, 29999970, 31999968, 33999966, 35999964, 37999962, 39999960, 41999958, 43999956, 45999954, 47999952, 49999950};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {1000000, 1000000, 1000000, 1000000, 1000000, 1, 1, 1, 1, 1000000, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1000000, 1, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1, 1, 1000000, 1, 1, 1000000, 1000000, 1, 1000000, 1000000, 1000000, 1000000, 1, 1, 1, 1, 1000000, 1, 1, 1000000, 1, 1, 1000000, 1000000};
    vector<int> y = {1000000, 1000000, 1000000, 1, 1000000, 1000000, 1, 1, 1, 1000000, 1, 1000000, 1, 1, 1000000, 1000000, 1, 1, 1000000, 1000000, 1, 1000000, 1, 1, 1, 1000000, 1000000, 1, 1, 1, 1000000, 1000000, 1, 1, 1, 1, 1, 1, 1000000, 1, 1000000, 1000000, 1, 1000000, 1, 1000000, 1000000, 1000000, 1000000, 1000000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 999999, 1999998, 2999997, 3999996, 4999995, 5999994, 6999993, 7999992, 8999991, 9999990, 10999989, 11999988, 12999987, 13999986, 14999985, 15999984, 16999983, 17999982, 18999981, 19999980, 21999978, 23999976, 25999974, 27999972, 29999970, 31999968, 33999966, 35999964, 37999962, 39999960, 41999958, 43999956, 45999954, 47999952, 49999950};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 8, 12, 18, 24, 32, 40, 50, 60, 72, 84, 98, 112, 128, 144, 162, 180, 200, 220, 242, 264, 288, 312, 338, 364, 392, 420, 450, 480, 512, 544, 578, 612, 648, 684, 722, 760, 800, 840, 882, 924, 968, 1012, 1058, 1104, 1152, 1200, 1250};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {29, 39, 27, 23, 41, 6, 36, 20, 48, 37, 5, 34, 3, 50, 13, 10, 31, 43, 24, 18, 17, 28, 49, 14, 25, 16, 40, 22, 45, 42, 2, 11, 21, 44, 1, 7, 35, 19, 46, 30, 38, 8, 9, 26, 4, 47, 12, 32, 15, 33};
    vector<int> y = {8, 12, 44, 35, 22, 26, 3, 41, 43, 4, 33, 46, 21, 15, 40, 38, 1, 7, 10, 20, 25, 6, 9, 13, 5, 28, 14, 45, 17, 31, 16, 30, 27, 11, 23, 39, 47, 19, 48, 49, 2, 18, 29, 32, 37, 36, 42, 50, 24, 34};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 12, 19, 27, 38, 50, 60, 75, 89, 105, 119, 135, 151, 168, 184, 202, 219, 239, 257, 278, 300, 327, 352, 381, 410, 440, 473, 507, 540, 574, 608, 643, 678, 713, 747, 784, 820, 857, 894, 934, 972, 1010, 1048, 1087, 1124, 1165, 1206, 1250};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {18, 26, 17, 28, 2, 45, 5, 19, 38, 49, 20, 34, 14, 1, 32, 39, 21, 46, 30, 50, 24, 12, 6, 4, 40, 31, 48, 9, 16, 7, 23, 42, 13, 44, 35, 27, 41, 15, 36, 11, 33, 10, 47, 22, 29, 25, 3, 37, 8, 43};
    vector<int> y = {25, 14, 27, 36, 46, 3, 33, 38, 32, 35, 8, 49, 15, 19, 42, 10, 1, 37, 48, 17, 31, 28, 43, 34, 2, 13, 23, 5, 39, 45, 18, 16, 12, 24, 41, 30, 4, 26, 29, 7, 22, 9, 44, 50, 20, 11, 47, 21, 6, 40};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 5, 9, 17, 28, 38, 55, 70, 89, 107, 125, 141, 158, 175, 194, 212, 233, 254, 277, 300, 324, 347, 373, 398, 424, 450, 478, 504, 534, 563, 593, 623, 654, 685, 718, 751, 786, 820, 855, 890, 926, 963, 1000, 1038, 1079, 1119, 1160, 1205, 1250};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {580000, 780000, 540000, 460000, 820000, 120000, 720000, 400000, 960000, 740000, 100000, 680000, 60000, 1000000, 260000, 200000, 620000, 860000, 480000, 360000, 340000, 560000, 980000, 280000, 500000, 320000, 800000, 440000, 900000, 840000, 40000, 220000, 420000, 880000, 20000, 140000, 700000, 380000, 920000, 600000, 760000, 160000, 180000, 520000, 80000, 940000, 240000, 640000, 300000, 660000};
    vector<int> y = {160000, 240000, 880000, 700000, 440000, 520000, 60000, 820000, 860000, 80000, 660000, 920000, 420000, 300000, 800000, 760000, 20000, 140000, 200000, 400000, 500000, 120000, 180000, 260000, 100000, 560000, 280000, 900000, 340000, 620000, 320000, 600000, 540000, 220000, 460000, 780000, 940000, 380000, 960000, 980000, 40000, 360000, 580000, 640000, 740000, 720000, 840000, 1000000, 480000, 680000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 40000, 80000, 240000, 380000, 540000, 760000, 1000000, 1200000, 1500000, 1780000, 2100000, 2380000, 2700000, 3020000, 3360000, 3680000, 4040000, 4380000, 4780000, 5140000, 5560000, 6000000, 6540000, 7040000, 7620000, 8200000, 8800000, 9460000, 10140000, 10800000, 11480000, 12160000, 12860000, 13560000, 14260000, 14940000, 15680000, 16400000, 17140000, 17880000, 18680000, 19440000, 20200000, 20960000, 21740000, 22480000, 23300000, 24120000, 25000000};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {360000, 520000, 340000, 560000, 40000, 900000, 100000, 380000, 760000, 980000, 400000, 680000, 280000, 20000, 640000, 780000, 420000, 920000, 600000, 1000000, 480000, 240000, 120000, 80000, 800000, 620000, 960000, 180000, 320000, 140000, 460000, 840000, 260000, 880000, 700000, 540000, 820000, 300000, 720000, 220000, 660000, 200000, 940000, 440000, 580000, 500000, 60000, 740000, 160000, 860000};
    vector<int> y = {500000, 280000, 540000, 720000, 920000, 60000, 660000, 760000, 640000, 700000, 160000, 980000, 300000, 380000, 840000, 200000, 20000, 740000, 960000, 340000, 620000, 560000, 860000, 680000, 40000, 260000, 460000, 100000, 780000, 900000, 360000, 320000, 240000, 480000, 820000, 600000, 80000, 520000, 580000, 140000, 440000, 180000, 880000, 1000000, 400000, 220000, 940000, 420000, 120000, 800000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 40000, 100000, 180000, 340000, 560000, 760000, 1100000, 1400000, 1780000, 2140000, 2500000, 2820000, 3160000, 3500000, 3880000, 4240000, 4660000, 5080000, 5540000, 6000000, 6480000, 6940000, 7460000, 7960000, 8480000, 9000000, 9560000, 10080000, 10680000, 11260000, 11860000, 12460000, 13080000, 13700000, 14360000, 15020000, 15720000, 16400000, 17100000, 17800000, 18520000, 19260000, 20000000, 20760000, 21580000, 22380000, 23200000, 24100000, 25000000};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {20000, 40000, 60000, 80000, 100000, 120000, 140000, 160000, 180000, 200000, 220000, 240000, 260000, 280000, 300000, 320000, 340000, 360000, 380000, 400000, 420000, 440000, 460000, 480000, 500000, 520000, 540000, 560000, 580000, 600000, 620000, 640000, 660000, 680000, 700000, 720000, 740000, 760000, 780000, 800000, 820000, 840000, 860000, 880000, 900000, 920000, 940000, 960000, 980000, 1000000};
    vector<int> y = {20000, 40000, 60000, 80000, 100000, 120000, 140000, 160000, 180000, 200000, 220000, 240000, 260000, 280000, 300000, 320000, 340000, 360000, 380000, 400000, 420000, 440000, 460000, 480000, 500000, 520000, 540000, 560000, 580000, 600000, 620000, 640000, 660000, 680000, 700000, 720000, 740000, 760000, 780000, 800000, 820000, 840000, 860000, 880000, 900000, 920000, 940000, 960000, 980000, 1000000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 40000, 80000, 160000, 240000, 360000, 480000, 640000, 800000, 1000000, 1200000, 1440000, 1680000, 1960000, 2240000, 2560000, 2880000, 3240000, 3600000, 4000000, 4400000, 4840000, 5280000, 5760000, 6240000, 6760000, 7280000, 7840000, 8400000, 9000000, 9600000, 10240000, 10880000, 11560000, 12240000, 12960000, 13680000, 14440000, 15200000, 16000000, 16800000, 17640000, 18480000, 19360000, 20240000, 21160000, 22080000, 23040000, 24000000, 25000000};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474};
    vector<int> y = {747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474, 747474};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {4, 4};
    vector<int> y = {7, 7};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {1000000, 1, 6334, 26500, 19169, 15724, 11478, 29358, 26962, 24464, 5705, 28145, 23281, 16827, 9961, 491, 2995, 11942, 4827, 5436, 32391, 14604, 3902, 153, 292, 12382, 17421, 18716, 19718, 19895, 5447, 21726, 14771, 11538, 1869, 19912, 25667, 26299, 17035, 9894, 28703, 23811, 31322, 30333, 17673, 4664, 15141, 7711, 28253, 6868};
    vector<int> y = {1000000, 1, 32662, 32757, 20037, 12859, 8723, 9741, 27529, 778, 12316, 3035, 22190, 1842, 288, 30106, 9040, 8942, 19264, 22648, 27446, 23805, 15890, 6729, 24370, 15350, 15006, 31101, 24393, 3548, 19629, 12623, 24084, 19954, 18756, 11840, 4966, 7376, 13931, 26308, 16944, 32439, 24626, 11323, 5537, 21538, 16118, 2082, 22929, 16541};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 446, 3057, 6685, 10516, 15180, 19944, 27345, 34562, 44812, 55672, 67174, 79839, 92690, 105919, 118019, 130390, 144337, 157711, 169984, 183059, 197165, 212786, 229241, 245553, 262800, 279688, 298006, 316511, 335788, 355645, 376215, 396338, 416932, 437714, 458952, 479862, 503471, 526970, 551235, 575235, 599754, 624769, 650604, 676766, 704264, 731301, 761625, 793465, 2761623};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {1213, 123, 213, 1123, 23, 12, 3123, 12222, 312, 100, 200, 323, 41, 5, 100023, 421029, 292, 203232, 999999, 20000, 1234};
    vector<int> y = {87263, 2318, 829098, 723817, 273187, 12, 32, 1, 21, 323, 4, 223, 234212, 2131, 12321, 231231, 123313, 121, 1, 2117, 71};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 129, 317, 651, 1053, 2137, 4392, 6716, 9678, 21770, 43504, 131597, 243395, 366516, 569527, 803798, 1076951, 1728576, 2451076, 3278167, 4279959};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {1, 99999, 3, 7, 10};
    vector<int> y = {2, 88888, 2, 8, 100};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 12, 117, 188989};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {606843, 485982, 891299, 762097, 456468, 18504, 821407, 444703, 615432, 791937, 921813, 738207, 176266, 405706, 935470, 916904, 410270, 893650, 57891, 352868, 813166, 9861, 138891, 202765, 198722, 603792, 272188, 198814, 15274, 746786, 445096, 931815, 465994, 418649, 846221, 525152, 202647, 672137, 838118, 19640, 681277, 379481, 831796, 502813, 709471, 428892, 304617, 1, 2, 3};
    vector<int> y = {302764, 541674, 150873, 697898, 378373, 860012, 853655, 593563, 496552, 899769, 821629, 644910, 817974, 660228, 341971, 289726, 341194, 534079, 727113, 309290, 838496, 568072, 370414, 702740, 546571, 444880, 694567, 621310, 794821, 956843, 522590, 880142, 172956, 979747, 271447, 252329, 875742, 737306, 136519, 11757, 893898, 199138, 298723, 661443, 284409, 469224, 64781, 1, 3, 1000000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 31395, 200906, 356495, 524605, 691765, 925078, 1142689, 1379095, 1649450, 1954978, 2279257, 2605493, 2928222, 3287659, 3667232, 4084278, 4488900, 4938483, 5406216, 5874404, 6334447, 6815164, 7286886, 7768099, 8282144, 8834869, 9407120, 9983244, 10567145, 11189021, 11819065, 12484350, 13155702, 13838671, 14522066, 15206345, 15901194, 16606297, 17314052, 18044929, 18784359, 19562250, 20345939, 21168455, 22086362, 23109019, 24121579, 25134142};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {1252, 563585, 193305, 808740, 585009, 479873, 350292, 895962, 822840, 746605, 174108, 858943, 710501, 513535, 303995, 14985, 91403, 364452, 147313, 165899, 988525, 445692, 119084, 4670, 8912, 377880, 531663, 571184, 601764, 607166, 166235, 663045, 450789, 352123, 57040, 607684, 783318, 802606, 519883, 301950, 875972, 726676, 955900, 925718, 539354, 142339, 462081, 235328, 862239, 209601};
    vector<int> y = {779656, 843653, 996795, 999694, 611499, 392438, 266213, 297281, 840144, 23744, 375866, 92624, 677206, 56216, 8790, 918790, 275888, 272897, 587908, 691183, 837611, 726493, 484939, 205359, 743736, 468459, 457961, 949156, 744438, 108280, 599048, 385235, 735008, 608966, 572405, 361339, 151555, 225105, 425153, 802881, 517106, 989989, 751549, 345561, 168981, 657307, 491897, 63540, 699759, 504807};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 13612, 93295, 204016, 320932, 463270, 608659, 834527, 1054778, 1367593, 1694262, 2050047, 2395302, 2792958, 3185151, 3601761, 3979306, 4404947, 4813098, 5187652, 5586681, 6017175, 6493904, 6996086, 7469519, 8009818, 8464697, 8993430, 9545875, 10111078, 10693889, 11305785, 11926012, 12548895, 13159600, 13803387, 14455414, 15121358, 15819530, 16547457, 17256432, 17974623, 18705998, 19475766, 20264211, 21071211, 21862677, 22694917, 23507135, 24419668};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {145025, 802859, 872302, 729206, 152274, 661302, 783598, 166187, 23981, 79607, 58895, 145422, 822597, 632211, 381135, 341642, 659771, 712387, 117390, 964323, 414772, 992679, 507390, 102103, 944470, 778932, 217319, 511072, 266272, 172682, 17109, 492311, 132068, 61985, 326303, 244722, 757089, 726177, 771668, 397358, 87873, 541456, 500227, 40840, 41899, 847141, 278631, 693861, 758598, 670844};
    vector<int> y = {396974, 277492, 765493, 202354, 843659, 882290, 557855, 491380, 995293, 395799, 648203, 423133, 925895, 702505, 392543, 256325, 780334, 984887, 161150, 650004, 831637, 68209, 63154, 786018, 358296, 850580, 446325, 209150, 527938, 645821, 572828, 312394, 49675, 180831, 587105, 523843, 645617, 501712, 965003, 102559, 928177, 749309, 587452, 503503, 464802, 375742, 232855, 716644, 976175, 40773};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 24242, 79165, 193444, 303806, 448998, 610361, 787576, 971562, 1179841, 1389602, 1632952, 1897435, 2223269, 2549937, 2916950, 3287335, 3691192, 4085178, 4516453, 4944934, 5422389, 5914834, 6442610, 7026845, 7629600, 8249592, 8876707, 9503410, 10156024, 10796486, 11480161, 12142441, 12834321, 13515788, 14224418, 14958499, 15721097, 16438376, 17199959, 17970932, 18757090, 19507738, 20262686, 21059099, 21857761, 22662438, 23500944, 24359090, 25396726};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {1000000, 9876, 45, 356, 678, 222222, 999999, 3, 897, 456, 777777, 78, 34, 2, 4, 5, 6, 7, 7, 8, 55555};
    vector<int> y = {100000, 98762, 453, 56, 6718, 23222, 99499, 31, 8297, 454, 74777, 718, 344, 25, 5, 6, 7, 7, 8, 9, 55555};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 5, 8, 13, 35, 62, 426, 824, 1306, 2086, 2964, 10328, 19483, 128082, 239102, 484456, 1336621, 2435730, 3535199};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {1, 1, 1000000, 1000000};
    vector<int> y = {1, 1000000, 1, 1000000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 999999, 1999998, 3999996};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {1, 1000000, 1, 1000000, 100, 500, 10000, 5000, 50000, 500000, 500005, 500005, 1, 123456, 121212, 5, 19, 156457, 12, 121245, 12545, 5, 121344, 123, 1000000, 9, 1545, 2525, 7896, 12, 21264, 99959, 11326, 11157, 112245, 113458, 113526, 125469, 32564, 12568, 100120, 999, 12, 312, 567, 356, 234, 456, 84, 809};
    vector<int> y = {1, 1000000, 1000000, 1, 100, 500, 10000, 5000, 50000, 500000, 500005, 1, 500005, 121212, 123456, 3792, 124987, 1000000, 456123, 38126, 12345, 4, 999999, 999999, 32564, 4587, 6598, 123, 1548, 1345, 123456, 154654, 1000000, 245485, 10, 123452, 123458, 13121, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 7, 15, 101, 284, 510, 738, 1012, 1370, 1838, 2417, 3175, 3866, 5503, 7830, 11920, 16722, 24621, 33742, 43419, 55640, 75273, 99695, 131814, 231302, 330931, 442610, 568134, 706145, 850286, 1008748, 1244749, 1480611, 1724157, 1966780, 2219348, 2472120, 2929411, 3428235, 3929419, 4925346, 5921283, 6917830, 7918624, 8919890, 9924899, 10947876, 12059632, 13203193, 15190297};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {1, 1, 32, 1000000, 1000000, 999999, 66, 32932, 559, 122, 3129, 964, 865, 3516, 663, 38155, 87, 33347, 884, 61175, 23, 883, 123, 56883, 21, 653, 333, 2215, 98692, 2999, 26632, 455, 23335, 233, 853, 2323, 12223, 464, 231, 3885, 23236, 3143, 233, 232, 774, 3364, 96, 42, 1, 32};
    vector<int> y = {1, 1000000, 42, 561, 768, 123, 56, 128, 994, 34, 999, 999, 99999, 999999, 123, 123, 54553, 123, 23112, 3323, 66431, 2134, 9, 1, 1, 343, 8853, 12356, 23553, 2134, 7643, 32364, 23235, 34267, 4346, 21316, 346, 123, 12323, 763, 34, 2132, 45, 12, 675, 32, 76, 134, 97545, 32};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 10, 52, 110, 172, 264, 370, 480, 586, 788, 976, 1463, 2111, 2969, 4251, 5637, 7421, 10259, 13415, 17255, 21594, 26418, 31030, 35718, 44579, 56561, 68983, 82956, 105693, 128679, 151679, 183898, 216392, 249306, 282575, 316929, 354641, 400205, 454988, 511553, 574931, 641767, 739299, 838825, 959533, 1958764, 2958113, 3957899, 4957988, 5959887};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {15, 15, 14, 16, 20, 35, 50};
    vector<int> y = {14, 16, 1, 15, 15, 2, 3};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 8, 23, 56, 101};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 100000, 110000, 120000, 130000, 140000, 15, 16, 17, 800000, 900000, 1000000};
    vector<int> y = {1, 10000, 1000000, 800000, 900000, 134000, 700000, 115000, 53, 72, 7371, 8, 10, 11, 12, 13, 14, 15, 16, 17};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 31, 77, 10077, 110120, 225113, 342416, 462446, 592434, 726430, 866417, 1566412, 2366370, 3166393, 4066350, 4966372, 5966331, 6966352};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 499999, 499999, 499999, 499999, 499999, 499999, 499999, 499999, 499999, 499999, 499999, 499999, 499999, 499999, 499999, 499999, 499999, 499999, 499999, 499999, 999998, 999998, 999998, 999998, 999998, 999998, 999998, 999998, 999998, 999998, 999998, 999998, 999998, 999998, 999998, 999998, 999998, 999998, 999998, 999998};
    vector<int> y = {499999, 499999, 499999, 499999, 499999, 499999, 499999, 499999, 499999, 499999, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 999998, 999998, 999998, 999998, 999998, 999998, 999998, 999998, 999998, 999998, 499999, 499999, 499999, 499999, 499999, 499999, 499999, 499999, 499999, 499999, 999998, 999998, 999998, 999998, 999998, 999998, 999998, 999998, 999998, 999998};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499999, 999998, 1499997, 1999996, 2499995, 2999994, 3499993, 3999992, 4499991, 4999990, 5499989, 5999988, 6499987, 6999986, 7499985, 7999984, 8499983, 8999982, 9499981, 9999980, 11499976, 12999972, 14499968, 15999964, 17499945, 17999944, 18499943, 18999942, 19499941, 19999940, 20999938, 21999936, 22999934, 23999932, 24999930, 25999928, 26999926, 27999924, 28999922, 29999920};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {1, 1, 1, 1, 1};
    vector<int> y = {1, 2, 4, 5, 6};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 5, 8};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {1, 2, 4, 9};
    vector<int> y = {1, 1, 1, 1};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 10};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {14, 14, 14};
    vector<int> y = {15, 20, 20};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 5};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {1, 1, 8, 8, 8};
    vector<int> y = {1, 2, 8, 9, 10};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 16, 30};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {1, 1000000, 1000000, 1, 1000000, 333, 666667};
    vector<int> y = {1000000, 1, 1, 1000000, 1000000, 666, 999997};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 666669, 1666335, 2666002, 4333332, 5998997};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {83, 65, 60, 61, 2, 24, 4, 52, 34, 64, 92, 84, 24, 77, 42, 94, 48, 72, 99, 44, 99, 46, 21, 38, 55, 68, 36, 42, 98, 9, 68, 59, 4, 47, 37, 74, 80, 98, 76, 12, 91, 5, 43, 53, 81, 31, 76, 80, 57, 72};
    vector<int> y = {99, 49, 81, 65, 9, 36, 95, 33, 61, 35, 50, 3, 76, 27, 93, 93, 100, 97, 89, 15, 6, 8, 60, 6, 54, 31, 68, 23, 10, 36, 41, 2, 2, 78, 91, 75, 71, 28, 90, 93, 43, 100, 47, 61, 39, 13, 14, 56, 10, 53};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 14, 31, 44, 62, 83, 105, 132, 160, 187, 217, 246, 277, 307, 341, 375, 415, 458, 504, 552, 601, 648, 696, 749, 804, 855, 908, 961, 1018, 1076, 1134, 1191, 1254, 1319, 1387, 1454, 1518, 1581, 1654, 1728, 1806, 1884, 1963, 2044, 2137, 2235, 2337, 2439, 2544};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {1, 2, 400, 9};
    vector<int> y = {1, 1, 1, 1};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 8, 406};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {196429, 390159, 903491, 95134, 78343, 148221, 507784, 438249, 326877, 711345, 697941, 425801, 616329, 53557, 750414, 88099, 385328, 661051, 968353, 895624, 176557, 385734, 377004, 993771, 310662, 822969, 475003, 424381, 199552, 805690, 901039, 62375, 62031, 383171, 462202, 204963, 805733, 296325, 820358, 781368, 243627, 613688, 47029, 804112, 909, 372228, 98883, 124151, 115120, 412037};
    vector<int> y = {762632, 407602, 745151, 706111, 669595, 666874, 738659, 400734, 925584, 667476, 613393, 647079, 856417, 915726, 322109, 620481, 300906, 526743, 110956, 223514, 652814, 948860, 311527, 237943, 888568, 108795, 438219, 410268, 952508, 646022, 272765, 794388, 961051, 648213, 887676, 642718, 180261, 70568, 345871, 26612, 791353, 357144, 724893, 544889, 528104, 22361, 832859, 783358, 848440, 720847};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 18945, 57624, 138863, 260747, 366871, 500856, 646357, 792612, 945547, 1095300, 1283555, 1478522, 1730918, 1966189, 2256734, 2557486, 2911469, 3261866, 3640362, 4013801, 4421407, 4790567, 5238281, 5648970, 6182527, 6731287, 7311603, 7887494, 8464116, 9027915, 9613322, 10174964, 10736732, 11265304, 11821606, 12414261, 13018423, 13624852, 14276862, 14949673, 15673226, 16437583, 17352925, 18250842, 19192595, 20169654, 21187295, 22204468, 23323210};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {1000000, 8, 13, 15, 867456};
    vector<int> y = {5, 999999, 889956, 131313, 19};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 110048, 868693, 2626073, 3757366};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {1, 2, 1, 1, 100000, 2345, 100000, 457, 413, 876, 23, 555, 778, 665, 790};
    vector<int> y = {5, 3, 99999, 1, 99998, 3452, 2345, 657, 2132, 321, 145, 2431, 1243, 1234, 234};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 5, 169, 1186, 2293, 3322, 5053, 6383, 8325, 10533, 15552, 115350, 216581, 414790};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {1, 1, 10000, 10000, 10000};
    vector<int> y = {1, 1, 10000, 10000, 10000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 19998, 39996};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {1, 1, 999999, 999999, 2, 3, 5, 7, 9, 100, 200, 800, 4000, 333};
    vector<int> y = {1, 999999, 1, 999999, 2, 3, 5, 7, 9, 100, 200, 800, 4000, 666};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 10, 18, 30, 220, 610, 1595, 3181, 11163, 1011161, 2011159, 4011139};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 2, 4, 6, 8, 10, 12, 16, 20, 24, 28, 32, 36, 42, 48, 54, 60, 66, 72, 80, 88, 96, 104, 112, 120, 130, 140, 150, 160, 170, 182, 194, 208, 222, 236, 250, 266, 282, 300, 318, 336, 354, 374, 394, 416, 438, 460, 482};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {1000000, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> y = {1, 1000000, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 8, 12, 18, 24, 32, 40, 50, 60, 72, 84, 98, 112, 128, 144, 162, 180, 200, 220, 242, 264, 288, 312, 338, 364, 392, 420, 450, 480, 512, 544, 578, 612, 648, 684, 722, 760, 800, 840, 882, 924, 968, 1012, 1058, 1104, 1152, 1001149, 2001149};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {946356, 642508, 931743, 297004, 514164, 548398, 892345, 332799, 760239, 572201, 926047, 768617, 187469, 5880, 950360, 242064, 218811, 39284, 524367, 180983, 867279, 962988, 595610, 947340, 396473, 161570, 781231, 775857, 942130, 251862, 986390, 526432, 925563, 557599, 538918, 246997, 231392, 480080, 176453, 552178, 544906, 223840, 160712, 863227, 948404, 767025, 513339, 625941, 861310, 928061};
    vector<int> y = {868712, 725838, 675375, 873365, 721326, 453650, 984176, 435284, 908848, 539233, 135233, 165079, 16673, 968276, 943363, 132724, 15762, 523728, 795559, 103415, 852810, 252676, 50482, 870124, 900217, 349401, 589775, 202196, 143123, 266685, 613766, 81882, 731676, 219913, 290725, 643883, 58997, 632384, 666666, 507395, 838722, 485194, 321837, 995789, 750774, 981434, 620343, 76005, 99965, 411905};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2396, 78655, 176030, 295032, 453845, 623320, 831270, 1026863, 1238503, 1508351, 1825536, 2236183, 2659452, 3036261, 3461490, 3924023, 4419600, 4948756, 5499130, 6001697, 6556125, 7066984, 7601838, 8149763, 8723600, 9327175, 9946315, 10596059, 11259279, 11923892, 12601523, 13248628, 13901600, 14548115, 15232408, 15908889, 16629835, 17323449, 18045485, 18803939, 19613426, 20422396, 21239559, 22050156, 22945152, 23772188, 24649049, 25526234, 26522501};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {5, 8, 9999, 2718, 899989, 364281, 23481};
    vector<int> y = {2351, 43, 9, 1, 10000, 237418, 888888};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2311, 5063, 15088, 614026, 1521254, 2421273};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {1, 2, 3, 1000000, 5};
    vector<int> y = {1000000, 2, 3, 4, 5};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 6, 1000004, 2000002};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {5, 100, 789, 1000000, 678, 5, 789, 45, 10000, 76543, 34};
    vector<int> y = {1, 1000000, 345, 567, 56, 5, 78, 56, 789543, 34, 34};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 62, 153, 819, 1618, 2651, 79171, 877980, 1877813, 2878335};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {10, 10, 11, 100, 3453, 34567, 23};
    vector<int> y = {10, 8, 9, 345, 76, 2345, 456};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 429, 887, 4395, 41208};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {1, 1, 1000000, 1000000};
    vector<int> y = {1, 1000000, 1000000, 1};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 999999, 1999998, 3999996};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {3, 4, 5, 6, 3, 4, 5};
    vector<int> y = {1, 1, 1, 1, 2, 2, 2};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 5, 7, 9};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {1, 100, 3, 10000, 5, 120000};
    vector<int> y = {10000, 2, 1, 10000, 100000, 2};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 98, 10098, 30093, 120093, 250086};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {40, 40, 40, 1, 1};
    vector<int> y = {39, 40, 41, 1, 2};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 79, 156};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {1, 1000000, 1, 1000000, 500000, 12345, 23456, 112233, 12642, 999999, 654321, 654321, 654321, 654321, 12, 817211, 12333, 468545, 36654, 234355, 3453, 2890, 567777, 56744, 9966, 345466, 345344, 23444, 564666, 3334, 535567, 46666, 114444, 79434, 1, 243556, 344222, 453467, 44564, 9899, 76788, 54764, 34535, 78688, 43566, 345345, 6353, 35646, 345, 111123};
    vector<int> y = {1, 1000000, 1000000, 1, 450000, 23456, 34567, 998811, 333111, 131231, 51423, 51423, 51423, 51423, 8817, 665441, 2444, 364645, 112334, 1000000, 1, 134687, 987654, 864512, 33, 23456, 234444, 111111, 131312, 1112, 323234, 1321, 112232, 11233, 7784, 999887, 888776, 324522, 21344, 22, 426854, 345567, 2, 88888, 6788, 906343, 122344, 456775, 323553, 233345};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 17673, 28887, 40178, 52403, 83516, 115831, 152807, 192150, 238886, 293507, 369397, 489175, 610711, 740578, 876924, 1024383, 1229897, 1553203, 1875081, 2199698, 2534634, 2900979, 3346500, 3803242, 4336118, 4985184, 5621826, 6258468, 6877143, 7495818, 8185730, 8930843, 9694655, 10520922, 11374935, 12368075, 13345667, 14343445, 15385666, 16483110, 17551590, 18629158, 19711870, 21025546, 22391855, 24202733};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {1, 1, 1000000, 1000000};
    vector<int> y = {1000000, 1, 1000000, 1};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 999999, 1999998, 3999996};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {1, 1, 1, 1000, 999, 1000, 999};
    vector<int> y = {1, 1, 1, 999, 1000, 999, 1000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 4, 2000, 3996, 5992};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {289383, 930886, 692777, 636915, 747793, 238335, 885386, 760492, 516649, 641421, 202362, 490027, 368690, 520059, 897763, 513926, 180540, 383426, 89172, 455736, 5211, 595368, 702567, 956429, 465782, 21530, 722862, 665123, 174067, 703135, 513929, 979802, 634022, 723058, 133069, 898167, 961393, 18456, 175011, 478042, 176229, 377373, 484421, 544919, 413784, 898537, 575198, 594324, 798315, 664370};
    vector<int> y = {566413, 803526, 776091, 268980, 759956, 241873, 806862, 999170, 906996, 497281, 702305, 420925, 477084, 336327, 660336, 126505, 750846, 621729, 661313, 925857, 616124, 353895, 819582, 100545, 898814, 233367, 515434, 990364, 344043, 313750, 171087, 426808, 117276, 947178, 695788, 393584, 705403, 502651, 392754, 612399, 999932, 95060, 549676, 993368, 947739, 210012, 636226, 698586, 348094, 297539};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 37089, 87956, 180697, 327345, 563818, 732479, 958929, 1190415, 1455469, 1743695, 2062204, 2395015, 2756631, 3107814, 3498004, 3847871, 4223701, 4641359, 5062546, 5501589, 5971387, 6421994, 6865188, 7358985, 7876637, 8383641, 8851801, 9325404, 9841171, 10350808, 10845850, 11339497, 11881922, 12433607, 13038703, 13610275, 14194010, 14808239, 15427245, 16036460, 16699245, 17375065, 18053882, 18734717, 19423327, 20150965, 20935555, 21813116, 22761340};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {22, 1, 1, 1, 1, 2, 999999, 224, 242424, 999999, 22, 19242, 999999, 222222, 888888, 999999, 2, 4444, 22425, 999999, 221, 2, 9999, 99, 999999, 222, 214, 4241, 4254, 1, 1, 1, 1, 999, 999, 9999, 2, 44, 99999, 99999, 999999, 22, 1, 1, 1, 1, 1, 1, 1, 2424};
    vector<int> y = {424, 999999, 99, 99, 1, 1, 99, 99999, 99999, 99, 99999, 999, 99999, 999, 2, 1, 24, 424, 424, 42, 1, 1, 1, 99, 9, 9, 9, 9, 449, 999999, 999999, 999999, 99, 99, 9, 9, 2, 2, 2, 4, 5, 6, 67, 3, 3, 5, 3, 3, 3, 2};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 2, 4, 6, 9, 12, 34, 58, 102, 166, 262, 358, 454, 648, 867, 1089, 1316, 1758, 2759, 3850, 6275, 10518, 15213, 20073, 30070, 40075, 60285, 83103, 183085, 283069, 383059, 483251, 706419, 1048789, 1937585, 2937485, 3937274, 4937067, 5936878, 6936746, 7936613, 8936824, 9937034, 10937244, 11937447, 13037222};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {89383, 30886, 92777, 36915, 47793, 38335, 85386, 60492, 16649, 41421, 2362, 90027, 68690, 20059, 97763, 13926, 80540, 83426, 89172, 55736, 5211, 95368, 2567, 56429, 65782, 21530, 22862, 65123, 74067, 3135, 13929, 79802, 34022, 23058, 33069, 98167, 61393, 18456, 75011, 78042, 76229, 77373, 84421, 44919, 13784, 98537, 75198, 94324, 98315, 64370};
    vector<int> y = {66413, 3526, 76091, 68980, 59956, 41873, 6862, 99170, 6996, 97281, 2305, 20925, 77084, 36327, 60336, 26505, 50846, 21729, 61313, 25857, 16124, 53895, 19582, 545, 98814, 33367, 15434, 90364, 44043, 13750, 71087, 26808, 17276, 47178, 95788, 93584, 5403, 2651, 92754, 12399, 99932, 95060, 49676, 93368, 47739, 10012, 36226, 98586, 48094, 97539};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2687, 6921, 16124, 28348, 44296, 58366, 81729, 104284, 130866, 160713, 194919, 229508, 276200, 324903, 370764, 423865, 477072, 531623, 587407, 643935, 699490, 751734, 805038, 859052, 916525, 974287, 1033434, 1094252, 1160407, 1227880, 1298793, 1369901, 1443178, 1516229, 1590941, 1663742, 1738488, 1818513, 1899836, 1982727, 2070258, 2151498, 2236622, 2328435, 2421744, 2513626, 2605736, 2700960, 2808402};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {1, 6, 100, 2, 4, 6, 2, 5, 2};
    vector<int> y = {1, 5, 3, 6, 2, 3, 2, 5, 5};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 7, 11, 15, 20, 27, 123};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {1, 3, 2, 1, 3, 2};
    vector<int> y = {1, 1, 5, 6, 6, 7};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 4, 10, 16};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> y = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x = {1, 1, 1};
    vector<int> y = {1, 1, 90};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 89};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x = {15, 15, 14, 16};
    vector<int> y = {14, 16, 15, 15};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x = {1, 500000, 500000, 1000000};
    vector<int> y = {500000, 1, 1000000, 500000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 999998, 1499998, 1999998};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x = {101, 102, 100, 101, 105, 10001, 2, 1000000};
    vector<int> y = {101, 102, 109, 99, 98, 10911, 1, 1000000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 11, 20, 219, 20929, 2020727};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x = {1, 1, 50000, 999999, 999999};
    vector<int> y = {1, 999999, 50000, 1, 999999};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 99998, 1049997, 2099994, 3999992};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x = {585692, 205917, 495303, 597021, 649790, 983162, 961771, 587095, 160926, 526815, 41990, 533186, 443200, 585041, 401595, 849906, 639064, 29686, 493958, 61203, 597445, 85256, 187658, 964010, 527342, 613094, 306357, 480628, 237816, 101061, 284882, 855914, 122593, 293827, 863146, 251878, 733692, 981916, 832344, 470111, 556873, 290613, 541032, 121744, 370928, 426134, 65707, 797048, 422362, 716597};
    vector<int> y = {103132, 112767, 667652, 689316, 150510, 73610, 869245, 687660, 366483, 900311, 641811, 204645, 93762, 517154, 228874, 678137, 113532, 293646, 857519, 645353, 406451, 954576, 260499, 522818, 639894, 837161, 165927, 177070, 801786, 825040, 717105, 506342, 700006, 399405, 610089, 716997, 938683, 393026, 270770, 370872, 830078, 731941, 253880, 51538, 203012, 309160, 436642, 755196, 961273, 892569};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 11582, 53679, 185426, 331810, 527192, 674259, 849820, 1042958, 1286963, 1519144, 1777577, 2097833, 2448290, 2802729, 3175406, 3602845, 4031203, 4477997, 4941967, 5374695, 5865403, 6375796, 6895994, 7393892, 7910284, 8426230, 8955500, 9486701, 10044005, 10607139, 11191145, 11783659, 12409723, 13038068, 13674617, 14308820, 14947127, 15592915, 16257745, 16927345, 17603915, 18266968, 18993269, 19687042, 20389170, 21202065, 22043870, 22887364, 23825776};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x = {1, 2, 3, 2, 1, 3, 2, 2, 6, 7, 6, 7, 5, 6, 8, 7, 5};
    vector<int> y = {2, 1, 2, 3, 7, 7, 6, 8, 2, 3, 6, 7, 7, 8, 2, 1, 7};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2, 4, 5, 8, 12, 16, 20, 26, 32, 39, 46, 54, 61, 69, 77};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x = {10, 11, 1000, 100000};
    vector<int> y = {21, 3213, 111, 14444};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1080, 4182, 118504};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x = {1, 1, 1, 1, 1, 100000, 100000, 100000, 100000, 100000, 200000, 200000, 200000, 200000, 200000, 300000, 300000, 300000, 300000, 300000, 400000, 400000, 400000, 400000, 400000, 500000, 500000, 500000, 500000, 500000, 600000, 600000, 600000, 600000, 600000, 700000, 700000, 700000, 700000, 700000, 800000, 800000, 800000, 800000, 800000, 900000, 900000, 900000, 900000, 900000};
    vector<int> y = {1, 200000, 400000, 600000, 800000, 1, 200000, 400000, 600000, 800000, 1, 200000, 400000, 600000, 800000, 1, 200000, 400000, 600000, 800000, 1, 200000, 400000, 600000, 800000, 1, 200000, 400000, 600000, 800000, 1, 200000, 400000, 600000, 800000, 1, 200000, 400000, 600000, 800000, 1, 200000, 400000, 600000, 800000, 1, 200000, 400000, 600000, 800000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 99999, 199999, 399998, 599998, 799998, 999998, 1299997, 1599996, 1899996, 2199996, 2499996, 2799996, 3199995, 3599994, 3999994, 4399994, 4799994, 5199994, 5599994, 5999998, 6499997, 6999996, 7499996, 7999996, 8499996, 8999996, 9499996, 9999996, 10499996, 11099995, 11699994, 12299993, 12899992, 13499992, 14099992, 14699992, 15299992, 15999991, 16699990, 17399990, 18099990, 18799990, 19499990, 20299988, 21099987, 21899986, 22699986, 23599985, 24499985};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x = {2, 4, 2, 1, 3, 4, 5, 2, 5, 4, 2, 3, 1, 43, 4};
    vector<int> y = {1, 1, 1, 1, 1, 1, 1, 1, 1, 80, 800, 8000, 33, 34, 23};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 1, 2, 4, 6, 9, 11, 34, 68, 141, 220, 1021, 9020};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x = {757148, 851001, 413357, 971125, 598369, 567226, 749388, 890852, 766291, 239573, 38165, 597007, 615545, 51437, 289611, 341523, 427799, 215529, 16434, 544291, 447134, 90227, 426873, 752252, 41605, 221269, 909135, 655784, 970744, 417563, 379061, 873981, 670529, 835681, 291073, 352031, 923811, 79501, 701607, 546365, 776868, 572137, 71041, 629217, 496749, 646417, 840199, 255907, 557677, 268590};
    vector<int> y = {378796, 583463, 450721, 230963, 31779, 328646, 494529, 547831, 998222, 161665, 773941, 724397, 666286, 402971, 581613, 452501, 26285, 903381, 151438, 145360, 920160, 159400, 145006, 295423, 219949, 203213, 403181, 734385, 331901, 51111, 710191, 314089, 695685, 511396, 708701, 333277, 301481, 400517, 446253, 551313, 202255, 105948, 66085, 137201, 465310, 521105, 160985, 110748, 689271, 42883};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 30518, 112222, 195915, 274854, 480306, 687444, 944848, 1186689, 1434904, 1685517, 1976911, 2227099, 2505858, 2782086, 3165072, 3566236, 3960947, 4334103, 4734865, 5133502, 5546860, 5963971, 6397595, 6827703, 7263336, 7697116, 8171267, 8643156, 9144689, 9660873, 10196774, 10736772, 11349424, 11913148, 12491138, 13055570, 13649604, 14247252, 14862732, 15493601, 16163117, 16824298, 17535398, 18231793, 19009943, 19763771, 20637330, 21504063, 22418720};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x = {130, 1000, 2000, 3000, 2, 1, 5, 2};
    vector<int> y = {130, 1000, 2000, 3000, 1, 2, 2, 3};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 6, 262, 2258, 6250, 12242};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 45, 67, 42, 3245, 6345, 14, 1515, 2313, 14, 5489, 1, 56156, 14, 54698, 1, 5351, 454, 4, 848, 515, 1546, 8, 5156, 46848, 516, 18, 486, 156156, 48};
    vector<int> y = {15, 21, 358, 848, 6, 54, 213, 54, 54, 4, 646, 84, 5456, 4, 54, 54, 56, 548, 48, 654, 54, 564, 546, 84, 86846, 54, 65456, 56564, 645, 151, 456, 546, 546, 8486, 486, 4864, 8486, 454654, 5465, 4564, 51, 651, 8486, 4864, 58468, 486, 468, 484, 8646, 8484};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 9, 16, 24, 33, 43, 76, 122, 172, 224, 276, 331, 391, 490, 654, 967, 1387, 1887, 2390, 2896, 3437, 3982, 4577, 5183, 5985, 6885, 7789, 9888, 12747, 17541, 22787, 28094, 33356, 39074, 45563, 53837, 61971, 70131, 79680, 93046, 147746, 203964, 261542, 326517, 416105, 520918, 685216, 1139820};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x = {1, 3, 10};
    vector<int> y = {1, 2, 3};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 11};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> x = {1, 1000000, 1, 267556, 758045, 241124, 806725, 999128, 906014, 497146, 701794, 418841, 475147, 334500, 659764, 125346, 750041, 620097, 660213, 924424, 1000000, 353811, 818643, 98544, 896816, 231819, 514824, 988779, 342669, 312990, 169610, 426452, 116331, 945289, 694008, 392875, 704912, 500733, 392002, 610925, 997879, 93796, 548265, 991525, 946796, 208028, 635371, 696837, 346625, 295583};
    vector<int> y = {1, 1000000, 691096, 635201, 745836, 2, 884667, 758843, 516053, 640232, 201337, 1, 367907, 518957, 895719, 511959, 179175, 381886, 88868, 454433, 5176, 594847, 702273, 954703, 465446, 20669, 722584, 664890, 171922, 702667, 512828, 978001, 632707, 722423, 131700, 897042, 960334, 16367, 174383, 476386, 175098, 375720, 483562, 543005, 413176, 897781, 573464, 592351, 798166, 1000000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 29972, 89228, 182280, 326940, 590739, 797109, 1093738, 1379652, 1677450, 1966503, 2305254, 2696859, 3107913, 3546366, 3930653, 4347384, 4768721, 5206408, 5672885, 6115345, 6558953, 7008405, 7460323, 7906916, 8402634, 8915806, 9434070, 9955290, 10530204, 11115238, 11739949, 12324187, 12939446, 13558408, 14244138, 14935873, 15630117, 16323703, 17067963, 17789604, 18560982, 19263869, 20094829, 20927460, 21777791, 22628753, 23570924, 24560488, 25651756};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> x = {100, 1, 1};
    vector<int> y = {111, 1, 3};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 209};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> x = {1, 1000000};
    vector<int> y = {1, 1000000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1999998};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> x = {15, 15, 14, 16, 999999, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7};
    vector<int> y = {14, 16, 15, 15, 999999, 999999, 999999, 444444, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 888888, 777777, 666666, 555555, 444444, 333333, 222222, 111111, 1, 2, 3, 4, 5, 6, 7, 8, 9, 2, 4, 5, 7, 3, 9, 8, 4};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1, 3, 4, 6, 8, 10, 13, 16, 19, 22, 26, 30, 34, 38, 42, 46, 50, 55, 60, 66, 72, 77, 83, 89, 95, 102, 109, 116, 124, 131, 139, 158, 177, 198, 218, 111326, 333544, 666872, 1111311, 1555753, 2111304, 2777967, 3555741, 4444627, 5444623, 6444619, 8444605};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> x = {1, 3, 5};
    vector<int> y = {3, 1, 5};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 8};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> x = {1, 4, 6, 8, 45};
    vector<int> y = {3, 1, 2, 6, 9};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 7, 15, 60};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> x = {1, 2, 6, 9, 8, 3, 4, 100, 2, 10};
    vector<int> y = {7, 999999, 1010, 21, 64, 32, 94, 2, 48, 990};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 17, 33, 61, 98, 161, 287, 1251, 2213, 1002168};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> x = {1, 1000, 1000, 2000};
    vector<int> y = {1000, 1, 2000, 1000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1998, 2998, 3998};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> x = {241, 704, 766, 729, 361, 451, 265, 195, 492, 197, 841, 302, 338, 523, 697, 664, 596, 60, 996, 443};
    vector<int> y = {760, 802, 878, 634, 880, 831, 345, 538, 769, 417, 669, 59, 607, 925, 200, 348, 539, 659, 884, 487};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 103, 228, 408, 649, 970, 1279, 1602, 1977, 2390, 2773, 3222, 3741, 4256, 4748, 5280, 5814, 6519, 7243, 8038};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> x = {1, 1, 2, 2, 50000};
    vector<int> y = {1, 2, 1, 2, 50000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4, 100000};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> x = {10, 1, 10, 19, 10};
    vector<int> y = {1, 3, 3, 3, 5};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 13, 22};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> x = {1, 100000};
    vector<int> y = {1, 1000000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1099998};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> x = {1, 2, 3, 5, 6, 7};
    vector<int> y = {1, 2, 3, 6, 7, 8};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 11, 18, 27};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> x = {1, 3213, 23423, 5435, 23442, 534, 3455, 23423, 2342, 6546, 4564, 46546, 7657, 3, 4535, 3453, 134134, 123414, 234234, 345345, 45645, 433543, 234234, 999999, 1, 23123, 434, 545, 64, 6, 76, 456, 754, 32423, 234, 5, 23423, 4345, 32432, 432, 42, 3213, 23423, 5435, 23442, 534};
    vector<int> y = {999999, 123123, 234234, 345345, 456456, 575687, 678678, 431432, 123123, 432, 432, 543234, 34, 12332, 12343, 5464, 7456, 234234, 123, 2123, 123, 123, 54, 75, 234, 54, 24, 63, 14, 53, 243, 1, 543, 6, 7, 8, 65, 67, 57, 435354, 3213, 23423, 5435, 23442, 534, 342423};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 45, 104, 329, 564, 863, 1233, 1648, 2156, 3353, 6547, 10830, 15529, 22210, 29462, 37882, 50578, 66955, 89635, 112604, 135968, 161992, 189862, 217751, 247147, 276585, 318777, 442017, 565777, 703920, 934812, 1165773, 1418851, 1761740, 2107731, 2453923, 2806604, 3235921, 3674946, 4124834, 4599736, 5179021, 5763703, 6442956, 7438850, 8442878};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> x = {844434, 623847, 803674, 70070, 191932, 277501, 539420, 86149, 298078, 103954, 583885, 691450, 380041, 264559, 404568, 852381, 908117, 768905, 881483, 735767, 674654, 836465, 283068, 190090, 480605, 244744, 276727, 538074, 566934, 725978, 316575, 602526, 669093, 826961, 267546, 630503, 104990, 30368, 922864, 55284, 620357, 350991, 151010, 841296, 810153, 66572, 768637, 494065, 810619, 720492};
    vector<int> y = {599124, 700555, 106046, 442408, 665045, 806160, 810155, 996931, 374279, 406127, 18908, 569727, 590163, 149528, 218771, 823313, 818169, 26523, 429697, 558319, 256859, 353069, 152418, 444011, 344165, 794458, 769217, 244445, 135451, 83699, 735100, 497543, 733597, 388653, 670753, 417882, 906395, 860898, 774283, 388699, 972831, 759666, 805702, 784605, 17361, 685799, 266234, 23714, 500085, 883516};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 21399, 69700, 168906, 251947, 360366, 522568, 711535, 984352, 1268374, 1577659, 1900022, 2228881, 2631543, 3017852, 3462874, 3856743, 4309152, 4799320, 5291885, 5826243, 6336897, 6791308, 7318048, 7849755, 8425261, 8980336, 9551446, 10114040, 10702214, 11297127, 11913493, 12522739, 13131853, 13745208, 14383563, 15006468, 15639223, 16276678, 16935586, 17599359, 18275591, 18946030, 19652638, 20360867, 21138609, 21879643, 22767390, 23664769, 24642400};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> x = {999999, 56, 456, 797, 7937, 438, 79379, 7527, 5, 7578, 76, 6786, 7897, 12373, 7539, 753, 75757, 786, 7, 8, 9, 4, 6, 1, 2, 3, 37, 54, 7, 7, 8, 797, 9, 79, 9, 5, 3, 2, 4, 697, 57, 756};
    vector<int> y = {756, 75, 58, 999999, 999999, 13, 999999, 457, 786, 6, 8, 5, 786, 5, 85, 758, 86, 86, 78, 578717, 937, 5, 8, 5055, 781, 3, 1, 9, 9, 3793, 7, 1, 5, 756, 75, 6, 456, 678, 86, 546, 46, 78};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 8, 12, 17, 23, 59, 109, 180, 249, 321, 402, 490, 605, 1040, 1492, 1989, 2664, 3442, 4217, 5019, 5812, 6630, 7463, 8354, 9530, 10974, 14694, 19682, 26529, 34069, 41707, 49607, 58178, 70584, 146298, 724986, 1725609, 2726273, 3734075, 4813319};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> x = {1, 1000000, 2, 5};
    vector<int> y = {2, 1, 500000, 1000000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 499999, 1000002, 2499999};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> x = {1, 2, 3, 4, 5};
    vector<int> y = {500000, 1, 500000, 1000000, 500000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 500004, 1000005};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> x = {1, 10, 1, 10, 99, 99};
    vector<int> y = {1, 10, 10, 1, 99, 100};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 18, 36, 214, 393};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> x = {42, 6335, 19170, 11479, 26963, 5706, 23282, 9962, 2996, 4828, 32392, 3903, 293, 17422, 19719, 5448, 14772, 1870, 25668, 17036, 28704, 31323, 17674, 15142, 28254, 25548, 32663, 20038, 8724, 27530, 12317, 22191, 289, 9041, 19265, 27447, 15891, 24371, 15007, 24394, 19630, 24085, 18757, 4967, 13932, 16945, 24627, 5538, 16119, 22930};
    vector<int> y = {18468, 26501, 15725, 29359, 24465, 28146, 16828, 492, 11943, 5437, 14605, 154, 12383, 18717, 19896, 21727, 11539, 19913, 26300, 9895, 23812, 30334, 4665, 7712, 6869, 27645, 32758, 12860, 9742, 779, 3036, 1843, 30107, 8943, 22649, 23806, 6730, 15351, 31102, 3549, 12624, 19955, 11841, 7377, 26309, 32440, 11324, 21539, 2083, 16542};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 278, 2300, 5861, 10724, 16207, 22181, 29660, 34949, 42327, 50106, 59436, 68480, 77878, 90005, 100236, 112151, 125810, 139402, 153202, 166231, 179747, 193406, 208857, 225050, 241723, 260088, 279208, 298929, 318937, 338194, 358810, 379767, 400899, 421856, 443361, 465346, 488163, 510951, 533833, 556245, 580258, 602421, 625404, 649338, 674595, 702179, 732195, 763698, 796732};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> x = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 1000000, 999999, 999888, 777777, 123456, 654321, 1};
    vector<int> y = {3, 6, 9, 7, 34, 56, 74, 132, 789, 560, 1240, 4513, 9999, 1000000, 555555, 123444, 444444, 112233, 678901, 3};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 4, 13, 20, 62, 139, 266, 509, 1537, 2559, 4773, 11246, 25253, 260804, 1383998, 2605959, 3938921, 5493659, 7492843};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> x = {1, 5, 5, 6};
    vector<int> y = {5, 1, 6, 5};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 6, 10};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> x = {1, 2, 3};
    vector<int> y = {1, 1000, 2};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 1001};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> x = {20000, 40000, 60000, 80000, 100000, 120000, 140000, 160000, 180000, 200000, 220000, 240000, 260000, 280000, 300000, 320000, 340000, 360000, 380000, 400000, 420000, 440000, 460000, 480000, 500000, 520000, 540000, 560000, 580000, 600000, 620000, 640000, 660000, 680000, 700000, 720000, 740000, 760000, 780000, 800000, 820000, 840000, 860000, 880000, 900000, 920000, 940000, 960000, 980000, 1000000};
    vector<int> y = {226690, 143797, 144201, 468483, 502737, 781408, 135037, 560737, 920264, 993761, 838353, 79050, 165650, 611830, 122585, 283027, 925010, 17486, 636525, 912750, 218801, 801923, 807329, 521640, 791925, 614334, 589613, 961483, 713052, 439045, 976747, 368823, 845491, 729642, 199604, 557728, 532024, 867069, 605065, 310558, 736792, 910177, 119249, 782280, 285213, 655861, 499199, 631437, 588240, 508499};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 20404, 75404, 232057, 399600, 596425, 833640, 1085367, 1328707, 1585745, 1845234, 2130380, 2448061, 2778865, 3099148, 3435578, 3800709, 4180352, 4562013, 4945121, 5320023, 5737148, 6125669, 6553290, 6990616, 7464268, 7930235, 8398261, 8850094, 9411407, 9977631, 10568331, 11181904, 11828820, 12461456, 13129866, 13761463, 14428537, 15094388, 15820318, 16562642, 17348429, 18100178, 18895263, 19689607, 20542387, 21412415, 22310790, 23216202, 24142018};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> x = {1, 2, 3, 1000000, 5, 1000000};
    vector<int> y = {1000000, 2, 3, 4, 5, 1000000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 6, 1000004, 2000002, 3999995};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> x = {1, 4, 10};
    vector<int> y = {3, 1, 10};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 18};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> x = {9, 4, 2, 1};
    vector<int> y = {1, 1, 1, 1};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 10};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> x = {100, 1, 200, 100};
    vector<int> y = {1, 100, 100, 200};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 198, 298, 398};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> x = {15, 11, 14, 16};
    vector<int> y = {14, 16, 15, 15};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 8};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> x = {947928, 928262, 821649, 697542, 268941, 875292, 7609, 641632, 135465, 680442, 369525, 577698, 345378, 212276, 627112, 965584, 433644, 129960, 886013, 288022, 242453, 799129, 733353, 589368, 350598, 920777, 503937, 903935, 799282, 490057, 866099, 517785, 314221, 295578, 115116, 803569, 711648, 348173, 267648, 87065, 690997, 978240, 954700, 268439, 995823, 888214, 919415, 902206, 693613, 882251};
    vector<int> y = {839055, 201224, 18777, 634337, 422503, 485087, 233656, 131105, 801840, 540525, 582275, 597359, 29476, 99807, 731902, 938333, 825192, 735546, 351140, 30109, 768292, 209702, 569206, 424134, 72862, 836215, 335541, 57042, 186551, 153646, 176846, 713600, 679918, 327094, 751059, 837403, 995917, 969680, 644806, 900903, 33607, 564290, 394881, 442003, 710210, 399211, 136009, 337477, 269795, 587527};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 20002, 77927, 188154, 291282, 489891, 665608, 846390, 1044377, 1293389, 1553532, 1816704, 2102810, 2425788, 2777700, 3170962, 3603775, 4069789, 4480878, 4920910, 5386327, 5865299, 6367756, 6884555, 7384481, 7902855, 8467842, 9038724, 9640428, 10246998, 10824963, 11417783, 12013669, 12626490, 13287385, 13969670, 14710362, 15416852, 16129174, 16890102, 17658237, 18471590, 19275135, 20084728, 20959579, 21836275, 22724645, 23627451, 24532265, 25584542};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> x = {720957, 937030, 989187, 424783, 238999, 789328, 668091, 210927, 781880, 986382, 978656, 558103, 449232, 380882, 331711, 112882, 828980, 334576, 406301, 510804, 601335, 611825, 954654, 237511, 371086, 811206, 276090, 345893, 947194, 395610, 162956, 759409, 314831, 736804, 534713, 181748, 812190, 78210, 301840, 294668, 740764, 399847, 493180, 441459, 545201, 911992, 839422, 297838, 610164, 148897};
    vector<int> y = {964189, 65081, 798654, 802797, 730129, 453694, 324048, 797856, 245504, 319165, 162099, 401832, 204308, 875265, 651978, 418880, 922176, 1682, 365718, 961302, 658307, 677748, 478573, 917449, 449372, 871677, 560136, 510720, 399828, 847036, 241628, 696782, 999665, 721073, 156766, 711793, 294700, 347603, 894185, 459946, 621188, 755003, 311113, 931772, 736406, 384969, 422127, 307471, 279329, 702478};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 29931, 116369, 212639, 338987, 484143, 681137, 885657, 1071916, 1352928, 1619046, 1904252, 2170505, 2451907, 2743727, 3061925, 3377145, 3739031, 4077803, 4425526, 4815333, 5221577, 5621203, 6042873, 6502640, 6999102, 7486468, 7999446, 8551044, 9117564, 9702359, 10289417, 10922883, 11561148, 12195672, 12843745, 13493691, 14159967, 14832585, 15545013, 16242960, 16972006, 17706344, 18450215, 19189337, 19939449, 20673611, 21512784, 22396297, 23335202};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> x = {1, 2, 100, 103, 106};
    vector<int> y = {1, 2, 101, 103, 106};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 11, 213, 412};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> x = {1, 50000, 4, 23032, 3444, 555, 2, 2, 10000, 32, 4344, 34342, 13456, 42424, 24244, 243434, 43435, 1, 3, 4, 5, 6, 3, 4, 5, 2, 7, 8, 2, 8, 6, 2, 5, 6, 7, 2, 4, 5, 6, 7};
    vector<int> y = {100000, 424234, 2, 1, 4, 5, 243434, 554554, 324423, 66, 339393, 32323, 323233, 646, 455, 34243, 32442, 244566, 98474, 39733, 89373, 6666, 4444, 23333, 7765, 7876, 47739, 32323, 12, 1, 3, 5, 6, 7, 2, 4, 4, 5, 6, 7776};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4, 7, 11, 14, 18, 22, 27, 33, 44, 132, 682, 4121, 8563, 15224, 22985, 30757, 38632, 61662, 84992, 109679, 141998, 181727, 224785, 272518, 339170, 415029, 504391, 602802, 702741, 945724, 1189840, 1466865, 1800636, 2132875, 2472162, 2939724, 3487616};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> x = {1, 2, 100, 100};
    vector<int> y = {10, 10, 10, 10};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 98, 197};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> x = {15, 12, 14, 16};
    vector<int> y = {14, 16, 15, 15};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 7};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> x = {861816, 866577, 771423, 689819, 365295, 558013, 288879, 770263, 976, 693878, 731048, 958862, 696350, 404357, 469512, 354370, 14984, 919189, 553955, 91400, 202087, 55877, 372039, 985931, 372680, 280517, 592376, 331390, 248382, 121978, 46997, 876403, 349639, 220672, 709442, 515197, 48889, 793762, 424987, 722351, 391540, 797241, 548767, 262939, 90789, 566711, 148651, 209136, 1, 1000000};
    vector<int> y = {30792, 996704, 517272, 401306, 809783, 708923, 219482, 819122, 860198, 15411, 819335, 783843, 706298, 156402, 657196, 591369, 9979, 998321, 77545, 876647, 360870, 788421, 790435, 654510, 779418, 770416, 649017, 112243, 964111, 568176, 124145, 310302, 814025, 742706, 257720, 447723, 258087, 429718, 375701, 847900, 922088, 463073, 342071, 321716, 665069, 891174, 635192, 63446, 1, 1000000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 11658, 37750, 83740, 188537, 346435, 538787, 748778, 975217, 1238430, 1540036, 1853208, 2162626, 2524747, 2883695, 3261105, 3639035, 4054135, 4459805, 4885343, 5314268, 5757108, 6220670, 6693082, 7167935, 7734737, 8307491, 8914485, 9518948, 10144314, 10735349, 11360746, 11995450, 12659818, 13287687, 13944120, 14630216, 15355467, 16084716, 16839293, 17612761, 18429992, 19246246, 20104889, 20992614, 21921234, 22841737, 23896271, 24949643, 26025327};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> x = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> y = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 999999, 2999997, 4999995, 6999993, 8999991, 10999989, 12999987, 14999985, 16999983, 18999981, 20999979, 22999977, 24999975, 26999973, 28999971, 30999969, 32999967, 34999965, 36999963, 38999961, 40999959, 42999957, 44999955, 46999953, 48999951};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> x = {500000, 100000, 300000};
    vector<int> y = {1000000, 1000, 1};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 200999, 1399999};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> x = {1, 10, 1};
    vector<int> y = {1, 1, 1};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 9};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> x = {100000, 1, 2, 3};
    vector<int> y = {1, 1, 1, 1};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 100000};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> x = {1, 3, 5};
    vector<int> y = {2, 1, 4};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 7};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> x = {4, 1, 1, 4, 1, 1, 4, 4, 1, 1, 1};
    vector<int> y = {4, 1, 7, 4, 1, 7, 4, 4, 7, 7, 7};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 6, 12, 18, 24, 30, 33};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> x = {1, 1000000, 1, 1000000};
    vector<int> y = {1, 1000000, 1000000, 1};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 999999, 1999998, 3999996};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> x = {1, 3, 99999};
    vector<int> y = {1, 3, 99999};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 199996};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> x = {1, 1000000, 435345, 436679, 765443, 345435};
    vector<int> y = {234324, 256778, 456445, 4345, 3, 4656};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 91555, 424661, 878095, 1543107, 2359884};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> x = {1, 1, 1, 1, 1, 1, 1};
    vector<int> y = {1, 8, 200, 200, 280, 1789, 2222};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 80, 272, 471, 2060, 4082};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> x = {1, 1, 1, 1, 1, 1, 1, 166666, 166666, 166666, 166666, 166666, 166666, 166666, 333333, 333333, 333333, 333333, 333333, 333333, 333333, 500000, 500000, 500000, 500000, 500000, 500000, 500000, 666666, 666666, 666666, 666666, 666666, 666666, 666666, 833333, 833333, 833333, 833333, 833333, 833333, 833333, 999999, 999999, 999999, 999999, 999999, 999999, 999999};
    vector<int> y = {1, 166667, 333333, 500000, 666666, 833333, 999999, 1, 166667, 333333, 500000, 666666, 833333, 999999, 1, 166667, 333333, 500000, 666666, 833333, 999999, 1, 166667, 333333, 500000, 666666, 833333, 999999, 1, 166667, 333333, 500000, 666666, 833333, 999999, 1, 166667, 333333, 500000, 666666, 833333, 999999, 1, 166667, 333333, 500000, 666666, 833333, 999999};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 166665, 333331, 499997, 666664, 999995, 1333326, 1666659, 1999992, 2333325, 2666659, 2999994, 3333329, 3833327, 4333326, 4833325, 5333324, 5833323, 6333323, 6833323, 7333323, 7833323, 8333323, 8833324, 9333325, 9999990, 10666655, 11333320, 11999985, 12666651, 13333317, 13999983, 14666649, 15333315, 15999981, 16666648, 17333315, 18166647, 18999979, 19833311, 20666643, 21499975, 22333307, 23166640, 23999973, 24999971, 25999969, 26999967, 27999965};
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> x = {1, 1000000, 1001, 1000, 1002};
    vector<int> y = {1, 1000000, 1000, 1001, 1001};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 2003, 2000001};
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> x = {10, 11, 12};
    vector<int> y = {10, 2, 12};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 12};
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> x = {1, 900000, 900001, 900002, 900003, 900004, 900005, 900006, 900007, 900008};
    vector<int> y = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4, 6, 9, 12, 16, 20, 900023};
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> x = {359150, 612800, 619331, 280145, 281546, 613355, 72789, 267608, 713861, 915579, 136886, 818352, 165763, 567072, 375774, 286711, 19955, 834289, 225891, 565357, 974233, 421931, 445736, 108125, 727902, 876903, 863633, 125218, 653970, 866235, 395903, 537460, 142213, 948863, 918968, 887323, 762352, 641007, 516777, 174470, 10906, 934918, 721018, 324102, 894047, 465942, 170129, 534732, 769308, 769399};
    vector<int> y = {489674, 333129, 380612, 359777, 217335, 670560, 693135, 916496, 655108, 810809, 115663, 285705, 903285, 292877, 997275, 740822, 635902, 152773, 748218, 582088, 116002, 927050, 777123, 303461, 988068, 136492, 387132, 652100, 174252, 586214, 201265, 428511, 766078, 927713, 832821, 246170, 94829, 666660, 153959, 551169, 184572, 965237, 19205, 189969, 341133, 593286, 273027, 388422, 316165, 841421};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 25401, 115958, 257655, 350866, 554057, 745319, 1025622, 1278244, 1559825, 1828143, 2150541, 2465331, 2802624, 3163150, 3547643, 3917031, 4333619, 4744341, 5176470, 5590415, 6018353, 6441968, 6888361, 7335964, 7796149, 8282513, 8800447, 9323376, 9884417, 10512994, 11186883, 11851219, 12545154, 13278641, 14029387, 14768449, 15524719, 16275825, 17085305, 17884844, 18708086, 19491194, 20291820, 21088308, 21892832, 22718739, 23605299, 24515904, 25450088};
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> x = {1, 2, 3, 10, 10};
    vector<int> y = {1, 2, 1, 10, 10};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 3, 20, 35};
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> x = {1, 1, 1, 1, 100, 100, 100, 100};
    vector<int> y = {1, 1, 1, 1, 100, 100, 100, 100};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 198, 396, 594, 792};
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> x = {239, 566, 239239, 566566, 23930, 999999, 1000000, 1, 12345, 654321, 239, 566, 239239, 566566, 23930, 999999, 1000000, 1, 12345, 654321};
    vector<int> y = {111, 111, 111111, 111111, 55555, 555555, 1000000, 9, 77777, 666666, 666, 666, 888888, 111111, 30303, 2222, 1, 1, 2, 1000000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 348, 1015, 1570, 2452, 14667, 68550, 147358, 236803, 585921, 1262366, 1927032, 2915352, 3904562, 5019678, 6314513, 7843915, 9444003, 11389770};
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> x = {1, 4, 67, 456, 456789, 123, 667, 1233, 67, 9, 678877, 567895, 1000000, 1000000, 23, 345666, 343455, 445555, 4567, 5678, 4567, 123, 12, 3, 4, 5, 6, 7, 8, 9, 1000000, 56789, 76543, 34567, 89765, 123456, 4556, 34, 12, 11, 11, 2, 3, 4, 5, 6, 7, 5, 3, 3};
    vector<int> y = {1000000, 33, 457787, 456688, 12, 3455, 32, 1, 9, 8, 657, 3456, 234556, 123456, 7, 8, 1000000, 45667, 332, 22, 6788, 433, 11, 9, 4567, 322, 12, 3, 4, 5, 6, 7, 5, 9, 123446, 1000000, 4555, 455656, 233434, 9, 7, 67, 54, 45, 55, 567, 4455, 333, 1000000, 22};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 8, 13, 19, 26, 34, 41, 56, 76, 106, 146, 195, 244, 304, 367, 682, 1005, 1544, 2099, 2780, 4017, 7576, 12009, 16557, 21417, 27098, 36169, 47484, 82065, 138870, 215421, 428601, 662004, 1007683, 1463330, 1920128, 2377228, 2835038, 3326215, 3897521, 4576987, 5576962, 6576919, 7576955, 8700334, 9823713, 11058180, 12401546};
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> x = {100, 1, 200, 100};
    vector<int> y = {1, 100, 100, 20000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 198, 298, 20198};
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> x = {1, 3, 3};
    vector<int> y = {2, 1, 3};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4};
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> x = {101, 102, 100, 101, 105, 10001, 2, 1000000, 1, 10003, 123123};
    vector<int> y = {101, 102, 109, 99, 98, 10911, 1, 1000000, 1, 12152, 1};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4, 11, 20, 219, 417, 21129, 43082, 166204, 2166001};
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> x = {1, 2, 100, 100, 100, 100, 200, 201, 99, 99, 101, 101};
    vector<int> y = {100, 100, 200, 201, 1, 2, 100, 100, 101, 99, 101, 99};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4, 8, 105, 203, 302, 402, 502, 602, 703, 804};
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> x = {7, 1, 6, 2, 9, 9, 1, 2, 15, 3};
    vector<int> y = {15, 3, 2, 1, 7, 9, 8, 2, 10, 9};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 7, 14, 22, 33, 46, 58, 73};
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> x = {1, 1, 8, 8, 8, 1000000, 1000000, 455454, 4545, 577, 76, 1, 1, 1, 44};
    vector<int> y = {1, 2, 8, 9, 10, 6565, 5, 565767, 99999, 999, 9, 112, 1000000, 1000000, 444444};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2, 16, 30, 99, 209, 1768, 106295, 550766, 1550762, 2550760, 3550757, 4557304, 5578405};
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> x = {100, 1, 1, 1};
    vector<int> y = {122, 2, 4, 1};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 222};
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> x = {10000, 1, 2, 3};
    vector<int> y = {10000, 1, 2, 3};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 20000};
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> x = {10, 10, 10, 10, 1, 2, 20, 21};
    vector<int> y = {1, 2, 7, 8, 5, 5, 5, 5};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 6, 12, 20, 29, 39, 50};
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> x = {1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000};
    vector<int> y = {1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000, 1, 100000};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199998, 399996, 599994, 799992, 999990, 1199988, 1399986, 1599984, 1799982, 1999980, 2199978, 2399976, 2599974, 2799972, 2999970, 3199968, 3399966, 3599964, 3799962, 3999960, 4199958, 4399956, 4599954, 4799952, 4999950};
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> x = {1, 2, 3};
    vector<int> y = {999, 1, 999};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1000};
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> x = {549815, 60336, 425127, 656656, 946267, 817009, 466455, 211532, 781845, 164421, 820462, 991762, 432808, 131226, 373265, 118245, 620981, 889724, 549094, 403401, 994076, 438119, 913885, 792910, 307241, 59330, 554039, 633715, 933219, 464745, 520480, 483034, 525080, 461958, 656041, 471346, 278966, 638847, 199230, 60810, 319619, 536043, 52571, 752427, 667268, 942187, 870671, 804601, 831910};
    vector<int> y = {419764, 208001, 342338, 374234, 638237, 135247, 197827, 213918, 689285, 831541, 147136, 670382, 352020, 146521, 711813, 813977, 802562, 699511, 609294, 957760, 415092, 670103, 277379, 951134, 722673, 29805, 134754, 181212, 416827, 939354, 13121, 352942, 663706, 871810, 727175, 818294, 7057, 925001, 32211, 212693, 756542, 179346, 399426, 624913, 325867, 627591, 955242, 644780, 327101};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5166, 68511, 210183, 347769, 552616, 709780, 981228, 1265230, 1501690, 1733313, 2025242, 2367803, 2743126, 3098254, 3521383, 3874963, 4266603, 4667520, 5119585, 5534665, 5985308, 6440573, 6949579, 7427268, 7889957, 8393765, 8918612, 9458185, 10005017, 10559932, 11133444, 11708167, 12314883, 12939980, 13576660, 14256580, 14949455, 15676702, 16414170, 17139787, 17947008, 18703188, 19598795, 20495776, 21397001, 22287052, 23210565, 24080671};
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> x = {36737, 1, 252, 3473, 32, 87, 258};
    vector<int> y = {1, 8, 200, 200, 280, 1789, 2222};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 300, 523, 2167, 4280, 7746, 44430};
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> x = {944595, 500541, 165474, 787074, 818935, 166547, 702034, 82445, 856388, 84470, 64498, 692055, 773067, 575530, 662197, 814068, 418383, 650053, 571794, 387494, 798677, 190985, 282998, 610632, 383281, 782043, 407255, 789203, 95366, 507928, 931963, 10093, 508120, 961247, 361558, 309413, 416213, 379278, 876831, 457719, 133160, 303422, 465166, 220572, 577112, 405177, 826888, 969231, 1000000, 1};
    vector<int> y = {668356, 807341, 686314, 48575, 116275, 318923, 828631, 509823, 957333, 344525, 51138, 141455, 429314, 909946, 491632, 614680, 392802, 137783, 149167, 165701, 30384, 69624, 959064, 923994, 632883, 411578, 560973, 242725, 111681, 320961, 772601, 620343, 974848, 208433, 208463, 111925, 509635, 542538, 316029, 94702, 825079, 812563, 340892, 874216, 225797, 130832, 378085, 895948, 1000000, 1};
    TheTower* pObj = new TheTower();
    clock_t start = clock();
    vector<int> result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 26712, 88273, 202592, 359462, 562097, 806973, 1062376, 1266094, 1488097, 1722698, 2013116, 2359393, 2753501, 3121870, 3543462, 3943835, 4351087, 4768716, 5201991, 5630144, 6079466, 6614478, 7109865, 7625898, 8157138, 8713555, 9287176, 9856771, 10429497, 10994113, 11621743, 12271562, 12957883, 13616508, 14314654, 15015074, 15720940, 16410043, 17143227, 17907358, 18684644, 19494304, 20326386, 21105386, 21948635, 22809948, 23780418, 24752254, 25858911};
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20464007&rd=13514&pm=9976
********************************************************************************
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <set>
#include <cmath>
#include <utility>
#include <algorithm>
#include <queue>
 
using namespace std;
#define lint long long
#define SZ(a) ((int)(a.size()))
#define FORN(i,a,b) for(i=(a);i<(b);i++)
#define FOR(i,a) FORN(i,0,a)
#define ALL(S) S.begin(),S.end()
#define SET(x,a) memset(x,a,sizeof x)
#define VC vector
class TheTower {
public:
  vector <int> count(vector <int>, vector <int>);
};
 
vector <int> TheTower::count(vector <int> x, vector <int> y) {
  int n = SZ(x),i,j;
  int inf = 1<<28;
  VC<int> res(n,inf);
  FOR(i,n){
    int l;
    FOR(j,n)FOR(l,n){
      VC<int> res2(n);
      int k;
      FOR(k,n)res2[k]=abs(x[k]-x[j])+abs(y[k]-y[l]);
      sort(ALL(res2));
      int res3=0;
      FOR(k,i+1)res3+=res2[k];
      res[i]=min(res[i],res3);
    }
  }
  return res;
}

********************************************************************************
*******************************************************************************/