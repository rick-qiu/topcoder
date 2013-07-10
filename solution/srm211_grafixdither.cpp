/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3000
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

class grafixDither {
public:
    vector<string> gray2bwRiemersma(vector<string> grays);
};

vector<string> grafixDither::gray2bwRiemersma(vector<string> grays) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> grays = {"ab", "cd"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BB", "BB"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> grays = {"abcd", "efgh", "ijkl", "mnop"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBWB", "BBBB", "BBBB", "WBWB"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> grays = {"abcdefgh", "ijklmnop", "qrstuvwx", "yzABCDEF", "GHIJKLMN", "OPQRSTUV", "WXYZabcd", "efghijkl"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBBBBBB", "BBBWBWWB", "BWBWBBWB", "BBWBWWBW", "WWBWWBWB", "WBWWWWWW", "WWWWBBBB", "BBBBBBWB"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> grays = {"abcdefghijklmnop", "qrstuvwxyzABCDEF", "GHIJKLMNOPQRSTUV", "WXYZabcdefghijkl", "mnopqrstuvwxyzAB", "CDEFGHIJKLMNOPQR", "STUVWXYZabcdefgh", "ijklmnopqrstuvwx", "yzABCDEFGHIJKLMN", "OPQRSTUVWXYZabcd", "efghijklmnopqrst", "uvwxyzABCDEFGHIJ", "KLMNOPQRSTUVWXYZ", "abcdefghijklmnop", "qrstuvwxyzABCDEF", "GHIJKLMNOPQRSTUV"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBWBBBBBBBWBBBW", "WBBBBWBWWBWBBWBW", "BWBWBWWWWWWBWWWW", "WWWWBBBBBBBWBBBB", "BWBBWBWBWBWBWBBW", "WBWWBWBWBWBWBWWW", "BWBWWWWWBBBBBWBB", "BBWBBBWBBWBWBBWB", "WWBWBWBWBWBWWBWW", "WBWWWWWWWWWWBBBB", "BWBBWBBWBWBWBWBW", "BBBWBBWBWBWBWBWB", "WWWWBWWWBWWWWWWW", "BBBBBBBBBBBWBBWB", "BBBBWBWWWWBBWBWB", "WWWWBWWBWBWWWWWW"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> grays = {"abcdefghijklmnopqrstuvwxyzABCDEF", "GHIJKLMNOPQRSTUVWXYZabcdefghijkl", "mnopqrstuvwxyzABCDEFGHIJKLMNOPQR", "STUVWXYZabcdefghijklmnopqrstuvwx", "yzABCDEFGHIJKLMNOPQRSTUVWXYZabcd", "efghijklmnopqrstuvwxyzABCDEFGHIJ", "KLMNOPQRSTUVWXYZabcdefghijklmnop", "qrstuvwxyzABCDEFGHIJKLMNOPQRSTUV", "WXYZabcdefghijklmnopqrstuvwxyzAB", "CDEFGHIJKLMNOPQRSTUVWXYZabcdefgh", "ijklmnopqrstuvwxyzABCDEFGHIJKLMN", "OPQRSTUVWXYZabcdefghijklmnopqrst", "uvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyzABCDEF", "GHIJKLMNOPQRSTUVWXYZabcdefghijkl", "mnopqrstuvwxyzABCDEFGHIJKLMNOPQR", "STUVWXYZabcdefghijklmnopqrstuvwx", "yzABCDEFGHIJKLMNOPQRSTUVWXYZabcd", "efghijklmnopqrstuvwxyzABCDEFGHIJ", "KLMNOPQRSTUVWXYZabcdefghijklmnop", "qrstuvwxyzABCDEFGHIJKLMNOPQRSTUV", "WXYZabcdefghijklmnopqrstuvwxyzAB", "CDEFGHIJKLMNOPQRSTUVWXYZabcdefgh", "ijklmnopqrstuvwxyzABCDEFGHIJKLMN", "OPQRSTUVWXYZabcdefghijklmnopqrst", "uvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyzABCDEF", "GHIJKLMNOPQRSTUVWXYZabcdefghijkl", "mnopqrstuvwxyzABCDEFGHIJKLMNOPQR", "STUVWXYZabcdefghijklmnopqrstuvwx", "yzABCDEFGHIJKLMNOPQRSTUVWXYZabcd", "efghijklmnopqrstuvwxyzABCDEFGHIJ"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBBBBBBBBBBWWBBBWBBWBWBBBWWWBWW", "WBWWWWWWWWWBWBWWWWWWBBBBWBBBBBBB", "BBBBBBWBBWBWBWBWWBBWWWWWWBWWWWWB", "WWWWWWWWBBBBBBBBBWBBBBBBBWBBBWBW", "BWWBWBWBWWWWWBWWWBWWWBWWWWWWBBBB", "BBBBBWBBBBBBBWBBWBBWBWBWBWBWBWWW", "WWWWWBWWWWWWWWWWBBBBWBBBBBBBWBWB", "BBBBBWBWWBBWBWBWWBWWBWWBWWWWBWBW", "WWWWBBBBBBBBBBBBBBWWBBBWBWBWBWBW", "BWBWWBWWWWWWWWWWWWWBWWWWBBBBBBBB", "WBBBBBWBBBWBWBBWWBBWBWBBWBWBWWBW", "WWWWWWBWWWWWBBBBBBBBWBBWBWBWBBWB", "BBWBWBWWWBBWWWWBBWWWBWWBWWWWWWWW", "BBBBBBBBBWBBBBBWWBBBWWBWBWWBBWWB", "WBWWWWBWWWWWWWWWBWWWBBBBWBBBBBBB", "BWBBBBWWBBBWBBWBWWBWBWWWBBWWWWWW", "WWWWWWWWBBBBWBBBBBBBWWBBBWBBWBWB", "WBBWBWWBWWWBBWWWWWWBWBWWWWWWBBBB", "BWBBBBBBBBBBWBBBBWBWBWBWWBBWWWWW", "WBWWWWWWWWWWWWWWBBBBBBBBBWBBBBBB", "WBBBBWBWWBWWWBBWWWWWWBWWWBWWWWBW", "WWWWBBBBBBBBBWBBBBBBBWBBWBBWBBWW", "BWWWWWWBWWBWWWWWWWWWWWWWBBBBBWBB", "BBBBBBBWBBWWBBBWWBBWBWBWWBWWWBWW", "WWBWWWWWWWWWBBBBBWBBWBBBBBBWBWBB", "BWWBBWBWBWWBWWWBWBWWBWWWWWWWWWWW", "BBBBBBWBBBBBBBWBWBBBBWWBBWBWWBBW", "WWBWWWBBWWWWWWBWWWWWBBBBBBBBBWBB", "BBWBBWBWBWWBBWWBBWWWBWWWWWBWWWWW", "WWBWWWWWBBBBBBBBBBBBBBBBBBWBBBBW", "BBWWBWWWWWWWWWWWWWBWWWWWWWWWBBBB", "BWBBBBBBBBBBBBBBBWWBBWBWWBWBWWWB"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> grays = {"hW", "mA"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BW", "BW"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> grays = {"nQ", "dP"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BW", "BW"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> grays = {"AiGueWIl", "zORArZvM", "gtYMKsHH", "VGLPKFfV", "DpcdVbxj", "SQCOQzpX", "BTJGjYgU", "pJFgvnnn"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WBWBBWWB", "BWBWBWBW", "BBWWBWBW", "WWBWWWBW", "WBBBWBBB", "WWBWBWWB", "BWWWWWBW", "WBBBBBBW"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> grays = {"QuDvOYxEBbPqcNhe", "hpBpzOqGQuuvRtPo", "VsQenplwoJYBwqkV", "GuIhfQWusyuOXQVr", "XNTlWtQrtLgZHNXJ", "GlETaeGILYUTDVaI", "feozyGHkArcZkviz", "SFEDwAAtTxbgTqUy", "DTQdgOYrSCIDNlNp", "VztxTzunERDjENkl", "hkXYEMFMqTLZAdzb", "nDXVFRJhsDKmelbx", "lUsSyJwtcQVIFlij", "UElKbkeYJkNThRfD", "xbccKbLvoSvEuQFw", "tnzKBfUzysrXckKT"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WBBWWWBWWBWBBWBB", "BWWBBWBWWBBWWBWB", "WBWBBBBWBWWBBBBW", "WBWBBWWBBWBWWWWB", "WWWBWBWBBWBWBWWW", "BBWWBBWWWWWWWWBB", "BWBBWBBBWBBWBWBW", "WBWWBWBWBWBBWBWB", "WWWBBWWBWWBWWBWW", "BWWBWBBWBWWBBWBB", "WBWWWWBWWBBWWBBB", "BBWWBWWBBWWBBBWW", "BWWBWWBWBWWBWBBB", "BWBWBBBWWBWWBWBW", "WBBBWBWWBWBBWWWB", "BWWBBBWBWBWWBBBW"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> grays = {"Leuv", "Plgv", "IJed", "mQLN"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WBWB", "WBBB", "WWBW", "BWWB"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> grays = {"mXTSWvoeRCtXukSW", "fgOetzUfCUboPmIu", "mfYlGrxnuESrZqDs", "ayjbJpsXKjQEutDC", "SYaRPMLCbJQVlWov", "IjFGcptTGmgcxHAY", "yLXAIMKcTVqnsDPJ", "FZmDVoZIaHTCckyP", "nkjELmEJccCbAxES", "fLUyOJPaRNUosxOM", "pbksLLDJGZKgHdVQ", "lAAkWgAUoDcZnFmr", "XEwAMVafWWrygGot", "pRSHRunjePjiCsFD", "ibMcdIqEEtUiGtsZ", "jPBVKGYbsvUhJbXp"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BWWWWBBBWWBWBWWW", "BBWBBWWBBWBBWBWB", "BBWBBWBWBWWBWBWB", "BWBBWBBWWBWWBWBW", "WWBWWWWBBWWWBWWB", "WBWWBBBWWBBBBWBW", "BWWBBWWBWWBBWBWB", "BWBWWBWWBWWWBWWB", "WBBWWBWWBBWBBWBW", "BWWBWWBBWWWBWBWW", "BBBWWBBWBWWBWBWW", "WBWBWBWWWWBWBWBB", "WBBWWBBBBWWBBWBW", "BWWWWWBBBWBBWBBW", "BBWBBWBWWWWBWWBW", "WBWBWBWBBBWBBBWB"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> grays = {"IA", "Mk"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WB", "BW"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> grays = {"dPvnzurFtuUMHFzgrnhENwgVsRdGkVka", "RtbdCkymoCEFubDVxECTMhEvVOZPUtFm", "aKdpSHThARuGHbutZyqGKGjwBpOxvODC", "KiZgLHJCVwjPdtEPzkmCqaqpJuIKuDWO", "jEaCFAGHAjuAGuxHjXRXWJuZTUyIhwWH", "cpJPbKFzbmnEshhxqXsIootQBYAMzRfk", "JcJOaRSXBEQNwBEybTrLlBJTOpXyavBu", "fKfxCyZJXGyVicKOaMFvVWspTNCGQIEM", "xrmHTEigrnsqppzAolSbMGEKfBigqukj", "LuzTUDNVrJbqvpcoIEjRxlfnygzgAseu", "GgpSbvavqaiSGePOGDMTZPnIwMoNlaEt", "YpxxuwRHtWrbbiFzWSEeYMavCOmBuUTB", "XwqKiCCoGOWjJguzZCQWqYuqqtkmUbbN", "riJOSKiGweojWYmVuDHDfkuxnmTuYJpZ", "yruZcWfGzVEuUGmRBhylGvdHqheTxoLC", "KqwDSoOPYFTKEusofrMkchtcdaSCZbWY", "ywfgVfTKarFuSEWVKGOkVCBJrciTOZLV", "PZQXpTCatSllZVCAdpXdFSllAczqmhEw", "EYjWJwQvRQkhzfhKBJcCbtEBdJkrNQuu", "lWPMbXfijaJIWkoWUCMtswcUNQiyBbuB", "azlcdfwyencgbPhxsrwAousCYhUHUbGd", "wqETIvgkeMLvClmykFYMDagcGbDiDzEE", "hkQqHtZfsFvyKAZiZwLitSIBgvbumvbJ", "wdLzIslbbZzlAFIYNIVAdiwaxpTxtvOd", "SUOztpWRvhQMFxCkfYTnwgkeNkrJLzXO", "pKYmryuQsVpfuzGDDMxLOBwqRtAnibwU", "kCXIeUXxTAzJWfGwaaeQHSMczYqXQMrp", "TpfNaEjfnLpAvtxnbsmpGiczGsAaKUXY", "rDhISdkikexjrdmJibLoBlskDWfOnVIK", "aEYDXPoHDkztcwjegqOfabQpIKePQyVZ", "jDJkZSaFiaAHSwfgviBkKgFWkbyzynsN", "TpANsiGhYIAiTLyhhfQBgAtaTiaRjNAN"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BWBWWBBWBBWWBWBBWBBBWBBWBWBWBWBB", "WBBBBWWBBWBWWBWWBWWWBWBWWWWBWBWB", "BWBBWBWBWWBWWBBBWBBWWWBBWBWBWWWW", "WBWBWBWWWBWBBBWWBBWBBBBWWBWWBWBB", "BWBWWBWBWBBWWWBWBWWWWBBWBWBWBWWW", "BBBWBWWBBBWBBBBBBWBWBWBWWWWBWBBB", "WBWWBWWWWBWWBWWBBWBWBWWWBBWWBWBB", "BWBBWBWBWWBWBBWWBWWBWWBBWWWBWBWW", "WBBWWBBBBBBWBBBWWBWBWBWWBWBBBWBW", "BWBWWWWWBWBWBWBBBWBWBWBBBBWBWBBB", "WBBWBBBBWBBBWBWWWBWWWWBWWWBWBBWB", "WBBWBWWWBWBWBBWBWWBBWWBBWBBWBWWB", "WWBWBWBBWWWBWBBWWWBWBWBBBBWBWBBW", "BBBWWWBWBBBBWWBWBWWWBBWWWBWBWBBW", "WBWWBWWBWBBWWWBWWBWBWBWBBWBWBWBW", "WBWBBWBWWWWWBBWBBBWBBWBBBBBWWBWW", "BBBBWBWWBBWWWBWWWBWBWWBWBBBWWWBW", "WWWWBWWBBWBBWWBWBWWBWBBBWBWBBBWB", "BWBBWBBWWWWBBBBBWWBWBBWWBWWBWWBW", "WWWWBWBBBBBBWBWWBWWBWWBBWWBBWBWB", "BWBBBBWBBBBWBBBWBWWBBBWBWBWWWBWB", "BBWWWBBBBWWBWWBBBBWWWBBBWBWBWBWB", "WBBWWBWBBWBWWBWBWBWBWBWWBBBBBBBW", "BBWWBWBBBWWBBWWWWWBWBWBBWBWWBWWB", "WWWBBBWWBBWWBWBBBWWBWBBBWBWBWBWW", "BWWBWBBWWWBBWBWWWBBWBWWBWBBWBBBW", "WBWWBWWWBWWBWBWBBBBWBWWBBWBWWWWB", "BWBBBWBBWWBWWBBWBBWBWBBBWBWBWBWW", "WBBWWBBBBBBBWBWBBBWBWBBWWWBWBWWB", "BWWWWWWBWBWBBBBBBWWBBBWBWBBWWBWW", "BWWBWWBWBBWWWBBBBBWBWBWWBBWBBWBW", "WBBWBBWBWWBBWWWBWBWBBWBBWBBWWBWB"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> grays = {"NEUPMruWtmUtoopmQnUGIhZtbjtLiFFB", "hNWHXblGyGCtrNXIWgfmDRYLlISwknue", "iYXBmRVWHhYvclDtImjZUemQpCygqyrz", "LRrebleBHrqzrgeYwHceBynFjgrcAuIV", "mXqxRDxknXIQFmHOcPKfqiYoKfucmTyD", "AXAwlepFSOpHVfzuEfdeJnVDjvDIURYC", "MIRNpAqXdXXUOXpYaSMsHLshBDGHygPI", "rbdKXcpuUXUbSelUPRBRxwHblPLKJkWn", "FXjfpCSfTBCogQQmiQaBGwionUOBwhKO", "xRNGJGvRxGvGFtVbpelfiVQAXujQejum", "IsRBuUmgfVsGrptSdYQcNFNnIkyqtfeO", "ehQdcMXxgnlsswjIipEMjKSOvnOhlLTO", "innesndamnPAbXDMDFinZHSrjSFvgsMS", "RvAwkXgxiiTFrEyqhuQlxziVVZtNgexP", "PRgWiJFGnMktzUoizVXNxQZFdebeTGnM", "ToblZlzLrABiwEDkuZSkcFjZPOwkbqyR", "ysgVhXbWnyGwXWVNWbbaStFMWImpLAkW", "IqlCyAsayTWlRzOEzulnPiSamSOKHmUA", "cOJsAmysFHfDowtmcrLmYTTAVQcbrJrC", "XbfmMmeuYdPQefKJeZLoHQrthzUbYWzo", "ReRpcZfuSOsSeKKLYOrBipyRjudbIDcv", "FqZtuNWcgVsdIDIzXmddAKtUaOdsJaAK", "kPEeFfmCGPcrpYIKDmfUpnfrTnvPWiOx", "yXTHtYnybDMmzvHXXWSJZQxNqoqTvaTs", "qrUuCaKfROsnQesiEtCBYNCqKJDXwIhQ", "VGoNRrSGZrYOrcgvCjXsqSufgvPCCKoE", "mOWwQxoBmrHbAcqrEdBOcPCaQqYhvyms", "zDYZlGDmWlbJjADJnzbaVoBmtNXMJzat", "peZaTdQxxmylAryBPgPaplsoYBUKfpBa", "fiBsuFqUkpWLPNffrJwMcuWixpnthHZz", "HADjSgVZPTFTxFbAslxsejEjnCMXPXKE", "aEIXrRtzWoVctBZXSFzEkhhLXzixJkji"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WBWWWBBWBWWBWBBWWBWWWBWBBBWBBWBW", "BWWBWBWBWBBWBWWBWBBBBWWWBWWWWBWB", "BWWBBWWWBBWBBBWBWBBWWBBWBWBBWBWB", "WWBWBBBBWBBWWBBWBWBBWBWBBBWBBWBW", "BWWBWWBWBWWWBBWWBWWBWBWBWBBBBWBW", "BWBWBBBWWWBBWBWBWBBBBBWWWBWWWWWB", "WWWBWBBWBWWWWWBWBWWWWWBBBWBBBBWW", "BBBWBWWBWWWBWBBWWWBBWBWBBWWWWBWB", "BWBBBWWBWBWBBWWBWBBWBWBWBWWBWBWW", "WWWWWWBWBWBWWBWBBBWBBWBWWBBWBBBB", "BWWBBWBBBWBBBWBWBWWBWBWBWBBWBBBW", "BBWBBWWBWBBWBBBWBWBWBWWWWBWBBWWW", "BWBBBWBBWBWBBWWBWBWBWBWBBWBWBWBB", "WBBWBWBWBBWWWBBWBBBWBWBWWWBWBBWW", "WBBWBWWBBWBBBWBWWWWBWWWWBBBBWWBW", "WWBBWWBWBWWBWBWBBWWWBBBWWWWBBWBW", "BWBWBWBWWBWBWWWWWBBBWBWWWWBWWBBW", "WBBWWBBBBWWBWBBWWBWBWBWBBWWBWBWW", "BWBBWBWBWBBWBWBBBBWBWWWBWWWBBWBB", "WBWBWBBWWBWWBBWWBWWBBWBWBWBBWWBW", "WBWBBWBBWWBBBBBWWWBWBBBWBWBBBWBB", "WBWWBWBWBWBWWWWBWBBBWWBWBWBBWBWW", "BWBBWBWBWBWBBWWWWBBWBBBWWBBWWBWB", "BWWWBWBWBWBBWBBWWWWWWWWBBBWWBBWB", "WBWBWBWBWWBWBBWWBWBWWWBBWBWWWBBW", "BWBWBWWBWBWBWBBBWBWBBWWBBWWBBWWB", "WBWBWBBBBWWBBBBBWBBWBWWBWBWBBWBW", "BWWWBWWWWBBWWBWWBWBBWBBBBWWWWBBB", "BBWBWBWBBWBBWBBWWBWBBWBWWWWBBWWB", "BWBWBWBWBBWWWWBWBWBWBBWBBBWBBBWB", "WBWBWBWWWWWWBWBBBBBBBWBBWWBWWWWW", "BWBWBWBWWBWBBWWWWWWWBBBWWBWBWBBB"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> grays = {"dpIKbkiAnckLAClYInuQmdKFxDiMSwQo", "foJhETrGRntrCEobDTQwXBhojWcyZuuu", "vSTmvQtolyAFTmuPxgovUIDxqKlpREtY", "pTCckiUxDNslHWuDruSZuWxbVououyTQ", "UnpjDexqEXrAaQdwlxMOnclsJNjfgBqr", "lqGvcfGvoaDMYohSRxwudpVRSrMKLUCg", "TcfRDyiDiJFXVPQAKhPqeWwNHvsqLotM", "XoVrAGOTTXtcddiXWjJsjyHewhkxIgpL", "ggEvWjseiSSnAtdXNuGepqVNyFYdKVSQ", "XWTEcOSpwsypWHfHtNZLHhCqdWURhCuc", "fMYmTWLAEOrAAnjsPJfrkXqosmDdybvP", "NIpFgngfXoymcPaZFzcSmNeYjgTFPZIV", "ULmyLCDhdSTuTUSrrdMJnigBcjuBZXld", "NNxPcvbjpsNjtEhOwcPzlvrQwdhOYtrb", "oKNazoggLahUDGHSlYcnLrItiobzJstx", "AOFysgHZwIfOjXyyhZgvIWJffVqXuobt", "pVaTcwTSseDaGaQrdSPmuRZgGYMIELVH", "MrkllCgOGzFFhLcYgtpEMXgdghWyUwkw", "RPOEUaavSFEFmTyWHFBGmhHFEMYPIsXc", "fPBUdSqGlOBMzVvFlNsWMqxucJtEKJbH", "rBKiFJPGHPQtyOGNzqeaqKWlsYjmMvqs", "QTSRSIRdvtNMtRXpBhfNjSKhxwIQwUuw", "zXQFuVxvaijyKTfJOcXPZVuPWvJCUHeb", "beLGXUeafPgVrPBbCUZUTIRnMbZQiBPc", "tgqwjEcwfMmffdRVqJWARqPoLyaiVYzQ", "wdqPYhXaJoiTFCvMOPiMPXRLKaiEIoUm", "pNXsAbcPGVHhLJEbZyNSdERcmAiXBniQ", "rIEmdHOQFqnJQuXLEamIgIaCWwmBnsjU", "jaLkxxpVHuIrPuEIyKiRekZGfGBEaAdu", "UmWYHAehMXfnGJXNTYdVsjEYoupPNBvr", "PSiSCUDRTbUeEBJfhebUihmnhwImeDVX", "AMqMwWroUPeHpkRiheMLgvfogEXqAhoS"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BWBWBBBWBBBWBWBWWBWWBBWWBWBWBWWW", "BBWBWBWBWBWBWBBBBWBWWWBBBWBBWWBB", "BWWBWWBBBBWWWBWBWBWBBBWWWBBWWBBW", "WBWBBBWWWWBBWWBWBBWWWWBBWWBBWBWW", "WBBBWBBBWWWBBWBBBWBWWBBBBWWBBWBW", "WBWBBBWBBBBWWBBWWBWBBBWWWBBWBWBW", "BBBWWBWWBWWWWWWBWBWBBWBWWWBBWBWB", "WBWBBWBWWWBBBBBWWBWBWBWBBBBWWBBW", "BBWBWBBBBWWBWWBWWBWBWBWWWBWBBWWW", "WWWWBWWBWBBBWBBWWBWBWBBWBWWWBWBB", "BWWBWWBWBWBWWBBWWWBBBWBBBWWBWBBW", "BWBWBBWBWBWBBWBWBWBWBWBWBBWBWWWW", "WBBWWBWBBWBWWWWBWBWWBWWBBBWBWWBB", "WWBWBWBBBBWBBWBWBBWBBBBWWBBWWBWB", "WBWBWBBBWBBWBWWWBWBBWBWBBBBWWBBB", "BWWBBBWWBWBWBWBBBWBBWWWBBWWBBWBW", "WBBWBBWWBBWBWBWBBWBWBWWBWWBWWBWB", "WWBBBWBWWBBWBWBWBBWBWWBBBWWBWWWB", "BWWWWBBBWWWBBWBWWWBWBBWBWBWBBBWB", "WBBWBWBWBWBWWWBWBWBWWWBWBWBWWWBW", "WBBWWWBWWBWBBWBWBWBBBWWBBWBBWWBW", "WWWBBWWBBWWWBWWBWBBWBWWBBWWWBBWB", "BWWWBWBWBBWBWWBWBBWWWWBWWBBWWWBB", "BBBWWWBBBWBWBWWBWWWWBWWBWBWWBBWB", "BBBWBWBBWWBBBWBBBBWWWBWBWWBBWWBW", "WBBWWBWBBBBWBWWWWWBBBWWWBBBWWBWB", "BWWBWBBWWWWBWBWBWBWWBWWBBWBWWBBW", "BWBWBBWWBBBWWBWWWBBWBWBWWBBWBWBW", "WBWBBWBWWBWBWBWBBWBWBBWBBWWBBWBW", "WBWWWBBBWWBBWWWWWWBWWBWWBBBWWBBB", "WWBWWWBWWBWBBWBBBBBWBBBBWBWBBWBW", "BWBWBWWBWBBWWBWBBBWWBWBWBWWBWBWW"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> grays = {"xA", "jg"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BW", "WB"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> grays = {"fI", "oE"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BW", "BW"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> grays = {"eRSvVSajwPpTKaZq", "RfffvRySYVBdjnEd", "jsaMhxjdphxfjuVI", "NTKuruNtGxbcRIYg", "mxgLyBFihLNChauO", "toBmxBPtxHXonsYu", "zuFEnsQqwZBpwGGg", "pCoyiRUOdLHhZGLm", "bqAjlGcZOUMeVvTa", "dJImOLIXKBVoTCbf", "cxqxroRiHaGvgoeU", "xJcGASKRFlVsUerW", "oAehzWLSQJATlmHB", "lmpHxLkkcjCRprWz", "mRUHrDhRwTpnjdWq", "yQeYtRZgFjYAWMGV"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BWWBWWBBBWBWWBWB", "WBBBBWBWWWWBBBWB", "BBBWBWWBBBWBWBWW", "WWWBBBWBWBBBBWWB", "BWBBWBWBBWWWBBBW", "BBWWBWWBWBWBWBWB", "WBWBBBWBWWWBBWWB", "BWBWBWWWBBWBWBWB", "BBWBBWBWBBWBWBWB", "BWWBWBWWWWWBWWBB", "BBBWBWWBWBWBBBBW", "WWBBWBWWBBWBWBBW", "BWBBWWWWWWWWBBWB", "BBBWBWBBBBBWBWWB", "BWBBBBBWBWBBBBWW", "WWWWWWWBWBWWWWWB"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> grays = {"tNMfTZSO", "SWWvMrPX", "nYNXlQtn", "ZoAmmxFp", "MgjwHVbM", "IiskYuET", "nmSZmqmO", "xJFessUV"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BWBWWWWB", "WWWBBWWW", "BWWWWBBW", "WBWBBBWB", "WBBBWWBW", "WBWBWBBW", "BBWWBBWW", "WBWBWBBW"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> grays = {"OIqbGiVnRJoMzVwx", "wMoNEkKHMgZcbTcv", "GnNOdwGlUyIkdtOP", "vyHtILjjsHAqmNRs", "pVokgxZImBnhOhfi", "ONkjDLeRdgTfZpbb", "lhwzQAMTrpvrwFEG", "xrzrFDZRkfJOMClp", "tTEkBfttAfFZUAiU", "RymgGUWLAuksTJQa", "CgSGrAmcVdIgDQcK", "OtDGCqogRHZtCyBz", "OrDeBImvhWpTPDSd", "LdeGQhTuUhbYskxK", "dgWDdGqCUCQXBOMe", "YshEelIyNVoKDhix"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WBBBWBWBWWBWBWWB", "BWBWWBWWBWWBBWBB", "WBWWBBBBWBWBBBWW", "BWWBWWBWBWBWBWWB", "BWBBBWWBWBBBWBBB", "WBWBWBBWBBWBWWBB", "BBBWBWWWBBWBBWWW", "BWWBWBWWWBBWWBBB", "WWBBWBBBWBWWBWBW", "BWBWWBWWBWBBWWWB", "WBWBBWBBWBWBBWBW", "BBWWWBWBWWWBWBWB", "WBWBWBBWBWBWWBWB", "WBBWWBWBWBBWBWWB", "BBWBBWBWWBWWWWWW", "WBBWBBWBWWBWBBBB"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> grays = {"LlPusAku", "WJotdSnJ", "kSfbxNRj", "BtuVDiax", "JxSrAabI", "xfMqfNGH", "xlsOeAJK", "vRsXrELH"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WWBWBWBB", "WBBBBWBW", "BWWBBWWB", "WWBWWBBB", "BWWBWBBW", "BBWBBWWW", "WBWWBWBB", "BWBWBWWW"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> grays = {"xdyXGCqDqqeePBax", "jKYoLrXThOyVQiXL", "qnZJeFfEIoQAeKwy", "kmivEshzxxEALxRg", "cNldFIXNzuPCZbsD", "oDuKCOUtkXiRbmyC", "WnudnnGdbtlfEyvt", "qKtOGHtwjcoISHZb", "CoErgumYydMVTOzf", "rCDzWFXpyAZdfjjH", "tkrYJFYfqlaKzuss", "PYApsWbqEtrQqlrE", "SQTQpMywUytHqchT", "pHgwmYYpiWpAHzms", "nEIivXnKHDikCPeZ", "aYOPaViWwdSbKgvi"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BWBWWBWBBWBBWBBB", "BBWWBWWWBWBWBWWB", "WBWBBBBWWBWBBWBW", "BBBWWWBBBBWWWBWB", "BWBBBBWWBWWBWBBW", "BBWWWWWBBWBWBBWB", "WBBBBWWBBWWBWBBW", "BWWBWBWBBBBBWWWB", "WBWBBWBWBWBWWWBB", "BWWBWBWBWBWBBBBW", "BBBWWWWBBWBWWBBB", "WWWBBWBBWBBWBBWW", "WWBWBWBWBWBWBBBW", "WBWBBWWBBWBWBWBB", "BWBBWWBWWWBBWWBW", "BWWWBWBWBBWBWBBW"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> grays = {"rZvVKwqMApZOPDsx", "SknPUuTRasSvAqLb", "aszKuoaqXSZyHtfP", "esQNYfKqepAPSQqO", "QTKLVfpHtxhKJQvY", "AMKhLOWPtSYxUYrR", "GggiIanNdJRSsXCA", "jCopYyTHKUhlZDKC", "zJYFXcwgkYBDkqCO", "PzcrzcaTNtUfFAAf", "wffSvSBSJYsHlOfX", "ybMyzTqXjuFDEfEA", "IuVTSPdsNvbUbaju", "xSdhKHHCkPslSdCL", "UOijtcpZTXKZamMI", "usGjPtSJDTkeLpqh"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BWWWBWBWWBWWWBBW", "WBBWWBWWBBWBBWWB", "BWBBBWBBWWWBWBBW", "BBWWWBBWBBWWWWBW", "BWBWWWBWBWBWWWWB", "WWWBWBWBBWWBBWBW", "WBBWWBBWBWWWWWBW", "BWBBWBWWWWBBWBWW", "BWWWWBBBBWWBBBWB", "WBBBBBBWWBWBWBBW", "WBBWWWWBBWBWBWBW", "BBWBBWBWBWBWWBWB", "WBWWWWBWWBBWBBBW", "BWBBWBBWBWWBWBBW", "WWBBBBWWWWWWBBWW", "BWWBWBWBWBBBWBBB"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> grays = {"DieBEXbhJFimPpdVZxFSsizVMSEvENlf", "RclojVrjuUTroOotNowPkPFZRWZGJGdR", "EVyfyKpCkehlawCLgIhaGdzclUgEUpaz", "PlXvMDcCMgqoMKTOVgLrhFhNqMBpqzMV", "YTjOpTtGRqoobAXHWOpeOROdiVFVmHWO", "xpGiWSrGlUGVeHlxdQtTsIjfGcahRxFu", "YRwJHgvjzCgXhlBhrLbCInDkylGDKtYC", "LAZViCtNrXSDtkJbNDZXhkwLuoggpcVe", "raxxOaVLQkIflwjJtkVijqLBOIDwbldV", "MGpQoDKOLtDoBnXukJdPvJPSObeoLcfo", "WqUAeCVtRuGbqXLoOInvkqyhmPaueyVO", "VQmQolJlYKIuwLlninaULghKesUDfREI", "lZDQYXXhJCLauMVgKGunPfzaZQhYKIPF", "dMLTtAXeEGfQgxlbBHXRcjVlxRLfkYgS", "TLWrAdkLNSWyqijLeMSYPRLuMZYSMrUP", "toFHvRvJgCxKJzjdjCtJbMsKntnrrwSW", "poqjyEQwthBqxhrkWBepZchIawMAkDQy", "RbPzbSvDvUVMAOYdMVwKcqOpWFYzooPp", "WEjLJAXeAfQWFNtThBrNQFDcVjhOasyf", "sNyLhtkKyexOxXcvqffnCFTyYjlzymGN", "TENXhJsbPotDauKotRZLNyayGFbkVSHH", "TGifddJoxulggpjTGvPoexCNxBDIORIo", "EWPXUPjBBEKPqsarffXUwdNiYWxadiyl", "uOnTqmETnmCPYcwdfLshsinSShZsflFt", "pMdXIfuGvsfLODMYZhilgJSYhWbhIfIl", "QdcHdcFNpVQxtQLdDLRnnwgpvdMZCmwA", "lBhbZsDNpaZQNUZcbtVeCalpBVrYgctn", "GwNEhDqFnzrIJlegPljgzkGbbUEWzxqR", "UFhYohqSaswdVqtyZFJUucLnKwXyBnon", "XNrMrDsfQoyvqPTtmGBOOhsfoWUiJUrg", "roVhdgolLVMWbULFCgKdffUUtdDxUrSp", "kSCNvRuEZJVGIuWTxHUDCOQYzfpzlVed"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WWBWWWBBWBBBWBBWWBWWBBBWWBWBWWBB", "BBBBBWBWBWWBBWWBWBBWBWWWWWWWBWBW", "WWWBBWBBWWBBBWBWBWWBWBBBBWBWWBBB", "BBWBWWBWBBBWWBWWWBBBBWWBWBWBWBWW", "WWBWBWBWWBBBBBWWWWBBBWWBBWWWBWWB", "WBWBWWBWBWWWBWBBBWBWWWBBWBBBWBWB", "WWBWBBWBWBBWBBWBWBBWBWWBBBWWWBWW", "BWWWWBBWBWWBWBWBBWWWBBBWBWBBBBWB", "BBBWWBWWWBWBBBWBBBWBBWBWBWWBBBBW", "WBWBBWBWBWWBWBWWWBBWWBWWWBBWWBBB", "WBWWBWWBWBWBBWBWWWWBBBWBBWBBBWWW", "WWBWBBWBWWBWWWBBBBBWWBBWBBWWBBWB", "BWWBWWWBWBWBBBWBWBWBWBWBWWBWWWBW", "BWWWBWWBBWBWBWBBWBWWBWBBBWWBBWBW", "WBWBBBBWWWWBBBWBBWWWWWBWBWWWWBWW", "BWBWWBWBWBBWWWBBBWBWBBWBWWBBBBWW", "WBBBWBWBWBWBWBBBWWBBWBWBBBWWBWWB", "WBWBBWBWBWBWBWWWWBWBBBWBWWWBBBWB", "WWBWWWWBBBWWWWBBBBBWWBWBWBBWBBWB", "BWBWBBBWWBBBBWBWBWWBWWWBWBBWWBBW", "WBWWBWBBWBWWBWWBBWWBBBBWBWBBWWBW", "WWBBBBBWBWBBBBBWWBWWBWBWWBWBBWWB", "BWWWWBBWWBBWBWBWBBWBWBWBWWWBBWBW", "BWBWBWBWBBWWWBBBBWWBBBBWWBWBBBWB", "BWBWWBBBWBBWWBWWWBWBBWWWBWBBWBWB", "WBBWBBWWBWWBWBWBWBWBWBBBWBWWBWBW", "BWBBWBWBWBWWWWWBBBWBWBBWWWBWBBBW", "WBWWBWBWBBWBWBBBWWBBBBWBBBWWBWBB", "WBBWBBBWBBWBWBWBWBBWBBWBWBWBWBBW", "WWBWBWBWBWBBBWBWBWWWBWBBBWWBWWBW", "BBWBBBBBWWBWBWWBWBWBBBWWWBWBWBWB", "BWWBWWWBWWWWWBWWBWWBWWWWBBBWBWBB"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> grays = {"KfhPAFTM", "IkDCkwPz", "qgzKfcTR", "ewkRhvhN", "GeOUbuid", "IWxcnwII", "SItbtvMn", "PaYTHIpN"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WBBWWBWW", "BWWBBWWB", "BWBWBBBW", "BBBWBBWW", "WBWWBBWB", "WWBBBWBW", "BWBBBBWB", "WBWWWWBW"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> grays = {"kCAR", "BOcH", "EUDx", "oHXb"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BWWB", "BWBW", "WWBB", "BWWB"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> grays = {"dy", "Ua"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BB", "WB"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> grays = {"YGaHTLqElxyTjnNn", "pXLEGIlTKJkbPlEW", "xuAuuegqTknbBoPM", "kWBRCLyRXXAbQjiX", "fRtnvCQIBzzQjAaR", "JsgjOThkAvFtwiUO", "IhrTvRUyFUackzHX", "rLnaKXKBXLTNwDOs", "JTUiFrsbdIIllCGq", "gdPfjvTkNEzbOQHx", "uGGgGXVAuPORVjzt", "OjmMUPecSVbkGrQs", "ngDqgtnsIEyGJhVF", "jlxuakkxeYZyiMsZ", "QHiqyVCYDEebktFl", "FfluftsgJbQGYpkJ"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WWBWWWBWWBWWBBWB", "BWWWBWWBBWBBBWBW", "BBWBBBBBWBBBWBWW", "WWBWWWBWWWWBWBBW", "BWBBBBWWBWBWBWBW", "WWBWWWBBWBWBBBWW", "BBWBBWWBBWBBWBBW", "BWBBWWWWWWWWBWWB", "WWWBBWBBBBWBBWBW", "BBWBWBWBWWWBWWWB", "BWWBBWWWBWBWWBWB", "WBBWWWBBWWBBWBWB", "BBWBBWBBWBBWWBWW", "BWBWBBWBBWWWBWBW", "WBBBBWBWWWBBBWBB", "BWWBWBWBBBWBWBBW"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> grays = {"UAtVbRLnYhIupeCZERSOmbIfLogIsAkl", "nHgvIVmcRzgoExfHZBLhXADIsRktIkxy", "MhtgDhUFiIdByCtEuxSgVRGHdPvvejAS", "WcqDxmScmkqSoUbBbVBjrYnysLDLERqT", "aWtAoUnAYMHGNEWNYWeDddCHLHpAMMbT", "cCYEaSQApHIVZCCvYKLUQiiwDFWfeSSL", "YgJqvJsBtUZIstJzgjCdrpcnjcMTEkIL", "BJSyNpcHnBhOvKeEoIdGCiPppIlVEhYj", "BDBlqWQTZGeERZXkchCrVOgqDtzPZqrz", "iAcbFbDnFdLhOOwlPekVRdeKakMMIvcn", "FXlmuoOkIrsCDIvMKwmUBviNKPGRfPAX", "ZAqcyncFhhGtivJGFpeTBDvjSQbAQbCz", "IHqFIGJUiqDVGBkhIbzWKGGQcStRTLHe", "EglMsaWQtGULkMUebFERfvnvuBWfaSDa", "KTyBuSrkblddWEoFlbrGUYZKdJNGXpph", "VJbhDjDCobKbbyhBfZDGhGIfVidzlrxc", "LxTzSxTkYsTMbqGgRLEXDsRbZJgxwOwH", "uPiIIrKvSthEuQcNvKqsNIsLicNkdkOm", "rLkHnSpEvNuIRnSrocBCLTAxwNYpfVqN", "KFdAhZsZPMHfLclYqvZEKQBOLPhTqDls", "fttMpmZPSCZtRzlGjqqukIIaPGADLzGn", "psYeUDvajrCrBbkCgZAlLrdVnCsQBwFu", "ikavQQYZYnbpVpBwIETRLFHehQzLkAwo", "ovrGfjQKvjRpQASsRobwvZDjKOcrcYMT", "XUbTdhUANhSZrCnCFbcwizcnxGDEiMcp", "BzSbYhgCJjchZAJaJHiZfpzJVLkfQHdw", "stgpetvKxcxkWhsIMDNCPpXmpdzvJuaG", "JEZKKCJCLUbGmvfIsLNjIcNTqkocGcxs", "kCedpkoLoTgkObzVLbzNpJBGgwEnlyyC", "JtpadCddQOGhMovVSzJDCdawfeBoBsmk", "UXnyIRqcubYGfsImFYUaoEcxqBgSKusC", "EPQAOEvAbQVGYchuotAEupcxSMJBZndQ"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WBWWBWWBWBWBBWBWBWWWBBBWBBBWWBBB", "BWBBWWBBBWBBWBBWWWWBWWWBWWBBBWWB", "WBWBWBWWWWBWBWBWWBWBBWBWBWWBBBBW", "WBBWBWBBBBBWWBWBBBWBWWBWBWBWBWWW", "BWBWBWBWWWWBBBWWWWBBBBWBWWBWBWWB", "WBWWBWWBBBWWWWWBWWWWWBBWWBWBBWBW", "WBWBBWBWWBWWBWBWBBWBBWBBBBWWWWBW", "BWWBWBBWBWBWBBWBBWBBWBWBBWBWBBWB", "WBBWBWWWWWBWBWWBBBWBWWBWWBWBWWWB", "BWBBWBBBWBWBWWWBWBBWWBBWBBWWBBBB", "WWBBBWWBBBBWWWBWWBBWBWBBWWWWBWWW", "WBBWBBBBBWWBBBWBWBBWWBBWWBBBWBBW", "WWBWWWBWBBBWWBBWWBBWBWBWBWBWWWBB", "BBBWBBWWWWWWBWWBBWWWBBWWBWWBBWWB", "BWBWBWWBBBBBBWBWBBWBWWWBBWWBWBBB", "WWBBWBBBWBWBBWBBBWBWBWWBWBBWBBWB", "WBWBWBWBWBWBBWWBWWWWBBWBWWBBWWBW", "BWBWWBBWWBBWBWBWWBBBWWBWBBWBBBWB", "WWBBBWWBBWBWWBWBBBWWWWWBBWWWBWBW", "BWBWBWBWWWWBWBBWBWWBBWBWWWBBBWBW", "BWBWWBWWBWWBWWBWBBWBWBWBWBWWWBWB", "BBWBBWBBWBBWBBBBWWBBBWBWBWBWBWBW", "BWBBWWWWWBBBWBBWBWWWWBWBBWBWWBWB", "BBBWBBWWWBWBWWWBWBBWBWWBWBWBBWBW", "WWBWWBWBWBWWBWBWWBBBBWBBWWWBBWBW", "WBWBBWBWWBBBWWWBBWBWBBBWWBBBWWBB", "BBBBBBWBBBWBWBBWBWWBBWWBBBWBWBBW", "WWWWWBWWWWBWBWBBWWBWWBWWWBWBWBBB", "BWBBWBWBBWBBWBWWBBWWBWWBBBWBBWBW", "WBBBBWBBWWWBWBBWWWBWWBBWBWBWWBBW", "WWBBWWBBBBWBBBWBBWWBBBBBBBBBBWBB", "BWWWBWWBBWWWWBBWWBBWBWBWWWWWWBBW"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> grays = {"ydBVMbdD", "wTlhTnDq", "JWcwVCQr", "xQVdnpNi", "WYMDJfTu", "bBMZzFWQ", "yccSAlZJ", "MOLGkLDX"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBWBBBBW", "WWBWWWWB", "WWBBWBWW", "BWBWBWBB", "WWBWWBWB", "BWWWBWWW", "BBBWWBWB", "WWWBBWWW"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> grays = {"XVzziiIh", "fmwtozmH", "cMxpFiof", "RzAwQcTh", "QNxhdVMX", "ZwXAnqsZ", "MAQJjKHD", "mAsErCYw"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WWBWWBWB", "BBWBBBBW", "BWBWBWBB", "WBWBWBWB", "WBBWBWWW", "WWWWBBBW", "WBWBWBWW", "BWBWBWWB"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> grays = {"we", "EY"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BB", "WW"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> grays = {"QTeZZdPnuqypsLzE", "vRqGBfwbjNIIFDyz", "WDsduAbtfowDjhcN", "wEflHqssDkfHqvLd", "LeyBCIQCYaolfVXW", "CcSCLZTpSWEZOIsZ", "GQEgOaGlBnEvbDrx", "IxkVQHAmWtplwpNh", "kVqvliApGdSpUghr", "jDvVKhofAHkHsjBe", "alcxXDqoqgkMwQYU", "naVyxzLMsHzQOqAo", "mxyiBmpQHOMYJbNE", "oDMVeEfBCtJXHBDb", "IDkXpHFOTFRATsTv", "GMmNAdvittBcuByq"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WWBWWBWBWBBBBWBW", "BWBWWBWBBWWWBWWB", "WWBBBWBBBBWBBBBW", "BWBBWBBWWBBWWBWB", "BWWBBWBWWBBBBWWW", "WBBWWWWBWWWWWWBW", "BWWBWBWBWBWBBWBW", "WBBWWBWBWBBWBBWB", "BWBWBBWWBBWBWBBB", "BWBWWBBBWBBWBBWB", "BBBBWBBWBBBWBWWW", "BBWWWBWBWWBWWWBB", "WBBBWBWWBWWWBBBW", "BWWWBWBBWBWBWWWB", "WWBWBWBWWBWWBWWW", "BWBWWBWBBWWBWBBB"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> grays = {"Bq", "re"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WB", "BB"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> grays = {"VK", "qv"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WB", "BW"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> grays = {"wcEfswrG", "iDiFqafZ", "gneUXCug", "fhduYGCN", "dampRDvD", "pcCtnNbc", "PCXucJiD", "agHnodZF"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBWBWBWW", "WBBWBBBW", "BBBWWBBB", "BWBBWWWW", "BBWBWBWB", "WBBWBWBB", "BBWBBWBB", "BWWBWBWW"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> grays = {"QA", "ks"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WW", "BB"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> grays = {"ljFVugje", "aODAtzbr", "RlBeqpWo", "kOXKfcDs", "ztvBKmHR", "HbLgoAiH", "YnPLTfNb", "oQdFqOsG"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBWWBBBB", "BWWBWBBW", "WBBBBWWB", "BWWWBBWW", "WBBWWBWB", "WBWBBWBW", "WBWBWBWB", "BWBWBWBW"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> grays = {"MGdViDdy", "SIarMfnR", "xIDqWTWj", "fLQPicwL", "aKPwYrvD", "dYvzkYhe", "gNPulbRv", "HWTPPXLd"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WWBWBWBB", "WBBBWBBW", "BWWBWWBW", "WBWWBBWB", "BWWBWBBW", "BWBWBWWB", "BBWBBBWB", "WWWWWWWB"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> grays = {"EujVnDmTnWIvWauWxGglUXioZzRBJjIU", "cGRJfdbUXnZCRqNAItMRTByicfiNeLwg", "cHTrzwHgPSjQdovvDaRuZrDFcrOzGNNK", "LyMoPBgvkkeeCtYFdrMgcEzdpHFWRrbu", "muSfmsQdsIhADOFzLPcqVyzeBMKvbmfP", "HnelKlqqTKdBywMmMLOMwDkEyButfmoP", "xqHBhwyXrnqZtiPAxuaTFoMjweUBbmyd", "puLQZMZeDeLhuCdbtwQjjVJXWLRqhrdm", "enXxUOdkYHxtzmyuwdvLMxuwUJVJqOFo", "lKCFrOkhUCXYBsbMvOQAjlIvjLLivkiM", "hNajewwRvwizsgqPVZGJvdJeeacEuAJy", "iqkIxrLlYwehVgxFPhaaudGWKskvEwcK", "VJHookwrvKHvyqCQkXUpyhkvOPScJyNg", "pAhaHnQkArYgfzfXQhIjkMWieKPDQQbB", "TBrGBkZFMCmBevLOgaNDMkAZjmHLLiyb", "KToJgDtUTfkJqGnEXekzSzqSANBMVaXr", "abRzWjeaEabtmflnyiAjypsXdxCzBqop", "QMSfJNWUvwDosQmSwtuMIUHOzCyodcfa", "bSKeDdMQdIIPGHvZBDSZEWNRWSUyvVSo", "YhjjNHkMNulyycbUuEXHGUEqlvFiEcDh", "CJeXbPzTnnugGNqrCFGClCzLYwEjMYhn", "tTSxxcLccpJRbggeOpfRvIOuHavSYgxM", "mWZejTKlgqIGRWFRRQpoKVFNLUbiyFBa", "UnPdVYDoxekTMbuobzBkLTJmsurAyrXb", "cQmbfCCjlLATEnBrRgHpSMAIZcpbatxx", "VHgDQXvtUTlCcuoeWSCGDkYTeGyYtNJq", "bYhCWlKKNlPuGLuZPePQWRMmwVeTGlek", "PBvHLRzZciVsxzrkbeOerVknqMYPbSUh", "NQkrZjLAupUqUKfcWVilOiQRMklwKvIM", "PsQGqqNCWuoooDfXZXMMrlQoTvYzpCMt", "XlUfjUZPNNkyywJassEoOtVomHeQalCb", "NsoiUbjHuLZaQbbRFRJgaZJFysHSiBgc"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WBBWWBBWBWBWWBBWBWBBWWWBWWBWWBWW", "BWWWBBBWWBWWBWBWWBWWWBBBBBBWBWBB", "BWBWWBWBWWBWBBWBWBBWWBWWBWWBWBWW", "WBWBBWBWBBBBWBWWBBWBBWBBBBWWWBBB", "BBWBBWBBBWBBWWWBBWBBWWBBWWWBBWBW", "BWBWWBWBWWBWBBWBWWWWBBWWWBBBBBBW", "WWBBBBWWBBBWBBWBBBBWWBWBBBWWBBBB", "BBWWWWWBBWWBWWBBWBWBBWBWWWWBBWWB", "BWWBWWBBWWBBWBWBBWBWWBBWWWWWBWWB", "BBWWBWBBWBWWWBBWBWWBWBWBBWBBWBBW", "BWBBBWWWBWBWWBBWWWWWBWBBBBBWBWWB", "BBBWBBBWWBBBWBBWWBBBBBWWWBBBWBBW", "WBWBBBWBBWWBBBWBBWWBWBWBWWBBBWWB", "BWBBWBWBWBWBBWBWWBWBBBWBBWWWWWBW", "BWWBWBWWWBBWBBWWBBWBWBWWBBBWWBBB", "WWBWBWBWWBWBWWBBWBBWBWBWWWBWWBWB", "BBWBWWBBBBBBWBBWBBBBWWBWBBWBWBBW", "WWWBWBWWWBWBBWBWBWWBWBBWWBBWBBBB", "BWWBWBWBBWWWWWBWWBWWBWWWWWWWWWWB", "WBBBBWBWWBBBBBBWBWWWWWWBBWBBBBBW", "BWBWBWBWBWBBWWWBBWWWBWBWWBWBWWBB", "BWWBWBWBBWWWBBBBWBBBBWWBWBBWWBWW", "WWWBWBBWBBWBWWWWWWBWWWWBWWBBBWWB", "WBWBWWWBWBBWWBBWBBBWBWBWBBWBWBWB", "BBWBBWBBBWBWWBWBWBWBBWWWWBBBBWBB", "WWBWWWWBWWBWBBBBWWBWWBBWBWBWBWWB", "BWBWWBBWWBWBBWBWWBWWWWWBBWWBWBBB", "WBWBBWWWBWBWWBWBBBWBBWBWBWWWBWWW", "WBBBWBWBBWWBWWBBWWBBWBWBWBBWBWWB", "WWWWWBWBWBBWWBBWWWWBWBWBBWWBWBWB", "WBWBBWWWWWBBBBWBBBWWBBWWWBBWBBWB", "BWBBWBBWBWWBWBBWWWBBBWWBBWWWBWBB"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> grays = {"UoFFYvStfHzXhgROhwpsYmDCUyxFuMvU", "ZPpymJwXltjfyYYLFMiRHTqKhVrPkBIK", "EqEHHeFPdIisRjLHXnorWcaDyZZkOknd", "IJqwVENOkrpeLaTyNbXbIxfNzNJopDwF", "pvegBdMnZofIEPCpeANBDLhyxXfKJMjv", "zNNVTYOGclpAAEWfHXxhZskILoGwytQn", "LeWxWBHgeOLxjAFlXUlPzGoHhPvYkonT", "TvCOQNLcWsMqUChqqLSvpYluIdGcGAoO", "iwYyniqHonRkhlcuIXzZiyXhyqtepKzl", "FFdeomBEYHZsgiQqetoEsYPhFJTnZIUK", "ypRCyfyrjTIMZCUtWALOtKnBhTOrFbzw", "spfybDeNAEMViqzbDVRtNVQWskuSzkIY", "rsHCZhdRLFuLNBvZyMwmCwSnATkMxibt", "IDOmJaMIhYVSzPXvtNoeXWqQVtgtYhRY", "iKsBPMdlkyaNUQqsbHhfnJmSBKhRYxQM", "xNchrFxsPGAOwMOMIahSXgQAOJvnMalp", "lDewAfVWfqMsSrmHZwjvvUOmbPvlGtNw", "XgfkDELXiPNubiqSxjJimPZRAQRpggyY", "eaLDQDpRHspdbXOVsQDypTSBOHIxPFdy", "CfBWfIJOySgWeIOfGiuxBmYtctJjqzLB", "EIWxLIdeLtXvwYOgYCNFDSSxeVDgHumR", "bMpsipoELoiZALCsFUBICuyVgZrUcWQP", "bgbnWRlkdJYErmiINDeAFXiibLwzyUzu", "wYXqzrebehxQZjGMJQzLjfYkyfbxNSVj", "TLWNHbeUMPeFuciPjjNThMLqtyjuRKMR", "XyHDUloEtRHfdjWpuvXZzYKIRENGVzil", "QtXagJuNMnbZsmODrxZBYFDzcxtcGtGq", "rTiApDDySLbhdYOEYFhHKORyxgSGMUzo", "CdLfzwPtVnSBZCisAqEHrfoNpWQqXcDP", "sXOBUvdyUvxjvCqcbJlYolUVOCIFueZZ", "GwQfysTpsRjhdKbDZeZwMWlJvVmMXUVv", "GhNVOzYPqrdQxsfuDEHxtgnqQDVBkIez"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WBWBWBWBBWBWBBWWBWBBWBWBWBWWWBWW", "WWBWBWBWWBWBWWWBBWBWWWBWBWWBBBWB", "WBWBWBBWBBBBWBWBWBWBWBBBBWWBBWBB", "BWBWBWWWBWWBWBWWWBWBBWBWWWWBWBWW", "WBWBWBWBWBBBBWWBBWBWWBBWBWBWBWBB", "BWBWWWWWBBWWWBWBWWWBWWBBWBWBWBWB", "WBWWWWWBBWWBBWWBWBWBBWBWBWBWBBWW", "WBWBWBBBWBWBWWBBWBWWBWWBWBWBWBBW", "BWBWBBBWBWWBBWBBWWBWBWWBBBBBWBBW", "WBWBWBWBWBWBBBWWBBBWBWWBWWWWWWWB", "BBBWBBBWBWWWWBBWWWWBBWBBBWWBBBBW", "BWWBBWBWWBBWBWBBBWWWWWWWWBBWWBWW", "BBWBWBBWBWBWWWBWBWBBWBWBBWBWBBBB", "WWWBWBWBBWWWBWWBWBWBWWBWWBBBWWWW", "BWBWWWBBWBBWBWBWBWBBBWBWWBWBWBWB", "BWBBBBWWBWBWWWWBWBBWWBWBWWBWWBBW", "WBBWBBWWBWBWWBWBWBBBWWWBBWBWBWWB", "WBBBWBWWBWWBBBBWBWWBBWWWWBWBBBBW", "BBWWBWBWWBBBBWWBBWWWBWWBWWBWWBBB", "WBBWBWBWBWBWBWBWWBBBWBWWBBWBBWWW", "BWWBWWBBBWWBBWWBWWWWBWWBBWWBWBBW", "BWBWBBBWWBBWWBWBBWBBWBBWBWBWBWWW", "BBBBWWBBBWWBBWBWWBBWWWWBBWBWBWBW", "BWWWBBWBBWBWWBBWWWBWBBWBWBBBWWWB", "WWWWWBBWWWBWBBWWBBWWBWWBWWBBWBWW", "WBWBWBBWBWWBBBWBBWWWBWBWWBWWWWBB", "WBWBBWBWWBBWBWWBBBWBWWBWBBBBWBBW", "BWBWWBWBWWBBBWWWWWBWBWWBWBWWBWWB", "WBWBWBBWWBWBWWWBWBWBWBBWBWBWWBBW", "BWBWWBWBWBWBWBBBBWBWBBWWBWWWBBWW", "WBWBBWWBBWBBBWBWWBWWWWBBWWBBWWWW", "WBWWWBWWWBBWBWBBWBWBBBBWWBWWBWBB"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> grays = {"VIvoYkQv", "RqYcmjAM", "IhtRdJLB", "ERtxdyQZ", "apBEvzqO", "pjlNbcCV", "lDOBfFIb", "XIwYnwPo"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WWBBWBWW", "WBWBBBWB", "WBBWBWWB", "BWWBBBWW", "BWWBWBBW", "BBBWBBWW", "WWBBBWBB", "BWWWWBWB"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> grays = {"aLNR", "doUU", "IzOz", "AncF"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BWWW", "BBWW", "WWWB", "BBBW"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> grays = {"hJFauVMfOzyUDRxIVxgavYBXSVrEXjZh", "HtsphAhluYTGFnUmWyCyFWSDuvNNDFUB", "OgyszGEjGRUqMKXJIAKlyiUGicLVurgS", "XfJcaxCgZKzkgXuYpFwXoNPkQUQOcsOL", "GKfdasKpmdbASJYUSzRtKhCHmKEyigeg", "GZuDiMtlCoYyxoyEsTzVlxiYhfLbwvrP", "VPBOaIvxCwSqVtzKNxgQLGWROrVMYyKp", "yaMazcXgYJCALScGaZOewaoGvKfINkyI", "wQEgYAKQZXegXNllrePzfwVCtQThoRMw", "UaDueRwVVtEiLaaawWeQgIIukQTGfVsE", "PvTJsewoEwXDuvmqMTIHnqPtsfSeqdBh", "zBneSfTNmMbhtCZRtqjGiLvEEpcHTEga", "xqHzZkhnCpgxuCFaOCdfSuniOOVEsGtI", "pfvKUaRmubGzxYUKKFAfxYZohhJFVMAn", "HsbRDcsopttcszjsnBGPifiBAHZytpMR", "bMYNjmWKisSqSPVoDXuFKNlGZUIaZNNd", "FNUfAVmyecUHcAzjbycLwWkTSgVrHgNd", "oZBRlYNcqJnxkGtZfgxfMsszQvmYCfSV", "uZWZmvvvAmvZaaqhDHbHfFAyfMrFbhJS", "xUnGjiTkBVEEpvvkXcsixIBpDciiEiJg", "PIYryOKKJgWQFGMJfLHzAhXAQfYbZvvK", "GXeSMqrCAXyfqxIdfwsgDllyedqgNLLg", "TKzuzKDQykPUxKEQCqLIrLcAdJzBwmMo", "mxRGCzSqWBRyGdgRiKAmqvkJohLfKMjv", "LvPEWsAPmkkjocHYNcbMnZghZDqIJCwD", "WaxbeloNoysmvtaGlUxlTSFSuXwpazCg", "DEzLOurIyylWILVSASNxJprptzJuvXix", "GKFsrYQhmbXlWGDWvBagmPtpsdirXOPH", "WHAeEWoYVMXSlfZPiOTqNacnsnChTlny", "RRGIOErsjaExCVDzthlXiAsSVjIaGbAA", "dWlggnhmAZqxNokCAaFLmkMAPJWDQJCY", "EvsBuBxdQEBUoZRnzMEywntpmjUZmhOM"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BWBBBWWBWBBWWWBWWBBBWWWBWWBWWBWW", "WBBWBWBBBWWWBBWBWWWBBWWBBWWBBWWB", "WBWBWBBWWWBBBWWWWBWBWBWWBBWWWBBW", "WBWBBBWBWWWBWWBWBWBWBWWBWWWBBBWB", "BWBBBBWBWBBWBWWWWBWBWBWBBWBWBBBW", "WWWBBWBBBBWBWBWBBWBWBWBWBBWBBWBW", "WWBWBWBWWBWBWBBWWBBWWBWWWBWWWBWB", "BBWBWBWBWWWBWWBWBWWBWBBBBWBWWBBW", "BWWBBWWBWWBBWWBBWBWBBWWWWBWBBWWB", "WBBBWWBWWBWBWBBBBWBWBWBWBWWWBWBW", "WBWWBBBWWBWWBWBWWBWBBBWBBBWBWBWB", "BWBBWBWWBWBBBBWWWBBWBWBWBWBWBWBB", "WBWBWBBBWBBBWWBBWWBBWBBBWWWWBWBW", "BBBWWBWBBBWWBWWWBWWBBWWBBBWBWWWB", "BWBWWBWBWBBBBWBBWBBWWBBWWBWBBBWB", "WBWWBBWBWBWBWBWWBWWWBWBWWWWBWWWW", "BWWBWWBWBBWBBWWBBWBWBWBWWBWBWBBB", "BWBWBWWBBWBWBWBWBBWBWBWBWBBWWBWW", "WWWWWBBWWBBWBBBBWWBBBWBWBWWBBBWW", "BWBWBBWBBWWWBWWBWBBWBBWBWBBWWBWB", "BWWBBWWBWBWBWWBWBWWBWBWWWBWBWBBW", "WWBWWBBWBWBWBBWBBWBBWBBBBBBBWWWB", "WWWBBWWWBWWWBWBWWBWWBWBWBWBWBBWB", "BBBWWBWBWBWBWBWBBWBWBBWBBBWBWWBB", "WBWWWBWWBBBBBBWWWBBWBWBBWWBWWWBW", "WBBBBWBWBWBWBWBWBWBBWWWWBWBBBBWB", "BWWWWBBWWBBWWBWBWBWBWBWBBWWBBWWB", "WBWBBWWBBBWBWBWWBWBWBWBBBBBWWWBW", "WWBBWWBWWWWWBBWWBWWBWBBWWBWBWBBB", "WBWWWBBWBBBWWWWBWBBWBWBWWBWBWBWB", "BWBBBBBBWWBBBBBWBBWWBBWBWWWBWWBW", "WBWBWBWBWBWWWWWBWBBWWBBWBBWWBBWW"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> grays = {"mGTg", "QEKs", "LrMa", "OlGD"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BWWB", "WBBW", "WBWB", "WBWB"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> grays = {"qTlDZnCw", "KVmGzykq", "qBMHGKTz", "anUBDTMh", "tNRJmObX", "bnsEAOWz", "aIKIrLcl", "eCKjyiUi"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BWBWWBWW", "WWBBWBBB", "BWWWWWBW", "BBWBBWWB", "BWWBWBBW", "BBWBWWWW", "BWBWBBBB", "BWWBBWWB"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> grays = {"uS", "SA"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BB", "WW"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> grays = {"MizxnbmBUaKjjrrpiZEPAAFTRWfxQzjT", "YYLGwmKwGJnbrXKoZgrBWnnBFyVGvDCx", "bXyqruQnsFYOJxncRgLdTEiWagmRyzLD", "muZmruceODyLOcUQjGVCLkEsaOpPSbBD", "vhnJRDSsFdYHCAbZenwcYbTIomXneFjG", "EEcbRECHXhuLAWKLxhZDMsdqMmTpTAWc", "EXlUzebBiBxoVifGOZbLIwzVToeKJKud", "HmFlWxHDxrohdbnhsUSJzShCjiysLTsg", "NFpdGwYkQuUXTWORYkfcWHvNSviJKsma", "yowwFXISLhYVcecSUzFRlWByrajVSJlX", "jPmnJfFLWCYHjshsJvRWXAahVRMOCZYf", "WuIRuAUISUppSUVXoaupZksFPHOSztlx", "dttCeJVVuGurGFQWgLRSDbaseTHZRMLW", "zsySjPImWeQWqbFORRQnoNXcPzyBzrlW", "QHCyFFduKnapkDWTvGSKhZchbewMixZl", "caONyoMmGZsJhkxRaxwWSLylNMgVmTRj", "wWgbIzVWeIbYMrXjPdoDmEjKARbAqQGj", "SVjYvTjmKTiobwxrdQyieYYtmhISjRpS", "gMMpIjQxXYeBTSJPHZRStCxyLvXyBZYE", "dnqZLYagIGeRHScYnIVrdGCVhVBMfBYF", "tbyhIpqspZPqRXORgNTuIyrhCuBsGctJ", "giCHKXlGqJzjWqLoTAeuefvDAqgXmzmL", "eatBWeddDGpIBqOHSMyLcbMbVqdcCWdA", "olkOkNjnVMOijbtTfnchKSolYUEvrEVo", "RMaHXgPCOIlwYvLwkEoRkrplVRqBdZdS", "MMsLoYFMEIXiLkLtPfNuxfxGgFmNjiPg", "vrBWixJtWJyBNumXrRvAqmtBikFfKLlA", "pXtwWOyfQvtruetuMwOrqDKGyaKzNTQH", "LDZKIEOMimdzWDKWjVjgamKFnMtSFnoV", "vqcTwmnpwzJGEOarysuuigaxrMnDaatZ", "jqvnRVnuLcSBEuZwPldhiUJgVXDCQhnh", "yukWTwsPtmntIEPztUnyhXdUqxCsSfSD"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WBBWBBWBWBWBBBBWBWWBWBBWWWBBWBBW", "WWBWBWBWBWBBWWWBWBBWWWWBBWWWBWWB", "BWWBBBWBWWWWWBBBWBWBBWBWBBBWBWWW", "BBWBWBBBBWBWWBWWBBWWWBWBBWBWWBBB", "WBBWWBWBWBWWBBBWWBBBWBWWBWWBBWBW", "BWBBWWWBWBBWWWBWBBWWWBBBWBWBWBWB", "WWBWBWBWBWWBWBWBWWBWBWBWWBWWWWBB", "BWWBWBWBBBBBBBWBBWWWBWBWBBBBBWBW", "BWBBWBWBWBWWWWWWWBBBWWWBBWBWWBBB", "WBWWBWWWBWWWBBWBWWWWBWBWWBBWWWBW", "BWBBWBWBWBWBBBBBWBWWWWBBWWBWBWWB", "WBWWBWWBWWBWWWWWBBBBWBBWWBWWWBBB", "BBWBBWWWBWBBWWBWBWWWWBBBBWWWWWBW", "WBBWBWBWWBWWBBBWWWBWBWWBWBWBBBWW", "BWWBBWBBWBBWBWWWBWWBBWWBBBBWBWWB", "WBWWWBWBWWBWBBBWBWBWWWBBWWBWBWWB", "BWBBWBWWBWBWWBWBWBWBWWBWWWBBBWBW", "WWBWBWBBWBBBBWWBBWBBBWWBBBWWBWWB", "BWWBWBWBWWBBWWWWWWWWBWBWBWWBWWWW", "BBBWWWBWWWBWWBBWBWBWBWBWWBWWBWBW", "WBBBBBBWBWWWWWWWBBWBWWBBBWBBWBBW", "BBWWWWWBBWBBWBWBWWBWBBBWWBBWBBWB", "BBWBWBBBBWBWBWWBWWWBBBWBBWBBWBBW", "WBBWBWBBWWWBBBWBBBBBWWBBWWWWBWWB", "BBBWWBWWBBBWWBWWBWBWBBWBWBWBBWBW", "WWBWBWBWWWWBBWWBWBWBWBBWBWBWBBWB", "WBWWBWWBWWBWWBBWBWBWBBBWBBWBWWBW", "BWBBWWBBWBWBBBWBWBWBWBWBWBWBBWWB", "WBWWBWWWBBBBWWWWBWBBBBWWBWWWBWWW", "BWBWWBBBBWWBWBBBWBWBWBBBBWBBBBBW", "BBWBBWBWWWBWWBWWWBBBBWWBWWBWWBBB", "WBBWWBWBBBWBBWWBBWBWBWBWBWWBWBWW"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> grays = {"yy", "AA"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BW", "WB"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> grays = {"bbgg", "bggg", "ggGG", "CGGG"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBB", "BBBB", "BWBW", "WBWB"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> grays = {"gggggjjj", "ggggjjjj", "gggjjjjj", "ggjjjjQQ", "jjjjQQQR", "jjQQQRRR", "QQQQRRRR", "QQRRRRRR"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBWBBWBW", "BBBBBBBB", "WBBWWBBB", "BBBBBBWW", "BBBBWWWW", "BWWWBWBW", "WWWBWWBW", "WBWWWWWW"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> grays = {"aaaaaaaaaaaaaaaa", "dddddddddddddddd", "gggggggggggggggg", "jjjjjjjjjjjjjjjj", "nnnnnnnnnnnnnnnn", "qqqqqqqqqqqqqqqq", "tttttttttttttttt", "wwwwwwwwwwwwwwww", "AAAAAAAAAAAAAAAA", "DDDDDDDDDDDDDDDD", "GGGGGGGGGGGGGGGG", "JJJJJJJJJJJJJJJJ", "NNNNNNNNNNNNNNNN", "QQQQQQQQQQQQQQQQ", "TTTTTTTTTTTTTTTT", "WWWWWWWWWWWWWWWW"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBWBW", "BBBWWBBWBBBBBWBB", "BWBBBBBBBWBBBBBB", "WBBBBBWBBBWWBWWB", "BBWWWBWBWBBBBBBB", "BWBBBBBBWBBWWBBW", "WBWBWWBWBBWBWBBW", "BWBWWBWWBWBWWBWB", "WBWBBWBWWBWBBWBW", "BWWBWBWBBWBWBWWW", "WBWWWBWWWWBWWWBB", "WWBWWWBWWBWWWBWW", "WBWWWBWWWWBWWWBW", "WWWWWWWWWBWWWBWW", "WWBWWWBWWWWWWWWW"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> grays = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "dddddddddddddddddddddddddddddddd", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "gggggggggggggggggggggggggggggggg", "iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "llllllllllllllllllllllllllllllll", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "oooooooooooooooooooooooooooooooo", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "tttttttttttttttttttttttttttttttt", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WBBBBWBBBBBBBBBBBBBBBBWBBBBBBBBB", "BBBBBBBBBBWBBWBBWBBBBBBBBBWBBBWB", "BBBBWBWBBBBBBBBBBBBBBBBBBBBWBBBB", "WBBBBBBBBWBBBWWBBWWBBBWBBWBBBBBW", "BWBWBBBBBWBWBBBBBBBBWBWBBBBBWBWB", "BBBBWBWBBBBBWBWBBWBWBBBBBWBWBBBB", "BWWBWBBBBWBBWWBBBBWWBBWBBBBWBWWB", "BBBBBBWWBBWBBBBWWBBBBWBBWWBBBBBB", "WBBWBWBBWWBBBBBWWBBBBBWWBBWBWBBW", "WBBWBBWBBBBWWWBBBBWWWBBBBWBBWBBW", "BBWBBBWBBWBBBBWBBWBBBBWBBWBBBWBB", "BWWBWBBWBBWWBWWBBWWBWWBBWBBWBWWB", "BWBWBWWBWBWBBWBWWBWBBWBWBWWBWBBW", "BBWBWBBWBWBWBBWBBWBBWBWBWBBWBWBB", "WBWBWBWBWBWBWBWBWBBWBWBWBWBWBWBW", "WWBWBWBWBWBWBWBWBWWBWBWBWBWBWBWB", "BWBBBWWWWBBWWWBWWBWWWBWBBWWBWBWW", "WBWWWBWBWBWBWBWBBWWBWWBWWWBWBWBW", "WBBWWWBWBWWWWWWBBWWWBBWBWWBBBWWW", "WWWWBWBWWWBWBBWWWWBBWWWWBWWWWWBB", "BWWBWBWWWBWBWWBWWBWWBWBWBWWWWBWW", "BWWBWWWBWBWWWBWWWWBWWWBWWWBBWWBW", "WBWWWBWBWBWWWBWBBWBWWWWWWWWBBWWW", "WWBWWWWWWWBWWWWWWWWWBWBWBWWWWWWB", "WWWWWBBWWWWWWBBWWBBWWWWWBWWBBWWB", "WBWWWWWWWBWWWWWWWWWWBWWBWWWWWWWW", "WBWWWWBWWBWWWWBWWWBWWWWWWWWWBWWW", "WWBWBWWWWWBWBWWWBWWWWWWWWWWWWWWB", "WWWWWWWWWWWWWWWWWWWWWBWWWBWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> grays = {"aaaaaaaaaaaaaaaa", "dddddddddddddddd", "gggggggggggggggg", "jjjjjjjjjjjjjjjj", "nnnnnnnnnnnnnnnn", "qqqqqqqqqqqqqqqq", "tttttttttttttttt", "wwwwwwwwwwwwwwww", "AAAAAAAAAAAAAAAA", "DDDDDDDDDDDDDDDD", "GGGGGGGGGGGGGGGG", "JJJJJJJJJJJJJJJJ", "NNNNNNNNNNNNNNNN", "QQQQQQQQQQQQQQQQ", "TTTTTTTTTTTTTTTT", "WWWWWWWWWWWWWWWW"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBWBW", "BBBWWBBWBBBBBWBB", "BWBBBBBBBWBBBBBB", "WBBBBBWBBBWWBWWB", "BBWWWBWBWBBBBBBB", "BWBBBBBBWBBWWBBW", "WBWBWWBWBBWBWBBW", "BWBWWBWWBWBWWBWB", "WBWBBWBWWBWBBWBW", "BWWBWBWBBWBWBWWW", "WBWWWBWWWWBWWWBB", "WWBWWWBWWBWWWBWW", "WBWWWBWWWWBWWWBW", "WWWWWWWWWBWWWBWW", "WWBWWWBWWWWWWWWW"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> grays = {"AA", "AA"};
    grafixDither* pObj = new grafixDither();
    clock_t start = clock();
    vector<string> result = pObj->gray2bwRiemersma(grays);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WB", "BW"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=303644&rd=5857&pm=3000
********************************************************************************
#include <map> 
#include <set> 
#include <sstream> 
#include <iostream> 
#include <queue> 
#include <deque> 
#include <vector> 
#include <string> 
#include <math.h> 
#include <numeric> 
#include <algorithm> 
 
#ifdef __GNUC__ 
typedef long long lint; 
typedef unsigned long long ulint; 
#else 
typedef __int64 lint; 
typedef unsigned __int64 ulint; 
#endif 
 
using namespace std; 
 
#define FOR(iter, bound) for(int iter=0; iter < bound;iter++) 
#define SFOR(iter, start, bound) for (int iter = start; iter<bound; iter++) 
#define ALL(C) C.begin(), C.end() 
#define VSORT(vec) sort(ALL(vec)) 
 
typedef vector<string> VS; 
typedef vector<VS> VVS; 
typedef vector<int> VI; 
typedef vector<VI> VVI; 
typedef vector<bool> VB; 
typedef vector<VB> VVB; 
typedef vector<double> VD; 
typedef vector<vector<double> > VVD; 
 
 
VS Parse(string str, string look_for = " ", bool i_push_empty = false) 
  { 
  VS ans; 
  if (look_for.length() == 0) 
    { 
    ans.push_back(str); 
    return ans; 
    }; 
  string last = ""; 
  int pos = 0; 
  while (true) 
    { 
    if (pos == str.length()) 
      { 
      if (last.length() != 0) 
        ans.push_back(last); 
      return ans; 
      }; 
    if (look_for.find(str[pos]) == string::npos) 
      last.push_back(str[pos]); 
    else 
      { 
      if (i_push_empty || last.length() != 0) 
        ans.push_back(last); 
      last = ""; 
      }; 
    pos++; 
    }; 
  return ans; 
  }; 
 
 
void PRV(vector<int> vec) 
  { 
  for (int i = 0; i < vec.size(); i++) 
    printf("%i ", vec[i]); 
  printf("\n"); 
  }; 
 
 
class grafixDither 
        {  
        public:  
          void GetKK(int n1) 
            { 
            FOR(i, N) 
              FOR(j, N) 
              { 
              int num = GetStep(SS, i, j); 
              if (num == n1) 
                { 
                x = i; 
                y = j; 
                return; 
                } 
              } 
            } 
          int GetStep(int k, int x, int y) 
            { 
//            printf("k = %i x = %i y = %i \n", k, x, y); 
            if (k == 0) 
              return 0; 
            int pp = 1 << (k-1); 
            int h1 = (x < pp)?0:2; 
            int h2 = (y < pp)?0:1; 
            switch (h1 + h2) 
              { 
              case 0: 
                return GetStep(k-1, y, x); 
              case 1: 
                return (3*pp*pp + GetStep(k-1, 2*pp - y - 1, pp - x - 1)); 
              case 2: 
                return (pp*pp + GetStep(k-1, x - pp, y));               
              default: 
                return (2*pp*pp + GetStep(k-1, x-pp, y-pp)); 
              } 
 
            } 
          int N; 
          int SS; 
          VVI data; 
          VS ans; 
          int x, y; 
          int Stup(int n1) 
            { 
            if (n1 == 1) 
              return 0; 
            return 1 + Stup(n1/2); 
            } 
        vector <string> gray2bwRiemersma(vector <string> grays)  
            {  
            N = grays.size(); 
            SS = Stup(N); 
            data = VVI(N, VI(N, 0)); 
            FOR(i, N) 
              FOR(j, N) 
              if (grays[i][j] >= 'a' && grays[i][j] <= 'z') 
                data[i][j] = (grays[i][j] - 'a')*5; 
              else 
                data[i][j] = 130 + (grays[i][j] - 'A')*5; 
            int error = 0; 
            VS ans(N, string(N, ' ')); 
            FOR(step, N*N) 
              { 
              GetKK(step); 
              int val = data[x][y] + error; 
              val = max(0, val); 
              val = min(255, val); 
              if (val <= 127) 
                { 
                ans[x][y] = 'B'; 
                error = val; 
                } 
              else 
                { 
                ans[x][y] = 'W'; 
                error = val - 255; 
                } 
              } 
            return ans; 
            }  
         
  
        };  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/