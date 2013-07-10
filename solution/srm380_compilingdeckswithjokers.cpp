/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8228
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

class CompilingDecksWithJokers {
public:
    int maxCompleteDecks(vector<int> cards, int jokers);
};

int CompilingDecksWithJokers::maxCompleteDecks(vector<int> cards, int jokers) {
    int ret;
    return ret;
}


int test0() {
    vector<int> cards = {10, 15};
    int jokers = 3;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> cards = {1, 2, 3};
    int jokers = 4;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> cards = {1};
    int jokers = 5;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> cards = {2, 3, 4, 5, 6};
    int jokers = 4;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> cards = {123, 76, 117, 59};
    int jokers = 89;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> cards = {1000};
    int jokers = 1000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 2000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> cards = {500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 510000000;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> cards = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    int jokers = 1000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 1020;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> cards = {226122832, 189005257, 189156969, 236469917, 256021284, 198044647, 205010994, 248049174, 178890212, 179064641, 205487139, 181900883, 219085859, 194404080, 180119514, 175328654, 176680847, 219902799, 214484673, 226685686, 184943334, 244938159, 226671718, 232300525, 217741358, 198257030, 182016553, 218493681, 210887836, 254883164, 233331681, 196181103, 181327118, 185685373, 189721110, 208014083, 188970297, 214101097, 211243656, 226812722, 245703580, 236080919, 200802807, 189449256, 236569874, 187225989, 233477105, 187225898, 204877564, 176866378};
    int jokers = 150562962;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 191896735;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> cards = {127490265, 131350675, 127055297, 127381463, 129728253, 129769197, 130054235, 131490848, 126676483, 128992029, 129344019, 129075751, 127871041, 125966312, 131069111, 131017321, 131724623, 127822714, 126558220, 131406680, 127104487, 131512075, 127908054, 129985109, 126776004, 130873382, 130416930, 129521658, 131121732, 129651155, 126665720, 132095055, 129405544, 127593091, 128962469, 127124470, 127839697, 130567731, 129610791, 128931675, 129840068, 129660562, 129735329, 126880153, 126365408, 128155917, 131013958, 130050586, 128156413, 125995706};
    int jokers = 307811391;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 131649910;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> cards = {397157650, 401763389, 377539577, 382674971, 409157007, 350626705, 391704216, 376731407, 429871158, 422479397, 384109904, 360087755, 406847761, 339825184, 348395178, 360308857, 350252980, 415483110, 410340562, 377821676, 380857829, 410044716, 432419527, 365303240, 373796197, 343600730, 350762028, 383767361, 359621086, 370668226, 422236301, 367721016, 377683186, 421459044, 417019420, 415631229, 347593161, 397119051, 353205700, 378240715, 336531190, 343196302, 402810367, 370406824, 374699564, 345629280, 423260198, 347851277, 385662711, 431488090};
    int jokers = 209929623;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 363161135;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> cards = {288414605, 249535639, 265085490, 249855079, 114768747, 160773068, 230462420, 125402273, 158004624, 128232675, 83674890, 104824240, 223016818, 158066994, 106001106, 141704808, 292468649, 211120042, 138775770, 100585989, 250173419, 282988145, 177324768, 242301648, 102709616, 221539988, 181208043, 93270699, 125701670, 218437878, 214876042, 104245589, 125943255, 231228521, 188913227, 109173310, 279584494, 218986278, 254659547, 178744013, 238973967, 144766106, 120739747, 252601293, 181866574, 282716215, 183027159, 144582742, 230079542, 102724496};
    int jokers = 237188236;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 113401241;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> cards = {209774944, 293946777, 316822315, 181018667, 145186229, 224492093, 272083203, 192705843, 226577257, 215805665, 174187722, 222038443, 301884072, 223208726, 142773929, 190200452, 205403967, 323157462, 192842678, 265437535, 193927228, 131569912, 277825888, 236306011, 122924277, 244295593, 325779930, 186992275, 162663740, 226970846, 323793307, 326989652, 231005652, 304486798, 199534279, 226469133, 131620501, 273482487, 177676671, 227116288, 324803591, 163312572, 295207875, 263944811, 179210189, 290773049, 140639012, 274981149, 304089725, 234177510};
    int jokers = 301071063;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 162896266;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> cards = {2, 0, 4, 0, 3, 4, 2, 4, 1, 5, 1, 5, 3, 4, 1, 0, 0, 3, 5, 0, 3, 2, 1, 4, 3, 0, 4, 5, 0, 3, 0, 5, 5, 1, 2, 4, 5, 4, 3, 0, 5, 3, 1, 0, 4, 2, 0, 3, 3, 3};
    int jokers = 76;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> cards = {4, 2, 2, 3, 3, 3, 2, 1, 4, 4, 2, 3, 1, 1, 1, 2, 4, 4, 1, 1, 3, 4, 4, 1, 4, 3, 4, 4, 3, 3, 2, 2, 3, 1, 4, 3, 4, 1, 3, 3, 2, 4, 2, 1, 1, 2, 4, 3, 3, 4};
    int jokers = 18;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> cards = {4, 1, 3, 3, 3, 2, 3, 2, 1, 3, 2, 4, 3, 1, 2, 3, 1, 2, 2, 4, 4, 1, 1, 1, 1, 1, 2, 4, 3, 2, 2, 3, 1, 4, 1, 2, 2, 1, 2, 4, 4, 3, 2, 2, 2, 4, 1, 2, 1, 1};
    int jokers = 15;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> cards = {1, 3, 3, 1, 2, 3, 1, 3, 4, 2, 4, 2, 4, 1, 2, 1, 1, 4, 4, 3, 2, 1, 4, 1, 4, 3, 3, 2, 1, 4, 3, 2, 2, 4, 3, 3, 2, 3, 2, 3, 4, 2, 4, 1, 1, 3, 1, 4, 4, 4};
    int jokers = 13;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> cards = {2, 2, 3};
    int jokers = 4;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> cards = {2, 2, 4};
    int jokers = 3;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> cards = {2, 2, 4};
    int jokers = 5;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> cards = {100011, 100007, 100017, 100002, 100006, 100006, 100017, 100008, 100001, 100011, 100017, 100012, 100010, 100000, 100004, 100005, 100017, 100015, 100016, 100002, 100014, 100001, 100005, 100014, 100011, 100006, 100015, 100005, 100006, 100010, 100009, 100007, 100016, 100004, 100003, 100002, 100017, 100000, 100016, 100012, 100007, 100015, 100009, 100002, 100002, 100009, 100001, 100000, 100006, 100017};
    int jokers = 18;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 100002;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> cards = {123, 1, 117, 59};
    int jokers = 112;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> cards = {72758362, 212587823, 301878381, 451868829, 419074050, 267428994, 161862087, 44749444, 293029662, 444733919, 354441902, 407043072, 442865955, 293877114, 222393384, 337756703, 188134334, 191465061, 166093226, 286040587, 178342222, 73429757, 306115229, 39263870, 48811625, 194610556, 503522, 29463368, 373862487, 276906089, 365681222, 68866761, 90951059, 332365344, 472331027, 56043135, 148882766, 415877458, 282100099, 143644527, 273972203, 85612165, 128248131};
    int jokers = 162364615;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 29966890;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> cards = {71374736, 183246581, 465707283, 250757476, 487592230, 429226927, 265955904, 77010571, 64849987, 393826940, 229448607, 260035883, 161724, 462955484, 79607454, 422485554, 71883965, 458922557, 87769405, 354959286, 200946241, 352578182, 426853272, 426962826, 55631258};
    int jokers = 165310340;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 55792982;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> cards = {369096882, 364629999, 263620532, 324512826, 247393767, 233076917, 288933670, 75313813, 366433555, 2626617, 18089890, 499353805, 364673496, 467223586, 449496785, 178345952, 459815175, 18011873, 470207698, 116570073, 312413740, 200929854, 450539448, 18079840, 39721474, 40325591, 456309511, 172296488, 421548025, 365159073, 374217019, 147077760, 387580340, 138053467};
    int jokers = 249166680;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 18936073;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> cards = {139104651, 386592291, 180841723, 234027238, 478479116, 300748770, 362528448, 10191600, 478073974, 153655516, 248717274, 87513983, 151995197};
    int jokers = 369406659;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 97705583;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> cards = {224772158, 40820874, 466288682, 250395384, 195692656, 430739639, 35578402, 186814934, 158450033, 485308632, 354718624, 397313719, 233703207, 249228332, 298904843, 379510572, 126542226, 253675183, 455224091, 463437752, 324960327, 67196300, 409186398, 486628686, 359313900, 464616868, 329105330, 104000985, 48078270, 24727051, 447134673, 452940985, 173005577, 436833671, 59805630, 231433790, 198356914, 129275925, 129859678, 131657009};
    int jokers = 291148040;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 49734865;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> cards = {202778588, 260230729, 368612237, 189377375, 203319103, 45418676, 485638632, 393577366, 325388255, 351916184, 341789432, 2225367, 392152812, 246364039, 70645248, 260946853, 14227171, 290940430, 187986140, 155696562, 70808350, 150765352, 119367547, 423884135, 62434626, 303452619, 435741793, 420799581, 8277198, 267638105, 206928422, 251698920, 419629458, 80811568, 448130290};
    int jokers = 360318567;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 10502565;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> cards = {370030363, 299625991, 471912318, 494097071, 24453085, 388852790, 263770156, 276842956, 313337006, 352481129, 414534328, 340238769, 121982647, 98232089, 11829362, 52677454, 337912724, 258940885, 257291623, 387246319, 486878938, 485596353, 406605519};
    int jokers = 391867701;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 36282447;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> cards = {6, 10, 2, 5, 2, 5, 5, 9, 5, 10, 4, 2};
    int jokers = 4;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> cards = {8, 4, 10, 8, 7, 3, 3, 4, 10, 10, 7, 9, 10, 7, 2};
    int jokers = 3;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> cards = {8, 10, 8, 10, 2, 4, 6, 6, 2, 7, 9, 5, 3, 4, 7, 4, 8, 9, 3};
    int jokers = 8;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> cards = {3, 3, 7, 5, 7, 2, 4, 8, 5, 10, 4, 9, 5, 9, 4, 2, 8, 4};
    int jokers = 15;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> cards = {5, 5, 4, 5, 5, 4, 3, 6, 6, 8, 9, 9, 5};
    int jokers = 0;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> cards = {10, 8, 4, 6, 2, 6, 5, 8, 3, 9, 7, 6, 10, 6, 5, 6, 5};
    int jokers = 14;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> cards = {10, 5, 5, 2, 6, 3, 4, 8, 5, 5};
    int jokers = 10;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> cards = {5, 10, 4, 3, 4, 4, 8, 7, 2, 3, 7, 9, 10, 4};
    int jokers = 4;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> cards = {6, 2, 7, 10, 2, 2, 3, 4, 7, 8, 10, 5};
    int jokers = 19;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> cards = {3, 7, 8, 2, 3, 5, 9, 10, 4, 5, 4, 3, 5, 3, 7, 2};
    int jokers = 12;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> cards = {150421142, 162364615, 72758362, 212587823, 301878381, 451868829, 419074050, 267428994, 161862087, 44749444, 293029662, 444733919, 354441902, 407043072, 442865955, 293877114, 222393384, 337756703, 188134334, 191465061, 166093226, 286040587, 178342222, 73429757, 306115229, 39263870, 48811625, 194610556, 503522, 29463368, 373862487, 276906089, 365681222, 68866761, 90951059, 332365344, 472331027, 56043135, 148882766, 415877458, 282100099, 143644527, 273972203, 85612165, 128248131, 491545273, 165310340, 71374736, 183246581, 465707283};
    int jokers = 0;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 503522;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> cards = {250757476, 487592230, 429226927, 265955904, 77010571, 64849987, 393826940, 229448607, 260035883, 161724, 462955484, 79607454, 422485554, 71883965, 458922557, 87769405, 354959286, 200946241, 352578182, 426853272, 426962826, 55631258, 183824532, 249166680, 369096882, 364629999, 263620532, 324512826, 247393767, 233076917, 288933670, 75313813, 366433555, 2626617, 18089890, 499353805, 364673496, 467223586, 449496785, 178345952, 459815175, 18011873, 470207698, 116570073, 312413740, 200929854, 450539448, 18079840, 39721474, 40325591};
    int jokers = 0;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 161724;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> cards = {456309511, 172296488, 421548025, 365159073, 374217019, 147077760, 387580340, 138053467, 334941761, 369406659, 139104651, 386592291, 180841723, 234027238, 478479116, 300748770, 362528448, 10191600, 478073974, 153655516, 248717274, 87513983, 151995197, 20256037, 291148040, 224772158, 40820874, 466288682, 250395384, 195692656, 430739639, 35578402, 186814934, 158450033, 485308632, 354718624, 397313719, 233703207, 249228332, 298904843, 379510572, 126542226, 253675183, 455224091, 463437752, 324960327, 67196300, 409186398, 486628686, 359313900};
    int jokers = 0;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 10191600;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> cards = {464616868, 329105330, 104000985, 48078270, 24727051, 447134673, 452940985, 173005577, 436833671, 59805630, 231433790, 198356914, 129275925, 129859678, 131657009, 288343983, 360318567, 202778588, 260230729, 368612237, 189377375, 203319103, 45418676, 485638632, 393577366, 325388255, 351916184, 341789432, 2225367, 392152812, 246364039, 70645248, 260946853, 14227171, 290940430, 187986140, 155696562, 70808350, 150765352, 119367547, 423884135, 62434626, 303452619, 435741793, 420799581, 8277198, 267638105, 206928422, 251698920, 419629458};
    int jokers = 0;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 2225367;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> cards = {150126752, 53706184, 132515414, 406609022, 252475770, 466417688, 390188571, 233331028, 246781146, 364782551, 244552115, 42485675, 492650007, 459782893, 34260287, 498868937, 426617796, 168572581, 59754856, 315078555, 247601980, 481359151, 473367518, 285436470, 421227039, 425308957, 192539854, 48585807, 354914513, 273647338, 263369326, 242668221, 318364659, 425130609, 321276792, 93848065, 444377078, 234171760, 17537445, 356093369, 65226884, 11665674, 0, 446754349, 129707541, 270681672, 392983158, 433791942, 307590232, 421892245};
    int jokers = 0;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> cards = {3728340, 200899445, 47688159, 472381214, 475490869, 80343482, 116583085, 218551273, 103767569, 404224739, 200869487, 214588266, 373162426, 399764476, 333817231, 194407759, 363194957, 31658485, 175603317, 137972072, 342690858, 39789605, 205306389, 460571438, 297486704, 369455037, 232165730, 241218871, 408001929, 313551197, 355757270, 32727491, 214391198, 6310276, 319470829, 358811187, 9847071, 424059924, 239326376, 292507276, 126745147, 41079510, 320364, 147946233, 320351, 115028984, 68858272, 474537799, 460551917, 127376004};
    int jokers = 17;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 320366;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> cards = {499999997, 500000000, 499999995, 500000000, 499999995, 499999996, 499999993, 499999995, 499999993, 499999994, 499999997, 499999998, 499999993, 499999993, 499999993, 499999996, 499999993, 499999996, 499999996, 500000000, 499999993, 499999993, 499999995, 499999994, 500000000, 499999995, 499999997, 499999993, 500000000, 500000000, 499999998, 499999995, 499999998, 499999995, 499999997, 499999999, 499999995, 499999995, 499999998, 499999996, 499999997, 499999994, 500000000, 499999999, 499999999, 499999999, 500000000, 499999993, 499999997, 499999997};
    int jokers = 33;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 499999995;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> cards = {483377682, 483382290, 498765432, 483377150, 483379338, 483374318, 498765432, 498765432, 483378026, 483381781, 483380812, 483388741, 483362966, 483372988, 483375302, 498765432, 483379637, 483364204, 483382169, 498765432, 498765432, 498765432, 483363010, 483363580, 498765432, 483365711, 483383171, 498765432, 498765432, 483359372, 498765432, 483363516, 483375743, 483378755, 498765432, 498765432, 498765432, 483378059, 483376210, 498765432, 498765432, 483376712, 483377199, 483378236, 498765432, 498765432, 498765432, 483367848, 483370042, 498765432};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 499521289;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> cards = {1, 4, 6, 6, 6, 6};
    int jokers = 10000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> cards = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    int jokers = 10;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> cards = {2, 3, 4, 5, 6};
    int jokers = 4;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> cards = {500000000, 500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 750000000;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> cards = {3, 3, 3};
    int jokers = 100000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> cards = {500000000, 500000000, 500000000, 500000000, 500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 600000000;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> cards = {500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 510000000;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> cards = {6, 6, 6, 6, 6, 6};
    int jokers = 6;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> cards = {100, 10, 1};
    int jokers = 100;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> cards = {1, 1};
    int jokers = 100;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> cards = {22222, 33333, 22222, 33333, 55555, 66666, 77777, 88888, 99999, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 37036;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> cards = {5, 0, 8, 5, 415, 0, 9};
    int jokers = 51515;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> cards = {0, 0};
    int jokers = 1;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
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
    vector<int> cards = {500000, 3442342, 123123123, 342334, 2342343, 4334344, 3434231, 34343434, 1, 1, 500000, 3442342, 123123123, 342334, 2342343, 4334344, 3434231, 34343434, 1, 1, 500000, 3442342, 123123123, 342334, 2342343, 4334344, 3434231, 34343434, 1, 1, 500000, 3442342, 123123123, 342334, 2342343, 4334344, 3434231, 34343434, 1, 1};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
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
    vector<int> cards = {1, 1, 1, 1000000};
    int jokers = 1000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> cards = {490000001, 490000002, 490000003, 490000007, 500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 592000002;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> cards = {59475, 68237, 56303, 87177, 92318, 90893, 65164, 61990, 67419, 65088, 91487, 99098, 63518, 94527, 56230, 88558, 81539, 82852, 53553, 96136, 51615, 61983, 93885, 92770, 92583, 91693, 86938, 66345, 88199, 92828, 81734, 65583, 79829, 69544, 93576, 95937, 96011, 86793, 85734, 54050, 57488, 58443, 89607, 65462, 95583, 67724, 89369, 72568, 80958, 54313};
    int jokers = 1000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 62544;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> cards = {3, 3, 4};
    int jokers = 10000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> cards = {40877, 18411599, 6314998, 26420500, 19111493, 15676828, 11443566, 29269926, 26881114, 24390608, 5687885, 28060565, 23211157, 16776519, 9931117, 489527, 2986015, 11906174, 4812519, 5419692, 32293827, 14560188, 3890294, 152541, 291124, 12344854, 17368737, 18659852, 19658846, 19835315, 5430659, 21660822, 14726687, 11503386, 1863393, 19852264, 25589999, 26220103, 16983895, 9864318, 28616891, 23739567, 31228034, 30242001, 17619981, 4650008, 15095577, 7687867, 28168241, 6847396};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 193418;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> cards = {5};
    int jokers = 5;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> cards = {500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> cards = {18823, 127123, 1271, 1277, 51726, 5775, 1773, 1884, 1751, 3717, 4661, 38192, 128771, 1883199, 1773};
    int jokers = 19889;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 1945;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> cards = {1000, 1000, 1000};
    int jokers = 10000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 1500;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> cards = {500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 496000000, 496000000, 496000000, 496000000, 496000000, 496000000, 496000000, 496000000, 500000000, 500000000, 500000000, 499999999, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 496000000, 496000000, 496000000, 496000000, 496000000, 496000000, 496000000, 494543534, 500000000, 500000000, 500000000, 499999999};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 509875989;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> cards = {500000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int jokers = 15;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
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
    vector<int> cards = {500000000, 499999996, 499999999, 460000001};
    int jokers = 494534686;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 613633670;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> cards = {4, 4, 4, 4};
    int jokers = 1000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> cards = {1, 1, 1, 7};
    int jokers = 8;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
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
    vector<int> cards = {2, 2, 8};
    int jokers = 10;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> cards = {1, 1, 1, 1, 1, 1};
    int jokers = 500000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
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
    vector<int> cards = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 500000000, 499999999, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 100000001, 100000000, 99999999, 99999998, 123456789, 87654321, 123, 234, 345, 456, 567, 678, 789, 11, 13, 100000000, 456345234, 45454, 35353, 987, 876, 765, 654, 543, 432, 321, 0};
    int jokers = 499999999;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> cards = {2, 2, 2, 3, 3, 3, 15000, 10000};
    int jokers = 1000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> cards = {500000, 3442342, 123123123, 342334, 2342343, 4334344, 3434231, 34343434, 1, 1, 500000, 3442342, 123123123, 342334, 2342343, 4334344, 3434231, 34343434, 1, 1, 500000, 3442342, 123123123, 342334, 2342343, 4334344, 3434231, 34343434, 1, 1, 500000, 3442342, 123123123, 342334, 2342343, 4334344, 3434231, 34343434, 1, 1, 500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
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
    vector<int> cards = {0, 0, 0, 0, 0, 500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
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
    vector<int> cards = {0, 0};
    int jokers = 10;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
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
    vector<int> cards = {4, 5};
    int jokers = 1;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> cards = {1, 4, 6, 6, 6, 6};
    int jokers = 1000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> cards = {1};
    int jokers = 5;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> cards = {1, 2, 3, 4};
    int jokers = 9999;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
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
    vector<int> cards = {10, 8, 6, 561, 21};
    int jokers = 20;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> cards = {0, 0};
    int jokers = 100000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> cards = {500000000, 400000000, 30, 20, 25};
    int jokers = 455445445;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> cards = {1, 1, 6, 7, 1, 1};
    int jokers = 1000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> cards = {3, 3, 3};
    int jokers = 3;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> cards = {1, 2};
    int jokers = 10000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> cards = {1, 2, 3};
    int jokers = 10000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> cards = {500000000, 18, 9, 7, 12, 15, 3, 1, 2, 1, 0};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> cards = {0};
    int jokers = 1;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
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
    vector<int> cards = {2257151, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 39485105, 33929299};
    int jokers = 46143145;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 36186450;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> cards = {499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999};
    int jokers = 499999996;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 509999998;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> cards = {500000000, 500000000, 500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 666666666;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> cards = {2, 3, 4, 5, 6};
    int jokers = 5;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> cards = {2, 2, 2};
    int jokers = 100;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> cards = {1, 1, 4};
    int jokers = 8;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> cards = {1, 2, 3};
    int jokers = 4;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> cards = {500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000};
    int jokers = 499999999;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 509999999;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> cards = {1, 1, 1, 2};
    int jokers = 10;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
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
    vector<int> cards = {3, 1, 1};
    int jokers = 4;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> cards = {1000, 1000, 1000, 1000};
    int jokers = 1000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 1333;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> cards = {5, 3, 2, 1};
    int jokers = 10000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> cards = {500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 490000000, 490000000, 490000000, 490000000, 490000000, 490000000, 490000000, 490000000, 490000000, 490000000, 480000000, 480000000, 480000000, 480000000, 480000000, 480000000, 480000000, 480000000, 480000000, 480000000, 470000000, 470000000, 470000000, 470000000, 470000000, 470000000, 470000000, 470000000, 470000000, 470000000, 460000000, 460000000, 460000000, 460000000, 460000000, 460000000, 460000000, 460000000, 460000000, 460000000};
    int jokers = 475000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 485833333;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> cards = {3, 4, 5, 6};
    int jokers = 10000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> cards = {100, 101, 100000};
    int jokers = 300;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> cards = {1, 2};
    int jokers = 10;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> cards = {4, 4, 4};
    int jokers = 100000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> cards = {200000000, 200000001, 200000002, 200000003};
    int jokers = 200000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 250000001;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> cards = {33, 23, 14};
    int jokers = 41;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> cards = {1, 500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 500000000;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> cards = {5, 6, 7};
    int jokers = 100;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> cards = {2, 2};
    int jokers = 100;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> cards = {40, 40, 40};
    int jokers = 3;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> cards = {3, 3, 3, 3, 3};
    int jokers = 5;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> cards = {500000000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> cards = {500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 571428571;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> cards = {3741, 2358, 21789, 537, 34812, 2751};
    int jokers = 2718;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 2788;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> cards = {200, 300, 400};
    int jokers = 111111;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 450;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> cards = {10000, 9999, 9998, 9997, 9997, 9995, 9996, 9995, 9993, 9991, 9989, 9980, 9979, 9980, 9500, 8990, 10000, 10000};
    int jokers = 9000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 10409;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> cards = {10, 8, 6, 561, 21, 50000000, 10035435};
    int jokers = 56146540;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> cards = {4, 4, 4, 4};
    int jokers = 50000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> cards = {999999, 10001, 999, 765, 100001};
    int jokers = 50;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 815;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> cards = {7, 7, 7, 7, 7};
    int jokers = 7;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> cards = {10, 15};
    int jokers = 300;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> cards = {10, 10, 10};
    int jokers = 1000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> cards = {8, 8};
    int jokers = 8;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> cards = {1, 0, 0};
    int jokers = 2;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> cards = {5, 5, 5, 5, 5};
    int jokers = 5000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> cards = {500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 411172541, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 491876541, 500000000, 500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 508060981;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> cards = {10, 10, 10, 10, 10, 10};
    int jokers = 1000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> cards = {10000000, 10000001, 20000003};
    int jokers = 50000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 20000001;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> cards = {50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 0};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 50000000;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> cards = {4, 4, 4, 4};
    int jokers = 4;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> cards = {0, 250000000, 500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 250000000;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> cards = {2, 2};
    int jokers = 2;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> cards = {3, 3, 3};
    int jokers = 20;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> cards = {0, 0};
    int jokers = 1000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> cards = {5, 5, 5};
    int jokers = 10;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> cards = {7};
    int jokers = 20;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> cards = {3, 1, 6, 7};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> cards = {3, 3, 3, 3};
    int jokers = 4;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> cards = {10, 10, 10, 10};
    int jokers = 99999;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> cards = {10, 10, 10};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> cards = {4, 4, 4, 10, 10};
    int jokers = 20;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> cards = {1, 1};
    int jokers = 4;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> cards = {50, 50, 50, 50, 50};
    int jokers = 400000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> cards = {3, 3, 4, 5};
    int jokers = 10;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> cards = {36629216, 37215528, 37379060, 40873980, 49646416, 69909134, 80835680, 82426872};
    int jokers = 2000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 37741268;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> cards = {200000000, 200000001, 200000002, 200000003, 200000004};
    int jokers = 200000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 240000002;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> cards = {50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000, 50000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 51020408;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> cards = {1000, 1000, 1000, 1000, 1000};
    int jokers = 1000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 1200;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> cards = {100000000, 100000000};
    int jokers = 100000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 150000000;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> cards = {2, 3, 4, 5, 6};
    int jokers = 999;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> cards = {1, 2};
    int jokers = 100;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> cards = {1, 2, 3, 5, 500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> cards = {10, 11, 12, 13, 14, 15, 16};
    int jokers = 10;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> cards = {1, 1, 1, 2, 2};
    int jokers = 5;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> cards = {250000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 506410256;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> cards = {7, 7, 7, 8, 8, 9, 9, 10, 16};
    int jokers = 1000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> cards = {5, 3, 2, 4, 5, 76, 84, 3};
    int jokers = 0;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> cards = {6, 6, 6, 100};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> cards = {500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 522727272;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> cards = {10, 10, 10};
    int jokers = 15;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> cards = {100, 101, 100, 999, 9999, 4258, 44457, 77787, 787, 454, 787878};
    int jokers = 19959782;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> cards = {1, 1, 1, 1, 15};
    int jokers = 60;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> cards = {2, 2};
    int jokers = 24;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> cards = {3, 3, 4};
    int jokers = 5;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> cards = {0};
    int jokers = 5;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> cards = {1, 1, 20};
    int jokers = 100;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> cards = {499999999, 499999999, 499999999, 499999999, 499999999};
    int jokers = 499999999;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 599999998;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> cards = {1, 1, 3};
    int jokers = 4;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> cards = {500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 0};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 500000000;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> cards = {500000000, 400000000, 200000000, 100000000, 300000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 300000000;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> cards = {450000000, 450000100, 450000200, 450000300, 450001000, 450000900, 450000800, 450000700, 450000600, 450000500, 450000400, 450000350, 450002000};
    int jokers = 500000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 450039065;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> cards = {499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 499999999, 299999999, 399999999};
    int jokers = 499999999;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 519999998;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> cards = {1, 2};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> cards = {0};
    int jokers = 0;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> cards = {1, 2};
    int jokers = 3;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> cards = {9, 9, 9, 9};
    int jokers = 12;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> cards = {0, 0, 10};
    int jokers = 4;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> cards = {100, 100, 100, 100};
    int jokers = 40;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> cards = {1, 1, 10};
    int jokers = 3;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> cards = {3, 4, 5};
    int jokers = 6;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> cards = {1, 1, 2, 3};
    int jokers = 1000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> cards = {2, 3, 3};
    int jokers = 100000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> cards = {500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000};
    int jokers = 123456;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 500002469;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> cards = {1, 1, 1, 4};
    int jokers = 9;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> cards = {5, 5};
    int jokers = 10;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> cards = {100, 100};
    int jokers = 5;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> cards = {500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 520833333;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> cards = {5000000, 5000000, 4000000, 6000000, 7000000, 4567868, 453212, 3578694, 97897898, 45645678, 14725725};
    int jokers = 499999999;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4015953;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> cards = {2, 3, 5};
    int jokers = 4;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> cards = {101, 102, 103};
    int jokers = 3;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> cards = {400000000, 400000003, 500000000, 4123455, 43343334, 43343334, 43341334, 43143334, 13343334, 23343334, 41343334, 13343334, 43343334, 443433478, 500000000, 89898898, 12343, 35355445, 766776, 35155445, 35055445, 37355445, 343434, 899878};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 355777;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> cards = {500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 512195121;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> cards = {5, 6, 7, 8, 9, 10};
    int jokers = 3;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> cards = {1, 5, 5, 100, 100};
    int jokers = 1000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> cards = {4, 5, 6};
    int jokers = 6;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> cards = {2, 2, 2, 2};
    int jokers = 1000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> cards = {1, 1};
    int jokers = 100000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> cards = {50, 51};
    int jokers = 1;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> cards = {3, 3, 3};
    int jokers = 10000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> cards = {10, 10, 10};
    int jokers = 20;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> cards = {2, 3, 4};
    int jokers = 5;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> cards = {0};
    int jokers = 13;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> cards = {1, 1, 1, 1, 2};
    int jokers = 1000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<int> cards = {9, 10, 11, 12};
    int jokers = 200;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<int> cards = {4, 5, 6};
    int jokers = 100;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<int> cards = {1, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 500000000;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<int> cards = {3, 4};
    int jokers = 10;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<int> cards = {1, 1};
    int jokers = 1000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<int> cards = {2, 4, 4, 4};
    int jokers = 5000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<int> cards = {300000000, 300000001, 300000002, 300000003, 300000004, 300000005, 300000006, 300000007, 300000008, 300000009, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 300000000, 300000000, 300000000, 300000000, 300000000, 300000000, 300000000, 300000000, 300000000, 300000000, 300000000, 300000000, 300000000, 300000000, 300000000, 300000000, 300000000, 300000000, 300000000, 300000000, 300000000};
    int jokers = 450000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 310000001;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<int> cards = {234, 4532, 111, 17, 909, 645, 34235, 3421, 9, 22, 13454};
    int jokers = 4503;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<int> cards = {10, 10, 10};
    int jokers = 10;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<int> cards = {50, 50, 50, 50, 50, 60};
    int jokers = 400000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<int> cards = {1, 0, 0};
    int jokers = 1000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<int> cards = {0, 1, 2};
    int jokers = 0;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<int> cards = {2, 2};
    int jokers = 1000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<int> cards = {123456789, 321654987, 333444555, 111222333, 222333444, 444555666, 444333222, 333222111, 111999888};
    int jokers = 344355366;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 173339505;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<int> cards = {481964, 375105, 805739, 494426, 302932, 149913, 361663, 64287, 984870, 909404, 26350, 750888, 315721, 670733, 901153, 793373, 94615, 300103, 552318, 55672, 737067, 498846, 860779, 931250, 290060, 787433, 91462, 831000, 560442, 120440, 548133, 682104, 736278, 170808, 27905, 165389, 213774, 136093, 929046, 806588, 23102, 474996, 147068, 734272, 804011, 282090, 562751, 417517, 294102, 445616};
    int jokers = 324324543;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 38678;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<int> cards = {0, 0, 1};
    int jokers = 2;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    vector<int> cards = {500000000, 500000000, 500000000, 500000000, 500000000, 500000000};
    int jokers = 5000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 500000833;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    vector<int> cards = {1, 1, 1};
    int jokers = 1000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    vector<int> cards = {1, 1, 1, 1, 1, 1, 1, 1};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    vector<int> cards = {2};
    int jokers = 5;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    vector<int> cards = {100, 101, 102, 103, 10000};
    int jokers = 700;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    vector<int> cards = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int jokers = 10000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    vector<int> cards = {2, 2, 4};
    int jokers = 5000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    vector<int> cards = {2, 2};
    int jokers = 10000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    vector<int> cards = {500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 510869565;
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    vector<int> cards = {3, 3, 7};
    int jokers = 3;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    vector<int> cards = {3, 3, 3, 4};
    int jokers = 3;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    vector<int> cards = {1, 1, 3, 4};
    int jokers = 4;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    vector<int> cards = {4, 4};
    int jokers = 10;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    vector<int> cards = {500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 545454545;
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    vector<int> cards = {100, 100, 2, 3, 4, 9, 111, 3, 999};
    int jokers = 10000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    vector<int> cards = {1, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000};
    int jokers = 500000000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 500000000;
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    vector<int> cards = {383282690, 44683266, 185210335, 146366464, 495417444, 408214433, 460439854, 362414541, 139280080, 361045535, 191805158, 431673452, 265028925, 430096963, 413205721, 348357544, 342142447, 14574873, 93549435, 286274760, 401686631, 263247611, 222254232, 142314231, 350905186, 214252401, 356214249, 87940568, 98274149, 89149868, 420762639, 269163709, 386554827, 13529006, 86973200, 279117279, 17245894, 204545747, 160832692, 355627440, 345232484, 193647446, 422992375, 340967896, 215862898, 147514360, 484588979, 36508969, 132133122, 324901874};
    int jokers = 16926604;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 20758792;
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    vector<int> cards = {200000000, 210000000, 220000000, 230000000, 240000000, 200000000, 200000000, 200000000, 200000000, 200000000, 200000000, 200000000, 200000000, 200000000, 200200000, 200000000, 200000000, 200000000, 380006000, 400000000, 490000111};
    int jokers = 432555666;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 215014285;
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    vector<int> cards = {1, 102};
    int jokers = 50000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    vector<int> cards = {2, 2, 2};
    int jokers = 10000;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    vector<int> cards = {10, 10, 15};
    int jokers = 12;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    vector<int> cards = {10, 10, 10, 20};
    int jokers = 6;
    CompilingDecksWithJokers* pObj = new CompilingDecksWithJokers();
    clock_t start = clock();
    int result = pObj->maxCompleteDecks(cards, jokers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=2058177&rd=10802&pm=8228
********************************************************************************
#include <string> 
#include <vector> 
#include <map> 
#include <set> 
#include <cmath> 
#include <ctime> 
#include <algorithm> 
#include <iostream> 
#include <sstream> 
 
using namespace std; 
 
vector <long long> a; 
int n; 
 
class CompilingDecksWithJokers { 
public: 
 
  int maxCompleteDecks(vector <int> cards, int jokers) { 
    int i; 
    n = cards.size(); 
 
    a.clear(); 
    for (i = 0; i < n; i++) a.push_back(cards[i]); 
    sort(a.begin(), a.end()); 
 
    long long L = 0, R = a[n - 1] + jokers + 1, M; 
 
    while (L + 1 < R) { 
      M = (L + R) / 2LL; 
      long long need = 0; 
 
      for (i = 0; i < n; i++) if (a[i] < M) need += M - a[i]; 
      bool can = (need <= M && need <= jokers); 
 
      if (can) L = M; else R = M; 
    } 
 
    return (int)L; 
  } 
 
   
  
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]                    
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/