/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11529
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

class EllysDirectoryListing {
public:
    vector<string> getFiles(vector<string> files);
};

vector<string> EllysDirectoryListing::getFiles(vector<string> files) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> files = {"ContestApplet.jnlp", ".", "Image.jpg", "..", "Book.pdf", "Movie.avi"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ContestApplet.jnlp", "Movie.avi", "Image.jpg", "Book.pdf", "..", "."};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> files = {"Image.jpg", "..", "."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Image.jpg", "..", "."};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> files = {"..", ".", "Image.jpg"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Image.jpg", ".", ".."};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> files = {"No", "..", "Zaphod", ".", "Just", "very", "very...", "Improbable"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"No", "Improbable", "Zaphod", "very...", "Just", "very", ".", ".."};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> files = {"www.topcoder.com", "Ever.tried", ".", "Ever.failed", "..", "No", "Matter.", "Try", "Again.", "Fail", "Again..", "Fail.Better"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.topcoder.com", "Ever.tried", "Fail.Better", "Ever.failed", "Again..", "No", "Matter.", "Try", "Again.", "Fail", "..", "."};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> files = {".", ".."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".", ".."};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> files = {"..", "."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..", "."};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> files = {"This", ".", "is", "tricky", "test", ".."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"This", "test", "is", "tricky", "..", "."};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> files = {"This", ".", "is", "covered", "in", "the", "..", "samples."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"This", "samples.", "is", "covered", "in", "the", "..", "."};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> files = {".htaccess", "..evenWorse", ".", "..", "also", "tricky"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".htaccess", "..evenWorse", "tricky", "also", "..", "."};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> files = {"...", "..", ".", "empty", "Elly.cpp"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...", "Elly.cpp", "empty", ".", ".."};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> files = {".", "YANMPUaFJyELpmpND", "GIVsdxAFZuD", "JkqPFz", "fwssmvagCN", "gIcW", "pkNNK.", "nBNexlrLkXhw", "gfrCmNFpSB", "H", "zOdKpJOeaZJJSR", "Q", "HX.tFKzsoEtLbNpvgKZg", "fLG", "BaRtmT", "WtyOZ", "JIGbDEmT", "eyqPbEAxBXKt", "EyFacvLo", "ejDTNO.mn", "dIrrbDRPkLQvTqn", "nsD", "ZBOkXkvlvd", "hiFchtsNqNrmJqKJoK", "MBfhCEwxOYpwtLVC", "Ouubr", ".MfYCktLXrgNJOLKOhEq", "vazvCvRsIoPRqSbbA", "oa", "cvaLMsbIQKPs", "..", "SULbweWxSc", "dhgSPDW"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dhgSPDW", "YANMPUaFJyELpmpND", "GIVsdxAFZuD", "JkqPFz", "fwssmvagCN", "gIcW", "pkNNK.", "nBNexlrLkXhw", "gfrCmNFpSB", "H", "zOdKpJOeaZJJSR", "Q", "HX.tFKzsoEtLbNpvgKZg", "fLG", "BaRtmT", "WtyOZ", "JIGbDEmT", "eyqPbEAxBXKt", "EyFacvLo", "ejDTNO.mn", "dIrrbDRPkLQvTqn", "nsD", "ZBOkXkvlvd", "hiFchtsNqNrmJqKJoK", "MBfhCEwxOYpwtLVC", "Ouubr", ".MfYCktLXrgNJOLKOhEq", "vazvCvRsIoPRqSbbA", "oa", "cvaLMsbIQKPs", "SULbweWxSc", "..", "."};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> files = {"qJV", "hCkSUzAzbYcdL", "..", "hqNtCDDoQmHOfk", "lENYhZHGDV", "AajQBWtFLVJTnSZXIX", "Q", "uqyJVhUGy", "BBKjDHBO", "lk.YnSVE", "TRcFbcjmVKQggtAGARhB", "mslXg", "ipCO", "bDYwyJ", "IllnQLZhKPZILL", "ynYH", "q", "KWZl", "FDLMnsGQolUcfbR", "AKtGzsmFkEWmZLtdHQP", "TOKi", "oySGaZDJApHHQL", "xgEfKTZ", "JJkZkwLbuAn", "liUzHJzH", "GFgINdqf", "AKLKsAKCGYgKpRHWit", ".", "Sf"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qJV", "hCkSUzAzbYcdL", "Sf", "hqNtCDDoQmHOfk", "lENYhZHGDV", "AajQBWtFLVJTnSZXIX", "Q", "uqyJVhUGy", "BBKjDHBO", "lk.YnSVE", "TRcFbcjmVKQggtAGARhB", "mslXg", "ipCO", "bDYwyJ", "IllnQLZhKPZILL", "ynYH", "q", "KWZl", "FDLMnsGQolUcfbR", "AKtGzsmFkEWmZLtdHQP", "TOKi", "oySGaZDJApHHQL", "xgEfKTZ", "JJkZkwLbuAn", "liUzHJzH", "GFgINdqf", "AKLKsAKCGYgKpRHWit", ".", ".."};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> files = {"svnJZvF", "Xx", "NXR", "KIQGWcFVDEovPYhoNsKd", "XitCJw", "fb", "rEhVAenGvhaNKRJk", "P.bdhJbZFxXGhpnno", "aWILEaRPr", "vrfeO.QuLRbMltFlf", "vdamGPUfvJekbH", "ULTs.Xe", "UBNCdzapQN", "eGrQBWWzA", "IXZOsLqOulWTf", "KaSE", "cuLhLvvI.", "PlgtUlRTLzebAaPFV.hS", "reaZDHVw", "QQWkLkPungCQMsN", "P", "QIMQmscnb", "PXMJColxCZgPnLcA", "OHv", "qO", "CfPjmRifRcK", "RfHFkH", "DPNCXNZWg", "JYDMRKLE", "RxMPRREpNd", "ANgmuRHvmKwfNFcTSTjP", "Fu", "RZFdZ", "..", "oQBRVQmeP", "UdNXhwoxfMeTlC", "kA", "MkzFAqyvMrXputJ.OC", "SAqyV", "HdvL", "IDXFJwWRx", "YQvXE", "sywXT", "GsqNSIwwcnfNZYHwgtEP", "."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"svnJZvF", "Xx", "NXR", "KIQGWcFVDEovPYhoNsKd", "XitCJw", "fb", "rEhVAenGvhaNKRJk", "P.bdhJbZFxXGhpnno", "aWILEaRPr", "vrfeO.QuLRbMltFlf", "vdamGPUfvJekbH", "ULTs.Xe", "UBNCdzapQN", "eGrQBWWzA", "IXZOsLqOulWTf", "KaSE", "cuLhLvvI.", "PlgtUlRTLzebAaPFV.hS", "reaZDHVw", "QQWkLkPungCQMsN", "P", "QIMQmscnb", "PXMJColxCZgPnLcA", "OHv", "qO", "CfPjmRifRcK", "RfHFkH", "DPNCXNZWg", "JYDMRKLE", "RxMPRREpNd", "ANgmuRHvmKwfNFcTSTjP", "Fu", "RZFdZ", "GsqNSIwwcnfNZYHwgtEP", "oQBRVQmeP", "UdNXhwoxfMeTlC", "kA", "MkzFAqyvMrXputJ.OC", "SAqyV", "HdvL", "IDXFJwWRx", "YQvXE", "sywXT", ".", ".."};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> files = {"hPWfyqo", "MaMXpnN", "WEyViH.zfcpS", "VtBuzuNkNQc", ".", ".lHgvFVz", "HSCbrGvogN", "QSKNyfZjLtRUcRjP", "..", "uD.dtXcr.XO.xLfqfmXo", "Eti", ".cIfElUQDVdS", "DccFZagWnyvyqSuwmW", "dkc", "ksJqyqxkPSSlst", "Y", "oWDqdqmOMBceE", "yWiEJRPhADCcsggBhr", "ZbS.tJRUlre"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hPWfyqo", "MaMXpnN", "WEyViH.zfcpS", "VtBuzuNkNQc", "ZbS.tJRUlre", ".lHgvFVz", "HSCbrGvogN", "QSKNyfZjLtRUcRjP", "yWiEJRPhADCcsggBhr", "uD.dtXcr.XO.xLfqfmXo", "Eti", ".cIfElUQDVdS", "DccFZagWnyvyqSuwmW", "dkc", "ksJqyqxkPSSlst", "Y", "oWDqdqmOMBceE", "..", "."};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> files = {"OAJBDS", "m", "gDPy", "GThg", "sN", "hSeRrXnj", "ZrunWlZQ", "V", "geDlYdamhfQoEo", "ctAbhaXjagtGcU", "sdzfuyJTyLB", "aNNdNqdYacldGxFMDecP", ".", "..", "rrFsUZfCgjcLIKNjWB", "mRolTlxoqSfozDkjC", "AldYVDAQNTyGfnE", "cuURGey", "TOkGv", "MfcSSOKPKwEfALAEeJWF", "UrLpAruAYfnHgynJlY", "cLbg", "AwJ.BoqJxvbEzy.IiEP", "yAnTgHZzhyR", "JVM.EdAEKcqFTSgCuvt", "SPDSVaobE", "Cp", "OAU.uiGE", "saGUDuLBERxDtElX", "DRyVlyXOXOOOWKbImdP", "NofgN", "mQVgfvPYv", "KIMdj", "HQps", "eIAOuTaIGUO", "rYUKuRSt", "WZjTCKGTNZMJkXgFovL", "fqZjfOhyQ", "NDOlyoByl", "ERQMJRskCRGvjbBzugb", "diOOWfIob.tee", "zhXBRwYHI.xTmOe"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OAJBDS", "m", "gDPy", "GThg", "sN", "hSeRrXnj", "ZrunWlZQ", "V", "geDlYdamhfQoEo", "ctAbhaXjagtGcU", "sdzfuyJTyLB", "aNNdNqdYacldGxFMDecP", "zhXBRwYHI.xTmOe", "diOOWfIob.tee", "rrFsUZfCgjcLIKNjWB", "mRolTlxoqSfozDkjC", "AldYVDAQNTyGfnE", "cuURGey", "TOkGv", "MfcSSOKPKwEfALAEeJWF", "UrLpAruAYfnHgynJlY", "cLbg", "AwJ.BoqJxvbEzy.IiEP", "yAnTgHZzhyR", "JVM.EdAEKcqFTSgCuvt", "SPDSVaobE", "Cp", "OAU.uiGE", "saGUDuLBERxDtElX", "DRyVlyXOXOOOWKbImdP", "NofgN", "mQVgfvPYv", "KIMdj", "HQps", "eIAOuTaIGUO", "rYUKuRSt", "WZjTCKGTNZMJkXgFovL", "fqZjfOhyQ", "NDOlyoByl", "ERQMJRskCRGvjbBzugb", "..", "."};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> files = {"xkcIQ", "xLitehhPHPUYlvSRm", "twYcKY", "gPAQgNaRLEQj", "IyIOHWdaXzBAqKtjzBg", "XqZQMU", "VcPDsTxNG", "HJFuHGQF", "fceZmQYkze", "WReDYw", "VAcEPh", "RLPxYyNBBiZZnoPmGvQ", "FdNYpGWVU", "loxsOkvVxr", "DRoaPrXlkEJzKIDvQE", "KrJNalUsnEjqkp", "LorACqcaIZnknkooexl", "bAqQUKUBWVtKlXxfPSNz", "tpujOinvOLEUa.JPCqro", "UiH", "rhdoEpzRzSFSFsEPf", "QHVmDWWxQROgIrMMkx", "jPeqzz", "ZIOteDkWEkltUliXQLX", "XbCYOdMqpVP.PWW", "CF", "latzGGipobNhfU", "..", "cMHUjGdYSqioWZRNEX", "tlF", "BCIqjRIIGU", "hiHxVaakzmv", "PKIV.YYuqKaZZdE", "n", "XFtTPL", "LpsMPXGPOel", "VnMaY", "nfswAP", "bnZAbFgHXBoE", "EFLGbXHkCc", "GktgKpbm", "tYpzTViYjQPCoiI", "YbwBTTGZjlTjNPwoU", "FzN", "wbEYE", "CWdARjeFIRKmM", "UgeDlBYthRdkrx", "."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xkcIQ", "xLitehhPHPUYlvSRm", "twYcKY", "gPAQgNaRLEQj", "IyIOHWdaXzBAqKtjzBg", "XqZQMU", "VcPDsTxNG", "HJFuHGQF", "fceZmQYkze", "WReDYw", "VAcEPh", "RLPxYyNBBiZZnoPmGvQ", "FdNYpGWVU", "loxsOkvVxr", "DRoaPrXlkEJzKIDvQE", "KrJNalUsnEjqkp", "LorACqcaIZnknkooexl", "bAqQUKUBWVtKlXxfPSNz", "tpujOinvOLEUa.JPCqro", "UiH", "rhdoEpzRzSFSFsEPf", "QHVmDWWxQROgIrMMkx", "jPeqzz", "ZIOteDkWEkltUliXQLX", "XbCYOdMqpVP.PWW", "CF", "latzGGipobNhfU", "UgeDlBYthRdkrx", "cMHUjGdYSqioWZRNEX", "tlF", "BCIqjRIIGU", "hiHxVaakzmv", "PKIV.YYuqKaZZdE", "n", "XFtTPL", "LpsMPXGPOel", "VnMaY", "nfswAP", "bnZAbFgHXBoE", "EFLGbXHkCc", "GktgKpbm", "tYpzTViYjQPCoiI", "YbwBTTGZjlTjNPwoU", "FzN", "wbEYE", "CWdARjeFIRKmM", ".", ".."};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> files = {"..", "qRe", "uOJQn", "MBktWNbnCrWTPCzQTnkw", ".", ".Fjg", "Gbzrudbi", "oXvXIJtRDqGkwTrmPcO", "l", "GqCyxoLAYhUJ", "mGZFXFZxopBBudUt", "QlduN", "Op", "moXms", "kcFPfNl.Bj", "fOxMmxV", "spPbFWYYWYVbXfYZY"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"spPbFWYYWYVbXfYZY", "qRe", "uOJQn", "MBktWNbnCrWTPCzQTnkw", "fOxMmxV", ".Fjg", "Gbzrudbi", "oXvXIJtRDqGkwTrmPcO", "l", "GqCyxoLAYhUJ", "mGZFXFZxopBBudUt", "QlduN", "Op", "moXms", "kcFPfNl.Bj", ".", ".."};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> files = {"LPvjmshH", "WucLKHlBnYujkw", "XbPETLcMsMYdpi.qu", "tbRoKfOLsmCcXDvhd.yp", "zJR", "iYkJMwXkScKsBIOIJ", "uvGjqBk.cVRiBRNz", "mjlz", "XiWJFuVGGMQCbwIpbjs", "rLSy", "EkdvDZGefA.P", "VhqUVnGprH.rADBoRR", "zNNiKckKrNJKnFJQSVd", "..", "DzwRColvdnRBsASAB", ".", "GIyBkKbl"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"LPvjmshH", "WucLKHlBnYujkw", "XbPETLcMsMYdpi.qu", "tbRoKfOLsmCcXDvhd.yp", "zJR", "iYkJMwXkScKsBIOIJ", "uvGjqBk.cVRiBRNz", "mjlz", "XiWJFuVGGMQCbwIpbjs", "rLSy", "EkdvDZGefA.P", "VhqUVnGprH.rADBoRR", "zNNiKckKrNJKnFJQSVd", "GIyBkKbl", "DzwRColvdnRBsASAB", ".", ".."};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> files = {"ykaerT.pXbD.Lns", "sc", "VGmkMEOUr", "COMhqlxOUJmgZQQ", "PeH", "..", "Xjn", "NLa", "."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ykaerT.pXbD.Lns", "sc", "VGmkMEOUr", "COMhqlxOUJmgZQQ", "PeH", "NLa", "Xjn", ".", ".."};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> files = {".", "cRlBEbJKPAeXtzWGY", "KeMJLZTNqlnxOwnXvV", "..", "BnpqaYaKiTaHIsygktXv", "aYYhhg"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aYYhhg", "cRlBEbJKPAeXtzWGY", "KeMJLZTNqlnxOwnXvV", "BnpqaYaKiTaHIsygktXv", "..", "."};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> files = {".HmKDDI", "aD", "bSedVQuDiXNue", "IRsuk", "VLlfnl.zaTyihOlm", "crhsu", "..", "hcFtlGYdHAvUnnxdyQhW", "FV", "kjSn.EMLQWtvoICg", "LbcouMbu", "sHkXPdUCTZFZpCc", "YhZfihGqKzR", ".", "PEOkSAiEuRlq.pGxQmc"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".HmKDDI", "aD", "bSedVQuDiXNue", "IRsuk", "VLlfnl.zaTyihOlm", "crhsu", "PEOkSAiEuRlq.pGxQmc", "hcFtlGYdHAvUnnxdyQhW", "FV", "kjSn.EMLQWtvoICg", "LbcouMbu", "sHkXPdUCTZFZpCc", "YhZfihGqKzR", ".", ".."};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> files = {".", "ILLXqsUk", "..", ".MgQ", "mrIr.UZB", "LvgpfVu.mKM", "QDHipSS", "IjCeQzpgUxnaD"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"IjCeQzpgUxnaD", "ILLXqsUk", "QDHipSS", ".MgQ", "mrIr.UZB", "LvgpfVu.mKM", "..", "."};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> files = {"bHMAlvvwVO", "iAty.qOcJZSgHezBiGTE", "B.KHWAwvuMD", "rX", "GfSPUKxuPLhyptVzykg", "KlYmDCyDtMRVUODe", "ZNxsqK.", "gOMKpIAtiUaj.UGolIf", "bBbpZNvOKFFpzKPyUqzQ", "x.wwMXhoa", "pjMBWgWLBLDYvTBVIQ.e", "lcukIMvOwoVxmanbEZLz", "rJWabz", "AWoEaRvFbgVGpYcz", "wzdWXqjz", "HbD.JNtBqmQDt", "WrdvNRr", "sD", "JIn.USFZLuYuihOgZm", "LKN", "KIytUFZp", ".uljRFv.sZPznPhR", "QUcPbquaudXpIiQBy", "bVRImqycZOxEGyaiKfUD", "UoL", "NzOycOBVKpz", "SLdrJTegP", "GlyZxCCuDlCgAPKR", "mbxBozKtxeAHhyhLhF", "XrfqyutaMN", "DEnRRwP", "rIIbKb.rqllOAGVIh", "YuWEBJPYThoiAS", "LyP.jBAB", "mFnOAzDFj", "IJpgqw", "YvnUaXyduC", ".", "c", "ny", "wPIufzLHYQCs", "dlVhy.rPxbQvutyRIqO", "jlmGXlqhNsXmRUYwAxEP", "wYVoxrushHu", "ju", "ijr", "VXi", "..", "pJpDIQVk"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bHMAlvvwVO", "iAty.qOcJZSgHezBiGTE", "B.KHWAwvuMD", "rX", "GfSPUKxuPLhyptVzykg", "KlYmDCyDtMRVUODe", "ZNxsqK.", "gOMKpIAtiUaj.UGolIf", "bBbpZNvOKFFpzKPyUqzQ", "x.wwMXhoa", "pjMBWgWLBLDYvTBVIQ.e", "lcukIMvOwoVxmanbEZLz", "rJWabz", "AWoEaRvFbgVGpYcz", "wzdWXqjz", "HbD.JNtBqmQDt", "WrdvNRr", "sD", "JIn.USFZLuYuihOgZm", "LKN", "KIytUFZp", ".uljRFv.sZPznPhR", "QUcPbquaudXpIiQBy", "bVRImqycZOxEGyaiKfUD", "UoL", "NzOycOBVKpz", "SLdrJTegP", "GlyZxCCuDlCgAPKR", "mbxBozKtxeAHhyhLhF", "XrfqyutaMN", "DEnRRwP", "rIIbKb.rqllOAGVIh", "YuWEBJPYThoiAS", "LyP.jBAB", "mFnOAzDFj", "IJpgqw", "YvnUaXyduC", "pJpDIQVk", "c", "ny", "wPIufzLHYQCs", "dlVhy.rPxbQvutyRIqO", "jlmGXlqhNsXmRUYwAxEP", "wYVoxrushHu", "ju", "ijr", "VXi", "..", "."};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> files = {".", ".."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".", ".."};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> files = {"UgAzS", "uHTtJY", "crgQJvZoNLuIj", "tqiRElXZVrHY.BtDm", "NztUUW.PUwZdEcTg", "Ui", "qvyVXoATDsQ", "ihAaoSvAmnzULlhm", "e", "tJOb", "NdsuTQIqLcJ", "tBJzQ", "x.Y", "LcoycXLFwBjdbMLYs", "cRXQFSlIuaivGwTJJOe", "RurJOuKiIYoDMeyyW.N", "qvAyitnMhWAVMmrad", "GAPSAdDoEYTyyLLItus", "FqULzI", "pGlMMox", "T", "pBblBbzBbjXOJ", "BsMuHS", ".", "JSY", "..", "MadCURQCcCsiunWZ", "UWDolYKfuXsA"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"UgAzS", "uHTtJY", "crgQJvZoNLuIj", "tqiRElXZVrHY.BtDm", "NztUUW.PUwZdEcTg", "Ui", "qvyVXoATDsQ", "ihAaoSvAmnzULlhm", "e", "tJOb", "NdsuTQIqLcJ", "tBJzQ", "x.Y", "LcoycXLFwBjdbMLYs", "cRXQFSlIuaivGwTJJOe", "RurJOuKiIYoDMeyyW.N", "qvAyitnMhWAVMmrad", "GAPSAdDoEYTyyLLItus", "FqULzI", "pGlMMox", "T", "pBblBbzBbjXOJ", "BsMuHS", "UWDolYKfuXsA", "JSY", "MadCURQCcCsiunWZ", "..", "."};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> files = {"EcYES.NEEnuCF.KZZiEw", "HmWlr.VGt.vVOBAI", "Ie", "se", "NMsrpJnz", "hrjAymxagF", "mjgNAEFMFwAylvbHnJl", "VdWIcdKjtj", "rkoyCeIFS", "HjK", "LOm", "SVMGmsKbqQ.xRdvIbLkX", "cFZ", "uNMPmpKioyLH", "OVJm.ryxbyPfSZQjn", "SvDYLGNCe.gfi", "xAMfyvTGGFvppUdUwSo", "ddSHqE.QUbTiUXbu", ".", "..", "wzax", "sJhMIFdB", "IaLExxIMjUjgWDa.NfO", "wREZJagGh"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"EcYES.NEEnuCF.KZZiEw", "HmWlr.VGt.vVOBAI", "Ie", "se", "NMsrpJnz", "hrjAymxagF", "mjgNAEFMFwAylvbHnJl", "VdWIcdKjtj", "rkoyCeIFS", "HjK", "LOm", "SVMGmsKbqQ.xRdvIbLkX", "cFZ", "uNMPmpKioyLH", "OVJm.ryxbyPfSZQjn", "SvDYLGNCe.gfi", "xAMfyvTGGFvppUdUwSo", "ddSHqE.QUbTiUXbu", "wREZJagGh", "IaLExxIMjUjgWDa.NfO", "wzax", "sJhMIFdB", "..", "."};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> files = {"IWN", "xVvYNPiJfdvtEHfomB", "SMzpVu", "yciQORaxCETBDLcxPok.", "aKXWPVbG", "ZYERuHzLNBrNZOgY.", ".", "wwxjy", "BRhjDxZZGgw", "SzLoYOde", "oKNXxHdOjzHNDfTV", "d", "dIPcoL.zLkJpvsCS", "vVXcmGAlszwMEyhFloyl", "nNXlZKeSUU", "f", "SsyUSboZ", "CBMcrQCgWSExKQoW", "Rhf", "sdnnrjuZzrleipio.s", "vVYPqbCUJlGvLuS", "yXwVsF", "bxPCgQO", "SIxUbUeUBl", "..", "nsyzA", "YoBRBPMhOybgdokZp", "m", "ILCrdIRQTTEnldiHT", "RtK", "wTSVCPvRz", "xWAVqLDWrHffyGz.I", "qSCFmHVdwi", "kUMyBvLSXHnUgpekHj", "YwvtgB", "VgQTgjmryXriO.C", "avvbknWbrqO"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"IWN", "xVvYNPiJfdvtEHfomB", "SMzpVu", "yciQORaxCETBDLcxPok.", "aKXWPVbG", "ZYERuHzLNBrNZOgY.", "avvbknWbrqO", "wwxjy", "BRhjDxZZGgw", "SzLoYOde", "oKNXxHdOjzHNDfTV", "d", "dIPcoL.zLkJpvsCS", "vVXcmGAlszwMEyhFloyl", "nNXlZKeSUU", "f", "SsyUSboZ", "CBMcrQCgWSExKQoW", "Rhf", "sdnnrjuZzrleipio.s", "vVYPqbCUJlGvLuS", "yXwVsF", "bxPCgQO", "SIxUbUeUBl", "VgQTgjmryXriO.C", "nsyzA", "YoBRBPMhOybgdokZp", "m", "ILCrdIRQTTEnldiHT", "RtK", "wTSVCPvRz", "xWAVqLDWrHffyGz.I", "qSCFmHVdwi", "kUMyBvLSXHnUgpekHj", "YwvtgB", "..", "."};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> files = {"NlnKDFqDdsCqathg", "gxMaxseRm.SXc.jTb", "qXMiGQr", "LeQcTPjtK", "H", "ixAfL", "UhZRPcsOBjKPHlQlPwq", "UNmXx.XhwJnrgwRPq", "rxzUXDCHbVwqSskNgtKi", "vgt", "wVgZjdS", "FEoSAtoAxy", "zHEYbkgqvTjmkoLf", ".xeVozFaSu", "JU", "nBhtpUkJTZwRejUrhrZ", "WumnuVODXkLjslMvr", "XhTMrLEiEBGuFYCZu", "JQlaLGwY", "RWLnCHBwltxdteXrQCA", "SjUxUN.G", "chLApEkFcmfhLLi", "OxWxDHZRhWcwyjGryqeb", "TqRISPR", "VNKB", "KIAGrAGZy.AKNkvweLjR", "..", "HJ", "ECrBEwqfQQidoJVyqcK", "dDzFtLe", "YKvDjKjXjdhUFkmJYNB", "pQpXBgUkMOCdHLLNsfxq", "MY", "lCeIRi.", "wWD.iJa", "GFAaiBZbLRyNHUTfiv", "blroClHpEhAXxV", "OqxKqM", "TXdwMsJsg", "VSIGiPekrVOLdZuLfv", "wdoxuwdXtmOiukFRzwMX", "Ny", "TGnaCx.IFkblHmD", "PRveVeaJaQxqoFnPqrVb", "OilZFfWgzHgBPADbNhEN", ".", "flRLIBvbDQ", "ni", "QrSPSVmL"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NlnKDFqDdsCqathg", "gxMaxseRm.SXc.jTb", "qXMiGQr", "LeQcTPjtK", "H", "ixAfL", "UhZRPcsOBjKPHlQlPwq", "UNmXx.XhwJnrgwRPq", "rxzUXDCHbVwqSskNgtKi", "vgt", "wVgZjdS", "FEoSAtoAxy", "zHEYbkgqvTjmkoLf", ".xeVozFaSu", "JU", "nBhtpUkJTZwRejUrhrZ", "WumnuVODXkLjslMvr", "XhTMrLEiEBGuFYCZu", "JQlaLGwY", "RWLnCHBwltxdteXrQCA", "SjUxUN.G", "chLApEkFcmfhLLi", "OxWxDHZRhWcwyjGryqeb", "TqRISPR", "VNKB", "KIAGrAGZy.AKNkvweLjR", "QrSPSVmL", "HJ", "ECrBEwqfQQidoJVyqcK", "dDzFtLe", "YKvDjKjXjdhUFkmJYNB", "pQpXBgUkMOCdHLLNsfxq", "MY", "lCeIRi.", "wWD.iJa", "GFAaiBZbLRyNHUTfiv", "blroClHpEhAXxV", "OqxKqM", "TXdwMsJsg", "VSIGiPekrVOLdZuLfv", "wdoxuwdXtmOiukFRzwMX", "Ny", "TGnaCx.IFkblHmD", "PRveVeaJaQxqoFnPqrVb", "OilZFfWgzHgBPADbNhEN", "ni", "flRLIBvbDQ", ".", ".."};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> files = {"QCvytlZRjdTxqKUkT.Y", "mIcPeKmIHJv", ".", "qquAEEmNxHOT", "lFH", "iLKZXbqreX", "inVbqmallLBjzTAzAl", "..", "UhF", "vqxvkcKNZXKQ", "YWA", "VRrU", "SwsYaLVd", "SFddFvPELLPLJiMw", "JLpoby", "scMWFMmrK", "xIkyGl", "KYUxCpyc.bHwPaH", "grdQu", ".Y", "JEupqFoJ", "KQqvKcB", "UY", "CkMVgbnIVUF", "ZFEuFmCHFvTUWmyvJ", "t", "oTCOelQZFoLEIZYDhtb"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"QCvytlZRjdTxqKUkT.Y", "mIcPeKmIHJv", "oTCOelQZFoLEIZYDhtb", "qquAEEmNxHOT", "lFH", "iLKZXbqreX", "inVbqmallLBjzTAzAl", "t", "UhF", "vqxvkcKNZXKQ", "YWA", "VRrU", "SwsYaLVd", "SFddFvPELLPLJiMw", "JLpoby", "scMWFMmrK", "xIkyGl", "KYUxCpyc.bHwPaH", "grdQu", ".Y", "JEupqFoJ", "KQqvKcB", "UY", "CkMVgbnIVUF", "ZFEuFmCHFvTUWmyvJ", "..", "."};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> files = {"Fnmpgy", "ykucy", "nAsQhNyimSxANK", "lpSaG", "nuLeTI", "iMBDdfxLWEUUSLs", "hDLbKwAtXZLUDqsqVEuS", "U", "plWGZsWBsMjnPYNpg", ".", "QZcM.tnTWcsLaqvPL", "qfO", "nqF", "bYBUwFiX", "qpyNVJa", "oSTrEgK", "VchStpAedNgJ", "rEOoLIrJHkb", "DwdGh", "E.fBEdrBQjuKdjLze", ".XcTeq.bsGHg.wF", "DSAxZTCDnal", "IzOZfqMfjrE", "cBmKDyNgsjsK", "..", "HEe", "LXnafBHbWksudlctCnf."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Fnmpgy", "ykucy", "nAsQhNyimSxANK", "lpSaG", "nuLeTI", "iMBDdfxLWEUUSLs", "hDLbKwAtXZLUDqsqVEuS", "U", "plWGZsWBsMjnPYNpg", "LXnafBHbWksudlctCnf.", "QZcM.tnTWcsLaqvPL", "qfO", "nqF", "bYBUwFiX", "qpyNVJa", "oSTrEgK", "VchStpAedNgJ", "rEOoLIrJHkb", "DwdGh", "E.fBEdrBQjuKdjLze", ".XcTeq.bsGHg.wF", "DSAxZTCDnal", "IzOZfqMfjrE", "cBmKDyNgsjsK", "HEe", "..", "."};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> files = {".", ".."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".", ".."};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> files = {"Wx", "wu.G", "FdfzM.Nkcp", "CkTOVBJOVO", "ZWNNbIFeipWAsbj", "GWmABAfbKnz", "..", "qckyUcS", "vryHjqqDcToE", "FjvHyNSB", "wYfiE", "IMiNdUPQmHGfWzczTLSo", "qfkz", "znkHCMgwiydUJDB", "AyEMVIoaTN.UthKD", "ldUBTVfmoRfSLgI", "FlEPlcXwjhjXe", ".", "kSkglNJSXuGV", "JIFgLn", "evdNFNIUCpzNyv", "MMj", "ZBigOFfZdguZaY", "SkqKhrmBGG", "aEPtEbAfNZOTApRI", "XpHNZklRyNYJyp.sQZkX"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Wx", "wu.G", "FdfzM.Nkcp", "CkTOVBJOVO", "ZWNNbIFeipWAsbj", "GWmABAfbKnz", "XpHNZklRyNYJyp.sQZkX", "qckyUcS", "vryHjqqDcToE", "FjvHyNSB", "wYfiE", "IMiNdUPQmHGfWzczTLSo", "qfkz", "znkHCMgwiydUJDB", "AyEMVIoaTN.UthKD", "ldUBTVfmoRfSLgI", "FlEPlcXwjhjXe", "aEPtEbAfNZOTApRI", "kSkglNJSXuGV", "JIFgLn", "evdNFNIUCpzNyv", "MMj", "ZBigOFfZdguZaY", "SkqKhrmBGG", ".", ".."};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> files = {"EnbhjUawcwBAEvhtOMqk", "WUXYQJJumxGhpnvkX", "DVZG", "..", "Zt", "gxbzDcL", "SIGoAUnkh", ".", "adCBYEn.zFkgrVvho.Yg", "wHo", "huvWYHBIRoYiu", "ZoBv.ukVQSepDCW", "rXp", "iHeX", "E", "oeaeDMXadyIC", "TKzGROPSXVlhbcGj", "l", "ZVqXwUDqK", "JtnwLdHFJDmh..S", "xTuYRRaaPANqmgX", "SzJvVrV.a", "XJIEcSkQyCmg", "qA", "FVmEYEzAOQJUwNPwrHB"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"EnbhjUawcwBAEvhtOMqk", "WUXYQJJumxGhpnvkX", "DVZG", "FVmEYEzAOQJUwNPwrHB", "Zt", "gxbzDcL", "SIGoAUnkh", "qA", "adCBYEn.zFkgrVvho.Yg", "wHo", "huvWYHBIRoYiu", "ZoBv.ukVQSepDCW", "rXp", "iHeX", "E", "oeaeDMXadyIC", "TKzGROPSXVlhbcGj", "l", "ZVqXwUDqK", "JtnwLdHFJDmh..S", "xTuYRRaaPANqmgX", "SzJvVrV.a", "XJIEcSkQyCmg", ".", ".."};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> files = {"udGXgRUK.FXm", "CyMNJhexIrCKNvdED", "EbynnwqNKUw", "cfLDLQcxbON", "DRaSfUzZxVAzY", "..", "NfrcPqy", "TiS", "PDfjiyri", ".", "dGMfxHGaqWQtBySgosEE", "pmMgJWbLTnb", "nGSIgVtZV", "PRRk.tLUjzvwLvR", "pdjWT.TfVsLk", "Uafag"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"udGXgRUK.FXm", "CyMNJhexIrCKNvdED", "EbynnwqNKUw", "cfLDLQcxbON", "DRaSfUzZxVAzY", "Uafag", "NfrcPqy", "TiS", "PDfjiyri", "pdjWT.TfVsLk", "dGMfxHGaqWQtBySgosEE", "pmMgJWbLTnb", "nGSIgVtZV", "PRRk.tLUjzvwLvR", ".", ".."};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> files = {"LTPugNQEHDZHSWCy", "t", ".", "..", "XdHIwALtDJ", "TmFqCthReSvjYELdg", "WaqnSPl", "kZxvgZREzrQKWNMlxn"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"LTPugNQEHDZHSWCy", "t", "kZxvgZREzrQKWNMlxn", "WaqnSPl", "XdHIwALtDJ", "TmFqCthReSvjYELdg", "..", "."};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> files = {"PQbAqocUlnwneKwzyCDJ", "FFkexGe", "DzvGWAEIxrMQ", "t", "I.F", "njWVxiKaZzHcbbs", "XVmkRZGddOiacMSOQ", "bgKIRwxVEqdbrmx", "blArMpIU", "ytuFxWgNXYVLvrVbDb", "vGJBHIJ", "QyxAef", "FUGytMq", "xgZiZmgsPVDsMCZQmL", "RDYe", "r", "HwyAiHlswdbExUWXLq", "TPvBz", "kuzziVPpLzEcqLrgSnp", "..", ".ByPF", "G", "xTIbwjlICPIGySsI", "vLUaEVLoBEkA", ".", "ZCIMnQgnTXLFrn.H", "RYgpXN.", "SdBJnk", "OWjFE", ".MNXGGUFfgBmdHqKcBl", "lE", "gplowqcJk", "RZ", "XwDw", "yvhCpPuE", "LhOfWrFfqHHDrxLH", "QueYrxa", "d", "a", "QpgvLbUOEgUnqcMQ", "VnY"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"PQbAqocUlnwneKwzyCDJ", "FFkexGe", "DzvGWAEIxrMQ", "t", "I.F", "njWVxiKaZzHcbbs", "XVmkRZGddOiacMSOQ", "bgKIRwxVEqdbrmx", "blArMpIU", "ytuFxWgNXYVLvrVbDb", "vGJBHIJ", "QyxAef", "FUGytMq", "xgZiZmgsPVDsMCZQmL", "RDYe", "r", "HwyAiHlswdbExUWXLq", "TPvBz", "kuzziVPpLzEcqLrgSnp", "VnY", ".ByPF", "G", "xTIbwjlICPIGySsI", "vLUaEVLoBEkA", "QpgvLbUOEgUnqcMQ", "ZCIMnQgnTXLFrn.H", "RYgpXN.", "SdBJnk", "OWjFE", ".MNXGGUFfgBmdHqKcBl", "lE", "gplowqcJk", "RZ", "XwDw", "yvhCpPuE", "LhOfWrFfqHHDrxLH", "QueYrxa", "d", "a", ".", ".."};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> files = {"brhaSQu", "ZdInMgTvXLUkOrBZ", "UX", "GGdyyRHWIJg", "knRVebqtelsrOFw", "XHrnKey", "cHiIPLVuEJZzlU", "QCIzOOtWeUBZodCMg", "uN", "OaWUVaKRELpUdAXAb.", "SkFIoYE", "AFFFbORzd", "..", "jfLBmEJV", "T", "E", "DO.XgdHBGYqF", ".", "qSjCbcbn", "VDfBRAHRU", "yEfDyEXQeDOahUIO", "vkccBR", "XiIpaNPlitqTlCjBJT.", "OyMhSjunbstdy", "y", "uMddDG.wwqZNN", "SWqDhXhF", "zLbjLCYRSpPenumeV", "EsuvIvrybVEQWr", "BYNxmiWkY", "tyyLWhNCaKCuPdjY", "BdcbAVKuvTioDEIUKyV", "EcRbHPttwWUeGRs", "spDHNYELmuWYJw", "HZYKA.ozIx", "rDTXEmZbMFYFAIn", "IvkntdjEyPXYaQyKGg", "uRjda", "kwJlEVa", "gljFOutYRsMyWLnmoWW", "bbqg"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"brhaSQu", "ZdInMgTvXLUkOrBZ", "UX", "GGdyyRHWIJg", "knRVebqtelsrOFw", "XHrnKey", "cHiIPLVuEJZzlU", "QCIzOOtWeUBZodCMg", "uN", "OaWUVaKRELpUdAXAb.", "SkFIoYE", "AFFFbORzd", "bbqg", "jfLBmEJV", "T", "E", "DO.XgdHBGYqF", "gljFOutYRsMyWLnmoWW", "qSjCbcbn", "VDfBRAHRU", "yEfDyEXQeDOahUIO", "vkccBR", "XiIpaNPlitqTlCjBJT.", "OyMhSjunbstdy", "y", "uMddDG.wwqZNN", "SWqDhXhF", "zLbjLCYRSpPenumeV", "EsuvIvrybVEQWr", "BYNxmiWkY", "tyyLWhNCaKCuPdjY", "BdcbAVKuvTioDEIUKyV", "EcRbHPttwWUeGRs", "spDHNYELmuWYJw", "HZYKA.ozIx", "rDTXEmZbMFYFAIn", "IvkntdjEyPXYaQyKGg", "uRjda", "kwJlEVa", ".", ".."};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> files = {"WqhxZNNC.Inxd", "ROmtGvcHkX", "MM..NmzZ.wlM", "MWCqJ", "YPbehIxJc", "iDdxtLkpcrA", "jZDzTWYFp.DKz", "AaYaVRYHomxOMIQy", "FKhqyCiFUMCM", ".", "GGglAXwzhpKp", "..", "oHQMYPRRYiYbKWv", "wClhRrwiqEpx", "ymTTl", "nTkvMAcRnRIGpdOzlA"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WqhxZNNC.Inxd", "ROmtGvcHkX", "MM..NmzZ.wlM", "MWCqJ", "YPbehIxJc", "iDdxtLkpcrA", "jZDzTWYFp.DKz", "AaYaVRYHomxOMIQy", "FKhqyCiFUMCM", "nTkvMAcRnRIGpdOzlA", "GGglAXwzhpKp", "ymTTl", "oHQMYPRRYiYbKWv", "wClhRrwiqEpx", "..", "."};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> files = {"tbWxmPe", "..", "WrvxAmwAhn", "eWajeNxo.lwNp", "yPVShhGP", "bLjKwptFlF", ".", "paLhTmnnvyCPjeOCLNeb", "Ynke", "MVxSPNSFFUDYsSPRtLSq", "l", "sAc", "opRYt", "FaJL", "pCmYnZoKEenIBT", "hWzOQFmBCtxag", "EyvKbjlPV", "mk", "GNRuraZquCnxFUm", "BpnFjnfvWXg.mEvZPO", "OhNgHdGtyVkxcB", "jAWQRHXGICtaUrDbDvv", "G", ".tGd"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"tbWxmPe", ".tGd", "WrvxAmwAhn", "eWajeNxo.lwNp", "yPVShhGP", "bLjKwptFlF", "G", "paLhTmnnvyCPjeOCLNeb", "Ynke", "MVxSPNSFFUDYsSPRtLSq", "l", "sAc", "opRYt", "FaJL", "pCmYnZoKEenIBT", "hWzOQFmBCtxag", "EyvKbjlPV", "mk", "GNRuraZquCnxFUm", "BpnFjnfvWXg.mEvZPO", "OhNgHdGtyVkxcB", "jAWQRHXGICtaUrDbDvv", ".", ".."};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> files = {"SrOaPvxOu", "gFaX.f", "PQtgm", "HQkzmkBnHDXRezca", "PZvhn.IP", "yBNfQNHO.", "ytI.", "ZOF", "wRqdAILENxmmsJhiNOhA", "C", "XhTVzA.WXY", "BCzbOkoVHQwUPBeBnB", "..", "YDRVRP.ajyHEpfsC", ".", "bogtIliRhFf", "p", "EJawCieZyDdc", "nZBehLSlTFQjArhznBk"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SrOaPvxOu", "gFaX.f", "PQtgm", "HQkzmkBnHDXRezca", "PZvhn.IP", "yBNfQNHO.", "ytI.", "ZOF", "wRqdAILENxmmsJhiNOhA", "C", "XhTVzA.WXY", "BCzbOkoVHQwUPBeBnB", "nZBehLSlTFQjArhznBk", "YDRVRP.ajyHEpfsC", "EJawCieZyDdc", "bogtIliRhFf", "p", ".", ".."};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> files = {"PAsSiKkvuFyBjIiYl", "uBCd", "zmu.p", ".", "..", "GACPUiRilzhHhF"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"PAsSiKkvuFyBjIiYl", "uBCd", "zmu.p", "GACPUiRilzhHhF", "..", "."};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> files = {"OkpVxCtQHFbLMItYiQ", "tZbFbC", "GtBkoxq", "..", "tMKCvbBBpyPFaJ", "flquOJ", "bdGVCwLcTYqGa", ".", "SuieHXchRAmEJE", "NfgfiRRAxfiXUClEACvE", "eovE", "MHdkj", "DJTG", "QFEsOnIv", "FCLtmvyAoCT", "nRoZXkRhcvxNOodEAmn"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OkpVxCtQHFbLMItYiQ", "tZbFbC", "GtBkoxq", "nRoZXkRhcvxNOodEAmn", "tMKCvbBBpyPFaJ", "flquOJ", "bdGVCwLcTYqGa", "FCLtmvyAoCT", "SuieHXchRAmEJE", "NfgfiRRAxfiXUClEACvE", "eovE", "MHdkj", "DJTG", "QFEsOnIv", ".", ".."};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> files = {"BNqp", "Y", "uGzLOrVfrENI", "gh.", "sjNeNVkThRfKLWS", "ZfirLizmCPSDMpM", "NCQOpLw", "gWC", "bQKzHJ", "XwN.hIiBQdkbbG", "UnHcxHMQfmZSBeYCFjs", "raRnL", ".", "PbnwtNN", "cdXGxHQWbZ", "UnDM", "OlFcLyKF", "hlfWEi", "n", "xjBpHrObbAlisJW", "cLB.pacuYteLmjJZb", "KinkJL.kjl", "nZLn.KoSEGCbKem", "ed", "BrcSxhj", ".."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BNqp", "Y", "uGzLOrVfrENI", "gh.", "sjNeNVkThRfKLWS", "ZfirLizmCPSDMpM", "NCQOpLw", "gWC", "bQKzHJ", "XwN.hIiBQdkbbG", "UnHcxHMQfmZSBeYCFjs", "raRnL", "BrcSxhj", "PbnwtNN", "cdXGxHQWbZ", "UnDM", "OlFcLyKF", "hlfWEi", "n", "xjBpHrObbAlisJW", "cLB.pacuYteLmjJZb", "KinkJL.kjl", "nZLn.KoSEGCbKem", "ed", "..", "."};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> files = {"cDEURSSRyfmcrtcYEUed", "OrkrTeufKablDYOMmTK", "oyQnShbbJbAjSIcg", "yHaWMlXoRHvkCeYWAlZi", "D", "RPFMZInTsqqip", "fsjbDrKlxPbZgu.Ju", "tiSfoyLHkieAnVeErL", "mHBVgFJCcpQlRqoFlHWQ", "jcaMwqzj", "BaPtTFgk", "gwsubdbGGXBZ", "XlKZIrLvi", "wl", "PwJbiKNkTK.ohWk", "LpKiC", "..", "kRKDyOUvZvGXSaZmUAxc", "FSBKxFZsFojmHpcu", "qansbazGCS", "A", "NAgisdmTZpNXkKE", "PNvvcpOcPqWwXC", "HZExiUpel", "TQnoOAiTc", ".", "ManMofveo", "SpsZwLRxZgnoG"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cDEURSSRyfmcrtcYEUed", "OrkrTeufKablDYOMmTK", "oyQnShbbJbAjSIcg", "yHaWMlXoRHvkCeYWAlZi", "D", "RPFMZInTsqqip", "fsjbDrKlxPbZgu.Ju", "tiSfoyLHkieAnVeErL", "mHBVgFJCcpQlRqoFlHWQ", "jcaMwqzj", "BaPtTFgk", "gwsubdbGGXBZ", "XlKZIrLvi", "wl", "PwJbiKNkTK.ohWk", "LpKiC", "SpsZwLRxZgnoG", "kRKDyOUvZvGXSaZmUAxc", "FSBKxFZsFojmHpcu", "qansbazGCS", "A", "NAgisdmTZpNXkKE", "PNvvcpOcPqWwXC", "HZExiUpel", "TQnoOAiTc", "ManMofveo", ".", ".."};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> files = {"otrIJksLDnE", "oBIlrppNaqHsdiAIlYsc", "GBKlzAGGPjJmZmsvefv", "ZwjjBiJBwX.EC", ".", "xZ", "dkT", "..", "zNAfWXPdmXuhn", "iMagHZeAhzJr.", "IsELlNPZCiOh", "joerBofoMBAjVNILHLE", "tyGwCtxgFJacnVpvloJ", "RGnSf", "yjZCfsMUMEm", "hYHxx", "onrEqjkUoZMJOICXBCHp", "eRmfcNNaIrSKZf", "b", "yOqbg", "Kjc"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"otrIJksLDnE", "oBIlrppNaqHsdiAIlYsc", "GBKlzAGGPjJmZmsvefv", "ZwjjBiJBwX.EC", "Kjc", "xZ", "dkT", "yOqbg", "zNAfWXPdmXuhn", "iMagHZeAhzJr.", "IsELlNPZCiOh", "joerBofoMBAjVNILHLE", "tyGwCtxgFJacnVpvloJ", "RGnSf", "yjZCfsMUMEm", "hYHxx", "onrEqjkUoZMJOICXBCHp", "eRmfcNNaIrSKZf", "b", "..", "."};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> files = {"tEgee", "zDDoy.", "hKLIzH.Baynub", "MnKwMRlfewo", "tGtFj", "mMisrtA", "sfdgJQPmq", "ISXCtbSdVcdCAAZPv", "DaEBQ", "AHCss.ppKyoi", "ivkVAMyDl", "IZySmLfVzUnp", "VrVh", "R.ftGfjIiiZEIfu", "MIytIAJzS", "jiYZbRbbLIlvBkKgUJ", "chzdDlQcDk", "a", "gIJZOF", "EPk", "wtxqQYwSKTg.Zq", "BXkHIssLbGchXqtcncuJ", "RGpjYiFrZjik", "toUKxobvpjLURWewPk", "nA", "RS", "H", "VMbtVoiVFvgKL", "iEHrNpcYUs", "MAPirAwNGyTuOQ", "TvbU.", ".", "SHthcbBb.GDWvsCyuWLA", "J", "aTYc", "bXWkPYJEMsdGIva", "oGdkvQfEuYWRBnntyFzZ", "prr", "..", "fjJuPcFmhOuxLsxt", "twfN", "llBLiGrpZoHy"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"tEgee", "zDDoy.", "hKLIzH.Baynub", "MnKwMRlfewo", "tGtFj", "mMisrtA", "sfdgJQPmq", "ISXCtbSdVcdCAAZPv", "DaEBQ", "AHCss.ppKyoi", "ivkVAMyDl", "IZySmLfVzUnp", "VrVh", "R.ftGfjIiiZEIfu", "MIytIAJzS", "jiYZbRbbLIlvBkKgUJ", "chzdDlQcDk", "a", "gIJZOF", "EPk", "wtxqQYwSKTg.Zq", "BXkHIssLbGchXqtcncuJ", "RGpjYiFrZjik", "toUKxobvpjLURWewPk", "nA", "RS", "H", "VMbtVoiVFvgKL", "iEHrNpcYUs", "MAPirAwNGyTuOQ", "TvbU.", "llBLiGrpZoHy", "SHthcbBb.GDWvsCyuWLA", "J", "aTYc", "bXWkPYJEMsdGIva", "oGdkvQfEuYWRBnntyFzZ", "prr", "twfN", "fjJuPcFmhOuxLsxt", "..", "."};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> files = {"kdLldIlsJfMGV", "CjVKBhnIhBArinG", "..", "vFTp", "VFQ", "bOfyM.w", "JHfE.QGfeSsZVAsIWNa", ".", "KXDizBdTdsU", "cPlug", ".nxdUrabLVkpOMBojWu", "ylONrmLvyrwCN", "XWtnquMWwG", "XrjqoxbkSswpj", "FsVInJkMqzLGgjXvM", "aPJxxewqqTvIFGry", "mdekOaYvFpX", "zEK.MesRl.L", "snGMrSEqcGV", "rhAdLhPIILiBKRf", "sBSMjjmfU.KZZdXBSX"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kdLldIlsJfMGV", "CjVKBhnIhBArinG", "sBSMjjmfU.KZZdXBSX", "vFTp", "VFQ", "bOfyM.w", "JHfE.QGfeSsZVAsIWNa", "rhAdLhPIILiBKRf", "KXDizBdTdsU", "cPlug", ".nxdUrabLVkpOMBojWu", "ylONrmLvyrwCN", "XWtnquMWwG", "XrjqoxbkSswpj", "FsVInJkMqzLGgjXvM", "aPJxxewqqTvIFGry", "mdekOaYvFpX", "zEK.MesRl.L", "snGMrSEqcGV", ".", ".."};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> files = {"bEFPK.I", "vRtMoupmCJcoLO", "ia.", "aWtMybbcgShXc", "DnrpjUT.fSkBfkzy", ".", "uoQF", "rGvXwgal.rXCzVG", "DDbbYaAbeUWXYzOx", "mzlzk", "jrCGzSugLjRMc", "zcsphxDcMuZpZomdHp", "LDRrLjOW", "UjO.ubOfsSFVFQtVxqo", "AD", "..", "rbBGZEuIVkhBHOUnonf", "jGiHgCFEnEMdEAFTqxS", "yviHof.wUnzHXFRpNT", "Q.NqGK", "HXuxwwLIFujnzxvgOI", "imruWff", "CBx", "fhqtqkF", "hThP"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bEFPK.I", "vRtMoupmCJcoLO", "ia.", "aWtMybbcgShXc", "DnrpjUT.fSkBfkzy", "hThP", "uoQF", "rGvXwgal.rXCzVG", "DDbbYaAbeUWXYzOx", "mzlzk", "jrCGzSugLjRMc", "zcsphxDcMuZpZomdHp", "LDRrLjOW", "UjO.ubOfsSFVFQtVxqo", "AD", "fhqtqkF", "rbBGZEuIVkhBHOUnonf", "jGiHgCFEnEMdEAFTqxS", "yviHof.wUnzHXFRpNT", "Q.NqGK", "HXuxwwLIFujnzxvgOI", "imruWff", "CBx", "..", "."};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> files = {"hdJphQQvqFbtjllJSN", "..", "bVjeYa", "oYvEBcNVuSU.XIIi", "umFMkuqQPjNuZyKW.JIi", "u", "BBZJ", ".", "SaHqBCzBiDFTn", "MVNFMlIaLcGLFu", "lNAdiuNgBkRtWix.NZ", "SoTPbOqpgilhuhtu", "surSKPjMwferxyMNv", "olokUuGA", "wro.xvKjhgbeSUtOcT", "yRlIfC"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hdJphQQvqFbtjllJSN", "yRlIfC", "bVjeYa", "oYvEBcNVuSU.XIIi", "umFMkuqQPjNuZyKW.JIi", "u", "BBZJ", "wro.xvKjhgbeSUtOcT", "SaHqBCzBiDFTn", "MVNFMlIaLcGLFu", "lNAdiuNgBkRtWix.NZ", "SoTPbOqpgilhuhtu", "surSKPjMwferxyMNv", "olokUuGA", ".", ".."};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> files = {"This", ".", "is", "tricky", "test", ".."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"This", "test", "is", "tricky", "..", "."};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> files = {".", ".."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".", ".."};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> files = {".", "..", "Image.jpg"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Image.jpg", "..", "."};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> files = {"ContestApplet.jnlp", ".", "Image.jpg", "..", "Book.pdf", "Movie.avi"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ContestApplet.jnlp", "Movie.avi", "Image.jpg", "Book.pdf", "..", "."};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> files = {"www.topcoder.com", "Ever.tried", ".", "Ever.failed", "..", "No", "Matter.", "Try", "Again.", "Fail", "Again..", "Fail.Better"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"www.topcoder.com", "Ever.tried", "Fail.Better", "Ever.failed", "Again..", "No", "Matter.", "Try", "Again.", "Fail", "..", "."};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> files = {"..", "abc", "."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abc", ".", ".."};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> files = {"..", "."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..", "."};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> files = {"..", "image", "."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"image", ".", ".."};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> files = {".", "a", ".."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "..", "."};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> files = {"No", "..", "Zaphod", ".", "Just", "very", "very...", "Improbable"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"No", "Improbable", "Zaphod", "very...", "Just", "very", ".", ".."};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> files = {"a.a", "..", "a.b", "."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a.a", "a.b", ".", ".."};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> files = {"..", ".", ".Image.jpg"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".Image.jpg", ".", ".."};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> files = {"a", ".", ".."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", ".", ".."};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> files = {"a", "..", "b", "."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", ".", ".."};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> files = {"..", "A", "."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", ".", ".."};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> files = {"kk", "..", "."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kk", "..", "."};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> files = {"..", ".", "Image.jpg"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Image.jpg", ".", ".."};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> files = {".", "..", "..a", ".b"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".b", "..a", "..", "."};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> files = {".", "dsa", ".."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dsa", "..", "."};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> files = {".", "a", "b", ".."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b", "a", "..", "."};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> files = {"A", "..", ".", "B"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "B", ".", ".."};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> files = {".vinay", "..dssdsd", ".", ".."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".vinay", "..dssdsd", ".", ".."};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> files = {"a", "b", ".", "c", ".."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "c", "..", "."};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> files = {"..", "a", "."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", ".", ".."};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> files = {".", ".a", "..", "tricky", "test", "abc"};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abc", ".a", "test", "tricky", "..", "."};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> files = {"This", "..", "is", "tricky", "test", "."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"This", "test", "is", "tricky", ".", ".."};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> files = {"..", "tc", "."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"tc", ".", ".."};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> files = {"a", ".", "b", ".."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "..", "."};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> files = {"a.a", "..", "aa.b", "."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a.a", "aa.b", ".", ".."};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> files = {"..", "pqr", "abc", "."};
    EllysDirectoryListing* pObj = new EllysDirectoryListing();
    clock_t start = clock();
    vector<string> result = pObj->getFiles(files);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abc", "pqr", ".", ".."};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23046233&rd=14727&pm=11529
********************************************************************************
#include<iostream>
#include<vector>
using namespace std;
 
class EllysDirectoryListing {
  public:
  vector <string> getFiles(vector <string> files) {
    int len = files.size();
    int turn = 1;
    
    for(int i = 0; i < len-2; ++i) {
      if((files[i].length() == 1 && files[i][0] == '.')||
        (files[i].length() == 2 && files[i][0] == '.' && files[i][1] == '.')) {
        if(turn % 2 == 1) {
          files[i].swap(files[len-1]);
          ++turn;
        }
        else {
          files[i].swap(files[len-2]);
          ++turn;
        }
        --i;
      }
    }
    return files;
  }
};

********************************************************************************
*******************************************************************************/