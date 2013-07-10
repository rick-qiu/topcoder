/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11474
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

class ConvexSequence {
public:
    long getMinimum(vector<int> a);
};

long ConvexSequence::getMinimum(vector<int> a) {
    long ret;
    return ret;
}


int test0() {
    vector<int> a = {6, 5, 1, 5, 3, 3};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> a = {3, 0, 1, 4};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> a = {1, 1, 1, 0, 2, 2, 2};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> a = {854159326, 317144183, 781399725, 287076509, 894967145, 882577367, 174517516, 134415519, 274494874, 709819883, 59717133, 732212854, 40551288, 232526958, 811785438, 930853743, 946882902, 321325300, 397702677, 376192501, 599310562, 889156198, 135776890, 882710939, 823196361, 681959076, 318666702, 94469186, 536320456, 116468376, 530320850, 436708006, 903344748, 659080120, 774722507, 967315412, 566063635, 43970906, 497687103, 781266213, 876086123, 366960001, 587364849, 191948103, 172568553, 539762057, 83507466, 71569625, 686305822, 663789601};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 20178337330;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> a = {0, 4, 4, 4, 9, 9, 9};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> a = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> a = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> a = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000000};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> a = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000000, 0};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> a = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000000, 1000000000, 0};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> a = {0, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 0};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 48000000000;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> a = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 0};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 24000000234;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> a = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 999999999, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 47;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> a = {504635271, 355241311};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> a = {734511753, 741524518, 684926006, 258684254, 690034634, 394503095, 260560884, 218817126, 766986200, 94072616, 346656408, 805032105, 933424656, 860006718, 918830855, 802721560, 432069817, 755397189, 854969596, 104159696, 49842648, 749402073, 571206912, 45027840, 638969433, 797168553, 758952051, 61522678, 194273599, 296345274, 352219783, 422732111};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 11353415804;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> a = {411675432, 139421302, 606022962, 90641273, 407681520, 628980995, 919214993, 965235179, 947238572, 797517893, 589699255, 342295548, 700056717, 323320718, 412310706, 200895238, 56986863, 315599092, 899041327, 689761492, 294900757, 8037993, 818083372, 756019932, 450862944, 237103067, 733232056};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 10800209455;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> a = {550646820, 117164654, 602220271, 810104495, 78773727, 652395840, 823466747, 609365703, 619225757, 739033644, 405507720, 880317127, 112279524, 26062776, 744365857, 606951104, 773011263, 316828546, 210065622, 841270552, 667688232, 432955928, 550132071, 710471230, 991508689, 176855134, 395601569, 793313871, 655528968, 88398135};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 13646724256;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> a = {955509588, 451583919, 661251215, 354188024, 147545699, 956951939, 541218979};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1028879222;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> a = {950413038, 915954128, 978159648, 978072771, 920122698, 933949552, 995967239, 929556479, 994198136, 979772435, 946288780, 933044396, 926826917, 917692153, 948498657, 926830459, 910222900, 927989402, 946582278, 988225796, 934757455, 944420348, 979231161, 976893512, 977381962, 917338288, 967197553, 921885836, 939880353};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 938563799;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> a = {958362835, 942557847, 958021289, 993328950, 967418878, 949451185, 912238056, 957987127, 987492835, 969768633, 920988952, 962486112, 963002672, 901959536, 978153426, 942336085, 942146415, 936332153, 912212932, 913407388, 997031145, 968528188, 931109963, 990030444, 920328780, 932351369};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 877608624;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> a = {936800962, 967578398, 926819261, 981960283, 910695292, 958399801, 973062809, 935559805, 967956502, 900562353, 983842247, 921412219, 964001803, 906086718, 962318871, 993597584, 942619979, 949645980, 909875737, 973524210, 918008837, 948344689, 960990709, 928788586, 979116723, 936731899, 956360963, 991549708, 919618795, 900709219, 992012758, 996794777};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1295194317;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> a = {902501628, 903928472, 908899768, 959438706, 979636600, 914640061, 982076002, 922841429, 963728556, 996758987, 981211949, 974629652, 936500778, 932097795, 919678171, 947679152, 952478116, 924237334, 910333891, 947462386, 977644291, 963225896, 917629844, 936982364, 952608723, 987545265, 988823064, 987276554, 929359657, 939020762, 914557363, 938891288, 983376691, 918299771, 985143132, 960023704, 986193410, 907208372};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1650079727;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> a = {980078796, 970704930, 923451764, 912383459, 997127770, 930280574, 943051664, 939397657, 924138504};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 155753389;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> a = {99226232, 146125375, 218327351, 253155159, 282778456, 594083406, 740011638, 797526383, 827729872, 849460452, 876937478};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 954122773;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> a = {73598725, 88344264, 224749045, 239088615, 322106893, 362986270, 407984436, 409263828, 448875815, 577995848, 580343431, 598147894, 600959421, 724659993, 798415629, 817324347, 839733041, 879721241, 923771438};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 973050761;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> a = {104029046, 182307024, 188610869, 243290051, 261076406, 262271286, 278852628, 325752653, 373187573, 447828273, 553343794, 565525242, 614938967, 624551399, 711905493, 735148761, 746200696, 750191556, 764446655, 769135653, 803703687, 858029268, 957298907, 964610654, 977668988, 992465570};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1291161451;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> a = {10563835, 42250409, 87703183, 88641497, 116788149, 209535721, 218699421, 234915478, 240428934, 248133758, 336189417, 357749090, 377736905, 401341071, 448738711, 475341383, 484936116, 518531896, 534788269, 544230888, 553504435, 555887356, 595137466, 647102709, 734900835, 791969790, 815480682, 839902828, 854702561, 935539738, 941653742, 956838089};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1209023535;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> a = {145208320, 233173341, 252783028, 287981418, 303622455, 566150703, 661361082, 695780566, 883408045, 980973701};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 373831303;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> a = {23785122, 30367152, 230182052, 256365284, 270651936, 286880705, 287067984, 342423069, 461905080, 569567593, 570059043, 602985978, 613108545, 616686395, 697708852, 706859638, 707525356, 721893502, 749194290, 775999897, 820991663, 922665330, 925587192, 972735228, 993829817};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1939265409;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> a = {52885456, 84172016, 89877751, 94435995, 139084838, 148969962, 195379130, 202741644, 205275410, 307833799, 310657426, 315606925, 316461446, 319735085, 335678783, 337274551, 377881898, 387725144, 457042983, 460215560, 540454710, 544268405, 545799925, 573917539, 583181020, 633519224, 673302615, 689150827, 706137358, 744984292, 766549795, 771894162, 777819664, 788315644, 814509875, 880641311, 907205077, 915974780, 918591071, 931486192, 959837046, 972771294, 991506442};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1498769343;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> a = {19904775, 33169711, 82005557, 199938468, 215633456, 245708568, 248276882, 274947913, 310037298, 351081701, 410600080, 433487345, 443968561, 479524841, 575582648, 654449601, 675008990, 678597947, 685213982, 701049199, 729930800, 750154383, 755159100, 813063816, 857143120, 881201385, 978354543};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1295756580;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> a = {29078945, 57098969, 71404496, 157282970, 202955407, 364594526, 404450012, 405922332, 413714230, 417696073, 488648646, 491610723, 492040390, 652761917, 705600506, 709495142, 796324367, 817788467, 865338091, 946893448};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1106754394;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> a = {220277538, 302334240, 314042514, 375132478, 641669098};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 35174214;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> a = {29410847, 61037621, 70761350, 71963812, 114737972, 127136085, 166564682, 220106503, 246915439, 254529549, 325778940, 349755021, 409350531, 419748095, 534455420, 589518424, 598411251, 684831660, 698423388, 724779452, 736793270, 791996926, 804052968, 840885250, 861505748, 868504529, 931016444, 933008227};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1182436747;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> a = {7543552, 77272509, 112251117, 134888869, 159671644, 197112344, 202878917, 226179660, 293104284, 319667539, 320721786, 359069414, 369614373, 373879110, 399462318, 471389330, 479719326, 584105923, 586776832, 596391550, 604681560, 640536561, 672452274, 701933419, 729106084, 766979769, 770212048, 801526237, 828009581, 829198364, 845562576, 877100293, 889936770, 915996471, 931003960, 938487338, 940283750, 951529401, 996112658};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 2683850781;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> a = {137020166, 177986283, 323205796, 520185508, 625047323, 668400050, 881242931, 948221638, 972192782};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 515766056;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> a = {71688148, 94958810, 122300502, 136344160, 229541923, 246223645, 352129997, 357119036, 421332920, 491120730, 575409483, 609226939, 654107027, 726901503, 730970220, 817340883, 886023360, 898413921, 963320709, 977936223};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 611306435;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> a = {29719127, 39815422, 50738087, 53794452, 61045932, 67374610, 91380893, 121828095, 135154856, 157493371, 175431899, 199257045, 234155476, 261576549, 263149920, 315702200, 338388501, 403313414, 428153291, 438742894, 478953886, 545273909, 561951119, 566043627, 576877200, 608752101, 614754723, 673164033, 691232332, 701716548, 710928854, 790979060, 804953985, 818902731, 819697783, 858216952, 924602308, 967110333, 974801365};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 908992543;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> a = {66202018, 89324899, 117987641, 139584080, 151889501, 182034483, 206960080, 218948046, 293180636, 298916496, 308690725, 318303716, 320724140, 333321425, 357285820, 377684449, 419504408, 450142361, 459371042, 506998862, 520358847, 640930266, 721923936, 724384880, 747731937, 748270448, 773916226, 818520866, 824767881, 828061182, 855581640, 868293447, 870295846, 890518857, 894790662, 915136633, 934371576, 997448829};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1610126697;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> a = {7936298, 15951576, 32108144, 36966633, 37406734, 69762900, 207461333, 222936614, 227531372, 276155395, 293102780, 298010148, 319284774, 387430044, 411956242, 471051644, 472101117, 614164910, 619605918, 635768154, 672055944, 685421935, 762307857, 839603605, 844276811, 874398056, 904867647, 944297541, 988526031};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 836129635;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> a = {84593657, 98303663, 137528936, 154861352, 167778743, 179763293, 299580391, 338527753, 374375624, 378967736, 393382863, 409712119, 413083517, 443560821, 473596549, 521548253, 530427927, 538774859, 540383964, 556765209, 655952861, 674797265, 700257304, 745631891, 781211201, 802257774, 824224008, 846799831, 870218561, 948406600, 949182987, 978062548};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1284061273;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> a = {66090285, 74795494, 91913036, 129980833, 171832352, 283110139, 354227817, 416513721, 428859980, 460621044, 493908079, 543501576, 546011197, 641084397, 656751537, 680511948, 686839349, 687151282, 704694071, 720951922};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1382679693;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> a = {21340275, 53158019, 59768959, 78529154, 83045676, 100025092, 142789434, 167368937, 195273602, 195306909, 248730071, 254274631, 277240205, 343105787, 343643371, 350696137, 436138086, 457171179, 488409068, 540288966, 571460390, 575848442, 597176389, 611282678, 620984577, 625414267, 632844154, 710042975, 749244780, 768203853, 773767984, 793893629, 836402493, 840489226, 841683473, 872563498, 884399282, 888714927, 912991287, 960899062, 964396621, 992328742};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1537456122;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> a = {969651784, 911509122, 908739753, 878449111, 869606993, 831661368, 783648623, 774675541, 766142041, 764806869, 710911023, 690992239, 685245035, 667580999, 666682054, 665360520, 659676949, 638749184, 620158925, 599597912, 570152955, 566081629, 484688123, 411805282, 349849630, 349580184, 347510140, 343841262, 326709243, 323083104, 318329171, 296571287, 271013064, 257511510, 253927790, 250610006, 243188085, 223712709, 214265665, 206054022, 192914373, 101516139, 58649897, 42757951, 41793279, 29264513};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 2460587705;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> a = {820214145, 800599656, 595912923, 562738757, 478517411, 460216876, 382208886, 349720492, 321399691, 290585875, 220382157};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 205732935;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> a = {825335042, 231589116};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> a = {937683195, 737749056, 729302322, 695089573, 596847921, 581354959, 388473855, 289440197, 256133597, 159259483, 157470209, 73321610, 61176384};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 496058920;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> a = {746121915, 330796430, 279932811, 279747552, 151613250, 149384642, 126107952, 26424503};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 174725526;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> a = {935828343, 926701075, 836932675, 779334371, 771896283, 717274328, 651367257, 645518343, 604595244, 545415519, 480506585, 442376137, 321886068, 153449464, 118200901, 104270376, 15960659};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1241198216;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> a = {896719460, 896498693, 836968640, 787971802, 656465284, 584588137, 563362550, 420685261, 416612523, 367196572, 302798774, 201673997, 127056937, 98948137, 59516424, 57320403, 47178676};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 576072731;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> a = {963791772, 945356737, 928285375, 921882625, 914436143, 876166718, 807753724, 805740884, 785879210, 781773565, 770369369, 767555663, 749738274, 711342486, 706891447, 615759188, 609965018, 592196007, 575059277, 564361049, 434653005, 384535003, 322784211, 238862157, 218132849, 163862295, 53871883};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 3472546644;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> a = {916664803, 909658462, 478895979, 300561617, 246964099};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 211878071;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> a = {352967681, 197824951, 6063649};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 18309286;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> a = {915014741, 894099691, 828483752, 825757937, 816439593, 763675587, 646590792, 635309205, 566512717, 550122940, 513841575, 505255009, 492804076, 452510650, 366997571, 262655049, 259609169, 256682817, 251517254, 241533379, 231510287, 206287373, 164998356, 96450730, 85267107, 48537230, 31168193, 22275588, 12116101};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1064937771;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> a = {973056493, 942496483, 936102047, 926779185, 905831463, 863869740, 863225610, 800403127, 793574177, 782114410, 756193841, 748998325, 745488109, 681041421, 679689698, 657537329, 552184823, 547300770, 480089634, 437201688, 363265703, 277417636, 272039301, 264853100, 238861700, 204685026, 170611861, 67824066, 2155825};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 2794314028;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> a = {999555064, 961440379, 944625521, 924542426, 907650119, 856451333, 846434223, 835456555, 737526283, 714016721, 712577935, 698386651, 658544415, 652001907, 626806131, 624403609, 610066397, 605224347, 604850537, 591048114, 545605673, 537778625, 481219435, 478242254, 476185372, 472467130, 465619206, 456368257, 450493972, 415849089, 409998915, 407897570, 372665156, 352151905, 351385142, 338901367, 281531524, 273684313, 257188510, 252267667, 112463044, 109024945, 95580249, 93681815, 89296753, 61018537, 48959642, 37276661};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 2330817775;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> a = {913710957, 892092526, 889032106, 868550913, 867748872, 863752661, 837062737, 812332214, 807429494, 733317300, 727935781, 669229316, 607818282, 597842097, 575279103, 519126504, 501237853, 468026529, 441144775, 438207089, 364578709, 342255235, 322432018, 301839309, 300900678, 289234827, 239026701, 219267262, 210685202, 203307938, 201730945, 165006938, 94022258, 87767132, 54845295, 51717065, 48930895, 3541651};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1302390484;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> a = {913764061, 911354108, 899656090, 812384015, 595070523, 542310431, 459130793, 373391463, 359907765, 292157257, 182068635, 147552236, 100788626, 46633469};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 509365260;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> a = {931547787, 919926225, 886536759, 788042763, 763571024, 753693133, 732031043, 724627952, 710351358, 679536972, 678539395, 652349941, 631991754, 623823065, 591140945, 585221798, 518851367, 503494815, 469102298, 407877425, 404226365, 358824465, 331149043, 324081283, 314237295, 303168567, 299462301, 297801965, 286384552, 275435734, 267891684, 262192188, 248572990, 246123007, 241803814, 200252897, 179529510, 178112450, 169655291, 163411231, 135769553, 99500649, 81778480, 36883999, 8230347};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1856001899;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> a = {881737148, 803626801, 586963197, 506525252, 445742784, 432618806, 367790307, 358417021, 318612795, 286561432, 194984327, 82299154};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 444135509;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> a = {974512519, 913860425, 911423780, 850254343, 681000931, 507092340, 475301753, 469239172, 449711197, 381593589, 344926211, 333521896, 261930675, 239238011, 216092917, 147361458, 96493808};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 694315914;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> a = {977773083, 914890791, 886828031, 869990896, 840609500, 838564855, 823240206, 774798809, 771387264, 768254400, 762870399, 730702258, 704517648, 697482935, 578925730, 572875271, 530000408, 528689262, 413144454, 403916568, 329922428, 129462142, 107061148, 64781481, 46577601, 37686762, 25561676};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 2916924969;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> a = {993437429, 970094392, 963899797, 935254268, 922431896, 891915163, 884742144, 858692049, 850601304, 772381625, 741994881, 737309304, 733900102, 716341488, 703053496, 640238632, 634366707, 631417838, 624681256, 603715507, 600323881, 568808201, 565677621, 535280059, 519330777, 445565371, 423549791, 270480585, 264852141, 234828979, 232899714, 193867745, 172674353, 170790157, 150953386, 114300733, 71685154};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 2211137715;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> a = {4950, 4800, 4747, 4356, 4040, 3762, 3737, 3663, 3600, 3465, 3465, 3366, 3232, 3168, 3131, 3131, 2700, 2574, 2200, 1919, 1881, 1881, 1700, 1616, 1600, 1515, 1515, 1500, 1500, 1300, 1287, 1000, 900, 792, 707, 700, 297, 198, 99, 0};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 8817;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> a = {4949, 4752, 4545, 4455, 4356, 4059, 4000, 3663, 3600, 3535, 3465, 2800, 2772, 2700, 2673, 2626, 2424, 2400, 2376, 2323, 2323, 1980, 1919, 1900, 1900, 1818, 1717, 1700, 1414, 1287, 1000, 900, 600, 505, 495, 200, 198, 100};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 9126;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> a = {4554, 4400, 4158, 3939, 2871, 2828, 2800, 2727, 2574, 2500, 2424, 1717, 1100, 200};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 7754;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> a = {5050, 4646, 3939, 3800, 2828, 2828, 2475, 1089, 800, 300, 200};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 2208;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> a = {4700, 4400, 4400, 4300, 4257, 4242, 4100, 3861, 3737, 3636, 3100, 2900, 2673, 1919, 1919, 1900, 1616, 1188, 1089, 707, 693, 396, 396, 303};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 7801;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> a = {4949, 4851, 4747, 4300, 3861, 3838, 3400, 3300, 3200, 3168, 3100, 2970, 2871, 2828, 2772, 2100, 2079, 2000, 2000, 1584, 1400, 1300, 1188, 1111, 1089, 700, 700, 594, 505, 495, 495, 300, 200, 101, 99};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 4750;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> a = {5000, 5000, 5000, 4950, 4900, 4848, 4752, 4653, 4545, 4500, 4444, 4257, 4158, 4158, 4100, 4040, 3900, 3838, 3737, 3564, 3564, 3434, 3333, 3232, 3200, 3200, 3168, 3000, 2970, 2900, 2525, 2500, 2475, 2400, 2277, 2178, 1818, 1515, 1313, 1212, 1188, 891, 808, 500, 101, 0};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 29491;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> a = {4950, 4752, 4646, 4554, 4500, 4444, 4400, 4343, 4200, 4200, 4158, 3762, 3663, 3600, 3333, 3267, 3168, 3030, 2424, 2200, 1818, 1800, 1700, 1400, 1212, 404, 396, 303, 100};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 16764;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> a = {4950, 4848, 4700, 4646, 4300, 4242, 4141, 4000, 3663, 3434, 3366, 3200, 3168, 3131, 3000, 2970, 2828, 2772, 2727, 2626, 2525, 2121, 2079, 2079, 1515, 1485, 1386, 1300, 693, 594};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 8184;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> a = {5050, 5000, 4800, 4752, 4700, 4653, 4545, 4400, 4158, 4100, 3762, 3636, 3600, 3232, 3100, 3069, 2929, 2900, 2828, 2323, 1515, 1400, 1287, 1111, 594, 594, 495, 303, 0};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 13461;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> a = {5000, 4950, 4554, 4242, 3838, 3700, 3333, 3300, 2574, 1683, 808, 400, 297};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 6046;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> a = {4851, 4848, 4700, 4257, 4059, 4059, 4040, 3800, 3600, 3535, 3400, 3333, 3200, 3100, 3030, 2970, 2900, 2871, 2871, 2800, 2475, 2300, 2200, 2000, 1980, 1900, 1717, 1717, 1616, 1616, 1616, 1485, 1313, 1000, 900, 606, 600, 404, 200, 99, 0, 0};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 7307;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> a = {4900, 4646, 4141, 4000, 3861, 3762, 3737, 3600, 3333, 3131, 2900, 2871, 2800, 2772, 2727, 2727, 2700, 2500, 2300, 2200, 2020, 1717, 1700, 1700, 1485, 1386, 1200, 990, 909, 707, 707, 505, 505, 505, 495, 396, 200, 101, 99, 0, 0};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 5935;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> a = {3800, 2600};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> a = {4851, 4257, 4059, 3737, 3564, 3400, 3267, 3131, 3000, 3000, 2323, 2020, 1980, 1919, 1313, 297, 101};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 7124;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> a = {4747, 4700, 4646, 4554, 3737, 3600, 3500, 3400, 2400, 2200, 1800, 1683};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 3286;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> a = {4900, 4900, 4554, 4400, 4158, 4000, 3939, 3939, 3939, 3762, 3737, 3700, 3636, 3030, 2871, 2727, 2600, 2574, 2400, 2020, 1919, 1818, 1717, 1414, 1111, 1089, 1010, 990, 990, 909, 792, 700, 600, 594, 404, 300};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 7056;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> a = {4950, 4949, 4848, 4752, 4653, 4653, 4600, 4545, 4444, 4400, 4356, 4242, 4200, 4141, 4040, 4000, 4000, 3960, 3861, 3800, 3663, 3000, 3000, 2929, 2929, 2828, 2600, 2200, 2000, 2000, 1881, 1800, 1600, 1500, 1212, 1188, 1111, 1010, 990, 808, 808, 693, 600, 505, 303, 303, 297, 202, 202};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 15729;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> a = {4752, 4646, 4545, 4500, 4455, 4300, 4158, 4158, 3861, 3737, 3663, 3600, 3564, 3500, 3300, 3100, 3000, 2772, 2673, 2574, 2400, 2400, 2323, 2277, 2222, 2121, 1782, 1616, 1485, 1414, 1300, 1287, 1212, 990, 693, 404, 101, 0};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 11206;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> a = {4949, 4900, 4600, 4545, 4141, 4100, 4100, 4059, 4000, 3838, 3762, 3600, 3465, 3465, 3434, 3267, 3168, 3030, 3030, 3000, 2828, 2525, 2525, 2475, 2424, 2323, 2323, 2121, 2100, 1616, 1515, 1386, 1300, 1287, 1287, 1100, 1010, 800, 707, 693, 505, 505, 404, 400, 297, 198, 100, 99, 0};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 7634;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> a = {0, 0, 0, 100, 101, 202, 300, 400, 404, 495, 505, 707, 800, 1313, 1414, 1500, 1919, 1980, 2121, 2222, 2376, 2500, 2600, 2600, 2828, 2828, 2900, 2929, 3267, 3838, 3939, 4059, 4100, 4100, 4257, 4300, 4343, 4356, 4400, 4455, 4747, 4800};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 11585;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> a = {100, 2000, 3232, 4554, 4949};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 2214;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> a = {0, 0, 100, 297, 300, 404, 594, 606, 792, 891, 900, 990, 1100, 1212, 1500, 1500, 1584, 1600, 1683, 1980, 2300, 2400, 2400, 2424, 2574, 2727, 2727, 3030, 3168, 3465, 3465, 3500, 3700, 3861, 3939, 4059, 4141, 4200, 4257, 4343, 4356, 4400, 4500, 4500, 4545, 4747, 4848, 5000};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 9547;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> a = {100, 495, 606, 707, 909, 990, 1500, 1584, 1683, 1700, 1818, 1919, 2020, 2222, 2772, 2900, 3267, 3636, 3737, 3939, 4100, 4158, 4400, 4500, 4545, 4554};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 6989;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> a = {200, 303, 404, 808, 1111, 1287, 1287, 1386, 1485, 1584, 1800, 1818, 2020, 2200, 2222, 2376, 2400, 2500, 2600, 3000, 3267, 3535, 4242, 4554, 4554, 4600, 4851, 4949, 4949};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 7365;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> a = {0, 396, 505, 505, 594, 606, 808, 891, 1089, 1212, 1287, 1386, 1900, 2000, 2079, 2200, 2525, 2574, 2673, 2772, 2871, 2970, 3069, 3069, 3168, 3200, 3366, 3366, 3465, 3600, 3663, 4141, 4343, 4500, 4500};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 7906;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> a = {0, 0, 101, 101, 198, 198, 303, 693, 891, 909, 909, 1100, 1414, 1515, 1584, 2200, 2222, 2323, 2600, 2727, 3000, 3131, 3400, 3465, 3636, 4059, 4444, 4500, 4848, 4851, 4851};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 4236;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> a = {101, 404, 693, 707, 1010, 1111, 1683, 1700, 1818, 1881, 2020, 2300, 2626, 2800, 3400, 3400, 3838, 4000, 4040, 4242, 4444, 4455, 5050};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 4196;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> a = {0, 202, 202, 303, 404, 505, 693, 707, 707, 1010, 1188, 1300, 1313, 1616, 1683, 1900, 2020, 2200, 2277, 2300, 2376, 2424, 2673, 2673, 2800, 2828, 2929, 2970, 3100, 3168, 3500, 3900, 4100, 4455, 4851, 4851, 4900, 5050};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 7213;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> a = {100, 300, 303, 693, 792, 1300, 1683, 1782, 1818, 1980, 2178, 2323, 2424, 2500, 2574, 2700, 2929, 2929, 3200, 3838, 4040, 4200, 4356, 4444, 4600, 4600, 4646};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 8143;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> a = {99, 1616, 1818, 3069, 3200, 4752};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1556;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> a = {99, 99, 100, 100, 594, 600, 707, 900, 990, 1300, 1386, 1515, 1584, 1600, 1683, 1717, 1980, 2020, 2121, 2222, 2300, 2323, 2376, 2400, 2727, 3069, 3100, 3100, 3663, 3700, 3800, 3861, 3939, 4158};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 7833;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> a = {200, 594, 693, 1010, 1111, 1500, 1683, 1700, 2121, 2376, 2500, 3000, 3267, 3366, 3366, 3762, 4158, 4158, 4257, 4257, 4356, 4646, 4848, 4848};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 7222;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> a = {100, 202, 297, 303, 396, 500, 900, 1111, 1414, 1584, 1616, 1782, 1782, 1818, 2000, 2020, 2100, 2200, 2277, 2323, 2800, 2871, 3465, 3500, 3600, 4158, 4158, 4200, 4200, 4300, 4343, 4400, 4455, 4545, 4554, 4747, 4800};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 11710;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> a = {100, 101, 1100, 1188, 1584, 1600, 1919, 1980, 2222, 2376, 2424, 2525, 2871, 3069, 3100, 3366, 3535, 3960, 4100, 4900, 4950};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 6397;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> a = {1000, 1188, 1818, 2376, 2424, 4800};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 582;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> a = {101, 303, 404, 505, 891, 1010, 1089, 1111, 1111, 1485, 1881, 2121, 2277, 2772, 2929, 3300, 3838, 4343, 4545, 4545};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 2745;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> a = {0, 198, 200, 202, 594, 600, 693, 693, 700, 700, 1010, 1300, 1313, 1485, 1485, 1485, 1600, 1782, 1818, 2000, 2100, 2178, 2277, 2323, 2626, 2727, 2828, 2929, 3000, 3030, 3535, 3564, 3737, 3838, 3900, 4059, 4100, 4141, 4141, 4400, 4444, 4545, 4554, 4600, 4646, 4646, 4747};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 11483;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> a = {303, 495, 1287, 1287, 1600, 2121, 2525, 2800, 2970, 3200, 3232, 3465, 3663, 4059};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 3697;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> a = {200, 1000, 1000, 1414, 2475, 2500, 3564, 3800, 3900, 4040};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 3008;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> a = {1, 2, 2, 4, 6, 7, 8, 9, 12, 13, 16, 19, 19, 23, 23, 24, 26, 28, 30, 32, 33, 34, 38, 39, 40, 41, 41, 42, 43, 44, 44, 45, 46, 47, 47, 48};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 254;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> a = {1, 1, 7, 8, 9, 9, 13, 14, 17, 17, 17, 19, 19, 19, 21, 23, 24, 26, 26, 28, 28, 29, 30, 31, 32, 32, 33, 33, 34, 35, 36, 36, 37, 39, 39, 40, 43, 43, 43, 44, 46, 50};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 239;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> a = {3, 3, 6, 10, 10, 12, 15, 18, 24, 29, 31, 32, 33, 34, 37, 37, 46, 47, 49, 49};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 68;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> a = {9, 10, 11, 14, 15, 16, 37};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> a = {1, 3, 6, 10, 12, 12, 15, 17, 18, 20, 21, 21, 22, 24, 29, 33, 37, 39, 48, 49, 50};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 60;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> a = {1, 3, 9, 13, 14, 18, 19, 22, 24, 24, 25, 25, 27, 28, 28, 28, 36, 42};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 95;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> a = {1, 2, 5, 8, 10, 12, 13, 13, 18, 19, 19, 20, 21, 23, 23, 24, 27, 28, 30, 32, 39, 39, 40, 41, 41, 41, 42, 42, 43, 45, 48, 49};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 177;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> a = {3, 6, 8, 8, 8, 10, 12, 12, 18, 19, 22, 23, 24, 25, 27, 29, 30, 32, 35, 41, 41, 42, 49, 50};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 42;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> a = {1, 4, 4, 5, 6, 9, 11, 14, 16, 22, 26, 27, 29, 35, 37, 39, 41, 41, 47};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 46;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> a = {1, 3, 6, 8, 8, 14, 16, 16, 17, 18, 23, 23, 25, 26, 27, 29, 32, 32, 33, 34, 35, 38, 40, 46, 47};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 94;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> a = {900000007, 450000068, 450000027, 450000028, 450000035, 450000023, 450000034, 900000061, 900000100, 900000003, 900000023, 900000064, 31, 900000020, 450000082, 450000031, 450000077, 900000029, 450000059, 450000047, 900000025, 6, 900000018, 450000073, 25, 73, 900000043};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 10800000205;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> a = {450000036, 900000057, 66, 32, 450000049};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 675000006;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> a = {450000096, 98, 28, 38, 900000092, 450000032, 900000036, 89, 11, 450000041, 36, 450000047, 450000019, 900000081, 900000075, 35, 54, 450000082, 450000017, 450000061, 7, 99, 450000078};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 6750000657;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> a = {72};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> a = {6, 450000014, 900000051, 450000039, 12, 900000060, 900000042, 450000098, 17, 450000070, 450000002, 450000000, 900000040, 60, 13, 900000046, 450000070, 900000087, 450000001, 900000088, 450000073, 900000039, 450000014, 450000001, 80, 900000072, 450000084, 450000091, 900000021, 900000077, 900000077, 450000008, 450000027, 900000097, 900000059, 33, 67, 900000049, 53, 900000093, 900000091, 450000043, 900000065, 7, 450000088, 900000082};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 23400001916;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> a = {450000066, 900000037, 900000094, 450000026, 54, 450000047, 20, 450000059, 450000096, 900000034, 93, 36, 7, 96, 900000013, 73, 27};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 4725000371;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> a = {42, 900000008, 450000023, 52, 900000070, 450000031, 900000054, 17, 900000098, 900000027, 5, 450000032, 56, 900000070, 450000066, 900000077, 62, 900000008, 450000052, 900000095, 31, 31, 77, 24, 900000058, 450000089, 900000038, 900000091, 75, 450000067, 900000065, 69, 900000039, 10, 13, 900000061, 47, 900000012, 900000059, 450000059};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 18000001327;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> a = {10, 46, 6, 900000081, 900000064, 900000095, 900000076, 900000032, 71, 900000045, 450000043, 43, 900000064, 44, 450000067, 87, 450000017, 900000028, 86, 450000064, 450000033, 450000086, 900000027, 450000081, 900000013, 450000053, 450000002, 450000030, 450000098, 69, 74, 450000007, 450000054, 42, 450000039, 900000024, 450000041, 900000086, 32, 450000006, 100, 450000059, 900000096, 900000051, 450000061, 900000093};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 19575001275;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> a = {450000088, 1, 25, 450000015, 53, 38, 450000054, 450000025, 21, 450000063, 450000018, 900000031, 900000098, 450000003, 450000060, 53, 98, 450000040, 77, 900000020};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 5400000212;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> a = {94, 900000026, 450000088, 900000021, 900000033, 19, 900000065, 900000011, 80, 450000014, 450000098, 450000055, 900000046, 900000013, 85, 450000045, 37, 450000090, 900000071, 900000019};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 9000000293;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> a = {1, 31, 45, 50, 59, 60, 66, 97, 450000022, 450000070, 450000081, 450000083, 450000084, 900000000, 900000010, 900000014, 900000015, 900000037, 900000038, 900000043, 900000049, 900000074, 900000100};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 4049999339;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> a = {72, 900000072};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> a = {11, 21, 24, 32, 41, 61, 81, 91, 98, 450000015, 450000020, 450000030, 450000041, 450000043, 450000051, 450000057, 450000059, 450000061, 450000065, 450000073, 450000073, 450000076, 450000076, 450000082, 450000089, 450000095, 450000097, 900000009, 900000023, 900000032, 900000034, 900000043, 900000051, 900000057, 900000060, 900000061, 900000075, 900000075, 900000091};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 6299998891;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> a = {4, 31, 54, 450000015, 450000017, 450000025, 450000047, 900000005, 900000015, 900000026, 900000060};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1349999796;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> a = {6, 9, 17, 31, 52, 71, 88, 89, 96, 450000001, 450000001, 450000002, 450000011, 450000019, 450000047, 450000051, 450000059, 450000065, 450000073, 450000077, 450000082, 450000093, 900000012, 900000015, 900000034, 900000047, 900000052, 900000067, 900000068, 900000075, 900000077, 900000081, 900000084, 900000094};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 5174999014;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> a = {7, 7, 8, 10, 13, 14, 25, 33, 46, 47, 58, 59, 61, 77, 450000010, 450000012, 450000021, 450000022, 450000035, 450000057, 450000064, 450000069, 450000077, 450000086, 450000088, 900000007, 900000010, 900000012, 900000015, 900000015, 900000036, 900000040, 900000050, 900000057, 900000061, 900000069, 900000077, 900000078, 900000085, 900000089, 900000095};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 6749999055;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> a = {1, 6, 16, 28, 36, 44, 66, 73, 74, 84, 88, 90, 450000000, 450000006, 450000012, 450000015, 450000035, 450000040, 450000047, 450000054, 450000067, 450000071, 450000072, 450000076, 450000082, 450000083, 450000086, 450000088, 450000100, 900000004, 900000009, 900000011, 900000020, 900000028, 900000042, 900000051, 900000055, 900000056, 900000061, 900000073, 900000077, 900000079, 900000090, 900000091};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 6749998770;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> a = {24, 28, 36, 47, 73, 450000008, 450000009, 450000010, 450000014, 450000015, 450000025, 450000027, 450000032, 450000036, 450000047, 450000057, 450000058, 450000069, 450000077, 450000077, 450000078, 450000079, 900000001, 900000003, 900000005, 900000013, 900000027, 900000032, 900000049, 900000050, 900000064, 900000079, 900000084, 900000084, 900000093, 900000096, 900000100};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 6749998912;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> a = {0, 35, 36, 51, 58, 60, 65, 78, 100, 450000002, 450000011, 450000013, 450000014, 450000020, 450000030, 450000043, 450000059, 450000087, 450000094, 450000094, 450000095, 450000097, 450000098, 450000099, 450000100, 900000009, 900000020, 900000038, 900000039, 900000041, 900000044, 900000049, 900000061, 900000072, 900000075, 900000078, 900000088};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 5849998928;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> a = {12, 12, 13, 21, 38, 80, 450000065, 450000065, 450000086, 900000024, 900000033, 900000052, 900000084, 900000084};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1799999843;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> a = {80, 47, 24};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> a = {900000098, 900000096, 900000088, 900000085, 900000085, 900000081, 900000077, 900000060, 900000051, 900000048, 900000026, 900000006, 450000096, 450000086, 450000082, 450000079, 450000051, 450000021, 450000018, 450000012, 94, 94, 92, 79, 69, 33, 9};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 4949999468;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> a = {900000082, 900000052, 900000050, 900000048, 900000048, 900000026, 900000015, 450000095, 450000089, 450000065, 450000037, 450000034, 450000024, 450000019, 450000016, 84, 67, 61, 59, 57, 51, 4};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 2924999468;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> a = {900000095, 900000090, 900000084, 900000083, 900000082, 900000076, 900000062, 900000052, 900000051, 900000039, 900000037, 900000035, 900000031, 900000021, 900000021, 450000086, 450000084, 450000066, 450000062, 450000058, 450000055, 450000049, 450000041, 450000038, 450000011, 450000007, 95, 93, 84, 72, 70, 69, 67, 63, 59, 51, 36, 26, 9};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 6299999154;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> a = {900000078, 900000078, 900000070, 900000054, 900000050, 900000015, 450000089, 450000085, 450000080, 450000074, 450000071, 450000067, 450000063, 450000063, 450000062, 450000061, 450000049, 450000034, 450000032, 450000031, 450000018, 450000013, 450000008, 450000002, 99, 92, 89, 79, 77, 68, 66, 64, 29, 19, 8};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 4949999213;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> a = {900000094, 900000035, 900000034, 900000012, 900000002, 900000002, 450000099, 450000095, 450000093, 450000092, 450000088, 450000083, 450000083, 450000081, 450000066, 450000064, 450000055, 450000038, 450000035, 450000013, 450000009, 450000001, 81, 79, 69, 67, 55, 30, 29, 19, 19, 11};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 4499999224;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> a = {900000063, 900000059, 900000049, 900000048, 900000038, 900000036, 900000030, 900000026, 900000025, 900000015, 900000015, 900000007, 450000091, 450000087, 450000062, 450000055, 450000046, 450000028, 450000028, 450000021, 450000015, 80, 77, 34, 31, 30};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 4949999381;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> a = {900000088, 900000088, 900000077, 900000067, 900000053, 900000039, 900000038, 900000028, 900000026, 900000017, 900000017, 900000013, 900000012, 450000095, 450000057, 450000053, 450000042, 450000009, 450000002, 82, 52, 47, 38, 34, 29, 19, 14, 12, 12, 0};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 5399999265;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> a = {900000081, 900000069, 900000038, 900000030, 900000029, 450000087, 450000073, 450000063, 450000027, 450000022, 450000022, 450000010, 450000008, 94, 73, 33, 27, 18, 14, 12, 10};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 2474999439;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> a = {900000094, 900000090, 900000082, 900000077, 900000065, 900000049, 900000039, 450000086, 450000079, 450000071, 450000065, 450000064, 450000062, 450000024, 450000012, 100, 77, 59, 56, 52};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 2924999601;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> a = {48700039, 189915098, 389600050, 183296679, 91935056};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 551859186;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> a = {334490080, 318288744, 192285080, 411125070, 26025086, 243815085, 375485038, 68823854, 164465011, 16960075, 293495093, 33965030, 118305040, 299289933, 24260072, 395719179, 46064241, 404510926, 143845063, 210995098, 462615089, 97715050, 113020097, 71965022, 232880030, 130630100, 59880052, 292133497, 67723608, 488027682, 225675068, 375765154, 17890063, 379445919, 13007662, 264105003, 86545007, 337842632, 395079013, 382866645, 350660010, 166315063, 406136259, 60707153, 330170026, 191600037, 307040011, 240733141};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 8245088170;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> a = {107876636, 258191675, 463602719, 472004385, 320699134, 492143416, 193518780, 425255027};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1253152793;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> a = {324555021, 48210035, 186067225, 246025031, 322054439, 30071031, 420224071, 439705095, 440488109, 218580093, 61852380, 489530097, 276795433, 424235088, 270964244, 281155056, 340453135, 169630013, 260072075};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 3360561523;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> a = {498684817, 55426100, 328960042, 468398695, 460502120, 325140042};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 687011646;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> a = {107091497, 169985015, 217485031, 219508985, 201840040, 152195005, 199990090, 314465026, 413967790, 361762369, 296820070, 112745061, 247959630, 455596142, 412025080, 245809176, 174990066};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 2234756419;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> a = {229535061, 424680068, 136947454, 288872804, 37517549, 200685185, 286550009, 103750807, 345895015, 99210069, 123279744, 192635018, 428920016, 368190019, 137825053, 302910002, 320245029, 248824791, 386042193, 49064892, 490520100, 180056056, 184110092, 36357363, 242210057, 127085426};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 4394250000;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> a = {18175091, 159876984, 434585042, 353090043, 417208513, 74900067, 48059651, 435065041, 240158064, 185572118, 141023232, 276520326, 443748775, 94183843, 14728008, 289485057, 195605040, 354360002, 290598117, 278100082, 366178275, 351650334, 412317451, 331341300, 387445047, 13652830, 258156628, 233960056, 370179035, 276435375, 254990010, 427325075, 159400037, 116848456, 102255047, 334910090, 268750000, 72569513, 135122030};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 8534285042;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> a = {152815609, 142340098, 429730042, 335875092, 387972645, 242783581, 429585089, 447535000, 110972278, 101280290, 275875030, 197965075, 260557120, 48600036, 119689013, 479150065, 149559906, 418795004, 194640098, 62767644, 116918395, 160792205, 84651988, 300260096, 378010635, 80970002, 152675553, 245719187, 62815028, 482116416, 126755359, 183260100};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 4721986094;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> a = {437007397, 190120076, 55300056, 301670085, 61037269, 76165233, 23059673, 116395057, 148079661, 297880034, 216633352, 296504313, 173710038, 468455052, 184555067, 407596536, 185955059, 114200031, 325775187, 90345047, 210192039, 330871173, 454905037, 94425076, 274219855, 219825044, 45119096, 241953385, 490438097, 101835400, 78370094, 31046216, 472994586, 347185053, 113865054, 202620094, 422069491, 306295088, 456445037, 234366867, 282360041, 494198866};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 6632829740;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> a = {5};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> a = {429611683, 52252704, 96858989, 166280803, 187733375, 389385981, 463046239, 271687133, 315515607, 334573373, 412492836, 179677959, 195124180, 228992228, 129201987, 249259589, 300836688, 108272543, 176958283, 329622267, 348514348, 250731185, 380588772, 138839020, 381668490, 167137385, 363033048, 401871125, 456260667, 60342735, 54181858, 447792106, 113631540, 227173996, 30411111, 317957933, 314151579, 217092925, 311720865, 279074454, 392476302, 167519967, 269409935, 95122407, 11089468};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 9392038429;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> a = {380364608, 509496039, 176360856, 395855998, 25888171, 166418297, 362446479, 235816702, 491548447, 225360885, 114150795, 47950041, 170644626, 133457562, 84654671, 328847042, 505505029, 87588082, 131326511, 87191563, 379814274, 197332126, 190994016, 467420412, 47154705, 128456529, 109494373, 274778253, 395792854, 388482523, 74923549, 343848783, 210362986, 338999222, 93366911, 337258866, 467720544, 216401675, 145208373, 231790954, 359844300, 390541541, 177459501, 478906095, 29953047, 193222923, 32462536, 188312900, 35010980, 4738871};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 9950292601;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> a = {11046917, 105952251, 87489988, 174196467, 93805441, 148982428, 241700508, 311563408, 235857568, 180277926, 167825581, 152464991, 142880115, 199077171, 168707055, 319641718, 223837777, 188512886, 190127639, 15767552, 11282219, 254162360, 138864881, 265321455, 247142186, 115813366, 96552169, 100000808, 14002015, 230232219, 230963719, 35710384, 86351216, 287635735, 266186752, 110535392, 92073797, 124692002, 202673305, 112908950, 328193389, 211115861, 183200879, 143456222, 146384878, 292206040, 306406237, 17395394, 292424634, 339022};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 8019294697;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> a = {1361955, 207579012, 628145516, 376140462, 883515280, 186969585, 762888635, 326402539, 98152102, 158176572, 61402892, 127860889, 9580638, 570870044, 646139319, 178509022, 484027666, 61263304, 841082555, 558212774, 940563715, 26389629, 579113528, 496147999, 925801172, 837151740, 70301173, 656585275, 285845005, 902071050, 403573723, 727123762, 9467290, 296231662, 631265400, 899374333, 520690249, 798571510, 491747709, 799313372, 643215695, 789204466, 614608448, 162733264, 456517316, 555253431, 806956091, 181457954, 528156706, 751354013};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 21040690366;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> a = {1, 1, 1, 0, 2, 2, 2};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> a = {240161884, 223346407, 206530931, 189715455, 172899979, 156084503, 139269027, 122453551, 105638075, 88822599, 72007123, 55191647, 256539289, 457886932, 588887396, 719887861, 850888326, 981888791, 847675519, 713462248, 651607690, 589753132, 527898574, 403734060, 279569546, 274449079, 269328612, 264208145, 259087678, 253967211, 248846744, 243726277, 238605810, 233485343, 228364876, 223244409, 218123942, 213003475, 207883008, 202762541, 197642074, 192521607, 187401140, 182280673, 177160206, 172039739, 499034107, 826028476, 466038118, 106047761};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 11365983726;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> a = {772661395, 705084821, 888450278, 414333100};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 406540604;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> a = {1, 5, 4};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> a = {194651380, 27581100, 37476435, 233093616, 774641266, 273261369, 971074917, 866999265, 246716319, 975586225, 363233711, 72001065, 25574493, 527060239, 804256114, 364453817, 515343111, 842621173, 971657600, 968231217, 804419916, 798874770, 378310174, 307099796, 29611553, 350416321, 556989186, 509277978, 213554715, 944851678, 278764980, 108781125, 536632373, 866919120, 825533767, 27567282, 943073614, 182153109, 41083222, 353162890, 700652490, 21819213, 870440562, 388360987, 34377764, 53389384, 363851405, 942749646, 236791667, 114615237};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 21137548456;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> a = {1, 1000000, 1};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 999999;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> a = {854159326, 317144183, 781399725, 287076509, 894967145, 882577367, 174517516, 134415519, 274494874, 709819883, 59717133, 732212854, 40551288, 232526958, 811785438, 930853743, 946882902, 321325300, 397702677, 376192501, 599310562, 889156198, 135776890, 882710939, 823196361, 681959076, 318666702, 94469186, 536320456, 116468376, 530320850, 436708006, 903344748, 659080120, 774722507, 967315412, 566063635, 43970906, 497687103, 781266213, 876086123, 366960001, 587364849, 191948103, 172568553, 539762057, 83507466, 71569625, 686305822, 663789601};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 20178337330;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> a = {1, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 24000000198;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> a = {100644807, 208824616, 965402955, 450617412, 681295279, 67915640, 684078665, 773498128, 670693140, 21122360};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 4015257177;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> a = {9, 8, 7, 6, 6, 4};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> a = {239313357, 440048504, 588558884, 338663599, 408456151, 396655486, 2788683, 22944598, 467861995, 345837908, 44234513, 382369865, 46930527, 160493858, 271817716, 279621058, 527049522, 442974087, 847227192, 816031730, 467297001, 873039797, 927727688, 500698241, 118364707, 911064484, 831614069, 82306379, 582624695, 272124758, 242280810, 406974616, 491348526, 257352374, 401183052, 258958824, 443965436, 569416650, 804553674, 779313232, 995036094, 886411574, 716422494, 624342624, 951791508, 110484543, 82622902, 394149547, 367668179, 353784150};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 19389104910;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> a = {854159326, 317144183, 781399725, 287076509, 894967145, 882577367, 174517516, 134415519, 274494874, 709819883, 59717133, 0, 40551288, 232526958, 811785438, 930853743, 946882902, 321325300, 397702677, 376192501, 599310562, 889156198, 135776890, 882710939, 823196361, 681959076, 318666702, 94469186, 536320456, 0, 530320850, 436708006, 903344748, 659080120, 774722507, 967315412, 566063635, 43970906, 497687103, 781266213, 876086123, 366960001, 587364849, 191948103, 172568553, 539762057, 83507466, 71569625, 686305822, 663789601};
    ConvexSequence* pObj = new ConvexSequence();
    clock_t start = clock();
    long result = pObj->getMinimum(a);
    clock_t end = clock();
    delete pObj;
    long expected = 20480185116;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15868491&rd=14543&pm=11474
********************************************************************************
/* Template */
 
#include <ctime>
#include <cmath>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
 
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <functional>
#include <map>
#include <set>
#include <fstream>
#include <queue>
 
using namespace std;
 
#ifdef _WIN32
#  define I64 "%I64d"
#else
#  define I64 "%Ld"
#endif
 
#define forn(i, n) for (int i = 0; i < (int)(n); i++)
#define fornd(i, n) for (int i = (int)(n) - 1; i >= 0; i--)
#define forab(i, a, b) for (int i = (int)(a); i <= (int)(b); i++)
#define forabd(i, a, b) for (int i = (int)(b); i >= (int)(a); i--)
#define forit(i, a) for (__typeof((a).begin()) i = (a).begin(); i != (a).end(); i++)
#define sz(a) (int)(a).size()
#define all(a) (a).begin(), (a).end()
#define zero(a) memset(a, 0, sizeof(a))
#define fill(a, x) memset(a, x, sizeof(a))
#define pb push_back
#define mp make_pair
 
#define EOL(i, n) " \n"[i == (n) - 1]
#define LEN(a) (int)(sizeof(a) / sizeof(a[0]))
#define IS(a, i) (((a) >> (i)) & 1)
#define LAST(a) a[sz(a) - 1]
 
typedef double dbl;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
typedef unsigned char byte;
 
template <class T> T inline sqr(T x) { return x * x; }
template <class T> inline void relaxMin( T &a, T b ) { a = min(a, b); }
template <class T> inline void relaxMax( T &a, T b ) { a = max(a, b); }
 
string str( int i ) { char s[100]; sprintf(s, "%d", i); return string(s); }
 
template <class T> inline T sign( T x ) { return x > 0 ? 1 : (x < 0 ? -1 : 0); }
template <class T> inline T myAbs( T a ) { return a > 0 ? a : -a; }
 
class ConvexSequence {
public:
  long long getMinimum(vector <int>);
};
 
long long ConvexSequence::getMinimum(vector <int> a)
{
  int n = sz(a);
  ll ans = 0;
  while (1)
  {
    int f = 0;
    forab(i, 1, n - 2)
      if (a[i - 1] + a[i + 1] < 2 * a[i])
      {
        int y = (a[i - 1] + a[i + 1]) / 2;
        ans += a[i] - y;
        a[i] = y;
        f = 1;
      }
    if (!f)
      break;
  }
  return ans;
}

********************************************************************************
*******************************************************************************/