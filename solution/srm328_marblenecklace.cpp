/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6855
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

class MarbleNecklace {
public:
    string normalize(string necklace);
};

string MarbleNecklace::normalize(string necklace) {
    string ret;
    return ret;
}


int test0() {
    string necklace = "CDAB";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCD";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string necklace = "RGB";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "BGR";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string necklace = "TOPCODER";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "CODERTOP";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string necklace = "X";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "X";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string necklace = "TC";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "CT";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string necklace = "AUAHS";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AHSAU";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string necklace = "ANHJVFH";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AHFVJHN";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string necklace = "PZFWDNQER";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "DNQERPZFW";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string necklace = "WEAPDWPTPH";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AEWHPTPWDP";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string necklace = "LHDFRFCXMPRBS";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "BRPMXCFRFDHLS";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string necklace = "LSZRYKMVSDSSHIW";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "DSSHIWLSZRYKMVS";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string necklace = "OGCKGAPJNOIZSMWYY";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AGKCGOYYWMSZIONJP";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string necklace = "ZGCZYWGIGEOQEDWJSR";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "CGZRSJWDEQOEGIGWYZ";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string necklace = "HUKTGUANLMSKZXIREIWH";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ANLMSKZXIREIWHHUKTGU";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string necklace = "HRICRSSENBMIECNLJTXIUQW";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "BMIECNLJTXIUQWHRICRSSEN";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string necklace = "VQANBHOXRYWEMGSAFJNPJPHWZ";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AFJNPJPHWZVQANBHOXRYWEMGS";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string necklace = "MQQYDYAYGIWSNHRRNDNDVENIKAC";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ACMQQYDYAYGIWSNHRRNDNDVENIK";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string necklace = "NDQBATCEYHCJRVBTYTBCVBBGOIINS";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABQDNSNIIOGBBVCBTYTBVRJCHYECT";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string necklace = "PJSHKPGCGNROCMTHELKOXPXDGLFTGCV";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "CGNROCMTHELKOXPXDGLFTGCVPJSHKPG";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string necklace = "JLRIUGHHRQMWYMNKQERQTCHJEFDHJARA";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AJHDFEJHCTQREQKNMYWMQRHHGUIRLJAR";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string necklace = "SONBZELGFEQMSULZCNPJODOWPEWLHJFOEW";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "BNOSWEOFJHLWEPWODOJPNCZLUSMQEFGLEZ";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string necklace = "AJKQVGEULNYDTFOZUZJYGWTQJZEFYGUDQDHH";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AHHDQDUGYFEZJQTWGYJZUZOFTDYNLUEGVQKJ";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string necklace = "IQKPQMOPYXIDZKYWDBJMLWIQDEQYATEDNTSLFD";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ATEDNTSLFDIQKPQMOPYXIDZKYWDBJMLWIQDEQY";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string necklace = "BTDCTWOUDVWXHQCEUAPBFDVQLKQSBBLLWASLIVPV";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "APBFDVQLKQSBBLLWASLIVPVBTDCTWOUDVWXHQCEU";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string necklace = "DLYDPZRTEWDEACZPGDXBKDXULYDQJODQOMWDBVBZOXQ";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ACZPGDXBKDXULYDQJODQOMWDBVBZOXQDLYDPZRTEWDE";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string necklace = "EOMRKCMQGUVBTJPWDOCJUACGGMFQXZFRXOETXCZKEUJQ";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ACGGMFQXZFRXOETXCZKEUJQEOMRKCMQGUVBTJPWDOCJU";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string necklace = "NDUAPAGSKEXWHNHZGINGLWDFZFJRBUZSBCIMOFADAUJIUXC";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ADAFOMICBSZUBRJFZFDWLGNIGZHNHWXEKSGAPAUDNCXUIJU";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string necklace = "LOIFNTRBPGOLCQWDUVTLKQTSPEYMXRITRXZXFJWBWEHQVCGSB";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "BLOIFNTRBPGOLCQWDUVTLKQTSPEYMXRITRXZXFJWBWEHQVCGS";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string necklace = "HOJURSWOKLGZLHQXLVUXDCJJCVQGVRVXPVDZJEFCOEWDXAPFMF";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "APFMFHOJURSWOKLGZLHQXLVUXDCJJCVQGVRVXPVDZJEFCOEWDX";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string necklace = "JEWQWKYXPJPSJFZZQHNTSSOPFFRMXGGRXXQIXRYBLBMQEHDHHE";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "BLBMQEHDHHEJEWQWKYXPJPSJFZZQHNTSSOPFFRMXGGRXXQIXRY";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string necklace = "FDMIOBNIAWJYMNNXIVUNCXHXHBUUFISVJLJWQTDRUOCIKPESHW";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AINBOIMDFWHSEPKICOURDTQWJLJVSIFUUBHXHXCNUVIXNNMYJW";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string necklace = "VFXQRQOUVPPTOKCPXYUQRDUYESBEATPMXJOCVSKDGIAWHJKLHA";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AEBSEYUDRQUYXPCKOTPPVUOQRQXFVAHLKJHWAIGDKSVCOJXMPT";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string necklace = "PUJODPYHGZCMYAUILYEZSQEBVVKTJIABFROIPCDLGGQLFAVXME";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABFROIPCDLGGQLFAVXMEPUJODPYHGZCMYAUILYEZSQEBVVKTJI";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string necklace = "HOJUZALRLLLOHBHKICYEVRTHNOFJBFEGITGXCQSJSQDSWGJVQC";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ALRLLLOHBHKICYEVRTHNOFJBFEGITGXCQSJSQDSWGJVQCHOJUZ";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string necklace = "AABB";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AABB";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string necklace = "ABCABBBAAC";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AABBBACBAC";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string necklace = "CDADBA";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABDADC";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string necklace = "A";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string necklace = "AQCADT";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ACQATD";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string necklace = "EDCBABAAABCDE";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AAABABCDEEDCB";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string necklace = "EDCBABABCDE";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABABCDEEDCB";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string necklace = "ALTABC";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCALT";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string necklace = "ZZZABBAAZZZZ";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AABBAZZZZZZZ";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string necklace = "ADACABACAD";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABACADADAC";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string necklace = "ZEDDDCBABCDDDFZZZ";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDDDEZZZZFDDDCB";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string necklace = "ABAZD";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABADZ";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string necklace = "ABCD";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCD";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string necklace = "ASOFNBZELGFEQMSULZCNPJODOWPEWLHJFOEWAJFLAAFSSAA";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AAASOFNBZELGFEQMSULZCNPJODOWPEWLHJFOEWAJFLAAFSS";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string necklace = "AAZAZ";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AAZAZ";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string necklace = "ABAAC";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AABAC";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string necklace = "BBBB";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBB";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string necklace = "ABOOAARDVARK";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AAOOBAKRAVDR";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string necklace = "ABCBAABC";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AABCABCB";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string necklace = "ABCA";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AABC";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string necklace = "ABAAAABBCC";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAABACCBB";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string necklace = "SONBZELGFEQMSULZCNPJODOWPEWLHJFOEW";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "BNOSWEOFJHLWEPWODOJPNCZLUSMQEFGLEZ";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string necklace = "BCABCDAAA";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AAABCABCD";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string necklace = "BBACBABAB";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABABBBACB";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string necklace = "CBAD";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCD";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string necklace = "ABCHGSKDMSDSD";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCHGSKDMSDSD";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string necklace = "ABBA";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AABB";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string necklace = "ZZZZZZZZZZZZZZZZZZ";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZZZZZZZZZZZZZZZZZ";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string necklace = "BDFBDEC";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "BCEDBFD";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string necklace = "ZZZZZZZZZZ";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZZZZZZZZZ";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string necklace = "ABCDDCAAZ";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AACDDCBAZ";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string necklace = "ZBRTABBTABBBBAB";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBBBABZBRTABBT";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string necklace = "BACDA";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABACD";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string necklace = "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string necklace = "CAABA";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AABAC";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string necklace = "RGB";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "BGR";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string necklace = "BAC";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABC";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string necklace = "GGGBA";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABGGG";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string necklace = "BACA";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABAC";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string necklace = "AZCAZ";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ACZAZ";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string necklace = "ZEGZFE";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "EFZGEZ";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string necklace = "CBABD";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDB";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string necklace = "ABCAA";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AAABC";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string necklace = "EDCBA";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDE";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string necklace = "BBBBBBBBBBAZAZ";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBBBBBBBBBZAZ";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string necklace = "DACCABCAD";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCADDACC";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string necklace = "AAAAAAABAAAAAA";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAB";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string necklace = "ZAZCAC";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ACZAZC";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string necklace = "YAZBAC";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABZAYC";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string necklace = "FAFAAA";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAFAF";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string necklace = "TOPCODER";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "CODERTOP";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string necklace = "BBCCBC";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "BBCBCC";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string necklace = "BABCAA";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AABABC";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string necklace = "FGKABDBAJPRIADAVABAABVCS";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "AABAVADAIRPJABDBAKGFSCVB";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string necklace = "ACABAC";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABACAC";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string necklace = "DCACB";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ACBDC";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string necklace = "ACBDC";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ACBDC";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string necklace = "ABCDAB";
    MarbleNecklace* pObj = new MarbleNecklace();
    clock_t start = clock();
    string result = pObj->normalize(necklace);
    clock_t end = clock();
    delete pObj;
    string expected = "ABABCD";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14927099&rd=10008&pm=6855
********************************************************************************
#include <algorithm> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <cassert> 
#include <cctype> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <stack> 
#include <vector> 
#include <set> 
#include <queue> 
#include <map> 
using namespace std; 
 
#define ALL(x)      (x).begin(), (x).end() 
#define PB        push_back 
#define REP(i,n)     for(int i=0;i<int(n);++i) 
inline string REV( string s ) { reverse(s.begin(), s.end()); return s; } 
typedef vector<string> VS; 
 
class MarbleNecklace 
{ 
public:   
  string normalize(string necklace) { 
    string ret = necklace + necklace; 
    string ret2 = REV( necklace) + REV( necklace); 
    int n = necklace.size(); 
    VS t; 
    REP( i,n ) {  
      t.PB( ret.substr( i, n)); 
      t.PB( ret2.substr( i,n )); 
    } 
    sort( ALL(t)); 
    return t[0]; 
  } 
   
 
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/