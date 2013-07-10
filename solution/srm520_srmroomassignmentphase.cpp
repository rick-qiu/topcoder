/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11380
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

class SRMRoomAssignmentPhase {
public:
    int countCompetitors(vector<int> ratings, int K);
};

int SRMRoomAssignmentPhase::countCompetitors(vector<int> ratings, int K) {
    int ret;
    return ret;
}


int test0() {
    vector<int> ratings = {491, 981, 1199, 763, 994, 879, 888};
    int K = 3;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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
    vector<int> ratings = {1024, 1000, 600};
    int K = 1;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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
    vector<int> ratings = {505, 679, 900, 1022};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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
    vector<int> ratings = {716, 58, 1000, 1004, 912, 822, 453, 1100, 558};
    int K = 3;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> ratings = {422, 623, 1023, 941, 882, 776, 852, 495, 803, 622, 618, 532, 751, 500};
    int K = 4;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> ratings = {1197, 1198, 1196, 1195, 1199};
    int K = 1;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> ratings = {0, 1};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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
    vector<int> ratings = {1199, 1198};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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
    vector<int> ratings = {1199, 1198, 1197, 1196, 1195, 1194, 1193, 1192, 1191, 1190, 1189, 1188, 1187, 1186, 1185, 1184, 1183, 1182, 1181, 1180, 1179, 1178, 1177, 1176, 1175, 1174, 1173, 1172, 1171, 1170, 1169, 1168, 1167, 1166, 1165, 1164, 1163, 1162, 1161, 1160, 1159, 1158, 1157, 1156, 1155, 1154, 1153, 1152, 1151, 1150};
    int K = 7;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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
    vector<int> ratings = {1199, 1198, 1197, 1196, 1195, 1194, 1193, 1192, 1191, 1190, 1189, 1188, 1187, 1186, 1185, 1184, 1183, 1182, 1181, 1180, 1179, 1178, 1177, 1176, 1175, 1174, 1173, 1172, 1171, 1170, 1169, 1168, 1167, 1166, 1165, 1164, 1163, 1162, 1161, 1160, 1159, 1158, 1157, 1156, 1155, 1154, 1153, 1152, 1151, 1150};
    int K = 50;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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
    vector<int> ratings = {151, 534};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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
    vector<int> ratings = {734, 808, 878};
    int K = 1;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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
    vector<int> ratings = {659, 1122, 274, 806};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> ratings = {316, 1189, 740, 414, 674};
    int K = 1;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> ratings = {207, 289, 222, 567, 440, 832};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> ratings = {607, 99, 312, 1173, 932, 621, 1181};
    int K = 5;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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
    vector<int> ratings = {123, 971, 1099, 1019, 883, 863, 78, 922};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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
    vector<int> ratings = {73, 703, 1038, 1182, 724, 95, 994, 358, 826};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> ratings = {20, 235, 522, 620, 438, 156, 278, 1143, 756, 816};
    int K = 9;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> ratings = {176, 720, 1165, 809, 214, 394, 103, 170, 208, 474, 826};
    int K = 1;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> ratings = {1, 1021, 809, 1052, 645, 1087, 359, 954, 175, 307, 968, 120};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> ratings = {207, 899, 289, 387, 321, 293, 846, 475, 882, 743, 311, 379, 531};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> ratings = {365, 784, 251, 899, 753, 481, 439, 512, 637, 162, 830, 776, 460, 957};
    int K = 7;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> ratings = {1002, 504, 380, 1120, 423, 21, 172, 664, 1067, 347, 931, 1012, 923, 718, 105};
    int K = 15;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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
    vector<int> ratings = {140, 252, 303, 403, 507, 830, 338, 785, 437, 673, 10, 199, 710, 907, 812, 1066};
    int K = 4;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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
    vector<int> ratings = {353, 430, 756, 1157, 942, 561, 135, 1104, 404, 812, 1057, 872, 662, 885, 1059, 630, 408};
    int K = 3;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> ratings = {466, 935, 965, 169, 692, 768, 817, 185, 758, 1004, 747, 205, 1070, 1166, 1196, 738, 1071, 736};
    int K = 9;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> ratings = {74, 729, 1191, 26, 1089, 400, 839, 391, 1128, 871, 966, 944, 472, 832, 395, 187, 1176, 99, 758};
    int K = 7;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> ratings = {1000, 852, 496, 1194, 372, 214, 438, 274, 1085, 180, 360, 176, 381, 971, 698, 806, 1073, 163, 110, 2};
    int K = 18;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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
    vector<int> ratings = {414, 1038, 796, 364, 1003, 1016, 643, 578, 653, 462, 923, 732, 674, 635, 293, 1172, 1070, 53, 627, 197, 58};
    int K = 15;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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
    vector<int> ratings = {200, 810, 395, 344, 774, 346, 720, 396, 1166, 552, 1193, 1113, 19, 338, 1114, 892, 332, 671, 694, 258, 502, 277};
    int K = 10;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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
    vector<int> ratings = {17, 848, 495, 514, 733, 627, 112, 131, 747, 844, 134, 329, 941, 204, 402, 1168, 654, 838, 847, 852, 133, 916, 843};
    int K = 21;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> ratings = {419, 617, 1165, 213, 900, 388, 446, 921, 1045, 928, 511, 1134, 86, 9, 946, 662, 980, 952, 814, 1047, 1030, 104, 880, 244};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> ratings = {195, 1128, 340, 336, 800, 53, 324, 337, 725, 1007, 1155, 417, 1118, 713, 909, 108, 71, 92, 979, 814, 486, 1106, 256, 804, 925};
    int K = 5;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> ratings = {123, 1000, 852, 484, 943, 2, 1191, 825, 908, 1153, 821, 506, 112, 1101, 164, 378, 274, 1039, 622, 859, 646, 409, 922, 170, 627, 670};
    int K = 4;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> ratings = {184, 1147, 1162, 59, 297, 1079, 748, 728, 474, 257, 472, 725, 1067, 918, 699, 682, 790, 685, 1198, 136, 984, 778, 932, 563, 577, 353, 1017};
    int K = 3;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> ratings = {53, 1058, 242, 578, 1169, 664, 539, 544, 362, 522, 724, 974, 697, 68, 89, 1052, 468, 323, 1071, 1091, 1107, 538, 490, 408, 916, 937, 997, 995};
    int K = 1;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> ratings = {325, 1022, 268, 350, 337, 799, 515, 475, 221, 406, 1031, 1156, 251, 1174, 149, 551, 130, 93, 1198, 237, 965, 744, 599, 840, 269, 367, 43, 208, 747};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> ratings = {355, 596, 58, 563, 276, 338, 279, 607, 218, 525, 854, 163, 484, 5, 807, 966, 499, 160, 739, 656, 153, 518, 993, 586, 967, 1118, 985, 911, 251, 862};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> ratings = {67, 245, 634, 914, 1088, 1132, 979, 1124, 230, 1151, 409, 284, 479, 829, 404, 296, 525, 720, 632, 478, 483, 444, 947, 853, 131, 585, 1136, 191, 259, 509, 447};
    int K = 10;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> ratings = {230, 353, 328, 434, 871, 92, 1153, 886, 1183, 621, 165, 847, 500, 331, 583, 945, 438, 644, 996, 795, 340, 976, 736, 1158, 691, 301, 656, 958, 971, 39, 223, 137};
    int K = 5;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> ratings = {21, 138, 764, 875, 5, 152, 293, 688, 951, 945, 772, 28, 550, 214, 1193, 254, 654, 766, 92, 299, 53, 1092, 267, 465, 690, 857, 901, 1018, 1152, 1031, 917, 294, 1148};
    int K = 30;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> ratings = {286, 125, 950, 1051, 591, 402, 621, 757, 583, 8, 1106, 336, 475, 143, 51, 69, 16, 128, 150, 590, 1041, 540, 1073, 106, 884, 1138, 710, 900, 922, 834, 413, 636, 1062, 32};
    int K = 15;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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
    vector<int> ratings = {106, 907, 502, 1024, 647, 325, 122, 978, 676, 947, 1103, 234, 331, 264, 1017, 88, 1085, 635, 208, 1186, 569, 515, 604, 214, 916, 662, 263, 1132, 1020, 176, 1012, 134, 1120, 457, 226};
    int K = 6;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> ratings = {434, 1013, 131, 393, 1141, 1112, 784, 256, 1042, 942, 938, 10, 494, 669, 116, 641, 1132, 19, 1198, 97, 976, 1092, 469, 500, 337, 720, 164, 644, 856, 959, 806, 738, 103, 1164, 607, 1057};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> ratings = {544, 447, 730, 437, 1183, 348, 1176, 970, 657, 131, 847, 723, 180, 481, 1092, 814, 202, 733, 912, 587, 518, 1105, 758, 1081, 126, 645, 352, 656, 109, 354, 793, 944, 826, 900, 1059, 70, 272};
    int K = 4;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> ratings = {5, 441, 382, 1193, 842, 780, 845, 334, 833, 1028, 1076, 575, 1052, 641, 1078, 384, 302, 580, 131, 859, 1186, 430, 374, 672, 261, 779, 1062, 406, 936, 664, 112, 744, 562, 595, 535, 234, 835, 77};
    int K = 11;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> ratings = {232, 889, 848, 223, 1176, 894, 342, 1133, 628, 266, 44, 1089, 351, 572, 407, 512, 90, 448, 939, 756, 849, 249, 1014, 1071, 257, 530, 846, 227, 976, 1146, 176, 174, 451, 101, 725, 284, 1039, 1112, 609};
    int K = 31;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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
    vector<int> ratings = {639, 730, 774, 35, 479, 267, 1165, 618, 225, 329, 963, 451, 178, 1163, 367, 377, 801, 219, 883, 126, 755, 847, 172, 42, 497, 1051, 656, 48, 140, 567, 631, 264, 719, 775, 284, 266, 358, 928, 51, 741};
    int K = 4;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> ratings = {786, 921, 545, 519, 406, 419, 1143, 1089, 710, 1022, 268, 198, 987, 694, 777, 10, 285, 768, 833, 1068, 1190, 325, 412, 120, 274, 483, 71, 754, 712, 409, 58, 591, 282, 1142, 1045, 1072, 637, 400, 448, 1078, 382};
    int K = 5;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> ratings = {61, 1098, 555, 579, 120, 1010, 1146, 427, 359, 1154, 1037, 462, 986, 865, 430, 343, 726, 92, 465, 835, 485, 402, 907, 884, 958, 477, 1186, 78, 64, 589, 244, 1156, 283, 217, 587, 1081, 166, 773, 691, 400, 1055, 344};
    int K = 4;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> ratings = {573, 813, 392, 280, 355, 550, 807, 342, 990, 222, 446, 1052, 453, 54, 689, 784, 1174, 668, 409, 622, 383, 1017, 1085, 229, 172, 745, 1057, 23, 804, 569, 935, 242, 916, 6, 946, 509, 1162, 864, 995, 859, 1054, 353, 201};
    int K = 7;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> ratings = {67, 753, 182, 326, 1096, 370, 1156, 381, 1170, 398, 910, 89, 474, 150, 572, 1198, 938, 247, 1004, 448, 568, 862, 345, 464, 881, 663, 145, 363, 1111, 43, 329, 131, 580, 931, 980, 121, 886, 305, 425, 217, 688, 689, 337, 442};
    int K = 10;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> ratings = {12, 1006, 586, 1042, 115, 694, 322, 1052, 634, 269, 702, 291, 1066, 96, 917, 301, 605, 81, 801, 459, 356, 199, 884, 442, 566, 1101, 210, 792, 202, 25, 294, 706, 460, 179, 854, 1114, 1004, 408, 1167, 88, 848, 1010, 736, 855, 1152};
    int K = 9;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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
    vector<int> ratings = {25, 294, 1154, 1035, 422, 283, 303, 456, 434, 330, 577, 423, 1091, 38, 937, 539, 829, 478, 864, 637, 1103, 52, 642, 1076, 8, 396, 1163, 522, 1151, 896, 925, 346, 604, 659, 748, 687, 495, 704, 207, 206, 760, 331, 194, 1166, 1108, 442};
    int K = 1;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> ratings = {290, 84, 94, 317, 284, 1156, 590, 784, 560, 349, 860, 399, 301, 767, 1178, 373, 618, 252, 1068, 498, 294, 689, 28, 661, 1169, 149, 111, 899, 224, 601, 246, 426, 902, 465, 495, 62, 454, 1159, 485, 258, 11, 1003, 296, 393, 137, 131, 205};
    int K = 1;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> ratings = {275, 3, 31, 1171, 134, 68, 401, 498, 393, 179, 219, 1114, 751, 404, 1155, 359, 573, 635, 1087, 1176, 286, 861, 747, 1108, 599, 205, 433, 1167, 657, 790, 115, 461, 610, 1086, 1096, 266, 536, 305, 278, 979, 398, 169, 904, 800, 209, 881, 443, 855};
    int K = 10;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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
    vector<int> ratings = {6, 1004, 196, 1001, 309, 978, 1095, 451, 878, 716, 447, 172, 165, 1000, 54, 905, 392, 164, 747, 232, 611, 397, 600, 375, 302, 522, 634, 623, 640, 751, 198, 428, 812, 965, 337, 975, 296, 1073, 590, 642, 556, 115, 984, 794, 87, 987, 343, 837, 53};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> ratings = {39, 352, 118, 240, 219, 70, 558, 1091, 120, 125, 1130, 175, 585, 1154, 115, 1128, 664, 183, 765, 343, 299, 201, 565, 220, 834, 190, 355, 1099, 950, 1056, 631, 1191, 1010, 1065, 1126, 638, 64, 564, 420, 471, 1189, 480, 260, 83, 257, 801, 584, 634, 1070, 45};
    int K = 1;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> ratings = {2, 1, 3};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> ratings = {6, 8, 5, 7};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> ratings = {422, 623, 1023, 941, 882, 776, 852, 495, 803, 622, 618, 532, 751, 500};
    int K = 4;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> ratings = {4, 3, 5};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> ratings = {1000, 1002, 900, 1005};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> ratings = {3, 2, 6, 1, 5, 4};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> ratings = {6, 3, 4, 5, 2, 7, 8};
    int K = 3;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> ratings = {15, 14, 13, 12, 16};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> ratings = {422, 555, 102, 941, 882, 776, 852, 666, 803, 622, 618, 532, 751, 500};
    int K = 1;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> ratings = {2, 3, 1, 4};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> ratings = {20, 40, 10, 21};
    int K = 3;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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

int test70() {
    vector<int> ratings = {2, 3, 4, 1, 5, 6};
    int K = 3;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> ratings = {10, 5, 200, 500};
    int K = 3;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> ratings = {500, 981, 1199, 499, 994, 879, 498};
    int K = 3;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> ratings = {1, 2, 0, 3};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> ratings = {2, 1, 5, 3, 4};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> ratings = {77, 2, 233, 24, 825, 26, 927, 20, 300, 40, 500, 60, 700, 80};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> ratings = {5, 10, 3, 11};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> ratings = {480, 450, 500, 550, 530};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> ratings = {5, 1, 2, 7, 4, 6, 3};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> ratings = {102, 103, 100, 104, 101};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> ratings = {200, 199, 201, 198, 190};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> ratings = {5, 2, 3, 4, 6, 1};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> ratings = {1, 0, 2};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> ratings = {20, 13, 234, 435, 34, 2, 45, 56, 67, 68, 69, 58, 59, 90, 78, 98};
    int K = 15;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> ratings = {2, 1, 10};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> ratings = {2, 1, 3, 4};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> ratings = {5, 1, 3, 6, 9};
    int K = 3;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> ratings = {10, 20, 5, 30};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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
    vector<int> ratings = {9, 10, 11, 12, 8, 7, 6, 5, 4, 3, 2, 1};
    int K = 3;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> ratings = {10, 11, 9, 12, 8, 13, 7, 14, 6, 19, 3};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> ratings = {3, 2, 6, 8, 7};
    int K = 5;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> ratings = {2, 1};
    int K = 1;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> ratings = {3, 5, 1, 6, 2};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> ratings = {900, 2, 1000, 3};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> ratings = {2, 4, 1, 3};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> ratings = {100, 200, 300, 50, 400, 500, 550, 600};
    int K = 3;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> ratings = {1000, 1100, 0, 1150, 5};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> ratings = {3, 6, 5, 1, 2, 4};
    int K = 3;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> ratings = {716, 1001, 1002, 10, 1003, 1004, 90, 1005, 1006};
    int K = 3;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> ratings = {3, 4, 1, 5, 2};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
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
    vector<int> ratings = {2, 3, 1, 5};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> ratings = {3, 2, 4};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> ratings = {1197, 1198, 1196, 1195, 1199};
    int K = 1;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> ratings = {2, 1, 3, 4, 5, 6, 7};
    int K = 3;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> ratings = {2, 1, 4, 5};
    int K = 2;
    SRMRoomAssignmentPhase* pObj = new SRMRoomAssignmentPhase();
    clock_t start = clock();
    int result = pObj->countCompetitors(ratings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23022097&rd=14545&pm=11380
********************************************************************************
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
class SRMRoomAssignmentPhase
{
  public:
    int countCompetitors(vector <int> ratings,int k)
    {
      int res=0;
      int me=ratings[0];
      int size=ratings.size();
      int r[10000];
      memset(r,0,sizeof(r));
      for(int i=0;i<size;i++)
        r[i]=ratings[i];
      sort(r,r+size);
      int i=size-1,cnt=0;
      while(r[i]!=me)
      {
        cnt++;
        if(cnt==k) cnt=0,res++;
        i--;
      }
      return res;
    }
};

********************************************************************************
*******************************************************************************/