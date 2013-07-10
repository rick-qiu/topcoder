/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7249
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

class EncodedSum {
public:
    long maximumSum(vector<string> numbers);
};

long EncodedSum::maximumSum(vector<string> numbers) {
    long ret;
    return ret;
}


int test0() {
    vector<string> numbers = {"ABC", "BCA"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1875;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> numbers = {"ABCDEFGHIJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 9876543210;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> numbers = {"ABCDEFGHIJ", "J"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 9876543202;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> numbers = {"A", "BB", "CCC", "DDDD", "EEEEE", "FFFFFF", "GGGGGGG", "HHHHHHHH", "IIIIIIIII", "AJJJJJJJJJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 9973936905;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> numbers = {"J"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> numbers = {"A", "B", "C", "D", "E", "F", "G", "H", "I"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 45;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> numbers = {"AB", "BC", "CD", "DE", "EF", "FG", "GH", "HI", "IJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 494;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> numbers = {"CC", "GDEGI", "HAJCGIHAFHDA"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 987655036158;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> numbers = {"AEBEAJEAHEI", "AEHJB", "HBIJIFIACFG"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 184314925943;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> numbers = {"FH", "FJHEADABI", "IE", "II", "ABH", "ADHHGHGAAACI", "ICFI", "AHHBAGG", "IIFAAHJEA", "CCGGI", "FGIAJJGBIJ", "EHDDJ", "IBCABJFA", "EFJABFFBCAC"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1069298028955;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> numbers = {"FBAE"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 9876;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> numbers = {"JGJDCJI"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 9897695;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> numbers = {"GHJIDDD", "AHHCCCA", "IIJCEJ", "F", "HDBIGFJAAJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 9888114550;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> numbers = {"EGEJJ", "FHCIF", "IJCDJ", "E", "EEADEEF", "DC", "IJJDHFGFGI", "DBABAHIFG", "F", "F"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 10657685529;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> numbers = {"GDJJBIF", "GEAAFAECGG", "GAJAEDAHBED", "GBBDJCAHJ", "GDGBID", "GBAJI", "GCJ", "GDHBEDHE", "GDCG", "GDF", "GHIADD", "GFDCJEDA", "G", "GDAAEJAAJE", "GDDCEF", "GACBGDJEJG", "GGECCGFDJCEC", "GIIGEFFIJHG", "GH"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1222893865519;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> numbers = {"EEJDE", "CDHEIIAHH", "BIDE", "GFJJECI"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 994012340;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> numbers = {"EECEHADBH", "HFGAIIGABA", "GBA", "BIECA", "AGDCJBEB", "G", "DFGDEHDA", "BEJFAAJE", "BFAAJADGC", "GIHEF", "EFGFBCD", "GHEGHFGDFHGG", "FGDABAEJEHJ", "JJC", "FJF", "BAHIJHE"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1076608178598;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> numbers = {"AHCDJ", "AIHCCCIJI", "JFHDJBJJJFG", "G", "B", "JGH", "BE", "AHHJGDECH", "ABC", "JFH", "BJDCEGGFFAEA", "JEAAGJBI", "BHC", "BDIBDADDCEJG", "BFECH", "JB", "BJICHB", "JACBGG", "AGGEJGHED", "BI", "GFEFBDGDIB", "BIBCJCEGC"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2056024708316;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> numbers = {"IEI", "BBB", "J", "GJIDDJA", "HEIIGAHCEI", "ECCDFBJ", "JC", "HE", "BBDHFGBEH", "IDFF", "AFAJA", "BECIBJCG", "B", "GGEJIIGAEFH", "HEGDEDGBC", "CFHBBHCJBHF", "EJGGAACJ", "IHIEDBHEII", "IFFEGFEII", "HDGHD", "HFJAJGE", "CAGGIJAHD", "CEDFAGAD", "EGACFBGEG", "HIIHFHAD", "J", "GEHDIHB", "BABH", "BEGJCIGGCBF", "IBCI", "IBBJFAJGDIA", "AFFAIGH", "ABAJDJEJHEAH", "CGHJ", "CIFHHHEHE", "AE", "IIEBCJ", "CAFIGHAHFA", "BEFJGBGDIIF", "EBIBBAHBAIIE", "G", "E", "CCJFDF", "AJCHAJHJI", "AEH"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2199675678709;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> numbers = {"DJAFGH", "EBCEIBAID", "FFDII", "JIJDGDAFE", "HGFCHDDHABF", "DHEDJFIF", "AF", "DIBGDGF", "CAIEAHGIEJBC", "JFCHECCG", "JIEEADBJGAF"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1126278167318;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> numbers = {"IAHAIGDEBF", "BJF", "HGHG", "GAA", "IIFEGJFBICC", "IE", "FJAGIJJI", "FGDA", "BFCGIGGDDFIE", "CDJEGCGAH", "H", "CEI", "BDFHJAHJBCED", "HGC", "FDEB", "I", "CBHEIDHJBHC", "HICCDA", "HC", "HGHAAECBBC", "HH", "GDDIFCD", "FEFJG", "CJC", "GCHGD", "ICIFCG", "FIJDEHFH", "GHJ", "BIHJ", "CIFDEIFJB", "BADHJIHI", "CICI", "BADBGCGJDGCG", "FCAD", "FBCCCEEICJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 3058862657319;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> numbers = {"IIGGCHJAJH", "DFJCBIEE", "EGAIEEEHDGF", "CDFCI", "AD", "DFCFAIEC", "EEGHAJ", "EDFDGB", "CD", "H", "CBGCHFHEHIEA", "EJHGDJAEJD", "HEJADCHIE", "EEHAHD", "EGGAJHBHGI", "HBBDBBHAECA", "FB", "EB", "CBD"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1150838595663;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> numbers = {"IHHIC", "CGCDHBFCHG", "FJGHD", "IJFGDEFFDDGC", "FECGCAJCAJH", "EGEDCIAIHDE", "IEBHCJJGIFJC", "EDFFEGBDIHIB", "CFCHJCI", "IBBIBIBFAAH", "EDIJDBEBHIE", "IGGDCACFA", "EACCGECDGF", "FDIJIAG", "EGDFJAJHAGGI", "EDJGG", "CIDGJJIDBCGD", "EBC", "FHCE", "FHCBACEIAA", "FIGHJFCAED", "EBFICFFGG", "CIJAFB", "I", "CBGDAICCBFJ", "IDDEGFFBFH", "IJ", "EHBGHGHECFJJ", "CAAGCEFA", "IGICEDD", "CDCI", "CAFFFDBJGD", "CEIEBDG", "CJDADGEA", "CDIDEGGAJ", "IJBAF", "CBHDFACCF", "CDCC", "CHEHIFECBB", "CEAI", "IGD"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 5806361446350;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> numbers = {"CBCEEFDGH", "HHEB", "JB", "EFIHJFHFC", "DECI", "EJBAFACCGGJ", "BAD", "GACHE", "ECAFDFGFD", "IGBHBHDJ", "EBGBEHFCFGEH", "GF", "BBBAJBGGJAE", "EBA", "GIHDGDFCJ", "EAJAHIJBFAI", "DEJFBAADEDF", "DEB", "EGHHE", "CDBBHDDIHDF", "BFFACFGDIJ", "DEAIABCEEDAG", "GHJHGEFCIDA", "JGBED", "HIGEAGAADH", "JB", "JAFAABJIDDDF", "CJHGC", "JJCHD", "EFFGI", "B", "IHHCCADAAIEC", "G", "HACA", "IBF", "IDJDHJJ", "IJFD", "CC", "GAGB", "GIIEBBFB"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 3612449766784;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> numbers = {"IABE", "ABBDEHHCHDA", "ADBEJCGI", "D", "BDGGHFCJH", "HIHFGDIJCEC", "IJCE", "DBDHJEEEBD", "DEBAIAJ", "CHBFEHF", "JDDFBDGHEI", "JHIADJBIBHF", "EBJBCCACABDI"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1200428655328;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> numbers = {"HBFFHEBAECB", "AJIDEFE", "BGIFDBGI"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 98871099535;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> numbers = {"EGHFDIDDIBA", "GIFIDBBBIG", "DABAB", "HHEADJHI", "FGACGE", "CDJHGHHAHEEF", "GGAIEHAC", "CDAAD", "EBBB", "C", "GCFI", "CIABF", "DGHDBIF", "H", "DHBDA", "F", "GIGC", "EJF", "HHIDEFJGCHH", "FDCAFDADA", "HIFEJE", "DFDDD", "HFI", "EDJFB", "CCFG", "DEJIJ", "FH", "FGCFI", "DJGBEACCED", "DGEEJDIEJ", "DDAFHJFJ", "EFBIJBFGFHEE", "HJIEFH", "CHIHFCEEFFI", "FGGDDGFHCHA"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2158234108403;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> numbers = {"EGEE", "IGFF", "BHDB", "FHEG", "IEJD", "EEGJ", "IJBD", "IDHH", "EBAF", "FFBF", "JIJF", "HFIH", "FFAG", "IHCA"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 113891;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> numbers = {"AAFBGJHEB", "CJJCDHHJD", "AFEEACCCA", "FHCIEBIIH", "FJJJHJDGI", "AGHBADEDD", "ACEFCHGCJ", "CEBGHAJDA", "FAHABFHDH", "AAJDJDBHH", "CGDGCAGHI", "ACIICABGC", "AHJEIGIDI", "FEJAIFBGH", "FECEJICGA", "AEJBFDCGJ", "FCJBFCAAC", "FHICEGAGB", "ACCGEJIHH", "CGIGCIFEG", "CDBIAEDHF", "AHFHICJCG", "FBDAIAJBF", "ADHHCEBEJ", "AJDHHHAIF", "ADFIDDGEC", "FIGECIDIB", "AAFJCAJGA", "AAJEEIDGG", "CDFFGEBCC", "FBDFHIDGB", "FDIEHHBGI", "ADHBGGAGF", "AFJFDGFIA", "FJJHBEEGD", "AGDJJIBGI", "FHHGDEGEJ", "ADEGEEIEF", "ACBECEGJE"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 34796915225;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> numbers = {"DCFAEFCJ", "CFHAFEFI", "IFJIIDJB", "IDFAHGDC", "DGADGEJC", "IGABDBJH", "DGIFAEGD", "CCJHGJFC", "CGBBEAHA", "CIDIJGBI", "DIDDJBFE"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 969567159;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> numbers = {"IJDCIEC", "CEFGJJF", "CDFGGEH", "CCFBHAA", "CAGBAFC", "CIEGCGD", "IJJEDFE", "CDIEHGC", "CBDEFDJ", "CABHJIC", "IIBDEDB", "CFCEIAA", "IHDCFAD", "CBEAHCH", "IHIHAGJ", "IDIJIJA", "IIBHJBH", "IHJJJED", "IDEIHEH", "CFIFHDD", "CAGIIAI", "CIDJBAD", "CFHCHJD", "IBEACCA", "CJHIFJI", "IDHFAGC", "CCGDIJH", "IDDGFED", "CBCAAII", "CFCIHBC", "CBJAIHG", "IGGAFCB", "IHCBBCC", "CIFBGIF"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 312019553;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> numbers = {"B", "H", "J", "B", "H", "B", "D", "A", "J", "J", "H", "D", "D", "B", "B", "D", "D", "D", "B", "A", "H", "D", "H", "D"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 183;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> numbers = {"JAAG", "BDBI", "FJIF", "JGHC", "BHHA", "IBCE", "FIBC", "AJCD", "FFFJ", "DDGH", "ABCH", "JFGA", "DFJB", "JIHG", "JAGC", "DCJD", "ICJI", "JEFE", "IFIA", "IIHC", "FBAE", "AJCC", "FJHH", "DHBE", "IJFD", "DJBA", "IJDB", "DFJJ", "BBFJ", "FBAE", "JBAJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 236123;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> numbers = {"BAAG", "BDBI", "JJIF", "JGHC", "BHHA", "IBCE", "FIBC", "AJCD", "FFFJ", "DDGH", "ABCH", "JFGA", "DFJB", "JIHG", "JAGC", "DCJD", "ICJI", "JEFE", "IFIA", "IIHC", "FBAE", "AJCC", "FJHH", "DHBE", "IJFD", "DJBA", "IJDB", "DFJJ", "BBFJ", "FBAE", "JBAJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 234576;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> numbers = {"HCE", "JFD", "JIC", "HAA", "GHF", "HFA", "JGH", "GGE", "GFI", "GBE", "GFF", "ECD", "EIE", "GDI", "EBC", "JDG", "AJD", "EED", "GGD", "GJC", "GBA", "JCF", "EFG"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 18973;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> numbers = {"BBJAICE", "JAADAED", "HBFAHDD", "FBIDGFJ", "GDHDBDC", "FHBGIIA", "GAGEEFG"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 56240375;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> numbers = {"A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 261;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> numbers = {"BHJECHGFEJGC", "DDFIHHGHBECI", "DGBIDEEGEFFJ", "DHGABIDEGIIF", "BGBIDDCCBEFD", "DAJJDCGBDEJH", "DHJIABFJGEJB", "BHBHBFDBBEFD", "BFHFEBIBBAGJ", "DDGAIBIEDHAG", "BGBCBBCBJGAD", "DECEJFECHDFI", "DJBCFIJBCCDI", "BHEACAEGHGAB", "DFFCHJEDCIFA", "BBJAEHBBEFDD", "DIAECJIHDGDI", "DAFIFHIJJFIH", "DAJBAFHECFEJ", "BEDFCGAFCGGB", "BGDGJDIBDIEA", "BEEAECAJICBI", "DCACFCHDGBCI", "BIHDHHBACGCE", "BEAGDFBBAGBE", "BDHBADIIJBBF", "DGAFHFFCGFFH", "DICCIIJEJBCH", "DJAFBFJIEHCB", "BGHGDGDCIBDA", "DAEDAGIIDCFJ", "BFFGHBEDGHHC", "DFGEICBDCJJC", "DCIGBCIBBEIC", "DGDEJFFDJIHD", "BBHBJDJABDFC", "BBBHDDEFJIEB", "BAAAFJCBGDIG", "DHIGAICIGJCA", "DGBABDGCIIAF", "DCJBDGBDCJHF", "BBCDCCADFBGC", "BEICJJCGGHGD", "BEACEAEIAEGB", "DBJHJCFEIIGD", "DIJDBEHFJFJE", "DBCEIGDBIDHC", "DFFJGBACCJAC", "BDIBJDEJHFGC", "DBEGGFHCBIEC"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 45634537408494;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> numbers = {"CDBFECBDFGII", "GJBJHHIJHFGA", "CCDCCAEGEJFE", "EBFJJEAEAGBE", "DEDHCGJGCJJG", "HADHCAEFJJJD", "IBJDHIEAGIHJ", "FGJEEEBGHHAG", "IGGJEDDBGECD", "JEDECAJJADIG", "HHFIFGAHCGGC", "IIEBBGFICGAA", "FIEJBCDFIAFA", "CDDJBEAGGDGA", "GFEGEBJEHAIE", "GGJJFEBACAJA", "EBICDIGBEIJG", "CFIAEACJDFAG", "JIDGHCGGDIBD", "DJIAGGDBEEDD", "IEJEFCJFAHFC", "BGHDGDHDBADG", "DAIGIJFCJAGI", "GDJAAIFCGBEG", "GJAAGGIACGIF", "DCCDDCHGHECD", "CDDGHJCEHFHC", "ECJFIFJDFIGG", "FGDFIDEDGHHE", "HECBHEEADIII", "HHIDAFAIFIAG", "GBBCBBBIIBJC", "FGCGFIJIEFJG", "HJFHGCBBIAJF", "BFDEFBAGIAJB", "IADGGDCAJIFJ", "ICACIGBIEFDB", "HBBHDJFHGJCG", "GGBIJGJGBAAC", "IEJIGHBCEBDC", "IAGDDJJIHEJC", "HIHAAACEAEGF", "JIHABJIHBCDD", "EJCEDHCDFEHC", "DGAJGHICEEFE", "DJJBAJHEIDFC", "EFCBJHDFICDB", "HJFFEFGFCIGD", "BFAGGFCIJEFD", "IFEIHGFICBGB"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 32030473952900;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> numbers = {"GEGEIFJFEGCB", "GEEEGFFGFDCG", "DFIFHIACIFBC", "HAJFCACGDBHJ", "DHGAIJDJEIEE", "JAAEIGAHIJJH", "GBHACEEIGJCG", "GHGAAGAIEBFC", "GGHBEHJIEBHI", "EGJBGFHCJBEG", "GIGIJGCJCJEA", "HAGHCJFAFAJF", "DJEBHIGDFEJD", "JEIEIADGBGCD", "DHDFIFIBIHJG", "GEBEHFEEJEBE", "HAAHAFGBIDHE", "EBDEIIAJJGCE", "EHHCGFEGJBIJ", "DADEJHBDIGEI", "EHCGJAADAEFG", "GGAHHAICEFAB", "HGCDCAFACEFF", "DGAHFBGBJGHJ", "GDBICHBCHFEG", "JJACFAAEBCJH", "GGJBFIFHABGF", "JGHAAAEIBJAH", "GEHHEGECAFGD", "HHGGAFAAFHHA", "HCIEJCCDDEJD", "HHFDIECHDCBD", "HECFCFEEHCDG", "EEGAJDIHEIFH", "EAFIDFGAJDEJ", "HAGEDJAJGJBF", "HGJCIDBIEFJF", "HAEBAGEHEIBA", "DABHEDHEHFEJ", "EADEBGCDGFBA", "DAEHAAJHBGFI", "DIJDGIGFJEBG", "DGBIFEAGGCBG", "DJEEHFJDEIIF", "HGIBDHFICFHG", "HICFCGEEAFBD", "DGHEHHFHIBHA", "JJFDIEAAJEJA", "JJDIHEBCGFEE", "JFFEJHHFCDHB"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 39718169870558;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> numbers = {"IJEGEEADEIFF", "DIHGAGGBJIDD", "GDHGDJCGDDBH", "IGBAGBGJFBEC", "GAEHBJJGHBCB", "DIEFBHDFBAFE", "GGJJGABHDEJI", "IDAJFAHCJFBD", "IAHEEHEGEDJH", "DHGBEJCJFIHI", "DGACADHBGJGB", "IBJJJCDIEFFJ", "IAGBGHHIAICG", "DHFFIDJCIFCB", "IDICIAECCBEH", "DGHDBCEBFGFB", "DBHDHBJCDHJA", "DDDIFFFDFEGA", "IBDEDDGBADBE", "DIGBJJJBHIAA", "IJHFAIDABBCF", "GFEABCGGJAAJ", "GHHHAJCJJHDF", "IJCHBEDFBBAJ", "GGFDCDFDIJGA", "GFDJBJJBCJJF", "DJABHIJIEABD", "GEJCIBGICAGG", "DBADGBEFCIIJ", "DFCIDJFCIDDJ", "GCIFBEGCFIED", "DABIBBHHIJFI", "DBFJAJJAGDEE", "DFEAEDBFHHDJ", "IIBHDJFACFJI", "GIIGDCFECEGH", "DGAFJIEDFCFI", "GEACBJHBECCG", "GIAJJFCBEAFD", "DFAEABBGJFEE", "DEFIJFAEHAEA", "GAICCEIHICAI", "GJGHECHBBFFG", "IIBCGDIHEJBJ", "IGHDBIFABICA", "GDBHEBJDDJCG", "DIJDHHEFCDFF", "IDCEGBGHDGDE", "GFJBFHDDAIJF", "GEBCAEEAGHCH"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 43461694245115;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> numbers = {"GGHDFFIJAGGE", "JJAEEHBIJDGJ", "BDDHGHGDJEGE", "FAFIHGFDJJBD", "GIEBJJFEHBCH", "CDEBJIHFGIHA", "EJEBIDCEGCEF", "IGCBCJFHAAHH", "HHBIBADGCFFI", "HBFCFFJEDIHE", "BCFBDJGCGGDH", "HJIHICFIBDGG", "BFDGJJDFCJAA", "JECCDEAAFHAF", "ECFAHCHEAIEJ", "HCBHIDAJFAEG", "EEBJDCIFAFAF", "HBBCEHDJCDJC", "FGAAAHJDDFDI", "EBHCICBFFBBC", "HIGAJFGAIAIA", "HCGAHDHDCFEC", "FCCAHJDDFAHE", "EIBABAHHBIHJ", "HJCIHFBDGCGG", "BGFJFBGGBDGI", "DBHHHBHBGFFF", "GGEHCEBCDFDJ", "CBEEFBDIAIHI", "CEEFICDCBBCC", "DJGAGCFFJBBB", "DAIIFAFDDEEI", "FHBBHDJHEJHJ", "BHEFIHBJCHJF", "EECEFIJFJDAE", "HHJIIIGDBGAJ", "HFEFABAHCHHC", "EHIEDEJACFDG", "JFHBGEACEFJD", "FCGDCHHACBBE", "JIHDFEBFCIFB", "BEGDACGBGCJB", "DIAIHGGBCGHC", "GECBFAEECAAA", "BIBGCDCCDFJB", "GICBIJGEJAIB", "HHDEEIJIIJEG", "ECEHHFGEAGAG", "BGBGDFCHDGAH", "CAIAFCCAIFHF"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 33814134026136;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> numbers = {"AGFDDHJBGGHC", "GJFCDJFHJIFF", "DHJFCGFJADFI", "JIDDGAIAJFDF", "JIBGCBJHJEBA", "JFEHABHJFGCC", "CAHHHHFBAFFG", "JICFJHJIGEEJ", "EEJBFGBJBHBJ", "JCGEACCHEIHG", "BFBBIDGGEAII", "AHHBJJIAAGFI", "CFCFFIIBHDIC", "BGAIHJCIFCJH", "EJHBEAABGCBJ", "BCHJDIIHBDDI", "DIHAEDACEEFE", "JFCIEFCABJAI", "CJCGBCFHICBG", "DDDHAHEIGGJB", "CFFFGDEAACEB", "GJJGCBJJFFFF", "EEHHFFEHJIAG", "GFBDHEIICCFE", "BAIEDFFJAHCD", "ABFABJJHHJFH", "GFEDAHGIIIHF", "BJEDHGIBDHBB", "GJGGJCIIJDDJ", "DIFHGHDBDBFF", "EGGGCAJIIFIF", "JAHIBCECABHA", "JEAFHIJHCFBI", "BGDAIGCFFHEH", "GHAGIEAHJEDC", "GADDJDGCADEI", "CHGFCDDDCAAE", "DFJGAAHAJDEE", "EFCBHJHIDCEH", "AGCGAEBIHECA", "JDIGBABJIIFJ", "BECJGEIHCBCF", "CHDADHFHBBHC", "AFHDFHBGJAHF", "DEHFGCJAAHDA", "BGFHBGIDBADJ", "BJEGCBDEHAAF", "AIHJGEDDJFEH", "GECHGCAGGBCI", "DFDGIIFBAAEI"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 34212840328881;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> numbers = {"BABGECIIBBFJ", "FGICEABAJCJC", "GEAABJCBIHFC", "CBDBHDEJHJJE", "GIEDHEEBEDCE", "CFHAAHBFFEFC", "IBIJEBCHCHGD", "FEIEDCAHHCEF", "GEBDHJEICAHE", "CJEDABFHJHJD", "IEFBCDGIBFFA", "CDHGFJIHEIEG", "BJEDHAEJGFEA", "GHEHHCBGIGGF", "GFGCEAEGEJDB", "FABCHCHHAHFA", "BAIJGFCFHHJE", "FCEBHGGBHAAC", "GGHIBGJBDAHI", "FABDCIAAHFEH", "CCIEEBBCEJFA", "CEFAJBDAEGBD", "FJAAJDJIHJJH", "CAEEHICDGDGF", "CADBJFFGHHBC", "FGGCHAJBIEFH", "FDGJJCFFCDCI", "IGJDHHHGIAFA", "IJEBGEBDJICE", "FCFJBABAAJGH", "GEAJGGIGIHEE", "FEJIEHBCHCIE", "CFCHEHIGJDBD", "FIHHIGDBEIAB", "CBIADFIDJEHI", "BHCGBDIGHDFB", "GEDHDGBCBGDG", "GEJHJBADDCHI", "BDEHEBFJFHIF", "BBJIFGABBHFB", "FIJCFCBJIAFG", "GHAFBCAGHJDF", "BFFDEGHACGFB", "BEFAHFCEDAJE", "CDHGCJGJEDFI", "IAJFGBABCEED", "FAAEGHBIBHHG", "GDCHHIEDGJCD", "BJAAGFCADFFB", "CGDIGEJABFIB"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 39261173113875;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> numbers = {"BGDAHGCABBEC", "GIAJBCECFDEA", "CAEAFGAGAGIE", "JFACIIIHGGIE", "CHDJCCCDJDGI", "GHDEIIDJJCAE", "BBBFCGFFGBHI", "ECEIHEEHCCBI", "EHJHBEHAGFAJ", "BBHECJCIIGIF", "EFJDCCGIJCHJ", "BCBDBIDEIHBC", "GJFHAHDEIJFG", "BEIDEBDJHDBF", "JIFBIDCIAJGB", "JICCCJGAFGEI", "BBHFCEGCGCBH", "CDHDBDHDJCBC", "BFADEJEABCFC", "JBHFJEJBIGBI", "GFCIIFEAECHH", "BDDEJIAHJIIH", "HJHIIEBBDFEI", "JFJICJGCFDBF", "HFHIDFIICBFH", "CEDHGBDCEIEE", "HCCGJJCHHJEJ", "JGHJFCEDGFCJ", "BHJDGCEDJDFJ", "BDJBBIFBHBAH", "JGGDIIIJEFAJ", "EIFABHIDIHEJ", "BGEAEJJGHCJA", "BDGCJBCHHDJF", "EHBIGDDIBFAE", "GHBCBGGBGDHC", "BEJGBGBDJJFA", "CGFFGJEEIDCH", "GHFHEAEFAJDA", "HHEHCBDBDFFE", "HCDAEBHJEBGF", "GEAJEAECIJHG", "JJBDHIGHGHEI", "EFGDGBCIDDCH", "GHCGCEIHIDAE", "BBAAIJEICGJF", "JGEHADHIAADD", "CJJJBCAIAHAH", "BCIDFCFAHCAB", "BHFGDAFAEDCJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 38472617659100;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> numbers = {"EHHJCDIJDFBH", "EABHGFCBFJHC", "CIFECFJCJBII", "JAHCCFDECFFE", "BEJAAJHGEJHB", "IBBCEAGAJEGG", "BHDEGIDGIFAE", "DDAGDBCBEBJD", "BAAFCAACGEEA", "GDJJBBCBAJBC", "GJIHBIHACBDE", "BJHBDIIIFAEJ", "GFCGDEEACIDG", "DEDEADBAEJBH", "ADAEBGDIHEBD", "JEJGAIECJIHG", "DEEEJFADGCHI", "EDEJHFCFGGHE", "ICFJBCAFBGAG", "DJIEEJICIJGJ", "IJEIEJCGIFJD", "EBIDHDBCGHCD", "CFCHBHFIFBAC", "ACEDEBGDBEGA", "BBFGADDBICII", "IFDBJEHFBBGJ", "HHDFHFFFHCAJ", "JGCGIIJIIAGF", "CJGJCGGDCIAA", "DIAIJAIGIAFI", "BAAGBHBEEDJB", "CEDGHGACDJGF", "JFHDBAHFHCJF", "GICFAFAJBHDJ", "CAAIBHEJAFJD", "CEDDAIEGHIFG", "JIDCFJHBAECB", "BIJFHCEJJCBJ", "IIAGHABGEHIE", "DGIBDDBGBECI", "CCCIBAFBEBFG", "JFJDHFGFHDHE", "AGBDBAIBIJHB", "CEDAJJDDBGIF", "BHCEBCEIICID", "HHABHHDCBAEI", "HBHEGHIEEEBF", "JEHFFHIJCCID", "BICJJBBFIDAF", "CHCFCHEFDGHI"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 32377999074058;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> numbers = {"AIICIGCHIIAE", "ICGHDDGDIFFG", "BIDADDDAEAGG", "JCBEBCFEDGID", "AEBEIIDHEIAI", "AFIJDIIJACDF", "BHAGAGHGDIBF", "JDIFHEFIJBCF", "BGAGGFCBFIHC", "HCEJDCAHFBFB", "DIFAIGCFAGID", "BFICFJDJBABE", "HCBFHJHAFEAF", "IIBBFEIBGDBJ", "BBCIGCBGHBDA", "JJFJDAFJIEBA", "FEIDCFHICEJB", "AIGAJJEGEFGH", "CBDHBHFCCHHJ", "JGEFGBCADEGD", "IJEIEFJBIBEI", "HCGBJIBBDAAJ", "FDFJCAECJIDI", "BABECCGFFHAA", "DFBDFBJCEIGC", "IADDEHFJHGHF", "CHIGCDCHEEEE", "JFJIAJBFIEAE", "BCHHFJABHIDD", "BDGDBJJIFHCJ", "DDGDECEFBIFG", "AABFHDADEIJI", "DEJIGFEECABE", "IIJIDBGJABBE", "JCIGBCGAHCFB", "CIFFBAHCGCGF", "AGEAIEDDADHE", "JFIFGJBEADFA", "HFCEHABFFBHB", "AEEAGIHDAJDG", "JHFGGEGDBIAI", "CAHGCBEDIIDJ", "IEDAAGEBJFDA", "BGEBGJAACCAJ", "CABIJIBIHDJB", "JEHDBAIJFHDG", "BFFIBAAJABIB", "FABDBIAFIBAA", "IFEHDIHCHCDF", "AHDHFCACAEAE"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 34178667749615;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> numbers = {"IAGHCECCDJIH", "IACDCBGABECG", "CAIHDGFGCHBD", "JACFEDBGFHJB", "EAAFAEDAFHEE", "GACHIDAHHBEG", "GAFECDBBIAFE", "HADBJFAGEJGI", "IABGFIDFJJEB", "BAGIJIIDDBAC", "IADIBBAJICFD", "DAGJJCHEEEFJ", "BAHJFIHDFEFH", "IACCBGFFICIF", "IAJDIFDICHEC", "DABDHIFABDJJ", "EAJIJIIIACAD", "HAEEECEIGJAF", "DAFCEJAEJCFC", "FABEEDACFFDJ", "GAHEEEBBEHJI", "HAJFIHDADCFE", "IAACJIGEGHFA", "FAJGGDAFAEHE", "BAFFHDAECCBJ", "HAIHCFIGGIIF", "HABEHHHHCBFE", "DAJBBBIDFHIF", "CADBIAHICFCC", "GAEEAGHFIIFJ", "GADGFAJIEHII", "IAACFIFEJFDJ", "CAHBHDHGJGAC", "GABGCIDHCHDC", "GACCHEFABIFC", "EAEFBBGBBHGE", "GAEHJEFGFDJI", "GAHGHAHAGHBC", "JAAGGDJHABIG", "JAEDIFFACJBI", "HAHGHBGJCEDG", "EACHDDBHIEGH", "DAIIHDHDIJDA", "HAABFBFCAECI", "CADDEGIDHCII", "DAHFBEDGBHJF", "HAJDEDDGIBII", "JABDEJEDBDAI", "BAFCABFIAIHF", "DAAHBEBBGCBC"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 30340730754800;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> numbers = {"EAAGCBBDCCJF", "GAFGBDCHEIDG", "HAFGCBGBAABD", "GAAJDJDIIJFA", "IAHHHIIBBHJI", "CAECCAFIIACB", "BADJDAFGCCIC", "HAHIIHCAFHEA", "EAFHFDIGAIHF", "IAHBAHAAGEBD", "JACFJBAHHECJ", "BAJBAGBFDECG", "DAHBHFCJFIBA", "DABGJIFJFJCD", "EABHGGDCDCIJ", "HADABHDDHFBF", "BAFIFGEGFAAI", "DAJJFHBAJHHE", "DACJHCBFBGED", "EAAGCDFBDJDI", "IAHCCHCIAADC", "EAIJBHEJGBBC", "CAFAJBGHADJD", "GAFCFFGDGDBB", "JABBJEEIFDFG", "JAIFFFIFIAAF", "EAJJJHAEEBGD", "IACIHDAJJGAF", "EAGIAFGHDEII", "HAHFIGHHHAAG", "FABCGFGEFAGJ", "EAIBIHEBFDFE", "EAHDCJJCJJAB", "HAJBJABCBJBG", "HAFCGIECFFCJ", "EAEEACFIACEE", "DADGHGJHEJDI", "HAECGDDEEGBI", "EACHEIJICIJH", "FAIHHAGIIBAC", "IAIBDAGIDDFJ", "CAEBIDJFJBBI", "CABJDHCBHACJ", "DADEGDCHGJDA", "EAAIDIEIBBGI", "CADHBJEIDIGD", "EAHGDFDGHACI", "EAIHAGFHHDJF", "BACEFCBGIDEC", "EAAFFAFBHJDJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 32361381766412;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> numbers = {"HAIJGJGBAGJH", "HAAEIHFGGCFJ", "FAABEGIHAGIC", "HAGAGFGAEDCI", "IAAHCAGDIJDH", "IAGIEEJJHEDB", "GAHHHGABEGFI", "FADABDEIGGAF", "JAJFGHGCGJJE", "IABIEACCBBED", "DAEHEFBGDBBJ", "DAJABIBDFCGJ", "HAFECCBEFCEE", "GAJCIHBBBEDJ", "BAAGAJEJHIIB", "BACDEEGAICGI", "JAAIFCACCCAD", "FAFFCJBJHJGF", "JAGEBEBAGEII", "CAAJHBEEIFBJ", "CAIFAIHHIJHC", "DAFJHGAJHIEF", "BAJDJGBHBHHJ", "IAHEIDFBICEF", "EAABHHGHDIJI", "HAEDDAEGAABE", "DAHFBBBICBFI", "HAJJCEDHJEHH", "HAHFCDHAIEHH", "BAJBEIJHDIHC", "JAIFDHJBFIEG", "EAHEIDHGJIGG", "GABGCDHDADEB", "IABHHEJJFEFF", "DAHACDEHFBBI", "IAACGEHCGFFH", "CAEGJHCJABCJ", "EAJJCIEFDDJE", "CAIDDGBBABFG", "CABIFCEACBFI", "FAGFDJDGEGEJ", "GAHDCIEFEIID", "IABDIBACAHCD", "EAGECGEABADJ", "IAFEJCCIJJGE", "HAJHFEIDDGFH", "GAACGHHDFECF", "GACDEABFFJAF", "CAHAACCJJCJC", "FAGAFDHDJGCJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 28542360904135;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> numbers = {"EABBDGAGDFHG", "IAGFDBBBIBGF", "CAADHJEBIFCA", "HAFIEBFBGADD", "GAFGJCGFFEDJ", "GAIGBGGJHJBB", "IAFFAEBAGDFE", "CAHDJAGIEBDA", "EAJGJGCFEEEC", "FAGDBDDGHGAG", "DAHAHFCGCHCG", "DAECHJEBABHI", "GABHDBAJCCIC", "DADAAJFDBJIG", "DAGIDEFIDHDA", "CAGJAHBCGFEF", "HAHDAIBJJJHG", "DAGHDFGCGHJH", "IAIBEEJEGDGA", "JAGIIHGJGFHG", "HAFGJCGAHHBI", "DABCJEHGIEJJ", "DAHDCEJDBGGA", "CAGBBFDDJCEH", "GACFICHFDEFB", "GAGDHCHIFGGI", "DAJHGGHADDEF", "GAADFJHBADFB", "JAHACHHDCDGH", "EAABGBEJCGBB", "HACEGFADIEEG", "GAEABEBFGDJB", "GAGGFBFAFAAA", "BACIGHIGADCG", "IAHJJFEBAHJH", "BAIGJICEDGJD", "GAEIJEIGCJDJ", "HADCJAECIEGE", "EADFGIBGGHGI", "BADGEJEGDCGB", "EAHGDJFEDGCC", "BACCFCJBFEGE", "FAGFCEICFHCJ", "JAFFJBCBBHAA", "BAHEBJJGJDDF", "HAHCCFAEJCDH", "FAFGBDJGIBFF", "GAAFADIAJADF", "HAGBGJDGFADC", "GAFJFDCFEBBG"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 30695457036617;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> numbers = {"IAAAHAHCJGBJ", "FAAABCABGIFF", "FABBJIAGICCG", "CAJEAIHBCFIF", "CAEBJCGFEEJC", "JAJEFADFHHDH", "FAFCEDDGBIIH", "EACHGBAJJICF", "CACECDFDBFFC", "BAJADCBDDDCE", "JAEFEDICECGH", "FAAHGHABHFIC", "CAIIAJDHBCDJ", "FAIHHJGDEBHA", "DAFCHCCDIIDG", "HAHAHIIGADGI", "IAJECCIDJABD", "EACFDDDCCBBA", "IAFJFIDFEDGG", "IAGIJBIGDIFB", "DAFHBFCBJGDB", "EACIBEIEGHAH", "FAJDHJBIBBCC", "BABIACEFHGDJ", "JAEAHBABBDIB", "FAHJCEAFHHAF", "DAHAFCBAJCHE", "IAEFCFCIJBBA", "FAGEIEJFGGIH", "CADBHGCGAJCA", "EAJHGGGCCBBC", "GAHFEHFHIJAI", "CAADICHAJACG", "CADFFHIHFCAF", "EAIFFIFHAJGI", "IAICCJIACEDE", "CABJIBGECJEA", "DAFGIEFBDGDG", "FACDAIIJCJJF", "BAAJHJFIHGHD", "BAIDCEABEHDD", "JAGHGICFHDAI", "GACBGJBEJCAJ", "GAJDEDBGGFJF", "DAHAFEHEJHJD", "JAJDEDGJBCBI", "CAFGFJEIGFAI", "CAHGDEDACGDI", "CABACDGJDJHJ", "EAFAIDAAFAAI"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 31563768760690;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> numbers = {"DDHBHGADHIJD", "HHDBDGAHDIJH", "HJHCBCGJCCCF", "DJDCBCGJCCCF", "ACEBCBDFCJCE", "ACEBCBHFCJCE", "AAHAFDJJFEBC", "AADAFHJJFEBC", "DGEDEAIAAGJI", "HGEHEAIAAGJI", "DHFJHGBCCGJE", "HDFJDGBCCGJE", "HJFADCICDDFE", "DJFAHCICHHFE", "DIECFEIBGFJE", "HIECFEIBGFJE", "AFDEIBJGAFFD", "AFHEIBJGAFFH", "HCCJBGHBJGAC", "DCCJBGDBJGAC", "HEEIDEFCGIJJ", "DEEIHEFCGIJJ", "DDBDIEICCECF", "HHBHIEICCECF", "HGEJCBIJGAJF", "DGEJCBIJGAJF", "DAGGIHFFCDCE", "HAGGIDFFCHCE", "DFABFABIGIFF", "HFABFABIGIFF", "HEECAGGAHFGJ", "DEECAGGADFGJ", "AEHHIEBFEIFG", "AEDDIEBFEIFG", "DCACEFAFJBJA", "HCACEFAFJBJA", "DFIHDGCCIJEI", "HFIDHGCCIJEI", "HGDCGGDBFGHG", "DGHCGGHBFGDG", "DIFIJJJBABJA", "HIFIJJJBABJA", "DCECHADBEEIA", "HCECDAHBEEIA", "AEJFGJCEADIG", "AEJFGJCEAHIG", "HFEABDCHJIFF", "DFEABHCDJIFF", "HFEEHIBHIHDC", "DFEEDIBDIDHC"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 43709717022960;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> numbers = {"IICCEIAABDGG", "DDCCEDAABIGG", "DBIIDHCAEBEH", "IBDDIHCAEBEH", "IFJGDDHDBCGJ", "DFJGIIHIBCGJ", "IIJEFIIGBDBE", "DDJEFDDGBIBE", "DIDFGEDFEEAJ", "IDIFGEIFEEAJ", "IIFIJAGEHACB", "DDFDJAGEHACB", "DJFIDCFIHIEH", "IJFDICFDHDEH", "IGGEIIEJCCCH", "DGGEDDEJCCCH", "DBHBECJGIBAD", "IBHBECJGDBAI", "DJGHCFCGCDJF", "IJGHCFCGCIJF", "EJABIGIBGDCG", "EJABDGDBGICG", "ICHCCAHGIDJA", "DCHCCAHGDIJA", "EIBGGCCAEECB", "EDBGGCCAEECB", "IJACCIGBCADI", "DJACCDGBCAID", "EJCJFCCAHJEC", "EJCJFCCAHJEC", "IBIICJGJGEDB", "DBDDCJGJGEIB", "DEAHGEIDACGF", "IEAHGEDIACGF", "DGJEHHFGDHEG", "IGJEHHFGIHEG", "DABBCAAJAJDF", "IABBCAAJAJIF", "DBBEAFFIBCIJ", "IBBEAFFDBCDJ", "DGFHFAEIEJJF", "IGFHFAEDEJJF", "DDEADHHFFHFJ", "IIEAIHHFFHFJ", "EEBCIJBICEAD", "EEBCDJBDCEAI", "EJHCABJFBACE", "EJHCABJFBACE", "ECJFDCDIDDAJ", "ECJFICIDIIAJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 43763884840677;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> numbers = {"GJJFFAIHFJAF", "GJJFFAIEFJAF", "ACDCEHFADBDF", "ACDCHEFADBDF", "HDGFEJAFCCAB", "EDGFHJAFCCAB", "ACGDGJIJCBCH", "ACGDGJIJCBCE", "ABBHABCJHFJB", "ABBEABCJEFJB", "DGHDJCCDHDAF", "DGEDJCCDEDAF", "HJECEIHBGJED", "EJHCHIEBGJHD", "ACHECCBHFAJG", "ACEHCCBEFAJG", "ABDFICGIDEHG", "ABDFICGIDHEG", "HEDGBFFIAGCA", "EHDGBFFIAGCA", "EGECJCHEIJFJ", "HGHCJCEHIJFJ", "EFEBJAIABFGD", "HFHBJAIABFGD", "ECFAAEIIGGCI", "HCFAAHIIGGCI", "HDGJAJDFGFFE", "EDGJAJDFGFFH", "CJHEAJABDDEB", "CJEHAJABDDHB", "IIJICEAHBBID", "IIJICHAEBBID", "FJGGAEBFBIEC", "FJGGAHBFBIHC", "EAIECIHGAHEF", "HAIHCIEGAEHF", "GJJECADEABDH", "GJJHCADHABDE", "FJFHGGEDCJFH", "FJFEGGHDCJFE", "FHAGIIIHBAAC", "FEAGIIIEBAAC", "IEDAHFGFHFDH", "IHDAEFGFEFDE", "EEHHGEGJJHAG", "HHEEGHGJJEAG", "IGDEDEBIIEIF", "IGDHDHBIIHIF", "FGHJDJHEAIFE", "FGEJDJEHAIFH"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 34918307450178;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> numbers = {"JDJGBDDAFCAE", "JDJGBDDEFCEA", "CAAAEJIAHHGG", "CEEEAJIEHHGG", "GECJHBGDFGEI", "GACJHBGDFGAI", "AJFHDFBIEICE", "EJFHDFBIAICA", "CDGBBDAFDJEG", "CDGBBDEFDJAG", "JFDCAGHIIHJH", "JFDCEGHIIHJH", "GAGABAJGDIBB", "GEGEBEJGDIBB", "CCDFDCACJAJI", "CCDFDCECJEJI", "DHHBHEDFHFAA", "DHHBHADFHFEE", "DBDJFBHDAGJE", "DBDJFBHDEGJA", "JIGFICCFEHIC", "JIGFICCFAHIC", "JCHCBJJBDBAE", "JCHCBJJBDBEA", "GAJHBGJEIEIB", "GEJHBGJAIAIB", "GGDEDCFBHEAA", "GGDADCFBHAEE", "EAHHBBHFEIBI", "AEHHBBHFAIBI", "CAJIAIICDBHF", "CEJIEIICDBHF", "AFGHBIEFEFEB", "EFGHBIAFAFAB", "DGBFGDJDAGBC", "DGBFGDJDEGBC", "JHCFEDDGFFBD", "JHCFADDGFFBD", "ECIHCAEBCIGC", "ACIHCEABCIGC", "CCIIGFBBEFBD", "CCIIGFBBAFBD", "ABCFGCFIHAEI", "EBCFGCFIHEAI", "EBFBIEDAFHJA", "ABFBIADEFHJE", "EIFHJBAFFBBA", "AIFHJBEFFBBE", "GJBEFEECJHCD", "GJBAFAACJHCD"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 36792890700742;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> numbers = {"GDGFGABBEIFF", "GHGFGABBEIFF", "CJAIHJBHBIFA", "CJAIDJBDBIFA", "ADHABBFEIGDG", "AHDABBFEIGHG", "EJEGBJJAGJEJ", "EJEGBJJAGJEJ", "EECJHGDFAHJH", "EECJDGHFADJD", "AFHGIIAIDFDH", "AFDGIIAIHFHD", "CFADJBDIACCC", "CFAHJBHIACCC", "EBBCJFFHFJDG", "EBBCJFFDFJHG", "CIDDIIHHDJGH", "CIHHIIDDHJGD", "GEAFAJHEAIHI", "GEAFAJDEAIDI", "EBEJEDDIDDFJ", "EBEJEHHIHHFJ", "GFIBGFEIICBF", "GFIBGFEIICBF", "GIDFFFJFGEAH", "GIHFFFJFGEAD", "CEBFBCAJFJJH", "CEBFBCAJFJJD", "CGJJAGFEJCID", "CGJJAGFEJCIH", "EJHIJEDHHGAB", "EJDIJEHDDGAB", "ACBDHICEABGH", "ACBHDICEABGD", "EIEJAIBCGBFB", "EIEJAIBCGBFB", "AGFEIIFEBFEA", "AGFEIIFEBFEA", "ACCGAHIIFAEG", "ACCGADIIFAEG", "CEHFEHEDIAIJ", "CEDFEDEHIAIJ", "ECBBDCHJDEEH", "ECBBHCDJHEED", "EEBCCCDHDACE", "EEBCCCHDHACE", "EIBGCDGECIIH", "EIBGCHGECIID", "ACIIEEJAGEHH", "ACIIEEJAGEDD"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 41928325840350;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> numbers = {"BFHGDDBICGAJ", "BFHGCCBIDGAJ", "BGIGHAIJGBDJ", "BGIGHAIJGBCJ", "BDAIIBJAEHBI", "BCAIIBJAEHBI", "EBIEGGEIACBJ", "EBIEGGEIADBJ", "ADDIBADEAFBJ", "ACCIBACEAFBJ", "FGIHGJJAHFEI", "FGIHGJJAHFEI", "FDCGDDFDEGJA", "FCDGCCFCEGJA", "FABEGCIHHHIC", "FABEGDIHHHID", "BBIFICFIGJII", "BBIFIDFIGJII", "BDICBEFIGGDI", "BCIDBEFIGGCI", "FFHDEFEHGADB", "FFHCEFEHGACB", "BHIJFBFDGEBJ", "BHIJFBFCGEBJ", "BDEHHBGABFEA", "BCEHHBGABFEA", "AECHIDBCCIAF", "AEDHICBDDIAF", "ECGFGDDIGEJJ", "EDGFGCCIGEJJ", "EHGBGJJJGBEA", "EHGBGJJJGBEA", "EBJEIHJIGGGG", "EBJEIHJIGGGG", "EBDDHDEBFCIC", "EBCCHCEBFDID", "FCGDJHCHEACB", "FDGCJHDHEADB", "BJHADBGHHBCC", "BJHACBGHHBDD", "BCBIIAGAFDAD", "BDBIIAGAFCAC", "EIHJEBGIAHBB", "EIHJEBGIAHBB", "EJIIEJCGCGFI", "EJIIEJDGDGFI", "FJDIGDHCIHHF", "FJCIGCHDIHHF", "FEJAGIEDDFBF", "FEJAGIECCFBF"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 42223250589396;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> numbers = {"CGCBBABGDJDD", "CJCBBABJDGDD", "HGDACHFCJJGD", "HJDACHFCGGJD", "JBFFJHHACHFG", "GBFFGHHACHFJ", "HGDIGIEGGEDG", "HJDIJIEJJEDJ", "HJCHCFIHCAED", "HGCHCFIHCAED", "JFFHGAFGEDHB", "GFFHJAFJEDHB", "DADFAEBIIFCH", "DADFAEBIIFCH", "CHJHEJAADDHA", "CHGHEGAADDHA", "GBHFGHGEDBCH", "JBHFJHJEDBCH", "GBBGJFECAEEJ", "JBBJGFECAEEG", "JDEAHBJGHHHF", "GDEAHBGJHHHF", "HHBIEEJBEFHG", "HHBIEEGBEFHJ", "CFAEAIBGBCJA", "CFAEAIBJBCGA", "HCFIBGJGDCHD", "HCFIBJGJDCHD", "DECCDFHBADCJ", "DECCDFHBADCG", "DEIGAJBHBJHI", "DEIJAGBHBGHI", "CEGAGHCGHJHA", "CEJAJHCJHGHA", "GIIBDDFBHJHA", "JIIBDDFBHGHA", "GIIJEEHJGGDE", "JIIGEEHGJJDE", "HHHDJGEHFFBB", "HHHDGJEHFFBB", "GJHFICIBDEJH", "JGHFICIBDEGH", "GIEEJFDJIHJA", "JIEEGFDGIHGA", "GFJIJGCCFECH", "JFGIGJCCFECH", "CJHFFGHJJGAH", "CGHFFJHGGJAH", "CHJAHBBJCAGB", "CHGAHBBGCAJB"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 39038111302329;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> numbers = {"FGBBAGIHDHFE", "FGBBJGIHDHFE", "BJDCHAFGABEI", "BADCHJFGJBEI", "DEIGCCEFHJJG", "DEIGCCEFHAAG", "BCIAJJCEGDGG", "BCIJAACEGDGG", "FDIEEJAFBFGF", "FDIEEAJFBFGF", "AFHFJEADJEBI", "JFHFAEJDAEBI", "DGJAIDCHGCAC", "DGAJIDCHGCJC", "ABAFFEHBCAHD", "JBJFFEHBCJHD", "FCBGEEDIFDDF", "FCBGEEDIFDDF", "BHCBHCBACGJB", "BHCBHCBJCGAB", "FBEGEGJBDGID", "FBEGEGABDGID", "AFAGFECAGFFD", "JFJGFECJGFFD", "HEGJEBJEHBGE", "HEGAEBAEHBGE", "DGEAFIGEDBFF", "DGEJFIGEDBFF", "HCIHCIJJBDEC", "HCIHCIAABDEC", "FEIFEEICAGFE", "FEIFEEICJGFE", "CGBDIJADJFIH", "CGBDIAJDAFIH", "DIDBHBJAIHGH", "DIDBHBAJIHGH", "AAFBDCJGFBHH", "JJFBDCAGFBHH", "FGDCDJDFGEEF", "FGDCDADFGEEF", "AGFJCDIEAHID", "JGFACDIEJHID", "DFCDJBGBCBDG", "DFCDABGBCBDG", "AJBAJFGEGFGJ", "JABJAFGEGFGA", "DACHBHFADEBI", "DJCHBHFJDEBI", "DBGHFBIGIEJC", "DBGHFBIGIEAC"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 37521440519361;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> numbers = {"EJFHDACCGJFG", "EGFHDACCJGFJ", "BHIFCIACBGBG", "BHIFCIACBJBJ", "BGFGJDDCGFAE", "BJFJGDDCJFAE", "ECFCEJCJCEDI", "ECFCEGCGCEDI", "FFCGEEJAJAJJ", "FFCJEEGAGAGG", "BJJIEAGJGJIE", "BGGIEAJGJGIE", "JGJIDHHFACAJ", "GJGIDHHFACAG", "CGDEHCJGIHAG", "CJDEHCGJIHAJ", "EBECIBEJCDGD", "EBECIBEGCDJD", "BJEDDFIHDICG", "BGEDDFIHDICJ", "BECECBEHEEJG", "BECECBEHEEGJ", "FBHBBJJIICGG", "FBHBBGGIICJJ", "FFGCHDDGFHBJ", "FFJCHDDJFHBG", "HGHICHCAGIJI", "HJHICHCAJIGI", "FJEDJHFGCGDH", "FGEDGHFJCJDH", "BBHHIEJCHCEC", "BBHHIEGCHCEC", "JHDFEDEAEIHC", "GHDFEDEAEIHC", "EEAFGHFFFHFC", "EEAFJHFFFHFC", "JIBHHHBJIHJF", "GIBHHHBGIHGF", "HBBCEIGCHDFJ", "HBBCEIJCHDFG", "CBFHBEEEJACB", "CBFHBEEEGACB", "EJHCADIFAGAC", "EGHCADIFAJAC", "FBBFAGAGGCHI", "FBBFAJAJJCHI", "EFAFBGBAAJIB", "EFAFBJBAAGIB", "EJHGCJEGGEGI", "EGHJCGEJJEJI"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 38815437837592;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> numbers = {"GGFBGFHFDIGD", "GGHBGHFHDIGD", "HIJIFFCGFJIB", "FIJIHHCGHJIB", "GHDGAIJBHIFF", "GFDGAIJBFIHH", "IFADBJHFDGFI", "IHADBJFHDGHI", "IAAHCJGDJFEJ", "IAAFCJGDJHEJ", "IGDDEFGCICCJ", "IGDDEHGCICCJ", "HCHJJBFCJFDD", "FCFJJBHCJHDD", "HBBGDHDEEIDI", "FBBGDFDEEIDI", "IIBAGHAADDIE", "IIBAGFAADDIE", "GBHAIAADHEDI", "GBFAIAADFEDI", "HHCFBHCEFCJG", "FFCHBFCEHCJG", "HBEEGHIGDHFD", "FBEEGFIGDFHD", "GEFABACHDIBE", "GEHABACFDIBE", "GFGBDABHIDFB", "GHGBDABFIDHB", "GHGJAAIJADBG", "GFGJAAIJADBG", "IHFDECIGIHBG", "IFHDECIGIFBG", "HCEFBAFCEJBA", "FCEHBAHCEJBA", "GBCEEHFEDDJC", "GBCEEFHEDDJC", "GDJDAHCGHFBG", "GDJDAFCGFHBG", "IJDJEDEDABGG", "IJDJEDEDABGG", "HIIAIGFEFJAI", "FIIAIGHEHJAI", "GGGCGCJEFFAA", "GGGCGCJEHHAA", "GHFJJHCIAAED", "GFHJJFCIAAED", "GHBBJEBDGHDH", "GFBBJEBDGFDF", "IFBJBJEBGDED", "IHBJBJEBGDED"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 43224394391690;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> numbers = {"BGGIFCDGFGFJ", "BEEIFCDEFEFJ", "DIIIDHCDBIAG", "DIIIDHCDBIAE", "DDIIJEEAFJAI", "DDIIJGGAFJAI", "BICCBEJDFCHI", "BICCBGJDFCHI", "DJDECEFCAHDC", "DJDGCGFCAHDC", "BHJIEJIJEJBC", "BHJIGJIJGJBC", "FHFGFGGFCBDC", "FHFEFEEFCBDC", "DJFCDFFEEIGB", "DJFCDFFGGIEB", "FDHFJHGCGACH", "FDHFJHECEACH", "BHAFBBCCIBEI", "BHAFBBCCIBGI", "DJCHBFGJCAHA", "DJCHBFEJCAHA", "BGDCGAADAHAG", "BEDCEAADAHAE", "FACDFJCEADAJ", "FACDFJCGADAJ", "FJJEFEJEJHAI", "FJJGFGJGJHAI", "DDCDBBCAHJEB", "DDCDBBCAHJGB", "BGIJIJCIGJBD", "BEIJIJCIEJBD", "FDJGHHFCDDDD", "FDJEHHFCDDDD", "FGJHABBDBAFH", "FEJHABBDBAFH", "DCDCCCDEBADF", "DCDCCCDGBADF", "FIJABEJEIFGA", "FIJABGJGIFEA", "BEHIAFIHHIIG", "BGHIAFIHHIIE", "DGJDAGEJJHID", "DEJDAEGJJHID", "BAGFEAEIHCHJ", "BAEFGAGIHCHJ", "FICGAEHIJJBF", "FICEAGHIJJBF", "BJIHJCEEIHJE", "BJIHJCGGIHJG"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 42659071463048;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> numbers = {"BECECDEHJJDC", "BECECDEHJJDC", "HDFCAFCFHFHB", "HDFCGFCFHFHB", "FEGCHCCJCIEB", "FEACHCCJCIEB", "HEHFFAAGGDBH", "HEHFFGGAADBH", "GGAJGGFDJADG", "AAGJAAFDJGDA", "BEIBFCAHCCBC", "BEIBFCGHCCBC", "HAJBGIBHBBIE", "HGJBAIBHBBIE", "BCEBFJAHDEDI", "BCEBFJGHDEDI", "CFEGGJEAHFGH", "CFEAAJEGHFAH", "HAEADHCBAFJE", "HGEGDHCBGFJE", "HAAIIFECBBJA", "HGGIIFECBBJG", "GAHAGIAGABJD", "AGHGAIGAGBJD", "FBBECCIIBEBJ", "FBBECCIIBEBJ", "DHHFGEIDJFGB", "DHHFAEIDJFAB", "HFDFBDICCIJJ", "HFDFBDICCIJJ", "HGACJCHCIIGF", "HAGCJCHCIIAF", "CGDGJBDJDECE", "CADAJBDJDECE", "BBEBEDEBDBCC", "BBEBEDEBDBCC", "FHABDAACIFGI", "FHGBDGGCIFAI", "HEHFIHBFFJGF", "HEHFIHBFFJAF", "CEJCIDHEFFBH", "CEJCIDHEFFBH", "DGIEEAIHCCFH", "DAIEEGIHCCFH", "FBHGHFDGCCCC", "FBHAHFDACCCC", "CECBFBADGJGE", "CECBFBGDAJAE", "FDJHFEGJBHGH", "FDJHFEAJBHAH"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 38709843034526;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> numbers = {"FJABGIHCHCBG", "FJCBGIHDHDBG", "FJDBGIHAHABG", "CEJGEEAIEAHC", "DEJGEECIECHD", "AEJGEEDIEDHA", "EFEFBGGJEIAH", "EFEFBGGJEICH", "EFEFBGGJEIDH", "AFBIACDIBCGH", "CFBICDAIBDGH", "DFBIDACIBAGH", "CHGHCCJDGDBJ", "DHGHDDJAGABJ", "AHGHAAJCGCBJ", "BBEGFDBEEHAE", "BBEGFABEEHCE", "BBEGFCBEEHDE", "HGJACBGFHDAF", "HGJCDBGFHACF", "HGJDABGFHCDF", "AAGFHEBFDICG", "CCGFHEBFAIDG", "DDGFHEBFCIAG", "CIECJHJGICGH", "DIEDJHJGIDGH", "AIEAJHJGIAGH", "HBDFJEFCHEGE", "HBAFJEFDHEGE", "HBCFJEFAHEGE", "HFEFFHGHJBJC", "HFEFFHGHJBJD", "HFEFFHGHJBJA", "FFBCJEFBIFHA", "FFBDJEFBIFHC", "FFBAJEFBIFHD", "EECGCJBDGAJF", "EEDGDJBAGCJF", "EEAGAJBCGDJF", "CCAHFAHCJBBE", "DDCHFCHDJBBE", "AADHFDHAJBBE", "FACDFJFHFJFG", "FCDAFJFHFJFG", "FDACFJFHFJFG", "HDFAICFABEJB", "HAFCIDFCBEJB", "HCFDIAFDBEJB"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 34866739653087;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> numbers = {"CCEICIFGDDBH", "CCBICIFGEEDH", "CCDICIFGBBEH", "JDDFBBJCDDAE", "JEEFDDJCEEAB", "JBBFEEJCBBAD", "ECGJCJJBJJJH", "BCGJCJJDJJJH", "DCGJCJJEJJJH", "FECEFEDJFIFH", "FBCBFBEJFIFH", "FDCDFDBJFIFH", "CHGGDCIJEAJC", "CHGGECIJBAJC", "CHGGBCIJDAJC", "JGGFBABJAICG", "JGGFDADJAICG", "JGGFEAEJAICG", "JFBHHBJHCGII", "JFDHHDJHCGII", "JFEHHEJHCGII", "FGCAGGEIBBEF", "FGCAGGBIDDBF", "FGCAGGDIEEDF", "EEAIGGCJIADH", "BBAIGGCJIAEH", "DDAIGGCJIABH", "HHJDFEAHFFIB", "HHJEFBAHFFID", "HHJBFDAHFFIE", "GHAGCFAAEAAF", "GHAGCFAABAAF", "GHAGCFAADAAF", "HCCHIHCJDFAE", "HCCHIHCJEFAB", "HCCHIHCJBFAD", "EEEEBBFJICEH", "BBBBDDFJICBH", "DDDDEEFJICDH", "CCEBIHEBEAEJ", "CCBDIHBDBABJ", "CCDEIHDEDADJ", "HHEJIGIJDBBH", "HHBJIGIJEDDH", "HHDJIGIJBEEH", "FHHIIDFDHHJF", "FHHIIEFEHHJF", "FHHIIBFBHHJF"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 34624412395329;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> numbers = {"BIDHIJDGHGHE", "FIDBIJDGBGBE", "HIDFIJDGFGFE", "BAEHBBIDFJFJ", "FAEBFFIDHJHJ", "HAEFHHIDBJBJ", "FBIIJDIEBAFJ", "HFIIJDIEFAHJ", "BHIIJDIEHABJ", "GAHHDGCCJBCH", "GABBDGCCJFCB", "GAFFDGCCJHCF", "JIBGHJCFEFIF", "JIFGBJCHEHIH", "JIHGFJCBEBIB", "JGCIEDFCEDIE", "JGCIEDHCEDIE", "JGCIEDBCEDIE", "GBEEHFAIDDJJ", "GFEEBHAIDDJJ", "GHEEFBAIDDJJ", "BFHFFGHJBDJI", "FHBHHGBJFDJI", "HBFBBGFJHDJI", "GABEFFCFAJFA", "GAFEHHCHAJHA", "GAHEBBCBAJBA", "FDABBBDEFBDD", "HDAFFFDEHFDD", "BDAHHHDEBHDD", "JDFHFJCGIDFJ", "JDHBHJCGIDHJ", "JDBFBJCGIDBJ", "JHJDECEBIJBA", "JBJDECEFIJFA", "JFJDECEHIJHA", "FFGGDJJIEFEH", "HHGGDJJIEHEB", "BBGGDJJIEBEF", "BIADGBCHFIBI", "FIADGFCBHIFI", "HIADGHCFBIHI", "BACEFCJHIBDC", "FACEHCJBIFDC", "HACEBCJFIHDC", "GGIGFBCIGCBH", "GGIGHFCIGCFB", "GGIGBHCIGCHF"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 37330485208872;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> numbers = {"ADJJIFDGHJCD", "GDJJIFDEHJCD", "EDJJIFDAHJCD", "GHEHADHCHDDC", "EHAHGDHCHDDC", "AHGHEDHCHDDC", "IAGFHGDDEDDD", "IGEFHEDDADDD", "IEAFHADDGDDD", "GEBIBHHCDDEF", "EABIBHHCDDAF", "AGBIBHHCDDGF", "JHFBIIBJCADB", "JHFBIIBJCGDB", "JHFBIIBJCEDB", "DBJDDAHFHHGE", "DBJDDGHFHHEA", "DBJDDEHFHHAG", "JIJIIDDDIBFA", "JIJIIDDDIBFG", "JIJIIDDDIBFE", "IIIAABECBCFH", "IIIGGBACBCFH", "IIIEEBGCBCFH", "GICGGDGJEAAJ", "EICEEDEJAGGJ", "AICAADAJGEEJ", "JBAGCAGACDHI", "JBGECGEGCDHI", "JBEACEAECDHI", "DHCDJDCBGHHC", "DHCDJDCBEHHC", "DHCDJDCBAHHC", "JGEDAGJCBGAB", "JEADGEJCBEGB", "JAGDEAJCBAEB", "ABJGAIBHFBAH", "GBJEGIBHFBGH", "EBJAEIBHFBEH", "JACFBDAFGDFI", "JGCFBDGFEDFI", "JECFBDEFADFI", "ICHIBDAHJGCB", "ICHIBDGHJECB", "ICHIBDEHJACB", "AHCHHCCEHEHA", "GHCHHCCAHAHG", "EHCHHCCGHGHE"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 36286731691785;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> numbers = {"IAIAIGGFFAA", "ABJHEJJJJGC", "IAIAIGGFFAA", "ABJHEJJJJGC"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 375105997860;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> numbers = {"DGACAACGDHA", "IEJJGIIBIGE", "DGACAACGDHA", "IEJJGIIBIGE"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 367984861580;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> numbers = {"FDBEIFIBGBG", "EEJJEBEICHB", "FDBEIFIBGBG", "EEJJEBEICHB"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 374528879136;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> numbers = {"GCCIADICHGD", "AEDHEEHJBFJ", "GCCIADICHGD", "AEDHEEHJBFJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 368572359174;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> numbers = {"FBIIBIIIIII", "GJBGGGBJBBB", "CDGEEEECGGG", "HFDCCDFFJJC", "EHHHHCHHCAH", "FBIIBIIIIII", "GJBGGGBJBBB", "CDGEEEECGGG", "HFDCCDFFJJC", "EHHHHCHHCAH", "FBIIBIIIIII", "GJBGGGBJBBB", "CDGEEEECGGG", "HFDCCDFFJJC", "EHHHHCHHCAH", "FBIIBIIIIII", "GJBGGGBJBBB", "CDGEEEECGGG", "HFDCCDFFJJC", "EHHHHCHHCAH", "FBIIBIIIIII", "GJBGGGBJBBB", "CDGEEEECGGG", "HFDCCDFFJJC", "EHHHHCHHCAH", "FBIIBIIIIII", "GJBGGGBJBBB", "CDGEEEECGGG", "HFDCCDFFJJC", "EHHHHCHHCAH", "FBIIBIIIIII", "GJBGGGBJBBB", "CDGEEEECGGG", "HFDCCDFFJJC", "EHHHHCHHCAH", "FBIIBIIIIII", "GJBGGGBJBBB", "CDGEEEECGGG", "HFDCCDFFJJC", "EHHHHCHHCAH", "FBIIBIIIIII", "GJBGGGBJBBB", "CDGEEEECGGG", "HFDCCDFFJJC", "EHHHHCHHCAH", "FBIIBIIIIII", "GJBGGGBJBBB", "CDGEEEECGGG", "HFDCCDFFJJC", "EHHHHCHHCAH"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 3787135070660;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> numbers = {"CEAEEJJEAEJ", "FADJJHAJDJA", "EFIAFIDDBAI", "DBFICBBBCIC", "BGCCGGCCGFG", "CEAEEJJEAEJ", "FADJJHAJDJA", "EFIAFIDDBAI", "DBFICBBBCIC", "BGCCGGCCGFG", "CEAEEJJEAEJ", "FADJJHAJDJA", "EFIAFIDDBAI", "DBFICBBBCIC", "BGCCGGCCGFG", "CEAEEJJEAEJ", "FADJJHAJDJA", "EFIAFIDDBAI", "DBFICBBBCIC", "BGCCGGCCGFG", "CEAEEJJEAEJ", "FADJJHAJDJA", "EFIAFIDDBAI", "DBFICBBBCIC", "BGCCGGCCGFG", "CEAEEJJEAEJ", "FADJJHAJDJA", "EFIAFIDDBAI", "DBFICBBBCIC", "BGCCGGCCGFG", "CEAEEJJEAEJ", "FADJJHAJDJA", "EFIAFIDDBAI", "DBFICBBBCIC", "BGCCGGCCGFG", "CEAEEJJEAEJ", "FADJJHAJDJA", "EFIAFIDDBAI", "DBFICBBBCIC", "BGCCGGCCGFG", "CEAEEJJEAEJ", "FADJJHAJDJA", "EFIAFIDDBAI", "DBFICBBBCIC", "BGCCGGCCGFG", "CEAEEJJEAEJ", "FADJJHAJDJA", "EFIAFIDDBAI", "DBFICBBBCIC", "BGCCGGCCGFG"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 3838385597560;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> numbers = {"IEEECIAEEAE", "EIDABCIACDA", "FCBCFGGDBIG", "JGJJJJFCJBF", "DJHHHHHHHFH", "IEEECIAEEAE", "EIDABCIACDA", "FCBCFGGDBIG", "JGJJJJFCJBF", "DJHHHHHHHFH", "IEEECIAEEAE", "EIDABCIACDA", "FCBCFGGDBIG", "JGJJJJFCJBF", "DJHHHHHHHFH", "IEEECIAEEAE", "EIDABCIACDA", "FCBCFGGDBIG", "JGJJJJFCJBF", "DJHHHHHHHFH", "IEEECIAEEAE", "EIDABCIACDA", "FCBCFGGDBIG", "JGJJJJFCJBF", "DJHHHHHHHFH", "IEEECIAEEAE", "EIDABCIACDA", "FCBCFGGDBIG", "JGJJJJFCJBF", "DJHHHHHHHFH", "IEEECIAEEAE", "EIDABCIACDA", "FCBCFGGDBIG", "JGJJJJFCJBF", "DJHHHHHHHFH", "IEEECIAEEAE", "EIDABCIACDA", "FCBCFGGDBIG", "JGJJJJFCJBF", "DJHHHHHHHFH", "IEEECIAEEAE", "EIDABCIACDA", "FCBCFGGDBIG", "JGJJJJFCJBF", "DJHHHHHHHFH", "IEEECIAEEAE", "EIDABCIACDA", "FCBCFGGDBIG", "JGJJJJFCJBF", "DJHHHHHHHFH"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 3838536926080;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> numbers = {"EHJJBJJBJJA", "IDBEHCBHBEC", "FCABDGDDCHG", "GGDHFFFGGDF", "JICGIIIIFCI", "EHJJBJJBJJA", "IDBEHCBHBEC", "FCABDGDDCHG", "GGDHFFFGGDF", "JICGIIIIFCI", "EHJJBJJBJJA", "IDBEHCBHBEC", "FCABDGDDCHG", "GGDHFFFGGDF", "JICGIIIIFCI", "EHJJBJJBJJA", "IDBEHCBHBEC", "FCABDGDDCHG", "GGDHFFFGGDF", "JICGIIIIFCI", "EHJJBJJBJJA", "IDBEHCBHBEC", "FCABDGDDCHG", "GGDHFFFGGDF", "JICGIIIIFCI", "EHJJBJJBJJA", "IDBEHCBHBEC", "FCABDGDDCHG", "GGDHFFFGGDF", "JICGIIIIFCI", "EHJJBJJBJJA", "IDBEHCBHBEC", "FCABDGDDCHG", "GGDHFFFGGDF", "JICGIIIIFCI", "EHJJBJJBJJA", "IDBEHCBHBEC", "FCABDGDDCHG", "GGDHFFFGGDF", "JICGIIIIFCI", "EHJJBJJBJJA", "IDBEHCBHBEC", "FCABDGDDCHG", "GGDHFFFGGDF", "JICGIIIIFCI", "EHJJBJJBJJA", "IDBEHCBHBEC", "FCABDGDDCHG", "GGDHFFFGGDF", "JICGIIIIFCI"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 3777734767450;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> numbers = {"AHBHHHHAHAH", "ABGBABABDGB", "ADIGBIGGJDD", "AJDIIDJEEJE", "AFCDJFECFCC", "AHBHHHHAHAH", "ABGBABABDGB", "ADIGBIGGJDD", "AJDIIDJEEJE", "AFCDJFECFCC", "AHBHHHHAHAH", "ABGBABABDGB", "ADIGBIGGJDD", "AJDIIDJEEJE", "AFCDJFECFCC", "AHBHHHHAHAH", "ABGBABABDGB", "ADIGBIGGJDD", "AJDIIDJEEJE", "AFCDJFECFCC", "AHBHHHHAHAH", "ABGBABABDGB", "ADIGBIGGJDD", "AJDIIDJEEJE", "AFCDJFECFCC", "AHBHHHHAHAH", "ABGBABABDGB", "ADIGBIGGJDD", "AJDIIDJEEJE", "AFCDJFECFCC", "AHBHHHHAHAH", "ABGBABABDGB", "ADIGBIGGJDD", "AJDIIDJEEJE", "AFCDJFECFCC", "AHBHHHHAHAH", "ABGBABABDGB", "ADIGBIGGJDD", "AJDIIDJEEJE", "AFCDJFECFCC", "AHBHHHHAHAH", "ABGBABABDGB", "ADIGBIGGJDD", "AJDIIDJEEJE", "AFCDJFECFCC", "AHBHHHHAHAH", "ABGBABABDGB", "ADIGBIGGJDD", "AJDIIDJEEJE", "AFCDJFECFCC"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 4823940424620;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> numbers = {"JAHEHEAAFGA", "JHGIGICHHEF", "JEECECDEECG", "JBCDIBBBBBB", "JJDJCJJJJJJ", "JAHEHEAAFGA", "JHGIGICHHEF", "JEECECDEECG", "JBCDIBBBBBB", "JJDJCJJJJJJ", "JAHEHEAAFGA", "JHGIGICHHEF", "JEECECDEECG", "JBCDIBBBBBB", "JJDJCJJJJJJ", "JAHEHEAAFGA", "JHGIGICHHEF", "JEECECDEECG", "JBCDIBBBBBB", "JJDJCJJJJJJ", "JAHEHEAAFGA", "JHGIGICHHEF", "JEECECDEECG", "JBCDIBBBBBB", "JJDJCJJJJJJ", "JAHEHEAAFGA", "JHGIGICHHEF", "JEECECDEECG", "JBCDIBBBBBB", "JJDJCJJJJJJ", "JAHEHEAAFGA", "JHGIGICHHEF", "JEECECDEECG", "JBCDIBBBBBB", "JJDJCJJJJJJ", "JAHEHEAAFGA", "JHGIGICHHEF", "JEECECDEECG", "JBCDIBBBBBB", "JJDJCJJJJJJ", "JAHEHEAAFGA", "JHGIGICHHEF", "JEECECDEECG", "JBCDIBBBBBB", "JJDJCJJJJJJ", "JAHEHEAAFGA", "JHGIGICHHEF", "JEECECDEECG", "JBCDIBBBBBB", "JJDJCJJJJJJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 4876751083120;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> numbers = {"BBBEBABBBEE", "BEFFECEECDF", "BDJJGFCCGAG", "BAHHJHGHJGJ", "BIIIIIHIHJH", "BBBEBABBBEE", "BEFFECEECDF", "BDJJGFCCGAG", "BAHHJHGHJGJ", "BIIIIIHIHJH", "BBBEBABBBEE", "BEFFECEECDF", "BDJJGFCCGAG", "BAHHJHGHJGJ", "BIIIIIHIHJH", "BBBEBABBBEE", "BEFFECEECDF", "BDJJGFCCGAG", "BAHHJHGHJGJ", "BIIIIIHIHJH", "BBBEBABBBEE", "BEFFECEECDF", "BDJJGFCCGAG", "BAHHJHGHJGJ", "BIIIIIHIHJH", "BBBEBABBBEE", "BEFFECEECDF", "BDJJGFCCGAG", "BAHHJHGHJGJ", "BIIIIIHIHJH", "BBBEBABBBEE", "BEFFECEECDF", "BDJJGFCCGAG", "BAHHJHGHJGJ", "BIIIIIHIHJH", "BBBEBABBBEE", "BEFFECEECDF", "BDJJGFCCGAG", "BAHHJHGHJGJ", "BIIIIIHIHJH", "BBBEBABBBEE", "BEFFECEECDF", "BDJJGFCCGAG", "BAHHJHGHJGJ", "BIIIIIHIHJH", "BBBEBABBBEE", "BEFFECEECDF", "BDJJGFCCGAG", "BAHHJHGHJGJ", "BIIIIIHIHJH"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 4878711289470;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> numbers = {"BAEIJICCBBA", "BEFFECEECDF", "BDJJGFCCGAG", "BAHHJHGHJGJ", "BIIIIIHIHJH", "BBBEBABBBEE", "BEFFECEECDF", "BDJJGFCCGAG", "BAHHJHGHJGJ", "BIIIIIHIHJH", "BBBEBABBBEE", "BEFFECEECDF", "BDJJGFCCGAG", "BAHHJHGHJGJ", "BIIIIIHIHJH", "BBBEBABBBEE", "BEFFECEECDF", "BDJJGFCCGAG", "BAHHJHGHJGJ", "BIIIIIHIHJH", "BBBEBABBBEE", "BEFFECEECDF", "BDJJGFCCGAG", "BAHHJHGHJGJ", "BIIIIIHIHJH", "BBBEBABBBEE", "BEFFECEECDF", "BDJJGFCCGAG", "BAHHJHGHJGJ", "BIIIIIHIHJH", "BBBEBABBBEE", "BEFFECEECDF", "BDJJGFCCGAG", "BAHHJHGHJGJ", "BIIIIIHIHJH", "BBBEBABBBEE", "BEFFECEECDF", "BDJJGFCCGAG", "BAHHJHGHJGJ", "BIIIIIHIHJH", "BBBEBABBBEE", "BEFFECEECDF", "BDJJGFCCGAG", "BAHHJHGHJGJ", "BIIIIIHIHJH", "BBBEBABBBEE", "BEFFECEECDF", "BDJJGFCCGAG", "BAHHJHGHJGJ", "BIIIIIHIHJH"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 4876317180491;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> numbers = {"ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 49382716054900;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> numbers = {"AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "CCCCCCCCCCCC", "DDDDDDDDDDDD", "EEEEEEEEEEEE", "FFFFFFFFFFFF", "GGGGGGGGGGGG", "HHHHHHHHHHHH", "IIIIIIIIIIII", "AJJJJJJJJJJJ", "BJJJJJJJJJJJ", "CJJJJJJJJJJJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 43288888888848;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> numbers = {"AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 49999999999950;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> numbers = {"ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 493827160500;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> numbers = {"ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 49382716050000;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> numbers = {"AJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 44299999999960;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> numbers = {"AAAAAAAAAAAA"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> numbers = {"AAAAAAAAAAAA", "BBBBBBBBBBBB", "CCCCCCCCCCCC", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "EEEEEEEEEEEE", "EEEEEEEEEEEE", "EEEEEEEEEEEE", "EEEEEEEEEEEE", "EEEEEEEEEEEE", "EEEEEEEEEEEE", "EEEEEEEEEEEE", "EEEEEEEEEEEE", "EEEEEEEEEEEE", "EEEEEEFGHIJJ", "FFFFFFFFFFFF", "CCCCCCCCCCCC", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "DDDDDDDDDDDD", "EEEEEEEEEEEE", "EEEEEEEEEEEE", "EEEEEEEEEEEE", "EEEEEEEEEEEE", "EEEEEEEEEEEE", "EEEEEEEEEEEE", "EEEEEEEEEEEE", "EEEEEEEEEEEE", "EEEEEEEEEEEE", "EEEEEEFGHIJJ", "FFFFFFFFFFFF"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 45666666353045;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> numbers = {"ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABAJIHGFEDCB", "ABAJIHGFEDCB", "ABAJIHGFEDCB", "ABAJIHGFEDCB", "ABAJIHGFEDCB", "ABAJIHGFEDCB", "ABAJIHGFEDCB", "ABAJIHGFEDCB", "ABAJIHGFEDCB", "ABAJIHGFEDCB", "ABCDEFJIHGAB", "ABCDEFJIHGAB", "ABCDEFJIHGAB", "ABCDEFJIHGAB", "ABCDEFJIHGAB", "ABCDEFJIHGAB", "ABCDEFJIHGAB", "ABCDEFJIHGAB", "ABCDEFJIHGAB", "ABCDEFJIHGAB", "AECDBFHIJABC", "AECDBFHIJABC", "AECDBFHIJABC", "AECDBFHIJABC", "AECDBFHIJABC", "AECDBFHIJABC", "AECDBFHIJABC", "AECDBFHIJABC", "AECDBFHIJABC", "AECDBFHIJABC"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 39391576071500;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> numbers = {"BBCDEFGHIJIJ", "CBCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ", "ABCDEFGHIJIJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 49082716050500;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> numbers = {"ABCDEFGHIJAB", "ABCDCFIJIJAB", "ABCDEFGHHEAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ADCDEFGHFDAB", "ABCDGFDEIJAB", "ABCDEFGHIJAB", "ABCDCFIJIJAB", "ABCDEFGHHEAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ADCDEFGHFDAB", "ABCDGFDEIJAB", "ABCDEFGHIJAB", "ABCDCFIJIJAB", "ABCDEFGHHEAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ADCDEFGHFDAB", "ABCDGFDEIJAB", "ABCDEFGHIJAB", "ABCDCFIJIJAB", "ABCDEFGHHEAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ADCDEFGHFDAB", "ABCDGFDEIJAB", "ABCDEFGHIJAB", "ABCDCFIJIJAB", "ABCDEFGHHEAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ADCDEFGHFDAB", "ABCDGFDEIJAB", "ABCDEFGHIJAB", "ABCDCFIJIJAB", "ABCDEFGHHEAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ADCDEFGHFDAB", "ABCDGFDEIJAB", "ABCDEFGHIJAB", "ABCDCFIJIJAB", "ABCDEFGHHEAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ADCDEFGHFDAB", "ABCDGFDEIJAB", "ABCDGFDEIJAB"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 49267661863300;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> numbers = {"ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ", "ABCDEFGHIJJJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 48395061729000;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> numbers = {"BAC", "AB", "AB", "AB", "AB", "AB", "AB", "AB", "AB", "AC", "AC", "AC"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1972;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> numbers = {"CGCHIDFBBGJA", "IBBCHHHHGIGE", "GBJHBBFJIHEC", "FGAGBIHAGIC", "JGBJJCBCIDJA", "IHGDAHJFGHAJ", "BDIGGCFEBBEB", "BGGDFDFADICE", "GHBEDJGDHIIA", "BACFCHCCIEGJ", "CCHBIIHJBCHE", "JFJFFFJJCDHJ", "FFHJDBDEAGHI", "IJBHJHHHDAJG", "JIJBADHHDAEG", "CDBFHHDHDCHJ", "FFHHECJEHCGJ", "BDGHBDAGGIHI", "HACGDJGIAHCF", "AHHGAEADJHIA", "AJAGAJAAAFHI", "CDJHECHECGC", "HGCADADBEIFI", "HBEHFCBEJCHE", "ADCBHDJFBFAH", "CFJCGHHIGAHC", "JCIHBJEDEJDI", "FJDIFDFCIFCF", "ACIJHECGCDFJ", "FCDBGCEACAIB", "JGFAJJBBFIGH", "EFAHFBIIJCAB", "IDGADEJCBCH", "BDBJHDEAJCDD", "GBAJGIGEHABD", "ECBADIHFJCHF", "EBFDBECFAHAG", "AGICADGJIGCD", "IBJJICFFCAGE", "CAGFFFCBHHJB", "AFECFHGFHHGA", "IJAJCIFGJHFJ", "FFBBJIIICAIG", "CDJFAJCFEGCB", "FDDEBEDDHCF", "BIEHJABGFHJH", "CGCJFIEBHJFH", "JHCCEBIIJIIC", "FCCAAAAIIDHD", "CHHAIAJBBJIH"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 29460696229168;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> numbers = {"BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA", "BCDEFGHIJJJA"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 49382716055500;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> numbers = {"AAAAAAAAAAAA", "ABBBBBBBBBBB", "ACCCCCCCCCCC", "ADDDDDDDDDDD", "AEEEEEEEEEEE", "AFFFFFFFFFFF", "AGGGGGGGGGGG", "AHHHHHHHHHHH", "AIIIIIIIIIII", "AJJJJJJJJJJJ", "AAAAAAAAAAAA", "ABBBBBBBBBBB", "ACCCCCCCCCCC", "ADDDDDDDDDDD", "AEEEEEEEEEEE", "AFFFFFFFFFFF", "AGGGGGGGGGGG", "AHHHHHHHHHHH", "AIIIIIIIIIII", "AJJJJJJJJJJJ", "AAAAAAAAAAAA", "ABBBBBBBBBBB", "ACCCCCCCCCCC", "ADDDDDDDDDDD", "AEEEEEEEEEEE", "AFFFFFFFFFFF", "AGGGGGGGGGGG", "AHHHHHHHHHHH", "AIIIIIIIIIII", "AJJJJJJJJJJJ", "AAAAAAAAAAAA", "ABBBBBBBBBBB", "ACCCCCCCCCCC", "ADDDDDDDDDDD", "AEEEEEEEEEEE", "AFFFFFFFFFFF", "AGGGGGGGGGGG", "AHHHHHHHHHHH", "AIIIIIIIIIII", "AJJJJJJJJJJJ", "AAAAAAAAAAAA", "ABBBBBBBBBBB", "ACCCCCCCCCCC", "ADDDDDDDDDDD", "AEEEEEEEEEEE", "AFFFFFFFFFFF", "AGGGGGGGGGGG", "AHHHHHHHHHHH", "AIIIIIIIIIII", "AJJJJJJJJJJJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 47499999999975;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> numbers = {"ABB", "ABB", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 3635;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> numbers = {"ABB", "ABB", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC", "CC"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 3538;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> numbers = {"GHJIDDD", "AHHCCCA", "IIJCEJ", "F", "HDBIGFJAAJJJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 987664824329;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> numbers = {"BAAAAAAAAAAA", "CAAAAAAAAAAA", "DAAAACAAAAAA", "EAAAAAAAABAA", "FAAAAAAAAAAA", "GAAAJAAAAAAA", "HAAAAIAAAAAA", "IAAAAAAAAAAA", "JAAAAAAAAAAA", "BAAAAAAAAAAA", "CAAAAAAAAAAA", "DAAAAAAAAAAA", "EAAAAAAAAAAA", "FAAAAAAAAAAA", "GAAAAAAAAAAA", "HAAAAAAAAAAA", "IAAAAAAAAAAA", "JAAAAAAAAAAA", "BAAAAAAAAAAA", "CAAAAAAAAAAA", "DAAAAAAAAAAA", "EAAAAAAAAAAA", "FAAAAAAAAAAA", "GAAAAAAAAAAA", "HAAAAAAAAAAA", "IAAAAAAAAAAA", "JAAAAAAAAAAA", "BAAAAAAAAAAA", "CAAAAAAAAAAA", "DAAAAAAAAAAA", "EAAAAAAAAAAA", "FAAAAAAAAAAA", "GAAAAAAAAAAA", "HAAAAAAAAAAA", "IAAAAAAAAAAA", "JAAAAAAAAAAA", "BAAAAAAAAAAA", "CAAAAAAAAAAA", "DAAAAAAAAAAA", "EAAAAAAAAAAA", "FAAAAAAAAAAA", "GAAAAAAAAAAA", "HAAAAAAAAAAA", "IAAAAAAAAAAA", "JAAAAAAAAAAA", "FAAAAAAAAAAA", "GAAAAAAAAAAA", "HAAAAAAAADAA", "IAAAAAAAAABA", "JAAAAAAAAAAE"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 26000102000531;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> numbers = {"ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE", "ABBBCCCDDDEE"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 49443888332750;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> numbers = {"AAAAAAAAAA", "BBBBBBBBBBB", "BBBBBBBBBBB", "BBBBBBBBBBB", "BBBBBBBBBBB", "BBBBBBBBBBB", "BBBBBBBBBBB", "BBBBBBBBBBB", "BBBBBBBBBBB", "BBBBBBBBBBB", "BBBBBBBBBBB", "BBBBBBBBBBB", "BBBBBBBBBBB", "CCCCCCCCCCC", "CCCCCCCCCC", "CCCCCCCCCC", "CCCCCCCCCC", "CCCCCCCCCC", "CCCCCCCCCC", "CCCCCCCCCC", "CCCCCCCCCC", "CCCCCCCCCC", "CCCCCCCCCC", "CCCCCCCCCC", "CCCCCCCCCC", "CCCCCCCCCC", "DDDDDDDDD", "DDDDDDDDD", "DDDDDDDDD", "DDDDDDDDD", "DDDDDDDDD", "DDDDDDDDD", "DDDDDDDDD", "DDDDDDDDD", "DDDDDDDDD", "DDDDDDDDD", "DDDDDDDDD", "DDDDDDDDD", "DDDDDDDDD", "DDDDDDDDD", "DDDDDDDDD", "DDDDDDDDD", "DDDDDDDDD", "DDDDDDDDD", "E", "F", "G", "H"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1416222222198;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> numbers = {"ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "BACDFEGHIJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 492927070500;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> numbers = {"ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD", "ABCDEFGHIJDD"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 49382716053300;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> numbers = {"BA", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 197;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> numbers = {"ABCDEFGHIJAB", "BACDEFGHIJAB", "ABFCGDEHIJAB"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2871828063294;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> numbers = {"ABB", "BBB"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1898;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> numbers = {"BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC", "BCDEFGHIJABC"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 49382716054900;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> numbers = {"ABAAAAAAAA", "ACAAAAAAAA", "ADAAAAAAAA", "AEAAAAAAAA", "AFAAAAAAAA", "AGAAAAAAAA", "AHAAAAAAAA", "AAAAIAAAAA", "AJAAAAAAAA", "AABBAAAAAA", "AABAAAAAAA", "AAACAAAAAA", "AAADAAAAAA", "AAAEAAAAAA", "AAAFAAAAAA", "AAAGAAAAAA", "AAAHAAAAAA", "AAAAIAAAAA", "AAAJAAAAAA", "AAAACCAAAA", "AAABAAAAAA", "AAAACAAAAA", "AAAADAAAAA", "AAAAEAAAAA", "AAAAFAAAAA", "AAAAGAAAAA", "AAAAHAAAAA", "AAAIAAAAAA", "AAAAJAAAAA", "AAAAAEEAAA", "AAAABAAAAA", "AAAAACAAAA", "AAAAADAAAA", "AAAAAEAAAA", "AAAAAFAAAA", "AAAAAGAAAA", "AAAAAHAAAA", "AAIAAAAAAA", "AAAAAJAAAA", "AAAAAADDAA", "AAAAABAAAA", "AAAAAACAAA", "AAAAAADAAA", "AAAAAAEAAA", "AAAAAAFAAA", "AAAAAAGAAA", "AAAAAAHAAA", "AIAAAAAAAA", "AAAAAAJAAA", "AAAAAAAFFA"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 495408447790;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> numbers = {"BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA", "BCDEFGHIJA"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 493827160500;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> numbers = {"AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "BCDEFGHIJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 49000876543161;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> numbers = {"ABCDEFGHIJAB", "BCDEFGHIJABA", "CDEFGHIJABBA", "DEFGHIJABCAB", "EFGHIJABCDAB", "ABCDEFGHIJAB", "BCDEFGHIJABA", "CDEFGHIJABBA", "DEFGHIJABCAB", "EFGHIJABCDAB", "ABCDEFGHIJAB", "BCDEFGHIJABA", "CDEFGHIJABBA", "DEFGHIJABCAB", "EFGHIJABCDAB", "ABCDEFGHIJAB", "BCDEFGHIJABA", "CDEFGHIJABBA", "DEFGHIJABCAB", "EFGHIJABCDAB", "ABCDEFGHIJAB", "BCDEFGHIJABA", "CDEFGHIJABBA", "DEFGHIJABCAB", "EFGHIJABCDAB", "ABCDEFGHIJAB", "BCDEFGHIJABA", "CDEFGHIJABBA", "DEFGHIJABCAB", "EFGHIJABCDAB", "ABCDEFGHIJAB", "BCDEFGHIJABA", "CDEFGHIJABBA", "DEFGHIJABCAB", "EFGHIJABCDAB", "ABCDEFGHIJAB", "BCDEFGHIJABA", "CDEFGHIJABBA", "DEFGHIJABCAB", "EFGHIJABCDAB", "ABCDEFGHIJAB", "BCDEFGHIJABA", "CDEFGHIJABBA", "DEFGHIJABCAB", "EFGHIJABCDAB", "ABCDEFGHIJAB", "BCDEFGHIJABA", "CDEFGHIJABBA", "DEFGHIJABCAB", "EFGHIJABCDAB"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 38738012618980;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> numbers = {"ABCDEFGHIJ", "BCDEFGHIJA", "ABCDEFGHIJ", "BCDEFGHIJA", "ABCDEFGHIJ", "BCDEFGHIJA", "ABCDEFGHIJ", "BCDEFGHIJA", "ABCDEFGHIJ", "BCDEFGHIJA", "ABCDEFGHIJ", "BCDEFGHIJA", "ABCDEFGHIJ", "BCDEFGHIJA", "ABCDEFGHIJ", "BCDEFGHIJA", "ABCDEFGHIJ", "BCDEFGHIJA", "ABCDEFGHIJ", "BCDEFGHIJA", "ABCDEFGHIJ", "BCDEFGHIJA", "ABCDEFGHIJ", "BCDEFGHIJA", "ABCDEFGHIJ", "BCDEFGHIJA", "ABCDEFGHIJ", "BCDEFGHIJA", "ABCDEFGHIJ", "BCDEFGHIJA", "ABCDEFGHIJ", "BCDEFGHIJA", "ABCDEFGHIJ", "BCDEFGHIJA", "ABCDEFGHIJ", "BCDEFGHIJA", "ABCDEFGHIJ", "BCDEFGHIJA", "ABCDEFGHIJ", "BCDEFGHIJA", "ABCDEFGHIJ", "BCDEFGHIJA", "ABCDEFGHIJ", "BCDEFGHIJA", "ABCDEFGHIJ", "BCDEFGHIJA"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 431065432314;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> numbers = {"ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "CBCDEFGHIJAB", "CBCDEFGHIJAB", "CBCDEFGHIJAB", "CBCDEFGHIJAB", "CBCDEFGHIJAB", "CBCDEFGHIJAB", "CBCDEFGHIJAB", "CBCDEFGHIJAB", "CBCDEFGHIJAB", "CBCDEFGHIJAB", "CBCDEFGHIJAB", "JCBCDDFHIJAB", "JCBCDDFHIJAB", "JCBCDDFHIJAB", "JCBCDDFHIJAB", "JCBCDDFHIJAB", "JCBCDDFHIJAB", "JCBCDDFHIJAB", "JCBCDDFHIJAB", "JCBCDDFHIJAB", "JCBCDDFHIJAB", "JCBCDDFHIJAB", "JCBCDDFHIJAB", "JCBCDDFHIJAB", "JCBCDDFHIJAB", "JCBCDDFHIJAB", "JCBCDDFHIJAB", "JCBCDDFHIJAB", "JCBCDDFHIJAB", "JCBCDDFHIJAB", "JCBCDDFHIJAB", "ECBCDDFHIJAB", "ECBCDDFHIJAB", "ECBCDDFHIJAB", "ECBCDDFHIJAB", "ECBCDDFHIJAB", "ECBCDDFHIJAB", "ECBCDDFHIJAB", "ECBCDDFHIJAB", "ECBCDDFHIJAB"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 42917212448750;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> numbers = {"AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 24999999999975;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> numbers = {"ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "BACDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFHGIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ", "ABCDEFGHIJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 492927159600;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> numbers = {"ACGBDCFE", "GDEEJJGC", "FBBGJJJCD", "BBGGGIIFC", "EDEDJEIEFH", "ACGJJDDEB", "DHIBJHHD", "AGHHFDGHE", "DCFEDBJCFI", "EFDBFGDEJ", "FHIGIBFH", "GFHBIGJGB", "FGFFGJHHIJ", "BEBBDHHHI", "DJDBCIHDCCG", "HIEIBHJHG", "GEGIJFJD", "GGCIGIIBH", "DIBGBFHGE", "BICDJIEIHH", "BIFDDBEB", "DCEEBBCCG", "DFJDCFFHFC", "BEEFCCJBH", "EHEFDEGDI", "FDDHHHJDIH", "FHDEBIJHH", "AGJHEEGDC", "BGDGBCDD", "CCIFJEFG", "DHBFJGHGH", "CJCIHFBCC", "BCDDJHBJH", "BJCFBHHGBB", "AJBFIDIID", "GFJDEIHG", "FDJJHCFCBG", "CCGFJJHD", "EEFHJCDDHJE", "AGGDHEHIC", "EDBGDFGHDEG", "FJGGFJFCC", "CDEFGGFIH", "AECGBEJCH", "BEEFJHFGCDI", "GICDHGGJH", "DIBFBIBIJ", "HDCDFDCGEDJ", "CIBFBIBHJC", "ABGFHJCC"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 506693645879;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> numbers = {"HEEGFFFHBCI", "HEJJGCEB", "HCHDBBFIB", "HGGGIIFC", "HBDBBHFBGI", "HICGJJDDEB", "HGJIDJEJI", "HGHHFDGHE", "HIDJDHBBHFJ", "HFDBFGDEJ", "HECGDEGHEG", "HHBIGJGBJG", "HBCJICEF", "HJEBBDHHHI", "HDDDDGBJJE", "HGDIEIBH", "HGJEIIEFGBC", "HJGCIGII", "HHFFBJGI", "HHGEJICDJI", "HCCBBIBD", "HDBEBDCEEB", "HFIDGCGC", "HCFFHFCJ", "HFFJCFIEB", "HHEFDEGDI", "HBGDGHFGCJ", "HCHDEBIJH", "HDJDIJDG", "HDCDGDGBCD", "HBCFHDFHFGD", "HBFJGHGHEJ", "HJJECBICIJ", "HDJHBJHFJCF", "HDEHGJICD", "HFIDIIDGFJD", "HBEFHDCCIH", "HFCBGDCGF", "HDEHEFDG", "HJCDDHJEF", "HCHEDHGBB", "HDBGDFGHDEG", "HDFIHJIJID", "HDEFGGFIH", "HFCFJEDDBH", "HEEFJHFGCDI", "HDIBJFJBFBG", "HBFBIBIJI", "HHCEEGHDIB", "HCIBFBIB"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1039307479444;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> numbers = {"ABC", "BAC", "CAA", "DEF", "EFG", "FGH", "GHI", "HIJ", "IIIIIIIIIIII", "BJJJJJJJJJJJ", "ADFGGGHIIIJI", "AAAFGGCCCEJI", "HIIIIIIIIJII", "BJJJJJJJJJJJ", "BJJJJJJJJJJJ", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "CCCCCCCCCCCC", "ADDDDDDDDDDD", "EEEEEEEEEEEE", "FFFFFFFFFFFF", "HHHHHHHHHHHH", "AJJJJJJJJJJJ", "AFEEGHIICCCC", "CDEEFDAACEEE", "IIIIJGHGHGHG", "ABCABCABCABC", "EFFHGHGHEFFF", "EFEFEFEFEFEF", "AJJJJJJJJJJJ", "BJJJJJJJJJJJ", "CJJJJJJJJJJJ", "EJJJJJJJJJJJ", "EJJJJJJJJJJJ", "FJJJJJJJJJJJ", "GJJJJJJJJJJJ", "HJJJJJJJJJJJ", "IJJJJJJJJJJJ", "EFEDFEDFEDFE", "FFEFFEFFEFFE", "IJEIJEIJEIJE", "GAGAGAGAGAGA", "IHAIHAIHAIHA", "EHIAHIAHCCCC", "CCCAFGAFGEEE", "EEEEEEEEEEEE", "FEEIFEEIFEII", "AAAACCDDDDDD", "EDDEEEDDDEEE", "FFEEFEAAAACI"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 28985076699921;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> numbers = {"FIHEIBDAHCIC", "HGHFHIDAAGFA", "EHGFIFCACAGE", "IBHDCGCDGCDH", "CBFFBGDHCDHE", "ECFGABEFEEFA", "FGHFDGDCAFAB", "AFHFIBGDCBCB", "IDGIACEDGDAC", "CDIIFBGGCDDG", "BGIGIIDEIBIH", "DHHBDFHGECGG", "FIHCCDFHCHGI", "ACGIEFDICDBA", "CFECFEGAGGDE", "BAIBDCGIBICH", "GBFAACHBICIA", "ICECBAFBDCEF", "ABGGEDBIFADD", "GFCIFIBEGGHH", "IFBCCIGBEACG", "IDGCBICCHADD", "CDIDECCABIIC", "IIGEFAAGAHHB", "IHHHGGEICDII", "FABAFHFHHIEG", "BACDHEBBEEDH", "ECDEIEIBIDGB", "FHIFCBABDIFC", "CAHBDBEEDIBB", "ACEICFDGAIAI", "CDBGBFIFEFDC", "FHIEIDDIAIHI", "IBDFHFIECIGC", "IEFEIGEHHCCG", "HAAIAIFHFCFH", "IIDFFBBIBCFF", "EEFFEGCBIEFE", "BCHDBFBGFEBG", "BABFECAFBGAG", "HEAEDCGEEFHI", "IEGICEHIEHBH", "IEEADFDBACCB", "IHFFDBEBECCD", "DEIHHCGFIBBI", "GAGGBGHDBBGB", "EEAFGGDBGGBD", "IIHFADCCGABC", "HEDCCGCHDHBF"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 33471427754115;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> numbers = {"ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "BCDEFGHIJABA", "CDEFGHIJABAB", "EFGHIJABABCD", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "BCDEFGHIJABA", "CDEFGHIJABAB", "EFGHIJABABCD", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "BCDEFGHIJABA", "CDEFGHIJABAB", "EFGHIJABABCD", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "BCDEFGHIJABA", "CDEFGHIJABAB", "EFGHIJABABCD", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "BCDEFGHIJABA", "CDEFGHIJABAB", "EFGHIJABABCD", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "BCDEFGHIJABA", "CDEFGHIJABAB", "EFGHIJABABCD", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "BCDEFGHIJABA", "CDEFGHIJABAB", "EFGHIJABABCD", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "ABCDEFGHIJAB", "BCDEFGHIJABA", "CDEFGHIJABAB", "EFGHIJABABCD", "CDEFGHIJABAB", "EFGHIJABABCD"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 43303477292221;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> numbers = {"AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAB", "AAAAAAAAAAAA"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 49999999999949;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> numbers = {"GHGDEFCIJ", "CEADDGIEJ", "GBDEFAHHHJ", "HBDAHCABJ", "BGAIHHHJ", "FDEDHFHJ", "AHDFIBCHCJ", "HGGHDFCHJ", "HFFGBAFBEJ", "CCGBCDBDIJ", "CEDHEEAJ", "EEIECEAGJ", "ACGEIFAAJ", "IGEIIEDGJ", "DFHBGAHGDJ", "BABEHDFDHJ", "DIEFDAEEAJ", "HCDCAAHGFJ", "CCBFEABCJ", "HCFDEAGJ", "AADIDCCIGJ", "AGGBBFIJ", "AIIBGGAEJ", "BADDDDIFJ", "DCGHFCFJ", "DBEFHCHEEJ", "DCDGFCFJ", "GEDEIDDCJ", "HIDDCIDCDJ", "CIFHACDHJ", "BEHFHBAIJ", "IGHHAIIJ", "EAHGAEFEJ", "GDGGDGABJ", "DGFIGBAJ", "DGABGEHJ", "GEEFABGDHJ", "GBABBFCDHJ", "CGDIBHIJ", "IFBCEEHFJ", "GAHCEACDJ", "EDEIBBGBJ", "AIIHGACIJ", "EIDEEFIAJ", "BADCGCAFFJ", "HEGFDIBJ", "DGCABIHJ", "HGBAIDFCJ", "EBHCFDCHDJ", "BAGHDECJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 121902124950;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> numbers = {"AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB", "AAAAAAAAAAAA", "BBBBBBBBBBBB"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 47222222222175;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> numbers = {"AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ", "AJJJJJJJJJ"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 494444444400;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> numbers = {"ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF", "ABCDEFGHIJEF"};
    EncodedSum* pObj = new EncodedSum();
    clock_t start = clock();
    long result = pObj->maximumSum(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 49382716052700;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7446789&rd=10658&pm=7249
********************************************************************************
#include<algorithm>  
#include<sstream> 
#include<string>  
#include<vector>  
using namespace std;  
   
#define FOR(i,a,b) for(int i = (a); i < (b); ++i)  
#define REP(i,n) FOR(i,0,n)  
#define FORE(it,x) for(typeof(x.begin()) it=x.begin();it!=x.end();++it)  
#define pb push_back  
#define all(x) (x).begin(),(x).end()  
#define CLEAR(x,with) memset(x,with,sizeof(x))  
#define sz size()  
typedef long long ll; 
struct EncodedSum 
{ 
  long long maximumSum(vector <string> numbers) 
  { 
    long long pow[15]; 
    pow[0] = 1; FOR(i,1,15) pow[i] = pow[i-1] * 10; 
    ll sum[10]; REP(i,10) sum[i] = 0; 
    vector<bool> canZero(10, true); 
    REP(i,numbers.sz) 
    { 
      REP(j,numbers[i].sz) 
      { 
        sum[numbers[i][j]-'A'] += pow[numbers[i].sz-j-1]; 
      }   
      canZero[numbers[i][0]-'A'] = false; 
    } 
    vector<int> assign; 
    REP(i,10) assign.pb(i); 
    ll ret = 0; 
    do 
    { 
      if(canZero[assign[0]]) 
      { 
        ll cand = 0; 
        REP(i,10) cand += sum[assign[i]] * i; 
        ret >?= cand;         
      } 
    } while(next_permutation(all(assign))); 
    return ret; 
  } 
};

********************************************************************************
*******************************************************************************/