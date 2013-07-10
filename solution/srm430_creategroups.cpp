/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8376
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

class CreateGroups {
public:
    int minChanges(vector<int> groups, int minSize, int maxSize);
};

int CreateGroups::minChanges(vector<int> groups, int minSize, int maxSize) {
    int ret;
    return ret;
}


int test0() {
    vector<int> groups = {10, 20};
    int minSize = 10;
    int maxSize = 15;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> groups = {20, 8, 6};
    int minSize = 10;
    int maxSize = 15;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> groups = {10, 20, 30};
    int minSize = 1;
    int maxSize = 18;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> groups = {50, 10, 20, 20, 5};
    int minSize = 15;
    int maxSize = 30;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> groups = {100, 200, 301};
    int minSize = 200;
    int maxSize = 200;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> groups = {100, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1900, 1000, 1000, 1000};
    int minSize = 1000;
    int maxSize = 1000;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> groups = {100, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1900, 1000, 1000, 1000};
    int minSize = 1001;
    int maxSize = 2000;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> groups = {100, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1900, 1000, 1000, 1000};
    int minSize = 999;
    int maxSize = 1000;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> groups = {100, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1900, 1000, 1000, 1000};
    int minSize = 998;
    int maxSize = 999;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> groups = {1000000};
    int minSize = 1000000;
    int maxSize = 1000000;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
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
    vector<int> groups = {999999};
    int minSize = 1000000;
    int maxSize = 1000000;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> groups = {999999};
    int minSize = 999997;
    int maxSize = 999998;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> groups = {353802};
    int minSize = 353798;
    int maxSize = 353803;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
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
    vector<int> groups = {153183, 944413, 546962, 393535};
    int minSize = 509520;
    int maxSize = 509521;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> groups = {23280, 803789, 309145, 345215, 23120, 311585, 947808, 650, 987948, 694343, 990901, 42861, 632341, 507689, 166254, 287046, 256156, 361030, 438632, 103757, 782736, 577932, 75180, 783591, 838709, 104447, 422775, 88467, 360196, 839298, 196815, 449609, 255598, 943640};
    int minSize = 439778;
    int maxSize = 439778;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> groups = {854699, 305579, 732612, 336885, 435990, 582239, 725063, 758521, 211809, 918019, 787945, 973136, 371398, 600785, 948416, 261059, 273576, 883953};
    int minSize = 608977;
    int maxSize = 608983;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 2101517;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> groups = {906208, 547842, 471448, 351, 510012, 204189, 559952, 148761, 484868, 915, 779478, 787629, 987388, 492, 511367, 743152, 307942, 211401, 945940, 515356, 781049, 166057, 542619, 427976, 475, 912433, 859, 692197, 869760, 159543, 236, 671238, 628341, 990137, 552426, 971936, 916991, 202130, 673229};
    int minSize = 507286;
    int maxSize = 507292;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 5328964;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> groups = {609442};
    int minSize = 609439;
    int maxSize = 609444;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> groups = {839593, 966231, 661, 525751, 875501, 145354, 662155, 819596, 233864, 277585, 814, 378374, 658318, 96, 553585, 467, 833507, 602737, 357721, 597977, 462049, 543, 543322, 77407, 446, 896655, 550478, 419, 790478, 808994, 871685};
    int minSize = 462334;
    int maxSize = 462337;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 4536876;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> groups = {463751, 683909, 770, 251062, 834026, 851, 754289, 91358, 967035, 316705, 89881, 526182, 153935, 579082, 406489, 505, 556642, 424012, 901311, 322121, 514959, 860984, 277631, 618703, 118154, 424944, 667557, 434182, 617084, 499033, 783239, 627158, 632252, 307136, 499, 628008, 273098, 280742, 429044, 786448, 547724, 328474, 401218, 257123, 408797};
    int minSize = 445509;
    int maxSize = 445516;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 4693540;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> groups = {890340, 540028, 310, 616161, 247506, 534590, 805995, 880564, 858590, 833781, 167106, 525, 63247, 556970, 726789, 508193, 29697, 525083, 290243, 552707, 347, 239964, 633054, 932435};
    int minSize = 476424;
    int maxSize = 476428;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 3248871;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> groups = {346876, 481443, 430260, 440463, 601915, 909290, 479, 981549, 782430, 70629, 913221, 668052, 556481, 133359, 599469, 691351, 193905, 995077, 455373, 860562, 604262, 825515, 359, 807083};
    int minSize = 556222;
    int maxSize = 556223;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> groups = {437111, 609498, 254430, 193558, 841921, 865137, 881633, 705664, 500, 850206, 670474, 90088, 829390, 389134, 213744, 426816, 285781, 858013, 643335, 131842, 830377, 937568, 872081, 878980, 422761, 615, 460093, 299775, 801633, 300039, 596032, 20560, 433804, 704543, 419673, 31};
    int minSize = 504351;
    int maxSize = 504356;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> groups = {488687, 926018, 649745, 196493, 532540, 574686, 23826, 185335, 337963, 920838, 284, 400381, 555097, 495207, 145779, 278519, 908510, 581041, 440798, 923254, 60, 31632, 617129, 683263, 330509, 965583, 466020, 652737, 726236, 18294, 571489, 49837, 346454, 540773, 913241, 995983, 584245, 918171, 815338, 372253, 622616, 765622, 508407};
    int minSize = 513040;
    int maxSize = 513041;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> groups = {89918, 527920, 704682, 680930, 963, 502612, 959600, 777, 537680, 891817, 644800, 162948, 575576, 745311, 990643, 267};
    int minSize = 501024;
    int maxSize = 501030;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 2250247;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> groups = {26368, 158658, 773537, 735420, 773026, 329458, 230082, 930546, 152463, 89526, 404356, 156720, 757467, 70744, 337097, 150, 362908, 96941, 345022, 897092, 484328, 252032, 572379, 491932, 87653, 103518};
    int minSize = 369976;
    int maxSize = 369976;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> groups = {753062};
    int minSize = 753060;
    int maxSize = 753063;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> groups = {303099, 88619, 852, 377003, 105155, 254296, 294596, 152852, 706450, 945507, 643030, 316673, 872, 553095, 995302, 935743, 228630, 681877, 725592, 693143, 160775, 352185, 957805, 452813};
    int minSize = 455245;
    int maxSize = 455249;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 3285054;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> groups = {98582, 237083, 860660, 197137, 328460, 320436, 62349, 170863, 201065, 761998, 688005, 632355, 63846, 953251, 281203, 408179, 11678, 264903, 495717, 893304, 299536, 44406, 955, 580635, 492525, 936467, 548905, 533562, 920, 290, 53428, 230610, 235962, 705109};
    int minSize = 370422;
    int maxSize = 370423;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> groups = {221, 578001, 700715, 5768, 54961, 219608, 271, 912452, 528331, 466109, 929321};
    int minSize = 399615;
    int maxSize = 399616;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> groups = {465, 43545, 320893, 392697, 258476, 531261, 2745, 425003, 160703, 422617, 66214, 378662, 963835, 723, 228170, 356673, 553233, 371873, 255691, 77391, 353352, 271542, 686061, 260, 64, 594413, 590477, 564646, 172587, 155637, 332114, 200890, 445869, 622730, 437991, 911885, 984237, 565740, 697194, 58413};
    int minSize = 361425;
    int maxSize = 361425;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> groups = {258253, 923519, 807351, 747152, 178934, 906858, 510667, 371673, 374558, 954517, 688794, 780128, 241655, 569, 187948, 952421, 343, 139275, 61036, 682005, 545769, 304131, 192741, 335003, 771123, 135072, 464892, 832562, 177411, 720095, 628696, 133214, 761843, 844212, 584121, 997132, 488829, 318104, 849146, 977688};
    int minSize = 520736;
    int maxSize = 520739;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 5540412;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> groups = {660771, 503042, 129736, 512030, 942772, 793972, 293437, 468277, 632999, 314003, 751292, 321, 158089, 34448, 680366, 450335, 618338, 672229, 153029, 156588, 362640, 35258, 229546, 721538, 890495, 560946, 180452, 473, 704765, 720617, 967, 678195, 221524, 349092, 273, 517, 679605, 109707, 765294, 297786, 35963, 610240, 447630, 242740, 4};
    int minSize = 394937;
    int maxSize = 394940;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> groups = {371260, 334308, 879448, 938198, 333848, 167147, 945135, 273694, 787376, 238113, 856145, 27579, 862, 71226, 688039, 962154, 709370, 880, 584992, 33360, 149828, 868689, 24326, 136, 297383, 211596, 943, 679003, 618526, 425854, 776614, 539161, 748923, 516, 626531, 144574, 806358, 266944, 951, 949914, 817838, 227323, 881, 490321, 264499, 626092, 770024};
    int minSize = 436955;
    int maxSize = 436955;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> groups = {705257, 988304, 694896, 991667, 42506, 632668, 507418, 165977, 286927, 256092, 360885, 438586, 103605, 783131, 578291, 75291, 783235, 838351, 104321, 422863, 88768, 360628, 838798, 196795, 450117, 256402, 943694, 937446, 959737, 541832, 175295, 920779, 46339, 802511, 324857, 296013, 457, 23043, 854140, 305711, 732083, 336989, 436417, 582371, 724844, 758418, 211853};
    int minSize = 486521;
    int maxSize = 486525;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 6396321;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> groups = {42978, 122878, 276300, 515604, 142527, 157859, 213269, 423926, 906240, 548337, 471225, 246, 510665, 204140, 560839, 148552, 485123, 489, 779255, 787001, 987486, 351, 511333, 743287, 307117, 211229, 945632, 515719, 781599, 166685, 543087, 428060, 228, 912677, 860, 692738, 870163, 159857, 438, 670673, 627798};
    int minSize = 423766;
    int maxSize = 423770;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 5471785;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> groups = {476701, 913671, 658097, 732647, 923273, 526212, 875902, 144409, 661708, 819499, 233284, 277362, 469, 377777, 659101, 132, 553540, 931, 834356, 603291, 358291, 597456, 461872, 982, 543285, 78296, 960, 896672, 551112, 669, 789781, 808677, 872263, 98622, 510089, 626110, 645867, 685, 582237, 681122, 542930, 320729, 821950, 16718};
    int minSize = 479084;
    int maxSize = 479087;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 5774623;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> groups = {424097, 671178, 884360, 576943, 785, 405943, 843, 556897, 423579, 900746, 322667, 515608, 860998, 277927, 618537, 118456, 424913, 667784, 433643, 616549, 498638, 783698, 627176, 632098, 306745, 747, 628340, 272819, 280489, 428842, 786933, 548188, 328590, 401560, 256536, 408076, 364, 76521, 867335, 492083, 120683};
    int minSize = 449971;
    int maxSize = 449973;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> groups = {399257, 627, 290381, 552664, 615, 239406, 632265, 931877, 463096, 213845, 961738, 448830, 810205, 798309, 799646, 553, 765197, 958555, 29021, 195448, 948141, 188241, 346469, 480650, 430254, 440767, 602289, 909310, 313, 981678, 782330, 70513, 913004, 668042, 556434, 133220, 599641, 692295, 193706, 995277, 455495, 861046, 604201, 825455, 988, 807701};
    int minSize = 521279;
    int maxSize = 521281;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> groups = {126716, 976667, 670265, 553194, 849502, 671106, 89995, 829898, 389073, 213837, 426838, 286168, 858200, 643651, 131949, 829677, 937197, 871839, 878849, 422517, 806, 460438, 299298, 801015, 300076, 595841, 20267, 433750, 704554, 419874, 806, 492094, 860355, 430362, 770988, 525203, 405328, 575, 743199, 297424, 417834, 254, 544, 743789, 226337};
    int minSize = 480177;
    int maxSize = 480185;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 5723198;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> groups = {654625, 423739, 205, 441179, 922983, 899, 31596, 617722, 682617, 330586, 965410, 466050, 653216, 725323, 18699, 571314, 49675, 346086, 540617, 913236, 996056, 584804, 917945, 815662, 372152, 622064, 766074, 508404, 977725, 211759, 6299, 800616, 109417, 895062, 587269, 812661, 804828, 345361, 721, 527296, 704395, 680265, 699, 503306, 959493, 899, 538241, 890892};
    int minSize = 526998;
    int maxSize = 527001;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> groups = {211313, 79260, 710012, 316522, 74705, 38849, 831576, 525619, 450234, 374444, 169000, 176816, 362568, 96850, 345236, 896702, 484162, 252205, 572336, 492012, 86860, 103369, 666979, 270, 483554, 815869, 921323, 98417, 248893, 640, 410890, 400926, 935470, 651265, 578, 224747, 977, 237170, 567218, 495001, 967449, 86129, 119400, 377296};
    int minSize = 371838;
    int maxSize = 371841;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> groups = {723188, 49623, 419065, 880699, 426851, 906819, 413, 590720, 948960, 122687, 171, 841032, 640887, 495420, 49939, 627284, 321017, 98698, 236460, 861191, 197165, 327706, 320937, 62728, 170055, 200753, 761568, 688509, 632473, 63597, 953205, 281736, 408198, 12232, 264690, 495022, 893858, 299799, 45139, 199, 581509};
    int minSize = 412246;
    int maxSize = 412248;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> groups = {574924, 768059, 675023, 642, 507418, 508926, 470362, 92361, 95971, 947077, 796784, 481451, 452968, 898078, 745621, 483847, 305701, 810115, 465020, 764725, 264126, 486467, 35842, 43441, 320833, 393032, 258628, 531741, 2501, 424997, 160565, 422701, 66479, 378553, 963536, 155, 228269, 356469, 552822, 372323, 255659, 77410, 353138, 271851, 686585, 588, 280, 594089};
    int minSize = 403085;
    int maxSize = 403087;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 5339248;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> groups = {470276, 66922, 307516, 313, 241134, 78649, 465967, 646737, 783840, 297834, 959610, 946718, 950630, 258148, 923124, 806768, 746909, 179443, 907463, 511219, 371992, 374916, 954671, 689220, 780501, 241033, 92, 187922, 952807, 567, 139514, 61411, 681792, 545767, 303665, 192135, 335014, 770796, 134940, 465134, 833099, 177175, 719639};
    int minSize = 475883;
    int maxSize = 475885;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 6069495;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> groups = {991497, 871088, 690977, 141252, 40146, 297203, 325823, 647083, 660543, 503046, 129562, 512391, 942135, 794346, 293717, 468565, 632614, 313543, 751325, 495, 158228, 34893, 680461, 450440, 618354, 671953, 153570, 156536, 363068, 35741, 229761, 721716, 891109, 560946, 180513, 19, 704539, 720227, 99, 678093, 220786, 349050, 180, 143, 679585, 108893, 765560, 297381, 36041};
    int minSize = 417859;
    int maxSize = 417865;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 6579833;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> groups = {676313, 454828, 602662, 371255, 334158, 879621, 938470, 334281, 167666, 945380, 273302, 787397, 238235, 856559, 28108, 362, 70967, 687095, 961981, 710143, 603, 585353, 32779, 149623, 868644, 24318, 942, 296968, 212358, 629, 678268, 618238, 425853, 777090, 539220, 749419, 164, 626510, 145151, 806526, 267169, 488, 949455, 817537, 227274, 951, 490520, 264839};
    int minSize = 434904;
    int maxSize = 434907;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> groups = {881917, 533537, 815987, 199541, 764922, 525735, 432180, 45083, 886639, 484707, 268, 793147, 377383, 293, 512, 495988, 117058, 837323, 861134, 938980, 602405, 896, 199, 389275, 607906, 229125, 359630, 748037, 504, 542674, 900088, 362030, 105468, 399113, 154952, 661376, 826855, 526055, 364108, 446148, 13, 918942};
    int minSize = 455668;
    int maxSize = 455669;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> groups = {603143, 516493, 432492, 612141, 762129, 513106, 855563, 269330, 300095, 878233, 956062, 874835, 43659, 140, 93070, 357427, 780240, 297265, 685763, 521631, 665092, 897754, 652402, 529758, 36683, 349420, 849037, 901370, 504088, 839475, 191, 196851, 396877, 674812, 136967, 828095, 608872, 695, 143, 276586, 399108, 924845, 96479, 509127, 487456};
    int minSize = 491443;
    int maxSize = 491446;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 5657926;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> groups = {266, 317903, 371257, 39138, 82604, 469957, 243270, 807185, 537, 128, 84807, 426861, 921672, 333431, 571689, 92892, 790196, 825001, 755264, 658436, 9, 108003, 278, 114766, 925366, 180064, 377493, 129627, 638823, 185486, 368, 756407, 344133, 864319, 916750, 989818, 730635, 675, 838726, 632, 319729, 209};
    int minSize = 386061;
    int maxSize = 386064;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> groups = {728066, 600547, 130019, 144189, 927576, 152347, 121123, 349374, 894606, 445657, 754368, 347378, 285624, 726125, 319327, 542302, 819278, 355437, 540999, 863820, 362107, 130832, 468, 846115, 657752, 672228, 977248, 877555, 283770, 92539, 763834, 492012, 906875, 797, 223589, 133607, 378721, 836501, 344737, 722512, 660, 313218};
    int minSize = 477754;
    int maxSize = 477757;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> groups = {94, 569441, 747921, 62807, 145, 755130, 718019, 37495, 589, 329182, 354818, 186094, 807128, 973968, 180762, 287545, 330, 468599, 245501, 835, 233679, 448319, 357081, 68937, 887875, 908948, 842013, 594858, 174297, 228680, 577347, 443894, 369474, 497, 722252, 871137, 963409, 637892, 462716, 384175, 743249, 269594, 955718, 289439, 440739};
    int minSize = 435612;
    int maxSize = 435616;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 5957026;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> groups = {912172, 208826, 90753, 281740, 778009, 34339, 437295, 957398, 948890, 466342, 356160, 243599, 364964, 740271, 886197, 920243, 267662, 841845, 170877, 309081, 338844, 359, 775656, 421408, 228170, 693637, 234528, 256697, 508045, 581870, 390478, 981623, 771450, 399511, 14526, 171383, 228004, 159334, 160104, 597109, 551, 291556, 60092};
    int minSize = 429801;
    int maxSize = 429805;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 5491367;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> groups = {892010, 751683, 709596, 932845, 128115, 112771, 810541, 947314, 612115, 625871, 185273, 58583, 36739, 252955, 196609, 542444, 162254, 405337, 887621, 769662, 422791, 312152, 102871, 141331, 579630, 296593, 409637, 271571, 485486, 884482, 397444, 502791, 90055, 797810, 612348, 462, 401167, 39239, 919102, 508775, 245107, 663055, 420101, 436, 234059, 538181, 650403, 280809, 228637};
    int minSize = 437893;
    int maxSize = 437895;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> groups = {1, 10, 10};
    int minSize = 9;
    int maxSize = 20;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> groups = {1, 1, 1, 1, 1, 2};
    int minSize = 1;
    int maxSize = 2;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> groups = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int minSize = 500000;
    int maxSize = 500001;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 12499975;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> groups = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int minSize = 500000;
    int maxSize = 500000;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> groups = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int minSize = 500001;
    int maxSize = 500001;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> groups = {55, 33, 45, 71, 27, 89, 16, 14, 61};
    int minSize = 33;
    int maxSize = 56;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> groups = {49, 60, 36, 34, 36, 52, 60, 43, 52, 59};
    int minSize = 45;
    int maxSize = 51;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> groups = {5, 5, 5, 5, 5};
    int minSize = 5;
    int maxSize = 5;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> groups = {100, 200, 301};
    int minSize = 200;
    int maxSize = 200;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> groups = {10, 20, 30};
    int minSize = 1;
    int maxSize = 18;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> groups = {55, 33, 45, 71, 27, 89, 16, 14, 61};
    int minSize = 33;
    int maxSize = 56;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> groups = {20, 8, 6};
    int minSize = 10;
    int maxSize = 15;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> groups = {55, 33, 45, 71, 27, 98, 16, 14, 61};
    int minSize = 33;
    int maxSize = 56;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> groups = {4, 6, 2};
    int minSize = 5;
    int maxSize = 10;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> groups = {15, 25};
    int minSize = 20;
    int maxSize = 20;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> groups = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int minSize = 4;
    int maxSize = 5;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> groups = {3, 7, 7};
    int minSize = 4;
    int maxSize = 8;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
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
    vector<int> groups = {49, 60, 36, 34, 36, 52, 60, 43, 52, 59};
    int minSize = 45;
    int maxSize = 51;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> groups = {2, 2};
    int minSize = 1;
    int maxSize = 1;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> groups = {5, 2};
    int minSize = 3;
    int maxSize = 5;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
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
    vector<int> groups = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int minSize = 500000;
    int maxSize = 500005;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 12499975;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> groups = {16, 16, 12};
    int minSize = 10;
    int maxSize = 15;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> groups = {123412, 123141, 125343, 274567, 155132, 342345, 123125, 345345, 231234, 163454};
    int minSize = 123456;
    int maxSize = 300000;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 87690;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> groups = {16, 15, 15};
    int minSize = 10;
    int maxSize = 15;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> groups = {10, 10, 10, 10, 11};
    int minSize = 1;
    int maxSize = 10;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> groups = {100, 200, 299};
    int minSize = 200;
    int maxSize = 200;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> groups = {9, 10, 11, 14};
    int minSize = 10;
    int maxSize = 11;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> groups = {1, 10, 10, 10};
    int minSize = 9;
    int maxSize = 10;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> groups = {2, 4};
    int minSize = 3;
    int maxSize = 3;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> groups = {30, 41};
    int minSize = 10;
    int maxSize = 35;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> groups = {3, 4, 1, 1, 1};
    int minSize = 2;
    int maxSize = 5;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> groups = {2, 3, 4, 5, 6, 7};
    int minSize = 4;
    int maxSize = 5;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> groups = {4, 4};
    int minSize = 4;
    int maxSize = 4;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
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
    vector<int> groups = {1, 2, 4};
    int minSize = 1;
    int maxSize = 2;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> groups = {1, 10};
    int minSize = 2;
    int maxSize = 10;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
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
    vector<int> groups = {20, 21};
    int minSize = 10;
    int maxSize = 20;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> groups = {5, 5, 5, 6};
    int minSize = 5;
    int maxSize = 5;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> groups = {999999, 999999, 999999, 999999, 999999, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 1, 1, 1, 1, 1};
    int minSize = 500000;
    int maxSize = 500000;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 12499975;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> groups = {999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int minSize = 500000;
    int maxSize = 500000;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 12499975;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> groups = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int minSize = 499000;
    int maxSize = 501000;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 12475000;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> groups = {10, 110};
    int minSize = 20;
    int maxSize = 100;
    CreateGroups* pObj = new CreateGroups();
    clock_t start = clock();
    int result = pObj->minChanges(groups, minSize, maxSize);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22706081&rd=13521&pm=8376
********************************************************************************
#include<iostream> 
#include<vector> 
#include<string> 
 
using namespace std; 
 
class CreateGroups 
{ 
public: 
  int minChanges(vector <int> groups, int minSize, int maxSize) 
  { 
    int n=groups.size(); 
    int sum=0,plus=0,minus=0; 
    for(int i=0;i<n;i++) 
    { 
      sum+=groups[i]; 
    } 
 
    if((sum<minSize*n)||(sum>maxSize*n)) 
      return -1; 
    else{ 
      for(int i=0;i<n;i++) 
      { 
        if(groups[i]>maxSize) 
          plus+=groups[i]-maxSize; 
        if(groups[i]<minSize) 
          minus+=minSize-groups[i]; 
      } 
 
      if(plus>minus) 
        return plus; 
      else 
        return minus; 
    } 
  } 
};

********************************************************************************
*******************************************************************************/