/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7540
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

class QuantumAlchemy {
public:
    int minSteps(string initial, vector<string> reactions);
};

int QuantumAlchemy::minSteps(string initial, vector<string> reactions) {
    int ret;
    return ret;
}


int test0() {
    string initial = "ABCDE";
    vector<string> reactions = {"ABC->F", "FE->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "AABBB";
    vector<string> reactions = {"BZ->Y", "ZY->X", "AB->Z"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string initial = "AAABB";
    vector<string> reactions = {"BZ->Y", "ZY->X", "AB->Z"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "AAXB";
    vector<string> reactions = {"BZ->Y", "ZY->X", "AB->Z"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string initial = "ABCDEFGHIJKLMNOPQRSTUVWYZABCDEFGHIJKLMNOPQRSTUVWYZ";
    vector<string> reactions = {"ABCE->Z", "RTYUIO->P", "QWER->T", "MN->B"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "AAAAAAAAAAAAAAAAAAABAAAAA";
    vector<string> reactions = {"AM->N", "AB->C", "AV->W", "AK->L", "AT->U", "CA->D", "OA->P", "JA->K", "AL->M", "UA->V", "AN->O", "AI->J", "AE->F", "QA->R", "AW->Y", "HA->I", "FA->G", "PA->Q", "AG->H", "ZA->X", "AS->T", "DA->E", "AR->S", "AY->Z"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string initial = "AAAAABAAAAAAAAAAAAAAAAAA";
    vector<string> reactions = {"WA->Y", "IA->J", "AO->P", "BA->C", "KA->L", "FA->G", "AD->E", "AC->D", "AR->S", "SA->T", "AL->M", "AY->Z", "AV->W", "JA->K", "AH->I", "UA->V", "ZA->X", "AP->Q", "TA->U", "EA->F", "AN->O", "GA->H", "QA->R", "AM->N"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "GJJ";
    vector<string> reactions = {"IJG->C", "JG->I", "JI->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string initial = "KGPHUVYHQDLKJDYJHYUNHAG";
    vector<string> reactions = {"IGJ->C", "GJ->I", "IJ->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string initial = "BRRBRBR";
    vector<string> reactions = {"BKR->T", "BR->K", "TKR->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "RRBBRB";
    vector<string> reactions = {"RB->K", "RKT->X", "RBK->T"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "NNJJ";
    vector<string> reactions = {"NJ->B", "NBJ->X", "JN->F"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "JMRNMNBJ";
    vector<string> reactions = {"NJ->F", "NJ->B", "JNB->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "BSBSBBS";
    vector<string> reactions = {"BJS->G", "SB->J", "GBJ->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "SSBSBB";
    vector<string> reactions = {"BSJ->G", "GBJ->X", "BS->J"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "NVNNNNNVVVNNNVVNVNVVVVVNVN";
    vector<string> reactions = {"VNRH->D", "DR->Y", "RKD->E", "NV->H", "YDA->X", "DANR->K", "NVH->R", "HR->A"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string initial = "HHHQQQQHHQHQHQHQQHQQQHHQQH";
    vector<string> reactions = {"QH->K", "QK->V", "KQHV->E", "KVHQ->O", "EKO->P", "PN->X", "PVO->M", "HKO->N"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string initial = "EVOEOCZEOOEOOEVEOEOOEOEOEOEOZOEEOEOECOEEOEOOEOEO";
    vector<string> reactions = {"OZE->C", "ZOEC->V", "QA->X", "ZV->F", "SFCV->A", "EO->Z", "VOC->S", "CSVF->Q"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string initial = "EOEOOOOEEEOOZOOOEOEOEEEEOEEOEVOVOEEOZOCEEZOOCOEOEO";
    vector<string> reactions = {"OEZ->C", "OCV->S", "CSFV->A", "OE->Z", "QA->X", "ZV->F", "CSFV->Q", "ZOCE->V"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string initial = "FBKFFFKKFKFFPFBKFKFKKKFFFKKKFFFFWFFFKFFKKPKPFBFFF";
    vector<string> reactions = {"PWBF->D", "KF->B", "DPG->N", "FB->P", "KPBW->O", "BWPD->G", "DNWO->X", "PFK->W"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string initial = "FWFFKKFFKKKPKPKKFBFFFFFKKFFKFFKFFFAFBFBKPKKFFFFKFF";
    vector<string> reactions = {"BDPW->G", "WNOD->X", "PWBK->O", "DPG->N", "KF->B", "PWFB->D", "BF->P", "FKP->W"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string initial = "BBWBW";
    vector<string> reactions = {"BW->R", "RZ->X", "MG->T", "BI->Z", "IB->G", "WI->M", "WB->I", "TG->P"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string initial = "WBB";
    vector<string> reactions = {"BW->R", "RZ->X", "IW->M", "WB->I", "MG->T", "BI->G", "BI->Z", "GT->P"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "ZGZGGZGGGZZ";
    vector<string> reactions = {"WZ->C", "YF->X", "WA->F", "GZ->A", "WG->P", "RA->Y", "AG->W", "ZW->R"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string initial = "GZGZNGZGZGZG";
    vector<string> reactions = {"WZ->C", "GA->W", "AR->Y", "GZ->A", "WA->F", "ZW->R", "FY->X", "GW->P"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string initial = "NVVN";
    vector<string> reactions = {"ZN->C", "NM->I", "MN->S", "NM->Z", "VN->M", "ZV->E", "KV->X", "MN->K"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string initial = "VNN";
    vector<string> reactions = {"NM->Z", "MN->I", "VN->M", "KV->X", "ZV->E", "NM->S", "NM->K", "NZ->C"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string initial = "KKZK";
    vector<string> reactions = {"IE->V", "KZ->E", "EI->A", "IK->W", "EZ->Q", "KE->I", "KI->N", "KI->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string initial = "MGMGMMUBMGGGGUMGMCGGBMBMGUGUCCGMMMMGGMJMMGGGMWMGGG";
    vector<string> reactions = {"GM->B", "WMGJ->S", "MJBGWC->R", "GSCMBWRUJ->X", "MGB->U", "CU->W", "MBUG->C", "CGBU->J"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string initial = "BMGCCMGGGMGGGMWUBGMUUGGMGMUGJMBMGGMGMMCGGMMMMGMGG";
    vector<string> reactions = {"GBM->U", "MG->B", "UC->W", "WMGJ->S", "UWGBMRSJC->X", "BMGU->C", "BUGC->J", "CMWGBJ->R"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "JJJJYYYJYY";
    vector<string> reactions = {"SY->Z", "WJY->T", "WATJY->Q", "QWJT->S", "YSJTAWQ->P", "JY->W", "YJA->X", "JYTW->A"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string initial = "JYJYJYOJJYYW";
    vector<string> reactions = {"YJW->T", "TYWJA->Q", "WTJQ->S", "TAQJWSY->P", "AJY->X", "YJ->W", "WYTJ->A", "YS->Z"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string initial = "VQVQKGVQVVQVVVQRVVQVQVQVGHQJQKQKQGQQQVVQQHQVVRV";
    vector<string> reactions = {"QRVJHKG->I", "KRGQHV->J", "VKQGR->H", "IJHRKGQV->S", "VQKG->R", "KQV->G", "SGK->X", "QV->K"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string initial = "VQVGQKVVQVVQKVHQQKQVVQHVQVRQQGGQQQRVJVVVQQQV";
    vector<string> reactions = {"RQKGV->H", "RQGVKH->J", "VQ->K", "KSG->X", "QVK->G", "VGKQ->R", "JIVGQRHK->S", "HGRKVQJ->I"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "JMJMMWJMWMJWRRMJJRMJWJAMJMJJJWMMWMMJMWWMJJJJMMWJR";
    vector<string> reactions = {"AWPJ->N", "NJLMRPWAZ->X", "AR->L", "MJR->Z", "MJW->R", "MJ->W", "WMJRA->P", "WRMJ->A"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string initial = "JMMMJWJJJJJJJMWWRMMWMRJMJMWMJJMJJJWWRMMWJJAMMMR";
    vector<string> reactions = {"RJMW->A", "RA->L", "JWPA->N", "JM->W", "AMLJWZNRP->X", "JRM->Z", "MWJ->R", "AMJWR->P"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string initial = "SDBBMNJZTNFLYZDCQHBUSSDJQFSNLHZDZHAZSDDWNQEDVCHMB";
    vector<string> reactions = {"BD->I", "TYZD->C", "UMNF->V", "QY->N", "MU->G", "UVN->K", "SITD->Y", "ZQ->F", "RMVG->O", "AJ->L", "SHBD->Z", "VR->X", "HS->D", "BL->S", "PE->W", "HDZS->T", "CU->M", "VMKN->R", "CF->U", "WE->A", "PE->J", "YTIZ->Q", "LBJ->H", "AEJW->B"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string initial = "WCNDDTDDEUYHBFDSZHDZNAVBBBDSNLMQZCSJZSLZJHMNQSQFAH";
    vector<string> reactions = {"YQ->N", "CU->M", "MKVN->R", "UM->G", "RGMV->O", "BL->S", "QZ->F", "JEWA->B", "HSDZ->T", "JA->L", "MNFU->V", "VUN->K", "EP->J", "YTDZ->C", "DB->I", "WE->A", "RV->X", "SDBH->Z", "EP->W", "SH->D", "JLB->H", "FC->U", "TZYI->Q", "DSTI->Y"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string initial = "MGTQUMUWHIOHZWCZHTBMWUQIQHQZKMHWEQEUDZJHZBBWUZUZIB";
    vector<string> reactions = {"ZQI->B", "ZT->U", "TN->I", "MUI->O", "WHKJ->D", "UB->W", "EG->P", "SNV->M", "HJR->E", "UMZ->Q", "JW->H", "FG->X", "DEH->C", "WQ->J", "AL->V", "TMN->Z", "AS->T", "CD->Y", "WQO->R", "DE->G", "YGDC->F", "JRBH->K", "LAS->N", "AV->S"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string initial = "TDJMZQICOUTHMGQQUMKIQBZHWWUBHWUHHMBBEEQWZHZWIUU";
    vector<string> reactions = {"ZT->U", "TMN->Z", "GE->P", "DE->G", "UMI->O", "UB->W", "UZM->Q", "GF->X", "WQ->J", "NT->I", "WOQ->R", "QZI->B", "HJR->E", "CD->Y", "HWJK->D", "JHRB->K", "DYGC->F", "VA->S", "LA->V", "WJ->H", "AS->T", "DEH->C", "ASL->N", "NVS->M"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string initial = "LLLLUSLUBIUUUUOUCUULUGULLUUGUUGULLLLGUIGLUUULUUVUU";
    vector<string> reactions = {"BS->Y", "PO->S", "IK->E", "KD->Q", "AP->T", "UL->G", "RM->D", "BR->P", "DK->Z", "UC->R", "GI->K", "LU->V", "GO->C", "YA->H", "GC->I", "UG->M", "JH->X", "VO->B", "UG->O", "BK->A", "HT->J", "BG->W", "TQ->F", "EZ->N"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string initial = "LLUUUUUGULLGUGULUULVULUULUGLUUOCUULUUBIGUIUL";
    vector<string> reactions = {"IK->E", "DK->Q", "DK->Z", "RB->P", "JH->X", "OG->C", "AY->H", "ZE->N", "PA->T", "GB->W", "KB->A", "IG->K", "VO->B", "UC->R", "SB->Y", "TH->J", "GC->I", "TQ->F", "GU->O", "LU->V", "MR->D", "PO->S", "UG->M", "LU->G"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "YYYYSSYSYSYYSSSYSYSYYZYSYSSSVYYSSYRSSYBVYYSYSSSSSY";
    vector<string> reactions = {"YB->A", "VZ->J", "SY->R", "JM->G", "QN->X", "VD->M", "PM->I", "GM->K", "BO->U", "DM->H", "WI->N", "YR->Z", "BR->T", "GF->E", "RS->B", "BR->D", "UG->P", "IM->F", "YS->V", "AZ->C", "GJ->L", "WG->Q", "DZ->W", "RJ->O"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string initial = "SSSYYSYSSSYRSBYYYSYSYZYYSSYSSYVYSYSYYSS";
    vector<string> reactions = {"GF->E", "SY->R", "OB->U", "WI->N", "UG->P", "RS->B", "RB->D", "MI->F", "BR->T", "RY->Z", "SY->V", "QN->X", "VD->M", "BY->A", "GJ->L", "RJ->O", "GW->Q", "AZ->C", "ZD->W", "PM->I", "GM->K", "DM->H", "VZ->J", "MJ->G"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string initial = "WJLSRFJKNIPLRTYAMIEWUDMOGCYIOUCNGDRDZZJEPMTJISELZ";
    vector<string> reactions = {"UWIRSZL->C", "FJABGQEHYP->X", "QPEBAJO->F", "TZLR->U", "NJCMDI->E", "ICW->V", "TLUZR->W", "PY->H", "ZNWRTDIL->S", "RT->Z", "GP->A", "CKISDU->O", "PVSCDKOEJM->G", "ZRT->L", "BFMQGEP->Y", "MSINCDK->J", "NWDIZSVLCU->K", "VWSKI->M", "IWUZR->N", "ZLRTWU->I", "EO->B", "OPMSEJGC->Q", "LWZTIN->D", "EMVSKJD->P"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string initial = "AINCDJEWTYTEGNYDLOZMOIRJERZCMLSURUDSJIWJZPMILP";
    vector<string> reactions = {"SUWNZLCVDI->K", "SPMCEJDOKV->G", "YP->H", "ITLWNZ->D", "GP->A", "OE->B", "AGPFHYBJQE->X", "JNCDIM->E", "RZULSIW->C", "IWVSK->M", "RLZTU->W", "CWI->V", "MVDKESJ->P", "QJEPBOA->F", "CDUIKS->O", "TZR->L", "KISDNCM->J", "LZRT->U", "RT->Z", "PFMEGBQ->Y", "RULWZT->I", "ITZDWLNR->S", "URZWI->N", "OGSPCJEM->Q"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string initial = "OWBWENNSNAEDDCOMICMGVWYIMDKSBSESAEOCEOMMHCCNZOSSEO";
    vector<string> reactions = {"OE->M", "EMO->V", "SYVCOIME->H", "BRAKNWT->Q", "DH->N", "ISMHNYW->K", "QBL->J", "BQLRJTUPF->Z", "PLZABF->G", "CDEOS->Y", "KWPRFNTBAH->L", "NBKHW->A", "KBLAFNTQ->U", "IY->W", "NW->P", "KWYNSHC->B", "DPW->F", "VIDSWKHCN->T", "QZG->X", "NABY->R", "CIOV->D", "VEOM->C", "MECVO->S", "SOEMVC->I"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string initial = "COWOEOSNYVZSBDNCBEIMDNSWECEMSKCSEOEAMODCSMMGHON";
    vector<string> reactions = {"LQB->J", "VOEM->C", "NWBHK->A", "OCDSE->Y", "EMCVOS->I", "IY->W", "UFPLTJQRB->Z", "DWP->F", "NKFTBAQL->U", "LPBAFZ->G", "RBATNWFPHK->L", "ZGQ->X", "DH->N", "OEM->V", "OE->M", "WIYNMSH->K", "CMEVO->S", "HNSKWYC->B", "IYSEOCMV->H", "ABRWKTN->Q", "NYAB->R", "WN->P", "DICWVHNKS->T", "OCIV->D"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "UGMKGQGIFFKHAJCBTPPASEBGQHTMRHVQIQHYPSODJZMSJE";
    vector<string> reactions = {"QT->B", "JGPZCBWRDFVTYIQ->X", "BAGMQEIPHSTJK->V", "EIHUGRSLJNB->Y", "OIUKF->L", "SH->M", "SMH->G", "JGMITHASPK->Q", "MFOSUBQEDVA->W", "JFSELOKQAUVTIMPHGZBD->R", "SMGPH->J", "PSFABH->O", "HDGIBAPMESQVTJFK->U", "QKDMAGOTPFEUSHVJIB->Z", "HSIPT->A", "ISJGPTMH->K", "GIH->T", "GHSM->P", "KH->D", "MQTGJAIHSKPB->E", "DIJQSZULTPOABGMR->N", "MGHSJP->I", "SDPEBJVUWZOATKGFRN->C", "AMVKBS->F"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string initial = "RETBPEHGIDQKJFUCQIBGHHOQTJTYFQGAMSPJAMZKPSGSMHV";
    vector<string> reactions = {"SHM->G", "STGAKMPIHJ->Q", "SBVAKM->F", "OULQBJMTSZIRDPGA->N", "APIKBSHTMEGJQ->V", "UIOKF->L", "STIHP->A", "TJIGPMHS->K", "WIZCJQFYRGVPBTD->X", "SPJHGM->I", "HPBFSA->O", "TWZONAURFBGKDVESPJ->C", "IGMQAPBTSKHJ->E", "HK->D", "SAUIPJQKEDHOMGVBFT->Z", "MOUEFAVSBDQ->W", "TQ->B", "GHI->T", "PMHSG->J", "ZBIUEFSTQDGKVALMPHJO->R", "HS->M", "RNBSLGUEJIH->Y", "KSTPQHIFJEAGVMDB->U", "MGHS->P"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string initial = "DRGACDSFLMMMFECWQPKDQPIOCPGRIIFFDWMYWFERGYAYPPR";
    vector<string> reactions = {"CRDYAKFEMLWQGIPO->S", "PDFM->W", "FSHY->X", "GRDQCFMPWEI->O", "OVFWIALKRMPUQCDYH->J", "CWGSQMPIYKRAE->H", "EOAPWIQGCDM->L", "PYLAGHMEVOFWRNSKDCQI->U", "CDLTEUANYJMSBKIQ->Z", "FIEADQWGMLCOPR->Y", "RWSDGOFJPVIELUQNKCA->B", "VRWKDUGYBEMHAQNPJOFILCS->T", "DFWPM->R", "QF->C", "IGDEPOMRQCFW->A", "PF->D", "DGFWPMR->Q", "PQR->I", "GDQCPFMWR->E", "ALISDYMGRPOWKCEQFH->V", "DPF->M", "RPIWFQCD->K", "MWFRPD->G", "APFGHEMKLRY->N"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string initial = "GMAIPRGLRYPYLRIMEDFICMOFSQCWGDKPDRAFYDPFWPMFQECW";
    vector<string> reactions = {"FHYS->X", "PDOQGIEACMW->L", "QRDCFIWP->K", "PRQ->I", "DPF->M", "RODPMECQGWFI->A", "PWGFQDRMC->E", "DPIMQGCFRWE->O", "GFLOSWAPQMHICYDRKE->V", "FP->D", "DQYCRPFLKIWAGOME->S", "WIERYAGCQMPSK->H", "FPDRGWM->Q", "MKYBSLCDUQEATNJI->Z", "QRYMAOCDWLPIKFNSGHVE->U", "UPJESWLIQODCAKRFNGV->B", "PFDM->W", "FWRPMOIGLQEDCA->Y", "FQ->C", "HFKYAPRELMG->N", "DRFMPW->G", "ULRHAYVDFPIWOCQMK->J", "NSHLERGVAOJFPWCBKYDMQIU->T", "WDFMP->R"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string initial = "RRTLZQHEHETBYVGDVOOIFTWEJINCJDVNUUJBYOPQICZZMHS";
    vector<string> reactions = {"JOZINBRU->V", "ON->E", "TOIDLWBCGENVYJQZRUH->A", "JEUO->B", "TBIJEONVHCUZR->G", "NUEZO->I", "JIUOZNBE->R", "EUZONI->J", "VEJNORIHZBUC->T", "NVJ->H", "RNEJDIVUHGCOBTZ->Q", "IEYCUTZDW->F", "PTGDJSMYZAVHFOIEQ->X", "EMDJHVCNO->S", "TNRBGUVICHOJDZ->Y", "NEOZ->U", "AJRYETZIDWQUV->M", "OZIEHNBJVRU->C", "JCHOEDGRZIQTNUVBY->L", "GHDNIRJUYZBCOTLQEV->W", "RVGATMDOBE->P", "NEO->Z", "ZTVIPCHJNMODQYAUEF->K", "GNOBHVT->D"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string initial = "CTEIVIHCPNZNOHUBQJFIYLOZVODYTQJJDHUBEERSVZGWTM";
    vector<string> reactions = {"JVN->H", "ZNOEU->I", "ZOEN->U", "GDOBVJUCNRZTHI->Y", "JIUCVROZHENB->T", "TJBHIOCURNVZE->G", "EZUYICWTD->F", "ZUIEON->J", "ON->E", "JCNTIQAHOYMFUEPZVD->K", "QJHCIYRGVTNBUEOZD->L", "RTVGDAEMBO->P", "NOE->Z", "NGBVTOH->D", "EUOBNVIHRZJ->C", "VEHTYUWCRNJZGLIODBQ->A", "UJEO->B", "DTGRJVEOUHCINZB->Q", "JENUOIBZ->R", "DJUTVIQRWZYEA->M", "UNIJBROZ->V", "OPJVHEZIASQGTMDYF->X", "RVHOQBILDUYCENGZTJ->W", "NOMJHCEDV->S"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "ZEIBCKWDOVMSSQJCOOBHIRASKVUFYPUNFCPERLG";
    vector<string> reactions = {"SCFO->Y", "OPGENYKULCSVBDFAI->R", "PRBOSYEIKCVU->T", "OC->F", "UPIDWTYL->M", "SFYOIC->N", "YHW->Z", "OCFSNIDY->G", "SOFYC->I", "OCF->S", "FOSCNIY->D", "UAIOV->W", "BGF->V", "BNSLACVGFK->E", "FSYIDGOC->A", "ILFY->B", "NESOGBFLKVYIACD->P", "UKNMTQDBSOEFCPWARGVLIY->J", "AVNSCOYTKPGWBDIM->H", "DSINOGFYC->L", "AZIGYLQPKCNJDWOMSHUEFTVBR->X", "DBC->K", "AYKILDFNVGEOPSC->U", "LTGDSAKEUPVRWBMFIYO->Q"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string initial = "VLSYCKEBNGSIIWRMKJDCCBPUVHOAQREFOSPF";
    vector<string> reactions = {"LSGCAFDNKEYVOIP->U", "URYCLQOENPMSKGFAWIDBVT->J", "TWYPILDU->M", "GBF->V", "CBKTWPGOIVYNDMAS->H", "DFSCINYO->G", "AVOIU->W", "OIYCSGDF->A", "CO->F", "AOPYCBDUKNFIGVLSE->R", "YFSOC->I", "ABKSFVNLCG->E", "HWY->Z", "SNOFYDCGI->L", "YECOFSNKVAGBDLI->P", "ICSYOF->N", "FCO->S", "LVAIFODKBRWUEGMTYPS->Q", "YIFL->B", "CBD->K", "OIUYPCRBKEVS->T", "FARQVZSCLDGBKNMEJPHYOTUIW->X", "INYFCSO->D", "FCOS->Y"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string initial = "ACLTMCARCCCMCYMMCCRATAAMAAVYRMLLMAVMCGSACALMCSRASV";
    vector<string> reactions = {"AC->M", "MISTHCLVPOYKAR->N", "PUIHSNOAKJFTRVCZWQML->E", "TCVLYAMRS->P", "PQRMHKSTV->Z", "MUYHAKOVNRTSCL->J", "MUDCAHFOIENZWRTLKPSVJ->G", "LYKVTHCPSIAMR->O", "LPITSYMHACRV->K", "TFKJAM->D", "NOMKUHTJSPR->F", "VYTRAPSMLC->H", "LYSTUORHZPKMIVCJQNA->W", "MTRAVSYPHLC->I", "VPCHG->X", "HPVIYTACOMK->U", "CAMR->L", "LMATR->Y", "MCA->V", "PARYCTUMHSJKLVNIO->Q", "MAC->R", "CTRLAYM->S", "ODP->B", "ML->T"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string initial = "SMMMACVLMTARLCCVGAAMACCYMCAMR";
    vector<string> reactions = {"TYIAMVRLPHSC->K", "VONASCKYRMHULT->J", "MCASOLKTPRHVIY->N", "IVCPOKMAYHT->U", "MCRA->L", "AC->M", "ML->T", "YCMALTR->S", "MAJTFK->D", "LTSACVMPHYR->I", "SMUTZVLYPCANJRQOIKH->W", "HMCRTYKAPSVIL->O", "HRTPKMQVS->Z", "CPVGH->X", "MSRATPLYVC->H", "DPO->B", "NPMHUJRKTOS->F", "MCA->R", "TAEPVJMCUKZWFRHOISNLD->G", "IURWTZOVPMAKFCHQLNSJ->E", "ALMTR->Y", "SMTARYVCL->P", "ACM->V", "IKPYTMUVAHLNJCROS->Q"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "DSQSJEZCRWCZTGFOAAMTVTBURIIRNWQSILDYBJWJEMGGQ";
    vector<string> reactions = {"OTILESQUMBAJGC->F", "TJAOFDQULWMSE->Z", "TIGMJERCSWA->B", "ETQPJMRAGIWCLSB->U", "EARCSJWIGUBTPQLM->O", "QJASTEIGWCRBM->P", "NEABHCZUIKORDMW->Y", "GSRJTBQMEPIWC->L", "IJBOCQSLMRGFPTUEWA->V", "JQTUWGFMNIRZKBYSD->X", "AWREGSTIJM->C", "SPFTQOILUVBGAMWERCJ->D", "OCTGQLJBZWPDFVIER->H", "JEAPLCQOTZDSRGWIV->K", "EMRWSAGCJBTI->Q", "FMSUCKIWZJR->N"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string initial = "SYGZUCARGZQSVRBRDITSECWBIJWJLFMTGQJNDQWIAMTO";
    vector<string> reactions = {"AMBGRTWSIEJC->Q", "SWRAGEIJTM->C", "MQRNDKIWZFBTJYSGU->X", "CUEAHOBNRZDKMWI->Y", "IESQMJBARGWTC->P", "GFWECDLIBPJTZVRQO->H", "PJSIUTQLRWBGAEMC->O", "RBCEPGQJWSTIM->L", "APMOWGBEUIRTJSLCFQ->V", "SWZRJIUCKFM->N", "TSIARDGPLCZQVEWJO->K", "QBAJLEPSIMWCRTG->U", "WJMIRESCGTA->B", "BUAGPIREJTVFWSCLOMQ->D", "QOUTDJAFLWESM->Z", "OAEUTQCGJBIMLS->F"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string initial = "VSPSTMTIVEENLFCBYNTRFHIZSAGKRJAHYVRQZYLWQNKHF";
    vector<string> reactions = {"QOZJDBFYWETMAKPSIL->G", "WPBTQHREKVSNYIOGF->X", "BVNLEWMTQACJYFOIHKZSDR->P", "FMWRNZYTHVSQCAJLKIE->O", "VKHYFWLNZRCTAS->I", "ZYCNKRFTIWHVALS->J", "JFIGLBVSPOHEQCA->U", "JMVQZRLIYAHCFNSTWK->E", "SZNARFYLTV->H", "NYHFCVRJZQTILESWAOMK->B", "CLVHTFWNASI->M", "INYWRAFVTCLHKZJS->Q", "WNFYLZSHVTAR->K", "FLVTRKZANWSH->C", "JLCVWFKHTRYZEIBQAOM->D", "HVTSNLYAZRF->W"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string initial = "FYLKMNNJEFVRKHEBHRZCRTTASQHVZLFTPQGSWIANSVYY";
    vector<string> reactions = {"HRZSTWAFNLVK->C", "OLZTAKPYBEMFDSQIWJ->G", "KWYAHFLZCSVTNR->I", "SLJVMYNTZQHWCKARIF->E", "LYMAVQIOBEDJKRWNSCZFHT->P", "HYMCKFEAWRINQJOVZLST->B", "RNFETKBHSVWPOYIGQ->X", "MIKQFLNSHJRCVTEYAZW->O", "KWQVZROAHFYTMIBJCEL->D", "HFNLYWZASVRT->K", "YHJKZSCNRLTAVFWI->Q", "FYLATZRNHSV->W", "ATZSYRVFLN->H", "OCJBAFEQGPIVLHS->U", "VSHCNILWAFT->M", "NWKISTZHLCYAVFR->J"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string initial = "ADSJTSPWGFQTZRUGKISMOIWCDMWFJVKATPMLFRHUBPVVOEQOA";
    vector<string> reactions = {"KFAMJRTSIWGVPLO->Q", "VSADQURHTIFGNKOLWJPM->C", "NFPKVHQCRTUZMOSDGWJAI->B", "NLMVPOITCKQBGFJSHZW->Y", "HIJKUGVAWRFLDOTQPMS->N", "TSVROKWFAM->P", "GOPQSJITAWFRKLVM->U", "VFJOAKGCRQ->Z", "WSTIOFVKLAMPR->G", "RSMVWPFIOTA->L", "AKFVTPWMRSO->I", "ACZKVGBOWU->E", "JSPEZAGVKFLNCWMUBQTOD->X", "QUOVRFGKPAWSIMTLJ->D", "FDVWOSUMJQGKTARILP->H", "SGTMROVIPFWLKA->J"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string initial = "WJEPMROFVGHIODDVMFWGKJKTUQSFIAAVTMQPAUVTCRBPSZWOLS";
    vector<string> reactions = {"OBCUWVAZKG->E", "BJSWLVZFPCTOQKIGNMH->Y", "GRJWPHAKQTSIMVLFDUO->N", "FHVZUAQDJCSINTWOPKMGR->B", "TOWFMVKPSRA->I", "GMLTASPJOWIFRVK->Q", "AGLKFTRMOWIVPS->J", "QJDGLESCTFBPKUMOZVNAW->X", "PINDROWKJALGFTUQHMVS->C", "RPIKSOATLVFMW->G", "MIPTWOFRVSA->L", "SWOIMPGQJVFAUDRTKL->H", "QCGKAVFOJR->Z", "MGLAWVFSUPJIKOQTR->D", "TGRIPJOWLVFSKQMA->U", "TFKWVROAMS->P"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string initial = "BOUKBVPATIKWJUYNDVWGPERQDRCFNIUTNFRGCKCLPDJAT";
    vector<string> reactions = {"IBDGWRNCVJTPUK->M", "POTHMVJKUNZWGCLBDYE->Q", "RIOFNWAGKDUCBTJVPE->Z", "CKAODFERPINJWT->G", "FTJRDOAWNICP->K", "TOAIFJNCWDP->R", "DCBTIRAWPFGKEJON->V", "ZUMARFCNLKTQYPD->X", "TGCFDJREPIWAONK->B", "AWKDOFRTNIJCP->E", "QTVUNGMZCDYPWB->S", "PODWCAFNJT->I", "WAVGJOFRTBPMNEZDICU->Y", "TGUYPOVEWZRB->L", "YMTPLEWJFDUOIZNVGCA->H", "TJVFKOGWBREPINACD->U"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string initial = "GBDNTVAFKWUTTJQVLFWKCDOUEURPPRKCCBNPDA";
    vector<string> reactions = {"NRGFJIAPTWEDCKO->B", "AIJFCDOWTRPN->K", "AWIONDTJCPF->R", "NRKOAPCFJITWD->E", "CUNBPGWKTRDVIJ->M", "DTWIGJKVORFAEUCNPB->Z", "JUMEIVRBOWNPDCZGFAT->Y", "TWCNJOPDFA->I", "KABVIPNGETDFWCJOR->U", "OPTWKRDEFNIJCA->G", "TAURZQKLYPNDCFM->X", "IJETUMYCDVWOPLGNZFA->H", "YNVPZQBUDGCTMW->S", "KUMYGNBTZJCWEPVHDLO->Q", "NBFIJTWPAEKDGCRO->V", "EBVRPZGYOTWU->L"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string initial = "QGPIWHAKUNBKANBBKYJDVEDHMJENEBAAHJNDWMUQUKMCHJUED";
    vector<string> reactions = {"MAYKWHNQDGIPJECBU->Z", "CHIENQMAWUKJYGBD->P", "TNKCBLDSOJP->R", "KYZEVBNAUHQOMTDSWIGFCPJ->L", "BAMYNHDJEKU->W", "MJUBKACEHWYND->G", "HGQDYWKNCUBAJME->I", "JNUMBHEDKA->Y", "UGKJYMEAWDNBHC->Q", "ZQKEAVJBNUDHC->X", "QPANECZYOUWMIJKVHGDB->T", "YPWHBKACUIJD->O", "ENAIZQHWKVCOBJY->F", "HJUAMKNWYDBE->C", "YFWIMTZQKBVCDGNP->S", "DWJQKMZOYUAHPGE->V"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string initial = "GUEANBIAAUHAKWMMNJMEKDWYDEBNNJQVBJPUEHKDCHBQHKJUJD";
    vector<string> reactions = {"NBTJOSCLDKP->R", "HKVIOYWEQABZJCN->F", "TAQBVOUFKZSCDGJINPHEYMW->L", "NBGAKCMHWJUEDY->Q", "EMGCBWUINHKQYPADJ->Z", "MEWUJDACHKYBN->G", "UPAMWQJHYZKEDGO->V", "JACBKMNHUGWQDYE->I", "WMCKITVFZPBYGDNQ->S", "CIUQNHYKDMBGWJAE->P", "DJQKVNUHEBACZ->X", "PIEGCVZQUANOYHMDKWBJ->T", "DEJBNMUKHA->Y", "YMBKJNUEHAD->W", "ADWKMUJYBHNE->C", "CJIUPAKHBDWY->O"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "CCII";
    vector<string> reactions = {"QFJ->V", "BE->A", "RKE->F", "EZ->B", "IE->X", "BG->L", "IGS->U", "IZE->M", "BC->Q", "IC->D", "DC->E", "EDF->Y", "HJD->P", "CFR->H", "KWC->J", "ZK->R", "QDH->O", "YH->S", "UCD->T", "ECD->W", "KI->Z", "EC->K", "EVP->N", "BW->G"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string initial = "ICC";
    vector<string> reactions = {"IK->Z", "CE->K", "IZE->M", "DC->E", "BG->L", "HDQ->O", "VPE->N", "ZK->R", "EZ->B", "EI->X", "JDH->P", "RKE->F", "BW->G", "FCR->H", "BE->A", "JFQ->V", "KCW->J", "EFD->Y", "CDE->W", "CI->D", "YH->S", "GIS->U", "CB->Q", "CDU->T"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string initial = "MMMMCCCMCCCCMMMMCCMCC";
    vector<string> reactions = {"JG->A", "CM->V", "PMF->J", "BV->P", "ZQO->D", "OC->I", "KL->U", "MC->R", "EF->T", "ZVE->S", "MC->O", "ZFE->N", "OIP->G", "UEG->Y", "QVO->F", "YP->H", "CM->L", "OEM->W", "CV->Q", "LE->B", "CVK->Z", "QCV->K", "QLJ->X", "OMC->E"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string initial = "CMCMCMCCCCCCMMMMMC";
    vector<string> reactions = {"FE->T", "OIP->G", "MOE->W", "MC->O", "BV->P", "VQC->K", "EL->B", "MC->L", "EFZ->N", "JQL->X", "JG->A", "VC->Q", "MC->R", "MC->V", "MCO->E", "ZVE->S", "ZQO->D", "MFP->J", "CKV->Z", "OVQ->F", "YP->H", "OC->I", "LK->U", "GUE->Y"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string initial = "DDDLDDDDDLDDDWDDLUDDDDDLDLDDDDDDLLDDDDLULDDLLLDLDL";
    vector<string> reactions = {"LD->W", "FH->E", "LD->M", "PF->I", "UJ->Y", "DP->F", "FA->C", "UD->H", "LD->U", "EJ->Q", "FA->Z", "WP->O", "KZ->B", "TC->V", "JP->R", "UD->N", "UZ->G", "FH->K", "SK->A", "DN->S", "WN->P", "NP->T", "DZ->J", "RB->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string initial = "DDLLLDDDDDDDLDDDDDDDDLDLDDUDDLDLDDLL";
    vector<string> reactions = {"BR->X", "DZ->J", "DP->F", "FA->Z", "NW->P", "LD->W", "JU->Y", "HF->E", "JP->R", "LD->M", "HF->K", "ZK->B", "PF->I", "KS->A", "WP->O", "ZU->G", "ND->S", "NP->T", "LD->U", "UD->N", "TC->V", "UD->H", "FA->C", "EJ->Q"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string initial = "OOOLLOLLLOLL";
    vector<string> reactions = {"LO->B", "OL->D", "IB->U", "AO->M", "LO->F", "TP->Z", "GO->J", "PW->Y", "FD->H", "SR->X", "UF->R", "VK->N", "OF->V", "OV->W", "LN->C", "LV->K", "PM->Q", "PT->G", "OV->A", "LP->I", "LV->S", "SF->E", "FL->P", "DF->T"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string initial = "LOOLLOOLLL";
    vector<string> reactions = {"LV->K", "OA->M", "PT->G", "FU->R", "PL->I", "RS->X", "LV->S", "PT->Z", "SF->E", "LN->C", "FD->H", "BI->U", "GO->J", "LO->B", "LO->F", "OF->V", "PW->Y", "OV->W", "MP->Q", "LF->P", "OL->D", "OV->A", "KV->N", "FD->T"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string initial = "OAMBOYYOBPOAOBBBPAAYMAMOYABYO";
    vector<string> reactions = {"YU->E", "NDQV->S", "KMI->N", "DLFJ->H", "IYPM->W", "UCT->D", "WEN->G", "UK->Q", "OBYM->C", "AO->U", "GJ->X", "BAOY->K", "ECT->V", "OYBP->T", "DL->Z", "KIT->L", "OAB->I", "LWDN->R", "ETNW->F", "NT->J"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string initial = "OYAMOBYBOPAOYYOMOAYOBAPAABBB";
    vector<string> reactions = {"LDJF->H", "UK->Q", "LWDN->R", "ITK->L", "TWEN->F", "OPBY->T", "WEN->G", "TCU->D", "MPIY->W", "BYMO->C", "TN->J", "QDVN->S", "CTE->V", "AO->U", "JG->X", "ABOY->K", "IKM->N", "UY->E", "BAO->I", "DL->Z"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "JOOTJOCKIKTCCTIJJJKKCCKTJJOCOKIOIHICKTKWCTIKCCTJK";
    vector<string> reactions = {"ZGQPVO->D", "ICJ->H", "KATPOCQ->S", "KJOIC->U", "PZOK->N", "VGQESPA->R", "AQUTVHP->F", "TJICHOK->Q", "ZWLEQ->B", "UNSZ->M", "TKOC->P", "JTK->Z", "AZEGUPL->Y", "PFN->X", "AIZ->E", "KHI->L", "WCTKOJ->G", "TKCWAHJ->V", "JKIC->A"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string initial = "KTIOKKKCICKOCTICOIJKTJTCKTOCIJJJJTWJTOHKCKTCCCOJKI";
    vector<string> reactions = {"CIOKJ->U", "IKH->L", "JOKCTIH->Q", "JCI->H", "IZA->E", "EZLQW->B", "VTQPHUA->F", "LPEAZGU->Y", "GPVQOZ->D", "IJCK->A", "KZPO->N", "EAQPGSV->R", "SNUZ->M", "KOCT->P", "PFN->X", "OCWTJK->G", "JAWCHKT->V", "TKJ->Z", "PQAKCTO->S"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string initial = "AEHWDDCHCAAHDEEADWAAWHFCEWWDEEHAEHAEAHWHDHEEC";
    vector<string> reactions = {"ADMOHCE->J", "ESWH->B", "NBIYLV->X", "OIMJ->G", "SVFIC->K", "WCEDA->N", "MCHNS->Y", "NOS->Q", "RLQJ->Z", "DWAEH->M", "QNBVYJ->U", "EMDS->V", "ILNWMSD->P", "EAH->S", "MWF->R", "EAHD->O", "OISJ->T", "DAHW->L", "SFC->I"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string initial = "WHEDEWWCHEAAEAWEAEHDAHACCEWCEHHDAHDDAEFHE";
    vector<string> reactions = {"DAWHE->M", "HMNCS->Y", "OSN->Q", "IVLNYB->X", "WSHE->B", "CSVFI->K", "QBVNJY->U", "COEDHAM->J", "JIMO->G", "DEWAC->N", "AHE->S", "LJRQ->Z", "EDHA->O", "SFC->I", "FMW->R", "HDAW->L", "OISJ->T", "ESMD->V", "LDSNMWI->P"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "VAIAVAVA";
    vector<string> reactions = {"AI->Q", "UV->E", "VA->B", "VM->N", "JG->L", "PD->H", "ON->Y", "IU->W", "IV->P", "AV->D", "SR->X", "UO->C", "BH->F", "PO->T", "PO->K", "HO->Z", "VA->J", "BI->G", "AH->S", "AJ->R"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string initial = "IUNG";
    vector<string> reactions = {"SU->W", "MC->E", "IN->Y", "UG->R", "BP->O", "JU->D", "NA->L", "YJ->V", "MU->K", "MS->T", "GI->F", "CU->B", "GU->S", "JP->Q", "RY->X", "GP->Z", "IG->P", "AY->H", "IG->J", "PR->A"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string initial = "FWIQHQRISPTGFEJUQJWYSCLRRRLOANUTCCUJSFTJRKSLWTYYPG";
    vector<string> reactions = {"DW->O", "PRL->J", "UGO->M", "ISUT->L", "LP->F", "NCL->R", "DO->Y", "ZAM->V", "QV->B", "RJYW->Z", "TZHU->D", "QLF->W", "WHKX->I", "QBW->P", "NLGJ->C", "ND->E", "CZ->X", "XJ->N", "IQZ->T", "TA->K", "NXJ->S", "OZES->G", "SD->Q", "GQ->H", "SAEF->U", "YD->A"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string initial = "ITUGLJPRYCRLRQTIOKQSFYNJTURSWTHFUACPCSWJRSJFYEQLW";
    vector<string> reactions = {"TA->K", "DN->E", "LGNJ->C", "VQ->B", "LNC->R", "DW->O", "ZC->X", "DO->Y", "JX->N", "ESOZ->G", "SD->Q", "QG->H", "QFL->W", "WBQ->P", "TISU->L", "WXHK->I", "JXN->S", "YD->A", "PL->F", "IQZ->T", "AZM->V", "UZHT->D", "EFSA->U", "OGU->M", "RPL->J", "YRWJ->Z"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string initial = "VYEWYCGTDJDHDAMOTHASFBQLFTRPPJOFISZIEMMBKI";
    vector<string> reactions = {"BGM->T", "EIAB->W", "GTMHJ->K", "WU->G", "TUP->F", "OUKAWVEFYQZTDHGNRLC->B", "UNDMTCOFWXE->Q", "ONHDCBQXY->J", "IDURXPYF->L", "KMLFZBRAXNGYUVCWETQP->D", "MIUOAWPZYR->C", "JTYMHFBDXEKOGAQSL->P", "DMOIWETNR->S", "JRBTQ->H", "ALFQJGWIOZ->Y", "FDWO->N", "ICGFSAVRJNXTBKZEHPW->O", "HRUZBIPCDNWJVLYMFQKOSTAE->X", "HJGDYNTZSLKMFCBE->V", "TSYKDFPMI->U", "LDSMQHZFCKPVIWTB->E", "BLFCH->I", "MDQB->Z", "EKQVRYDIFJCBW->A", "YZDFLSJAVONXMB->R", "QUFYVPLDRXHWAOBNGCT->M"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string initial = "OQEPMAFITDGTMCDYYWIPZEZHLDFVJMFSHKIJBOSTRAB";
    vector<string> reactions = {"DETINOMRW->S", "QLRNISZEFVAWJYHOUTBCDMKP->X", "BDMQ->Z", "LFBHC->I", "AFJLWGIOQZ->Y", "DFJVECRKWQYIB->A", "FOWD->N", "FIXYDRPU->L", "UPT->F", "TEMKGCLYNBJSFHDZ->V", "PURYWMIZOA->C", "TRJBQ->H", "FNLWUMZQEPABVKRCYGXT->D", "DEFWOXMUTCN->Q", "UOHFNQRLWKDCAVEYGTZ->B", "NDLYFSAVOBXJMZ->R", "GBM->T", "JMHGT->K", "CXBNHDQYO->J", "AIBE->W", "VLDMQZCHWPTKISFB->E", "CNTJSBIHEFXZWKGVARP->O", "DCALORQTWUFGXYVNPBH->M", "BJYLXEGTAMOKQDSHF->P", "UW->G", "YFSDTIPKM->U"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string initial = "NJVPNGLSHLRHDFSMOQEVGTKEYUMZKWDRAQITBIFJB";
    vector<string> reactions = {"QTAMCOJYVLHRIFNSKEPDUGBZW->X", "OXQSRUEBDCVKNWGFYJI->P", "JWDSRZIENQGCTYXFP->U", "NSODWAIKEGXQCZBFLVPTJ->R", "OBMEJRQLCWYGHD->N", "XJFQLGYSRE->W", "IXWQNBKDOLCVSAURHY->F", "KXHJRSFLOBVAMUDEPIQZC->Y", "BQYUTOJDGRVZHPFWAKXIC->S", "KLDBXFIMVUGQRZSY->E", "HLJAIBVNOYPMU->T", "OMERQPNJUIBFTDWSHXCZGAL->K", "VZKFYXRAIOUJW->L", "GRKVXAETHPLJM->B", "CPLESYRBHFMVKX->J", "KRQNHDFMELSVIGBTJ->C", "QBTZXPRSEUKFMGICN->A", "VJUTGHDNRC->M", "HGELPTWZYDNJVQBXA->O", "XEHKUMYWNGVROIFTCJQ->D", "YDIJOKTEFN->V", "GPZEKALFYSMVOCBUQNWHDT->I", "GDMAZTYBPQKENVXIJUCSW->H", "MVCWFRDNJHGAPLSTUYZKEXIO->Q", "OJTDSULQIBG->Z", "MXECARFOHWTBSVDNQJYIPL->G"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string initial = "TRJLKTPQABSGGVBYOQHZRSFFVLJDEEIKUHMDNIN";
    vector<string> reactions = {"YQPIAZGVEWBNUSMDJXCTK->H", "THNDUVJRGC->M", "GQMNHRWXUYJTKIOCFVE->D", "FICEXRBMQPGTUNSKZ->A", "INDFMTQRSBHJLEGVK->C", "AQWXZDJYPELHVNBGT->O", "XKOEJFGQNVUCISYDRWB->P", "RNTEBASHWZDOIUGJKQFPMCLVY->X", "QNWBJOXLYIEACPRMHSVFDT->G", "YOMPVNBJHULIA->T", "MJLQGCRBEWHOYD->N", "UXNCOIWLADQRHYKSBV->F", "ZUPTCSHQOENALBGVFDKYWM->I", "FWIRUYKXAJVOZ->L", "HLDAXPKIUVCOFQMJEZSBR->Y", "SJQFLGRXEY->W", "LPWBSVGAJQXOTFDICEKNZ->R", "MGQHSPBWUETICZOXDAJFNRL->K", "VMGXARPTEHLKJ->B", "MUVQBYKZDGFSRXLI->E", "QSTOLGIDJBU->Z", "FRSTPGXNZDCQJIEYW->U", "KOTLWMPVXZUDNCAJEFHGSRYI->Q", "HCGWXRQTZKDOPJFYVBAIU->S", "XBLRSMKEPCYVHF->J", "NETIJYFODK->V"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "IJKHHMSDPUEKMPSCUAQWNRTCTHDEIYWGDWYQATOMKOLJB";
    vector<string> reactions = {"EGBDXRMVOTLIQPNFKHJASZYUW->C", "EQNSKYPVHZXGDJMTAOBWF->I", "BSZINJXGWEOFQARUPCMYVTLD->H", "EMQIPFNDBHUORGLYJCSTAKXVZ->W", "TWORYGXZKEJFDASUIBCLHVM->P", "CPXHSOWZRNYQMAGUFKTJ->E", "KFTOMSHGBLAZIVPUQCNRWXJ->D", "KMFGEVCSXWDQBYILOJ->T", "DSFCTYWHGXAMLPBNOIKVU->Q", "QUEWCVXSMZKYJTNPFAHRGID->O", "XFBCLKPSWUJQDIRYANVE->M", "FQTBWZUNHVSEJDP->A", "BNOIRLUGYWQSAFHTXCMVJE->K", "HQJKPNZSDYAX->B", "VDUAMLWQEKYTSNX->Z", "UAEYZPTRQXGBWFVOIK->J", "FQBZHRIMYSONPEVC->G", "EMCKIZXQBRYFVJNGSPHU->L", "ODCRTUQWIALHNG->S", "BOGADFZSMQTYKCWUE->N", "WJHMSRKPOYTD->F", "LEBYIFQGNDKMHTWOCAU->V", "UAQCEHVTWMDSIJPK->X", "MJICXEVTNHFO->U", "WYVUENJSFKOBTAZMDQHLXGC->R", "SPZWVKCELIXTRGQU->Y"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string initial = "HDYAUGDKMIPWHWQOUSSQKTOEPMJTWINBMKLSYECAJCDHRT";
    vector<string> reactions = {"WQTZGSUKVLPRIXCE->Y", "PRHGIZVAUQDCKTFWSMYXEJN->O", "EPOBZKQHSNGMJFADXYWTV->I", "LQKFTCNVDJWXZBOYAMHGEUS->R", "GCFXKVAITUMDOSBWLHNPY->Q", "WQVSBPHUJZNDEFT->A", "WOSCEQKZMABTFYUGD->N", "SJPYMWORHDTK->F", "IAUTHRWODLCNQG->S", "FUSIGVCHZXEKQBPJMNYR->L", "SQKHPXJNZDYA->B", "NBOZIMPEFHRYQVSC->G", "AZOTYUKBQEGWFPVXRI->J", "VYRSPFQEKCUWAJILXBND->M", "CKTAFGVMPJOUBQZRHLXIWNS->D", "FMURHJTKXGQZCAYNWSPO->E", "LBWHFTYDENOKMIUAQCG->V", "OGJZUDCNFMEVPAWQSBRXILYT->H", "QPESCVHAIJWTDMKU->X", "NUXQLWTVADMKYSE->Z", "LAJRFXHBTEQWCNOMVIUGYS->K", "CTISYOXZDVRFJALUEBWKHMG->P", "KSYQLOEDMVCIWXJFBG->T", "OHPEJYBDZGAFXLQMKTWVSINRU->C", "SCXMHFYQORUZLPIVEDJKTGANB->W", "FHCVIXMONJTE->U"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "KWDCNDHGLFQGPKUPLZNCVVSHBDWESSQHWBYYNGGJNPYISLAHDS";
    vector<string> reactions = {"HS->N", "YW->H", "NFS->M", "BPJ->L", "ALS->R", "FH->B", "EDV->U", "KC->V", "WOB->Z", "QNC->E", "CA->G", "HL->A", "MD->J", "TUN->K", "IA->S", "GTH->Q", "KU->Y", "NU->I", "GH->W", "PS->D", "WJI->X", "ZLS->F", "AE->O", "ILE->T", "WDL->C", "NZV->P"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "KLNPDVCYPHHWDDWGLJSGNFLSBSNIUZNSKBADEQVWYHGGSQY";
    vector<string> reactions = {"SLA->R", "TGH->Q", "HS->N", "WJI->X", "BPJ->L", "HF->B", "NU->I", "EIL->T", "DEV->U", "UTN->K", "BWO->Z", "AC->G", "MD->J", "SP->D", "SFN->M", "ZLS->F", "NQC->E", "KC->V", "YW->H", "NZV->P", "DWL->C", "UK->Y", "EA->O", "HG->W", "LH->A", "AI->S"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "URWQMCQVEWCRTESKPNJVKCQNTMPQCVNJVZJEJKZJFWMJJCRATV";
    vector<string> reactions = {"AP->R", "WR->A", "JT->Z", "FS->C", "RK->N", "FQ->O", "DJ->H", "PT->J", "ZV->P", "WC->F", "FP->K", "ZS->Q", "KZ->L", "TI->G", "HU->W", "TU->I", "NC->M", "TZ->U", "MV->T", "QM->V", "WJ->E", "JP->Y", "QR->D", "EJ->S", "YZ->X", "QK->B"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string initial = "MCTNCJPQRCTVUQRMNWAEJWRQVPJKJMZSTJFKCENCKEVVZJVQJ";
    vector<string> reactions = {"WJ->E", "WR->A", "TP->J", "KZ->L", "ZY->X", "QF->O", "VZ->P", "JD->H", "UT->I", "JP->Y", "MQ->V", "UH->W", "KQ->B", "SF->C", "KR->N", "WC->F", "JT->Z", "SZ->Q", "IT->G", "QR->D", "NC->M", "TZ->U", "MV->T", "PF->K", "PA->R", "EJ->S"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "QKVGYCUIASBDDUIGSWJQTJWLVUBFWIUZNNKQVLYCSSUVZYNN";
    vector<string> reactions = {"OINXY->V", "EYPZ->I", "DBWTE->X", "GNZIVU->T", "DYQUJSC->E", "FND->L", "CZU->S", "YPIMWZF->R", "RCNLP->H", "STQKBWZ->C", "WLUY->D", "SVJXMF->A", "NPM->O", "KENT->Y", "UWL->F", "RSFG->J", "PMRAI->U", "IYVC->Q", "PHAZ->K", "SAFN->G", "QLVG->Z", "GVQXY->P", "AICXE->B", "GORUE->M", "WSKO->N", "PIEL->W"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string initial = "AILQSDQWCTVJUZFSJBDZWULGNKBUNVUWSVQIINGNYVUCYSYLK";
    vector<string> reactions = {"NKET->Y", "TDEWB->X", "KTWBQSZ->C", "SVXFMJ->A", "ZAHP->K", "EYPZ->I", "AICXE->B", "LQGV->Z", "NCPRL->H", "SOKW->N", "LPIE->W", "UWL->F", "IAPRM->U", "NDF->L", "UEROG->M", "ZUC->S", "PWZIMYF->R", "WLUY->D", "ZINVGU->T", "YSQDJUC->E", "GVXYQ->P", "NASF->G", "RSFG->J", "NOXIY->V", "VCIY->Q", "PMN->O"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string initial = "BECRQRUTHUMRVUTVUDVYLLFDBAIARPDDLBUUGEKEAPQPRTSRRF";
    vector<string> reactions = {"KPXUJF->B", "DUVPZAS->Q", "PNEMZ->G", "ITOVBRX->K", "BSLNVKF->T", "XRK->I", "XBYG->W", "PRL->O", "BURVDLP->H", "IZBKWN->Y", "VHPQRJ->C", "USPE->V", "RKEC->F", "QKEHV->M", "IAUW->R", "ZQEVFAS->X", "FEBJ->L", "YXBZRFO->J", "DBZEMTR->U", "QPHJG->N", "HDUYKV->A", "UHR->Z", "AZDUV->P", "PAQFI->S", "GDT->E", "FLTY->D"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "RAUVEAEUQUVPDSFQMATIUPURGBHTRTKDYRCLV";
    vector<string> reactions = {"VHKYUD->A", "DEZMBRT->U", "GQPJH->N", "BFEJ->L", "XRBZFYO->J", "TGD->E", "PSVUADZ->Q", "ZNMEP->G", "VUZDA->P", "TBVIXOR->K", "KVHEQ->M", "UESP->V", "RLP->O", "YBGX->W", "KXR->I", "FTYL->D", "INZWKB->Y", "RKCE->F", "JFKXUP->B", "DLPURVB->H", "AWUI->R", "QFPAI->S", "SFQVEAZ->X", "UHR->Z", "QRVJPH->C", "LNFKSBV->T"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string initial = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBBBBBBBBBBBBBBBCC";
    vector<string> reactions = {"AB->C", "AC->D", "CD->E", "DE->F", "EF->G", "FG->H", "CDEFGH->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string initial = "X";
    vector<string> reactions = {"AB->C"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
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
    string initial = "A";
    vector<string> reactions = {"AB->C"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string initial = "A";
    vector<string> reactions = {"AB->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string initial = "A";
    vector<string> reactions = {"BA->X", "XA->B"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string initial = "A";
    vector<string> reactions = {"BA->X", "CA->B", "BA->C"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string initial = "Z";
    vector<string> reactions = {"BZ->X", "CZ->B", "BZ->C"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string initial = "AAXB";
    vector<string> reactions = {"BZ->Y", "ZY->X", "AB->Z"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string initial = "AABBB";
    vector<string> reactions = {"BZ->Y", "ZY->X", "AB->Z", "AZ->W"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string initial = "ABCDEFGHIJKLMNOPQRSTUVWYZABCDEFGHIJKLMNOPQRSTUVWYZ";
    vector<string> reactions = {"ABCE->Z", "RTYUIO->P", "QWER->T", "MN->B", "AB->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string initial = "DDDDDDDDDDDDDDDDDDDDDDDDDDDD";
    vector<string> reactions = {"ABC->X", "AB->C", "AC->B", "BC->A"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string initial = "ZZZZZZZZZABBAAAAAAAAAAAAAABBAAA";
    vector<string> reactions = {"BCDEFGHIJKLMNOPQRSTUVWXY->A", "ACDEFGHIJKLMNOPQRSTUVWXY->B", "ABDEFGHIJKLMNOPQRSTUVWXY->C", "ABCEFGHIJKLMNOPQRSTUVWXY->D", "ABCDFGHIJKLMNOPQRSTUVWXY->E", "ABCDEGHIJKLMNOPQRSTUVWXY->F", "ABCDEFHIJKLMNOPQRSTUVWXY->G", "ABCDEFGIJKLMNOPQRSTUVWXY->H", "ABCDEFGHJKLMNOPQRSTUVWXY->I", "ABCDEFGHIKLMNOPQRSTUVWXY->J", "ABCDEFGHIJLMNOPQRSTUVWXY->K", "ABCDEFGHIJKMNOPQRSTUVWXY->L", "ABCDEFGHIJKLNOPQRSTUVWXY->M", "ABCDEFGHIJKLMOPQRSTUVWXY->N", "ABCDEFGHIJKLMNPQRSTUVWXY->O", "ABCDEFGHIJKLMNOQRSTUVWXY->P", "ABCDEFGHIJKLMNOPRSTUVWXY->Q", "ABCDEFGHIJKLMNOPQSTUVWXY->R", "ABCDEFGHIJKLMNOPQRTUVWXY->S", "ABCDEFGHIJKLMNOPQRSUVWXY->T", "ABCDEFGHIJKLMNOPQRSTVWXY->U", "ABCDEFGHIJKLMNOPQRSTUWXY->V", "ABCDEFGHIJKLMNOPQRSTUVXY->W", "ABCDEFGHIJKLMNOPQRSTUVWY->X", "ABCDEFGHIJKLMNOPQRSTUVWX->Y"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string initial = "GGGGGG";
    vector<string> reactions = {"AG->X", "BC->A", "AC->B", "AB->C"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string initial = "ABCDEFGHIJKLMNOPQRSTUVWYZABCDEFGHIJKLMNOPQRSTUVWYZ";
    vector<string> reactions = {"ABCE->Z", "RTYUIO->X", "QWER->T", "MN->B"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string initial = "A";
    vector<string> reactions = {"AB->X", "AX->B", "BX->A"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string initial = "AABBB";
    vector<string> reactions = {"BZ->Y", "ZY->X", "AB->Z"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string initial = "AAAZY";
    vector<string> reactions = {"YZW->X", "WZ->Y", "WY->Z", "YZ->W"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string initial = "AAAAAAAAAAAAAAAAAABBBBBBBBBBBBBBB";
    vector<string> reactions = {"AB->C", "BC->D", "CD->E", "DE->F", "EF->G", "FG->H", "GH->I", "HI->J", "IJ->K", "JK->L", "KL->M", "LM->N", "MN->O", "NO->P", "OP->Q", "PQ->R", "QR->S", "RS->T", "ST->U", "TU->V", "UV->W", "VW->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string initial = "ABCDEF";
    vector<string> reactions = {"ABCDE->F", "ACDEF->G", "CDEFG->H", "DEFGH->I", "EFGHI->J", "FGHIJ->K", "GHIJK->L", "HIJKL->M", "IJKLM->N", "JKLMN->O", "KLMNO->P", "LMNOP->Q", "MNOPQ->R", "NOPQR->S", "OPQRS->T", "PQRST->U", "QRSTU->V", "RSTUV->W", "STUVW->Y", "TUVWY->Z", "UVWYZ->X", "FG->A", "FG->B", "FG->C", "FG->D", "FG->E"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string initial = "Y";
    vector<string> reactions = {"XY->Z", "XZ->Y", "YZ->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string initial = "A";
    vector<string> reactions = {"XY->Z", "ZX->Y", "YZ->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string initial = "B";
    vector<string> reactions = {"AB->X", "CD->A", "AB->C"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string initial = "ABCDEFGHIJKLMNOPQRSTUVWYZABCDEFGHIJKLMNOPQRSTUV";
    vector<string> reactions = {"AB->C", "BC->D", "CD->E", "DE->F", "EF->G", "FG->H", "GH->I", "HI->J", "IJ->K", "JK->L", "KL->M", "LM->N", "MN->O", "NO->P", "OP->Q", "PQ->R", "QR->S", "RS->T", "ST->U", "TU->V", "UV->W", "WX->Y", "XY->Z", "YZ->A", "ZA->B"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string initial = "AACC";
    vector<string> reactions = {"ABCE->X", "AE->B", "AB->E"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string initial = "ACD";
    vector<string> reactions = {"ABC->X", "AB->C", "BC->A", "AC->B"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string initial = "ABCDEFGHIJKLMNOPQRSTUVWYZABCDEFGHIJKLMNOPQRSTUVWYZ";
    vector<string> reactions = {"ABCE->Z", "RTYUIO->P", "QWER->T", "MN->B", "BC->A", "NDB->C", "OIU->D", "ABV->E", "IYT->F", "QWER->G", "XCZV->H", "LP->I", "IUY->J", "ERT->K", "MO->L", "AC->M", "BS->N", "QW->O", "OP->Q", "TE->R", "VB->S", "TR->U", "AB->V", "KL->W", "AT->X", "ZX->Y"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string initial = "YYYYYYYYYYYYYYYYYYYYYYYYYZZZZZZZZZZZZZZZZZZZZZZZZZ";
    vector<string> reactions = {"YZ->A", "ZY->B", "ZY->C", "ZY->D", "ZY->E", "YZ->F", "ZY->G", "ZY->H", "ZY->I", "ZY->J", "YZ->K", "ZY->L", "ZY->M", "ZY->N", "ZY->O", "YZ->P", "ZY->Q", "ZY->R", "ZY->S", "ZY->T", "YZ->U", "ZY->V", "ZW->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string initial = "A";
    vector<string> reactions = {"XY->Z", "YZ->X", "ZX->Y"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string initial = "AAAAAAAAAAAAAAABBBBBBBBBBBBBBBBB";
    vector<string> reactions = {"AB->C", "CA->D", "CA->E", "CDE->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string initial = "ABC";
    vector<string> reactions = {"YZ->X", "XZ->Y"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string initial = "ABCDEABCDEABCDEABCDEABCDEABCDEABCDEABCDEABCDEABCDE";
    vector<string> reactions = {"YZ->X", "XZ->Y", "XY->Z"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string initial = "ABCDEFGHIJKLMNOPQRSTUVWYZABCDEFGHIJKLMNOPQRSTUVWYZ";
    vector<string> reactions = {"AB->C", "BC->D", "CD->E", "DE->F", "EF->G", "FG->H", "GH->I", "HI->J", "IJ->K", "JK->L", "KL->M", "LM->N", "MN->O", "NO->P", "OP->Q", "PQ->R", "QR->S", "RS->T", "ST->U", "TU->V", "UV->W", "WX->Y", "XY->Z", "YZ->A", "ZA->B"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string initial = "A";
    vector<string> reactions = {"AB->C", "BC->A", "CA->B", "ABC->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string initial = "ABCD";
    vector<string> reactions = {"XY->Z", "YZ->X", "ZX->Y"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string initial = "ABCDEFGHIJKLMNOPQRSTUVWYABCDEFGHIJKLMNOPQRSTUVWY";
    vector<string> reactions = {"AB->C", "BC->D", "CD->E", "DE->F", "EF->G", "FG->H", "GH->I", "HI->J", "IJ->K", "JK->L", "KL->M", "LM->N", "MN->O", "NO->P", "OP->Q", "PQ->R", "QR->S", "RS->T", "ST->U", "TU->V", "UV->W", "WZ->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string initial = "AB";
    vector<string> reactions = {"AB->C", "BC->A", "AC->B", "ABC->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string initial = "AAAAAAAAAAAAAAAAAAAAAAAAABBBBBBBBBBBBBBBBBBBBBBBBB";
    vector<string> reactions = {"AC->B", "AB->C", "AB->D", "AB->E", "AB->F", "AB->G", "AB->H", "AB->I", "AB->J", "AB->K", "AB->L", "AB->M", "AB->N", "AB->O", "AB->P", "AB->Q", "AB->R", "AB->S", "AB->T", "AB->U", "AB->V", "AB->W", "AB->Y", "AB->Z", "STUVWYZ->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    string initial = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> reactions = {"AK->B", "AB->C", "AC->D", "AD->E", "AE->F", "AF->G", "AG->H", "AH->I", "AI->J", "AJ->K", "KJ->A", "KJ->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    string initial = "ABCABBABQEUIOPADFGHJKLCBNMEFBAEFBAACDAABBAA";
    vector<string> reactions = {"AYZ->X", "AB->R", "BR->S", "AS->T", "BT->Z", "VW->Y", "VB->W", "AB->V", "AB->C", "BC->D", "CD->E", "DE->F", "EF->G", "FG->H", "GH->I", "HI->J", "IJ->K", "JK->L", "KL->M", "LM->N", "MN->O", "NO->P", "RS->A", "ST->B"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    string initial = "A";
    vector<string> reactions = {"XB->A", "AB->X", "XA->B"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    string initial = "ABCDEFGHIJKLMNABCDEFLBJ";
    vector<string> reactions = {"AB->Z", "BC->T", "VC->S", "SB->L", "LA->B", "BS->E", "EI->J", "AC->I", "SV->X", "SL->H", "ZE->V"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    string initial = "AAAAAAAAAAAAAAAACCCCCCCCCCCCCCCCCCCBBBBBBBBBBBBBBB";
    vector<string> reactions = {"BD->X", "AC->B", "BC->A", "AB->C", "BX->Y"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    string initial = "A";
    vector<string> reactions = {"AB->X", "AX->B"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    string initial = "AAAAAAAAAAAAAAABBBBBBBBBBBBBBBCCCCCCCCCC";
    vector<string> reactions = {"AB->C", "BC->A", "AC->B", "KG->X", "GL->K", "UW->Z"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    string initial = "AB";
    vector<string> reactions = {"ABD->X", "AB->D", "AD->B", "BD->A"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    string initial = "AAABB";
    vector<string> reactions = {"CD->X", "CE->D", "DE->C", "CD->E"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    string initial = "AB";
    vector<string> reactions = {"FA->X", "FA->C", "CA->F"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    string initial = "C";
    vector<string> reactions = {"AB->X", "AX->B", "XB->A"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    string initial = "AAAAAAAAAAAAAAAAAAAAAAAAABBBBBBBBBBBBBBBBBBBBBBBBB";
    vector<string> reactions = {"AB->C", "AB->D", "AB->E", "AB->F", "AB->G", "AB->H", "AB->I", "CD->J", "CD->K", "CD->L", "CD->M", "CD->N", "EJ->O", "EJ->P", "EJ->Q", "EJ->R", "EJ->S", "EJ->T", "EJ->U", "EJ->V", "ABCEDFGHIJKLMQ->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    string initial = "AZY";
    vector<string> reactions = {"AB->X", "BD->A", "AC->B", "AB->D", "AB->C"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    string initial = "YZ";
    vector<string> reactions = {"AB->X", "BC->A", "AC->B"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    string initial = "X";
    vector<string> reactions = {"ABCE->Z", "RTYUIO->P", "QWER->T", "MN->B"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    string initial = "AAAAA";
    vector<string> reactions = {"CA->X", "CX->A", "AX->C"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    string initial = "X";
    vector<string> reactions = {"FE->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    string initial = "DEF";
    vector<string> reactions = {"AC->B", "AB->C", "BC->A", "BC->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    string initial = "AB";
    vector<string> reactions = {"AX->Y", "BY->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    string initial = "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ";
    vector<string> reactions = {"BCDEFGHIJKLMNOPQRSTUVWXY->A", "ACDEFGHIJKLMNOPQRSTUVWXY->B", "ABDEFGHIJKLMNOPQRSTUVWXY->C", "ABCEFGHIJKLMNOPQRSTUVWXY->D", "ABCDFGHIJKLMNOPQRSTUVWXY->E", "ABCDEGHIJKLMNOPQRSTUVWXY->F", "ABCDEFHIJKLMNOPQRSTUVWXY->G", "ABCDEFGIJKLMNOPQRSTUVWXY->H", "ABCDEFGHJKLMNOPQRSTUVWXY->I", "ABCDEFGHIKLMNOPQRSTUVWXY->J", "ABCDEFGHIJLMNOPQRSTUVWXY->K", "ABCDEFGHIJKMNOPQRSTUVWXY->L", "ABCDEFGHIJKLNOPQRSTUVWXY->M", "ABCDEFGHIJKLMOPQRSTUVWXY->N", "ABCDEFGHIJKLMNPQRSTUVWXY->O", "ABCDEFGHIJKLMNOQRSTUVWXY->P", "ABCDEFGHIJKLMNOPRSTUVWXY->Q", "ABCDEFGHIJKLMNOPQSTUVWXY->R", "ABCDEFGHIJKLMNOPQRTUVWXY->S", "ABCDEFGHIJKLMNOPQRSUVWXY->T", "ABCDEFGHIJKLMNOPQRSTVWXY->U", "ABCDEFGHIJKLMNOPQRSTUWXY->V", "ABCDEFGHIJKLMNOPQRSTUVXY->W", "ABCDEFGHIJKLMNOPQRSTUVWY->X", "ABCDEFGHIJKLMNOPQRSTUVWX->Y"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    string initial = "AAAAAAAAAAAAA";
    vector<string> reactions = {"AB->X", "CA->B", "BA->C"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    string initial = "ABABABABABABABABAAAAAAAAAAAAAABBBBBBBBBBBBBBCDIJ";
    vector<string> reactions = {"AB->C", "AB->D", "CD->E", "CD->F", "EF->G", "EF->H", "GH->I", "GH->J", "IJ->K", "IJ->R", "KR->Y", "YZ->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    string initial = "B";
    vector<string> reactions = {"AB->X", "BC->A", "CA->B"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    string initial = "ABCDE";
    vector<string> reactions = {"ABC->F", "FE->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    string initial = "AAABBCD";
    vector<string> reactions = {"BZ->Y", "ZY->X", "AB->Z", "CD->B"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    string initial = "ABFE";
    vector<string> reactions = {"AB->C", "FE->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    string initial = "X";
    vector<string> reactions = {"AB->C"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    string initial = "AAAAAAAAAAAAAAA";
    vector<string> reactions = {"AB->C", "AC->B", "BC->A", "AB->X"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    string initial = "ABCDEFGHIJKLMNOPQRSTUVWY";
    vector<string> reactions = {"AB->C", "BC->D", "CD->E", "DE->F", "EF->G", "ZA->X", "FG->H", "GH->I", "HI->J", "IJ->K", "JK->L", "KL->M", "LM->N", "MN->O", "NO->P", "OP->Q", "PQ->R", "QR->S", "RS->T", "ST->U", "TU->V", "UV->W", "VW->Y"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    string initial = "A";
    vector<string> reactions = {"BC->X", "XC->B"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    string initial = "EF";
    vector<string> reactions = {"ABC->X", "AB->C", "CB->A", "AC->B"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    string initial = "ABDEFOPQRSTUVW";
    vector<string> reactions = {"BCDEFGHIJKLMNOPQRSTUVWXYZ->A", "ACDEFGHIJKLMNOPQRSTUVWXYZ->B", "ABDEFGHIJKLMNOPQRSTUVWXYZ->C", "ABCEFGHIJKLMNOPQRSTUVWXYZ->D", "ABCDFGHIJKLMNOPQRSTUVWXYZ->E", "ABCDEGHIJKLMNOPQRSTUVWXYZ->F", "ABCDEFHIJKLMNOPQRSTUVWXYZ->G", "ABCDEFGIJKLMNOPQRSTUVWXYZ->H", "ABCDEFGHJKLMNOPQRSTUVWXYZ->I", "ABCDEFGHIKLMNOPQRSTUVWXYZ->J", "ABCDEFGHIJLMNOPQRSTUVWXYZ->K", "ABCDEFGHIJKMNOPQRSTUVWXYZ->L", "ABCDEFGHIJKLNOPQRSTUVWXYZ->M", "ABCDEFGHIJKLMOPQRSTUVWXYZ->N", "ABCDEFGHIJKLMNPQRSTUVWXYZ->O", "ABCDEFGHIJKLMNOQRSTUVWXYZ->P", "ABCDEFGHIJKLMNOPRSTUVWXYZ->Q", "ABCDEFGHIJKLMNOPQSTUVWXYZ->R", "ABCDEFGHIJKLMNOPQRTUVWXYZ->S", "ABCDEFGHIJKLMNOPQRSUVWXYZ->T", "ABCDEFGHIJKLMNOPQRSTVWXYZ->U", "ABCDEFGHIJKLMNOPQRSTUWXYZ->V", "ABCDEFGHIJKLMNOPQRSTUVXYZ->W", "ABCDEFGHIJKLMNOPQRSTUVWYZ->X", "ABCDEFGHIJKLMNOPQRSTUVWXZ->Y", "ABCDEFGHIJKLMNOPQRSTUVWXY->Z"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    string initial = "AA";
    vector<string> reactions = {"BZ->Y", "ZY->X", "AB->Z"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    string initial = "ABCDEFGHIJKL";
    vector<string> reactions = {"XY->Z", "YZ->X", "XZ->Y"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    string initial = "AC";
    vector<string> reactions = {"BC->X", "BX->C", "CX->B"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    string initial = "AB";
    vector<string> reactions = {"AC->X", "AB->C", "AC->B", "BC->A"};
    QuantumAlchemy* pObj = new QuantumAlchemy();
    clock_t start = clock();
    int result = pObj->minSteps(initial, reactions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=10668&pm=7540
********************************************************************************
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
 
//typedef long long __int64;
 
class QuantumAlchemy
{
public:
  int minSteps(string str, vector<string> reactions)
  {
    int C[26],A[26],i;
    string data[26];
    for (i=0;i<26;i++) data[i]="";
    for (i=0;i<reactions.size();i++)
    {
      string s=reactions[i];
      data[s[s.length()-1]-'A']=s.substr(0,s.length()-3);
    }
    memset(C,0,sizeof(C));
    for (i=0;i<str.size();i++)
      C[str[i]-'A']++;
    memset(A,0,sizeof(A));
    A['X'-'A']++;
    int result=0;
    for (int step=0;step<10000;step++)
    {
      for (i=0;i<26;i++)
        if (A[i]>C[i] && data[i]=="") 
          return -1;
      for (i=0;i<26;i++) if (A[i]>C[i]) break;
      if (i==26)
        return result;
      A[i]--;
      for (int k=0;k<data[i].length();k++)
        A[data[i][k]-'A']++;
      result++;
    }
    return -1;
  }
};
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/