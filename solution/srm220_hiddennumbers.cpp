/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3075
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

class HiddenNumbers {
public:
    vector<string> findAll(vector<string> text);
};

vector<string> HiddenNumbers::findAll(vector<string> text) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> text = {"098m03r9f80239802389f0m9KDKLKLJDKLJm0983m890DMOm03", "dlkfj3hljf4h3klhl 4j4 444 44 rjhkrrkr34534539893", " 390804980498409480 dkldjkl djkl djkl d00000002998"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9", "44", "098", "444", "890", "0983", "00000002998", "34534539893", "80239802389", "390804980498409480"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> text = {"39 000220 30 skldjdije939939slkk 3090 2912kjdk3949", "dlkjd dkljsl098 dkd3 23kdkdkl 0000002222kdjdie9000"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0000002222", "2912", "3090", "3949", "9000", "939939"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> text = {};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> text = {"iTSvkGl7tjJo2Wx", "SbzWYrcsoEbsriZh7ibDBdsYJHHsb4 wMEy0oOW9cG6", "Mw4nx9dI", "jk5TrTC hbrGEWyKqdoS1iOLJNNJf9", "uoJ3HCQjObHN t700bl B8zKcyzJf5W569vjeeGPSO5veFga", "0b8wYPDGXKaj73oBmnmTKSmPJsAYJNIvmyVr5ja", "VHPncMDq3YXOJ8DtnnJXg5WcUXoMah", "FyoiUeqDxO4G", " FvQQT9DcBP9tmHQtI9um5Kq63", "SgeOKMvUmDWMKrZc5jzphNrgwGhnSVm519vfxdl3v", "VseDImtApmUyqQ8B F3lM3ebtTF8m0rWxJybMM5YxoBco27", "anzpNiyyz7b0ubayVyUFE5VJjFARzkcgqdLkK6lpBElf", "qHhYu4hEs8UVWU3O 334r2Lyk KwyGEdcBnW2iJm", "xKQma2T0mOhUueSuOwtvobw Odfdrgol2ssly345gqzhCMx", "jY5pW q4y0", "rnYriBa1K0UV0 nwxoU9QD70aTA6oMGJENl", "mb8NcOWndKiPDBPYkcPHF6oR", "u0ZCW7iDfcpXc64BQJmylNYmPCp71u2xE0fBZhfua", "BBunWB76OxVSnNKgzEkBjQaGxai", "eEcA5qbhVyB8kxJP8dbc", "ZOkZZ9Mnjfg", "m", "fJGAR9cmfvWLiVV2sVAnGOqq", "rP1", "HVosWjqKcAHnzx i8XQJBUDMRj", "GrTSUnv7KmWXAI6", " WSiPrzUH2VfTJ5FO8Turk7", "lLS5A7OOsQxoQeRVDkZ1E0z8wMEK", "8Ti", "bIYrOZ0qp3erEBv", "CNUBX F2CCzo", "x10pRFrn0DIN", "yhDqgO9JiSoDh2RD9NFc3UywaQerWhHdAhjd pEo", "d0n7nCDlI4qeo0VEspeuz3kdyEJ3ALn5jIHHUpUld", "nW9DyVCCr5X5tezltddQmO6kUoHHkFOdrtv33aax XzreRBT", "tx3lbKAygtG1ftPVDawY1 tL jGMCs0ykxBevpg94a", "gV1U2whB Gt5RA92bjjjdht", "D1IF8wUrs2CZi", "wtoutuhnEojp05gtQfQ52jZK4KBxzqTjCk", "BqyIvGrJupw7Ei8dtsRObRgTVrjs140", "3HwyWzdW95 to", "cG0ziUxL", "vQnhdy8UiXeNg7gQPZjN1CV vqQpQZyE", "FyX6QY6jXpW0VVouVcXna24mv5swPuNtv6hkpa", "o187pJGf7L8l3Ua2Eqd7N8B8Aj6saXshRujBBRHsjYv8", "Om", " nbHYUqrUlWMW9E3A6kxCclztMxnkuIn2pkuWaUvnRO", "eKSRjK17Y7TvApBTMTf7zANBeEvIjYzJyR0zmZNPoD6QeGAln", "XhHiiPDrDW4T"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"05", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "10", "17", "24", "27", "33", "52", "63", "64", "70", "71", "73", "76", "92", "94", "95", "187", "334", "345", "519", "569", "700", "1403"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> text = {"UBt1ycW01HshMPyLui", "4rW8", "F6iBTj2XWX6YlKjJE flOsK0AHUeBGprLT06Ybw", "bJq3iraOhJfnYZIO7NjOE", "APhdYjPtLew05uJmi73NmLT3LIBy8bbr8Q7", "nsZtKZYHDrALqegdOnnsFC4KlpniDC", "scfJbeuJjn9Gn", "8CKekZ3xmHrHFLrWPQAYdg0j2o8H 5QVnVKoZ", "f6zDJx7kYJqhu0i4E9UuxtWNw6lRnN2On", "NdA", "WOcfCMjQGth91esN8BokQ20ObpzNUib1x9ng2YMMUx2b6yoW", "opbUoMWIEPiKWkxastl9UsRfaCbPlmzUpRCRFzkvtipXe8", "GRknZgj1hsfWlYjfr2c6Hi8zfMR87w izW ", "3LuuIjS922D5d", " wstFZqRteIM1ebnZBUgqwfwOAq4MgVca", "qunITcd9Vk5zS4JYQoPhB4C5w", "K VBPT7UKsUGgFq82F1vyjJAFML6WKJvDJ9AJ", "XlPuuuWtKkP", "NhZzZglQT7Mofu3hi7u6RQKJ70KF0OamTN6D9EjqIW6L72z", "l0cSGm xhVhjHNc u5MOMZZ1CmsupHLr8llHHLWDarpmm", "eQb16tA2Rc4cFPMwULVhSUuW", "oEXKIY1QKoze2 VVsbjZfeNxkj1B", "YbzguGfH4JfQLqkaM3omx8mw8Jt", "u1PeJWCtVUgBEu", "Z3XNb vxRni1YuA0pzxdbDuR5e6DCPxrzbdNMfrNSRzjVo4r", "jjUwDjF7UF6Y8ppxvo1T4YhaL4EyQPGU1A", "TNoM8IvaeQ51JimG2I3nuhEWPMiixJlxdHPtQhjN3zw", "mEzGEZWEN7x4KgSIZyNJRZL68MHJY", "jfOracMvvY ", "oMS45GUt5HN8zXnVNVv8GgHHlr0b7ZHOmD7rmZW9nykFab", "c7cFpCc82YzNUJJkfxrI1JoxaYPQgK9Wnzd", "BsAiArZIpZwxcDJpdWUfpRp", "ABWqaFzRAtK7TNOgCP6IqXy7ENb HtDgTh5khekOF", "Tsk3IOYj8U5wExWKjRPEHbe3J5B7EM19rjAXMJayIRHwCe", "JJRARarJtI7IhLfjbFjuAQTa np4XzQSese", "J Q9ifPA06FAjrD", "MXji1e3RCUD7DxOrKzmOEHLBCOwk7qTxd99LCkQZencGLPAxi2", "tpucM6kN1HnwyerTlrlpDUpxlMQOmR3NTQwNcjqwC0Gi", "B0Gj5uohKDcJe"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "06", "06", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "16", "19", "20", "45", "51", "68", "70", "72", "73", "82", "82", "87", "91", "99", "922"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> text = {"muwfcwAvPajJvLi4LCOcGEDX4TJWNmskjBPpRqdWpg8uDaMTe", "dsCnIIsyrjzL ueV5XGpJJNCCn", "lAcA7338PrMZBWOd7PoALW 8NokgM 6ODMq7ATD6367s6m", ""};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"7", "7", "8", "8", "6367", "7338"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> text = {"kqBrd50e6Vu5dhimNM", "BsumaQehkA9bZJP67ez6Y2DghoIWOucaLrBf4W", "4SkVZAIniK56r5N8XdsEinBOm9vPfwx4t9ujoLnlY", "gxtixcPZ4sA", "ffxcr", "ZlwVl A158z", "X2yWKKFNRbUywlMD4OOXm1HD1", "JX8LdKKT8TH9sdFuXquFTrOJwY5raH YwP", "B5zsH 7GgfEPrj7WbXXEa qjPZVKFvmGsP5WUuhoty", "du4NZVCFhEh Ba2IOeDpD119gUf1mGI7WkuDkxD8i6E", "9EiOcI5wGcSNlNkhNuCv4pu0ojX0she", "em6Z0WoHvFGPTlwVECKj7", "eLHj3ial8VSuSebTFkBLZOwj1t1qpOj5bWsVBTo", "DqNp 6LtcysxKegQhdCZoduVbCAr9pCaDOF", " h3mhF75IQ9e7zE3"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6", "6", "6", "6", "6", "7", "7", "7", "7", "7", "8", "8", "8", "8", "8", "9", "9", "9", "9", "9", "9", "9", "50", "56", "67", "75", "119", "158"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> text = {"ZlZ1H8ncajtnvZXtsefYVahlbZ8yUC5UQKOZArmBK5U5rH", "p89M", "vXlntViG0pwzpNqrQk8udDj1zEJlferb", "azyEO", " 6WsDZOdsH9C7Ish1dorxbFBI2vSZC hoCtjkMiIf", "tC6OMfGoAs7j", "kTt 3Rlt1aiAg0bOaCKldIc8Atu5heKpPPr4U", "73JVBJEHjRByjNonog", "i9bCmpVWl6ufXZVksf7kbAjT7MqLyNcZ3E4xUxH", "zfJxzhh6h4WFdS0gDPuLH1DII5IS29AMy5AyuLs641FoZAp0W", "1ZApxUloMRSYd nfXi6y3H", "AKYLgKj9skHNO15JZZ2GuLGo ", "iaKvsjfu30eivsuGLyEuYX9zsDoK4GQl 8WImGtgoxEYxh5iFL", "W4ku2Yv6lHPc", "yTfa3FCOHXG0zF4xVfhATJuh0UFKDYubICr6AakU2", " cZRfjCkGOVPDKqyPP", "Zkf", "Xk08", "ahlwy2vgcVfAA8lWt DTp6b36bDrsliPlO8NskIwxRQWGJJ", "8v2VXU5oH9f93yjtSOBPl0EUa5iQLVXn4CHjwKgdu5XC9lN", "", "JSbL9OW0zVVt4x3URcPP605FPS 25xgR4ymTkih", "QlIpN5zGuOJyfjiFmRrVCFUiwr C4gRB0yGl96lkcVQ2v", "L1x8POcZ8WhEiGPAgn5iyQpTQmbEv5BBUlOlAJOFvrQORb", "QmugAPZRSVNpO02nKZxiDY8x0TZMEwlpoa7IBxw", "3Bn4Y7bJ7xleckzqGV TJIqS YyxLk0mPY0sV0lM1e8r", "Vy", "ZsiFvQ0OhLu05JvjRnv", "mgKhwNVaSGPszsoVB3tuRNLXNGfIqUtaJi5jZewghuIle12"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "5", "5", "5", "5", "5", "5", "05", "6", "6", "6", "6", "6", "6", "6", "6", "7", "7", "7", "7", "7", "7", "7", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "08", "9", "9", "9", "9", "9", "9", "9", "12", "15", "25", "29", "30", "36", "73", "89", "93", "96", "605", "641"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> text = {"bI3lx8v1jOCW2y", "lXYbXseqjwL45M80l084 Jz371fxyCQNVioGd", "sO9WL1WiHe2IRlbOquPKP4kZDa6MJo4KMP2NOcQ4eGoxeWu", "jBWpCJlukErvJqRMbkvaOE2wm4L", "xvLVON6RJ1haFqvYYpQkGPTC4g6fyywx0SFaG5 NrY8G9T", "JmxdNV7XQiKcIf", "dU", "", "iiejx4TwcqLIVD76uEgaZwGPOZd M2zX9F0xBjI", "m9V1t8L6WN65SzoMAO38Zt4qgMB", "MzfWxuC1dRxfsXjAFtd9qY5Mmof4HxO2trJVtZ H", "u 1GwZqg1rOTPn3bfsqbz4oilOIIeVNBRRecvwmma62O45J", "l4G5P5vD2snQnZcmi7AcNRcIckbbY4Xx", "h2AxCnqsVW0LKpzbqHcIY6x72iesGsVg4j5gMelF1JDT5h", "VDb9GBafpU9Q", "NZbjpBWkhM5bM2tD 5LRIbNjojvOpv9JcTngMqir9C0y", "WL", "vJFMQX3D0igAoyqIb2ECT1twE0T6Lq", "YOlUsIP6xL4rRDFd6k03mCU8XgP5Y4NLfR0cuepaDe", "qkNpEixoFtiAbNgDSmXaq", "VLIpkY bvIeaBM7BrvHCeLDyenZbYvI", "BWW108npa0z9gGalY", "aahwI11SuInC2", "3AP2PQUV3rp77Dy95o", "n0SrnPTWJmv7opmeSmq8xRICBBQDyZF", "QOFbyBkx", "A4UZspCLbbNhc00Hil1MjIJhpvHYHFYz VS2C", "M8UXnBV2umxzsPOPDvE9cfNG 1Ttwt8Qcex00Vu", "yEV2TK78jAo2VwVoL9b", "6az3lQ8npmV3ZvgoR"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "5", "5", "5", "5", "5", "5", "5", "5", "5", "6", "6", "6", "6", "6", "6", "6", "6", "6", "7", "7", "7", "7", "8", "8", "8", "8", "8", "8", "8", "8", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "11", "23", "38", "45", "45", "62", "65", "72", "76", "77", "78", "80", "084", "95", "108", "371"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> text = {"1plO3GHZiZgW Cbp5kvB6gMDoSBRA8IQI09OEV4iM", "Hbw594ZPSO3NXQ2JzKnCHXbaNQ3Pky", "DrYN10aJdd Mv9Xn3kv7nSBoJKPVKzRcdgCRcVP01kjH", "Vo31N8I7h2wgGo", "Y", "e90ZjwCusgxFKwKXGRoMcQJbENt7lty2bn", "WTdN9IUHB9YJvxJP9gra9ocCttPxmAv3TN8bZ", "Rg5ED7Nx9diAwFpOOlcoKsPR1CYxy2tmliu", "cYLMMzGY3YmY", "", "kVNWqjDqZ4skRfUFGFTG8Z7PP j2oThpbtt", "ERwsXJt vqD2or2JFEM8rteW1 0pjQ", "nlNerV7TsCIL3RlbkyFInVZiS74", "AM5vSQZw Yz2l93mHwS4zj2MMRUpGxebUx", "wYijCYuAZy2noVldeJJUGT3yblVjEzh3mVqeEZLCioEjZyY"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "5", "5", "6", "7", "7", "7", "7", "7", "7", "8", "8", "8", "8", "8", "9", "9", "9", "9", "9", "9", "09", "10", "31", "74", "90", "93", "594"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> text = {"L5KWUIAsUIr6Cj LpfGnlGccbp", "YzpeacKZg JHYDBOPJPYV3kd95QaZXN", "AiSIRbNGb8swnhWMz7jdp26s6j", "fwpxmzgU7eH9COZzNxREgm1qu57wBAOJMcf2HqWFuu", "NsV8eLVnich0", "IwJVqWSSR3B4lT yRpzcmnBwUp0ltFWeYrsapn", " z3PJZIG5XqMcGBv6O", "xNTuQvNCI23g", "owNrzHL", " Y7BW v14lkPVA0iFBRGPA", "CxGhr819UvKUZ3ptIc3DPqAFYetm", "dOsuQqaLCbWS03RSmYNNiWYEIB", "it2dMtgqZF", "Z0LqGXUh1hpx90Sa0Vs77BFRg NCo6FTPv5MG", "E9NDCJzz4uvrnKfi1H3ORfahg7bun13a91wfvdlkPtL0qIIwBu", "0RecbuM7BfUrY"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "6", "6", "6", "6", "7", "7", "7", "7", "7", "8", "8", "9", "9", "13", "14", "23", "26", "57", "77", "90", "91", "95", "819"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> text = {"wfad", "feenBXP0Nr9b0uowMYvyJeuBJ93", "x0gtaiogHpps", "aSuxqJ", "JeSWSSYxchYH7RcxIKaSV5KPjEAmzT0pVg93ucyKwWl0J", "wkw", "SEUbwckYILt", "L2oikdWrHJkbvAxaLZMNvPr9Nch", "aYwGhHmNqAfXwM9Td4ivmJNpIlPhYila", "owu7myK1K8lzY5MvUCjBJ7 c", "s9v1CvDMOFGPh6Cb3FtKPN", "vYYaGz3PKgLeJKOMcU3t0n2DqWc0gQdidrxDcAvSgjfwy", "YWUF", "U VTW0dzJTgiNh", "Qy3FL", "1NkjezG3FX", "u4ZY8hKO5wlL6PKPc6td9dh9bx5b 5eoIv", "E8WnDfBsAy7J9HZVKX", "P fHC8MCuqFmpofBFxwmFu sEGkvudxAg0fdjpb3hGZHZ1vwR"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "5", "5", "5", "6", "6", "6", "7", "7", "7", "7", "8", "8", "8", "8", "9", "9", "9", "9", "9", "9", "9", "93", "93"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> text = {"8Cr55Vd8", "0xuMMlXY4uyfco6LNikD2U", "3EvBCXzPwvMipIrQjeTMXs", "HGWGqGATMY52ayeMItiyTjED0PyPH7MNngFpPQ", "cnuSXa7ZEaGzNdsKXfTmizewxF8pNfrbj1BrmZhPwbOS", "uedcvRaiV53nb 6HPTXX06Krh4M", "9N7da9ijtfhe", "DrG9hJpP 86pDFyQbCs 0L0DH9Sz", "NHWccK2ZZEQq cHMCx", "Jd7vQ6uNqj YYRsDYAUz", "vUavZxpvloQkthSg5Ccmcn5l6GbAPTS9ZRo7U", "f", "43Dqb2zW7QbDVBcDqp98Qu2rPjc3r5huNDvOlRq", "gyoilKlgRjpn7sJ", "RdDtMVwCVz", "tH1XbCMvuubqPTCG2", "DbBnRjAzREA9sqDpwVl21gPXHF3VpmE9ipzww6M993", "vJN47UcA vGYSJd5W2An0TFwFc1IWU9pGSYGdCQVLyvwU441x"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"7", "7", "7", "7", "7", "7", "7", "8", "8", "9", "9", "9", "9", "9", "9", "9", "9", "21", "43", "47", "52", "53", "55", "80", "86", "98", "441", "993"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> text = {"fRM7ahJiY8eQFIJOfhzoZPg", "a", "zdI8yKCQvUz2ZKGKKd7M5PxVNzRv", " 2OfZJqvsMe9avXtmCCgNph", "sEEwVVWOViOHKI7e7XYWJ207gk1Jyie Q", "jr3aafw25xOSWC sA7zsXmK", "jqBSQZGBrbZBDJstMivKLXz7l9 9hkBTOqTUkr", "i67xXK0n9dwEfcdq0B4IczvPP", "", "ev5UYTSlnIRY5J", "28Xhzhlq7jOYrsY90D50MFh1Y hmQ6LNAVDn2", "FvB2a2PDyJgHs1J", "Lbz5se6kScA1YtwEgh7ECLO2pwLwd3be4W348wc32Mf3FD0dW", "RGSMurVO1Du0l", "KWAZknSin4U", "GM5NOMfXK LDfJliIc8NC3Swicp8Oyy7NvFfDIW8S", "ltX5V TXDME2Hp5YtylN", "7iuVd6KNTSY1hAdkhWlHd 7FYe1Xnnavu8Sz", "GGmUF2huM9hHltMNl3bVHT4zkyWd7XkAp6zs2U2", "s9w88F3qqsQw3tWEytvste", "67dr7AqHxol0hV6MiQbLS6r6vmn1FzBMd", "2rFCfsCQFpsmMSY5dttoWyiueHZ1PN2XIFhHZPwF1MARoNN x", "7krNOHkqWXegTZaE76Mt1sRxslUEF5vzViYmPClpgtLX", "007SK6cUaGCjz0ySBgfFbqqWSFX7v5Il", "FeNbMjiK8XAp1dkkzzo7mMvv", "xrNcPSZFVX1e3mb6bRx0PY9I8hlOUVxVbAc2o6dquAv7y4K", "zem45pqTJCv", "t3Qy ecx7ab zUi2Iqtx", "N8YIWSyRe6Y0", "lcX", "IMj Bge0EzCHYqCmq TABmw1dWLj", "j2A3u1azip4Hz", "9jQ5BG2bHuZ9SrtWEUcCSiREUz0qS1L4QoG0ab HtDv0z5x1Sl", "PmKk", "oA 0pCpCMkBSlbfmZgQAiJfAuGr", "AIZ7lxHmUOu9chOLJmFziJyncSH4J", "AAYAXZO3My3GRDkqn3i", "y1VPNW5SG4HSqEA47ra", "JcqJP579CpFS8R", "oD8Hd EYqAg M8hybMi9z OoE", "RAy1XH4uESZM3fkIrnTCGfS oY7exfB4oNDdBqqW", "dxbHo82NWhDuBmIWmX 2EbHAUt2ld9GcYulc", "tcPANoG1t5X1MOYekrwNuC1YMQNZWrUdHi", "NHi7m43YAp8Mybj44jnfNhqy9Ta", "MbbfJz4ujqo1AOl6jWthRbZTf", "5EW3p GE8GIckAnU9cDn", "l4", "r6OzoZLHcsdK7O8JyeN1cJPZh9TCzk3Txjm"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "5", "5", "5", "5", "5", "5", "5", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "007", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "25", "28", "32", "43", "44", "45", "47", "50", "67", "67", "76", "82", "88", "90", "207", "348", "579"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> text = {"QfhZHn5tf", "W5EIumz kt5NWOuhAANhTer8x70Fyk8XFWK", "Vi1UkhP0Ld2WpNPtuqXsdsKHBPNzGqwizFvZIBbCQ7EYo3ZS2", "DkM0WmFl6xHRyeQ6q9tbIATg70njWRVjYzRgxUpF3Bbsr", "OdT9", "Astlx", "pkfIHSu H8D1bakl3ETJ14IK"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "6", "6", "7", "8", "8", "8", "9", "9", "14", "70", "70"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> text = {"fdp", "2hEfh9kyaT3rd4nCmfKNBYxIZK9jX", "f9s9V4Iyn4gQiXOCGQ7UdlPZYCI4OqlQ6pqx3Y9It", "3cYRb3vpyDiMxxxXZ1YDVr jsPAMh2GdULv6zSKZvFOwP5p"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "5", "6", "6", "7", "9", "9", "9", "9", "9"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> text = {"4Em5xOCVy4PJ3lT0p", "tpglYp1xhqU67s GRybz6", "2QUj46zA0GVlhdre", "uHAk9aFtQ60cOfU5Irqa6n9po4xZerEamc2r", "", "4G48V2jZi7d9OmB5aWM641CnlPk8rO9yHp8gJ 9TJn", "Cn2FwTRgJRovNP8Y8SCvs0bkXduKq9zVoxLeenm3ArqL", "bJyKCX3KBSxC5", "pEUz0dy2mo BCKq15IpLvflpP5bfBWYV5WovwxfJ", "XT2KvTgnMDF9TiSWyP6Q8kEf5d3LbZjA0S6Hvc", "fzX1", "9XF2umtOP835Op1EsNKpwx E0XjSFdJysONX", "d0oPd355X1zjTevbBQhtgW7fgrCVqyzVjS8nlkzcCExUh", "pxuZPjhBRHiffBNoYFhyJDetNJZGrfOL", "rcG90Vrv8zx7QRWS8 cQfZl5UFIOmf6K", "nRfrRXTyedwNljeDd79oGIkeXPwlPRyWGj", "lPqnWD8LrTN9cGpLUkcFjvL21O1KPp uf5i6JwJ0Cdv2", "b1xHVjoUr7JCCWxohFpre3", "DWWdoRDYu9Z6wPXkjBZtHOUNJCJii68UsW", "qJSCmmmROPsY4Y6Cw", "IccUAiLS6fUqRI9kXSStQr1X51Td", "AED h", "5VFlIJUvAHudLKswmaQKB6TxuR2rcD7cZGNEQf5KyMTHQn", "7LWDiwcBwCYe1", "76xqmeOaMnKuFV9ckkSSomxn", "iCmZjQQYM", "kjb9YuaNghSciukiTAg 2L0rk7pKedc1TdW5K89D0q", "5", "pvnNogwUFNy4lTs3C", "LR3mnfP78JiuTS", "HXj5c4E59ykDT83CCrj9RqQZY2kvox95Cmk8iMagGCJu9cCV", "zvvr5YCW6Qdk", "iXykg0VaKnV8zP3wf9380p3", "4R7nSw1ib626YwxOrGvJURTHlO5", "ajfrAFkQh7ePXf3VGhW4TRzrXv", "L8oipJUXnfTWbehUfvSh", "kpLc4HnazSDY0Xv9HtEwFshYjV", "GyqIc4t9yGVapd3SYXHzextHC8X5R51j", "AEsP4OSgpnocZa46jXS CqZ5JgjiJp1dg1PhuSlVJkZj", "Eh8NoYNLXGvxK4h3vfYaKE7Q2iHMb3KBIwYIrC8dbtdfj", "tJBhKuFQupDsFwjQn7iLQtYTgPlPl13BuGbTiiEhb7YrggcH ", "eJmhFWmzDUtWeySJbpNcO8z 7bhNCsB93Qtemof04g QXgf", "Te2bB dY pLaO9KXUC1J", "GqfHNmLPKXtGKOXK40n qZqAJvz6KPoz9uOLPunrU", "uUsBF2s5gqWLMx1kCZz xce92WOwOI3S7rraN5", "RBdu9VRiogiH i9sQe1I", "vQNOX", "y21D1f2mGkI1G6P8RVaBHEWaL3GxWEH7Vph49hXJkQ1JS4", "W RAFKpAckZGG2vBGGh3nrNxY"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "13", "15", "19", "21", "21", "34", "40", "46", "46", "48", "49", "51", "51", "59", "60", "62", "67", "68", "78", "79", "83", "89", "90", "92", "93", "95", "176", "355", "626", "641", "835", "9380"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> text = {"UU67wGKOWV1ck95wMWTc6V0QW7RrpNnvQboBgCQxLZGX8fvyb", "glM6i0tLe6fo6AAzV3XTaT8AMh9UsOjWbmnQFseh", "hOhgVRdM1lHOj", "FPMi9aDgD5aqHIA7 yY59q", "yHW9NunxeVDj3c", "3BvwHHcvWVC1zVcp49gru"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6", "7", "7", "8", "8", "9", "9", "9", "49", "59", "67", "95"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> text = {"HBtqeIHjW9kEV1hVOR6AFjxzvofBT6i", "B7", "BcIvW5x9NEtEYzn0DhGH1G6zC5ZTq5M5t9 r Od1Qu64CGe D", "eN57lWE4ZrnF0D1zIZyNCQD2vkdWl6ElCn669", "QhiD2 74ZI6dFRUtYFDAqiqThrQUOXuRH 28TJo2I", "larIA2Tw8xxnMqenPF4skK76 yJBIVrsMssOeo7XLTc9tG8A80", "i7oq0Oi3QdRJyf2jzDQWZ5Um0K1B17RiYyjNSd2yM", "X69PtyM0d3evsoWz7", "O1nzJldP1O6SG5F6PD4GfH60Yo4v0x", "04F1dXyVAJEjHSrxom5FBPPlAqEor903ob6GmIWsy5A249b", "ewckbt", "LCpiPq8sja6LaQuFt8kouV", "Vdd4lB7KQc06Ate", "6wR D0IjhQk9yaN6bcd61J2t4OYc7fKyNBFbQm02", "yqvWMYf8QytbhSCOsxblns33UnfqdKRjRozXbJV8b", "zs4rAlAlVfWAlDIltlW ", "qC3UWHW", "OLErWakvV9Ex", "R2TU8SqMUBvnVTWGEJ", "kZFX0jY lTy", "Z10fT8LUDyJ3d3NEi7ISSW", "lzs04IQyHxOxJkQ63kCV 9wfzh46vk", "R3lEYkw6hB", "xrk56uPRwioitPZUxorpaG", "C7ZkZPyvZyy6Kq8u076gzlDjMb3OKmd7", "G0k", "qzUwk1ypPDGWLlPTKlXF7FDycH", "1c9aHatK0T7n lHrVnR5Ewi6C"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "06", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "8", "8", "8", "8", "8", "8", "8", "8", "8", "9", "9", "9", "9", "9", "9", "9", "9", "10", "17", "28", "33", "46", "56", "57", "60", "61", "63", "64", "69", "74", "76", "076", "80", "249", "669", "903"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> text = {"jdWP", "LBgv8V73Iq2usvdFo5sFldQ", "jXb", "pRwwa", "M8V24N4g9hrbDJfQvNxG1FCMq7gFU8KjRN7MQO41m1", "DvmjnAD0TtV", "73gXeomDuL DGpkB0OGK", "iQbwtQg9x5KMmMhziy6Doedp3qaPNT11vndBqn8tD", "9XbLUUmob3crNHiVWoVaOBXIPcByN9UFcLL1mcSbyn", "B D9rR xrn5l3", "7RgPG9Dm4IhIVImG7EJ39HKePoKJv9f2BFGNTVk9umocNUdiB3", "MP", "jjtyeUUD6KLmWQhT6mFl8maj1ZZDmRL5bn0ArCe", "5sqFbEJxtK", "hV5lwb2F4Ov0n2T2ZJcoYeN m Ch QQwVYlm5QNS", "HaYXxV8M2BuyehHiNjmeu NlIJQ1BNuyNI9uSYxyVRvdSv4GH7", "pMPi", "kzgpBF8iDxd3ESZwGE08DhJoEdZvyGW", "H9opIPCfimbiU X0 el0HeeXz", "JeVyCxqeUs5OnhhT0 xL24wwOSXBqf2dp99cg", "gIoG0ysJFRfTMhE", " sk9tcOZ2eR7Xob IJzFM6x", "As8x6pOMpFe", "", "Ml21qf", "PBvdSRFj3ulQTNNKjVtSuhmWxroebB2JTK2ZzB97o", "bo0JMZNWOww6hy7yVi4c3fMmh4I8ECZ3O5gZLaaIWmc Y", "AG08jZT4OUGxXna FYymamEF9AN41pAFuS", "fJZvQxmdvq5vaeEC09lKAy7kJGmu", "ddhyBCa p39b2xYTWrLxvZggEHUxNvF53ESgfewXGM6fI7ieek", "", "vN83L6XKWualFVxbPHZuJ6ijZpUiPEXsVdX", "8ARLUD4wERIcjnq", "n 5IXpc8XXR1B6hDX", "", "D8Lphs 0Y", "jY9LCQCn2rZT7rgtx6tHp2Hviy2DfsUED9A8uOdYRyGGTHeG", "DMKAKtfIN111ZrSimEaJAq47nofmV5 ah499JSi48yEr5", "FYmroLwwyX5yB25dzuWKRLJAG", "oIoQWeXdeZT1AfOVV3kTwuL qsPuaKhBq4gEpX6Zykeck9dG4", "sLCZpQk1ODQUU9OUNkJoLdE1Nte2M7V2o22L9", "Xn4FN6orAiCI6gORlF05eRRttX", "D41epyLznxrc", "mYptJSJXKRliuFoR fkY7sjEWn7rny8 DT1ZZ7", "ati0np h", "3", "TwGNH654a4bHh4itVcXOLtYbjXZjVrEXarkKMKijx0aPhrx"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "08", "08", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "09", "11", "21", "22", "24", "24", "25", "37", "39", "39", "41", "41", "41", "47", "48", "53", "73", "73", "83", "97", "99", "111", "499", "654"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> text = {"9642X6U4FhW3lE2Kpa1FajysJc1R5RBehi5V", "9NlXdV1", "v5UQmNaqVD S3duAodujX", "8pRpl", "Gu tbt", "hZaV5ECB2d1srvz9fBD5BORG", "HvDqoLX2acPwNOVJI0 Ny fGyYU 3pOm3hVyWLz5", "RLvHXUug1Vd1ZYhSREx5", "KV3Dm2xAZhaqtYcP5rLVdV", "XQCEz0cQx1kzafFEcZDKaL6sUj1SqaZLk89o31J7S", "yiPlNI5v6l8SGTuoUXntaxSxxSs8wiSMfjGIIEcUrsehz", "Rfbf5PBFhY7WPvS45 DRXP", "p9uirGuyaSkWh3A2QYPKT8xkHnIxnlXn5IiIlthqRG5QuQQaxb", "NQtKvja8KPBNF", "r6I4p7f8KRdaezfKkZpxyKQAh D7cf03FFcF3RYG6WbDKcX8s", "6fpzWBEfY3yFqKIhcWbAbMWTbBahxkfLr2qcVYwZ0e75wIiA9", "kWdXbbDUCxcpXO9d", "s8cUKQo8YtejsCXHmp8K0VkA3HR", "4o4JX4p5R WfVitEra0dXJOBjFQpQbvm bSIo", "5EefJFVnjyaAmXevwpb6YYqpYQzl00d", "ithJ6oG7bV79mDtAG", "oRry105G", "pz6ko2g8hdPb3j6JrZAZxzoiS94FaR4oV0VbbU462u", "C1cRy97OTgvdQEisHwozpY6", "1PTfmfs2qHerTfhk0StXWIMiyclRJ", "", "swmzzWnNPM", "FctniO2zNV0lQ", "IgqNeQLexAxCVsB13AOcvxAq a8mVt22Yk9RySUx8", "UoTHULOew7 ZjVSuPOVZn8Un4zVHzBZvggEev O7NBak", "0Aggu46Hb", "WWrgSChNWQ3alYSufOxl29Y78O9Qel", "G", "l0LTofbzNsPJVdtD1TS0z", "02D4QK7twNw8iuluKIVDM3Cp", "BIzstwPXG3i0lpFKorAvf72h", "s8NUFluiBGEdt1Mn5bTsAQW52TQeG rnk36", "5MYoNWFT2KAa69d FbHBWoX7QFqMnpGnGRD51", "iL9Tf2TGOhfZMb5BpsY7", " 8HFtq", "dq4pkxlQ1yTzygI5HvZHyaXVosCU3olrFFqKXxrOsAHu", "1wBnGStClr3AkrzJmxzo9g9yahpDtRIYsXHaIoha", "jekaicxHsr fDYM", "YwygP7if T68nrKOphGSuU", "tr04AT8K02pQgdw05yqoQRPGCtZiVPfrmxclzmmCfg3DW"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "5", "5", "5", "5", "5", "05", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "13", "22", "29", "31", "45", "46", "51", "52", "61", "68", "69", "72", "75", "78", "79", "89", "94", "97", "105", "365", "462", "9642"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> text = {"B9", "X5auAokpX6GPsVJr508oBlEkPNO14rLPnco2lEiK", "0gZJvTUwnLpHHw0cjXo5AqC9OeeteYki ivXaOaRHCpnuRw", "0ql", "T1", "ADLPEVro", "qd6vuTP3ldIvaw4Tq6 QifWAKyRGxbE4BF", "ts3QV62PoA", "Nr1Pp2vmpvy1kCo6QZv8h R8LHPBEEV", "KACxB1G", "7p43X2", "OtWW0rUApnOgDX 2Yks1 O4E3NonVeIy6JcJCqCqspZfF1", "3PSK2x 9QEjlhKfXRMPpMCg0hzs ", "HmXUqjz6BUw5fIFINmfW8LSqv80BUyHap", "KmZ83Cy6midW3d84SxxrxxgdAtewuoLZEiHicqvvO2", "zN95lfIKsBnF9671vsQ7rHUxnPg", "1KvU9njTT97UAzRbm", "3lS2XG", "pP975c0qn4n3Ck8eW4WX8hnqxmgMGbwfWRYdWZnhcqkFNhN2fO"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "5", "6", "6", "6", "6", "6", "6", "6", "7", "7", "8", "8", "8", "8", "8", "9", "9", "9", "9", "13", "14", "43", "62", "80", "83", "84", "95", "97", "508", "975", "9671"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> text = {"8eAJ5keWEf6BaPsqIABfUHAL9z2K", "2Z4WPEk3i2E7x2qqLUZa3CAPVPfJ4OfcHFGV0e8eII7FVUv5", "16xyRWuNh1cr", "aVZfojr5", "6tR2IMuMIaj ", "Bgg", "CAdfMg1jEywgfHEjAdgwahf", "xaMCLBfqu0w", "wjRYugq6k9 nVp fp4ezEFZDlTEtQOUHvX2NbgsWGkTFj0ZkK", "Khyh7hw8cL3VvQoPswgXbnce9yYO42nEeIB4vXBuwgxSTjhkDn", "5ZGxByV0k3vKwy8r mOEjp", "OUkTyMtU6JzZkRBRjGHBZM5n9tgRcOq26rAZ0D364oaUz9LD", "vXvF7kyCiC1pJyB0JMEg7EWHFGjmQN", "OkDeP0r3aIDCjmepqJzNk42Q3N5mQZrWC75sa6hSzK", "1oRH1PhyIvUfHAIj"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "5", "5", "5", "6", "6", "6", "6", "7", "7", "7", "7", "7", "8", "8", "8", "8", "9", "9", "9", "9", "9", "26", "42", "42", "56", "75", "364", "516"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> text = {"ofUmYmKEXD44PZA", "Eo5ExXLw 8YLi7OICNd5", "nM5UwBSAEO", "fNY7BzoRhE67Mm3knX3VJw", "jo6i", "36Mcgpw9sSqr 38GvtAIcEMzptRhht8ZVTTzE", "", "x8tqqOACiV", "DNkGyiZd0", "BTNu8FFr8fvs5Nyp6cLwJxmrMTqW3lHwt", "neQS1O9eicSZxJ", "GRDt2y2LxtbozKpkUsUmwIXDKV74", "P", "XYPW9f", "ujUfjqyEtjhmJDmR9pk6OsibCeKgbgsxnaeuU4", "B62qFMLc4qFYmDm3nzTerx C1nVS80NLVysh bTvvxIHyooxa", "ogNoHGJY", "BssNEE04sZ0gihpY", "LliZzUaGxNE Cm1jxrG0nPs5DWGbgBcAhk98", "BxNxWZ4nHlU2m6U", "ZOaKxUPS96O3lOTBo7hw", "UzYsuo5WYi6VZRMIIrjG weaqc5bkhoJcus8SjvywFuqI", "NcSI0AOzVoyi8h", "FXGYJ3gMnfM2", "7YXuKGvShInJmB80i9HBINyKoreibjBOd8Ew2HJ6", "7XdfQ4x2Jtu", "zNw7V7", "", "00q sG3ggt5Y8UwhkKjKA0SW7tVEbA0hcdzjiYWdqAT0GNh1", "ZbXIaVPo5 fYFYknM7vb2dc", "b2XNA", "XZgRPjhTjGMSml6HuUD xhDlvqeYrvaZPs4", "XWt0VpzE6hCbhecnk7EBbVr", "iO51e0yEfRexwcPB7c76B9Fko", "pO6jjOX4ACwhtAhHh4171Nz0sl9soxG", "Zfeouq9xPvHDmvHix", "gbHDuceW", "HSnHY0V28p", "T6o2WCTgYQw7acC0ko cskEdWZxXsa5kus5", "6HympdU34KjsKVyam5GYkPhiIkihakW2ycC1pGhhsrQzE", "D6stOOk 0JIGNOE3l4eBdJVCiMNwETuSMxcIAkQ", "iYxA2U2sKH2PQIaOV8HASKTprhPKhLD", "rbd60P6Nds", "bT2FI2AlDNykyoUDCew2"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "7", "7", "7", "7", "7", "7", "7", "7", "7", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "9", "9", "9", "9", "9", "9", "9", "9", "27", "28", "34", "36", "38", "44", "51", "56", "60", "62", "67", "67", "74", "76", "80", "80", "96", "98", "700", "4171"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> text = {"JIJd B8DP39HKu6hg5kAhjqlim5g3K", "mZfba81WLo", "HCaFZ1Soxe", "yeQEZsDPQA", "ENIWyxMUpPGsI2", "OtU7NRCKjuAAUBl7Z9NhXN2uzzaCaI9", "", "xWYTeHVB7Dlj6I3anis8tLrvZLCICzsJk2ammFVri", "amEGIhza7kqM7YrkCerh", "PpZLlWkes1IStjrZZAxM", " 3T9ZdPvmvDcxNhoo48bLOI6907fkIPPIA4", "AYsv", "GDtFeV 3CmyOHQ4OOItq4iz4Mjvf5HqaF7tkq", "jF 1rSuN fuSZbrJBMb29beTP f2ncIk95 TC3", "l7P8SDQ", "jVSqmjos1VWTC0TTn9mBENYuGo", "CKRWIlGAk4wmQwpZHJq3tRiNRM30j", "IP5lN36Ml1o B9h2hDHxHJreBzSky", "UdqO2EIN", "f1orwTDEP fgn0Q836saedOLMdVe7MVo70cypLV1", "UNWSZ6", "F9JcC2NuJ3TaBVQHZ", "4gUpgnXVDkgb5IfLr9CoZ44vjGc6lTdNoYWO ", "VqQt7 uq9nV3bFJk", "hyMAGsEYfAzPXLgDnw96IK5mWuYn7Tzt GOv8JKfnntXq5F", "Qx", "aMSRhYqEH4RyRfMKt1DPoooJU6aGbwmpWnuPN6dg", "e2MITxTObkoFz5rKdLZ9KkLfkcIwU1yMmsRFu1FU7u3aC", "sDvzOjA0X72aJmDq t5BhcfJKDKFa2g4jxOHmLmS", "NTSI"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "5", "5", "6", "6", "6", "6", "6", "6", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "8", "8", "8", "8", "9", "9", "9", "9", "9", "9", "9", "9", "9", "29", "30", "36", "39", "44", "48", "70", "72", "81", "95", "96", "836", "6907"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> text = {"qqQaCjIYPtdhBqM8oplOrk38cn9NfxdTA", "9HGgTiKp7yZ1ZMSnd fJaPidk MEnFC3TDWik0cmfpTc", "uR4", "30I9TOCaayLtcjJRRedodK Pz95QokqYLpngJOtIWLvVzNhNqj", "1kvOhH0PEulssXsHcDp3hKmumdJwlvCXkfa", "qeEMUmXjm SZZAtKIA6h6", "HQcX", "XsDrpiTAngimGafDvC8", "ZXBoY", "s", "o2dqcpSfWUHagaIQywzk3C7n", "uUrTSLHzDxYT7q2m6zjMLJXl", "6GABwhATBFGDZrD9fYcEoqmOYArR0Waziq8fIZPwdjB"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6", "7", "7", "7", "8", "8", "8", "9", "9", "9", "9", "38", "95", "430"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> text = {"uF", "qtWOe 4tOo3sVqp77qdrMlRObn 8zzOgRrjUTyGILCKfPiw", "FU3EhDynIL4cQOAw3z5K0k5lAglrKZ4C", "8uE9ulHPD0w1GIzMDT0yIYsWz7W9I6YbcQmPcY", "K38uKXXpwPNIw0ZYedEB9mGdJ8a5De9Oq wUF3i0zxa0", "Iif", "TVWPiB3QcHSBQTlmiJ8BzsuZjPfLFi4N0PRJxC8luAaea", "YHfRGG5wr42ee7RCRWRLQVfDVtMPNLuuBA5OR", "eQC1pfNpao0rEvgVlh73AyZuBYDD0QJzYiLNBRwHzJ", "Ift 9sM5axoYAFdgUdjqS8FMahiQ9nqUVTZfy", "UCKUi", "R9S5QnIvvin4hOpiz04eD3", "F", "9pVIrqG04KRGfYOv", "le8Ff39IbOT 5HcovSaymv3uGAZzXhONgSA9S", "DMMHf0n9EzFAXuFOXeLUtefknoYKorqxrR3Unn8", "BxL6", "2tdyWBxaEfciT8aEDy", "mzrBFkpXe"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "5", "5", "5", "6", "7", "7", "8", "8", "8", "8", "8", "8", "8", "8", "8", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "38", "39", "42", "62", "73", "77"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> text = {"qcjyXKa1cAokNl", "eEq", "YRhoRzcgPM5oZK3Rt", "U6SCo6qwHtIGFncLeN7PZlRYswAXJV4yy3bShGSFSXp0gDQfFv", "Djg7ZWZXr56dGeDxWWzhJ3sdWymL22gcFCc8Alti2", "e", "bLTGyow0dt66TQEJPCyusf9a4O5QlNiwMzNp", "HpyGcuerk3jY", "Qj6ProV3hw9mUixp4GDAq", "K4amlkBUEFOxaxsg", "9 9fmP0wg6 1HqLO2zBVw02395cU IeUd", "Do0O", "Ixc eOFzBtWmIH77Zd3NI36CMD3BDnJ27s5mFrxce3KpmzD5y", "XIN8pMrlX9KTP4iHDWzIVJrG6uHYZDk1g", "5x5", "0ut 5mESnQ3ElnMZGKOc", "HsyimDzfjs", "fwGaJq1zd6fV2WSonS9xIJWHvh6vSb", "IYMdQT niUI2G4XW0IEXxWaVdUXCkKi1N", "IOODkfCLv4U3c38jBLcriOFb", "stxv16KF1WHuglLZxO4lyx", "wVdmHWU5F4BOVnQGm 6tc5wBrKCWyf8Itvt", "M8E8dn23dQqix3tmYHv8v0GPnV3l6z2EoAhIs8sT7tc1Sw di", "t6UMK7TcLDbrbVWSVkVOSocX9mcI96rk Yn ", "o9wzYqwTUqpAcUtK Th6DSj1n4108", "KMQNoptwcjY VS3k9uhIG4evYqRu Vlx4IKT0IQu1SzFnE6Tg", "fRGLURY", "rTv4pqa4oaWJf75aqc08omllJX", "vk1ryKXDn wJe9oaVCVQwSpLalf6s72i", "1SyMfGdeWqv9HYrK61", "xwwHLwGC2kSKrsH9Qru8HA gsGSHBOD9XaX1OIsSCYp", "skaxapxFQt7UJwMX1IrCPSg7h"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "5", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "7", "7", "7", "7", "7", "7", "8", "8", "8", "8", "8", "8", "8", "8", "08", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "16", "22", "23", "27", "36", "38", "50", "56", "61", "66", "72", "75", "77", "96", "02395", "4108"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> text = {"tsMF1GhtxNzijuezK4uuce", "u", "WpkOlfcEXnDgWGPMjHrH6OngW1wR", "AfPhSP3 3RyUbBD0L hc9PMVPhSbj35CBUR8xUKQ", "8FiCE4eVqhftUnniq3r84M9BR933cL4d", "CgxuBlregn0hQNunQASIrWMz hQ1nPGv8bYoQyeKfB4z ", "apgDVXwbjFl", "COQGtXld3vWU08rh6qqHY", "nObvYXg51fqL9qALeXdnMUCmVFeWSz0cgN XV8rQcUFYe8"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6", "6", "8", "8", "8", "8", "8", "08", "9", "9", "9", "35", "51", "84", "933"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> text = {"mjEKlkBkNE0a d rwm58RbDC", "fzsdusfXT snlbkrGt jV8XLa PLAbYptLJ3aSF1biUhTdI9a", "dq3MDzQAzJ2DwG b", "nOIT0ueng9HPRTxRvtYLDf", "UIyICwDeoxW82qFtYLAb9dH1MWamX16eGyYE1RT9H0fqM", "uwt5TRPXGLsoftnVOuMeHx5OEFgWeDcdZwNknt9miW", "Y 0jqr", "XsDaXQ4PuZSMUl7yluDOKaTv8FlAOI9I", "qsV5cFcdpH3qBR3TUgctAt1p6xEJlGL4N24dBHh t7sLWcxuV", "s5zLy", "yZBZZcay0defaR3sWWqk", "LsUJtXN", "lZ71wg cnkGSJ7EB2X3Z1", " n", "xYDRX9DfwvQIxsBH", "PctuWCCT3fBhxOW8riE", "nQIsVjCijd0m", " VmxHEMJbgu7JZZ1yl1Cf7d5IAB 8moWAWAOSG6KHGek", "H4CbUWL8kz9sx4Wl3p5iDtl4uPZSlm8aMYP", "eseE7aXE", "AgR WD5KQxths", "bAgk6r8L18xkSZhDHdbR6", "6uHVem96z", "MQs82wK1uorub5Txmfe", "yG3OPBmq8niY4gg4kXx2o2N4K", "ObWXTuztuSKVTitQkJAr24Dr4vS70el", "lJIXHbxY", "d1Wo2IG0I3siOEqbbHmT9", "B pHBzedro6B6A0BTJDMamk7g", "WZmroFZqtzUUCqWG6Z1OXZUvi7M5Y8Ha0", "X0CS", "MeXF3eQhW SpMa2wZlwxYnwuxwJKFxwFcnNU CarZ", "SfuhEWvbpSpZGo5eo1H1sNyD6v8Xu3SMymzQ9dsfFEdvxp", "C3QDCbbts19GfUfhSJ4GudV0", "8EuUO5w10ic7BTAgSuS", "lK PXffb3SWBxqApumrl0eMADo5GItJmO8PGkptSSrK2v", "qYBpmFM3Ytour956", "", "DuAkxjz8wP", "9VJ6P", "SWlwMp4scp", "Xmij78ub6BamrItbAFAnEhjhWr ar5ljPdtnvJ"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "5", "5", "5", "5", "5", "6", "6", "6", "6", "6", "6", "6", "6", "6", "7", "7", "7", "7", "7", "7", "7", "7", "7", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "08", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "10", "16", "18", "19", "24", "24", "58", "66", "70", "71", "78", "82", "82", "96", "956"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> text = {"WQb0S9XQXwPh0LnnkE6 OKFGoemDYCe 2GG7gIsjh7 SUZcp ", "hoVvEo55FR1kPuHn8bWM7pY0", "GtlEX", "y5gixoraz8CftudAuY95jU49YMpCqsHEmbbk aoREYK KY", "nSaMTBq4wPbZsCl sUIqT", "QHO t3EiyZxQo40tfXpsvSc9uzIvS1x", "FfUA2qTegKiL8edF7ca8oO", "hfABWNiMLkk6zgTpv1e FcEmoHPK IAdF4TZKFuBtayMvleKW", "uxht6ykpXuTHc45LvvS", "Gl", "Kg3MQJlwchecSwCEzMhka9crOw", "uwYHHu", "E9t652Q", "MrzzHrNTTR4bMQfYG5vV3x", " KPoKISrxA5wRhmFBtAm D9t8JSoe2JuQgtyfR0tMg", "88nryJxUVuWDwbR", "TFlvMghLm64rD7", "BlYRkMwZAW1MRsMZVDbMt", "0OSGMgGQJH9Ingy1Vm1p8eY8a0B2ry", "nMFzTMgzBy J 1GeYUDR jD29uL", "qqTedjPfmmKnzf5vVtTW8kPDY9 UXf8OlnM", "CMJo85i9", "lmo1GRM5OhVBLRWn4tubZ", "Q2h", "fQXPcRC", "r1UpRMVUADe9imNfr5NPz3M1HOtbXXJgAeGaO9H", "j7IBtNEYSYVKPx2Nqxj21MabEh9HM7kXqsl5Q", "Rf UW7Gb9Kmp0Yz9i6v7C tF6HSHHvFfloZO1OBjW", "ivQSMNTSCgj7BaDFx oDhfQQ0axBpQSzSPcxLxEOI", "vas8hyMzXwAh0", "CfsGAy8kD", "2By28kOpLtO1UYeAWTBl7oioyBKD1Hvzzztx", "HkLuY3rOqOyeUAqKZnFn8ppqhtDjgJTcZLkOWzrXR QMb57MW", "FNN", "mGDrjjp6XTsaBtWkel qrj1uGGpSFCcYpHsptAwb840kekVT", "To", "2DXBa7 6Zy4Goi6VbX1ziU0R4LNlj"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6", "6", "6", "6", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "21", "28", "29", "40", "45", "49", "55", "57", "64", "85", "88", "95", "652", "840"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> text = {"XkOmHWA4Oyn8ISKjGEWB", "G0hKnv SYTzbvREDdvvQMkv", "4B5sh1R", "jbq2eKre7 cL7DllhvvcGPeI", "PZieeaPEfjRpn", "K0KdC4XGvpSMEcn7j95yV JMngcQxczMn2pelUTi", "wpYxSNOOIn3ijTew1C3cNzW7f", "VpopgyLqiUBv Z9MsJqwXLojlsEKzC", "IxCjhjgwXsRRn5QgDBOpn6UXdYhgVU4kzT1sbmeAkK7V", "Z2QPG SSLkjxTnbQulfufUZ c CY"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "4", "5", "5", "6", "7", "7", "7", "7", "7", "8", "9", "95"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> text = {"CH5KskYdS2eA86LAb6ZlWpU1VuBhRkOe3hIwy9PJ5RJ8s6dyM", "WGXky", "Yboo3fdGQr", "IAiNnhC9zhUoOWp6u67g9wo7VGq", "BlLwQEa", "UROnJobJX6", "TDrowm3ILH", "a3KlzQpa8QIUYprtr", "3ndT0LJzxxtBYBvhgUfhTWoOHg1cfmvrw1JXga814jNDQKkO", "q P0mXUq2I", "vEuBUdQky0NJS7u 61v", "3I", "e140AbmxHx QhY18O0", "KgnDGBxbuxhcQumQNBsTkZTmpDp Y0D9QvL0Av ENMLzvfL", "GyDXq1xuPyiHSTILW4V6KJBMeFsVwHNK6nOA75VzijDDyKo", "4FD7P5LWEmYgKiFJXccOCiOmA Mo", "DePq40pRbGkdgbLNw5Yg7 FiguuZ2Au5GznDA51", "z0X7 51lRf ", "XutoR 9zTWmJ", "bdsqBG1bSVxRTVH30TnzBkShL N2sKLvd7AD Lm7", "WDjlpDGwC29sMwrnhgcv9C1fDH1OKfsY78XsMmMUA5ZkRj", "JcHQmKHNJfPx8NBwz Twd", "X", "kxVgRl6pgEfONhlUzW GsDnjYKLgMAQGdyAjmcqFD 4oGz1a4", "ZrFGbdmKOAOcBzOql0DmBTrj0y6RK86SqennZT", "lJO475pRgnnLHbL"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6", "6", "6", "6", "6", "6", "6", "7", "7", "7", "7", "7", "7", "7", "8", "8", "8", "9", "9", "9", "9", "9", "9", "18", "29", "30", "40", "51", "51", "61", "67", "75", "78", "86", "86", "140", "475", "814"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> text = {"JkuMJwnNfbtO3wtUqmizG0JhGymdzPvbTz9goM", "J8KTzkeu", "Z3ilQtBWmWWENsS3KY v2bnqmDVMMf0MMjOZKZa1BA5JhjBVe", "OBgIVeD75fuiUVaC2ulv5AXX", "qEw", "oBVBJwX4HuK", "pty8QWlf0kVL7CjHKwo4QvQliHKLIQzH12h3i2Hu1EkgdF", "ge", "z34BRolmoABeqlsreoqmaxJwM", "jXkT", "akSVXz0UUQ0m", "hJmIaWcyf6YjVEuPZxgDztayNcLRYpVsEeL wH34ehDs6boZHi", "mbHTZ4NiCoCIytJeSi4QEk9bJCLuJpP", "fG9ZqoCLgczAv", "Ap5oqVM", "Lu", "9Hxi24 WVoSWbdFIajQXO8NzXNAAMhSTF4dymkI", "deDNvzr27aBcSaDu", " J"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "5", "5", "6", "6", "7", "8", "8", "8", "9", "9", "9", "9", "12", "24", "27", "34", "34", "75"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> text = {"uoThBdS7r7xKvdlA4rcBhnNRWjNMQK E", "sxDGlkAfCMXT Tv0", "TH", "Wcn5ISfD", "hXZAYlM574qiPz1wXcXczfQlYtf3wf0A5", "StoOYecZmuxy2zNICY bVpXbsT4L", "hkaime9MVcUteCq1p0BXAMd58Qf7eV2R9QbVueBgMA2GeN", "2mDNnydDTFYf4g9Lun6eN03Qmt4U7Z0Qewiqo8wwxjlR1Rxr", "f2AxZ2Wtkhba36S", "RJci377iZYl5", "DdKW5bJI9fgpFZFSzeRopMmmlvNDguFDmJmgA", "AifIMCEcmnC4NTFz1CfmOf tARAkq0l", "VrEnLf3bLlum1oOEuqNgcRehuX5AF9", "qhwN8fDMG0F4T4xA3x0cY8SEdl", "OVhEJYqSlMnbDZbXIGFz0hwdB4wI1GsHczfhjHV", "mbvxBnLtbwB3eTKHSV", "D7eq70ONO06afPXw4bLnb8OZBODXfOIyNCTE", "9panQeu7r q", "6CNdzzvO8AcDvWoDtCQYXiJb4BDmB", "aiaaapJSdGiJOrXXNrpdWgww8pJfmzCfK0tMu", "4jh3QxLfVV", "", "JidCzuVf1", "trhNuGMB", "NIXgra5b9aU8FkACJbl", "vnPUOACIZ", "z5rQep Wh", "kGj9L0srC", "KM3n3cYK", "up6uC9GslRNcV2quv41O6MqLlTceaep6NpixkyuiZCj Q", "aBJNNXlFC549bwQJfrKTmRGWQBC9kMjZDOsJ04xy9wg", "IwArDzgWpt8JgupBhSl1RAEHWGkqnAwyg8A", "FLWKXyt31HWG0iIVOuX5Qnug CTZL", "v6r YR2JeDd76cJvc3kTvJV02xNNtyehquy", "DCIOvS0GnRcldQcdTVcRBXwJ7ABjZTO", "OVCIRgki2ehjwczjeRZd r96yJNtRjkzQ8YAB0zoZ4z2jGw4Pa", "ebrkCtZ5", "mlH8AmGgkTHhtSr zx1iGLfQhlXdiLMSsOvlLQM", "ymC7oAgswb1TDUfc gevIjUMVT8sxI44OXFVBFOOwWOdpCZ6", "4TvSppAFr", "lm 4xNUtUwo2Y3QHLacESNztwwbxIzztM1L52", "Y 2al675XQXc6AlR1bqFmm7io2V2CLTYETYaduKxKqnS2", "90YL3aCE3w7s6bqB", "gr1UdOvK9M 8PiTmY5FWYcYOjoYSlhXYJzj9Il", "3yC", "tshf9t", "wd8V3QSNp8CIbQoLNxDZEjs3hFD", "eWmsSUDeoaoGFPA63qfsXiJ", "pOmyWaBrtAYE1fQF1XjepyZwpn96f", "SKPLdTY2"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "6", "6", "6", "6", "6", "6", "6", "6", "06", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "31", "36", "41", "44", "52", "58", "63", "64", "70", "76", "96", "96", "290", "377", "549", "574", "675"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> text = {"H4HDkvKt", "kFP8FsA 81S FJ5jNz4iuwIjbXTyR9wiCNtp", "JHOltonGCOeFPEMPcZaA9iCC", "ucuiJmSNyiv", "0LjHn3eMXfCKQy6cZvG", "cnN9KsVGNcX1", "kWmF", "HsX01Buyl1dweAmlddvs 62jXeEQwR8s5b6psC0wmtIDI4mzy", "tK3K3K8UdFdbsm0OzJtMdVNp7fVrx3XHlM3lfjeJ", "", "cfc2yjAgW5", "i97N7D8tcxi7SPxl9UbeoHiVWDDeRjWtEjTHz8"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "6", "6", "7", "7", "7", "8", "8", "8", "8", "8", "9", "9", "9", "9", "62", "81", "97"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> text = {"Tl3r9WtoHXPJukspdnEmirkURmQMPh6ONj87W73", "OLGSdJLfMVwIqiQfBC6nUGa14JlX1IaD8T3G0hayrkfn5emoe", "b l3sg9NiLIokEU4w8Ej61uTtxEhregbwkz6boPsUNzetY", "o8W0jXekytjwRHjGbnrciaiADY7PW4pHBUb", "y27vGz17A", "BVD kT8iWjn7ERls92TBGNVOPT1", "AWv5FNoSE4ElQ1F6ZThmtyKEatY4C", "XFbYprWN", "sHm1XG0", "3S2rPEz", "t3PfRjA", "odiv5nG4 FQBTdbjfGCKdc91VfoW8GSi0x gDdcWC8P1EsI", "2gwMEpwQYb y2hy70LhDL9anITMK81LX024DpXF", "Poj7huiBV5RkpDJuxLyIKRJSqb0", "YVfM4WGuKKLpnaxzirTz71Lhz2vjRkLQW0RgancRn8tvq", "aUyxlakQwuZ46"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6", "6", "6", "6", "7", "7", "7", "8", "8", "8", "8", "8", "8", "8", "9", "9", "9", "14", "17", "024", "27", "46", "61", "70", "71", "73", "81", "87", "91", "92"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> text = {"hR2s0gue", "ZFp6641KLkJdtpgZnoo9tZG6N5NwgyZDMzFyZNVJLMYmC", "RRtUdUFTxsZB7Rst1jMVg2Gf", "1RCu2GvIK3Cee6Fu72uDkpui9Fauo8LP", "IFksPxhi572xg8JOf", "TJbKQWYPXpOiNH9fcSBQbj", "kP4rJ5gkOlYShJ", "ArXW6Ih4zDO58sPFcirAT", "wwtoh5y7qZC197efA"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6", "6", "7", "7", "8", "8", "9", "9", "9", "58", "72", "197", "572", "6641"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> text = {"AeZL0hCL4BgcuHtzYNusK8mrv", "Z3fKVzpEiJLogSYtSQD IFz9m", "IGY3Gj7mbf2uUlSjO6nt", "o92JDzRqpqqCk6zaHPkNGIDURO0MaeBwVrTe6q7RdTFfdH6Qdf", "FSYuPsbauV3Wh4", "E1VfJzTEz0F3OlL3CTbbFyRUJ4omrwVno", "ptCdMOiB37cVI7351yXG9EceLMjvehS90Yg7PknRJIIujB", "FIKG", "6n6QT0caDMxnEnzgo1C2hex k7LcqOrZuSkCb", "C5NWYAo", "eAoNfc0xFYYsyhDqTbSu3hO3BHWCoDthatw2nO", "0ejXbHnxhTPxmJRTfLHGTELijjzYtCJxZ4t", "", "BdYOVpJIk4fLmL0F8s3OzJ7WYmrjxFsQz6l3Gb4", "YmhvRzxEkBiJ8hNL25w", "wt6EON1WZ1kNBJ", "HsS3qcLO YEp9sVJLSJoYCmTASvgT97gCd2iUeSXsyVHYum1", "TwQ2Rv29 i AJZSD9LVYo0W", "S2qzXJqG7zD", "J0ZCfUil80RqGURmzAzhJ0CbopE6wMvJGuQ4IprZNfW", "jQLU5Da8bkKgwDKYH1Z0FiU7", "K2MCkMRCMOLFrK6lSpfQj8osjFaDSuw", "XlOn2C9pyHgnqprmQ6vyjS2H3X4c6XaRXGyh6aN9yYG8b4 H", "n"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "4", "5", "5", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "7", "7", "7", "7", "7", "7", "7", "8", "8", "8", "8", "8", "8", "9", "9", "9", "9", "9", "9", "25", "29", "37", "80", "90", "92", "97", "7351"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> text = {"M4YrCRsGbZhHi5IEhFuKRsqdWnWAl4DMQGJ8c", "LetbQ5rpk2yg", "", "M8s62PWSA 7YwvNfT", "9tPRdi0m6", "OGaFw5YBVglVqIUtXl71ZAL1Z2", "Ty4 8t 4", "6Lbd6wSXFBguIC7", "y5eCoS0zhO3PJPDADxDGGnhtOdxDzZCyhf", "f711moPxhEGglEtuUNHw5LUIBmomP", "U3J8F9YhJbqRvWfWldYyR3wTAt68k", "eOOygKkXojMVPeEq9oSwyaslMeQo0Gg2", "Xy7BmoNOCI", "u4WJShjssfeII2foL3qH6oHH9rudJ", "D4XeZV E7Ryrd", "PB2r0BLCT1b8tNpIkGh", "uOS4e17YNhaQb5NxA2dfQxXz Y5A9eqKLO1", "LoDmAiigJ2EYD1brG RO03VaV8B", "ukfqVp25qn5uKG", "GZEgyUHPeVDlhFC3mwLbncLE6G", "BZEMQ5RpfJgdbNC B", "cf1fbiQwpZyTLSO8 Ec LulDILqcjHPWCE44KSvM6k1l", "wiUHqBNF1JimHYCtaiNgk", "Db3Tgi0ZZm7dxyxEYnRacQqqf1P3pRQdvlpmanDNi5rqF", "ugOhq7FTrUyObG9N94q53LEmUds0WXC6Uqj8XXu6DHmorhJUka", "Sq44fyOaOVBZSIgxlRmO5TaxX8SjckFyBjGDNzi", "YVZqGKtUfobcLUVFwaV26h7kAcCWpEt IgCI3tM XDm", "Ni95v", ""};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "5", "5", "6", "6", "6", "6", "6", "6", "6", "7", "7", "7", "7", "7", "7", "7", "8", "8", "8", "8", "8", "8", "8", "8", "8", "9", "9", "9", "9", "9", "9", "17", "25", "26", "44", "44", "46", "53", "62", "68", "71", "94", "95", "711"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> text = {"NJGJQMg7mS7W2Xn2IYPA2AbrDRkgncrsO", "wUDHd2cEmz7KaDLdhG", "BMnpb3cB5ruYTCqiJjMuZ5IQwSsfG9b66PzkvghYLRYt6E", "eU4qIQRjFXsnTUltVs", "wcIAfWlkZjodGbdj0tSLiNewr4Ixpr", "89iJXAts"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "5", "6", "7", "7", "7", "9", "66", "89"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> text = {"RikHOgZPZpPgrhSp9jd", "BgOHp3zUXTk3Nm45rrfPECtPs4ry", "X3FD Q6E1PrGAfaozQ86Xv8WhSbfBOjxtlLK62oVF 4iK", "TJfHZb8LvR2kzXo", "wLt21bNgu5hkU6VFdYdDyZXdBM0 sXmibjIjwLtHQNZwL7hT", "M0RNaKLQerJe0qmUqSdNd2 xTiVyZxgA4AI08t8", "oiNIu", "", "Zy", "2tHSBPuI", "IbJouqqa8wf7ZImB67AVru", "idM4oUm6XUAm8L", "8okWfG4UszwhdIhApXQUWv3tQF25AQ0K3", "H7RpR4YetbAa0fuPJ8HxUL", "4sGRHjZcClaUrwkDKLB58lHWlz0xP0iOSozHuxjz", "H4tichwqwClSf2qz9HO8GyggN", "Iy10vP yAbp8mKFRRubtWhCrxx3 4w8RYQvzr763", "wJQ qoKPXAN5xOe7soWN", "OLsu6PUVx6BDJyeU47v HcOoZJn6ExVFtc", "rSkB LLWMcjOTm9vsti3PGqL8ibIwR37ng213Hw8pC1DlxpvV", "kXXW0Opr7WXEaETa74xxh2DJDoF4banxI8wB9Wd1762QdW", "WbZGNFU CAgYvbls5OkC8lpAvIPo35UEMBDUwx1rNxXQzhuBG", "7Dn2AXCpqkqfXWo9UmWQIBIiVetIjFSw9sOap rmXrruk", "", "XsP8Dcdq0 zxoJMiUlZWJ6MK5ale GHWxGH9ld0zD3a5w2"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6", "6", "6", "7", "7", "7", "7", "7", "7", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "08", "9", "9", "9", "9", "9", "9", "9", "10", "21", "25", "35", "37", "45", "47", "58", "62", "67", "74", "86", "213", "763", "1762"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> text = {"JyNUJe6xE5L1sP1XjRuhl", "ysC6Xsqmisfm7vlUbRUwJTDN", " 7DgzMACFSwepIfS", "qc6eodpV50aG3djvbNyAt6zAYz0JAJ9WuF", "NV5CkH Ih L", "pd6swr1csz9e smioK21EaciKva", "3K04zPDWregJw7WANQKPvue14LcoCU", "5D1uto7", "sNRCXvS", "e0n94loP5a3f0kulVNMXVIE", "NdJMQeZPaqiub0UkGpTJEqR95K8 HSte7D1OfE jsx", "r1u4SMbpgviKiUBCLQcCunrfHV DuWJCUwzy GNnU8Sgxf4", "43xGMS6XcHcCu8yPHg8PHlyrGnMys7ujI", "b", "21VO14DUtunrrgGOQNfThiByMnXfWE1nXC3X", "W1csA", "sM32uEONy4"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6", "6", "6", "6", "7", "7", "7", "7", "7", "7", "8", "8", "8", "8", "9", "9", "14", "14", "21", "21", "32", "50", "94", "95", "443"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> text = {"0022 22k00022a022"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0022", "00022"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> text = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 "};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> text = {"a9", "9a"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"99"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> text = {"0022 22k00022a022"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0022", "00022"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> text = {"1abcdeFFt13def13345", "9945efd13", "5efr"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"135", "133459945"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> text = {"a9223372036854775807b4294967296c2147483648d2147483", "647e4294967295f0g", "a92", "23372", "036854775", "807b4294", "967296c2147483648d2147483647e4294967295f0g", "a09223372036854775807b04294967296c02147483648d0214", "7483647e04294967295f0g00000", "92", "23372", "036854775", "807b4294", "967296c0002147483648d0002147483647e0004294967295f0", "00g1y2y3y4y5y6y7y78y0d0d9d9d9d9d"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2147483647", "02147483647", "0002147483647", "2147483648", "2147483648", "02147483648", "0002147483648", "4294967295", "4294967295", "04294967295", "0004294967295", "4294967296", "4294967296", "4294967296", "04294967296", "9223372036854775807", "9223372036854775807", "09223372036854775807", "000009223372036854775807"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> text = {"1", "1"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"11"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> text = {"098m03r9f80239802389f0m9KDKLKLJDKLJm0983m890DMOm03", "dlkfj3hljf4h3klhl 4j4 444 44 rjhkrrkr34534539893", " 390804980498409480 dkldjkl djkl djkl d00000002998"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9", "44", "098", "444", "890", "0983", "00000002998", "34534539893", "80239802389", "390804980498409480"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> text = {"123", "123"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"123123"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> text = {"05", "51", "65"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"055165"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> text = {" 100000 10 9 8 7 6 5 4 3", "2 1", " asdf asd fa sdf saf 1111", "111111", "111 11111", "222222"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9", "10", "32", "100000", "11111222222", "1111111111111"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> text = {"111 222", "333 444", "000 555"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"222333", "444000"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> text = {"qqqqq5qqqqq 10qqq asdf523aqq59"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"59", "523"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> text = {"2000000000 ", "3000000000"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3000000000"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> text = {"39 000220 30 skldjdije939939slkk 3090 2912kjdk39", "49djd dkljsl098 dkd3 23kdkdkl 0000002222kdjdie9000"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0000002222", "2912", "3090", "3949", "9000", "939939"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> text = {"1 2", "3"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"23"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> text = {"12", "23"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1223"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> text = {"0022 22k00022a022a"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0022", "00022"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> text = {"0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4", "0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "4", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "6", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "7", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "8", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "9", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40", "40"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> text = {"34 17 08", "554 16"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"34", "08554"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> text = {"aaa12dd22", "33vvv"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2233"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> text = {"1 dont forget the last number 2"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> text = {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0000000000"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> text = {"1111111", "1111"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"11111111111"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> text = {"ab1", "23"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"123"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> text = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 "};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> text = {"2500000000a 1000000000a 3000000000a ", "1a 123135445156156a 1231234564891131a"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3000000000", "123135445156156", "1231234564891131"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> text = {"00a", "00000"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> text = {"1 2 3 4 5", "5"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "4", "55"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> text = {"39 000220 30 skldjdije939939slkk 3090 2912kjdk39", "4dld dkljsl098 dkd3 23kdkdkl 0000002222kdjdie9000"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"394", "0000002222", "2912", "3090", "9000", "939939"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> text = {"fgdsgdfgdsf6", "6", "46"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6646"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> text = {"9223372036854775804 9223372036854775803 a", "9223372036854775805 1 2 3"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9223372036854775803", "9223372036854775804", "9223372036854775805"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> text = {"001 001 001 001"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"001", "001"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> text = {"1abcdeFFt13def13345", "9945efd13", "5efr", "922337203685477807a922337203685477806"};
    HiddenNumbers* pObj = new HiddenNumbers();
    clock_t start = clock();
    vector<string> result = pObj->findAll(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"133459945", "922337203685477806", "922337203685477807"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=5866&pm=3075
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define VAR(a,b) typeof(b) a=(b)
#define REP(i,n) for(int _n=n, i=0;i<_n;++i)
#define FOR(i,a,b) for(int i=(a),_b=(b);i<=_b;++i)
#define FORD(i,a,b) for(int i=(a),_b=(b);i>=_b;--i)
#define FOREACH(it,c) for(VAR(it,(c).begin());it!=(c).end();++it)
#define ALL(f,w) ({ bool _ok=true; f { _ok=_ok && (w);if(!_ok) break;} _ok; })
#define EXISTS(f,w) (!ALL(f,!(w)))
#define MIN(f,w) ({ int _mm=(1<<31)-1; f _mm<?=(w); _mm; })
#define MAX(f,w) ({ int _mm=(1<<31); f _mm>?=(w); _mm; })
typedef long long LL;
const int INF = 1000000000; const LL INFLL = LL(INF) * LL(INF);
typedef vector<int> VI; typedef vector<string> VS; typedef vector<VI> VVI;
template<class T> inline int size(const T&c) { return c.size(); }
template<class T> inline vector<T> makeV(const T&x) { return vector<T>(1,x); }
template<class T> inline vector<T> makeV(const T&x,const T&y) {
  vector<T> v(2); v[0] = x; v[1] = y; return v;
}
template<class T> inline vector<T> makeV(const T&x,const T&y,const T&z) {
  vector<T> v(3); v[0] = x; v[1] = y; v[2]=z; return v;
}
template<class A,class B> inline bool contains(const A&a, const B&b) {
  return find(a.begin(),a.end(),b)!=a.end();
}
template<class T> string i2s(T x) { ostringstream o; o<<x; return o.str(); }
int s2i(string s) { istringstream i(s); int x; i>>x; return x; }
LL s2ll(string s) { istringstream i(s); LL x; i>>x; return x; }
 
vector<string> split(string s,string del=" ") {
  s+=del[0];
  string w;
  vector<string> res;
  FOREACH(it,s) {
    if(!contains(del,*it)) w+=*it;
    else if(w!="") { res.push_back(w); w=""; }
  }
  return res;
}
 
VI s2vi(string s,string del=" ") {
  VS v = split(s,del);
  VI res;
  FOREACH(it,v) res.push_back(s2i(*it));
  return res;
}
 
///////////////////////////////////////////////////////////////////
 
string zeros(int x) {
  string s; REP(i,x) s+='0';
  return s;
}
 
bool cmp(string a,string b) {
  string aa = a; string bb = b;
  if(size(aa)<size(bb)) aa = zeros(size(bb)-size(aa)) + aa;
  if(size(bb)<size(aa)) bb = zeros(size(aa)-size(bb)) + bb;
  if(aa<bb) return true;
  if(aa>bb) return false;
  return size(a)<size(b);
}
 
struct HiddenNumbers {
  // MAIN
  vector <string> findAll(vector <string> text) {
    string s; FOREACH(it,text) s+=*it;
    string del; FOR(c,32,127) if(!isdigit(c)) del+=char(c);
    VS nums = split(s,del);
    sort(nums.begin(),nums.end(),cmp);
    VS res;
    FOR(i,size(nums)/2,size(nums)-1) res.push_back(nums[i]);
    return res;
  }
 
 
  
///////////////////////////////////////////////////////////////////
 
 
 
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/