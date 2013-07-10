/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12387
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

class EasyHomework {
public:
    string determineSign(vector<int> A);
};

string EasyHomework::determineSign(vector<int> A) {
    string ret;
    return ret;
}


int test0() {
    vector<int> A = {5, 7, 2};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> A = {-5, 7, 2};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "NEGATIVE";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> A = {5, 7, 2, 0};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> A = {3, -14, 159, -26};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> A = {-1000000000};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "NEGATIVE";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> A = {123, -456, 789, -101112, 131415, 161718, 192021, 222324, 252627, 282930, 313233, 343536, 373839, 404142, 434445, 464748, 495051, 525354, 555657};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> A = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> A = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> A = {-1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> A = {1000000000, 1000000000, 1000000000};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> A = {166305757};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> A = {-519369050};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "NEGATIVE";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> A = {0};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> A = {134915278, 164449455};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> A = {-549224703, -409696727};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> A = {0, 0};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> A = {428809432};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> A = {-663399519, 540762285};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "NEGATIVE";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> A = {-795247982, 0, 17284921};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> A = {0, -780874485};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> A = {0, 311372830};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> A = {169764, 448229522, 852503577, 52995107, 137696894, 791151006, 54014131, 45133259, 120336898, 250535626, 741898441, 857256990, 902139006, 33867122, 749705246, 743209594, 122431504, 306380919, 140415659, 386102788, 645275466, 884620523, 619279439, 304308886, 720909398, 284454214, 209582713, 277466494, 698438381, 722703270, 715171009, 693606307, 805670704, 826324065, 436455185, 910252096, 743571639, 77512583, 50860674, 547414471, 438924648, 446241940, 730883137, 502514538, 958293697, 151023910, 697964218, 887154169, 814741606, 286361578};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> A = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> A = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> A = {669607070, 145132552, 107122728, 115107000, 271325204, 171821609, 714193358, -966671741, 802994813, -172563870, -420988950, 635715395, -828384196, 900784510, 36881462, 164343929, 170672517, 906153446, -201856582, 861498264, -279686597, -201539392, 894696035, -169479933, 646758802, -657711679, -26898983, 366933207, -876159886, -634829683, -431561406, 962124822, -801344475, -542398811, -706602380, -965688403, 649929246, 374502644, 202502102, -545334607, -682418989, -443183320, -357114732, 873697461, -26907825, 670972070, 211792755, -990026364, -229401085, -204542411};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "NEGATIVE";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> A = {0, 302055227, 641783143, 0, 394064748, 904559071, 594910574, 0, 0, 0, 91813976, 855478087, 829616895, 0, 0, 682075822, 0, 0, 0, 673659369, 158476450, 85309585, 0, 0, 0, 15741487, 0, 0, 426482481, 0, 15964580, 0, 0, 335188798, 134745903, 311097144, 570553408, 0, 189349679, 0, 0, 306431125, 0, 879910194, 392213845, 0, 0, 0, 360783956, 836530118};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> A = {-166924017, -175549068, 0, 0, -19793056, -821127971, 0, 0, 0, -203742869, -361710616, 0, 0, -554461957, -268520263, 0, -497655123, -568900711, 0, 0, 0, 0, 0, -277257083, -410158786, 0, -707715210, -960983607, -795930866, 0, -158664816, 0, 0, -511943147, -652795415, 0, 0, -548170632, 0, 0, -965880434, -240165290, -738671970, -82464337, -735826721, 0, 0, 0, -380986923, 0};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> A = {834815502, -447813679, 149667543, -684261404, 293267181, 110385322, -325806636, 237303074, 599108548, -940199567, -513060597, -602072960, -822757355, -63613388, 412724954, 230459016, 856086735, 326234622, -675552996, -940510194};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> A = {418298539, -184949458, 772909367, -401704864, -871712109, -119369039, -590121743, -11274197, 767552072, 97356372, -106449526, 560578617, 503895767, 597045481, 203565737, 83984885, 481911926, -579315579, -589747518, -543485776, 444095333, -984810102, -558147123};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> A = {-640090532, -648098790, -333886900, 556010537, 7346225, 8644370, -287428280, -982839858, 260429386, -751974622, 776011336, 449610094, 125456187, 762881039, -36460626, -512665066, 366878912, 555315417, 39731836, -767258997, 683603309, -496533460, -662018976, -567994399};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> A = {-142393574, -894129207, 300433369, 798839380, 23929988, -94092523, -863337692, -671078613, 393339796, 652890231, -293501459, -287194433, -841960206, 327960781, 326733256, 54831018, 140225166, 281123279, -662833098, 975725051, 75003432, -447471665, -903327957, -612170733, -661635034, -257135432, -981512621, -833393632, 242859526, 595500399, 506722218, 492126377, -176485195, -918168710, 177542650, 671443521, -186210719, 868427767, -678337095, 119472516};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> A = {-668422522, -387312122, -767138214, -124674370, -248729128, -975659051, -373061267, -474179420, 628051125, -75276820, -949625253, -350603278, -797286268, -792283232, 915197771, -29530725, -789768473, 873538770, -867879599, -513773353, 143260208, -903344329, -999424091, 293460343, 323106849, -33754166, 666984789, -201064288, 45609499, -79600925, -519487672, -912129350, 412527873, -63551495, 241470935, -33548599, -71831624, -565416463, 202137824, 197553848, -518728331, -286639354, 77040037};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> A = {0, 0, 0, 0, 0, 0, -331094700, 0, 169175248, 555847132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129212517, 0, 0, -207587747, 0, 0, 0, 0, 0, 875206344, 0, 0, -1421209, 0, -572454040, 0, 912911725, -277312877};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> A = {-145840622, -6199572, -937367386, -444335171, -582793417, -333111621, -619745662, -460895206, -860809663, -584847307, 1650459};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> A = {-370021077, 268809342, -280643210, -985937904, -23111615, -573843567, -627180327, -75396171, -480964740, -512037802, -874528555, -540696891, -157217910, -487850271, -945481441, -720353372, -760731532, -579681484, -439907335, -41828448, -70952886, -688153590, -585747957, -57233994, -504184969, -309024958, -40378161, -967645322, -68875201, -457853126, -13718893, -187940112, -122087354, -358853035, -446290221, -146271927, -43346966, -207207062, -19588818, -405791378, -837296590, -67224743, -899549925, -467404969, -110703648, -716867371, -780847144, -172676571, -759519810, -29311186};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "NEGATIVE";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> A = {-860672707, 120034852, 391111934, 898584199, 840335522, 644780616, 159995147, 182633491, 951719215, 34176118, 721762576, 122843834, 319850597, 157993677, 576497330, 89009652, 392477471, 886602239, 202905456, 192774852, 841988282, 456827531, 956488174, 631126037, 922539788, 664075345, 314533718, 352769998, 437077391, 667303716, 617044422, 981013785, 917257324, 114481850, 401911979, 30256855, 107618868, 528869111, 443748043, 41541147, 653714204, 314495364, 873337321, 517400819, 261063097, 926114082, 256519410, 544266608, 968974801, 315434234};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "NEGATIVE";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> A = {-102394603, -347214501, -201817079, -143886918, -29966507, -778384457, 671803367, -636349692, -508583587, -120419947, -219754618, 99516437, 383378790};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> A = {402267544, 459906835, 52676090, 638372690, 432636419, 650850836, 145614595, 678489518, 87590755, 233205349, 118413119, 108729019, 48549762, 962468414, 622592894, 988581389, 175357772, 585696601, 764673582, 899155164, 631617017, 939489710, 984220204, 821979679, 241422880, 914773301, 442946795, 169557197, 67479774, 211578350, 864822365, 338234742, 218539713, 190241425, 264836575, 933397885, 191284165, 372171223, 897061978, 978759346, 755930269, 980728114, 961893538, 228996055, 106245244, 884041445, 761469388, 362482851, 678273214, 192925655};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> A = {-172176108, 136474135, 330054630, -144040912, -996389007, -370375613, 862003528, 876582045, -204520033, -189312423, 768994242, 672953836, 198199505, 926312464, -284091887, -219772244, -528562445, 37402558, 139071035, 173036374, 347836746, 761434371, 897128773, -661326567, 884206014, -551245476, 673350175, -577297351, -771047813, -881300105, -261713617, -363842576, 102212138, 787608812, 789958542, 57193585, -454874908, 791571068, -905475282, -522255533, -767430224, 92341919, -43329448, 827599276, 293466624, -145919630, -411517643, 843480895, -172615249, -894465769};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "NEGATIVE";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> A = {0, 0, 0, 0, 362393603, 0, 652324652, 641717571, 724816684, 126444691, 0, 827199137, 0, 283991387, 699375034, 0, 282296448, 72494333, 149852624, 757111088, 0, 0, 909850052, 0, 0, 362747084, 0, 0, 639566886, 0, 0, 863835977, 0, 190340605, 618657159, 99661181, 116773775, 696844354, 0, 374970777, 0, 691774484, 0, 0, 0, 784766560, 0, 227334171, 0, 0};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> A = {-731470016, -803458473, -292406079, 0, 0, 0, -107700171, 0, -465342355, 0, -750875809, -527350043, 0, -804488982, -795936587, 0, -453344617, 0, 0, 0, -119614659, -963784676, -30050180, -653293884, -100803770, 0, 0, 0, 0, -598870583, 0, 0, 0, -56467398, 0, 0, 0, -627140755, -857645461, -315637295, 0, -303138233, -284796285, -863719942, -90881836, -478646336, 0, 0, 0, 0};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> A = {133183448, 520165985, -717171015, -136604516, -102429953, 445274933, -749479451, 98592370, 135453168, -666409420, -52128002, -61742391, -161891017, -461839605, 629694014, 848276989, -95162762, 498872547, 757769762, 443840041};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> A = {845613469, -615645795, -36391804, -542637889, -580527868, -418212204, -455350738, 615127265, -11878828, -777729824, -369947412, -64124287, 38697389, 532181387, -114728883, 56932524, 962494021, 48235279, 519964503, 595092919, -904414821, 59114411, 519771618};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> A = {-432349807, 24917271, -523504795, -945325936, 576433985, 587234019, -736966403, 124405782, -138466240, -150700109, 168023740, 881435690, -986973808, -703894513, 103899454, 971588225, -312789604, -118461144, -549683684, 881336954, 290002795, 770245109, -767117235, 758098084};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> A = {180920432, 331934101, -813269987, 538833493, 194486927, -510515802, -985653937, 48735346, -956905568, 498460289, -12889362, 429797966, 870020883, -18659211, 178869878, -255416346, 586721081, 35471510, -31258086, 640973088, 948776606, -973665059, 177703972, -281258432, -709222844, -73235842, -43109685, -315932481, -378853906, -8976090, 631955679, 73197337, 783470651, 408766400, -953646534, 985338880, -588861246, -733893866, 400796470, -224030117};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> A = {-293645866, 143621275, -866410077, -118146091, -745012660, -976415571, 654557240, -520967316, -116467860, -600540953, 398112134, -630530634, 202272876, 898239660, 702320886, 431126590, -510437053, -503449875, -120142748, -826275559, -75519548, -409474017, 644896212, -964311254, -729625399, -931898274, 859947712, -599142471, 10594118, 95313561, -919079449, -525752716, -814559309, -866909361, -368997514, 274406469, -130894643, 25233786, -234664441, -599987548, -968670230, -109918500, -238717723};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> A = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -79724330, 0, 0, 0, 0, 0, 0, 833022982, 0, 0, 0, 0, -179461282, 0, 0, 0, 0, -699703965, -928019877, 0, 0, 0, 803201495, 0, 0, 0, 0, 283994854, 0, 0, 0, 0, 0, 769764497, 0, 0, 0, -952685333, 9083458};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> A = {-937604574, -841673601, -300660260, -842632454, -559439709, -447364299, -221342093, -945225419, -162372580, -538013152, 409012855};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> A = {-64976711, -860151713, -111220348, 75501568, -168652781, -955127544, -90890395, -987686104, -289278265, -690409127, -299598389, -221831448, -920966135, -745280268, -390528477, -573228412, -201921128, -812959626, -15512444, -172612051, -39238268, -489240703, -215163007, -978472469, -817884677, -4791050, -530437659, -242511225, -649038248, -519519904, -113482394, -323162506, -892232476, -287979879, -948309193, -408871822, -832773608, -881320845, -463891614, -173482009, -996933194, -533041581, -543171484, -370911010, -740489218, -725006083, -475556239, -123832069, -370786759, -328516532};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "NEGATIVE";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> A = {30226246, 39383516, 232907586, 157348395, 363757599, 400726069, 190990925, 111459709, 916167936, 76822896, 38469893, 931745658, 263226898, 855019686, 324714548, 353567584, 135206669, 750255234, 10520523, 980713851, 346436708, 139126090, 121086868, 767532222, 533201300, 221217171, 845507183, 899624654, 157110808, 633802516, 907982213, 798338213, 930852224, 285331033, 957213841, 681675991, 29518770, 52962527, 35632023, 910189838, 415447809, 404969803, 788725126, 530527397, -572093701, 861238993, 623156053, 12546069, 148474691, 661375087};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "NEGATIVE";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> A = {-797811751, -44608856, -778189046, -70879334, -798034447, 578854159, 534371328, -317550137, -726719717, 400967887, -635226454, -50072056, -524828951};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> A = {235951514, 81391686, 256235242, 800293353, 206637073, 59076545, 306797625, 84526627, 258368741, 478919926, 386515574, 25087405, 33666980, 449472596, 184401381, 222697880, 371439083, 539632378, 909012248, 705814512, 737039091, 117881540, 313842008, 228445510, 878849614, 161535552, 242835523, 953977053, 131950431, 598708922, 401171183, 361038387, 573440566, 43692871, 668813299, 8516690, 91305497, 745486553, 782404286, 424155908, 26140113, 391972504, 592467597, 200057090, 952705118, 148965001, 379933971, 730016900, 234528913, 719866415};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> A = {-736936119, -365741719, -556018030, -275220366, -546761418, -354686146, -638370034, -554958420, -603216595, -242225172, -379711616, -374495307, -809293899, -223210181, -902891455, -259880634, -404861155, -3334583, -121149525, -296028668, -392339935, -16692478, -396282042, -983765154, -824753196, -552000534, -330569519, -357397570, -129639021, -475835670, -757340622, -769971598, -759780635, -256974856, -755884746, -170328165, -898250667, -251811549, -686610886, -205340088, -780042949, -143652957, -477402044, -996326773, -642200726, -685749591, -992992191, -523151730, -886678102, -66000265};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> A = {25426771, 62375021, -486221310, 927803705, -715515972, 810084040, 860188084, 838612324, -57978111, -522565317, 702967935, -48639890, -921373815, -935195916, -537255647, 668206113, 878174380, -6465750, 139622827, -418483906, 560114247, -993803484, 274749724, 539623509, 3207621, -106678405, 489209203, -727825338, -975430513, -455860019, -128844037, 799281586, -60402512, -474028872, -188201830, 857843779, -423269148, 931558476, 578060891, 122623490, -125826809, 213773167, 143591840, 646082008, -267288053, 374629258, 265978147, -791874586, -938345634, -61185731};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "NEGATIVE";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> A = {0, 0, 0, 0, 0, 0, 396274835, 0, 0, 27788760, 264556134, 0, 805448579, 931848035, 0, 539685288, 224181535, 472847741, 0, 757427001, 230831120, 273109523, 696294558, 297118868, 4636947, 0, 642403047, 154300786, 0, 0, 587091074, 0, 136856866, 940802389, 0, 0, 0, 0, 0, 54381982, 119335459, 0, 122205811, 731630567, 0, 0, 475245483, 805445631, 0, 0};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> A = {0, -517723579, 0, 0, 0, -224669613, 0, -56296043, -657053674, 0, 0, -64943768, -674479341, 0, -935492585, 0, -113963267, -935455256, 0, -917181844, 0, -490601550, -618431843, 0, 0, -187658717, 0, 0, 0, -113479956, 0, 0, -1678176, 0, -46312833, 0, -93220061, -441149162, 0, -85380421, -344442328, -824346993, -976042193, 0, -825308152, 0, -515011022, 0, 0, -708008571};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> A = {224930053, -667129342, 638188602, 750043226, -418002608, -754500166, 719682115, 394447740, -962376609, -696334907, -702473962, -395834541, 404389290, 30502303, -895588984, -291549143, -659841355, 249115828, 731708035, 106082561};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> A = {893602126, 141953018, -953625141, -721590709, 139101960, -902988390, 452409093, -90728515, -308691089, 895492362, -612814857, -184938950, 160859951, -143204264, 2755441, 661598711, -628077123, 235651008, -883715827, 965132049, -573101180, 7399407, -585557451};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> A = {851196691, 831580724, 223787531, 364612450, -92802291, 785713729, -39814066, 727128417, -396438925, -279769913, -138033528, -80331571, 888335857, -547065222, 49481550, -755819224, 572787399, -906076728, -855141348, -526852913, 757726348, -344124716, 805978843, 113746181};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> A = {352611435, 129784145, 869831670, -327879980, 48569061, -288448994, -810840083, -182930004, -623435635, 12279366, 924745957, 90764946, -604882001, -483563587, 290654917, -853568826, 851927994, -773659781, 903710408, -405655573, 564884220, -452561299, 690867275, -132675799, 945127289, -148265627, -115000656, 164014363, 765058595, -343584805, -317357016, 621705670, 884485621, -57024817, 944354613, 257937635, -376449040, 104379112, -440867639, -204762282};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> A = {432512427, -201553324, -606726511, -920761705, -874421247, 120192686, -702453586, 996388810, -785610837, 93071434, -395491598, -843997757, -143572497, -57521431, -35989676, -70968345, -397005591, 164391149, -74579536, 152140238, 147141273, -827690271, -127360249, -297308969, 42201978, -646250182, 681494589, 278068627, 553912384, 255462028, -887285071, -293713807, -205790483, -769139576, -545464558, -566046096, -700140754, -548669843, -450444992, -481859034, -244865354, 43312031, -901712209};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> A = {0, 0, 0, 0, 0, 0, 88801753, 0, 0, -5700910, 0, 0, -67030833, 99557289, 0, 0, 0, 0, 0, 0, -47336348, -234872951, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506049926, 0, 0, 0, 0, 0, 0, 977564431, 0, 0, 0, 15339332, -880245698, 0, 0, 0, 0, 0};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> A = {-924127164, -856666316, -375608412, -702289421, -318813885, -647017333, -750358141, -82089624, 69092678, -867229604, -891288908};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> A = {-78414425, -295185966, -731628185, -557886186, -608606230, -557495310, -724002902, -382072855, -334826286, -518798911, -711513861, -241069532, -349555331, -172636442, 868423898, -993917446, -443048709, -370641343, -11790951, -601082743, -408553978, -843486586, -341308642, -112908193, -404775977, -595935487, -650895387, -716479277, -219891015, -319483957, -7650470, -884783429, -711464, -326464354, -381124578, -977644305, -136654867, -8361933, -595896615, -738834973, -481131434, -971112917, -787470438, -114446602, -448850109, -385249745, -892401175, -539513553, -525918689, -870266469};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "NEGATIVE";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> A = {563136328, 312161642, 725499448, 901208128, 344030832, 164116747, 776437545, 35564885, 598354007, 909183274, 815517130, 826706730, 84932030, 452885762, 50938098, 360283630, 24824202, 727160703, 565726909, 281628596, 678329699, 520293680, 635285419, 739741721, 811175745, 143902161, 544184752, 44672836, 729843656, 707469055, 25722511, 411145682, 971593323, 134699949, 318308322, 682487867, 554153211, 375700401, 466666468, 653216261, 756926386, 200153921, -891838696, 493978152, 812002430, 48254324, 242070580, 395038063, 380859940, 423929382};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "NEGATIVE";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> A = {-749433582, -616726538, 392859633, -671734439, 453620916, -928970278, -851577412, -62268399, -196008878, -28911656, -994558201, -600435318, 154694426};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> A = {1000000000, 1000000000, 1000000000, -1000000000};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "NEGATIVE";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> A = {0};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> A = {123, -456, 789, -101112, 131415, 161718, 192021, 222324, 252627, 282930, 313233, 343536, 373839, 404142, 434445, 464748, 495051, 525354, 555657};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> A = {-1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "NEGATIVE";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> A = {1000000000, 1000000000, -1000000000, -1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> A = {1, -2, -3, -4};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "NEGATIVE";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> A = {5, 7, 2, 0};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> A = {3, 5, 5, 4, -4};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "NEGATIVE";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> A = {-1, 1};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "NEGATIVE";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> A = {1000000000, 1000000000, 1000000000};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> A = {-1};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "NEGATIVE";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> A = {1, -1};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "NEGATIVE";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> A = {-100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, -100000000, 0};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> A = {1, 1, 0, 0, 0, 0, 0};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> A = {3, -14, 159, -26};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> A = {-100, -100, -100};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "NEGATIVE";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> A = {100000, 100000, 100000};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> A = {-1, 0, 2};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> A = {5, 7, 0};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> A = {0, 5, -9, 10, -5};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "ZERO";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> A = {10, 11};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "POSITIVE";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> A = {-20};
    EasyHomework* pObj = new EasyHomework();
    clock_t start = clock();
    string result = pObj->determineSign(A);
    clock_t end = clock();
    delete pObj;
    string expected = "NEGATIVE";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23037686&rd=15492&pm=12387
********************************************************************************
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <ctime>
 
#include <algorithm>
#include <fstream>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
 
using namespace std;
using namespace __gnu_cxx;
 
typedef long long int64;
 
#define FORIT(it, v) for (typeof((v).begin()) it = (v).begin(); it != (v).end(); ++it)
 
class EasyHomework {
public:
    string determineSign( vector <int> A ) {
        int minus = 0;
        FORIT(it, A) {
            if (*it == 0)
                return "ZERO";
            if (*it < 0)
                ++minus;
        }
 
        if (minus % 2 == 0)
            return "POSITIVE";
 
        return "NEGATIVE";
    }
};
 
 
 
// Powered by FileEdit
// Powered by moj 4.16 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/