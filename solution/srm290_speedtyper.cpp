/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5982
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

class SpeedTyper {
public:
    string lettersToPractice(string letters, vector<int> times);
};

string SpeedTyper::lettersToPractice(string letters, vector<int> times) {
    string ret;
    return ret;
}


int test0() {
    string letters = "dcab";
    vector<int> times = {250, 300, 400, 800};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "db";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string letters = "keyboard";
    vector<int> times = {100, 200, 300, 500, 600, 800, 900, 1200};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "bad";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string letters = "rewq";
    vector<int> times = {500, 1000, 1500, 4000};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "q";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string letters = "abc";
    vector<int> times = {2000, 4000, 6000};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string letters = "a";
    vector<int> times = {1};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string letters = "ab";
    vector<int> times = {3, 4};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string letters = "ab";
    vector<int> times = {1, 4};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string letters = "a";
    vector<int> times = {1};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string letters = "ab";
    vector<int> times = {99999, 100000};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string letters = "ab";
    vector<int> times = {1, 100000};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string letters = "wertyuiopasdfghjklzxcvbnm";
    vector<int> times = {99976, 99977, 99978, 99979, 99980, 99981, 99982, 99983, 99984, 99985, 99986, 99987, 99988, 99989, 99990, 99991, 99992, 99993, 99994, 99995, 99996, 99997, 99998, 99999, 100000};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "w";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string letters = "agofuzmrdsbcwhvtnkyxejlipq";
    vector<int> times = {4029, 15485, 23926, 25908, 29086, 30463, 41665, 43743, 50585, 57424, 57541, 58711, 58756, 59886, 60434, 61107, 61370, 64452, 65055, 69291, 73115, 74258, 79910, 83166, 95602, 98592};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "agomdsxelp";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string letters = "tfcklxwoqehpjusr";
    vector<int> times = {6425, 8275, 10108, 11352, 13783, 15706, 16366, 20433, 20983, 36396, 55010, 66614, 81434, 82879, 84596, 93536};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "tehpjr";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string letters = "mpijwxbdhflyecrsqng";
    vector<int> times = {3060, 13125, 15758, 18784, 24683, 37448, 42985, 48689, 53102, 54709, 56278, 59279, 63210, 77817, 78199, 81995, 82088, 85924, 97546};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "pwxbdcg";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string letters = "bnwmohycxjvqadrekglzpst";
    vector<int> times = {303, 1577, 1907, 2086, 3751, 11418, 13323, 18187, 18553, 20050, 26519, 31261, 34043, 55093, 58916, 61615, 66072, 67315, 77557, 85111, 94705, 95740, 99636};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "hcvqdklzp";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string letters = "cfwile";
    vector<int> times = {25532, 62473, 76941, 81649, 83212, 84810};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "cfw";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string letters = "xgtpeqkvdfzwarnbsy";
    vector<int> times = {2124, 3951, 10203, 12587, 21739, 25064, 25772, 27169, 46286, 53470, 57819, 59340, 63129, 85109, 87867, 91974, 95567, 95688};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "tedfr";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string letters = "fnzlowxkmpghedsyqicbjv";
    vector<int> times = {6679, 14346, 21773, 23078, 23942, 24942, 32762, 35375, 39300, 44642, 50762, 59706, 59888, 67797, 69798, 75222, 75415, 79297, 79511, 80451, 87334, 93720};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "fnzxpghdyjv";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string letters = "xbtoelvuzapfsgrcyhw";
    vector<int> times = {11837, 16239, 19999, 24669, 29508, 31246, 38977, 47821, 48977, 57655, 71097, 71465, 76983, 78157, 84351, 85956, 87426, 91046, 93917};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "xvuapsr";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string letters = "mdpqry";
    vector<int> times = {567, 18610, 26526, 61245, 75904, 82710};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "dqr";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string letters = "dunjh";
    vector<int> times = {2441, 44806, 80914, 81959, 89830};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "un";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string letters = "kgufozjldbhqrivstexcawmy";
    vector<int> times = {3437, 18363, 24493, 31294, 31801, 32256, 32302, 33612, 38363, 42419, 44731, 46591, 46778, 46921, 47484, 53805, 54346, 65519, 66516, 73662, 75479, 77652, 88103, 99000};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "gufdsecmy";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string letters = "asqzflwph";
    vector<int> times = {347, 4982, 36295, 57969, 67748, 71925, 83636, 94233, 97362};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "qzw";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string letters = "ykdfbwnzrtlhmxsgaj";
    vector<int> times = {2067, 3120, 6377, 9691, 16088, 16188, 20476, 39803, 45286, 55746, 56221, 58748, 72980, 83835, 87657, 87671, 88178, 97884};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "bzrtmxj";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string letters = "tqkwdihcvnsjfmgbyxrzop";
    vector<int> times = {1091, 3349, 5759, 7252, 14140, 18011, 18381, 25614, 30063, 37561, 37692, 38246, 41786, 47246, 54041, 58962, 63110, 66294, 69958, 75340, 91297, 99792};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "dcnmgbzop";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string letters = "jfh";
    vector<int> times = {3387, 16106, 54099};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "h";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string letters = "yqdfuiwnmpceshojraxgt";
    vector<int> times = {128, 3489, 8498, 12100, 25289, 25559, 26661, 36812, 39974, 51582, 59499, 68288, 68700, 75018, 77909, 82482, 84966, 92411, 96625, 98627, 99792};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "dunpceha";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string letters = "ownuvztpqyhf";
    vector<int> times = {6327, 8571, 25320, 25968, 32186, 54361, 71879, 73709, 75437, 78678, 95207, 96960};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "nzth";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string letters = "aimpsqtlcfudzxywhevkbng";
    vector<int> times = {1949, 7972, 10945, 13926, 14262, 32050, 35844, 39044, 43298, 45205, 47485, 53370, 60014, 60247, 64356, 67022, 67245, 72451, 73473, 75426, 87655, 90844, 99958};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "iqdzebg";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string letters = "uhqirgvwcynxbsem";
    vector<int> times = {275, 2529, 7414, 8720, 25074, 30397, 44178, 56693, 70710, 78619, 82110, 86165, 89480, 89783, 95091, 98304};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "rvwcy";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string letters = "lhreouzjwyxqgpnvasmfdb";
    vector<int> times = {5337, 10135, 19795, 20668, 24207, 28424, 28828, 28897, 29811, 31372, 36756, 39003, 40908, 41416, 48790, 50659, 51688, 59655, 64558, 65620, 68215, 81092};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "lhruxnsmb";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string letters = "enfzpqrjcyiot";
    vector<int> times = {3185, 14680, 29607, 30472, 33817, 34435, 38502, 45879, 52891, 57271, 64193, 84124, 87867};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "nfjcio";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string letters = "iwgdjankthpycms";
    vector<int> times = {8417, 10084, 10446, 27473, 37710, 42895, 45563, 47976, 58605, 68887, 82538, 84778, 89796, 91957, 92265};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "idjthp";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string letters = "uceqhjdsxvafmg";
    vector<int> times = {1228, 5338, 13792, 38486, 51405, 58432, 71851, 73973, 76347, 93441, 95654, 96003, 97232, 99526};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "eqhdv";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string letters = "rdtnjp";
    vector<int> times = {6778, 9927, 23228, 51716, 68255, 85254};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "njp";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string letters = "rgeczhqidvtwsxman";
    vector<int> times = {1994, 2648, 8688, 10602, 17352, 17976, 32481, 34730, 35573, 37712, 49886, 53148, 59329, 64014, 66648, 74002, 75361};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "ezqtsxa";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string letters = "hfwvbcpajsixgzdren";
    vector<int> times = {442, 10527, 13675, 24250, 40137, 50930, 55413, 55574, 55881, 57661, 69796, 71213, 71684, 75309, 76988, 80545, 80831, 82530};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "fvbci";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string letters = "gcnhpokjyfruqlebwi";
    vector<int> times = {4503, 13953, 20034, 22849, 28197, 40877, 49059, 65093, 79196, 80886, 84656, 86759, 88893, 89567, 95263, 95686, 96048, 98280};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "cnokjye";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string letters = "jrnavz";
    vector<int> times = {27831, 27835, 34266, 39145, 61884, 69990};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "jv";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string letters = "vyoakpngmefxwhtidqs";
    vector<int> times = {6096, 12538, 23955, 31074, 34310, 34519, 34780, 35911, 40352, 49198, 54600, 63909, 64378, 67465, 68186, 74708, 80074, 83371, 89965};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "vyoaefxids";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string letters = "ajvkmwyclegsxboqnpdtrzf";
    vector<int> times = {40, 350, 1889, 2476, 5689, 6412, 17679, 21432, 27039, 34368, 39354, 45775, 46148, 46201, 61418, 68501, 72590, 78335, 79355, 93215, 94151, 94183, 98601};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "ylegsoqptf";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string letters = "gtjfhricaekwbvmydnsopqlux";
    vector<int> times = {4088, 5813, 8247, 11528, 16955, 23664, 26133, 33311, 35314, 39963, 42351, 42708, 60279, 60799, 72454, 73507, 73569, 74313, 78094, 80427, 81411, 91282, 93388, 93842, 95050};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "ghrcebmq";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string letters = "rzswpvtokfeucjabyngdm";
    vector<int> times = {1580, 2774, 11440, 16868, 33577, 35109, 37104, 37814, 43370, 58787, 59116, 61285, 63833, 66974, 85857, 88982, 92287, 93990, 95587, 98115, 99939};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "swpkfa";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string letters = "xopkierdmusb";
    vector<int> times = {43233, 44766, 54490, 64760, 65763, 65912, 68588, 72788, 76695, 78901, 95081, 96792};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "xpks";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string letters = "rwxkyzbqdj";
    vector<int> times = {12086, 17301, 19308, 20848, 25179, 30172, 32754, 53931, 56262, 81330};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "rqj";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string letters = "yspgonqrjdbec";
    vector<int> times = {6800, 7134, 16022, 26604, 39849, 43044, 45144, 60108, 60247, 80222, 87970, 91018, 93704};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "pgordb";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string letters = "mdkzgbcsuhjnrxfwpvlteqiya";
    vector<int> times = {861, 6976, 9321, 14443, 15713, 19144, 19742, 20389, 26970, 31453, 34184, 42169, 48429, 48780, 49625, 51995, 54916, 65868, 76641, 83066, 85375, 85441, 87793, 91286, 91425};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "dzuhnrvlt";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string letters = "j";
    vector<int> times = {5323};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string letters = "bgkqcavzlmthfueyniwxpsorjd";
    vector<int> times = {4346, 13930, 16753, 26653, 27195, 31666, 37327, 51840, 52287, 56968, 58920, 59655, 60025, 61451, 66938, 70484, 71529, 71902, 72300, 75992, 81555, 89547, 89726, 92718, 92850, 95238};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "bgqavzmexps";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string letters = "hdbrkipsuoynfav";
    vector<int> times = {1167, 12777, 25754, 29904, 57470, 67975, 70542, 72420, 75470, 79614, 83609, 91590, 93174, 96521, 97545};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "dbkin";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string letters = "gfcrumnexhqdabytiz";
    vector<int> times = {8600, 11954, 24354, 25050, 25183, 27847, 36127, 38417, 43830, 44651, 46116, 47189, 54375, 62095, 63739, 72503, 86117, 92484};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "gcnxabtiz";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string letters = "seaoypgrcktwuqxinmlzbhdf";
    vector<int> times = {58, 17399, 20161, 21065, 21652, 27195, 30719, 34422, 38863, 41653, 53996, 61186, 65147, 67936, 71055, 73930, 74265, 74321, 74674, 78834, 81605, 83320, 89019, 90768};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "epctwuzd";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string letters = "izml";
    vector<int> times = {20498, 40170, 72983, 93160};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "m";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string letters = "zftorsxvwqaehcbymknjgdupi";
    vector<int> times = {11559, 16118, 18468, 21272, 31473, 33642, 38193, 43117, 44043, 52966, 53860, 56014, 66356, 66800, 67369, 71243, 76537, 86704, 88296, 89933, 90512, 94079, 97000, 97593, 99125};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "zfrxvqhmk";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string letters = "hkls";
    vector<int> times = {4265, 29686, 67959, 95904};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "kls";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string letters = "wpnrfyvtsbihkjlgd";
    vector<int> times = {5374, 6866, 7671, 9705, 17459, 18411, 19795, 20633, 21236, 23855, 24022, 49325, 51393, 61313, 65405, 68925, 96373};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "fhjd";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string letters = "yhwdfgsqiputolkenrz";
    vector<int> times = {829, 3257, 13230, 14644, 14804, 16707, 23271, 23732, 50361, 51840, 52137, 52659, 60022, 65518, 89763, 90346, 92325, 94387, 97850};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "wsiolk";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string letters = "bdqmxinrlwz";
    vector<int> times = {3579, 10976, 13255, 15082, 38439, 55742, 61497, 66251, 82095, 89041, 92092};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "xil";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string letters = "fkpducblivseo";
    vector<int> times = {10830, 15501, 16191, 17123, 27808, 33878, 40643, 45077, 76772, 82311, 85480, 85992, 91260};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "fui";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string letters = "mvjhurlzwnaqyegotkbpi";
    vector<int> times = {7362, 12289, 13336, 19138, 24752, 29366, 36565, 38499, 38916, 40238, 48783, 50152, 53679, 54308, 58456, 60911, 78813, 94457, 94710, 97421, 99624};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "mvhulatk";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string letters = "gdlcoijnaxwv";
    vector<int> times = {10023, 12760, 13718, 17377, 39312, 39760, 42015, 42574, 48856, 86941, 89275, 92832};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "gox";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string letters = "bktowgmeuxvzqyr";
    vector<int> times = {9052, 14161, 28251, 31434, 32449, 34952, 53260, 62346, 70473, 70587, 73830, 88238, 90045, 94227, 96015};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "btmeuz";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string letters = "ofpurgq";
    vector<int> times = {10352, 12246, 20668, 27292, 38244, 65184, 83013};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "gq";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string letters = "rlabekgjsndquwy";
    vector<int> times = {5021, 13672, 17498, 28877, 30355, 30733, 34413, 57632, 64936, 64986, 68374, 78646, 80349, 80798, 97635};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "lbjsqy";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string letters = "egotcyfk";
    vector<int> times = {10201, 24440, 31333, 49766, 58399, 61367, 96331, 97888};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "gtf";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string letters = "mltzqgje";
    vector<int> times = {1211, 14994, 20518, 20939, 64101, 78450, 97382, 98808};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "lqgj";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string letters = "thiwgmbvlcyseuoafrnpkdx";
    vector<int> times = {2297, 3445, 9720, 11137, 14054, 15726, 20705, 23639, 32024, 36300, 40553, 43514, 43874, 46525, 48528, 56137, 57593, 67775, 67778, 71891, 81162, 87478, 87952};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "iblcyarpkd";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string letters = "gkjdcwtfrvemspbaxn";
    vector<int> times = {19, 3531, 19947, 27745, 36025, 38211, 47464, 52680, 57564, 60885, 75478, 78272, 83121, 85484, 94743, 94775, 99252, 99342};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "jdcteb";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string letters = "xyu";
    vector<int> times = {58310, 70708, 73050};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "x";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string letters = "nt";
    vector<int> times = {79061, 93200};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "n";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string letters = "kzvhujdctyfbmae";
    vector<int> times = {12655, 18819, 27204, 48950, 52842, 53283, 54083, 54667, 55221, 55737, 65760, 74770, 86955, 88881, 96105};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "kvhfbme";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string letters = "ehdpomrkfqgwtacnvlusjbx";
    vector<int> times = {1001, 3621, 11345, 13533, 15735, 16699, 21577, 22378, 31362, 32461, 39265, 44305, 49098, 52852, 58099, 60396, 61961, 68119, 73755, 80283, 89534, 91072, 97635};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "drfgwtclusjx";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string letters = "gudpztrsljamqfniyowecx";
    vector<int> times = {1773, 1963, 8729, 12092, 14801, 15974, 23264, 31337, 34066, 41536, 44492, 45720, 45915, 58313, 61856, 67929, 70967, 72824, 73746, 86886, 89626, 94886};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "drsjfiex";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string letters = "twhudqrkvyjgfbmpzisnc";
    vector<int> times = {397, 3660, 21671, 22518, 24499, 25762, 26249, 42113, 42859, 50821, 54483, 54559, 62800, 63329, 68295, 79490, 81008, 81845, 87133, 94596, 98406};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "hkyfmpsn";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string letters = "fstzhkmjyievuboxwpag";
    vector<int> times = {12404, 13611, 15109, 16519, 16780, 23103, 24846, 30510, 49355, 53342, 74351, 76525, 80987, 81565, 83737, 88887, 93118, 97157, 97239, 99400};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "fkjyex";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string letters = "zbcsxmworekplnvj";
    vector<int> times = {3572, 17633, 30786, 34048, 37463, 37975, 41468, 47952, 59890, 64245, 64895, 66350, 66624, 68830, 82994, 99664};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "bcorvj";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string letters = "dvmesxiokrqhjzlugtpcbwa";
    vector<int> times = {14727, 20922, 23779, 26203, 27031, 32385, 34356, 35595, 37573, 40081, 40717, 45705, 55889, 57823, 60643, 61737, 69174, 77379, 84572, 88631, 90601, 90882, 96232};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "dvxhjgtpa";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string letters = "ywzpljtrgxoacbh";
    vector<int> times = {4702, 7309, 8136, 10776, 15717, 16062, 20304, 20517, 24523, 30480, 33103, 42934, 43635, 46727, 94050};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "ah";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string letters = "emxc";
    vector<int> times = {10758, 11689, 73995, 98612};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "x";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string letters = "veajizdtpbkhygrs";
    vector<int> times = {9250, 31990, 33213, 34539, 40832, 41021, 46037, 48534, 64386, 66220, 67262, 76915, 84526, 89585, 90378, 96832};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "veiphys";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string letters = "ltep";
    vector<int> times = {46322, 58663, 77183, 91076};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "l";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string letters = "rvaokgnemqyjpcu";
    vector<int> times = {6434, 7018, 7606, 11551, 22082, 39104, 41895, 43676, 49881, 54596, 56508, 68388, 72760, 94403, 96765};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "kgjc";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string letters = "p";
    vector<int> times = {2684};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string letters = "ifxlnsjw";
    vector<int> times = {49376, 51886, 55364, 56383, 61332, 61349, 73230, 77136};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "ij";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string letters = "stkuawygrbolq";
    vector<int> times = {4240, 19657, 23670, 26147, 31838, 35429, 43424, 46919, 61132, 61399, 70470, 72844, 76895};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "tyro";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string letters = "qmsyuxebfvkwpdglcioztjrna";
    vector<int> times = {1201, 1888, 5330, 5509, 17824, 20506, 24368, 29257, 29924, 39454, 41784, 42745, 49120, 75637, 78286, 80832, 81833, 82689, 88545, 89608, 90912, 91454, 95261, 95586, 99475};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "ubvpdo";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string letters = "vbslorjazqdnyteciuhw";
    vector<int> times = {355, 4209, 12563, 13190, 14153, 14821, 15930, 18336, 20109, 28260, 34427, 45558, 46645, 55821, 57572, 58277, 58341, 76573, 80266, 92040};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "sqdntuw";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string letters = "ckeiwfbtoxqgdnjphum";
    vector<int> times = {4465, 6008, 10852, 23435, 26365, 27300, 28988, 30668, 31581, 35628, 39132, 55833, 56070, 74019, 83459, 83646, 86037, 88759, 94164};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "ignjm";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string letters = "rfjenmplbitaso";
    vector<int> times = {14022, 26204, 26933, 27747, 35141, 46593, 47513, 51045, 51145, 63867, 70940, 79516, 83831, 86772};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "rfnmita";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string letters = "wpihnc";
    vector<int> times = {4791, 11109, 29557, 67037, 77567, 97182};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "ihc";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string letters = "igfrkobslxyvehtnucdqaz";
    vector<int> times = {7736, 10488, 11659, 21759, 22737, 27632, 29567, 35625, 46274, 48473, 50392, 52903, 53788, 56826, 67618, 67704, 75726, 76521, 81013, 85837, 88016, 90332};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "irosltudq";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string letters = "vhwlkcdproanqsfeyxgmtib";
    vector<int> times = {3299, 4584, 9277, 9385, 14496, 15391, 17079, 28039, 34695, 47504, 48074, 53771, 55683, 59936, 66974, 67336, 75346, 81914, 90491, 91909, 96096, 98546, 99705};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "wkpronfyxg";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string letters = "hyiwfkueotdjqgsclabxvrznpm";
    vector<int> times = {1218, 5489, 8016, 11139, 11359, 11567, 17541, 17789, 18464, 25225, 29112, 29726, 33423, 34198, 45592, 49515, 51402, 58876, 60363, 66385, 83922, 85186, 85541, 86368, 93477, 99866};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "yutdscaxvpm";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string letters = "uvqhjpmratzfobeigsdwynxkc";
    vector<int> times = {38, 1231, 1636, 1830, 2366, 5424, 18765, 27517, 35782, 37401, 46419, 55922, 61825, 63137, 68538, 68587, 72752, 76793, 77381, 83498, 88518, 90457, 91265, 95923, 96800};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "mrazfoegswyk";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string letters = "mujabilwhgrxqdztvscyop";
    vector<int> times = {1563, 18383, 22993, 24051, 28297, 34460, 35733, 37224, 38716, 43069, 47376, 47750, 52367, 55022, 61045, 65958, 73941, 77169, 80459, 96129, 96903, 97262};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "ujiqztvy";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string letters = "cqbymudhljkwpzrafitseov";
    vector<int> times = {2402, 4103, 5535, 7853, 8696, 12745, 14041, 16615, 19910, 21287, 22886, 27682, 36586, 37753, 39499, 44516, 60891, 62349, 64129, 70889, 76006, 83299, 88481};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "uwpafseov";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string letters = "inlpmvgtydburzqxaschjfkew";
    vector<int> times = {457, 15024, 15927, 18713, 22629, 27255, 31777, 31811, 32858, 43068, 49553, 54007, 55968, 56182, 56310, 58115, 59254, 66989, 73444, 75108, 81478, 82179, 86700, 93759, 97450};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "nmvgdbuscjke";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string letters = "wtjfka";
    vector<int> times = {7312, 38073, 58818, 76721, 92455, 98268};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "tjf";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string letters = "nkahtvwszmfurcbixdoqyge";
    vector<int> times = {15955, 21214, 29351, 29987, 30881, 31485, 37634, 38330, 43729, 51328, 66924, 68663, 69491, 71078, 75211, 75280, 84840, 90866, 93874, 94066, 94211, 97732, 98210};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "nkawzmfxd";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string letters = "ajnrcikqvudbsglhexmy";
    vector<int> times = {17300, 24625, 37636, 39229, 41217, 41453, 45483, 47393, 51115, 56755, 63016, 63336, 65923, 67498, 73599, 78296, 94022, 94985, 99085, 99780};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "ajnudle";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string letters = "yjenmdcwvzpboihsukgfaltq";
    vector<int> times = {139, 14377, 14788, 21353, 23491, 32157, 32549, 41432, 45643, 48206, 51689, 56810, 57882, 60872, 63150, 74137, 75737, 81169, 81218, 86333, 90617, 93406, 94384, 97944};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "jndwvbskfa";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string letters = "oqmadrt";
    vector<int> times = {166, 1324, 13491, 76299, 87990, 88967, 89593};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string letters = "yertzdkbmjsiq";
    vector<int> times = {2138, 14441, 24712, 25510, 30846, 42203, 46266, 46282, 52087, 64178, 88611, 91209, 97968};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "erdjs";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string letters = "gbordunte";
    vector<int> times = {19241, 49101, 53334, 59218, 65777, 67607, 78400, 96442, 99972};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "gbt";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string letters = "ygszpmfwct";
    vector<int> times = {6610, 7241, 13192, 14020, 20936, 21548, 64538, 65772, 75403, 96550};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "ft";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string letters = "dnzfyxr";
    vector<int> times = {2136, 35998, 52269, 54370, 60038, 74622, 79961};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "nzx";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string letters = "mnkr";
    vector<int> times = {12163, 36296, 55600, 99840};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "r";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string letters = "cvztguremhsinkxpalfobdw";
    vector<int> times = {121, 8335, 11507, 11645, 12427, 16704, 18451, 33783, 35737, 42824, 45132, 46521, 51284, 58887, 59836, 65110, 68592, 73523, 75886, 89270, 90891, 92947, 98279};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "vuehnkplow";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string letters = "fcxnerwaotszqyhpmv";
    vector<int> times = {2932, 7648, 9316, 13027, 16208, 19205, 46120, 54971, 58082, 58761, 59483, 62010, 68222, 68791, 71671, 77935, 91918, 97956};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "waqpmv";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string letters = "iptkwumgonesfbraqyh";
    vector<int> times = {1012, 17760, 31871, 41057, 43428, 43835, 43927, 45185, 49456, 59211, 59278, 68224, 77245, 80189, 86730, 93106, 94315, 99103, 99408};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "ptknsfra";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string letters = "plkwqoj";
    vector<int> times = {13780, 18716, 27692, 31209, 45282, 81633, 88683};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "pqo";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string letters = "qwertyuiopasdfghjklzxcvbnm";
    vector<int> times = {75, 176, 277, 378, 479, 580, 681, 782, 883, 984, 1085, 1186, 1287, 1388, 1489, 1590, 1691, 1792, 1893, 1994, 2095, 2196, 2297, 2398, 2499, 2600};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "wertyuiopasdfghjklzxcvbnm";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string letters = "dcab";
    vector<int> times = {250, 300, 400, 800};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "db";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string letters = "keyboard";
    vector<int> times = {100, 200, 300, 500, 600, 800, 900, 1200};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "bad";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string letters = "dcab";
    vector<int> times = {200, 300, 450, 800};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string letters = "a";
    vector<int> times = {100};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string letters = "abcd";
    vector<int> times = {50, 100, 150, 200};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string letters = "abc";
    vector<int> times = {2000, 4000, 6000};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string letters = "abc";
    vector<int> times = {1000, 1100, 1200};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string letters = "adfg";
    vector<int> times = {1000, 1001, 5001, 5004};
    SpeedTyper* pObj = new SpeedTyper();
    clock_t start = clock();
    string result = pObj->lettersToPractice(letters, times);
    clock_t end = clock();
    delete pObj;
    string expected = "f";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14822038&rd=9811&pm=5982
********************************************************************************
#include <map> 
#include <set> 
#include <sstream> 
#include <iostream> 
#include <queue> 
#include <vector> 
#include <string> 
#include <math.h> 
#include <algorithm> 
#include <numeric> 
using namespace std; 
typedef vector<int> vi; 
typedef vector<double> vd; 
typedef vector<string> vs; 
typedef vector<vector<int> > vvi; 
typedef vector<vector<string> > vvs; 
 
class SpeedTyper { 
public: 
  string lettersToPractice(string l, vector <int> t) { 
    int mid = t[0]; 
    for (int i = 1; i < t.size(); ++i) 
      mid += t[i] - t[i - 1]; 
    mid /= t.size(); 
    string res; 
    if (t[0] > mid) 
      res += l[0]; 
    for (int j = 1; j < t.size(); ++j) { 
      if (t[j] - t[j - 1] > mid) 
        res += l[j]; 
    } 
    return res; 
  } 
 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/