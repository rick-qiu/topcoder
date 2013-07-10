/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2940
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

class StarAdventure {
public:
    int mostStars(vector<string> level);
};

int StarAdventure::mostStars(vector<string> level) {
    int ret;
    return ret;
}


int test0() {
    vector<string> level = {"0123456789", "0123456789", "0123456789", "0123456789", "0123456789", "0123456789", "0123456789", "0123456789", "0123456789", "0123456789"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 303;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> level = {"0234342522", "1232142445"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> level = {"01", "11"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> level = {"0999999999", "9999999999", "9999999999", "9999999999", "9999999999", "9999999999", "9999999999", "9999999999", "9999999999", "9999999999"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 450;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> level = {"0333111111", "1300000000", "1330999990", "1030999990", "1030999990", "1010999990", "1011000000", "1111111111"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 195;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> level = {"0983434", "2342423", "2342342"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> level = {"012", "012", "012", "012", "012", "012", "012"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> level = {"0123456789", "1123456789", "2223456789", "3333456789", "4444456789", "5555556789", "6666666789", "7777777789", "8888888889", "9999999999"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 335;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> level = {"0451860384", "8816141738", "6871622103", "3705048815", "4778363183", "3623955980", "2927524699", "2748345827", "3934990208", "1685627644"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 295;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> level = {"0083039389", "0316994532", "0429276387", "7278052794", "7754242148", "0079252101", "9400204252", "5707353941", "2022597127", "2821388373"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 251;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> level = {"0869850487", "4511490545", "1954802392", "2104680042", "2617080263", "0855992992", "6271501046", "6283422315", "2938839005", "7042808171"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 272;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> level = {"0661584547", "7864938010", "5505660579", "2806562308", "1440555977", "2800114662", "1547303097", "6420937820", "7534381930", "5345354737"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 283;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> level = {"0909622487", "1943571923", "0522223980", "0911023182", "5567982253", "4161319393", "2564147826", "1421050751", "1249264202", "1082356820"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 260;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> level = {"0461545807", "6851422546", "2292977576", "7177110443", "0678224492", "2040267038", "5121461930", "2243193946", "8471169494", "3596207711"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 268;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> level = {"0108135222", "2905827284", "5020668507", "3014679657", "0118090573", "8403531056", "6591900825", "5604532844", "8902156030", "1514262291"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 239;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> level = {"0887255295", "6605199019", "9302460651", "5338001975", "7395170087", "0844567975", "3104233654", "7645500152", "6888516781", "8230081978"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 294;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> level = {"0152592452", "0147181490", "6678180875", "5761208937", "4785418017", "5803111602", "5445699487", "9974159607", "6232941319", "2879573722"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 279;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> level = {"0288810535", "1451646436", "1978113075", "3544091837", "7139597729", "2498397171", "2522264811", "0419172300", "5928956012", "6820155835"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 264;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> level = {"0032326456", "4728088170", "7603612681", "5017809058", "2270981554", "5047416298", "2495391332", "6005180239", "0001323863", "5039847509"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 265;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> level = {"0745803616", "2567272100", "7919983947", "6846397905", "6006086155", "8108414277", "6600823392", "1955255799", "3727432110", "1929949612"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 303;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> level = {"0050285214", "8484548833", "8600099983", "4121572658", "2535807446", "3003202266", "1394717862", "4492258462", "8689931422", "2841441256"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 264;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> level = {"0677650992", "4312233665", "9326770814", "8984518865", "5579498867", "6824668554", "4905960410", "1964498657", "9364891356", "2104251943"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 310;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> level = {"0020665880", "2143111805", "4814947090", "0598391082", "1892148932", "3086008656", "7965989615", "6417900003", "5808937734", "5079795554"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 276;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> level = {"0033570677", "0834688679", "3930507251", "9066643008", "8711331635", "2424516617", "2862524097", "0777167890", "7432981674", "2968131077"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 278;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> level = {"0842093483", "9185551263", "6428944155", "7517053166", "9720922821", "4190286289", "5076111825", "6103243276", "0686348406", "1117375587"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 279;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> level = {"0410918826", "8269065750", "0979188754", "7633181173", "9833690816", "9741685214", "1726188783", "2997899573", "2868828236", "5715707962"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 317;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> level = {"0215238487", "1054982143", "4535280178", "3454052620", "5169642841", "3523683821", "5901796641", "9947358419", "9034609169", "0375085579"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 277;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> level = {"0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> level = {"0123456789", "1234567899", "2345678999", "3456789999", "4567899999", "5678999999", "6789999999", "7899999999", "8999999999", "9999999999"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 350;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> level = {"0294155406", "1638207045", "6116899413", "5557286268", "0772531848", "4064542106", "8087815420", "6809977196", "1362033688", "3848008848"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 292;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> level = {"0000000999", "0000000999", "0000000999", "0000000999", "0000000999", "0000000999", "0000000999", "0000000999", "0000000999", "0000000999"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 270;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> level = {"02", "12", "12"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> level = {"01296289856427627583990950344462777968520299686111", "43022678573840646287258869226707798201798017874000", "99091250801748059146336878382798759607881205562137", "11816984638204727415560787687605639156017897697531", "40661158878887808386818330156139353870554316450915", "87052499187460711490688086746167081362791796225002", "01947863172930252103852068986869791124194119575635", "99375048221224116088159793256443275472445959843964", "11665386993007983373118551550102818759574894279931", "48090805426836021383141239785757526046731211113294", "86931124195333229447180226612761828264433017855583", "43007800221674000083556754623498399774267936433906", "21078141359092519508025805250847051837138333400353", "69814044543738406683645653644949538893806585184212", "33943151758342660866144437241447718020681869707123", "50243078184094857523180809090799328330438402374985", "08566426434568208825612408902362449478270237075064", "71533000131548124383962607058956508620811039545105", "20341652438371053718985796928981187335294991655455", "32591191176597647230235331857688048952376257444637", "16582644947654229541198086173371469690934326060339", "43124097437898104373318455127213940834699361055691", "62109725462158969293897516214824651754684697404632", "41354365968573108227159781544593511305624482527810", "56772548929537378930633648170871233448838613375608", "72932196280118065569902687908277689193692143155132", "36554232324581780762499044939284712416311431013315", "43918362809584311849172602638378407054514114668570", "26606123807258572332229875931079192203431543536195", "04108170620211326072873780115311132179461595475354", "94430952267345272347039904716259706352013871176173", "33286418782466966674782766282825306942997293358752", "23880255384711981372172273791039195381990304632705", "92532741675774493706512349230175416748421110202957", "35004464257114530864401047389205307624260455200898", "17950825896557004718010946951249401962969911683288", "67785299551575462998432452665773214861922053784778", "43774869214514650029563681659442559622835580708379", "17475976964086926143045639786515703547681091892581", "85504670738884583411475863522218063584869461958175", "89296969879850466941406364976282304903284232178276", "61851183935100918229914862281948792834737254946936", "84428201578927374215319915034895892723100107765542", "23452740367308898111237986434700239035719988453296", "27395691783361182628932624730123659384639699682261", "27017054390616715972814318569994425773869622949666", "45724534900418807729724328199044963573348604952485", "57360759001656212967724321892346348019285322384403", "78453823856605885318254243089144862775794590108155", "65543037571824365816297258726224394890459038188189"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 1898;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> level = {"00693669159997478717778648582603914797652076486850", "68817386629579884745722156849341121359485125480915", "37968289836814960907094044132341052989896107226755", "86895720635229745565213319265598043883682655439495", "33818211987074676317501654547219162389456481230216", "02874705235282076476141585650587868890105517957471", "10737211974069927291287563045434190363794232879343", "20703458849323062517448893137874164819598835239055", "45819519436257824388527439203683110600404707333342", "77931581078166078445441258390939807865530457996636", "22095655370523759645861409413670023403598338933870", "42132642198727737836570926767811000444705010037312", "49926369146474927246647237224833297420301025712190", "80024196837285556466632221288318044342602832977675", "65608381933525222486611331960862265447565022817624", "84074129403083543797335290735380718078226052695783", "43346838561357839875557773706930305304178932061502", "64883575558985586360979574190777446347166664135214", "71471045332275981742885891397227696357102461369973", "75180075181819753152264844525597618628554450390846", "84168410204764062506497791514386123364954831219193", "82927386306474528241753952180879271040110427426370", "56599357071146265278453609957196752543696438662914", "96116835404704857717738750994303536288215702881764", "38322436683241882962187172837218941259485733287680", "53596567898860042382294941406926481968712091691735", "69271100616750779581771783666099255235318332442823", "11719696126824596039931511591493552418140686046207", "05415037480408015534194479455937773472699175271746", "57069784181182556852458355682216748144166509970378", "06267474299770623728419367611480045111590968306663", "27872588471071017418326145092805457304280398626497", "76994444645440779071039175008604801252649993952757", "90365670887750470693354332648321443733552198030582", "68076330865609307956012913022982125432653089504810", "60514045946127816146012957645453768651086704761229", "06474943087796332109316657385668470203864310163306", "23171289986939738283780942032565282222484343813558", "36682444118015418195138292852077486658972382509307", "89306986519065691950628362911349248089621599295093", "10912026400452564652080551751342810419982217353653", "45237704808365280879779624283284449535485988500896", "66984095965967905697053685572414945486948949681394", "98464633999480328324670474690665673226270377267003", "40600456371428156827974327091434045212850211525688", "93311454412929234603830464901104014259841214712690", "17854868654786410328048873497221152512941231274978", "21807726510754930738965027381666600312478197788248", "09372834166561709215843086380713567040272541666729", "30353099729419017991143177280604048377412663635406"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 1918;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> level = {"00282642437314201301961359445514571007700144369558", "21824373249744714616487162504201056822444897399564", "77848462552419699462973823246722167033322037140972", "78118641840881765251754465082724024044334913518221", "86715872077792333708382250857871296927470889294010", "23402036643314232915561516489524092381349396826193", "36066494308984921677130062505823812355376603981588", "74958170232028717308985407579596777963541964197274", "53024578383860888681770606441709233081341074081660", "97958068693003615879822310689748560851166107703765", "95743225846376147055658614646088033815327345986311", "18723694236707396495895976572664657521153896909386", "14488761398835614266506665863232894114833754317292", "07672451764777515194808277655594428655672817532307", "66372222721662566768327853458166365487452686836316", "75241421459326070366031306647483423844051571838557", "12254359342064202969478232978918032516452087153140", "20174241348908132583506210170118600626685979274968", "30334056398694951030878453089214308973134583776893", "46153034870286643624765129624209247856093847608998", "12173286832493950865603228764194622717459838154249", "97424177518979320605771198507099478694849486786941", "56210693927394992349016266759249906256907715775505", "20046056429962330204363938029513037336941859902422", "98103413277160158938341131473113015896252972679095", "33473713555467968408316914409805368652784933266079", "14043237711725474660212286295213813336236070363534", "08379526245757034028183152346863699171402954954169", "37043847683517648956410115779527391240634968622525", "31550543445922501828862010316876647682400437723535", "24484863852895121634126498174602258556006528815552", "20578318000327006083685977250101583825459284285661", "19485516476149492728696973709883149464901843522636", "06561548310001633968305737532986760809809747522336", "82294451055292098987533995313372944971563055849628", "33900806448251909345203470415599137861483300042506", "68595901167827161414937328138185259399811524004242", "27841404044447614148943767026152838201398373135787", "26662543541578852579044061089907875596010503455027", "31766838864887410796498945743681271036076258021967", "20951843538444978891026898268874082977846144243722", "46502724490297994592326333255316470230811399813703", "27949613330510974363574193715791684453050735269726", "76941071748130398872936035499498006966613751024593", "63322974379195970467866161935601298728752635187493", "20443941896862114931327785556577234102383925119253", "23096823348681218043051390254912865479390496427256", "76166501188064909364198600045554985551174122269656", "11696585926643347488897735734558295168850018585557", "40900740670323121560291091366105077307716453559104"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 1873;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> level = {"07523601399570614597716744685006059455500963855657", "22933435276154951493933067168399781668099599480114", "12056621018150341867614579155821287828203759594196", "07087197137331605690630111158150551523607099580235", "34497765560301574224094787650298598971137537833046", "69345606742035694916706709870483121550447792130205", "41467287970038021220578918246806984711289921080056", "24443948082137715895148157789351794257638623750725", "81804829856616953602097102276724737888592581488028", "59552199623210310080363641418981527277886392469824", "65789959021754912994961859003786833781758691659625", "20830893435017746749047110842434025472468672718198", "64918837839302955369244991412024762340584030526790", "00298432263134310918206650764785452612102738865819", "07323794044264534217777617909502504159862541288860", "11045606309929629261612661329435020981692396748016", "94853289980182234795023211579525440959297493558400", "46438248939118943295630099434017868127334167269871", "87998426142753971316667783250584066646829090088518", "48055868599204479265688610211314636261471455967801", "77537265895674817521189879463019939960422304951176", "74977272970792269922113920971199826038302706442570", "08459828120147895110758907292295939842354106393430", "33582735497380906810457597004906169047943447319035", "51177346858732721087873952089042608138421529608312", "68734948435894398303570922422446667032110558627079", "19792514794662686447709999664950560371056222665929", "30162314231129975909081086387485620230058012228511", "99881535828036886974369412080222987403021201223621", "59754576704886481158142447772826489810866335150452", "57595004945985611126757378142965147752951364572549", "10668836375037568651311326668855049094401630664359", "82819060824773056727722837230938381056715854695544", "63260341644761789794856728682959193067194306025301", "21709739908915084450461871006963453864836469151900", "78442113862000082567724850536680975338345600559382", "88347439104621378955254359164621447622543082121910", "45240548867695915271469834930117739812143824348031", "43608962740525793981353104822446193069888247448779", "25213919113529435412533433670499541389721794517996", "74074622520312608651274356808995396959267447093226", "81334114354288625745297735418569669924863008572115", "61043975932319310771221545022910708316046533664451", "22409284762210195006546305063298500238621518503009", "06788042750274307006251174695421913173623757542658", "65431827761535786306564835657777237620053504573771", "04143196169957760975781822368967694558728099487362", "21663275607154908205808953705808533078044737372626", "70597817961406134920999081088874487597427500694058", "17546116373774389372237918704183593401511666596692"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 1874;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> level = {"06149135623248051587565885419647909539960656657103", "01822653662847817355622036278438801692707275911211", "59433069721991600998793615037685621831471059256006", "29850874429580380863327385193262541120017000813243", "47058604525132303802080315427312169463895839948277", "24095733221368155035174560934567817637517492403976", "36012997827468586319863266319812109441966911769014", "94295432352512529544962177251395334004371886237669", "98186163156899569994492415653791850982934166879564", "20033695702815300831884601631406557641432441455084", "89460564164135819564246919718025895380252601547202", "39085169268655311200734540981664799403728388977565", "96427129515411180152892606926008198204438247309071", "20263089586417562301492693757593368801572998404025", "04522506349288049757641299598662361905158562270308", "84823480348776531632466322037007025635486968312682", "85585616087529616788409537770927914554379039515262", "99932055618550099777573792194659515043747111798243", "57671201315172599155099276279961462063769843489862", "86310291187543716050606716760448376861555341941088", "74641891154904365622285374185553225685405453277505", "58627786615758210192064007401165228089184056739112", "99504508971551639005400282952448551121196901272123", "63082099404487555318696938515617508233465513027942", "56338728262001788969056513188701887503706162783831", "14176915627817375969781811310727324328528726227544", "75607228510090632069073599603415861581655704505222", "39964401787822710937536250005570195873902592427944", "47515734541779472290880797477132570437467464401257", "37300768436030848719820509322728027787694820731442", "68935049620113330929552610310224974956120230085723", "60405387261090354185830128540124156617489848628495", "08759884583864466957361334668006148741420594705756", "75845488943356462534803763304819458278212995367482", "69969798016400184228528816254363785343852477678581", "66434632314123356408235448040011248802751694862040", "58300681942569132798372430758229709654509007196777", "60772008226421007821570682141753015829431768427987", "57933866137554614709356534376811273608025033661232", "38804414120462561587367649471125487968758585118317", "99107947223390622671312517488253583554285549357132", "38504575809610950611377853470181512934193730696969", "92038896750366264222636904212426600562651012399584", "54820805735234169958965658525952326459157901526731", "22386286886754672975417780102103527460286905069140", "05180049990336146182617539963627466167394511357807", "61526186059692626647052406192909550813754958950265", "33059137542018019488633803888684267730644609569812", "30439018055700049746575249725185078915352102674890", "46173149685350008246566706983349199524103703093694"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 1886;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> level = {"08156114720680351313498857795634607673261641967337", "18123171139728658009529595681781458361647828417224", "10295716886986664047400925598194111540823613992679", "55723505021742578282190314063757137736856812525566", "76213708395714695685581774790655900204288225728714", "48723654278063548932965300082593439694087817265509", "98546368710697756964903295878457551536594232243948", "83543043581592656114465112735900806203793497577228", "89885470491939765086646366850856624489355195137207", "64093941836243653121158552148454220910136941285123", "06979161360206420871939995589077583192968036061411", "37168201055132444772844082164188255839423564386449", "84258229623014101428724520712845016210436974461052", "44224753381793193036787749025999370614817519135471", "25245648031813037295888715623889359305568862891527", "63300381474247789632318274160338803520445970850159", "84075479749741310711820084418373312203034404799000", "98680819364775778447440087039125421256516043166995", "75317812855375895786941928133263251269354380891271", "55607992814968379336375560585988786448496780903583", "90257339039231002072740192027073795294489210608188", "16897455206444067820709045123323030917164524621380", "51008607509806177028133609739318236945953268712325", "98058295571856448009218321595476153839549562137087", "38408839669795306902897377473474951431809038200955", "76285653810371666571177139398170268697539480040863", "00786638269088705744111201217406406404550998054802", "41491251878381053476419587984753297767711948348774", "24956049233508297008342255784292545719517381793993", "24993922622842940333466215672828882226252600473123", "32920893743169417755213472538304764174727436326386", "07149204360037281020199763245432828314403144243868", "87635970401931238983350854540460633699057883570305", "07229906273130807159064572850523118743819773478190", "40880375871968235164972912007876131002151114945535", "97492216405396009571002207305586633932162723051692", "55084507021580889164132567573794906412638665354514", "15351073287381273701439220709805197938117428365723", "48731278832615550840795185417672688551550358557824", "72158302774528733368298364129117685913804938555045", "64250971776363401566789045958696395910805420599561", "14207642359447716636207997241833299812797727545870", "35457849130896673087444851112634028491554800116096", "17869081730778526284407023060410868195400015546073", "96713623443361308662919694972804501462929217315076", "83770020289700224651765339329251132361096551818805", "43235646866356031278391707576070356340335912565611", "46128529321283448886906700591947314615566926470830", "83585262536209378191209358925341997306746265490669", "25295455721079406670942531156696332175154779329785"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 1870;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> level = {"04240990688080502926961916163977013803759830430756", "74726605609762696476106324220127974459166540177771", "36171813972456305759591513536545419393810217690307", "85562841588960672295993951270606629548897893409142", "69140701874918227810461981748637073972673309057528", "58950227170661976563940740024573484018637317663144", "67945704032029638800853592089229050189277282878920", "32884559230955284439493813783561360825154925659710", "26608435264761066925612090852914618911512787435420", "28875163616802208655396607720923990585988427754279", "78376793327605749788861825392896066415390326774633", "00122311413692785098724642667138568018404473357907", "55905957869358955248774165749081880858673537882182", "22263287240108485295842418815152304274369197135395", "68026543696391786453132386273322687355772176569079", "70381000920209796363600509573214381878606083593101", "56850444109948608474098323292198535830162996486426", "21554197565014439290668645467403182512355995296576", "01512650297485384534951737599436186859531319882083", "20422646798323726555867955797047937426193233163929", "88278740478556024901975393010807796939029490665308", "57901706393503606623681953337343648622173251404790", "27983764614646346052800365360721341976780590521036", "41943037945509382319471624350603654669342587618114", "30272138530812489774931911866335899897647173932402", "26230699451588031048244042231277664740887686755759", "23007715586686190747787578465767172017202745549272", "82602627829026522106832937465584438943790881285986", "33385987671564625447398465191809956823691677666769", "83053181647620836824470914221536923565228687107616", "21203498143803155174995298822748752442624595014691", "30596059135664970438444362170184748409439990284604", "52740205659292364997182877610860781065986577182816", "56156957252376979102248945013568899762894753174731", "23611707527491014704273444617052430533270364256823", "58991037610223456890800493672844260024952607389971", "32052624111029508065432560560917276917863280168106", "84749064304004041827961630592697191497311957196451", "14018648387923026467054765614435575234040436530257", "30231487431245375798924663192547085987136207731326", "85661359290081394404710802021807455475723717500337", "14598602012420398879156153345659483462297518323304", "36432930687112484163106212449109918285784720599432", "69673271282564840679019859325409354869114654943287", "57613773157816711287536797908619905150464110613997", "37273096930932112241465912720456360191326056816426", "49830611691063110257906129576171129248322188900478", "18885463581873793099287161625571383156626556995917", "14888799115109830490736370256611367084203399343478", "06683693730669317708432525643871293815503296952232"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 1902;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> level = {"02993304197380443540911403782242516839957219937502", "30155763432558065304435199193052514963515262138625", "06547394233552540328999963249082497849428457441443", "84753377171153427729578399193160784227128085775650", "86482552314367698135085465295552273064435285577009", "14463453583360892579238174629374258858132905349449", "63094491532958938640709990572646196516690336413382", "05384771035459962283269273444062963297880287852546", "11090096873765145762439095457229472560643344453428", "73137644969260653198504296936425176750039795705464", "28776604339983015203565560374788950706776935197098", "81751665531443302463124898949569614285603639574734", "14367883199599494246010265935943441701479451732088", "52367172393639849495865082767277009642091761772039", "78862230787246625554265021855281495455506194166144", "54216588266015650006474490565492623963196632063730", "10429071549959299012955140914616955922080109229506", "58186583395744879330421354016014213019426445122436", "08053743607759991138853723688018732576308291968421", "15565223913236859405062635941547490784686129478960", "75686803051800210442192388380210676290958457438939", "71613872089913841494296095050204198698233153878673", "13260240364717334675492534732617576579532668042555", "26888924126446257395786009273112473916416277877138", "06196774686978922406555085652816734700740947511023", "03782129418146502825652725912180872723597377146423", "62781988797914811434323207364991466953514329810902", "42936329604747139979899053997807920495587500152701", "30592392617531361243812860422047531054231371692738", "33959647918522469391366899675536882100884439640927", "57417539944622190891460353156940278094305699270897", "99231811448566750949587044996165554200430401665706", "56140776644703735410180972014267511526815226836092", "30639932495739641238123893123054927569492238235123", "81849122952164646756641209588710892078147392695952", "34546592730750446062069068525092660420695728981878", "99338908708714908503049803214453767542691830191221", "42391658452492629099998063789715391276753635941970", "08893368911246659541989689162918242052766573038214", "27057701893024293712093637592905761722264398757088", "79593569253262258649106339118856138207743252699020", "99992416996233366060385941396764599650015169553234", "13578319783539173904443487631449994649698031138656", "62675746937503864492137248221691966930101802751169", "38391625413521082378128080729023210563388821823424", "20385395709456133930077004548358808068687595395159", "36554427610841450325452429328147515594563969426437", "80992195056875194137095699095466333955645508249431", "71547061833971433185923671159227943986800443512644", "30331499911108579401470124206753254016435522527451"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 1888;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> level = {"01844654900535727101463949227218956985856205384477", "87187149734702564463936836455818087936371419534161", "64761629985763118243980550280572517463364054260772", "12790058795515649672638092706361871778075906366379", "66475534851015880148467750959012361665052046721902", "48701093949207870003805882433597900661224270538151", "16470499483463033838669682145038282255212188465628", "74104962424162631122427183098681454729466195898824", "95976045112975312060321371141384117980328692483298", "85191553840098945688179728633284594786404536675677", "08756035872297369884002854667388769065050238107408", "67681791882524339703851916797923826165762891578406", "92158433539736534936685025568939124448671030054045", "01159179778803711197508852346173223321933070509067", "56627367469507310198721504039012589569993356736248", "39105163966316567881954629155848296688139108613190", "85759516775904204012775962303724123922776172190581", "93124470044026739938299312456776918042484089482072", "21605523975507427392913175090590379745105935537267", "66445875801502557654929356014080458683810617955376", "82686967853266403492148439528108614968102233519022", "61601469785294955259593216785000914263199341777894", "87584597870842379686422214334649247994067128143847", "87522480366753232132597692692309092221148340143185", "07414138636479606823777326531339313369561386588161", "38243002549661895575625475513146845155506209492623", "25770971966203883393438213166778559167792602556783", "14096644175237915028313483034035031679925929236530", "07502828604712015794168259829210641395135963898871", "51249836850375823129644652385793913230813806088597", "77518079778350315399215553319659494805564849666900", "42890050662288519368489377363467903700931331106646", "70703686091678595863636936819841821292050453894928", "80975541601251742140619468915630700898292761547527", "61462946362494235856825158394004081325924420260089", "18844382351281670096909532676817547718155884234785", "31019418142605380987617060542320184805253356488907", "06703326302917426069058036218924051921592422316504", "56029520035860814114740821691456388614913545819389", "68470393054299468000943771337070083871772348145683", "31060146819036567416513873067148510157120457869994", "53745403144785905553282026943576212608348035903452", "03421964116980490877185842442216500156795650680633", "56347589500455870845514278284033832863999200822704", "00270549703248237818091962188093535336483770427640", "47897939707692979898027139504339626302070114125431", "17174293626340693833731109898183224260553096130098", "11561209647109156719142991188844705434153026931578", "53170863168148501808114055949271620160599072702895", "94327648501635589615119192422857160491584608643516"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 1888;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> level = {"01949339977612514230186569004575786432327834948847", "28695773030102655429618802607873489538592364457433", "16585769065254647217714268399120707035718944076817", "65759607069400716764053694145508475567911439566080", "89862366417633704430628986357651354189096630959761", "27347526973041572558966137105055303898535857023438", "82602329516253149710612474779445456398498710042560", "88309311938941489029027187710930150092302589434479", "59028736876589150872703773524725276000195785873487", "11556179023820570562079465220295995576745071998981", "25533612465642996134509596242851379514184035554709", "27741780384680113569204176502887033572800238011781", "19513773970804488539242497998726323607257249823404", "37976208254517767530855317119914072819944926179670", "81966984540276989117798191344415373292224849641895", "81188040423391044699716650992042742082739988073814", "48790056724713023391783347723311485630845177164183", "69560138800191433409457923537244091403136717527671", "71190049822903480858105354487603896179988352041997", "51265313275095205187738240657673704612735246370242", "37799077921049051952751477508141238970678157179640", "26588119760064974204850188872846419267823260205033", "12992524109269970910320458368967061292023619453280", "81475056543123240647031034910819293460315943132649", "36243541106240545096779695212053610990900514845933", "66075935789462028082714327165013185140707743243338", "99989037166699696902626917673434144838596367134987", "58200675648912952894228524007603448351485693746614", "24890197914928425357039827131606134887509065995435", "92298026850987391848157085079516712059743533961853", "85907184555326707452438264621705532573534102357772", "66455555094921836712637428821442339796524620701313", "35237589010811971536470358711184265443764640867484", "77239839483546290254575874713362129539144551476932", "64738803214391578762154021175819899988905763836449", "63277056428134310001829314340709993602899901592242", "85845696998063434043202645973952164768777129137318", "26253025378801315853776494987178661862749756657506", "22784669971512379515531190751854750005044887253729", "15603896893578213611236477523291625188516862086462", "13633775768848632873078582708433072130943017583601", "06259549424218984594043395673248697045254313639641", "27724764294205904927874164151190485626955423698277", "17817819118002143898909240409451727034923613160386", "22705261267933828678040141385416002310885329213335", "43739111120088444887225044013587434999053519525948", "18077158376842797646517562900803821925813728746411", "86901932666007975528663937312603147744877786611620", "22791030152707840537091937169501612419357565970164", "21879382726521010581540306264798781042419116775032"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 1875;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> level = {"03668547422756799289215871796607142666383759288545", "85806668475208469830005264290177875060506703429235", "92896714216214805782355632653544195989767101334866", "54200004467831368484435938570310313236871145027674", "13266270724446995463841114792143002883905250306616", "41792829813259505094184526224874556357200791579503", "67758590918976008003777383155478666207728786058111", "55128701309403713968691005615118236612287190844082", "21787889602782369109132237528607196732341895373859", "50602372724338247708248107766086187775369440490926", "05948662448921312354138759894975859718218854661661", "38488137338671045186413334433205590066506980535964", "49542480459046975021363077095316083868513745304101", "22525535767506372036279932704390987318341522523019", "38985740362333403515621116231811744016372565653135", "75290679216953392458391692358853556176606906196115", "33927463526575645115557121859211255591853103114320", "99110435821863659784842636240603360690319601080196", "91813476881307311522423477448930031288153866921512", "48374945559601280745040279869562793606457375013799", "44803036455786838978152169138179684438683989120325", "52977233977472799543889400800564718137845283402289", "45771261417339407424677508728889883974573079100587", "57306318509222350368728900339932472565722391516628", "69847740330714942904638643473931542029213133215040", "86041360984742935605063523928999072507432673648633", "59542583532507220831293526814423642464451924481443", "06117208020739409340143491725922676128747190822931", "65554036359093535545392118609127673460525317404269", "65118700608512252754805071309593323551113615455194", "17942719550406108673453328105572876533076583811535", "86778181740039500551374570901712643143096460065736", "83233864404251051574319053812507193665237896709615", "18549873168630936761415184340713085929096833216358", "74542194448408734853713268994853022877263412621660", "69204001674066178806829420506749218793485364234320", "67653072626453897512139492368865427631066349952837", "83798663836798025989972539429821911841681578669334", "87269447443101619761532960099736923698763403632247", "61466394897378381445337039964683705275860107946074", "80911951227715954166575770423735477707613743162011", "82230918399355719492427340082775422499186628109493", "74146106533133553499576498460376544778408577847425", "12647512492167555392420514593681997720944167507997", "40088126320401407049881990612132157556970069021881", "92021414664042162793408158561607277102139543385709", "88520673832378916356821708524430977432701341839331", "44605419178665108583159422334009669459201093693264", "93028578194122679561152651434782743808903536400803", "12625100390705663764307435045451675017802453937742"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 1862;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> level = {"02888879348285243281346605116973993946463691238323", "55892061780406155429860599503466627809624375430713", "59055004717660468182859592388861471967179293795965", "39904097909882277850504710264547978432907531250295", "75324627243372155143940621556640587435455569410277", "34363763674381494670701090814910527359143311381560", "01525402535768838342549812400516217302633135321852", "49624736179140091127676750044890909872654458026763", "11410090929539195033527901110318725329500979479819", "84775726011440787461330221108885182726873676171115", "27153934904254958268984844800219361345624710426318", "15775258372713284833914502369885316283875848007047", "37853174992763376059923125926280798311372121396133", "64617589073583933867493849467163125018726806880951", "43388881105456119459521542964274340932871466705538", "57714105515159608398087550933921505663112406961676", "38291886695463417830513625978448135026741945206667", "65871720111945090416860974875273680258658730277555", "82133619007551153263942290459493816057395285861363", "07247544192488462169214189458959999687481902773395", "38819170708520018005226891206697484213683864500335", "26626279753155677177095499566245966064700000191288", "67261786573369048939206632517271303952986257989211", "17944284286370517207993352878584881013487429334104", "49796453867016531111890963498899131723108265304348", "37899779413552641517542341957612899111022772714427", "24861699557076949843968294272642367969561123344761", "64111828241725389954919317292653647505240715211373", "99876358331193218534881431995894096483242743648927", "03182059892176543552969023931368061828923424245484", "25341474238841859777564276803354941624983023989155", "59057571132888242534236533569309028088339035915600", "06061169090587607121406619847397517161058126719271", "31788233748678722955315627169060300615786720174324", "65065371419198265594259272416112296920019034914319", "29066330199237684506919405202369725705018904875757", "41066981249749065101651290558721906687594271063083", "74394020593015017400142739702760900821302827764269", "72232278466266134828148046647326443054641439783377", "03348117130028686509171527052917150342969306788338", "66812564065746910216218449232032238113910252704569", "41861599407127890614743942643735088800850838683409", "35349079153974027633287807863480824678137598763578", "41858404182110038999408531747147313550234546762565", "75629337464671110888958910134895086004047203819106", "15637182414528976896105243627561591726876725004267", "38063303311323764409398240512102459823574168015161", "27000004062259950519585745212361287719028716619862", "01391112838094951678770236959026917782417678002734", "20343908841458824660729732149283334010755649156432"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 1918;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> level = {"01802639257529534461843210600017249583251738856491", "65419956156148706610638908874170496747396171221679", "50153535287359450202791469866834775369315139400770", "39838692511254173878538749808125967629385889053398", "80771884114968924894647573764367892691519482883218", "57011821590200226112705135346285721842142540100836", "97234449098418552371446977579657424413516287173691", "70211269249664882792774351871641606214547739708798", "56727219022196293252763898251138077615644451609916", "14957349882003070414253992107267982365000953484216", "14504219167992187655654477458709309777337219114421", "32586321419497479131090179691936283599410928811352", "26712721735588684903065415818486753906009078862078", "06189800284386143538677561002327804393874781194339", "97331061471120460866000422292864812178905834956588", "89141473164289560925451258444854242808761111558255", "79159863938023503356923738131057119542033270306764", "26306303764415475759645515086257851632390597424303", "88825896815087134252396001733958420383428430591628", "75505640662657857842332270154966353738406301465319", "91243246805287658939030669411786186726280094514500", "25880114886710463910272873008569327965439374540104", "15294580975144022554589788138773553655499461118223", "88989418903193967994755766334365935380509556921929", "00465931204946011547582495575525572142004526864429", "02662053915166354392053050506513999224110779964991", "37631638189425375647606473979596663184245119970412", "90073655374440331991016398150574144440116796845499", "53647264831840150855458572656122823252167217239011", "34053787591513978562476936992436521310701198578931", "38068223579176992642666478710914237640696062497514", "52456357988773496967052664059885292044634091441052", "44967194717483742583686905549411116331393279842055", "51099876938056225359777827474554829268094278407285", "55157423533733905593448272908898863072161617449377", "24948419078946120510326102058217539383350517368945", "65578435501701972127542573572416806674299544100097", "11366052328037425436840799759688156164029335089937", "73975352926638710300997754588848399220878981962391", "77355673444755769751745799601790398990070136982725", "48592435567988422929370835069413959306774231676333", "72306620412530937979832458782746174804930451774239", "69682694419688020094896665499925012496182514865824", "65787914460149005996228273544996487256968447818411", "24845304936027059104225020251672848035513898870970", "74930081656821250114895509637340174403946783160912", "88709142964232271690826586264046194665220865792979", "71603964940002702126689556493740684772881976177494", "66719113612173698907067653533084373902122580832563", "08853520459916543781347638419789605852146130377060"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 1935;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> level = {"00342685134189867177326492239406252932539629125310", "97719287575902848560843180709360008361311850181171", "71571562574495554276619941634360655870330780088663", "48088198975216304210774489125224673410169770710750", "20856141606611256912871130619004183345070474343058", "56165526810191909505779825863457165669003056002704", "35293574160779354427259580821753149382765265073648", "32248281965040598953930926066003528700213984547321", "40843957429901302648345839738152579030413463687682", "53609720594513637253374337472385413991585984432558", "88699971472119509443502392057862541810347219892724", "57378598375586890219996135825705937168145317491718", "06280293195170550869816663671095615114082903096294", "95354602394571318806276647599948999670813630927482", "27285460912230893639099818734803508859685738625369", "07002008114582131905893972549561187401827435201277", "75464884607524378469853758688593227019987830508452", "23055450590810511865440519257962007185744560483755", "17387657340929711218557350742616928497914971583312", "09219985950339775718625395587408558156961998796794", "85970278377264682023315992094022526392539933728997", "73625597099860421425833623062859103630361281398338", "73673914114684485602683995630215422303537690663918", "17846584219088874258975715890600191766065428914122", "85303369642434110256630648319587931513689469283373", "78601092910446305333548475170344383924535641714460", "27229895187694628177449839177115921449774594379442", "71967818138148311837505791611514926249629469525754", "83768442621075146988839158411584289460302962931119", "78024253034842168312212651725235859702106300953190", "85348684253864083113453543548666049486724603444134", "01485467533179943441004567506605626017712719087006", "61559778100141056782062590876877152495348349917750", "27354113887080800236918997851214094143036914569055", "64766135987906504819058639505498862008280439474597", "33030552403392708085091151214709931477443398580095", "69475683591141326118403445724300760630639089507620", "16890769971464093645165643369247072642786949617367", "07419606897838996841790778281898262851085893761091", "77678278529621345490592650713199250610640611300946", "28650767993228385524100901495051536674376408396562", "73280464127759339324213085398986632952422007468983", "76921060060724514605849533215401005708013710328958", "58672322932292873181907744121093610030894900151737", "95825383027651524152550687013038955936520875458509", "48613308319564244914278356392832113087350208048841", "46962449854717682011839802733996287707021345012639", "47596081988847052023319429578823249864953693396364", "00798996118179829524430872372508488940873070510104", "68867669546567116519625660124869547903561094693874"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 1898;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> level = {"04457104225986780001485555850591615362430223883103", "40918734498331043291341202136089384606438456788545", "11996961568597772818677985595042044986610983085777", "66758920787853955249879896636771950844861046420757", "62224028630471339529036525861540760255025711723763", "55488656732035887644774258002929120006342866077735", "54564676709106212173177532232136418795329092910703", "92148770186427577064435649126744018212344856195068", "40292951746924641183837161692429280654013165413308", "96342028129792541578107723992521002436557183933035", "76711149330895387174347629440073067456898087194036", "32337709169239086547201423836649768307409682192419", "34154232230793998344669241991194489957999859083240", "34184285522970567196887064104262790099588618206652", "50348977760213717834227498031253352138000217358898", "13300015568721207851199341168149603927344984788113", "72160385359702247830993609633286829594772931737725", "14746825888912093285836110764364327741427182138262", "54634085952552679246698214080632170147787937628675", "72743873472135635990292151809606659283080533658416", "82276694586269157501528403762961557597344450343806", "50536020421574096177398590701712381512196132502423", "20471452406542845571339117879345370488460904489843", "56378169590800243360337636377908571055374361101302", "28585932158775482602167870588499492706054678825484", "63249420969720724609756052718700706444228137294623", "22826899688985393268581818196510732673169017895683", "90366120794061359205851246562241342120805787001764", "70394698670826745449335895840274530183758962458655", "47820690652702379563527338012752594059874509778205", "00920562149669889515308163690486684468731717966679", "35887095971049027809754568329786137823736941051523", "46522900955389906968449639321857682564340757005481", "01242798902134813671468543911783827518982616086004", "52171984951082685229245646481836669494277666221827", "64040171088043355460928638581560762766129080180053", "04444417083214864473945934504201924643000002663560", "78733640201550976674450151282150087302562985104818", "85808126767473303127678521926832828267406253009558", "85862961552395762896024727423869137649352922351112", "88041720675267869966249571052111905552409876591429", "67899931628956145584463837570267747103349784113862", "45304205488182468075079058456550489661458932751628", "62138547884517329332585154724249321868049308230461", "89792324304117582398648081202025631679263371818040", "78782650734759738832187462217308860295281215628381", "05111754210052575118714242912768365196806773456098", "26068642575169694738822503592533430074727722869347", "49275798565302449961745760068276029921035845878597", "16252819980957750061583407289478791118775965955935"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 1875;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> level = {"0221", "3333", "1023", "1123"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> level = {"022200003", "000200002", "230222220", "302022220"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> level = {"09999999999999999999990000000000000100000020000704", "80000000000000000000090000000000000023400057820000", "80000000000000000000090000000000000000000066545250", "80000000000000000000090000000000000000320015367800", "80000000000000000000090000000000000000074508734621", "80000000000000000000090000000000000000000012394464", "80000000000000000000090000000000000000345000000389", "80000000000000000000090000000000000000064223405542", "80000000000000000000090000000000000000000000000003", "80000000000000000000090000000000000000000000000004", "80000000000000000000090000000000000000000000000000", "80000000000000000000090000000000000000000000000000", "90000000000000000000090000000000000000000000000000", "90000000000000000000090000000000000000000000000000", "90000000000000000000090000000000000000000000000000", "80000000000000000000090000000000000000000000000000", "80000000000000000000090000000000000000000000000000", "90000000000000000000090000000000000000000000000000", "80000000000000000000090000000000000000000000000000", "70000000000000000000090000000000000000000000000000", "60000000000000000000090000000000000000000000000000", "50000000000000000000090000000000000000000000000000", "40000000000000000000090000000000000000000000000000", "30000000000000000000090000000000000000000000000000", "20000000000000000000090000000000000000000000000000", "10000000000000000000090000000000000000000000000000", "20000000000000000000090000000000000000000000000000", "30000000000000000000090000000000000000000000000000", "40000000000000000000090000000000000000000000000000", "50000000000000000000090000000000000000000000000000", "60000000000000000000090000000000000000000000000000", "50000000000000000000090000000000000000000000000000", "60000000000000000000090000000000000000000000000000", "70000000000000000000090000000000000000000000000000", "80000000000000000000090000000000000000000000000000", "80000000000000000000090000000000000000000000000000", "80000000000000000000090000000000000000000000000000", "80000000000000000000090000000000000000000000000000", "80000000000000000000090000000000000000000000000000", "80000000000000000000090000000000000000000000000000", "80000000000000000000090000000000000000000000000000", "80000000000000000000090000000000000000000000000000", "80000000000000000000090000000000000000000000000000", "80000000000000000000090000000000000000000000000000", "80000000000000000000090000000000000000000000000000", "80000000000000000000090000000000000000000000000000", "80000000000000000000090000000000000000000000000000", "80000000000000000000090000000000000000000000000000", "80000000000000000000098888888888888888888888888888", "88888888888888888888899999999999999999999999999999"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 1710;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> level = {"0675", "3562", "9127", "0936"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> level = {"01380274507420576082", "21309764383410169802", "62658360713958631641", "96704994569780291240", "16697923396833714847", "00902503191039370092", "74210213196337336395", "69039424771819220397", "36473441519373487243", "84768854783988827977", "82425193415551047186", "42680325133772264233", "18780465626648092457", "20540890584266310614", "47143430723554404009", "92224504513665990140", "43042278604424780121", "99242417858797176622", "93501559299594413293", "16166364123781373420"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 635;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> level = {"05555555", "50900000", "50000000", "50000000", "50090000", "60000000"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> level = {"0900", "0998", "0899", "9009"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> level = {"0999900", "9000901", "9010900", "9000910", "9929990"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 140;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> level = {"01111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111171111111111111111111111111161111111111111", "11111111171111111111111111111111111161111111111111", "11111111171111111112111115511111111161111111111111", "11177777771111111111111111555551111166666661111111", "11111111111111111151511111111111111111111111111111", "11111111111111111115511111111111111111111111111111", "11111111111111111511111111111111111111111111111111", "11111111111111111511111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111131111121111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111166666611111111111111111", "11111111111111111111111111161111611111111111111111", "11111111111111111111111111169999611111111111111111", "11111111111111111111111111161111611111111111111111", "11111111111111111111111111166666611111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111119111911", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111119111111"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 556;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> level = {"09999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999"};
    StarAdventure* pObj = new StarAdventure();
    clock_t start = clock();
    int result = pObj->mostStars(level);
    clock_t end = clock();
    delete pObj;
    int expected = 2583;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=293874&rd=5854&pm=2940
********************************************************************************
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <list>
#include <iostream>
#include <math.h>
#include <queue>
#include <iterator>
#include <sstream>
#include <stdio.h>
 
using namespace std;
 
#define fi(a, b) for(int i=((int)(a)); i < ((int)(b)); i++)
#define fie(a, b) for(int i=((int)(a)); i <= ((int)(b)); i++)
#define fj(a, b) for(int j=((int)(a)); j < ((int)(b)); j++)
#define fje(a, b) for(int j=((int)(a)); j <= ((int)(b)); j++)
#define fk(a, b) for(int k=((int)(a)); k < ((int)(b)); k++)
#define fl(a, b) for(int l=((int)(a)); l < ((int)(b)); l++)
#define di(a) for(int i=(int)((a)-1); i>=0; i--)
#define dj(a) for(int j=(int)((a)-1); j>=0; j--)
#define die(a) for(int i=(int)(a); i>=0; i--)
#define dje(a) for(int j=(int)(a); j>=0; j--)
#define fdi(a, b) for(int i=((int)(a)); i > ((int)(b)); i--)
#define fdj(a, b) for(int j=((int)(a)); j > ((int)(b)); j--)
#define fdk(a, b) for(int k=((int)(a)); k > ((int)(b)); k--)
#define fdl(a, b) for(int l=((int)(a)); l > ((int)(b)); l--)
#define ri(b) for(int i=0; i < ((int)(b)); i++)
#define rie(b) for(int i=0; i <= ((int)(b)); i++)
#define rj(b) for(int j=0; j < ((int)(b)); j++)
#define rje(b) for(int j=0; j <= ((int)(b)); j++)
#define rk(b) for(int k=0; k < ((int)(b)); k++)
#define rke(b) for(int k=0; k < ((int)(b)); k++)
#define rl(b) for(int l=0; l < ((int)(b)); l++)
 
#define itadj for(int adx=-1; adx<=1; adx++) for(int ady=-1; ady<=1; ady++)
#define chkadj(i, j, n, m) ((i)>=0&&(j)>=0&&(i)<n&&(j)<m)
 
#define fe(v,it) for(__typeof(v.begin()) it=v.begin(); it != v.end(); it++)
 
typedef int i32;
typedef unsigned int u32;
typedef long long i64;
typedef long long ll;
typedef unsigned long long u64;
typedef string str;
typedef double dbl;
 
#define bz(a) memset(a,0,sizeof(a))
#define sq(x) ((x)*(x))
 
typedef vector< i32 > vi;
typedef vector< str > vs;
typedef vector< i64 > vl;
typedef vector< vi  > vvi;
typedef vector< vs  > vvs;
typedef vector< dbl > vd;
typedef vector< vd  > vvd;
 
typedef set< i32 > si;
typedef set< str  > ss;
 
typedef vi::iterator  itri;
typedef vvi::iterator itrvi;
typedef vs::iterator  itrs;
typedef vvs::iterator itrvs;
typedef vd::iterator  itrd;
typedef vvd::iterator itrvd;
 
#define ffof   find_first_of
#define ffnof  find_first_not_of
 
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)>(b)?(b):(a))
#define ABS(a)   MAX((a),-(a))
#define DIST(a,b) ABS((a)-(b))
 
#define vp(v,a)  (v).push_back(a)
#define vpb(v,a) (v).push_back(a)
#define vpf(v,a) (v).push_front(a)
#define vpob(v) (v).pop_back()
#define vpof(v) (v).pop_front()
 
#define va(v) (v).begin(), (v).end()
#define vf(v,a) find(va(v),(a))
#define ve(v,a) (vf(v,a)!=(v).end())
#define vins(v,a) do { if (!ve(v,a)) vpb(v, a); } while(0)
#define vind(v,a) (ve(v,a)?(vf(v,a)-v.begin()):-1)
#define vdel(v,a) v.erase(remove(va(v),a),v.end())
 
inline i64 gcd(i64 a, i64 b) { if (b==0) return a; return gcd(b, a%b); }
inline i64 lcm(i64 a, i64 b) { return (a*b)/gcd(a,b);                  }
 
#define sz size()
 
#define mp(x, y) make_pair(x, y)
#define mt(x, y, z) mp(mp(x,y),z)
 
#define pfst(p) (p).first
#define pscd(p) (p).second
 
#define tfst(t) (t).first.first
#define tscd(t) (t).first.second
#define tthd(t) (t).second
 
typedef pair<int, int> pii;
typedef pair<int, str> pis;
typedef pair<str, int> psi;
typedef pair<str, str> pss;
 
typedef pair< pii, int > tii;
typedef pair< pss, str > tss;
 
#define pq priority_queue
 
#define dbg_vint(v) do { copy(va(v),ostream_iterator<int>(cout,"\t")); cout << endl; } while(0)
#define dbg_vstr(v) do { copy(va(v),ostream_iterator<str>(cout,"\n")); cout << endl; } while(0)
#define dbg_vdbl(v) do { copy(va(v),ostream_iterator<dbl>(cout,"\t")); cout << endl; } while(0)
 
int mem[102][51][51][51];
 
vs l;
 
int doit(int x1, int y1, int x2, int y2, int x3, int y3)
{
  if (x1>=l[0].sz||y1>=l.sz||x2>=l[0].sz||y2>=l.sz||x3>=l[0].sz||y3>=l.sz) return 0;
  int m=x1+y1;
  if (mem[m][x1][x2][x3]) return mem[m][x1][x2][x3]-1;
  
  int ret=l[y1][x1]-'0';
  if (mp(x1,y1)!=mp(x2,y2)) ret += l[y2][x2]-'0';
  if (mp(x1,y1)!=mp(x3,y3)&&mp(x2,y2)!=mp(x3,y3)) ret += l[y3][x3]-'0';
  
  int add=0;
  ri(2) rj(2) rk(2)
  add >?= doit((i?x1+1:x1),(i?y1:y1+1),(j?x2+1:x2),(j?y2:y2+1),(k?x3+1:x3),(k?y3:y3+1));
  
  ret += add;
  mem[m][x1][x2][x3] = ret + 1;
  
  return ret;
}
 
class StarAdventure {
  public:
  int mostStars(vector <string> level) {
    
// BEGIN CUT HERE
    static bool s_FirstTime = true; if (s_FirstTime) { s_FirstTime = false; run_test(-1); }
// END CUT HERE
bz(mem);
 
l=level;
 
return doit(0,0,0,0,0,0);
    
  }
  
// BEGIN CUT HERE
  public:
  void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
  private:
  template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
  void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
  void test_case_0() { string Arr0[] = {"01",
 "11"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(0, Arg1, mostStars(Arg0)); }
  void test_case_1() { string Arr0[] = {"0999999999"
,"9999999999"
,"9999999999"
,"9999999999"
,"9999999999"
,"9999999999"
,"9999999999"
,"9999999999"
,"9999999999"
,"9999999999"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 450; verify_case(1, Arg1, mostStars(Arg0)); }
  void test_case_2() { string Arr0[] = {"012"
,"012"
,"012"
,"012"
,"012"
,"012"
,"012"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 21; verify_case(2, Arg1, mostStars(Arg0)); }
  void test_case_3() { string Arr0[] = {"0123456789",
 "1123456789",
 "2223456789",
 "3333456789",
 "4444456789",
 "5555556789",
 "6666666789",
 "7777777789",
 "8888888889",
 "9999999999"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 335; verify_case(3, Arg1, mostStars(Arg0)); }
 
// END CUT HERE
 
};
 
// Powered by PopsEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/