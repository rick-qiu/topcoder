/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10769
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

class TheQuestionsAndAnswersDivTwo {
public:
    int find(vector<string> questions);
};

int TheQuestionsAndAnswersDivTwo::find(vector<string> questions) {
    int ret;
    return ret;
}


int test0() {
    vector<string> questions = {"How_are_you_doing?", "How_do_you_like_our_country?", "How_are_you_doing?"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> questions = {"Whazzup?"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> questions = {"Are_you_ready?", "Are_you_ready?", "Are_you_ready?", "Are_you_ready?"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> questions = {"Do_you_like_my_story?", "Do_you_like_my_story", "DO_YOU_LIKE_MY_STORY?", "Do__you__like__my__story?"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> questions = {"welYgsCwGO", "o", "W", "BPaCs"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> questions = {"QNcLDUAEH"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
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
    vector<string> questions = {"yWT", "_rGkgZVvv", "J", "dwJkAq"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> questions = {"k", "k", "k", "HzfzivKTyoTwqHGixVsDKHOrbzmDZcNpuvRlkfYUHdhDvR", "k", "sCwGOwoToHqoWZNMBPaCso?G_kQNcLD", "HrBlXmyWTMDE_rGkgZVvvQkgJg_", "k"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> questions = {"N", "dfzZnDZpP_zMDmY?uqZiKDyJwPErcdb", "F", "gTyHmwtK_bmuQiLJcRytPTaDzk_cJjA", "kjoUmVFGjtpHnvU"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> questions = {"gGc_PiLXgyqISPUluJZUOjcQAvyukADDhaEmlEivFDVsC", "gGc_PiLXgyqISPUluJZUOjcQAvyukADDhaEmlEivFDVsC", "Z", "Z", "gGc_PiLXgyqISPUluJZUOjcQAvyukADDhaEmlEivFDVsC"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> questions = {"SzI?ZZeSlWrrYjUsPzGzR", "k", "k", "bbFXWRFDdeSnACJEyLYRifVbBtWiYVVazkW", "k", "bbBMXScfWHBSs"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> questions = {"UYiGXxEVYhrOAmmisrh"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
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
    vector<string> questions = {"hGJwu_yc_nYXrHFIhcVHhaj_TroIYuYqrSdGo"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> questions = {"YxXwGGXyVti"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> questions = {"IvLYUgfOUZkKUfOlsPbyKH?wBFNcHFnoRiSep", "IvLYUgfOUZkKUfOlsPbyKH?wBFNcHFnoRiSep", "IvLYUgfOUZkKUfOlsPbyKH?wBFNcHFnoRiSep"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
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
    vector<string> questions = {"iwnTNfNCKucbAhGfmbeCXVDmEnJqzcZG_"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> questions = {"HgtghELkyCFnKYgpWtpZbNSizoBmDlp", "zwWVlguImqtfoVp_VzxgFGjcWFhHvfJYguFF", "HgtghELkyCFnKYgpWtpZbNSizoBmDlp", "HgtghELkyCFnKYgpWtpZbNSizoBmDlp", "HgtghELkyCFnKYgpWtpZbNSizoBmDlp", "XybYs", "HgtghELkyCFnKYgpWtpZbNSizoBmDlp", "puorRm"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> questions = {"YzlMuqTCG", "YzlMuqTCG", "lCdZqzvKvkmAlloTUFTXp", "_stLPdVCdoBDtRfqmNkTywbIF", "lCdZqzvKvkmAlloTUFTXp", "lCdZqzvKvkmAlloTUFTXp", "_LKPUFdQoafpF"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> questions = {"h", "MpEObSrf_MYWPIP_V", "z"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> questions = {"skSFejNNfrSxDdCZvKBb_dBL", "skSFejNNfrSxDdCZvKBb_dBL", "EMS?QlTUyUn", "QlszHU", "tIEZScFt"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> questions = {"kEKqcJlhHzfzivKTyoTwqHGixVsDKHOrbzmDZcNpuvRlkfYUHd", "kEKqcJlhHzfzivKTyoTwqHGixVsDKHOrbzmDZcNpuvRlkfYUHd", "elYgsCwGOwoToHqoWZNMBPaCso?G_kQNcLDUAEHrBlXmyWTMDE", "kgZVvvQkgJg_JdwJkAqNqICdfzZnDZpP_zMDmY?uqZiKDyJwPE", "bTMYFcGegTyHmwtK_bmuQiLJcRytPTaDzk_cJjAlXukjoUmVFG", "kEKqcJlhHzfzivKTyoTwqHGixVsDKHOrbzmDZcNpuvRlkfYUHd", "kgZVvvQkgJg_JdwJkAqNqICdfzZnDZpP_zMDmY?uqZiKDyJwPE", "_YKmEgGc_PiLXgyqISPUluJZUOjcQAvyukADDhaEmlEivFDVsC", "kgZVvvQkgJg_JdwJkAqNqICdfzZnDZpP_zMDmY?uqZiKDyJwPE", "ZFPajpBhIbSzI?ZZeSlWrrYjUsPzGzRinykBVdzwbbFXWRFDde"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> questions = {"EyLYRifVbBtWiYVVazkWkXOEAbbBMXScfWHBSsAVvkZUYiGXxE", "EyLYRifVbBtWiYVVazkWkXOEAbbBMXScfWHBSsAVvkZUYiGXxE", "AmmisrhSJbmxhGJwu_yc_nYXrHFIhcVHhaj_TroIYuYqrSdGok", "cYxXwGGXyVtiOGeLcIvLYUgfOUZkKUfOlsPbyKH?wBFNcHFnoR", "pAlFRrw?UqiwnTNfNCKucbAhGfmbeCXVDmEnJqzcZG_LLiQsHg", "ELkyCFnKYgpWtpZbNSizoBmDlpTLDzwWVlguImqtfoVp_VzxgF", "WFhHvfJYguFFKkFvRSruWXybYsfEXjLpuorRmiyDaLYzlMuqTC", "rgClCdZqzvKvkmAlloTUFTXpIyd_stLPdVCdoBDtRfqmNkTywb", "cYxXwGGXyVtiOGeLcIvLYUgfOUZkKUfOlsPbyKH?wBFNcHFnoR", "EyLYRifVbBtWiYVVazkWkXOEAbbBMXScfWHBSsAVvkZUYiGXxE"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> questions = {"_LKPUFdQoafpFim?WPhBHCMpEObSrf_MYWPIP_VodszuwgRBsk", "_LKPUFdQoafpFim?WPhBHCMpEObSrf_MYWPIP_VodszuwgRBsk", "_LKPUFdQoafpFim?WPhBHCMpEObSrf_MYWPIP_VodszuwgRBsk", "rSxDdCZvKBb_dBLwcoM_EMS?QlTUyUnaV_QlszHUIZltIEZScF", "FUilKoDNYMyqoALvej?eRpP?WJIaWkoeqfjZGvTnvCIEUINNGg", "aXcfaOafbb?OuQkurPKxeZr?ZFaOTcgclZLSjaVXHvhSApPcBG", "HyIzrndZRHemNuZpNNypAuckVCwQkhFhzfUGpGbQOpFsJwXHCu", "FUilKoDNYMyqoALvej?eRpP?WJIaWkoeqfjZGvTnvCIEUINNGg", "aXcfaOafbb?OuQkurPKxeZr?ZFaOTcgclZLSjaVXHvhSApPcBG", "_LKPUFdQoafpFim?WPhBHCMpEObSrf_MYWPIP_VodszuwgRBsk"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> questions = {"JkxEgpXQcsTTqdITJymkyUJHMSqB?HqPdClgtvktTakEOVhTOw", "ImGrAUCtuGNYbKxuSeDAZBOrambSCCkliImGxLjCoBWuyuQjUK", "JkxEgpXQcsTTqdITJymkyUJHMSqB?HqPdClgtvktTakEOVhTOw", "jILSzqBGMvxkneGwB?JVKfcKIuauv?pj_tRjieQPojsnovBgja", "BCFKBwQEbxtv_oDFSImedlAnGOWmUmNgoBzXZNXdzzqwXrWOTK", "pLNoOIdyO?aWFwiylZOko?nGQgLOfFpjjamJ?ZOidKAQBaPsZP", "_OfwmqBIzuUGT_FGjarcHaOIOh?QYpegvNHCrQsnmhIfYXfitl", "d?TLLLWsf?poYVHHrbDeMuQhMV_maaFmvxFXrBfaSWQQLYuJSF", "d?TLLLWsf?poYVHHrbDeMuQhMV_maaFmvxFXrBfaSWQQLYuJSF", "_OfwmqBIzuUGT_FGjarcHaOIOh?QYpegvNHCrQsnmhIfYXfitl"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> questions = {"KVrzETxqWwapJGrCXXV_AKdSUusinAqhURlwoMEDGGusLSFAyP", "dBiWEtHmnDMKaVfogzKUPJhfEOLkjWmepFhenjaIXGHDRtZafc", "KVrzETxqWwapJGrCXXV_AKdSUusinAqhURlwoMEDGGusLSFAyP", "KVrzETxqWwapJGrCXXV_AKdSUusinAqhURlwoMEDGGusLSFAyP", "KVrzETxqWwapJGrCXXV_AKdSUusinAqhURlwoMEDGGusLSFAyP", "KVrzETxqWwapJGrCXXV_AKdSUusinAqhURlwoMEDGGusLSFAyP", "miXcZJITWGgDlHOMfZagsPOjaCqPYhWKsGxwehYEzKFngjDFgI", "KVrzETxqWwapJGrCXXV_AKdSUusinAqhURlwoMEDGGusLSFAyP", "KVrzETxqWwapJGrCXXV_AKdSUusinAqhURlwoMEDGGusLSFAyP", "miXcZJITWGgDlHOMfZagsPOjaCqPYhWKsGxwehYEzKFngjDFgI"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> questions = {"?ZbmnpaqlniqHnHm?JyMEPdXaQxzqUvtPdtmyutLoC_ryWfPlD", "?ZbmnpaqlniqHnHm?JyMEPdXaQxzqUvtPdtmyutLoC_ryWfPlD", "?ZbmnpaqlniqHnHm?JyMEPdXaQxzqUvtPdtmyutLoC_ryWfPlD", "pifRsVNPuchaOfkweLXBj_deFhqICbdusi_EwaNfCDhvEJXue_", "?ZbmnpaqlniqHnHm?JyMEPdXaQxzqUvtPdtmyutLoC_ryWfPlD", "qmjKUZYGtkZx?_cXgaCyfnZllURzzVGM_Vv_unxSTTgEhN?NdA", "_PUhIkUUjwWlyQFUFcJIrtWmQGibMKznoDaCtTLLWqJFr?uJOh", "_PUhIkUUjwWlyQFUFcJIrtWmQGibMKznoDaCtTLLWqJFr?uJOh", "_PUhIkUUjwWlyQFUFcJIrtWmQGibMKznoDaCtTLLWqJFr?uJOh", "?ZbmnpaqlniqHnHm?JyMEPdXaQxzqUvtPdtmyutLoC_ryWfPlD"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> questions = {"CUyBGcPoelfdXzgzpBjZOrfhssHzJwtmgMXvAQsBZqlaLOEXBt", "CUyBGcPoelfdXzgzpBjZOrfhssHzJwtmgMXvAQsBZqlaLOEXBt", "CUyBGcPoelfdXzgzpBjZOrfhssHzJwtmgMXvAQsBZqlaLOEXBt", "CUyBGcPoelfdXzgzpBjZOrfhssHzJwtmgMXvAQsBZqlaLOEXBt", "CUyBGcPoelfdXzgzpBjZOrfhssHzJwtmgMXvAQsBZqlaLOEXBt", "PbvwfEOmvsFqRMuaZSGKWIOlsoiPJyhcsffMLShYtkzLIUhyPO", "oSSlWUgPpLzlobh_fFPIfdhdwjXAUWOnVysroVPCXAKVgloAGd", "PTHkVMGVZIJKDpjWolNRJZxcb_MJRqKWCFwYtJSSlJtOhfHh_b", "jbkgTljTSZkQsQL_QKQtQIHFSqniHJuyatpnEAxoNbjzEeshmg", "oSSlWUgPpLzlobh_fFPIfdhdwjXAUWOnVysroVPCXAKVgloAGd"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> questions = {"EbGzTEgJvFNcPIVURdTZKhwFTEESzvqWzgkrdnKyoBNti_RD_R", "lvLomxPFBxeiyQ_TolZZWPfcnKFXEpn_gCUOzuyfQqBDYrOlW?", "drzDnmXbUzBvaTyTeYiVGjDUJLAzn?BtOp?hiHhJVszWAKvRhD", "drzDnmXbUzBvaTyTeYiVGjDUJLAzn?BtOp?hiHhJVszWAKvRhD", "lvLomxPFBxeiyQ_TolZZWPfcnKFXEpn_gCUOzuyfQqBDYrOlW?", "KSPMNEUVEnKmqWVHAXcaVwKULtlrLg_ggBfNsmHw_ytq?HeESJ", "eTcFZfLIwDCDBDYMZwwmePQJoHwoiKJUoXTjvQcuIgoNDY?Dtc", "lvLomxPFBxeiyQ_TolZZWPfcnKFXEpn_gCUOzuyfQqBDYrOlW?", "uxRfyobjOacUJLWJwQPvsHpUNLzeyHattCgfTVjIF?DexjHVCJ", "uxRfyobjOacUJLWJwQPvsHpUNLzeyHattCgfTVjIF?DexjHVCJ"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> questions = {"wZnrdFvBEFGiSFwRIKZmIISDfYtzETyicsMjxjuCQRrnyzkpzM", "wZnrdFvBEFGiSFwRIKZmIISDfYtzETyicsMjxjuCQRrnyzkpzM", "wZnrdFvBEFGiSFwRIKZmIISDfYtzETyicsMjxjuCQRrnyzkpzM", "xGSlUruTLzRvPcpcDJNdktgRTq_seloJamPep?FY?BLMpenuCN", "wZnrdFvBEFGiSFwRIKZmIISDfYtzETyicsMjxjuCQRrnyzkpzM", "wZnrdFvBEFGiSFwRIKZmIISDfYtzETyicsMjxjuCQRrnyzkpzM", "VAHtQgKQQpvqVXHXziMcdPWoFCsbMwZkeT?DFRWxQRFKvPyJX?", "wIE?TeBpcRItoxExIR?TvMPTFDUN_UBRqBUYdYgfGqHdxUZgwB", "yL?zdDCh?xAsINKOrdhiCtlMtkNlXLJUddAbFrli_d?grXdCRA", "RRAueniDClFyuTVqZRrNocWgLBXGAwqaYpwzUixsvtOWEistiw"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> questions = {"OErdWsBqSReIWnAoKPzYZ_eiHSYIvExu_fXbWdihkhzZaGQ_pI", "OErdWsBqSReIWnAoKPzYZ_eiHSYIvExu_fXbWdihkhzZaGQ_pI", "OErdWsBqSReIWnAoKPzYZ_eiHSYIvExu_fXbWdihkhzZaGQ_pI", "kfatWwgRDcdVKUppXfRCvzQ?tGzEbKzgzPcOrVAFmZhdqncksJ", "OErdWsBqSReIWnAoKPzYZ_eiHSYIvExu_fXbWdihkhzZaGQ_pI", "OErdWsBqSReIWnAoKPzYZ_eiHSYIvExu_fXbWdihkhzZaGQ_pI", "kfatWwgRDcdVKUppXfRCvzQ?tGzEbKzgzPcOrVAFmZhdqncksJ", "kfatWwgRDcdVKUppXfRCvzQ?tGzEbKzgzPcOrVAFmZhdqncksJ", "kfatWwgRDcdVKUppXfRCvzQ?tGzEbKzgzPcOrVAFmZhdqncksJ", "nSYswkheBJQTsMomNF_ycyjtqfxkHNcQW_MUxiaMufUpOiOTQh"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> questions = {"k", "cJlhHzfzivKTyoTwqHGixVsDKHOrbzmDZcNpuvRlkfYUHdh", "welYgsCwGOwoToHqoWZNMBPaCso?G_kQNcLDUAEH", "XmyWTMDE_rGkgZVvvQkgJg_JdwJkAqNqICdfzZnDZpP_zM", "?uqZiKDyJwPErcdbTMYFcGegTyHmwtK_bmuQi", "RytPTaDzk_cJjAlXukjoUmVFGjt", "vU_YKmEgGc_PiLXgyqISPUluJZUOjcQAvyukADDh", "lEivF"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 256;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> questions = {"_uiAZFPajpBhIbSzI?ZZeSlWrrYjUsPzGzRinyk", "zwbbFXWRFDdeSnACJEyLYRifVbBtWiYVVazkWkXOEAbbBMXS", "HBSsAVvkZUYiGXxEVYhrOAmmisrhS", "xhGJwu_yc_nYXrHFIhcVHhaj_TroIYuYqrSdGokt_bcYxXw"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> questions = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 1024;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> questions = {"gfOUZkKUfOlsP", "H?wBFNcHFnoRi", "AlFRrw?UqiwnTNfNCKucbAhGfmb", "VDmEnJqzcZG_LLiQsHgtg", "kyCFnKYgpWtpZbNSizoBmDlpTLDzwWVlguImqtfoV"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> questions = {"gFGjcWFhHvfJYguFFKkFvRSruWXybYsfEXjLpuorRmiyDa", "lMuqTCGxVrgClCdZqzvKv"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
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
    vector<string> questions = {"oTUFTXpIyd_stLPd"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> questions = {"DtRfqmNkTywbIFWawxHQr_LKP"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> questions = {"afpFim?WPhB"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> questions = {"ObSrf_MYWPIP_VodszuwgRBskSFejNNfrSxDdCZvKBb_dBLwc", "EMS?QlTUyUn", "QlszHU", "tIEZScFt", "UilKoDNYMyqoALvej?eRpP?WJIaWkoeqfjZGvTnvCIEUINNGgw", "XcfaOafbb?OuQkurPKxeZr?ZFaOTcgclZ", "aVX"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> questions = {"pPcBG?DMHyIzrndZRHe", "ZpNNypAuckVCwQkhFhzfUGpGbQOpFsJwXHCuUsXXYTVzr", "k", "p", "sTTqdITJymkyUJHMSqB?HqPdClgtvkt", "EOVhTOwiE"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> questions = {"k", "k", "k", "k", "k", "k", "k", "k"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> questions = {"qHGixVsDKHOrbzmDZcNpuvRlkfY", "qHGixVsDKHOrbzmDZcNpuvRlkfY", "qHGixVsDKHOrbzmDZcNpuvRlkfY", "qHGixVsDKHOrbzmDZcNpuvRlkfY", "qHGixVsDKHOrbzmDZcNpuvRlkfY"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> questions = {"CwGOwoToHqoWZNMBPaCso?G_kQNcLDUAEHrBlXmyWTMDE_r"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> questions = {"vvQkgJg_JdwJkAqNqICdfzZnDZpP_zMDmY", "vvQkgJg_JdwJkAqNqICdfzZnDZpP_zMDmY", "vvQkgJg_JdwJkAqNqICdfzZnDZpP_zMDmY", "vvQkgJg_JdwJkAqNqICdfzZnDZpP_zMDmY", "vvQkgJg_JdwJkAqNqICdfzZnDZpP_zMDmY", "vvQkgJg_JdwJkAqNqICdfzZnDZpP_zMDmY", "vvQkgJg_JdwJkAqNqICdfzZnDZpP_zMDmY", "vvQkgJg_JdwJkAqNqICdfzZnDZpP_zMDmY", "vvQkgJg_JdwJkAqNqICdfzZnDZpP_zMDmY"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> questions = {"GegTyHmwtK_bmuQiLJcRytPTaDz", "GegTyHmwtK_bmuQiLJcRytPTaDz", "GegTyHmwtK_bmuQiLJcRytPTaDz"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> questions = {"kjoUmVFGjtpHnvU"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> questions = {"gGc_PiLXgyqISPUluJZUOjcQAvyukADDhaEmlEivFDVsC", "gGc_PiLXgyqISPUluJZUOjcQAvyukADDhaEmlEivFDVsC", "gGc_PiLXgyqISPUluJZUOjcQAvyukADDhaEmlEivFDVsC", "gGc_PiLXgyqISPUluJZUOjcQAvyukADDhaEmlEivFDVsC", "gGc_PiLXgyqISPUluJZUOjcQAvyukADDhaEmlEivFDVsC"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> questions = {"How_are_you_doing?", "How_do_you_like_our_country?", "How_are_you_doing?"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> questions = {"Are_you_ready?", "Are_you_ready?", "Are_you_ready?", "Are_you_ready?"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> questions = {"A", "A", "B", "C"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> questions = {"a", "b", "c", "d", "e", "f", "h"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> questions = {"Are_you_ready?", "Are_you_xeady?", "Are_you_raady?", "Are_you_ready?"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> questions = {"ABC", "BCD", "DEF", "def", "def", "asdf", "asgwb", "asdfvaweg", "asdf", "str"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 256;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> questions = {"ab", "cd", "ef"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> questions = {"a", "b", "c", "d", "e"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> questions = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 1024;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> questions = {"A", "B", "C"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> questions = {"How_do_you_like_our_country?", "How_are_you_doing?", "How_are_you_doing?"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> questions = {"a", "aa", "aaa", "aaaa", "aaaaa"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> questions = {"asd", "asdasd", "sdfgsd", "werwer", "sdfsdf"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> questions = {"hi", "hello", "hwd"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> questions = {"a", "A", "b"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> questions = {"my_quest?", "myyy_questtt?", "myMYmy?"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> questions = {"a", "a"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> questions = {"hello?", "sadfasdf?", "fsgsdfhg?"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> questions = {"Do_you_like_my_story?", "Do_you_like_my_story", "DO_YOU_LIKE_MY_STORY?", "Do__you__like__my__story?"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> questions = {"hello?", "fine?", "good?"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> questions = {"aa", "ab", "aa", "ab", "aa", "ab", "aa", "ab"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> questions = {"Are_you_ready?", "Are_you_ready?", "Are_you_ready?", "Are_you_ready?", "Do_you_like_my_story?", "Do_you_like_my_story?", "Do_you_like_my_story?"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> questions = {"Do_you_like_my_story?", "Do_you_like_my_story", "DO_YOU_LIKE_MY_STORY?", "Do__you__like__my__story?", "hello"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> questions = {"a", "b", "c"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> questions = {"A", "B", "A", "B", "A", "B", "A", "B"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> questions = {"troto", "troto", "troto"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> questions = {"Do_you_like_my_story?", "Do_you_like_my_story", "DO_YOU_LIKE_MY_STORY?", "Do__you__like__my__story?", "hogehoge"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> questions = {"A", "B", "A", "B", "C", "C", "d", "C", "A"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> questions = {"asdlkassd", "asdasdasd", "asdasdasd", "aaa", "aaa", "aaa", "aaa", "sdsdsdwe", "www", "www"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> questions = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "d"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 512;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> questions = {"a?", "whatmatt?", "whatmatt?", "whatmatt?"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> questions = {"YY", "XX", "ZZ"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> questions = {"a", "a", "a", "a", "a", "b", "b", "b", "b", "b"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> questions = {"a", "a", "a", "b", "c"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> questions = {"nik", "har", "har", "har"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> questions = {"a", "b", "b", "b", "a"};
    TheQuestionsAndAnswersDivTwo* pObj = new TheQuestionsAndAnswersDivTwo();
    clock_t start = clock();
    int result = pObj->find(questions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22768681&rd=14146&pm=10769
********************************************************************************
#include <sstream> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
 
using namespace std; 
 
class TheQuestionsAndAnswersDivTwo 
{ 
public: 
  int find(vector <string> que) 
  { 
      int i,j,cnt=0,set=0; 
      for(i=0;i<que.size();i++) 
      { 
          set = 1; 
          for(j=i+1;j<que.size();j++) 
          { 
              if(que[i] == que[j]) 
                    set = 0; 
          } 
          if(set)cnt++; 
      } 
 
 
        return 1<<cnt; 
  } 
};

********************************************************************************
*******************************************************************************/