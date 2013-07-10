/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5975
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

class CustomerStatistics {
public:
    vector<string> reportDuplicates(vector<string> customerNames);
};

vector<string> CustomerStatistics::reportDuplicates(vector<string> customerNames) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> customerNames = {"JOHN", "BOB", "JOHN", "BILL", "STANLEY", "JOHN"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JOHN 3"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> customerNames = {"YETTI", "YETTI", "YETTI", "BIGFOOT", "BIGFOOT"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BIGFOOT 2", "YETTI 3"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> customerNames = {"ANDREW", "BILL", "CINDY", "DOH", "ERGH", "FOO", "GOO", "HMPH"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
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
    vector<string> customerNames = {"THEONLYCUSTOMER"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> customerNames = {"A", "B", "A", "C", "A", "B", "A", "D", "D", "D"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A 4", "B 2", "D 3"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> customerNames = {"A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A 50"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> customerNames = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBC"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> customerNames = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBC", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBC"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBC 2"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> customerNames = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBD", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBC"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> customerNames = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBD", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBD", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBC"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBD 2"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> customerNames = {"MOWFR", "R", "SJYB", "DY", "OWKK", "HI", "DBEF", "HI", "NE", "ARCB", "R", "DXR", "NE", "R", "CD", "R", "DBEF", "SJYB", "OWKK", "RBB", "SJYB", "RBB", "DXR", "DBEF", "NE"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DBEF 3", "DXR 2", "HI 2", "NE 3", "OWKK 2", "R 4", "RBB 2", "SJYB 3"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> customerNames = {"HSQM", "BBUQC", "HSQM", "HNWNK", "JJI", "BBUQC", "BX", "SWM", "BBUQC", "KQ", "SWM", "JJI"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBUQC 3", "HSQM 2", "JJI 2", "SWM 2"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> customerNames = {"C", "XQMBFJXJCVUDJSUYIBYEBMWSIQYOYGYXY", "SADEUGUUMOQCDR", "DIAJXLOGHIQFM", "AGUWNNYQXNZLGDGWPBTRWBL", "UU", "CNVWDTXJ", "YXACBHHKICQC", "ZEVYPZVJEGE", "KPGGKBBIPZZRZUCXAMLUDFYKGRU", "UU", "WZGIOOOBPPLEQLWPHAPJNADQH", "KPGGKBBIPZZRZUCXAMLUDFYKGRU", "WCIBXUBUMENME", "PQCACEHCHZVFRKMLNOZJKPQPXRJXKIT", "XQMBFJXJCVUDJSUYIBYEBMWSIQYOYGYXY", "C", "ZEVYPZVJEGE", "CNVWDTXJ", "PQCACEHCHZVFRKMLNOZJKPQPXRJXKIT", "GSPQO", "KPGGKBBIPZZRZUCXAMLUDFYKGRU", "CNVWDTXJ", "ZEVYPZVJEGE", "SADEUGUUMOQCDR", "WCIBXUBUMENME", "GSPQO", "DIAJXLOGHIQFM", "ZEVYPZVJEGE", "WZGIOOOBPPLEQLWPHAPJNADQH", "ATDRM", "MYPPPHAUXNSPUSGDHI", "GSPQO", "KPGGKBBIPZZRZUCXAMLUDFYKGRU", "ENDTOMFGD", "KPGGKBBIPZZRZUCXAMLUDFYKGRU", "YTDLCGDEWHTACIOHORDTQKV"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C 2", "CNVWDTXJ 3", "DIAJXLOGHIQFM 2", "GSPQO 3", "KPGGKBBIPZZRZUCXAMLUDFYKGRU 5", "PQCACEHCHZVFRKMLNOZJKPQPXRJXKIT 2", "SADEUGUUMOQCDR 2", "UU 2", "WCIBXUBUMENME 2", "WZGIOOOBPPLEQLWPHAPJNADQH 2", "XQMBFJXJCVUDJSUYIBYEBMWSIQYOYGYXY 2", "ZEVYPZVJEGE 4"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> customerNames = {"DD", "VDG", "TG", "DD", "I", "I", "IJVWC", "I", "DD", "TG"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DD 3", "I 3", "TG 2"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> customerNames = {"Q", "NUNYFDZRHBASJEUYGAF", "WCSFMOXEQMRJO", "UBDUBZVAFSPQ", "UBUTPN", "LJXEPBPIWUQZD", "CF", "MUWFJQSJXVKQDORXXVRW", "Q", "TDSNEOGVBPKXLP", "TDSNEOGVBPKXLP", "RJCDDSOZOYVEGUR", "TNUNNESLSPLWUIU", "TNUNNESLSPLWUIU", "LJXEPBPIWUQZD", "TNUNNESLSPLWUIU", "FTPWCTGTWMXNUPYCFGC", "UBUTPN", "MUWFJQSJXVKQDORXXVRW", "ITNCKLEFSZBEXRAMPETV", "NUNYFDZRHBASJEUYGAF", "QNDDJEQVUYGPNKAZQFR", "CF", "ITNCKLEFSZBEXRAMPETV", "NAEHHSVEYMQPXHL", "GVWUJBQXXPITCVOGRAIDD", "TDSNEOGVBPKXLP", "DIRBFCRIQIFPGYNKRREFXSNVU", "TDSNEOGVBPKXLP", "UBDUBZVAFSPQ"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CF 2", "ITNCKLEFSZBEXRAMPETV 2", "LJXEPBPIWUQZD 2", "MUWFJQSJXVKQDORXXVRW 2", "NUNYFDZRHBASJEUYGAF 2", "Q 2", "TDSNEOGVBPKXLP 4", "TNUNNESLSPLWUIU 3", "UBDUBZVAFSPQ 2", "UBUTPN 2"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> customerNames = {"BGSDVI", "BGSDVI", "L", "JOPGTQVV", "LQVJZHA", "GF", "WSWY", "QXMWRQI", "YKTHEY", "DRCN", "DRCN", "KPHC", "HESN", "JOPGTQVV", "WSWY", "DRCN", "GF", "GF", "XDZNCQG", "AIIHVEI", "WJJR", "VR", "DRCN", "L", "NTMRO", "KPHC", "RVMHLUBB", "JOPGTQVV", "LQVJZHA", "OPUBJGU", "DRCN", "LAPOPK", "KPHC"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BGSDVI 2", "DRCN 5", "GF 3", "JOPGTQVV 3", "KPHC 3", "L 2", "LQVJZHA 2", "WSWY 2"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> customerNames = {"XDRMGZEBHNL", "KJCA", "RXAJJNGCOMIKJZS", "RXAJJNGCOMIKJZS", "WPM", "ASIDZGWR", "TWAPDTUTPBZTYGN", "SFQUEEE", "TWAPDTUTPBZTYGN", "XDRMGZEBHNL", "KJCA", "CNJULKFUZMXNAFAM", "TWAPDTUTPBZTYGN", "R", "XDRMGZEBHNL", "ASIDZGWR", "GRUJIGSKMVRZ", "SP", "JITLVCNVB", "G", "XDRMGZEBHNL", "KJCA", "G", "FW", "KJCA"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ASIDZGWR 2", "G 2", "KJCA 4", "RXAJJNGCOMIKJZS 2", "TWAPDTUTPBZTYGN 3", "XDRMGZEBHNL 4"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> customerNames = {"JZLUCQXSWYQDNTDMFRTZLQSEKEJ", "RYNQXQQMLFOTPQHVOKIIAMMQMVXJ", "ZKSKLF", "SJOLVYBWXXTTQOG", "EZW", "ETTWDNFNBYJVPDJXYUZ", "ETTWDNFNBYJVPDJXYUZ", "QGWDRYGXRXKFHICAINHWILKQMBPES", "NUUFNNXVLOYVGMLIUQA", "SNSMOUWQHODSGCFOHESYSH", "RYNQXQQMLFOTPQHVOKIIAMMQMVXJ", "SJOLVYBWXXTTQOG", "DLYAVFA", "RYNQXQQMLFOTPQHVOKIIAMMQMVXJ", "FXTGPOJXQIY", "BBISWMEAYLZIFKTMOIKS", "RSQFWQDJQNQCGDQRNLLUIEAZVM", "GXWTOAYUVNOJDJFTQTWKBAPRIUJ", "HDNAYWPNBITORAAIBED", "BSOAIFZYXNJCBERRNMIXXS", "SNSMOUWQHODSGCFOHESYSH", "NXBSLQZKGLZAMZPD", "PDAWLOHSSVTQTKFVSY", "JHOVENGBPYQRI", "GXWTOAYUVNOJDJFTQTWKBAPRIUJ", "ZKSKLF", "AOSNLNVACSVPIUMOIAWCQXS", "KQWGXYAZ", "BCVKZVGBOFTHGO", "QGWDRYGXRXKFHICAINHWILKQMBPES", "BSOAIFZYXNJCBERRNMIXXS"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BSOAIFZYXNJCBERRNMIXXS 2", "ETTWDNFNBYJVPDJXYUZ 2", "GXWTOAYUVNOJDJFTQTWKBAPRIUJ 2", "QGWDRYGXRXKFHICAINHWILKQMBPES 2", "RYNQXQQMLFOTPQHVOKIIAMMQMVXJ 3", "SJOLVYBWXXTTQOG 2", "SNSMOUWQHODSGCFOHESYSH 2", "ZKSKLF 2"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> customerNames = {"AGELTKCA", "MKPVGR", "VKESV", "ZQKVLFB", "RMBPBEGVSULUQTU", "RMBPBEGVSULUQTU", "GTUSEU", "CPJ", "MKPVGR", "VKESV", "VKESV", "TDHVTJMEXFQBVUFD", "VKESV", "GTUSEU", "AGELTKCA", "ZQKVLFB", "ZQKVLFB", "WC", "MKPVGR", "MKPVGR", "TDHVTJMEXFQBVUFD", "UCLT", "WC"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AGELTKCA 2", "GTUSEU 2", "MKPVGR 4", "RMBPBEGVSULUQTU 2", "TDHVTJMEXFQBVUFD 2", "VKESV 4", "WC 2", "ZQKVLFB 3"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> customerNames = {"FUGJ", "HUFSUEVJAXRNIVCOR", "YEPFAESJL", "OUBBJBRPMIXFC", "PRL", "RHWGFNPAQ", "LOFRSOTQI", "IECWXXBJTNMKJG", "QM", "TXIPQZEQV", "CPMVAUQGTAUSOK", "IECWXXBJTNMKJG", "MDADG", "OUBBJBRPMIXFC", "QM", "Z", "QM", "FI", "CPMVAUQGTAUSOK", "FI", "UNLJGSOXLEUYYF", "TXIPQZEQV", "PRL", "OUBBJBRPMIXFC", "YEPFAESJL", "IECWXXBJTNMKJG", "YEPFAESJL"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CPMVAUQGTAUSOK 2", "FI 2", "IECWXXBJTNMKJG 3", "OUBBJBRPMIXFC 3", "PRL 2", "QM 3", "TXIPQZEQV 2", "YEPFAESJL 3"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> customerNames = {"DOAYSHWXSHXZJYWUMBFFAMXDNXJQOYIRMIRER", "KWSQOIWYFALPEUUUGFRTEOMQINUQNIRXELPSTOSA", "EKXDLICJFQKKVNXUQMSZCIXM", "TUJUIOKCOWSWQYXNTNDXQQSGKHVIHBAAWJUGAGLOD", "EKXDLICJFQKKVNXUQMSZCIXM", "DQSZKOGRFBXTNPDBLTQTMPYYE", "DOAYSHWXSHXZJYWUMBFFAMXDNXJQOYIRMIRER", "EKXDLICJFQKKVNXUQMSZCIXM", "TUJUIOKCOWSWQYXNTNDXQQSGKHVIHBAAWJUGAGLOD", "DQSZKOGRFBXTNPDBLTQTMPYYE", "EKXDLICJFQKKVNXUQMSZCIXM", "EKXDLICJFQKKVNXUQMSZCIXM", "EKXDLICJFQKKVNXUQMSZCIXM", "EKXDLICJFQKKVNXUQMSZCIXM", "EKXDLICJFQKKVNXUQMSZCIXM", "KWSQOIWYFALPEUUUGFRTEOMQINUQNIRXELPSTOSA", "DQSZKOGRFBXTNPDBLTQTMPYYE", "KWSQOIWYFALPEUUUGFRTEOMQINUQNIRXELPSTOSA", "TUJUIOKCOWSWQYXNTNDXQQSGKHVIHBAAWJUGAGLOD", "EKXDLICJFQKKVNXUQMSZCIXM", "DOAYSHWXSHXZJYWUMBFFAMXDNXJQOYIRMIRER", "TUJUIOKCOWSWQYXNTNDXQQSGKHVIHBAAWJUGAGLOD"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DOAYSHWXSHXZJYWUMBFFAMXDNXJQOYIRMIRER 3", "DQSZKOGRFBXTNPDBLTQTMPYYE 3", "EKXDLICJFQKKVNXUQMSZCIXM 9", "KWSQOIWYFALPEUUUGFRTEOMQINUQNIRXELPSTOSA 3", "TUJUIOKCOWSWQYXNTNDXQQSGKHVIHBAAWJUGAGLOD 4"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> customerNames = {"USOKCYEAVWUFPC", "USOKCYEAVWUFPC", "QRELEINKOPMFPVOMQUEGHDMXKYNW", "ZQNSWAXGNJWDXBUUSG", "ITWCQQXFBBFHBADVFUA", "ITWCQQXFBBFHBADVFUA", "AJXKIXDBXJ", "USOKCYEAVWUFPC", "HSFIULEAFGAAPAHJWTESPLWEQFMNMYM", "USOKCYEAVWUFPC", "K", "ZQNSWAXGNJWDXBUUSG", "UJXFRWKVUUHEPDIFVFK", "HSFIULEAFGAAPAHJWTESPLWEQFMNMYM", "ZQNSWAXGNJWDXBUUSG", "ZQGKM", "YLDXUKDNFTPRRUMBMEMLR", "ITWCQQXFBBFHBADVFUA", "VQALWDTKSSLYKAJATAXGPD", "USOKCYEAVWUFPC", "DIWAHOQ", "UJXFRWKVUUHEPDIFVFK", "MNQWQDV", "DIWAHOQ", "USOKCYEAVWUFPC", "YLDXUKDNFTPRRUMBMEMLR", "YLDXUKDNFTPRRUMBMEMLR", "AJXKIXDBXJ", "VQALWDTKSSLYKAJATAXGPD", "K", "ZQGKM", "YLDXUKDNFTPRRUMBMEMLR", "ITWCQQXFBBFHBADVFUA"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AJXKIXDBXJ 2", "DIWAHOQ 2", "HSFIULEAFGAAPAHJWTESPLWEQFMNMYM 2", "ITWCQQXFBBFHBADVFUA 4", "K 2", "UJXFRWKVUUHEPDIFVFK 2", "USOKCYEAVWUFPC 6", "VQALWDTKSSLYKAJATAXGPD 2", "YLDXUKDNFTPRRUMBMEMLR 4", "ZQGKM 2", "ZQNSWAXGNJWDXBUUSG 3"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> customerNames = {"PUSFGIESTCKR", "GXDCJPALSHGEPKZHHVLXCBXDWJCCGTDOQISC", "MIHNTKDDN", "FNNZCPHKFLPBQSVTDWLUDSGAUNGFZOIHBXIFOP", "MZJQTLRSPPXQIYWJOBSPEFUJLXNMDDURDDIY", "SPQZVUQIVZPTLPVOO", "AIGOCFUFBUBIYRRF", "DEAVKNYKPOXHXCLQQE", "GPQLWFKJQIPUUJVWTX", "BQFSPVCOULCVDRZKMKWLYIQDCHGHRGY", "DMFHAOPLQIZKHIQBJTIMITDKXIKSXJECWMK", "GXDCJPALSHGEPKZHHVLXCBXDWJCCGTDOQISC", "PUSFGIESTCKR", "BQFSPVCOULCVDRZKMKWLYIQDCHGHRGY", "MIHNTKDDN", "MWAEEIMI", "ZOIORRWWXYRHLSRDG", "PUSFGIESTCKR", "NYAPGVSWOAOSAGHRFFNXNJY", "ZDNOBQCVDEQJYSTMEPXC", "AIGOCFUFBUBIYRRF", "NIEWQMOXKJWPYMQORLUXEDVYWHCOGHO", "NYAPGVSWOAOSAGHRFFNXNJY", "GPQLWFKJQIPUUJVWTX", "MWAEEIMI", "ABHSLIEVQVWCQEQAZTKYDWR", "QAVD", "GPQLWFKJQIPUUJVWTX", "MZJQTLRSPPXQIYWJOBSPEFUJLXNMDDURDDIY", "ELTZAIZNICCOZWKNWYH", "AIGOCFUFBUBIYRRF", "KDUVTMZZCZUFVTVFIOYGKVEDERVVUDNEG"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AIGOCFUFBUBIYRRF 3", "BQFSPVCOULCVDRZKMKWLYIQDCHGHRGY 2", "GPQLWFKJQIPUUJVWTX 3", "GXDCJPALSHGEPKZHHVLXCBXDWJCCGTDOQISC 2", "MIHNTKDDN 2", "MWAEEIMI 2", "MZJQTLRSPPXQIYWJOBSPEFUJLXNMDDURDDIY 2", "NYAPGVSWOAOSAGHRFFNXNJY 2", "PUSFGIESTCKR 3"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> customerNames = {"NJJOOMWKU", "C", "MRQCTEQKBWBAAMICOQLI", "GWI", "BOM", "C", "ZNV", "BOM", "MRQCTEQKBWBAAMICOQLI", "NJJOOMWKU", "BOM", "ZNV", "GWI", "ZNV", "GWI", "GZTQ", "C"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BOM 3", "C 3", "GWI 3", "MRQCTEQKBWBAAMICOQLI 2", "NJJOOMWKU 2", "ZNV 3"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> customerNames = {"P", "EAVAAC", "OEL", "PDJ", "DYPVM", "DYPVM", "OEL", "AZUIM", "P", "DYPVM", "L", "EAVAAC", "OEL", "P", "P", "DYPVM", "L", "PDJ", "YN"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DYPVM 4", "EAVAAC 2", "L 2", "OEL 3", "P 4", "PDJ 2"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> customerNames = {"BLVOTZOMEQLFTXZLZKBCSQMN", "PTTNCJTJHRTVKWWO", "LPWZVAHNVKPLPFAOT", "DCQDPMZMXWNEIKZFGTANT", "FCYMDRZQZKPGEMJAO", "FCYMDRZQZKPGEMJAO", "TLE", "Y", "RUWSZSHXPMJRHFAWDIBZBFYPDKSBH", "OFE", "FCZZDMUSZLOBIOKVKWKXLR", "VIRBOSVM", "DCQDPMZMXWNEIKZFGTANT", "TD", "WIMQDACKDAWITXYSJQZNC", "DJADJEGBSYPJOMFBRNKILZHSVBWCZ", "FCYMDRZQZKPGEMJAO", "BQHJJFKBOACCENR", "Y", "BQHJJFKBOACCENR", "TLE", "ACBPNSOPP", "PTTNCJTJHRTVKWWO", "WIMQDACKDAWITXYSJQZNC", "OFE", "VVUVSVHZKYWHMGCHQ", "DJADJEGBSYPJOMFBRNKILZHSVBWCZ", "PTTNCJTJHRTVKWWO", "JPY", "TD", "DJADJEGBSYPJOMFBRNKILZHSVBWCZ", "Y", "JPY", "WIMQDACKDAWITXYSJQZNC"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BQHJJFKBOACCENR 2", "DCQDPMZMXWNEIKZFGTANT 2", "DJADJEGBSYPJOMFBRNKILZHSVBWCZ 3", "FCYMDRZQZKPGEMJAO 3", "JPY 2", "OFE 2", "PTTNCJTJHRTVKWWO 3", "TD 2", "TLE 2", "WIMQDACKDAWITXYSJQZNC 3", "Y 3"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> customerNames = {"QJNMTAEQTMYKCBRZ", "YETWIFTHNSXRGGOQBHXIQSVZZSCQUTMSZ", "KHFXBQAQ", "CNCYOYWBMVZHXP", "CNCYOYWBMVZHXP", "KHFXBQAQ", "CNCYOYWBMVZHXP", "CNCYOYWBMVZHXP", "NHVIVTHFI", "NHVIVTHFI", "YETWIFTHNSXRGGOQBHXIQSVZZSCQUTMSZ", "NHVIVTHFI", "YETWIFTHNSXRGGOQBHXIQSVZZSCQUTMSZ", "KHFXBQAQ", "QJNMTAEQTMYKCBRZ", "QJNMTAEQTMYKCBRZ", "NHVIVTHFI", "CNCYOYWBMVZHXP", "YETWIFTHNSXRGGOQBHXIQSVZZSCQUTMSZ", "NHVIVTHFI", "KHFXBQAQ", "MDZJLR", "YETWIFTHNSXRGGOQBHXIQSVZZSCQUTMSZ", "NHVIVTHFI", "YETWIFTHNSXRGGOQBHXIQSVZZSCQUTMSZ", "YETWIFTHNSXRGGOQBHXIQSVZZSCQUTMSZ"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CNCYOYWBMVZHXP 5", "KHFXBQAQ 4", "NHVIVTHFI 6", "QJNMTAEQTMYKCBRZ 3", "YETWIFTHNSXRGGOQBHXIQSVZZSCQUTMSZ 7"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> customerNames = {"QZEQSJRKM", "QSDMZOHYDTUOTJYYSTTLKNMQDYVDPBXFTAT", "QSDMZOHYDTUOTJYYSTTLKNMQDYVDPBXFTAT", "QZEQSJRKM", "QSDMZOHYDTUOTJYYSTTLKNMQDYVDPBXFTAT", "QASTVPHOAHPSDIFNXRFBQAGHDFOYHHSXHNTDCCTCMIU", "QASTVPHOAHPSDIFNXRFBQAGHDFOYHHSXHNTDCCTCMIU", "RPHFOOOIOYVJDXNWBZHVQZWUPR", "RPHFOOOIOYVJDXNWBZHVQZWUPR", "QASTVPHOAHPSDIFNXRFBQAGHDFOYHHSXHNTDCCTCMIU", "RPHFOOOIOYVJDXNWBZHVQZWUPR", "IBSITJPAZFRITPFESFSQG", "QASTVPHOAHPSDIFNXRFBQAGHDFOYHHSXHNTDCCTCMIU", "IBSITJPAZFRITPFESFSQG", "RPHFOOOIOYVJDXNWBZHVQZWUPR", "QASTVPHOAHPSDIFNXRFBQAGHDFOYHHSXHNTDCCTCMIU", "RPHFOOOIOYVJDXNWBZHVQZWUPR", "QZEQSJRKM"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"IBSITJPAZFRITPFESFSQG 2", "QASTVPHOAHPSDIFNXRFBQAGHDFOYHHSXHNTDCCTCMIU 5", "QSDMZOHYDTUOTJYYSTTLKNMQDYVDPBXFTAT 3", "QZEQSJRKM 3", "RPHFOOOIOYVJDXNWBZHVQZWUPR 5"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> customerNames = {"PWXBEURHCBMZGZWW", "YAI", "BLDXGUZGCSECCINLI", "XCTH", "MXMSMMHVODIH", "YAI", "MXMSMMHVODIH", "ZADDUKVLQPKUZJZHWS", "YVTLZEIVXYGAAPPZO", "PWXBEURHCBMZGZWW", "YOGWQZLI", "BLDXGUZGCSECCINLI", "TPCAF", "AC", "ZADDUKVLQPKUZJZHWS", "TPCAF", "PWXBEURHCBMZGZWW", "YVTLZEIVXYGAAPPZO", "YOGWQZLI", "GMANJZTL", "DIKKM", "BLDXGUZGCSECCINLI", "YVTLZEIVXYGAAPPZO", "JHAMMEGWBTPQELRN", "GMANJZTL", "YOGWQZLI", "JHAMMEGWBTPQELRN"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BLDXGUZGCSECCINLI 3", "GMANJZTL 2", "JHAMMEGWBTPQELRN 2", "MXMSMMHVODIH 2", "PWXBEURHCBMZGZWW 3", "TPCAF 2", "YAI 2", "YOGWQZLI 3", "YVTLZEIVXYGAAPPZO 3", "ZADDUKVLQPKUZJZHWS 2"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> customerNames = {"NOPYAGETJFQIEXQROIAYROJHJ", "NOPYAGETJFQIEXQROIAYROJHJ", "ZZNFDCMKKHS", "ZEHLRQGJHMJQTYZZTJ", "ZEHLRQGJHMJQTYZZTJ", "FNHEVKSUDVJLRGRCAV", "XDNZYHORMWJCXFBOBWRCVEHBITNSDGACJPEI", "SBMRNOQSSFVOYXKEGLM", "ZZNFDCMKKHS"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NOPYAGETJFQIEXQROIAYROJHJ 2", "ZEHLRQGJHMJQTYZZTJ 2", "ZZNFDCMKKHS 2"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> customerNames = {"XIRVQQKZEF", "JCIEKLLNPED", "HIDDQMXRMXJWTIWROGCK", "HZIKPUJHJGQFBBB", "LDADTKCZP", "EDETOKJCLJ", "JCIEKLLNPED", "LDADTKCZP", "MFAQGTTY", "EDETOKJCLJ", "HZIKPUJHJGQFBBB", "MFAQGTTY", "EIL", "DHZTPFQHWHPY", "NAQZRZUACBPQN", "HZIKPUJHJGQFBBB", "HIDDQMXRMXJWTIWROGCK"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"EDETOKJCLJ 2", "HIDDQMXRMXJWTIWROGCK 2", "HZIKPUJHJGQFBBB 3", "JCIEKLLNPED 2", "LDADTKCZP 2", "MFAQGTTY 2"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> customerNames = {"FY", "Y", "S", "ZBA", "IME", "QJ", "FY", "VXKN", "YXDR", "S", "XMJZ", "WKF", "VXKN"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FY 2", "S 2", "VXKN 2"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> customerNames = {"UOAYSDNNK", "CFYDDQJUIJZDUHCTCLEMWWLEXNK", "GLOWDGGXBPVZWALXOGUFHOTIO", "GAXDQNLCEBPUHAPGFXWK", "AUCBNRGE", "RHWZXSFPQADUJIXYTIJJJQZIAAEWJW", "GAXDQNLCEBPUHAPGFXWK", "WZZZLYKEVHXX", "IYSVCPWDAUSEVRQRSJSTJWX", "RHWZXSFPQADUJIXYTIJJJQZIAAEWJW", "RHWZXSFPQADUJIXYTIJJJQZIAAEWJW", "BM", "CFYDDQJUIJZDUHCTCLEMWWLEXNK", "BM", "XTFIUDFSPSSX", "EQMAHLTOVORBIIVCFCZGDATBKAYTX", "VAZJWPCZXKWZRAAAECTHNVG", "ZDON", "RRBVOQFLPQLQGLUZDGOEFCKAATPDOH", "XTFIUDFSPSSX", "RRBVOQFLPQLQGLUZDGOEFCKAATPDOH", "UOAYSDNNK", "FKALTVRBULYYAUDCQ", "RRBVOQFLPQLQGLUZDGOEFCKAATPDOH", "ZDON", "FKALTVRBULYYAUDCQ", "XTFIUDFSPSSX", "VAZJWPCZXKWZRAAAECTHNVG", "T", "RRBVOQFLPQLQGLUZDGOEFCKAATPDOH", "FKALTVRBULYYAUDCQ", "VAZJWPCZXKWZRAAAECTHNVG", "ZDON"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BM 2", "CFYDDQJUIJZDUHCTCLEMWWLEXNK 2", "FKALTVRBULYYAUDCQ 3", "GAXDQNLCEBPUHAPGFXWK 2", "RHWZXSFPQADUJIXYTIJJJQZIAAEWJW 3", "RRBVOQFLPQLQGLUZDGOEFCKAATPDOH 4", "UOAYSDNNK 2", "VAZJWPCZXKWZRAAAECTHNVG 3", "XTFIUDFSPSSX 3", "ZDON 3"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> customerNames = {"IETVSZDFKNLUTLOJYSEEN", "OGXZXGUHISW", "IETVSZDFKNLUTLOJYSEEN", "INMXVZS", "TVBDRZNGXNRWCGLUJFCMELL", "TVBDRZNGXNRWCGLUJFCMELL", "XXPYJEDIPPVOOIMT", "IETVSZDFKNLUTLOJYSEEN", "GLQJVKAWMUCQDL", "UCIXOIERFWSRWKQUBQFFTQ", "NMMYXDJJFEVAYZQTLZQIOJXYBMNDXL", "JKGHEXSPLETGVQRJVPKAKJ", "VKJUXPRMIPPOAJY", "ZESTEAKWVH", "JKGHEXSPLETGVQRJVPKAKJ", "YWSNEZDUFCTCJQMRKIWHW", "IETVSZDFKNLUTLOJYSEEN", "GLQJVKAWMUCQDL", "NMMYXDJJFEVAYZQTLZQIOJXYBMNDXL", "KM", "TVBDRZNGXNRWCGLUJFCMELL", "XXPOHRY", "RWBM", "XEATYTRILLKBTPVLOFYAETZWYTTLOFI", "OGXZXGUHISW"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"GLQJVKAWMUCQDL 2", "IETVSZDFKNLUTLOJYSEEN 4", "JKGHEXSPLETGVQRJVPKAKJ 2", "NMMYXDJJFEVAYZQTLZQIOJXYBMNDXL 2", "OGXZXGUHISW 2", "TVBDRZNGXNRWCGLUJFCMELL 3"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> customerNames = {"JKPBUMMZDZ", "PUIGUYDOUEWZJLKR", "AYFLRUGAWCBABRAYHRKDCXSDRGSRMRAMPF", "PUIGUYDOUEWZJLKR", "NSLP", "JKPBUMMZDZ", "XFNLCDAJJNQGVQPED", "KK", "BLEVEG", "IG", "GMXBGRYQUSUZIEFOJIBCNPVJHCJKLPST", "GMXBGRYQUSUZIEFOJIBCNPVJHCJKLPST", "IG", "IEVCFFIGZRTRVUHCAUCLDAKKLDYVPRSZXN", "VIDUECOKEEFAKSDOTTSFA", "ZLELKBWOBFKXMKMCJBIWUPWCCWQGUZNWMR", "DSATUZNVLDCOIXU", "CSMKUGENDAVHAPJMUKYEXDCSUTMUTZY", "YUFMVKYSZIGBUHLSDBOFDMXJJYYFKROILT", "UDCPVWELBCBODJEJDECXGPTT", "IZAABBTSWBBTEYATLC", "HEK", "IG", "UMIOSMBXMWFPNODHADNXGP", "MHBKQLMZXZOPSSGMCNICSWXWTW", "MHBKQLMZXZOPSSGMCNICSWXWTW", "PQFVNLBI", "HEK", "PQFVNLBI", "JKPBUMMZDZ", "UDCPVWELBCBODJEJDECXGPTT", "YJ", "PUIGUYDOUEWZJLKR", "VIDUECOKEEFAKSDOTTSFA", "TFEMIS", "VIDUECOKEEFAKSDOTTSFA", "IEVCFFIGZRTRVUHCAUCLDAKKLDYVPRSZXN", "ZLELKBWOBFKXMKMCJBIWUPWCCWQGUZNWMR", "IBGKXINZLGBJN", "KK", "TFEMIS", "PQFVNLBI", "IG", "JKPBUMMZDZ", "HEK", "PQFVNLBI", "KK", "UDCPVWELBCBODJEJDECXGPTT"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"GMXBGRYQUSUZIEFOJIBCNPVJHCJKLPST 2", "HEK 3", "IEVCFFIGZRTRVUHCAUCLDAKKLDYVPRSZXN 2", "IG 4", "JKPBUMMZDZ 4", "KK 3", "MHBKQLMZXZOPSSGMCNICSWXWTW 2", "PQFVNLBI 4", "PUIGUYDOUEWZJLKR 3", "TFEMIS 2", "UDCPVWELBCBODJEJDECXGPTT 3", "VIDUECOKEEFAKSDOTTSFA 3", "ZLELKBWOBFKXMKMCJBIWUPWCCWQGUZNWMR 2"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> customerNames = {"SRULAKEROFYYRPIVRKKHEUMYXZDZ", "SRULAKEROFYYRPIVRKKHEUMYXZDZ", "NCTXIAONAZKXI", "PE", "BUMDLADPYCYGTRGUTPDZLAJZ", "NCTXIAONAZKXI", "SLJGGPDALXVJNWYGVQEGPMSPGDCJI", "PE", "SLJGGPDALXVJNWYGVQEGPMSPGDCJI", "XSUSUYQZOQXSYJWGKATLLBFD", "SRULAKEROFYYRPIVRKKHEUMYXZDZ", "VIGRBKZQWSFEXIO", "BUMDLADPYCYGTRGUTPDZLAJZ", "NCTXIAONAZKXI", "NCTXIAONAZKXI", "SLJGGPDALXVJNWYGVQEGPMSPGDCJI", "XSUSUYQZOQXSYJWGKATLLBFD"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BUMDLADPYCYGTRGUTPDZLAJZ 2", "NCTXIAONAZKXI 4", "PE 2", "SLJGGPDALXVJNWYGVQEGPMSPGDCJI 3", "SRULAKEROFYYRPIVRKKHEUMYXZDZ 3", "XSUSUYQZOQXSYJWGKATLLBFD 2"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> customerNames = {"FNWYA", "PZAC", "QQIFZOUP", "IWJ", "S", "ZFNUHTG", "IWJ", "WRXECI", "H", "KZLWJUN", "IWJ", "FNWYA", "JRPFAU", "XL", "ANUQZQP", "RLX", "KGKLYCK", "AQMUK", "WTISKRZ", "ZJQI", "JF", "JF", "FNWYA", "ANUQZQP", "S", "XL", "KAYHJSUJ", "ZJQI", "C", "WRXECI", "WTISKRZ"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ANUQZQP 2", "FNWYA 3", "IWJ 3", "JF 2", "S 2", "WRXECI 2", "WTISKRZ 2", "XL 2", "ZJQI 2"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> customerNames = {"LWBJDEYGKS", "LWBJDEYGKS", "PKZWMZORFEFWOFIHMOZUMJKGEILLDTOSF", "TIJUWXQSIWJHKLWBTVCWGAAQFEQLQKY", "LWBJDEYGKS", "LWBJDEYGKS", "TIJUWXQSIWJHKLWBTVCWGAAQFEQLQKY", "TIJUWXQSIWJHKLWBTVCWGAAQFEQLQKY", "THGPGWKOSTWFHSG", "PKZWMZORFEFWOFIHMOZUMJKGEILLDTOSF", "TIJUWXQSIWJHKLWBTVCWGAAQFEQLQKY", "WFBOCFUCHOYAMMWWJERXOAPQIWB", "QVCGAARURYNTIVITNHJQCGHKTNV", "THGPGWKOSTWFHSG", "TIJUWXQSIWJHKLWBTVCWGAAQFEQLQKY", "LWBJDEYGKS", "THGPGWKOSTWFHSG", "TIJUWXQSIWJHKLWBTVCWGAAQFEQLQKY", "QVCGAARURYNTIVITNHJQCGHKTNV", "QVCGAARURYNTIVITNHJQCGHKTNV"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"LWBJDEYGKS 5", "PKZWMZORFEFWOFIHMOZUMJKGEILLDTOSF 2", "QVCGAARURYNTIVITNHJQCGHKTNV 3", "THGPGWKOSTWFHSG 3", "TIJUWXQSIWJHKLWBTVCWGAAQFEQLQKY 6"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> customerNames = {"FKVTQQVDRNKJBZR", "F", "XOSCNUTJMCVCQDGOUPOCB", "TVVYPPDMRSI", "XOSCNUTJMCVCQDGOUPOCB", "ZMGVCLZSFPOMIACC", "IBGD", "SDCSCTNEIHZRVBOYRSG", "FKVTQQVDRNKJBZR", "EHFKO", "DTWWRTWI", "LGGSHZNINNBHVJUSGLR", "XOSCNUTJMCVCQDGOUPOCB", "AUCSDWZPU", "XOSCNUTJMCVCQDGOUPOCB", "NUTKHTEVY", "DTWWRTWI", "LGGSHZNINNBHVJUSGLR", "XOSCNUTJMCVCQDGOUPOCB", "MVVPYOVKJVADADWC", "SDCSCTNEIHZRVBOYRSG", "LYCVFWBCUO", "SDCSCTNEIHZRVBOYRSG", "EPUO"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DTWWRTWI 2", "FKVTQQVDRNKJBZR 2", "LGGSHZNINNBHVJUSGLR 2", "SDCSCTNEIHZRVBOYRSG 3", "XOSCNUTJMCVCQDGOUPOCB 5"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> customerNames = {"AHFEQLNYUWQNL", "AHFEQLNYUWQNL", "RVFOQRXVPDYOWEDM", "RCOWAKKMPQAKIXKGCIEC", "XULAGMDCRWLGBSFMCVWOMFGMTPX", "RVFOQRXVPDYOWEDM", "XULAGMDCRWLGBSFMCVWOMFGMTPX", "JYHYCMPYXX", "JYHYCMPYXX", "MHFWEDYTENOCLTCSDFUSVNOGN", "YFYW", "EELSSTFMKDTATKAOBFORCTUQB", "JYHYCMPYXX", "AHFEQLNYUWQNL", "DJRHVGHVGIOKYKKKUYCNYMVWYDAGICANORWLADIILX", "MHFWEDYTENOCLTCSDFUSVNOGN", "YFYW", "RCOWAKKMPQAKIXKGCIEC", "LBDWESJPDEWJIOHJQJQYNJLCHH", "MHFWEDYTENOCLTCSDFUSVNOGN", "XULAGMDCRWLGBSFMCVWOMFGMTPX", "MHFWEDYTENOCLTCSDFUSVNOGN", "RCOWAKKMPQAKIXKGCIEC", "DJRHVGHVGIOKYKKKUYCNYMVWYDAGICANORWLADIILX", "JYHYCMPYXX", "XULAGMDCRWLGBSFMCVWOMFGMTPX", "RVFOQRXVPDYOWEDM"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AHFEQLNYUWQNL 3", "DJRHVGHVGIOKYKKKUYCNYMVWYDAGICANORWLADIILX 2", "JYHYCMPYXX 4", "MHFWEDYTENOCLTCSDFUSVNOGN 4", "RCOWAKKMPQAKIXKGCIEC 3", "RVFOQRXVPDYOWEDM 3", "XULAGMDCRWLGBSFMCVWOMFGMTPX 4", "YFYW 2"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> customerNames = {"UAZCPZUAAFTHZEDORFM", "QQKTLCYHBIGVJFZAHVAHA", "CYHXKJV", "VRGA", "TWRJFIOOUCDIHJHDQOS", "PBUO", "PHIMJHV", "VRGA", "AQJZJTGTJUNLZ", "PSBZTXHOHQEGKMPMFEZUE", "UAZCPZUAAFTHZEDORFM", "PIKLGBRG", "TWRJFIOOUCDIHJHDQOS", "VRGA", "TEEWBRNHCAJQHI", "CYHXKJV", "PHIMJHV", "ULEYDVQDTWK", "XNPGLNBNFXJKX", "PHIMJHV"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CYHXKJV 2", "PHIMJHV 3", "TWRJFIOOUCDIHJHDQOS 2", "UAZCPZUAAFTHZEDORFM 2", "VRGA 3"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> customerNames = {"VGIQGPREGQHAGDZIL", "UXDAUDVEVTBYNTMDUPRWUVUVNBDR", "BFAJDIYDDTZHWVPGNWYECEXLGFOF", "Z", "Z", "RJWDRYFBKAGJJQSCDLQNAGQAPKDOPHRISPMKPTL", "Z", "BFAJDIYDDTZHWVPGNWYECEXLGFOF", "HEOPEBSY", "IVXUBRJSPDPLACMETKIZBJKTFZIHJRLTOKNPDYHSDYFD", "CEPZJSWMNCKI", "RJWDRYFBKAGJJQSCDLQNAGQAPKDOPHRISPMKPTL", "HEOPEBSY", "JKEGWKOKPCMKVUHVIPVZAQUWKJGLMOJYZOGXYUHQW", "UXDAUDVEVTBYNTMDUPRWUVUVNBDR", "Z", "IVXUBRJSPDPLACMETKIZBJKTFZIHJRLTOKNPDYHSDYFD", "TTJELEGORXBUFRUWDYMSHDBZVPLKIYKBUWGFCOWTLZ", "RJWDRYFBKAGJJQSCDLQNAGQAPKDOPHRISPMKPTL", "VGIQGPREGQHAGDZIL", "JKEGWKOKPCMKVUHVIPVZAQUWKJGLMOJYZOGXYUHQW", "VGIQGPREGQHAGDZIL"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BFAJDIYDDTZHWVPGNWYECEXLGFOF 2", "HEOPEBSY 2", "IVXUBRJSPDPLACMETKIZBJKTFZIHJRLTOKNPDYHSDYFD 2", "JKEGWKOKPCMKVUHVIPVZAQUWKJGLMOJYZOGXYUHQW 2", "RJWDRYFBKAGJJQSCDLQNAGQAPKDOPHRISPMKPTL 3", "UXDAUDVEVTBYNTMDUPRWUVUVNBDR 2", "VGIQGPREGQHAGDZIL 3", "Z 4"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> customerNames = {"FLJXMSUD", "YCSSARTGSK", "QOMCJIAXZGN", "FGSQYGE", "A", "QHMEBHHUFEHE", "YCSSARTGSK", "WVLXO", "SMBP", "FGSQYGE", "QOMCJIAXZGN", "SMBP", "FLJXMSUD", "IEX", "WVLXO", "A", "QOMCJIAXZGN", "QOMCJIAXZGN", "FLJXMSUD", "P", "P", "P", "A", "IEX", "QHMEBHHUFEHE", "FGSQYGE", "FGSQYGE", "FGSQYGE"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A 3", "FGSQYGE 5", "FLJXMSUD 3", "IEX 2", "P 3", "QHMEBHHUFEHE 2", "QOMCJIAXZGN 4", "SMBP 2", "WVLXO 2", "YCSSARTGSK 2"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> customerNames = {"BSABSZQFHZ", "YJFGMOAPNJETRJOGCQWEAJ", "WJMPAPMR", "PIFAJBPBUSVU", "PWMUDNBCNUWEUPONRHCZMCKNTMJMJEHZATTFIXJVRG", "BM", "MGYBCMLOWPVVRRQYZNHXFNYSKOTZOXNAGNBICOYAFVVYMNW", "ZTXQZEESARBXJXAXFFTQGSSCNLBQCLC", "BM", "XHSRQVKHJGFZNYNJ", "XHSRQVKHJGFZNYNJ", "PIFAJBPBUSVU", "ZYUHDTOLWYOFT", "XARSPZQIRC", "EBSGFYYHPCEBZGAGMUXUOPXCCASFMWISXCYFBZM", "NVQAMXC", "XARSPZQIRC", "MGYBCMLOWPVVRRQYZNHXFNYSKOTZOXNAGNBICOYAFVVYMNW", "EBSGFYYHPCEBZGAGMUXUOPXCCASFMWISXCYFBZM", "BGLGTLAGCVFQVSSBHVLJKJJ", "DTVEZWLNQIIEZHIBHAIVYROYTODUPRPUKKZMG", "MGYBCMLOWPVVRRQYZNHXFNYSKOTZOXNAGNBICOYAFVVYMNW", "REVZNTKERV", "EGOTUKHVSUDOHDUJBZBWTTXCPK", "NVQAMXC", "NVQAMXC", "PWMUDNBCNUWEUPONRHCZMCKNTMJMJEHZATTFIXJVRG", "REVZNTKERV", "BSABSZQFHZ", "ZYUHDTOLWYOFT"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BM 2", "BSABSZQFHZ 2", "EBSGFYYHPCEBZGAGMUXUOPXCCASFMWISXCYFBZM 2", "MGYBCMLOWPVVRRQYZNHXFNYSKOTZOXNAGNBICOYAFVVYMNW 3", "NVQAMXC 3", "PIFAJBPBUSVU 2", "PWMUDNBCNUWEUPONRHCZMCKNTMJMJEHZATTFIXJVRG 2", "REVZNTKERV 2", "XARSPZQIRC 2", "XHSRQVKHJGFZNYNJ 2", "ZYUHDTOLWYOFT 2"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> customerNames = {"CGHIUAPHCWF", "DAANPSNFZWCHS", "HXLBPZBFPZCTWWIBGBQCMRQW", "TQLHIKORGIJYLBJPBMRDZHXPMWNPF", "DAANPSNFZWCHS", "NDMTLBF", "HJVUSQDPJC", "DAANPSNFZWCHS", "NDMTLBF", "MLLPXDTXKQOWPBNWI", "BVKXWQ", "YXUTLXZSPKQGQCZHNDQDPHBVASKW", "NDMTLBF", "XGMXUJIPEHKPPQYY", "MP", "HXLBPZBFPZCTWWIBGBQCMRQW", "HXLBPZBFPZCTWWIBGBQCMRQW", "PAWTDMGBPJILGZ", "ZGTIOOGOPPXQLJBWYBBTA", "RDMQFNCFXHOWCGIMMUPEOVULCLAL", "LGSJXESUPTLQVRHUVA", "DAANPSNFZWCHS", "XGMXUJIPEHKPPQYY", "NDMTLBF", "ZGTIOOGOPPXQLJBWYBBTA", "ZGTIOOGOPPXQLJBWYBBTA", "MOMDRZZZKYIFJYTPMKEJCRUEOVHROHFA", "XQLXXOSPQQAPGFZMGCBCCRPTSY"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DAANPSNFZWCHS 4", "HXLBPZBFPZCTWWIBGBQCMRQW 3", "NDMTLBF 4", "XGMXUJIPEHKPPQYY 2", "ZGTIOOGOPPXQLJBWYBBTA 3"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> customerNames = {"KEQSFZYHY", "EYJYXKGIJLMDQWSW", "TAQBMGJRVOIBHDAZFWZ", "SZ", "TAQBMGJRVOIBHDAZFWZ"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"TAQBMGJRVOIBHDAZFWZ 2"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> customerNames = {"DWGHHLG", "QEWADCEBN", "BM", "DWGHHLG", "JIE", "KXYNQUHMQ", "VCOCPGVZ", "AFFGDZSDTQ", "AZM", "E", "QEWADCEBN", "EE", "WLVRZXTY", "JBRZGGFBIY", "FQJ", "WXSH", "E", "DWGHHLG", "AFFGDZSDTQ", "VSI", "KXYNQUHMQ", "JBRZGGFBIY", "JBRZGGFBIY", "KBWZLTMVY", "FQJ", "QEWADCEBN", "VSI", "NF", "PD", "PD", "DWGHHLG", "SDMPWNHNQR"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AFFGDZSDTQ 2", "DWGHHLG 4", "E 2", "FQJ 2", "JBRZGGFBIY 3", "KXYNQUHMQ 2", "PD 2", "QEWADCEBN 3", "VSI 2"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> customerNames = {"ZWGDG", "SPXDC", "SPXDC", "TLRHLJ", "ZOGFNZTVYILYYJOXDBMOBMM", "WWGFCQJDQUXAXVVWENJWSU", "DJSKWUDUSMHQMQGJVHXMKLYOGIDFMASSJME", "TLRHLJ", "ENPYXCHYYFEEKWPPMJMOI", "JHOYQKRLPXAEXXHHWHMCNY", "WWGFCQJDQUXAXVVWENJWSU", "QMQMGJWMQKXQDJQVBUATKZW", "ENPYXCHYYFEEKWPPMJMOI", "TLRHLJ", "QMQMGJWMQKXQDJQVBUATKZW", "AUSEEHRLGTWSRIGHLKXTKAQPC", "TIPZEV", "ZWGDG", "TIPZEV"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ENPYXCHYYFEEKWPPMJMOI 2", "QMQMGJWMQKXQDJQVBUATKZW 2", "SPXDC 2", "TIPZEV 2", "TLRHLJ 3", "WWGFCQJDQUXAXVVWENJWSU 2", "ZWGDG 2"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> customerNames = {"OKBQFLPDZNALSBGWUMSBZYHYXVYLQHSEUTW", "GLDHZFUTGAPCNHGMINMFJMQBVKGP", "GLDHZFUTGAPCNHGMINMFJMQBVKGP", "OKBQFLPDZNALSBGWUMSBZYHYXVYLQHSEUTW", "OKBQFLPDZNALSBGWUMSBZYHYXVYLQHSEUTW", "OKBQFLPDZNALSBGWUMSBZYHYXVYLQHSEUTW", "GLDHZFUTGAPCNHGMINMFJMQBVKGP", "GLDHZFUTGAPCNHGMINMFJMQBVKGP", "GLDHZFUTGAPCNHGMINMFJMQBVKGP"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"GLDHZFUTGAPCNHGMINMFJMQBVKGP 5", "OKBQFLPDZNALSBGWUMSBZYHYXVYLQHSEUTW 4"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> customerNames = {"ZOEIUSQIGVTS", "SNYJVXM", "T", "VRLUMYUVVRJJOH", "EMGBDICWYJV", "AXSULOIK", "A", "OGZDQY", "JIEGHDNCLTR", "UOYCFEHWRXS", "L", "VY", "OWDYGUZUBHPTA", "VY", "EMGBDICWYJV", "YTWTTVVRPQEGAQ", "OWDYGUZUBHPTA", "VRLUMYUVVRJJOH", "L", "OGZDQY", "LDEEZBCSTSW", "UOYCFEHWRXS", "L", "A", "WUF", "INRGNGQURTYXUAZ", "INRGNGQURTYXUAZ", "CKMOFRCULX", "JIEGHDNCLTR", "ZOEIUSQIGVTS", "PH", "YZFMVDMNUVJTP", "SNYJVXM", "NLPQYANI", "VPCZQOHXUQCJSN", "CKMOFRCULX", "EMGBDICWYJV", "OQAMJXHVNDALLXK", "YUOAYBE", "YUOAYBE", "YTWTTVVRPQEGAQ", "MW", "YUOAYBE"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A 2", "CKMOFRCULX 2", "EMGBDICWYJV 3", "INRGNGQURTYXUAZ 2", "JIEGHDNCLTR 2", "L 3", "OGZDQY 2", "OWDYGUZUBHPTA 2", "SNYJVXM 2", "UOYCFEHWRXS 2", "VRLUMYUVVRJJOH 2", "VY 2", "YTWTTVVRPQEGAQ 2", "YUOAYBE 3", "ZOEIUSQIGVTS 2"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> customerNames = {"AWSATDOBTKPZHLEJY", "QDURTKXNG", "OKQXVGAREJGQKADHUUAYO", "DEYWNHFEPUKIBQWO", "PXMUCBQOJRGHFEL", "AWSATDOBTKPZHLEJY", "TDAXQEJHYULOIQUMG", "DEYWNHFEPUKIBQWO", "GSFDOLFF", "GSFDOLFF", "TDAXQEJHYULOIQUMG", "AWSATDOBTKPZHLEJY", "DEYWNHFEPUKIBQWO", "UZBPZVNTO", "DEYWNHFEPUKIBQWO", "WECN", "QMHBOKKLGKL", "PXMUCBQOJRGHFEL", "QMHBOKKLGKL", "AWSATDOBTKPZHLEJY", "GSFDOLFF", "GSFDOLFF", "QDURTKXNG"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AWSATDOBTKPZHLEJY 4", "DEYWNHFEPUKIBQWO 4", "GSFDOLFF 4", "PXMUCBQOJRGHFEL 2", "QDURTKXNG 2", "QMHBOKKLGKL 2", "TDAXQEJHYULOIQUMG 2"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> customerNames = {"JTPXPHZZMZ", "MGDUYUFTZXAW", "PWBQXVCYZHHUYG", "HFXJYJSKQK", "HFXJYJSKQK", "PWBQXVCYZHHUYG", "UOWEYMGSPITFSHW", "TH", "SZZCISQ", "MFZRHAGPXRBXTLA", "YNWQFNQRNVVILSTII", "PWBQXVCYZHHUYG", "HHTRAHKCSMJK", "IDQHZSFAC", "UCWEKER", "EHRLTZJ", "MXDDTQV", "HHTRAHKCSMJK", "AWLFJFUVC", "PCDGNRNWPJXGPQ", "AWLFJFUVC", "HHTRAHKCSMJK", "AWLFJFUVC", "PWBQXVCYZHHUYG", "JXBS", "TQBKDYCOVIDNUOKVJ", "HPSGQXOKNFHYWYOGR", "TQBKDYCOVIDNUOKVJ", "PHJIWFF", "HHTRAHKCSMJK", "VLKA", "MFZRHAGPXRBXTLA", "TUBZUKZD", "TQBKDYCOVIDNUOKVJ", "W", "JTPXPHZZMZ", "VLKA", "UOWEYMGSPITFSHW", "W", "W", "MXDDTQV", "YNWQFNQRNVVILSTII"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AWLFJFUVC 3", "HFXJYJSKQK 2", "HHTRAHKCSMJK 4", "JTPXPHZZMZ 2", "MFZRHAGPXRBXTLA 2", "MXDDTQV 2", "PWBQXVCYZHHUYG 4", "TQBKDYCOVIDNUOKVJ 3", "UOWEYMGSPITFSHW 2", "VLKA 2", "W 3", "YNWQFNQRNVVILSTII 2"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> customerNames = {"U", "U", "WUP", "ZYE", "U", "ROTFV", "Y", "ZYE", "Q", "NGQY", "QCI", "Q", "V", "QCI", "DSDG", "MAF", "ZYE", "DSDG", "MAF"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DSDG 2", "MAF 2", "Q 2", "QCI 2", "U 3", "ZYE 3"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> customerNames = {"PUQLATXKR", "PRBJ", "IA", "IA", "IA", "PUQLATXKR", "PRBJ", "PRBJ", "IA", "IA", "IA", "PUQLATXKR", "IA", "PUQLATXKR", "IA", "IA", "PUQLATXKR", "IA", "PRBJ", "PRBJ", "PUQLATXKR", "PUQLATXKR", "IA"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"IA 11", "PRBJ 5", "PUQLATXKR 7"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> customerNames = {"PFTGXZHPNUOXEGAGIXSNBUJFFPCMKIVBPOIMNRDDNRCUZDA", "MRLKAHQWQDAFPHRFUMGRAKZMMPCL", "SVEUDJLCSMUXITOKNUEONFDPSXPMAEYUBEPGOCI", "RUMJJUFPUWWTEUBIFC", "KU", "IJAXOWUGTXFUKAGEEKSYDLLPONTIANSIZUINR", "JQETIUHAKIDTYKKOXAVPEFNGVKETZFPIVUD", "QLQNZDJQEPNLPFREKWZOXWYNB", "IJAXOWUGTXFUKAGEEKSYDLLPONTIANSIZUINR", "EAJZHNZVDRXYISMTDGBSCXQYCLZKSD", "EAJZHNZVDRXYISMTDGBSCXQYCLZKSD", "QEHBYXLLTRBGXFYPEPDEVDZWIQDYUNGK", "EAJZHNZVDRXYISMTDGBSCXQYCLZKSD", "WBIHMHTANYWEBVNAKJZEWJUDTHLENLFLONTBU", "BWZNVLSBENSTTMKD", "TSHMGSNP", "KU", "KU", "VXXPRGVKSQNW", "TSHMGSNP", "SVEUDJLCSMUXITOKNUEONFDPSXPMAEYUBEPGOCI", "WBIHMHTANYWEBVNAKJZEWJUDTHLENLFLONTBU", "JQETIUHAKIDTYKKOXAVPEFNGVKETZFPIVUD", "TIWEFMPQCZSUSNFUFARFXGYGBJATYWGTHCAMQPC", "KU", "ATXCNJJSANGMXBOMRYAHPEKEXMYZRZJSUIWJRFDU", "MRLKAHQWQDAFPHRFUMGRAKZMMPCL", "WGZYPMXLSQISACEUGLVAP", "IJAXOWUGTXFUKAGEEKSYDLLPONTIANSIZUINR", "QEHBYXLLTRBGXFYPEPDEVDZWIQDYUNGK", "RNYEPKWUAVAZTQNSBHJLZJOEFURCWGZNWXTLIQFKLILEY", "QEHBYXLLTRBGXFYPEPDEVDZWIQDYUNGK", "PFTGXZHPNUOXEGAGIXSNBUJFFPCMKIVBPOIMNRDDNRCUZDA", "NCHPAFCCLXKDGQTPNDSQKQSQGQOYNSNDUWS", "WBIHMHTANYWEBVNAKJZEWJUDTHLENLFLONTBU", "SVEUDJLCSMUXITOKNUEONFDPSXPMAEYUBEPGOCI", "DIMCOPXBR", "PFTGXZHPNUOXEGAGIXSNBUJFFPCMKIVBPOIMNRDDNRCUZDA", "VXXPRGVKSQNW", "DIMCOPXBR", "EAJZHNZVDRXYISMTDGBSCXQYCLZKSD", "KU", "KU", "ATXCNJJSANGMXBOMRYAHPEKEXMYZRZJSUIWJRFDU", "BWZNVLSBENSTTMKD"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ATXCNJJSANGMXBOMRYAHPEKEXMYZRZJSUIWJRFDU 2", "BWZNVLSBENSTTMKD 2", "DIMCOPXBR 2", "EAJZHNZVDRXYISMTDGBSCXQYCLZKSD 4", "IJAXOWUGTXFUKAGEEKSYDLLPONTIANSIZUINR 3", "JQETIUHAKIDTYKKOXAVPEFNGVKETZFPIVUD 2", "KU 6", "MRLKAHQWQDAFPHRFUMGRAKZMMPCL 2", "PFTGXZHPNUOXEGAGIXSNBUJFFPCMKIVBPOIMNRDDNRCUZDA 3", "QEHBYXLLTRBGXFYPEPDEVDZWIQDYUNGK 3", "SVEUDJLCSMUXITOKNUEONFDPSXPMAEYUBEPGOCI 3", "TSHMGSNP 2", "VXXPRGVKSQNW 2", "WBIHMHTANYWEBVNAKJZEWJUDTHLENLFLONTBU 3"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> customerNames = {"JYREYHYAEIZQFNQPCZUGTNJ", "RWBQLRKB", "BCBNQI", "LFYHPBWM", "PEFZ", "JVKJOAWGRMDVWIRWCTY", "LFYHPBWM", "JYREYHYAEIZQFNQPCZUGTNJ", "LFYHPBWM", "O", "SPE", "X", "RN", "ULPPBAYSF", "SPE", "XNNKDCFVJHBEZKAMCPPENHKC", "AOYIPMIAUFJFQMD", "EMWONNMK", "RN", "IPYFWKKOWPDKNE", "XNNKDCFVJHBEZKAMCPPENHKC", "UAVIYLXMY", "ULPPBAYSF", "QIMQPVRFAEVR", "RN", "JLMAA", "QIMQPVRFAEVR", "PJFCSTCQBUFEPB", "SPE", "XNNKDCFVJHBEZKAMCPPENHKC", "GRWI", "X", "XP", "SPE", "X", "O", "QIMQPVRFAEVR", "JVKJOAWGRMDVWIRWCTY", "QIMQPVRFAEVR"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JVKJOAWGRMDVWIRWCTY 2", "JYREYHYAEIZQFNQPCZUGTNJ 2", "LFYHPBWM 3", "O 2", "QIMQPVRFAEVR 4", "RN 3", "SPE 4", "ULPPBAYSF 2", "X 3", "XNNKDCFVJHBEZKAMCPPENHKC 3"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> customerNames = {"FATMSEOHEAPIAHDRJGTGYURBFHZLFS", "MUCYMIMWMONUPUXIDEBLEVCF", "JGUUJZDWDKEBVRKYHCNXSOZTYYN", "KH", "KH", "MHCAQTPCDZVRZLBLOYGYQ", "VECJMRF", "RBZ", "AWXJESFOTKMWUSZPJJPTLDQGTRZRQOCSLABR", "RBZ", "KH", "VECJMRF", "H", "RBZ", "NTSLOMKFWTVPGAHMTYNKQEMIROKIKTOXOI", "KH", "H", "VECJMRF", "FJWHQKAP", "AWXJESFOTKMWUSZPJJPTLDQGTRZRQOCSLABR", "JGUUJZDWDKEBVRKYHCNXSOZTYYN", "MHCAQTPCDZVRZLBLOYGYQ", "AWXJESFOTKMWUSZPJJPTLDQGTRZRQOCSLABR", "VECJMRF", "NTSLOMKFWTVPGAHMTYNKQEMIROKIKTOXOI", "FUTWORHT", "KH", "H", "FJWHQKAP", "FJWHQKAP", "NTSLOMKFWTVPGAHMTYNKQEMIROKIKTOXOI"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AWXJESFOTKMWUSZPJJPTLDQGTRZRQOCSLABR 3", "FJWHQKAP 3", "H 3", "JGUUJZDWDKEBVRKYHCNXSOZTYYN 2", "KH 5", "MHCAQTPCDZVRZLBLOYGYQ 2", "NTSLOMKFWTVPGAHMTYNKQEMIROKIKTOXOI 3", "RBZ 3", "VECJMRF 4"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> customerNames = {"QGEDAC", "QGEDAC", "ZCAJJRNTIVYUQV", "QGGBGOB", "RYVTFRRSOWEPC", "ZF", "ZCAJJRNTIVYUQV", "ZJZRIHHMTUNPW", "BBHXTVHNTXDPOP", "QGEDAC", "RYVTFRRSOWEPC", "ZF", "ZCAJJRNTIVYUQV", "ZCAJJRNTIVYUQV", "ZF", "RYVTFRRSOWEPC", "BNFFXYDXPHP", "QGEDAC", "MAEB", "ZRKHP", "S", "IRIDMTXSG", "ZF", "MAEB", "YXGYT", "BBHXTVHNTXDPOP", "CXUJ", "BNFFXYDXPHP", "ZJZRIHHMTUNPW"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBHXTVHNTXDPOP 2", "BNFFXYDXPHP 2", "MAEB 2", "QGEDAC 4", "RYVTFRRSOWEPC 3", "ZCAJJRNTIVYUQV 4", "ZF 4", "ZJZRIHHMTUNPW 2"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> customerNames = {"MABDA", "JS", "JXJGHOLJ", "LYHWIGNF", "TDTCCXNNLVE", "JXJGHOLJ", "WOGFHY", "LYHWIGNF", "AVYGPR", "URH", "IIWEJ", "TDTCCXNNLVE", "TDTCCXNNLVE", "NYKVBDNCL", "WOGFHY", "WOGFHY", "LYHWIGNF", "URH", "WTYXIGGGGEJ", "JXJGHOLJ", "AVYGPR", "BKOKDM", "KXPXBCIV", "JS", "TDTCCXNNLVE", "UDPEHD", "LYHWIGNF", "PAYXIMJT", "IIWEJ", "AVYGPR", "MABDA", "UQJBOYQQZTR", "MF", "ZDU"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AVYGPR 3", "IIWEJ 2", "JS 2", "JXJGHOLJ 3", "LYHWIGNF 4", "MABDA 2", "TDTCCXNNLVE 4", "URH 2", "WOGFHY 3"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> customerNames = {"EBUYYNJZOZ", "MWORFIGMYHVQH", "UTRSKGRTKOFJWO", "UTRSKGRTKOFJWO", "EBUYYNJZOZ", "SVSPJMUUSGUZD", "SVSPJMUUSGUZD", "V", "XNFNG", "J", "J", "QJLNJZNCOTIUQEF", "JHXUHLTWJINSVA", "JHXUHLTWJINSVA", "YRMG", "W", "GLJJ", "V", "GLJJ", "YSAFFGUMHQZJ", "QJLNJZNCOTIUQEF", "YRMG", "V", "J", "EBUYYNJZOZ", "W", "J", "HY", "V"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"EBUYYNJZOZ 3", "GLJJ 2", "J 4", "JHXUHLTWJINSVA 2", "QJLNJZNCOTIUQEF 2", "SVSPJMUUSGUZD 2", "UTRSKGRTKOFJWO 2", "V 4", "W 2", "YRMG 2"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> customerNames = {"VKADALSVOHEPFJOIHOL", "ZCVAAIKWGYLGAYYMXYMQIQLPTBOJY", "CXBYZDIJBPIMVKNVY", "ZCVAAIKWGYLGAYYMXYMQIQLPTBOJY", "VKADALSVOHEPFJOIHOL", "CXBYZDIJBPIMVKNVY", "ZCVAAIKWGYLGAYYMXYMQIQLPTBOJY"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CXBYZDIJBPIMVKNVY 2", "VKADALSVOHEPFJOIHOL 2", "ZCVAAIKWGYLGAYYMXYMQIQLPTBOJY 3"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> customerNames = {"GTK", "F", "H", "ITYYG", "F", "F", "EXDJC", "PVFJH", "E", "H", "E", "COG", "E", "H", "EXDJC", "ITYYG", "PVFJH"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"E 3", "EXDJC 2", "F 3", "H 3", "ITYYG 2", "PVFJH 2"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> customerNames = {"AQFZXSMXVVWX", "DYL", "EVACWEOWPB", "PZMKZO", "PZMKZO", "PZMKZO", "GHGSXGNNYBHZBLF", "GHGSXGNNYBHZBLF", "AQFZXSMXVVWX", "CGYROCDCSTCOVFYGJ", "AQFZXSMXVVWX", "EVACWEOWPB", "CVEH", "GHGSXGNNYBHZBLF", "LPATOPOTZ", "GHGSXGNNYBHZBLF", "PZMKZO", "YBEMYJKESI", "PZMKZO", "CVEH"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AQFZXSMXVVWX 3", "CVEH 2", "EVACWEOWPB 2", "GHGSXGNNYBHZBLF 4", "PZMKZO 5"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> customerNames = {"HRWPO", "NUPSKTEIEXZVXYF", "JR", "NUPSKTEIEXZVXYF", "JR", "GWBZOITQTUBZQHMWK", "JR", "QM", "BRNNDOEL", "SXMACLC", "KRFIP", "YZVY", "RA", "SXMACLC", "H", "YZVY", "JR", "H", "LIFPQAO", "JR", "RWYEVQYVE", "CSRESCJZJ", "CSRESCJZJ", "KRFIP", "YZVY", "LIFPQAO", "LIFPQAO", "UDLGDCKPUUOORZYZQQ"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CSRESCJZJ 2", "H 2", "JR 5", "KRFIP 2", "LIFPQAO 3", "NUPSKTEIEXZVXYF 2", "SXMACLC 2", "YZVY 3"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> customerNames = {"EJWVXGIEAYSPFEIPFKMJRZ", "D", "MJKMVDFYTYZOYNUGTXAP", "TZSXOGGDBTUMTPNDJVEHQ", "VEYYPTCWJQLVCZSFEQ", "GKTIZBXDFLLKHOATMM", "BCROUIVTYCJ", "NPVNRMKLF", "IQ", "AHTSWEBMINEDOFDUDNMY", "IQ", "MJKMVDFYTYZOYNUGTXAP", "NVDNXTQYDZD", "OCAUOLCAV", "NPVNRMKLF", "NVDNXTQYDZD", "ACNLJPVLPJXUBISGAWVFFTYAJRQD", "OCAUOLCAV", "OO", "OO", "NVDNXTQYDZD", "FAHCZOKDQLXFQCNFHXRSOQQSZD", "UGGYVALEOKQPLJQBLQVBB", "FSODHKJAHLQQG", "MUMJX", "NPVNRMKLF", "FAHCZOKDQLXFQCNFHXRSOQQSZD", "MUMJX", "EJWVXGIEAYSPFEIPFKMJRZ", "OO", "FSODHKJAHLQQG", "ACNLJPVLPJXUBISGAWVFFTYAJRQD", "ISSWBRJXZRVUR", "MUMJX", "D", "TZSXOGGDBTUMTPNDJVEHQ", "ISSWBRJXZRVUR", "HHARKEJBZTW", "NVDNXTQYDZD", "BCROUIVTYCJ", "HHARKEJBZTW"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ACNLJPVLPJXUBISGAWVFFTYAJRQD 2", "BCROUIVTYCJ 2", "D 2", "EJWVXGIEAYSPFEIPFKMJRZ 2", "FAHCZOKDQLXFQCNFHXRSOQQSZD 2", "FSODHKJAHLQQG 2", "HHARKEJBZTW 2", "IQ 2", "ISSWBRJXZRVUR 2", "MJKMVDFYTYZOYNUGTXAP 2", "MUMJX 3", "NPVNRMKLF 3", "NVDNXTQYDZD 4", "OCAUOLCAV 2", "OO 3", "TZSXOGGDBTUMTPNDJVEHQ 2"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> customerNames = {"XHWCTXWHJWNMLIFMUJTVDICPNTTR", "JEKZZSPOMLPHE", "PMFFFYWXJXNBSGONZITMQLOILDUVKBL", "BPOFKASOMZDBPV", "B", "LAXUQ", "PMFFFYWXJXNBSGONZITMQLOILDUVKBL", "B", "PMFFFYWXJXNBSGONZITMQLOILDUVKBL", "ZTRRKSUENWKM", "JZOSVSLURSENHSAQZOMIHH", "NSFVQD", "PMFFFYWXJXNBSGONZITMQLOILDUVKBL", "PMFFFYWXJXNBSGONZITMQLOILDUVKBL", "RYREFQVIONSTAUTXLRWELNQDJURFGD", "PMFFFYWXJXNBSGONZITMQLOILDUVKBL", "JZOSVSLURSENHSAQZOMIHH", "XHWCTXWHJWNMLIFMUJTVDICPNTTR", "B", "RYREFQVIONSTAUTXLRWELNQDJURFGD", "JZOSVSLURSENHSAQZOMIHH", "HCUPSHOBCCRQRZD", "JEKZZSPOMLPHE", "JZOSVSLURSENHSAQZOMIHH"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B 3", "JEKZZSPOMLPHE 2", "JZOSVSLURSENHSAQZOMIHH 4", "PMFFFYWXJXNBSGONZITMQLOILDUVKBL 6", "RYREFQVIONSTAUTXLRWELNQDJURFGD 2", "XHWCTXWHJWNMLIFMUJTVDICPNTTR 2"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> customerNames = {"DOEOUQWZFNNTYZCGEFYJQKJIDEBLPT", "RTIGTY", "GXUZVTQSMZ", "DOEOUQWZFNNTYZCGEFYJQKJIDEBLPT", "DOEOUQWZFNNTYZCGEFYJQKJIDEBLPT", "HKXXF", "PXZTWXLGKIFPPLMLKJGDDSE", "SIBJERHGXVTSVSVEXACISOTBUXEHOYC", "CMYOIVYIEXY", "SIBJERHGXVTSVSVEXACISOTBUXEHOYC"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DOEOUQWZFNNTYZCGEFYJQKJIDEBLPT 3", "SIBJERHGXVTSVSVEXACISOTBUXEHOYC 2"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> customerNames = {"TUMENSELSFTSEDUWRAKOOSJYYSM", "AUJZQZSWZJJLENFVBIYWBA", "VHYYEWSGGIUASUAKGZUMQWOTFFQRH", "EYRNMVCSOMBDVQATEAABGZN", "LCPLDTHVZ", "LYHLCPGTKJNHNWWNYFVFZKCYGZXWN", "FBUGJUUTWQEVGDN", "VHYYEWSGGIUASUAKGZUMQWOTFFQRH", "TUMENSELSFTSEDUWRAKOOSJYYSM", "HFPCCDGPVMAP", "TUMENSELSFTSEDUWRAKOOSJYYSM", "FBUGJUUTWQEVGDN", "TUMENSELSFTSEDUWRAKOOSJYYSM", "HFPCCDGPVMAP", "LYHLCPGTKJNHNWWNYFVFZKCYGZXWN", "HFPCCDGPVMAP", "TUMENSELSFTSEDUWRAKOOSJYYSM", "HFPCCDGPVMAP", "TUMENSELSFTSEDUWRAKOOSJYYSM", "LYHLCPGTKJNHNWWNYFVFZKCYGZXWN", "LCPLDTHVZ", "TUMENSELSFTSEDUWRAKOOSJYYSM", "DYLQEYYZZGAXHARODMXOITHEJOBPR", "EYRNMVCSOMBDVQATEAABGZN", "AUJZQZSWZJJLENFVBIYWBA"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AUJZQZSWZJJLENFVBIYWBA 2", "EYRNMVCSOMBDVQATEAABGZN 2", "FBUGJUUTWQEVGDN 2", "HFPCCDGPVMAP 4", "LCPLDTHVZ 2", "LYHLCPGTKJNHNWWNYFVFZKCYGZXWN 3", "TUMENSELSFTSEDUWRAKOOSJYYSM 7", "VHYYEWSGGIUASUAKGZUMQWOTFFQRH 2"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> customerNames = {"IJELJRFLPNN", "WRARVCTVEDENWAJDBOAU", "PKXVGOSYFAXXEIDF", "HDELARJXKBQTTEBBYAK", "JQUUHBFXRVXYABJAVVZ", "B", "YGCCNYFNTVBZVIEXUR", "FOBPMVBYLUAW", "JSMIGTW", "HTAHVKVC", "ZGNLINNHZHO", "HTAHVKVC", "ZGNLINNHZHO", "K", "RURBVW", "MDAHDAMNNWZJZRLHTBII", "STWSMJZFKJ", "PKXVGOSYFAXXEIDF", "KKWBRCGANAPAQVZBHTDXV", "HDELARJXKBQTTEBBYAK", "YSWGKGDFOTXNY", "EVALGIYAILGHNGV", "OXLHTYJVSAQIFJBXAXK", "YSWGKGDFOTXNY", "K", "MDAHDAMNNWZJZRLHTBII", "B", "K", "FFHLS", "JQUUHBFXRVXYABJAVVZ", "HDELARJXKBQTTEBBYAK", "NGZZY", "STWSMJZFKJ", "HDELARJXKBQTTEBBYAK", "NIWSMLQRALMBMJLQJFKVA", "HTAHVKVC", "K", "K", "NGZZY", "NIWSMLQRALMBMJLQJFKVA"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B 2", "HDELARJXKBQTTEBBYAK 4", "HTAHVKVC 3", "JQUUHBFXRVXYABJAVVZ 2", "K 5", "MDAHDAMNNWZJZRLHTBII 2", "NGZZY 2", "NIWSMLQRALMBMJLQJFKVA 2", "PKXVGOSYFAXXEIDF 2", "STWSMJZFKJ 2", "YSWGKGDFOTXNY 2", "ZGNLINNHZHO 2"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> customerNames = {"KRGU", "KRGU", "KRGU", "KRGU", "KRGU", "KRGU", "KRGU", "KRGU", "KRGU", "KRGU", "KRGU", "KRGU", "KRGU", "KRGU"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"KRGU 14"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> customerNames = {"QLGWEVCYCFWIOVXGKSXDTWL", "ZJEHZORQSFAHDRORT", "ZJEHZORQSFAHDRORT", "NDD", "ZQKYSMWRECSAL", "VAQSVNLYNYGYBINUFPNPNFEJYINSKYBGZRYWELUTKCTN", "FUADXMYCVUMQMRPHQBGBSEVSNBFQGTULNVRMHPOEJCV", "TDALGJCCPR", "KD", "NDD", "TDALGJCCPR", "QLGWEVCYCFWIOVXGKSXDTWL", "QLGWEVCYCFWIOVXGKSXDTWL", "CRGGSXXN", "APTDYYNZBBDLTHFDZOPVVUDPFY", "EEVZETKVYGPV", "KD", "TMFJNNMGRIAHLFXRARENOVZWKPCWSXTLJAXZOJHHTHOGONZP", "EUEDWGHXNSOVORZZHIMKUMEP", "EEVZETKVYGPV", "PWIXRHCCSCLOG", "DHCAISJPBFWSLMFLBOPGMQMFCJDKZBMCKQESKPJLUHDITLTV"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"EEVZETKVYGPV 2", "KD 2", "NDD 2", "QLGWEVCYCFWIOVXGKSXDTWL 3", "TDALGJCCPR 2", "ZJEHZORQSFAHDRORT 2"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> customerNames = {"LBTEKDFJFC", "LBTEKDFJFC", "RPGKCTTMKRGTEKICLINFS", "QOHNRFYTPUPXKZV", "IWXV", "RPGKCTTMKRGTEKICLINFS", "RAKNPSLWRUPUUBM", "QPTACBUDG", "BXCVHJKRUDVLZITWIQK", "QOHNRFYTPUPXKZV", "BXCVHJKRUDVLZITWIQK", "HKPSUHHNKLQEPW", "BXCVHJKRUDVLZITWIQK", "QOHNRFYTPUPXKZV", "QPTACBUDG", "BXCVHJKRUDVLZITWIQK", "HKPSUHHNKLQEPW", "DKLSCUPHYGZHRDAMPMEYGK", "PIKIDZDZARG", "ZUGC", "RPGKCTTMKRGTEKICLINFS", "TDNOQRJUBNBKUFDLTK", "BXCVHJKRUDVLZITWIQK", "QPTACBUDG", "ZUGC", "ZUGC", "BXCVHJKRUDVLZITWIQK", "RAKNPSLWRUPUUBM", "RPGKCTTMKRGTEKICLINFS", "HKPSUHHNKLQEPW", "LBTEKDFJFC", "LBTEKDFJFC"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BXCVHJKRUDVLZITWIQK 6", "HKPSUHHNKLQEPW 3", "LBTEKDFJFC 4", "QOHNRFYTPUPXKZV 3", "QPTACBUDG 3", "RAKNPSLWRUPUUBM 2", "RPGKCTTMKRGTEKICLINFS 4", "ZUGC 3"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> customerNames = {"EHSYYODJYBJC", "QSOQTXXD", "EHASXURUFJKVAEUVMGUOOFUKUSKKGMCM", "QSOQTXXD", "IBTIK", "IBTIK", "EHASXURUFJKVAEUVMGUOOFUKUSKKGMCM", "YAKDHICZBJFIDEAUGELVEKKP", "QSOQTXXD", "MYJGFWGHI", "BDQFIMQS", "IBTIK", "BDQFIMQS", "BDQFIMQS", "EHASXURUFJKVAEUVMGUOOFUKUSKKGMCM", "VJQNQOUWVGKYBIJGUOWYOMB", "EHASXURUFJKVAEUVMGUOOFUKUSKKGMCM", "LZSXFORKAQLYMCBKNLRBAYBVINAV", "KVKGUUELWBWWPDWKH", "PTZEVBQKMHMOGPJQFLMCAEKQPSMRSSSJ", "MPHYVIMFLHN", "MYJGFWGHI", "YAKDHICZBJFIDEAUGELVEKKP", "LZSXFORKAQLYMCBKNLRBAYBVINAV", "FRDBFUGBECVPNEDRQYVXSTXGYJFZSJ", "EHSYYODJYBJC", "BDQFIMQS", "AWKAOFXVEGAFBLEA", "TDHZALRMHEKWLCECIF", "ZAEAHYHICJGTYKW", "EHASXURUFJKVAEUVMGUOOFUKUSKKGMCM"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BDQFIMQS 4", "EHASXURUFJKVAEUVMGUOOFUKUSKKGMCM 5", "EHSYYODJYBJC 2", "IBTIK 3", "LZSXFORKAQLYMCBKNLRBAYBVINAV 2", "MYJGFWGHI 2", "QSOQTXXD 3", "YAKDHICZBJFIDEAUGELVEKKP 2"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> customerNames = {"VTSYD", "G", "F", "G", "VTSYD", "QZIHEIZTN", "QZIHEIZTN", "VTSYD", "QZIHEIZTN", "VTSYD", "NIULY", "F", "G", "QZIHEIZTN", "SZQA", "SZQA", "VTSYD", "NIULY", "VTSYD", "QZIHEIZTN", "VTSYD", "VTSYD", "TRIPFQCBK", "TRIPFQCBK", "G"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"F 2", "G 4", "NIULY 2", "QZIHEIZTN 5", "SZQA 2", "TRIPFQCBK 2", "VTSYD 8"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> customerNames = {"QSDHUFKZGWUH", "DVKCMYMD", "UVQYZM", "ABDZRLKOS", "CBDCZK", "U", "UVQYZM", "ECS", "BXOLBFJTZYF", "UQIER", "CBDCZK", "HYCC", "BXOLBFJTZYF", "HYCC", "CBDCZK", "UVQYZM", "BXOLBFJTZYF", "UVQYZM"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BXOLBFJTZYF 3", "CBDCZK 3", "HYCC 2", "UVQYZM 4"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> customerNames = {"UOBHZKFKPTETX", "KEYEMKMYZQVWS", "XBCM", "PVZYJXUPKYOONA", "FHMGTVPFK", "STPKILLJWI", "LBS", "KEYEMKMYZQVWS", "KXFXLCKQ", "FNLVNFPDDFJMYU", "PVZYJXUPKYOONA", "EC", "UOBHZKFKPTETX", "KEYEMKMYZQVWS", "KEYEMKMYZQVWS", "KEYEMKMYZQVWS", "STPKILLJWI", "UOBHZKFKPTETX", "PVZYJXUPKYOONA"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"KEYEMKMYZQVWS 5", "PVZYJXUPKYOONA 3", "STPKILLJWI 2", "UOBHZKFKPTETX 3"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> customerNames = {"KUOFSOHTIVPIAYIF", "LRWCKHNZKRXUVJFG", "ATAASDSFDFNGAVYYAB", "ZRLVTXDIWNCWJXH", "JFGVTQRJYJXHEFDWQF", "ODZRL", "KUOFSOHTIVPIAYIF", "EYKBKJLISJKDOXCZDTFWQ", "GJRMPOHIFQIQNPVUUTKCP", "GJRMPOHIFQIQNPVUUTKCP", "OQUUGRYV", "ZRLVTXDIWNCWJXH", "AOAYWAKV", "LO", "OWYFHZCPGLCDOXE", "QJIVM", "HFUDRTR", "IAQYU", "LRWCKHNZKRXUVJFG", "ZRLVTXDIWNCWJXH", "ALFNZIFPGRUCOBLPR", "DLSLWLXNAGXHWFYLXVGT", "JFGVTQRJYJXHEFDWQF", "KYLIDVGQ", "YKMODIIJZ", "LO", "IAQYU", "KUOFSOHTIVPIAYIF", "SVF", "JFGVTQRJYJXHEFDWQF", "RTKGXLYHWH", "OWYFHZCPGLCDOXE", "HFUDRTR", "KUOFSOHTIVPIAYIF", "ODZRL", "KUOFSOHTIVPIAYIF", "FBQYGVFJDORFDYZC", "KYLIDVGQ", "GJRMPOHIFQIQNPVUUTKCP"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"GJRMPOHIFQIQNPVUUTKCP 3", "HFUDRTR 2", "IAQYU 2", "JFGVTQRJYJXHEFDWQF 3", "KUOFSOHTIVPIAYIF 5", "KYLIDVGQ 2", "LO 2", "LRWCKHNZKRXUVJFG 2", "ODZRL 2", "OWYFHZCPGLCDOXE 2", "ZRLVTXDIWNCWJXH 3"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> customerNames = {"WPXFBTIQIKF", "QIUD", "CXEKNPWSFHCKPTJGFLITCZ", "SRESRLOZAMSVXBRLEGFUCXZW", "ZJ", "CVXEWGHCGFCQHZIT", "MMEUFPLJFPACRAZANEEWNDE", "MMEUFPLJFPACRAZANEEWNDE", "UPZDOFPHU", "BUZBRGFFS", "UPZDOFPHU", "BUZBRGFFS", "LIEIPXPMAZMRPHXJYENVU", "YED", "ZJBEYYAJAXQMKHIEM", "ZJ", "OK", "CVXEWGHCGFCQHZIT", "WPXFBTIQIKF", "SIYAZHUIMYTVJHUOCMUQWPC", "PBPBRVAYWJLFCJHZGNXOXAUE", "SRESRLOZAMSVXBRLEGFUCXZW", "CVXEWGHCGFCQHZIT", "PBPBRVAYWJLFCJHZGNXOXAUE", "SIYAZHUIMYTVJHUOCMUQWPC", "FCJHKNYDVSGMIVMVJBJ", "SRESRLOZAMSVXBRLEGFUCXZW", "PBPBRVAYWJLFCJHZGNXOXAUE", "CWAIFITGJWDNPAPEZBQWHQH"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BUZBRGFFS 2", "CVXEWGHCGFCQHZIT 3", "MMEUFPLJFPACRAZANEEWNDE 2", "PBPBRVAYWJLFCJHZGNXOXAUE 3", "SIYAZHUIMYTVJHUOCMUQWPC 2", "SRESRLOZAMSVXBRLEGFUCXZW 3", "UPZDOFPHU 2", "WPXFBTIQIKF 2", "ZJ 2"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> customerNames = {"VTZ", "QY", "KUWZT", "VTZ", "RO", "IBXSN", "QY", "QY", "IBXSN", "JKMIQND", "VO", "KUWZT", "QY", "IBXSN", "H", "WU", "YZJXYV", "TJ", "LBT", "OF", "DYKPYAZ", "DYKPYAZ", "WU", "EZVI", "E", "Y", "VTZ", "JKMIQND", "KUWZT", "IBXSN", "F", "DDBLAQK", "JKMIQND", "DDBLAQK", "AG", "JKMIQND", "ONB", "YZJXYV", "XK", "XUOT", "RO", "IBXSN", "EZVI", "QY", "RO", "B", "JKMIQND", "JKMIQND"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DDBLAQK 2", "DYKPYAZ 2", "EZVI 2", "IBXSN 5", "JKMIQND 6", "KUWZT 3", "QY 5", "RO 3", "VTZ 3", "WU 2", "YZJXYV 2"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> customerNames = {"QUITYEABWZGUCCSCGCQKXCYUQGHAPYPHSZA", "QUITYEABWZGUCCSCGCQKXCYUQGHAPYPHSZA", "GWYVUPFOOHHTKAXOCWUHNEVKFUDMSRKY", "QUITYEABWZGUCCSCGCQKXCYUQGHAPYPHSZA", "QXFWCWYAEKMCSLOXMGNIHO", "QDSKGECYQANAYVZYTOIYXE", "QDSKGECYQANAYVZYTOIYXE", "JCETR", "YGXMCBSQTABEHETBDWH", "QUITYEABWZGUCCSCGCQKXCYUQGHAPYPHSZA", "YGXMCBSQTABEHETBDWH", "QUITYEABWZGUCCSCGCQKXCYUQGHAPYPHSZA", "DORHUKAFADXKMBPMSRZUPUU", "FCTCCBYG", "RILVBXSFXM", "DORHUKAFADXKMBPMSRZUPUU", "DORHUKAFADXKMBPMSRZUPUU", "QUITYEABWZGUCCSCGCQKXCYUQGHAPYPHSZA", "DORHUKAFADXKMBPMSRZUPUU", "QDSKGECYQANAYVZYTOIYXE", "QUITYEABWZGUCCSCGCQKXCYUQGHAPYPHSZA", "DORHUKAFADXKMBPMSRZUPUU", "QDSKGECYQANAYVZYTOIYXE", "GWYVUPFOOHHTKAXOCWUHNEVKFUDMSRKY", "YGXMCBSQTABEHETBDWH", "PIYPFFVK", "PIYPFFVK", "QDSKGECYQANAYVZYTOIYXE", "PIYPFFVK", "KVHZAWNIFIUFG", "YGXMCBSQTABEHETBDWH"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DORHUKAFADXKMBPMSRZUPUU 5", "GWYVUPFOOHHTKAXOCWUHNEVKFUDMSRKY 2", "PIYPFFVK 3", "QDSKGECYQANAYVZYTOIYXE 5", "QUITYEABWZGUCCSCGCQKXCYUQGHAPYPHSZA 7", "YGXMCBSQTABEHETBDWH 4"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> customerNames = {"YETTI", "YETTI", "YETTI", "BIGFOOT", "BIGFOOT"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BIGFOOT 2", "YETTI 3"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> customerNames = {"JOHN", "BOB", "JOHN", "BILL", "STANLEY", "JOHN"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JOHN 3"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> customerNames = {"A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A 22"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> customerNames = {"A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "XC", "AX", "AX"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A 13", "AX 2"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> customerNames = {"SDJFLKJSOIEUFAOIEUIOFAUWEOIUFOIAWUEIOGJKLAWEJKLGJK", "SDJFLKJSOIEUFAOIEUIOFAUWEOIUFOIAWUEIOGJKLAWEJKLGJK", "DDD", "DDD", "LLL", "LLL", "QQ", "ZZ", "Z", "ZZZ", "ZZ"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DDD 2", "LLL 2", "SDJFLKJSOIEUFAOIEUIOFAUWEOIUFOIAWUEIOGJKLAWEJKLGJK 2", "ZZ 2"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> customerNames = {"JOHN", "JOHN", "JOHN", "JOHN"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JOHN 4"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> customerNames = {"THEONLYCUSTOMER"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> customerNames = {"POOP", "POOP", "POOP", "POOP"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"POOP 4"};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> customerNames = {"B", "B", "C", "C", "Z", "Z", "A", "A"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A 2", "B 2", "C 2", "Z 2"};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> customerNames = {"A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A 15"};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> customerNames = {"AB", "AB", "AA", "AA"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA 2", "AB 2"};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> customerNames = {"A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A 13"};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> customerNames = {"A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A 17"};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> customerNames = {"JOHN", "BOB", "JOHN", "BILL", "STANLEY", "JOHN", "BBO", "OBB", "OBB", "OJHN", "LLIB", "BILL", "BILL", "JONH", "JOHNNNN", "BILLLLBILLBI"};
    CustomerStatistics* pObj = new CustomerStatistics();
    clock_t start = clock();
    vector<string> result = pObj->reportDuplicates(customerNames);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BILL 3", "JOHN 3", "OBB 2"};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20611609&rd=9808&pm=5975
********************************************************************************
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class CustomerStatistics {
  public:
    vector<string> reportDuplicates(vector<string> customerNames) {
      int i, j, k, flag, count;
      vector<string> answer;
      string ans;
      for(i = 0;i < customerNames.size();i++) {
        count = 0;
        for(j = i+1;j < customerNames.size();j++) {
          if(customerNames[i] == customerNames[j]) {
            flag = 1;
            for(k = 0;k < i;k++)
                                                        if(customerNames[i] == customerNames[k]) {
                                                                flag = 0;
                                                                break;
                                                        }
            if(flag) 
              count++;
          }
        }
        if(count > 0) {
          count++;
          ans = customerNames[i];
          ans.push_back(' ');
          string arr;
          int z;
          while(count) {
            z = count % 10;
            arr.push_back(z + '0');
            count = count / 10;
          }
          for(z = arr.size() - 1;z >= 0;z--) {
            ans.push_back(arr[z]);
          }
          answer.push_back(ans);
        }
      }
      for(i = 0;i < answer.size();i++) {
        for(j = i+1;j < answer.size();j++) {
          k = 0;
          while((answer[i][k] == answer[j][k]) && k < answer[i].size() && k < answer[j].size()) k++;
            if(answer[i][k] > answer[j][k]) {
              string temp = answer[i];
              answer[i] = answer[j];
              answer[j] = temp;
            }
        }
      }
      return answer;
    }
};

********************************************************************************
*******************************************************************************/