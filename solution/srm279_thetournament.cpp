/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4649
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

class TheTournament {
public:
    string findLeader(vector<string> matches);
};

string TheTournament::findLeader(vector<string> matches) {
    string ret;
    return ret;
}


int test0() {
    vector<string> matches = {"Ted defeats Kate", "Kate defeats Billy", "Ted defeats Billy"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "Ted";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> matches = {"Ted defeats Kate", "Kate defeats Billy", "Billy defeats Ted"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "Billy";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> matches = {"Ted defeats Kate", "Kate defeats Billy", "Ted defeats Billy", "Tommy defeats Ted"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "Tommy";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> matches = {"MchTfmrdlnKneIzHSwpk defeats MbgzvLOmfHNJnNvtjsmB", "mchTfmrdlnKneIzHSwpk defeats mbgzvLOmfHNJnNvtjsmB"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "MchTfmrdlnKneIzHSwpk";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> matches = {"B defeats BA", "B defeats BB", "BC defeats B", "A defeats AB", "A defeats AC", "A defeats AD", "A defeats AE", "AF defeats A", "AG defeats A", "AB defeats AF", "AC defeats AG", "BB defeats BC"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> matches = {"dKFYbSSlkeSRiRcpBZth defeats fcggcnyKgGNijZvafsyu", "dKFYbSSlkeSRiRcpBZth defeats gPejhCaKduLhxOdhXKCd", "QJJpLxnJVaCBerzQWUjM defeats XoqPWzvXkEIfHLgjTpkm", "jiSrxKsoQhiaKoYpuiRP defeats lSEiRQqWAfmrAXxiKIZe", "ARVNRJtDvIItDWwOjHAA defeats BQjhsdsXbMaytvAujKoM", "gPejhCaKduLhxOdhXKCd defeats fcggcnyKgGNijZvafsyu", "jAUNIaPDdQPZnnPSSHMb defeats kcWHtVGLcWZVsEBJvVzK", "FQpKmozKvbyvNApcixUs defeats EjHnlJRDqagpIeohDlrt", "prDHXylhBALRXsYDSegc defeats lSEiRQqWAfmrAXxiKIZe", "XoqPWzvXkEIfHLgjTpkm defeats XXXSktXJWeQcMFfORJul", "OBwTATcEMjQkIFvNIZCi defeats PEHbWtzkbRomSfHEKkbo", "BQjhsdsXbMaytvAujKoM defeats zevPmkCvdpZoOBgEYEwb", "NZJpsUPuvDLPIFmrJkcS defeats PEHbWtzkbRomSfHEKkbo", "IGTOCthlWVfAIjhYzaPG defeats FQpKmozKvbyvNApcixUs", "XXXSktXJWeQcMFfORJul defeats ZSNfzPDLMEtXHDjqeASd", "prDHXylhBALRXsYDSegc defeats zevPmkCvdpZoOBgEYEwb", "kcWHtVGLcWZVsEBJvVzK defeats lSEiRQqWAfmrAXxiKIZe", "hdAiIrRmIZOYLRqWmqHC defeats fcggcnyKgGNijZvafsyu", "PEHbWtzkbRomSfHEKkbo defeats XXXSktXJWeQcMFfORJul", "zevPmkCvdpZoOBgEYEwb defeats mOtwAnFkJncVGZfotbCC", "QJJpLxnJVaCBerzQWUjM defeats PEHbWtzkbRomSfHEKkbo", "FQpKmozKvbyvNApcixUs defeats FDhSwjjfrnifDgfcTjxA", "dKFYbSSlkeSRiRcpBZth defeats ZSNfzPDLMEtXHDjqeASd", "ZSNfzPDLMEtXHDjqeASd defeats fcggcnyKgGNijZvafsyu", "jAUNIaPDdQPZnnPSSHMb defeats jiSrxKsoQhiaKoYpuiRP", "XoqPWzvXkEIfHLgjTpkm defeats ZSNfzPDLMEtXHDjqeASd", "kcWHtVGLcWZVsEBJvVzK defeats mOtwAnFkJncVGZfotbCC", "NZJpsUPuvDLPIFmrJkcS defeats IGTOCthlWVfAIjhYzaPG", "prDHXylhBALRXsYDSegc defeats mOtwAnFkJncVGZfotbCC", "FDhSwjjfrnifDgfcTjxA defeats EjHnlJRDqagpIeohDlrt", "jiSrxKsoQhiaKoYpuiRP defeats kcWHtVGLcWZVsEBJvVzK", "BQjhsdsXbMaytvAujKoM defeats EjHnlJRDqagpIeohDlrt", "FDhSwjjfrnifDgfcTjxA defeats GAvwnbHHVtIJfSwcBaKf", "XXXSktXJWeQcMFfORJul defeats QJJpLxnJVaCBerzQWUjM", "jAUNIaPDdQPZnnPSSHMb defeats hdAiIrRmIZOYLRqWmqHC", "jiSrxKsoQhiaKoYpuiRP defeats hdAiIrRmIZOYLRqWmqHC", "EjHnlJRDqagpIeohDlrt defeats ARVNRJtDvIItDWwOjHAA", "GAvwnbHHVtIJfSwcBaKf defeats NZJpsUPuvDLPIFmrJkcS", "jAUNIaPDdQPZnnPSSHMb defeats gPejhCaKduLhxOdhXKCd", "IGTOCthlWVfAIjhYzaPG defeats GAvwnbHHVtIJfSwcBaKf", "lSEiRQqWAfmrAXxiKIZe defeats mOtwAnFkJncVGZfotbCC", "BQjhsdsXbMaytvAujKoM defeats FDhSwjjfrnifDgfcTjxA", "zevPmkCvdpZoOBgEYEwb defeats ARVNRJtDvIItDWwOjHAA", "dKFYbSSlkeSRiRcpBZth defeats XoqPWzvXkEIfHLgjTpkm", "ARVNRJtDvIItDWwOjHAA defeats prDHXylhBALRXsYDSegc", "OBwTATcEMjQkIFvNIZCi defeats IGTOCthlWVfAIjhYzaPG", "QJJpLxnJVaCBerzQWUjM defeats OBwTATcEMjQkIFvNIZCi", "GAvwnbHHVtIJfSwcBaKf defeats FQpKmozKvbyvNApcixUs", "NZJpsUPuvDLPIFmrJkcS defeats OBwTATcEMjQkIFvNIZCi", "hdAiIrRmIZOYLRqWmqHC defeats gPejhCaKduLhxOdhXKCd"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "dKFYbSSlkeSRiRcpBZth";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> matches = {"WlMyZDWYnLMXWOFEWLKf defeats WMgXBCijAFTaqQGONmci", "rvwAIOYYsxnTtmSTIjJG defeats ugHoKYnQOViPXyGcRGpw", "NAvyTWKPqrjCqbNxNHWs defeats RKQHKZjyHvMoAYePujzt", "WlMyZDWYnLMXWOFEWLKf defeats WIaOIATMdgsWHURYsEzw", "TFfOISofPyFabyIjTlYk defeats WMgXBCijAFTaqQGONmci", "PZBigEgpAqYToXiIQerO defeats MUrxpMjRLFQDOODkNyBl", "xdYFsQRGRIIhTWSVaDuS defeats ugHoKYnQOViPXyGcRGpw", "gBKGBeyLlpRJUaYCDdZE defeats bhGKuaoWaCZYkidMcCNE", "SVDXrvOUjSPVaABBTLIv defeats PZBigEgpAqYToXiIQerO", "ugHoKYnQOViPXyGcRGpw defeats xqwODqHsFnGBTmbbSjSM", "NAvyTWKPqrjCqbNxNHWs defeats PZBigEgpAqYToXiIQerO", "ugHoKYnQOViPXyGcRGpw defeats rimwlKDwhrxLKCcaavwT", "rvwAIOYYsxnTtmSTIjJG defeats xdYFsQRGRIIhTWSVaDuS", "ZePdGTWVWsfVQOMTUSYY defeats XoKriCyCLIBorkyLLCPF", "lUwKnvVHgRAnjoUjUREX defeats kCNjdbxowCsoLsnqsHsZ", "MUrxpMjRLFQDOODkNyBl defeats NAvyTWKPqrjCqbNxNHWs", "IPWGCJXulmrrkDEXNyaf defeats NAvyTWKPqrjCqbNxNHWs", "gBKGBeyLlpRJUaYCDdZE defeats djUtLGXOYCmwshXUFoJI", "lUwKnvVHgRAnjoUjUREX defeats gBKGBeyLlpRJUaYCDdZE", "WlMyZDWYnLMXWOFEWLKf defeats XoKriCyCLIBorkyLLCPF", "rimwlKDwhrxLKCcaavwT defeats kCNjdbxowCsoLsnqsHsZ", "xqwODqHsFnGBTmbbSjSM defeats GeYdRZSFvosDDWltSVbT", "IFicChwqqKveMBdRLcNX defeats IPWGCJXulmrrkDEXNyaf", "rimwlKDwhrxLKCcaavwT defeats rvwAIOYYsxnTtmSTIjJG", "xqwODqHsFnGBTmbbSjSM defeats xdYFsQRGRIIhTWSVaDuS", "IFicChwqqKveMBdRLcNX defeats MUrxpMjRLFQDOODkNyBl", "bhGKuaoWaCZYkidMcCNE defeats ZePdGTWVWsfVQOMTUSYY", "PZBigEgpAqYToXiIQerO defeats RKQHKZjyHvMoAYePujzt", "IFicChwqqKveMBdRLcNX defeats GeYdRZSFvosDDWltSVbT", "RKQHKZjyHvMoAYePujzt defeats SVDXrvOUjSPVaABBTLIv", "WMgXBCijAFTaqQGONmci defeats WIaOIATMdgsWHURYsEzw", "GeYdRZSFvosDDWltSVbT defeats GjXUpgormXqdoNRkbnDy", "WIaOIATMdgsWHURYsEzw defeats TFfOISofPyFabyIjTlYk", "rimwlKDwhrxLKCcaavwT defeats lUwKnvVHgRAnjoUjUREX", "kCNjdbxowCsoLsnqsHsZ defeats gBKGBeyLlpRJUaYCDdZE", "GjXUpgormXqdoNRkbnDy defeats xqwODqHsFnGBTmbbSjSM", "WlMyZDWYnLMXWOFEWLKf defeats ZePdGTWVWsfVQOMTUSYY", "xdYFsQRGRIIhTWSVaDuS defeats GeYdRZSFvosDDWltSVbT", "djUtLGXOYCmwshXUFoJI defeats ZePdGTWVWsfVQOMTUSYY", "IFicChwqqKveMBdRLcNX defeats GjXUpgormXqdoNRkbnDy", "WIaOIATMdgsWHURYsEzw defeats SVDXrvOUjSPVaABBTLIv", "bhGKuaoWaCZYkidMcCNE defeats djUtLGXOYCmwshXUFoJI", "bhGKuaoWaCZYkidMcCNE defeats XoKriCyCLIBorkyLLCPF", "lUwKnvVHgRAnjoUjUREX defeats rvwAIOYYsxnTtmSTIjJG", "IPWGCJXulmrrkDEXNyaf defeats GjXUpgormXqdoNRkbnDy", "TFfOISofPyFabyIjTlYk defeats SVDXrvOUjSPVaABBTLIv", "XoKriCyCLIBorkyLLCPF defeats WMgXBCijAFTaqQGONmci", "TFfOISofPyFabyIjTlYk defeats RKQHKZjyHvMoAYePujzt", "MUrxpMjRLFQDOODkNyBl defeats IPWGCJXulmrrkDEXNyaf", "djUtLGXOYCmwshXUFoJI defeats kCNjdbxowCsoLsnqsHsZ"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "IFicChwqqKveMBdRLcNX";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> matches = {"jPOFLGVtqOQINHItpHEB defeats jQJlIqLNlKEQwXFyQsGf", "DaNJXDMqXCRWfDgfxswc defeats ysOkuRaBwVAltCIpshLl", "LdhXNeIGwrBovVoqIkRM defeats FFgZlrHJVLtiinohmDPP", "WhAtStgQqmNSGBoxxCiF defeats WdByGJJDDWgyJOaFnCnU", "ysOkuRaBwVAltCIpshLl defeats BkiIUjkkaGNaYXUZNKPG", "FFgZlrHJVLtiinohmDPP defeats BkiIUjkkaGNaYXUZNKPG", "FFgZlrHJVLtiinohmDPP defeats RNRJxXucBSFriwRvTtEE", "qqIGmiTSaXozPWPVawrR defeats pVxefsZzgXEyrBUkDyUR", "cHOQcwRkAwxdTVDaCIGk defeats YPBAaqeewdKzyIRIEojE", "BkiIUjkkaGNaYXUZNKPG defeats yZEHMNAGLWTdMcSqwCNo", "cHOQcwRkAwxdTVDaCIGk defeats gbFGLIqzTgwpHTrjQPfE", "hejvizmFhoOAtEOYDAze defeats jPOFLGVtqOQINHItpHEB", "uccTUGqgOsJbkpjhqAnn defeats pVxefsZzgXEyrBUkDyUR", "cqWdUhdzccxoxfWMQsBR defeats gbFGLIqzTgwpHTrjQPfE", "yZEHMNAGLWTdMcSqwCNo defeats ysOkuRaBwVAltCIpshLl", "xakRpahKWEubnIFOiWCn defeats qqIGmiTSaXozPWPVawrR", "hejvizmFhoOAtEOYDAze defeats cqWdUhdzccxoxfWMQsBR", "WAcIWqhFSOdUMOjaNPmN defeats WdByGJJDDWgyJOaFnCnU", "jPOFLGVtqOQINHItpHEB defeats gbFGLIqzTgwpHTrjQPfE", "hejvizmFhoOAtEOYDAze defeats jQJlIqLNlKEQwXFyQsGf", "TmhkifKjPCHTvNMwTpwf defeats WdByGJJDDWgyJOaFnCnU", "yZEHMNAGLWTdMcSqwCNo defeats xakRpahKWEubnIFOiWCn", "pVxefsZzgXEyrBUkDyUR defeats jQJlIqLNlKEQwXFyQsGf", "BkiIUjkkaGNaYXUZNKPG defeats DaNJXDMqXCRWfDgfxswc", "uccTUGqgOsJbkpjhqAnn defeats qqIGmiTSaXozPWPVawrR", "WAcIWqhFSOdUMOjaNPmN defeats WhAtStgQqmNSGBoxxCiF", "YPBAaqeewdKzyIRIEojE defeats aIESOsZVpmZUPSsuKtIK", "RNRJxXucBSFriwRvTtEE defeats LdhXNeIGwrBovVoqIkRM", "DaNJXDMqXCRWfDgfxswc defeats LdhXNeIGwrBovVoqIkRM", "RRjrjvVkyohtjsBzihxL defeats TLZjclknqsicFZbBCAzy", "WhAtStgQqmNSGBoxxCiF defeats aIESOsZVpmZUPSsuKtIK", "aIESOsZVpmZUPSsuKtIK defeats cqWdUhdzccxoxfWMQsBR", "WAcIWqhFSOdUMOjaNPmN defeats TLZjclknqsicFZbBCAzy", "LdhXNeIGwrBovVoqIkRM defeats RRjrjvVkyohtjsBzihxL", "ysOkuRaBwVAltCIpshLl defeats xakRpahKWEubnIFOiWCn", "WdByGJJDDWgyJOaFnCnU defeats YPBAaqeewdKzyIRIEojE", "pVxefsZzgXEyrBUkDyUR defeats jPOFLGVtqOQINHItpHEB", "cqWdUhdzccxoxfWMQsBR defeats cHOQcwRkAwxdTVDaCIGk", "TmhkifKjPCHTvNMwTpwf defeats WAcIWqhFSOdUMOjaNPmN", "yZEHMNAGLWTdMcSqwCNo defeats uccTUGqgOsJbkpjhqAnn", "jQJlIqLNlKEQwXFyQsGf defeats qqIGmiTSaXozPWPVawrR", "TLZjclknqsicFZbBCAzy defeats TmhkifKjPCHTvNMwTpwf", "YPBAaqeewdKzyIRIEojE defeats WhAtStgQqmNSGBoxxCiF", "DaNJXDMqXCRWfDgfxswc defeats FFgZlrHJVLtiinohmDPP", "hejvizmFhoOAtEOYDAze defeats gbFGLIqzTgwpHTrjQPfE", "RNRJxXucBSFriwRvTtEE defeats RRjrjvVkyohtjsBzihxL", "uccTUGqgOsJbkpjhqAnn defeats xakRpahKWEubnIFOiWCn", "TmhkifKjPCHTvNMwTpwf defeats RRjrjvVkyohtjsBzihxL", "TLZjclknqsicFZbBCAzy defeats RNRJxXucBSFriwRvTtEE", "aIESOsZVpmZUPSsuKtIK defeats cHOQcwRkAwxdTVDaCIGk"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "hejvizmFhoOAtEOYDAze";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> matches = {"By defeats Xt", "Xt defeats Lo", "KX defeats EK", "KX defeats Xt", "ZA defeats Xt", "ZA defeats JF", "Oe defeats hY", "Lo defeats By", "JF defeats By", "Oe defeats By", "KX defeats Oe", "EK defeats vp", "Oe defeats vp", "ZA defeats EK", "By defeats vp", "KX defeats JF", "Xt defeats hY", "hY defeats ZA", "JF defeats hY", "Xt defeats vp", "hY defeats Lo", "hY defeats EK", "JF defeats Oe", "ZA defeats Lo", "Xt defeats Oe", "Lo defeats JF", "hY defeats vp", "Lo defeats KX", "Oe defeats Lo", "EK defeats Oe", "EK defeats JF", "Oe defeats ZA", "Xt defeats EK", "KX defeats vp", "KX defeats hY", "KX defeats By", "hY defeats By", "ZA defeats vp", "Lo defeats vp", "ZA defeats By", "Xt defeats JF", "By defeats EK", "KX defeats ZA", "vp defeats JF", "Lo defeats EK"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "KX";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> matches = {"wz defeats rz", "pX defeats wz", "tX defeats Hn", "xy defeats tX", "Ol defeats pX", "nW defeats tX", "rz defeats oN", "xy defeats pX", "xy defeats Hn", "oN defeats Hn", "lv defeats Hn", "nW defeats xy", "oN defeats tX", "lv defeats pX", "lv defeats Ol", "wz defeats nW", "wz defeats lv", "pX defeats tX", "pX defeats rz", "oN defeats lv", "Hn defeats Ol", "wz defeats xy", "Ol defeats tX", "rz defeats tX", "wz defeats oN", "lv defeats nW", "Hn defeats wz", "Hn defeats rz", "pX defeats oN", "Ol defeats oN", "xy defeats rz", "tX defeats lv", "Ol defeats nW", "nW defeats oN", "nW defeats pX", "xy defeats Ol", "Hn defeats nW", "xy defeats oN", "Ol defeats rz", "tX defeats wz", "Hn defeats pX", "Ol defeats wz", "rz defeats lv", "rz defeats nW", "xy defeats lv"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "xy";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> matches = {"Yn defeats dU", "JD defeats Yn", "vb defeats aY", "Pf defeats dU", "Yn defeats PM", "JD defeats HW", "JD defeats PM", "Pf defeats Yn", "zi defeats PM", "Lq defeats PM", "zi defeats HW", "dU defeats Lq", "Pf defeats PM", "zi defeats Pf", "Lq defeats vb", "vb defeats dU", "vb defeats Yn", "HW defeats vb", "zi defeats Lq", "aY defeats Yn", "HW defeats Lq", "Pf defeats HW", "Lq defeats aY", "zi defeats dU", "aY defeats PM", "HW defeats Yn", "HW defeats PM", "Yn defeats Lq", "zi defeats aY", "vb defeats Pf", "Pf defeats Lq", "JD defeats dU", "Pf defeats aY", "vb defeats PM", "HW defeats aY", "HW defeats dU", "aY defeats dU", "JD defeats vb", "zi defeats Yn", "aY defeats JD", "dU defeats PM", "JD defeats Pf", "vb defeats zi", "JD defeats Lq", "zi defeats JD"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "zi";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> matches = {"Ep defeats aH", "bh defeats so", "EM defeats jm", "bh defeats oo", "Ep defeats bh", "Ep defeats QN", "Ep defeats so", "oo defeats QN", "EM defeats QN", "aH defeats ls", "se defeats EM", "so defeats QN", "Sz defeats Ep", "QN defeats bh", "se defeats aH", "Ep defeats jm", "ls defeats Ep", "se defeats oo", "so defeats EM", "se defeats ls", "ls defeats jm", "ls defeats so", "bh defeats ls", "jm defeats bh", "QN defeats Sz", "oo defeats aH", "Sz defeats bh", "Sz defeats oo", "aH defeats bh", "oo defeats jm", "so defeats Sz", "se defeats Sz", "Ep defeats se", "oo defeats ls", "se defeats QN", "jm defeats so", "Sz defeats ls", "oo defeats EM", "jm defeats Sz", "EM defeats Ep", "so defeats se", "Ep defeats oo", "oo defeats so", "QN defeats jm", "QN defeats aH", "aH defeats Sz", "ls defeats EM", "Sz defeats EM", "jm defeats se", "jm defeats aH"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "Ep";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> matches = {"GQ defeats zA", "zq defeats Mx", "Ik defeats gf", "xZ defeats gf", "zq defeats xZ", "gf defeats zq", "zA defeats xZ", "CE defeats GQ", "zq defeats id", "id defeats xZ", "gf defeats Fa", "id defeats Ik", "GQ defeats Mx", "zq defeats GQ", "CE defeats Ik", "aZ defeats xZ", "id defeats CE", "Mx defeats Ik", "aZ defeats zq", "zA defeats CE", "Fa defeats CE", "aZ defeats CE", "aZ defeats GQ", "id defeats GQ", "aZ defeats gf", "GQ defeats gf", "Fa defeats GQ", "zA defeats Ik", "gf defeats Mx", "GQ defeats Ik", "Mx defeats zA", "Fa defeats zq", "Fa defeats zA", "GQ defeats xZ", "xZ defeats Mx", "gf defeats id", "id defeats aZ", "zq defeats CE", "CE defeats xZ", "Mx defeats Fa", "Mx defeats CE", "zq defeats Ik", "aZ defeats Ik", "zA defeats id", "zA defeats zq", "Fa defeats Ik", "aZ defeats Mx", "id defeats Mx", "aZ defeats zA", "xZ defeats Fa"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "aZ";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> matches = {"Nf defeats JM", "Up defeats yL", "lv defeats zF", "aT defeats Up", "Nf defeats aT", "zF defeats aw", "Nf defeats lv", "Nf defeats aw", "yL defeats aT", "zF defeats JM", "lv defeats bY", "Fo defeats Ej", "bY defeats Up", "zF defeats Ej", "zF defeats bY", "zF defeats yL", "JM defeats lv", "Fo defeats JM", "yL defeats Fo", "aT defeats Fo", "yL defeats bY", "JM defeats aw", "Nf defeats Fo", "aw defeats Fo", "yL defeats Ej", "lv defeats aw", "Ej defeats aw", "yL defeats aw", "aT defeats lv", "Fo defeats bY", "aT defeats zF", "Up defeats lv", "lv defeats Fo", "Ej defeats Up", "bY defeats Nf", "yL defeats JM", "lv defeats Ej", "Ej defeats JM", "bY defeats aT", "aw defeats Up", "aT defeats JM", "aw defeats bY", "zF defeats Fo", "zF defeats Nf", "aT defeats aw", "JM defeats bY", "Nf defeats Ej", "lv defeats yL", "Up defeats JM", "Ej defeats bY"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "zF";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> matches = {"Ap defeats ch", "RJ defeats ch", "Rg defeats Cb", "IQ defeats ch", "qw defeats RJ", "MZ defeats qw", "DM defeats Ap", "RJ defeats CE", "qw defeats CE", "CE defeats ch", "Ap defeats CE", "RJ defeats DM", "RJ defeats Cb", "qw defeats IQ", "Ap defeats iA", "Ap defeats Rg", "IQ defeats DM", "DM defeats Cb", "Ap defeats RJ", "DM defeats qw", "qw defeats Rg", "IQ defeats Rg", "iA defeats ch", "MZ defeats iA", "IQ defeats Ap", "IQ defeats RJ", "Cb defeats ch", "MZ defeats Cb", "CE defeats Rg", "ch defeats Rg", "MZ defeats Ap", "Rg defeats RJ", "qw defeats Ap", "Cb defeats CE", "Cb defeats iA", "RJ defeats iA", "RJ defeats MZ", "MZ defeats IQ", "Cb defeats qw", "DM defeats iA", "iA defeats qw", "MZ defeats DM", "MZ defeats ch", "Ap defeats Cb", "CE defeats MZ", "Rg defeats DM", "CE defeats iA", "Rg defeats iA", "IQ defeats iA", "CE defeats DM"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "MZ";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> matches = {"MB defeats jh", "jh defeats WO", "WA defeats WO", "WO defeats Xu", "cH defeats xf", "kZ defeats Vh", "kZ defeats UJ", "WA defeats kZ", "UJ defeats Vh", "fs defeats Xu", "kZ defeats jh", "kZ defeats xf", "Xu defeats jh", "WA defeats jh", "Xu defeats MB", "WO defeats kZ", "cH defeats WO", "fs defeats WA", "UJ defeats cH", "Xu defeats Vh", "Vh defeats fs", "kZ defeats MB", "WA defeats xf", "cH defeats jh", "fs defeats kZ", "Xu defeats xf", "xf defeats fs", "MB defeats xf", "MB defeats UJ", "WO defeats fs", "WA defeats MB", "UJ defeats xf", "MB defeats fs", "fs defeats UJ", "WO defeats MB", "UJ defeats WO", "Vh defeats jh", "cH defeats fs", "Xu defeats kZ", "WO defeats xf", "Vh defeats cH", "Xu defeats WA", "Vh defeats MB", "WA defeats Vh", "WO defeats Vh", "MB defeats cH", "WA defeats cH", "Xu defeats cH", "WA defeats UJ", "jh defeats fs"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "WA";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> matches = {"zu defeats sR", "hG defeats yo", "sR defeats Pl", "ui defeats zu", "lt defeats sR", "bR defeats KC", "hG defeats KC", "bR defeats yo", "KC defeats lt", "xS defeats hG", "ya defeats lt", "xS defeats sR", "KC defeats Pl", "hG defeats bR", "xS defeats lt", "lt defeats hG", "sR defeats ui", "yo defeats ui", "ya defeats xS", "yo defeats KC", "bR defeats lt", "Pl defeats ya", "bR defeats zu", "xS defeats zu", "sR defeats ya", "zu defeats lt", "xS defeats yo", "xS defeats ui", "Pl defeats ui", "hG defeats sR", "xS defeats KC", "bR defeats ui", "hG defeats ya", "KC defeats zu", "Pl defeats bR", "KC defeats ui", "zu defeats yo", "Pl defeats lt", "KC defeats sR", "hG defeats zu", "hG defeats Pl", "yo defeats sR", "xS defeats Pl", "bR defeats ya", "sR defeats bR", "hG defeats ui", "ya defeats ui", "zu defeats Pl", "ya defeats zu", "lt defeats yo"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "xS";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> matches = {"Ny defeats MG", "iG defeats nw", "Ds defeats nw", "MG defeats nw", "iG defeats Ds", "ag defeats iG", "sd defeats nw", "nw defeats Ef", "zD defeats nw", "Ny defeats ag", "zD defeats iG", "sd defeats yz", "ag defeats sd", "ag defeats nw", "zD defeats Ef", "Qd defeats nw", "sd defeats zD", "sd defeats Ny", "ag defeats Ef", "Ef defeats Qd", "nw defeats yz", "Ef defeats MG", "iG defeats sd", "ag defeats MG", "zD defeats MG", "sd defeats Ef", "MG defeats Qd", "zD defeats Ny", "Qd defeats yz", "Ny defeats iG", "ag defeats Ds", "yz defeats Ef", "Ds defeats Ny", "Ds defeats yz", "Ny defeats Qd", "Ds defeats Ef", "Qd defeats Ds", "Ds defeats MG", "Ny defeats nw", "sd defeats Qd", "Ef defeats Ny", "yz defeats ag", "zD defeats Qd", "ag defeats Qd", "zD defeats Ds", "zD defeats yz", "zD defeats ag", "iG defeats Qd", "Ef defeats iG", "sd defeats Ds"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "zD";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> matches = {"Ted defeats Kate"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "Ted";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> matches = {"Zj defeats I", "Zj defeats S", "VUT defeats vOA", "VUT defeats S", "S defeats vOA"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "VUT";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> matches = {"fj defeats e", "fj defeats dUC", "xhY defeats e", "e defeats Rd", "xhY defeats Rd", "xhY defeats fj", "dUC defeats e"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "xhY";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> matches = {"AC defeats Ub", "AC defeats zXC", "uF defeats vvv", "vvv defeats Ub", "AC defeats vvv"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "AC";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> matches = {"eZ defeats lLO", "v defeats LKh", "LKh defeats OW", "OW defeats v"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "eZ";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> matches = {"rkK defeats SZd", "Ypg defeats SZd", "u defeats Ypg", "rkK defeats u"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "rkK";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> matches = {"pOJ defeats cQ", "yI defeats pOJ", "r defeats kVE", "N defeats Y", "a defeats Y", "r defeats pOJ", "pOJ defeats kVE", "yI defeats xI", "N defeats a", "cQ defeats yI", "yI defeats kVE", "N defeats kVE", "Y defeats r", "a defeats cQ", "cQ defeats Y", "r defeats g", "kVE defeats g", "cQ defeats N", "xI defeats kVE", "r defeats yI", "N defeats r", "r defeats xI", "g defeats pOJ", "pOJ defeats xI", "a defeats yI", "N defeats xI", "g defeats cQ"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "N";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> matches = {"F defeats Je", "I defeats xh", "Dej defeats A", "iZ defeats A", "Je defeats Dej", "pv defeats Dej", "Dej defeats xh", "pv defeats F", "pv defeats om", "om defeats xh", "F defeats Dej", "pT defeats xh", "Dej defeats pT", "om defeats I", "iZ defeats om", "I defeats pT", "Je defeats A", "A defeats I", "pT defeats F", "pT defeats A", "Je defeats iZ", "iZ defeats I", "iZ defeats pv", "iZ defeats Dej", "pT defeats Je", "pv defeats A", "om defeats pT"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "iZ";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> matches = {"r defeats kZ", "uA defeats ai", "VD defeats ENY", "S defeats VD", "kZ defeats e", "VD defeats RbA", "ai defeats r", "e defeats r", "RbA defeats uA", "VD defeats r", "zJA defeats ENY", "kZ defeats ENY", "e defeats uA", "ENY defeats r", "RbA defeats kZ", "VD defeats kZ", "uA defeats zJA", "kZ defeats uA", "zJA defeats ai", "e defeats zJA", "ai defeats RbA", "VD defeats uA", "ai defeats e", "r defeats RbA", "RbA defeats zJA", "ai defeats kZ", "e defeats VD"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "S";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> matches = {"S defeats v", "nqE defeats JZD", "ct defeats sLy", "LBt defeats q", "NB defeats S", "zpF defeats nqE", "NB defeats v", "nqE defeats sLy", "nqE defeats LBt", "q defeats NB", "zpF defeats sLy", "ct defeats JZD", "sLy defeats NB", "S defeats nqE", "ct defeats NB", "nqE defeats ct", "v defeats LBt", "JZD defeats sLy", "ct defeats LBt", "ct defeats v", "zpF defeats ct", "v defeats q", "sLy defeats q", "zpF defeats S", "JZD defeats LBt", "NB defeats nqE"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "zpF";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> matches = {"u defeats xV", "u defeats slm", "nh defeats lL", "nh defeats hkB", "nh defeats w", "lni defeats WN", "slm defeats xV", "lni defeats nh", "lL defeats WN", "slm defeats lL", "u defeats nh", "slm defeats w", "nh defeats slm", "lL defeats w", "xV defeats nh", "nh defeats WN", "lL defeats xV", "xV defeats lni", "u defeats WN", "hkB defeats u", "lni defeats u", "w defeats xV", "slm defeats lni", "WN defeats xV", "w defeats hkB", "u defeats lL", "hkB defeats xV", "hkB defeats lL"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "u";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> matches = {"gi defeats L", "c defeats i", "geR defeats c", "gi defeats ZP", "h defeats L", "c defeats L", "geR defeats W", "L defeats mdg", "hxb defeats h", "W defeats c", "hxb defeats ZP", "ZP defeats mdg", "hxb defeats c", "h defeats ZP", "L defeats W", "i defeats gi", "c defeats h", "i defeats h", "mdg defeats h", "geR defeats i", "hxb defeats i", "hxb defeats mdg", "gi defeats hxb", "mdg defeats W", "gi defeats c", "geR defeats hxb", "L defeats hxb", "W defeats hxb", "mdg defeats c", "h defeats geR", "mdg defeats gi", "W defeats h"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "geR";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> matches = {"e defeats zwT", "KSO defeats NKY", "R defeats zwT", "e defeats NKY", "KSO defeats v", "Kra defeats v", "v defeats NKY", "v defeats zwT", "KSO defeats R", "Kra defeats R", "M defeats Kra", "zwT defeats NKY", "R defeats M", "M defeats zwT", "zwT defeats Kra", "NKY defeats Kra", "M defeats NKY", "e defeats v", "M defeats e"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "KSO";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> matches = {"Co defeats ZAV", "fJh defeats alD", "Co defeats f", "V defeats qu", "qu defeats ZAV", "ZAV defeats fJh", "qu defeats FC", "alD defeats V", "alD defeats qu", "V defeats ZAV", "f defeats ZAV", "f defeats qu", "rv defeats alD", "uut defeats fJh", "V defeats uut", "ZAV defeats FC", "FC defeats Co", "uut defeats alD", "V defeats fJh", "qu defeats fJh", "f defeats V", "uut defeats ZAV", "rv defeats V", "FC defeats V", "Co defeats fJh", "rv defeats Co", "qu defeats Co", "FC defeats alD", "uut defeats f"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "rv";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> matches = {"fOY defeats dkT", "BMa defeats dkT", "BMa defeats UTg", "dkT defeats Nad", "H defeats F", "F defeats Nad", "IFW defeats Nad", "GHm defeats Nad", "GHm defeats JR", "IFW defeats UTg", "dkT defeats UTg", "Nad defeats JR", "GHm defeats F", "H defeats fOY", "IFW defeats GHm", "JR defeats dkT", "Nad defeats BMa", "F defeats dkT", "GHm defeats H", "H defeats JR", "Nad defeats fOY", "UTg defeats fOY", "F defeats fOY", "GHm defeats UTg", "fOY defeats GHm", "BMa defeats JR", "BMa defeats IFW", "BMa defeats H", "Nad defeats H"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "BMa";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> matches = {"WTS defeats MO", "QR defeats iCb", "MO defeats xC", "iCb defeats mm", "WTS defeats LX", "iCb defeats kSo", "iCb defeats LX", "ej defeats F", "WTS defeats xC", "LX defeats ej", "ej defeats iCb", "mm defeats F", "kSo defeats QR", "MO defeats mm", "QR defeats xC", "MO defeats QR", "kSo defeats ej", "iCb defeats WTS", "xC defeats ej", "kSo defeats mm", "LX defeats F", "QR defeats WTS", "mm defeats ej", "ej defeats MO", "F defeats kSo", "mm defeats WTS", "mm defeats QR"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "iCb";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> matches = {"TcbbLdwtrT defeats oB", "oSroZTBeQBQggRxAIP defeats RZJyqdElZ", "kEsfOl defeats kOqeGvjwr", "TcbbLdwtrT defeats LsiVhwTzmf", "u defeats esXyjDSqXxbPVAn", "u defeats TcbbLdwtrT", "kbLxw defeats kOqeGvjwr", "RZJyqdElZ defeats oWovGGmXQocOd", "RZJyqdElZ defeats lmGzuwPFJ", "RZJyqdElZ defeats ztgxkXUQOBL", "oSroZTBeQBQggRxAIP defeats kbLxw", "u defeats kOqeGvjwr", "RZJyqdElZ defeats tKgWDZl", "LsiVhwTzmf defeats ztgxkXUQOBL", "ztgxkXUQOBL defeats oSroZTBeQBQggRxAIP", "esXyjDSqXxbPVAn defeats SpEVmiKWsiuCTly", "LsiVhwTzmf defeats kbLxw", "kEsfOl defeats TcbbLdwtrT", "kOqeGvjwr defeats SpEVmiKWsiuCTly", "ztgxkXUQOBL defeats tKgWDZl", "RZJyqdElZ defeats u", "oB defeats kEsfOl", "oWovGGmXQocOd defeats esXyjDSqXxbPVAn", "lmGzuwPFJ defeats kbLxw", "oB defeats LsiVhwTzmf", "LsiVhwTzmf defeats esXyjDSqXxbPVAn", "oB defeats esXyjDSqXxbPVAn", "tKgWDZl defeats kOqeGvjwr", "TcbbLdwtrT defeats lmGzuwPFJ", "TcbbLdwtrT defeats oSroZTBeQBQggRxAIP", "u defeats kbLxw", "RZJyqdElZ defeats SpEVmiKWsiuCTly", "TcbbLdwtrT defeats oWovGGmXQocOd", "ztgxkXUQOBL defeats TcbbLdwtrT", "lmGzuwPFJ defeats oSroZTBeQBQggRxAIP", "kbLxw defeats kEsfOl", "ztgxkXUQOBL defeats kEsfOl", "kEsfOl defeats esXyjDSqXxbPVAn", "LsiVhwTzmf defeats tKgWDZl", "kOqeGvjwr defeats oWovGGmXQocOd", "oSroZTBeQBQggRxAIP defeats esXyjDSqXxbPVAn", "SpEVmiKWsiuCTly defeats LsiVhwTzmf", "kEsfOl defeats LsiVhwTzmf", "ztgxkXUQOBL defeats esXyjDSqXxbPVAn", "kEsfOl defeats oWovGGmXQocOd"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "RZJyqdElZ";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> matches = {"itVXzDh defeats NpZki", "ovyiHpryGdHl defeats rwCOilpNWcIQe", "tUvFAgxhDmgoCn defeats EyDRiUA", "E defeats dZ", "E defeats jJdQySx", "tUvFAgxhDmgoCn defeats CpFdqvw", "dZ defeats itVXzDh", "E defeats NpZki", "E defeats pjDftqsifYCNfNmBHvpc", "vJqhrwmNLQQe defeats rwCOilpNWcIQe", "rwCOilpNWcIQe defeats CpFdqvw", "itVXzDh defeats CpFdqvw", "dZ defeats ovyiHpryGdHl", "NpZki defeats pjDftqsifYCNfNmBHvpc", "E defeats vJqhrwmNLQQe", "pjDftqsifYCNfNmBHvpc defeats vJqhrwmNLQQe", "vJqhrwmNLQQe defeats jJdQySx", "pjDftqsifYCNfNmBHvpc defeats EyDRiUA", "ZfkcRowuFx defeats DyHoYFSUDJNGrEmu", "CpFdqvw defeats DyHoYFSUDJNGrEmu", "vJqhrwmNLQQe defeats NpZki", "NpZki defeats ZfkcRowuFx", "E defeats ZfkcRowuFx", "uaVfVBGYxnxdvCfnHFZv defeats tUvFAgxhDmgoCn", "vJqhrwmNLQQe defeats uaVfVBGYxnxdvCfnHFZv", "dZ defeats EyDRiUA", "ovyiHpryGdHl defeats itVXzDh", "dZ defeats NpZki", "uaVfVBGYxnxdvCfnHFZv defeats EyDRiUA", "jJdQySx defeats pjDftqsifYCNfNmBHvpc", "uaVfVBGYxnxdvCfnHFZv defeats DyHoYFSUDJNGrEmu", "tUvFAgxhDmgoCn defeats pjDftqsifYCNfNmBHvpc", "NpZki defeats uaVfVBGYxnxdvCfnHFZv", "DyHoYFSUDJNGrEmu defeats tUvFAgxhDmgoCn", "CpFdqvw defeats uaVfVBGYxnxdvCfnHFZv", "tUvFAgxhDmgoCn defeats NpZki", "pjDftqsifYCNfNmBHvpc defeats itVXzDh", "CpFdqvw defeats pjDftqsifYCNfNmBHvpc", "tUvFAgxhDmgoCn defeats ovyiHpryGdHl", "DyHoYFSUDJNGrEmu defeats dZ", "ZfkcRowuFx defeats vJqhrwmNLQQe", "dZ defeats uaVfVBGYxnxdvCfnHFZv", "itVXzDh defeats tUvFAgxhDmgoCn", "pjDftqsifYCNfNmBHvpc defeats uaVfVBGYxnxdvCfnHFZv", "uaVfVBGYxnxdvCfnHFZv defeats jJdQySx", "dZ defeats rwCOilpNWcIQe", "DyHoYFSUDJNGrEmu defeats NpZki", "ovyiHpryGdHl defeats ZfkcRowuFx", "CpFdqvw defeats jJdQySx"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> matches = {"wmf defeats jaoMDdJCOdvrok", "jaoMDdJCOdvrok defeats PFfzbG", "fbzDMQtwZPTZc defeats dobXaYiBruYSETyMC", "EsAOLBUzcIoZDNoiy defeats XawoDVNpQsPf", "CYKeymC defeats NPgrITZjTHl", "XawoDVNpQsPf defeats dobXaYiBruYSETyMC", "NPgrITZjTHl defeats JCm", "EsAOLBUzcIoZDNoiy defeats kNIulxKBegv", "wmf defeats dobXaYiBruYSETyMC", "wmf defeats XawoDVNpQsPf", "EsAOLBUzcIoZDNoiy defeats cmSbabUEbIhAvf", "fbzDMQtwZPTZc defeats NPgrITZjTHl", "vFPHiSKeFNcuHFzkZ defeats kNIulxKBegv", "EsAOLBUzcIoZDNoiy defeats NPgrITZjTHl", "vFPHiSKeFNcuHFzkZ defeats CYKeymC", "kNIulxKBegv defeats dobXaYiBruYSETyMC", "CYKeymC defeats fbzDMQtwZPTZc", "NPgrITZjTHl defeats XawoDVNpQsPf", "fbzDMQtwZPTZc defeats ylGMvlVfS", "kNIulxKBegv defeats JCm", "JCm defeats ZQ", "cmSbabUEbIhAvf defeats CYKeymC", "PFfzbG defeats XawoDVNpQsPf", "ZQ defeats CYKeymC", "NPgrITZjTHl defeats ylGMvlVfS", "wmf defeats fbzDMQtwZPTZc", "PFfzbG defeats fbzDMQtwZPTZc", "fbzDMQtwZPTZc defeats XawoDVNpQsPf", "ZQ defeats PFfzbG", "kNIulxKBegv defeats jaoMDdJCOdvrok", "NPgrITZjTHl defeats cmSbabUEbIhAvf", "PFfzbG defeats kNIulxKBegv", "ZQ defeats EsAOLBUzcIoZDNoiy", "kNIulxKBegv defeats NPgrITZjTHl", "ylGMvlVfS defeats EsAOLBUzcIoZDNoiy", "ZQ defeats fbzDMQtwZPTZc", "fbzDMQtwZPTZc defeats EsAOLBUzcIoZDNoiy", "vFPHiSKeFNcuHFzkZ defeats wmf", "wmf defeats kNIulxKBegv", "CYKeymC defeats dobXaYiBruYSETyMC", "vFPHiSKeFNcuHFzkZ defeats ZQ", "wmf defeats NPgrITZjTHl", "ZQ defeats ylGMvlVfS", "wmf defeats ylGMvlVfS", "kNIulxKBegv defeats fbzDMQtwZPTZc", "fbzDMQtwZPTZc defeats jaoMDdJCOdvrok", "CYKeymC defeats kNIulxKBegv", "PFfzbG defeats vFPHiSKeFNcuHFzkZ", "jaoMDdJCOdvrok defeats EsAOLBUzcIoZDNoiy"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "wmf";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> matches = {"MsMEJwgHGFOuGQ defeats RIk", "SFlQtYt defeats zyUsiGmocFfplgqElxNL", "zyUsiGmocFfplgqElxNL defeats jgENWBRfGalC", "R defeats ORGiBRTcfCQxPzUqTqwC", "iWOlUSOBSTcRc defeats jgENWBRfGalC", "hILtbkOEzDeAph defeats iWOlUSOBSTcRc", "wifUSiBApunOsiJk defeats zyUsiGmocFfplgqElxNL", "MsMEJwgHGFOuGQ defeats hILtbkOEzDeAph", "QhGGL defeats R", "wifUSiBApunOsiJk defeats SFlQtYt", "ORGiBRTcfCQxPzUqTqwC defeats MsMEJwgHGFOuGQ", "RIk defeats z", "jgENWBRfGalC defeats wifUSiBApunOsiJk", "jgENWBRfGalC defeats QhGGL", "RIk defeats QhGGL", "iWOlUSOBSTcRc defeats ORGiBRTcfCQxPzUqTqwC", "VNPwW defeats R", "gouYNVmwMETFFrlv defeats jgENWBRfGalC", "z defeats c", "zyUsiGmocFfplgqElxNL defeats VNPwW", "R defeats wifUSiBApunOsiJk", "c defeats wifUSiBApunOsiJk", "SFlQtYt defeats QhGGL", "hILtbkOEzDeAph defeats zyUsiGmocFfplgqElxNL", "jgENWBRfGalC defeats R", "gouYNVmwMETFFrlv defeats RIk", "RIk defeats VNPwW", "z defeats jgENWBRfGalC", "SFlQtYt defeats z", "MsMEJwgHGFOuGQ defeats VNPwW", "c defeats SFlQtYt", "jgENWBRfGalC defeats VNPwW", "VNPwW defeats SFlQtYt", "QhGGL defeats z", "z defeats wifUSiBApunOsiJk", "QhGGL defeats c", "R defeats MsMEJwgHGFOuGQ", "hILtbkOEzDeAph defeats z", "ORGiBRTcfCQxPzUqTqwC defeats SFlQtYt", "wifUSiBApunOsiJk defeats iWOlUSOBSTcRc", "RIk defeats ORGiBRTcfCQxPzUqTqwC", "c defeats hILtbkOEzDeAph", "iWOlUSOBSTcRc defeats MsMEJwgHGFOuGQ", "RIk defeats R", "jgENWBRfGalC defeats hILtbkOEzDeAph", "jgENWBRfGalC defeats c", "VNPwW defeats iWOlUSOBSTcRc", "R defeats iWOlUSOBSTcRc", "gouYNVmwMETFFrlv defeats z", "c defeats gouYNVmwMETFFrlv"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "gouYNVmwMETFFrlv";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> matches = {"ibTwwAYghx defeats BJVCetDTXqnpNeaM", "ISJocPjRrJ defeats P", "TsMQL defeats ibTwwAYghx", "CTladAJJiygyfh defeats BJVCetDTXqnpNeaM", "ISJocPjRrJ defeats qVAhSUvWWTZCR", "qltA defeats MUVBo", "ISJocPjRrJ defeats BJVCetDTXqnpNeaM", "JEwTKJkRoiU defeats yFigsjddMNRCjENLNHix", "yFigsjddMNRCjENLNHix defeats OjBshhRi", "OjBshhRi defeats qltA", "JEwTKJkRoiU defeats TsMQL", "qVAhSUvWWTZCR defeats ePa", "TsMQL defeats ISJocPjRrJ", "HFLyhPJLhNXEZ defeats CTladAJJiygyfh", "ibTwwAYghx defeats aRZgaABWX", "qVAhSUvWWTZCR defeats BJVCetDTXqnpNeaM", "MUVBo defeats OjBshhRi", "ISJocPjRrJ defeats aRZgaABWX", "CTladAJJiygyfh defeats qVAhSUvWWTZCR", "yFigsjddMNRCjENLNHix defeats HFLyhPJLhNXEZ", "aRZgaABWX defeats TsMQL", "P defeats HFLyhPJLhNXEZ", "P defeats CTladAJJiygyfh", "aRZgaABWX defeats BJVCetDTXqnpNeaM", "qVAhSUvWWTZCR defeats TsMQL", "BJVCetDTXqnpNeaM defeats TsMQL", "P defeats aRZgaABWX", "P defeats ibTwwAYghx", "ePa defeats yFigsjddMNRCjENLNHix", "qltA defeats ePa", "OjBshhRi defeats TsMQL", "P defeats ePa", "TsMQL defeats P", "aRZgaABWX defeats OjBshhRi", "aRZgaABWX defeats HFLyhPJLhNXEZ", "JEwTKJkRoiU defeats MUVBo", "CTladAJJiygyfh defeats ISJocPjRrJ", "qltA defeats yFigsjddMNRCjENLNHix", "OjBshhRi defeats HFLyhPJLhNXEZ", "JEwTKJkRoiU defeats CTladAJJiygyfh", "HFLyhPJLhNXEZ defeats JEwTKJkRoiU", "JEwTKJkRoiU defeats ibTwwAYghx", "ISJocPjRrJ defeats OjBshhRi", "yFigsjddMNRCjENLNHix defeats qVAhSUvWWTZCR", "CTladAJJiygyfh defeats yFigsjddMNRCjENLNHix", "ISJocPjRrJ defeats MUVBo", "CTladAJJiygyfh defeats ePa", "ePa defeats JEwTKJkRoiU", "MUVBo defeats HFLyhPJLhNXEZ", "P defeats yFigsjddMNRCjENLNHix"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "ISJocPjRrJ";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> matches = {"VP defeats uCXwqxwT", "nhIUn defeats VP", "UImwlJjyekRVdiG defeats hOlF", "hOlF defeats JjiVWgxyVdAioXXWfvAH", "LrbrqKskNKA defeats JjiVWgxyVdAioXXWfvAH", "wXYaqTUKHB defeats quF", "lIVWbwcv defeats hOlF", "aNZTCCo defeats nhIUn", "nhIUn defeats UImwlJjyekRVdiG", "aNZTCCo defeats MaTyeDLWZeiqUksUUnn", "lIVWbwcv defeats uCXwqxwT", "lIVWbwcv defeats aNZTCCo", "VP defeats JjiVWgxyVdAioXXWfvAH", "uCXwqxwT defeats MaTyeDLWZeiqUksUUnn", "VP defeats lIVWbwcv", "wXYaqTUKHB defeats hOlF", "UImwlJjyekRVdiG defeats iyvNjajuPrzSQxK", "UImwlJjyekRVdiG defeats lIVWbwcv", "FqvUSzh defeats lIVWbwcv", "quF defeats uCXwqxwT", "UImwlJjyekRVdiG defeats uCXwqxwT", "JjiVWgxyVdAioXXWfvAH defeats PSBPbUEymLdxfRnuBDh", "FqvUSzh defeats aNZTCCo", "MaTyeDLWZeiqUksUUnn defeats VP", "VP defeats iyvNjajuPrzSQxK", "VP defeats UImwlJjyekRVdiG", "nhIUn defeats JjiVWgxyVdAioXXWfvAH", "MaTyeDLWZeiqUksUUnn defeats quF", "aNZTCCo defeats UImwlJjyekRVdiG", "wXYaqTUKHB defeats lIVWbwcv", "VP defeats hOlF", "aNZTCCo defeats LrbrqKskNKA", "FqvUSzh defeats quF", "lIVWbwcv defeats nhIUn", "nhIUn defeats iyvNjajuPrzSQxK", "iyvNjajuPrzSQxK defeats uCXwqxwT", "VP defeats aNZTCCo", "iyvNjajuPrzSQxK defeats quF", "iyvNjajuPrzSQxK defeats FqvUSzh", "wXYaqTUKHB defeats VP", "aNZTCCo defeats wXYaqTUKHB", "MaTyeDLWZeiqUksUUnn defeats nhIUn", "quF defeats aNZTCCo", "iyvNjajuPrzSQxK defeats JjiVWgxyVdAioXXWfvAH", "PSBPbUEymLdxfRnuBDh defeats nhIUn", "hOlF defeats PSBPbUEymLdxfRnuBDh", "PSBPbUEymLdxfRnuBDh defeats aNZTCCo"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "wXYaqTUKHB";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> matches = {"ZdBdSkmlEvrmJGoSVDGU defeats ueVpcdi", "UnXNt defeats pvqEBUdfRMZN", "Hv defeats BWrBHHcZmfXPgA", "mfrOLKe defeats DKXiezKyCjh", "Hv defeats LhEmVuZrDa", "ueVpcdi defeats mfrOLKe", "Hv defeats lJNTicdeqTVoH", "pvqEBUdfRMZN defeats IIJ", "DKXiezKyCjh defeats y", "LhEmVuZrDa defeats ZdBdSkmlEvrmJGoSVDGU", "y defeats BWrBHHcZmfXPgA", "Hv defeats UnXNt", "mfrOLKe defeats aKZzErFWubqOYjAcks", "lJNTicdeqTVoH defeats UnXNt", "jiLIGYLW defeats UnXNt", "ueAScDWqYQvidkkR defeats LhEmVuZrDa", "LhEmVuZrDa defeats ueVpcdi", "DKXiezKyCjh defeats jiLIGYLW", "DKXiezKyCjh defeats lJNTicdeqTVoH", "pvqEBUdfRMZN defeats BWrBHHcZmfXPgA", "aKZzErFWubqOYjAcks defeats lJNTicdeqTVoH", "mfrOLKe defeats lJNTicdeqTVoH", "ZdBdSkmlEvrmJGoSVDGU defeats IIJ", "Hv defeats IIJ", "DKXiezKyCjh defeats aKZzErFWubqOYjAcks", "pvqEBUdfRMZN defeats ueVpcdi", "y defeats pvqEBUdfRMZN", "IIJ defeats lJNTicdeqTVoH", "ZdBdSkmlEvrmJGoSVDGU defeats lJNTicdeqTVoH", "IIJ defeats jiLIGYLW", "UnXNt defeats BWrBHHcZmfXPgA", "UnXNt defeats IIJ", "lJNTicdeqTVoH defeats ueAScDWqYQvidkkR", "BWrBHHcZmfXPgA defeats ueAScDWqYQvidkkR", "y defeats aKZzErFWubqOYjAcks", "ueAScDWqYQvidkkR defeats ZdBdSkmlEvrmJGoSVDGU", "jiLIGYLW defeats y", "BWrBHHcZmfXPgA defeats ZdBdSkmlEvrmJGoSVDGU", "IIJ defeats aKZzErFWubqOYjAcks", "pvqEBUdfRMZN defeats ueAScDWqYQvidkkR", "y defeats LhEmVuZrDa", "DKXiezKyCjh defeats ueVpcdi", "IIJ defeats BWrBHHcZmfXPgA", "BWrBHHcZmfXPgA defeats DKXiezKyCjh", "mfrOLKe defeats jiLIGYLW", "LhEmVuZrDa defeats lJNTicdeqTVoH", "UnXNt defeats mfrOLKe", "BWrBHHcZmfXPgA defeats jiLIGYLW"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "Hv";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> matches = {"oCVjlXXxslxVBaD defeats FYHmNSNHeeNl", "iVlaOsodkIQEl defeats RGg", "nBjwwmSTrilhoo defeats oCVjlXXxslxVBaD", "pjIyUiHdxJnGOYFxYc defeats xRpJXW", "HehLlyqSTHUuDIKmOjA defeats pjIyUiHdxJnGOYFxYc", "Oo defeats FYHmNSNHeeNl", "nBjwwmSTrilhoo defeats VnIb", "oCVjlXXxslxVBaD defeats xRpJXW", "fRBPPO defeats oCVjlXXxslxVBaD", "pjIyUiHdxJnGOYFxYc defeats Oo", "xRpJXW defeats HehLlyqSTHUuDIKmOjA", "VnIb defeats OMhDstiUULZ", "iVlaOsodkIQEl defeats oCVjlXXxslxVBaD", "OMhDstiUULZ defeats xRpJXW", "nBjwwmSTrilhoo defeats MoVAWJwOUSEUMV", "GcTk defeats MoVAWJwOUSEUMV", "pjIyUiHdxJnGOYFxYc defeats nBjwwmSTrilhoo", "GcTk defeats iVlaOsodkIQEl", "RGg defeats xRpJXW", "VnIb defeats xRpJXW", "VnIb defeats GcTk", "nBjwwmSTrilhoo defeats xRpJXW", "fRBPPO defeats Oo", "pjIyUiHdxJnGOYFxYc defeats FYHmNSNHeeNl", "dO defeats RGg", "HehLlyqSTHUuDIKmOjA defeats VnIb", "OMhDstiUULZ defeats HehLlyqSTHUuDIKmOjA", "dO defeats pjIyUiHdxJnGOYFxYc", "oCVjlXXxslxVBaD defeats GcTk", "GcTk defeats nBjwwmSTrilhoo", "FYHmNSNHeeNl defeats nBjwwmSTrilhoo", "FYHmNSNHeeNl defeats HehLlyqSTHUuDIKmOjA", "dO defeats iVlaOsodkIQEl", "fRBPPO defeats RGg", "nBjwwmSTrilhoo defeats RGg", "VnIb defeats MoVAWJwOUSEUMV", "FYHmNSNHeeNl defeats xRpJXW", "GcTk defeats FYHmNSNHeeNl", "iVlaOsodkIQEl defeats FYHmNSNHeeNl", "VnIb defeats Oo", "pjIyUiHdxJnGOYFxYc defeats VnIb", "HehLlyqSTHUuDIKmOjA defeats RGg", "dO defeats nBjwwmSTrilhoo", "MoVAWJwOUSEUMV defeats HehLlyqSTHUuDIKmOjA", "dO defeats VnIb", "xRpJXW defeats MoVAWJwOUSEUMV"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "dO";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> matches = {"FsxJJzhWQNXaFW defeats vPzguJaFeTw", "xLcuXqsFjTdvJJjBPns defeats zLbGhBrvLVoTg", "nBFAyIVCdTWOucj defeats FsxJJzhWQNXaFW", "ntYtYTDMtNGAucZHB defeats rUHWeQVqdyyT", "FsxJJzhWQNXaFW defeats xLcuXqsFjTdvJJjBPns", "zLbGhBrvLVoTg defeats vPzguJaFeTw", "r defeats ntYtYTDMtNGAucZHB", "w defeats CnyZuWAzGvZknBdCOPQo", "HEQFrEonJNrkdzgZsc defeats qIjUzn", "r defeats w", "nBFAyIVCdTWOucj defeats r", "HEQFrEonJNrkdzgZsc defeats jHJy", "w defeats HEQFrEonJNrkdzgZsc", "r defeats CnyZuWAzGvZknBdCOPQo", "vPzguJaFeTw defeats hmmkHtWdhPVopFy", "zLbGhBrvLVoTg defeats hmmkHtWdhPVopFy", "HEQFrEonJNrkdzgZsc defeats r", "FsxJJzhWQNXaFW defeats HEQFrEonJNrkdzgZsc", "nBFAyIVCdTWOucj defeats CnyZuWAzGvZknBdCOPQo", "r defeats jHJy", "BVUNxOKwvmkW defeats w", "xLcuXqsFjTdvJJjBPns defeats BVUNxOKwvmkW", "qIjUzn defeats hmmkHtWdhPVopFy", "zLbGhBrvLVoTg defeats rUHWeQVqdyyT", "vPzguJaFeTw defeats HEQFrEonJNrkdzgZsc", "BVUNxOKwvmkW defeats nBFAyIVCdTWOucj", "vPzguJaFeTw defeats ntYtYTDMtNGAucZHB", "qIjUzn defeats CnyZuWAzGvZknBdCOPQo", "jHJy defeats w", "FsxJJzhWQNXaFW defeats zLbGhBrvLVoTg", "ntYtYTDMtNGAucZHB defeats zLbGhBrvLVoTg", "hmmkHtWdhPVopFy defeats xLcuXqsFjTdvJJjBPns", "vPzguJaFeTw defeats rUHWeQVqdyyT", "HEQFrEonJNrkdzgZsc defeats zLbGhBrvLVoTg", "jHJy defeats FsxJJzhWQNXaFW", "jHJy defeats xLcuXqsFjTdvJJjBPns", "jHJy defeats CnyZuWAzGvZknBdCOPQo", "BVUNxOKwvmkW defeats jHJy", "qIjUzn defeats FsxJJzhWQNXaFW", "w defeats qIjUzn", "hmmkHtWdhPVopFy defeats r", "jHJy defeats hmmkHtWdhPVopFy", "rUHWeQVqdyyT defeats w", "ntYtYTDMtNGAucZHB defeats w", "zLbGhBrvLVoTg defeats w", "nBFAyIVCdTWOucj defeats rUHWeQVqdyyT", "HEQFrEonJNrkdzgZsc defeats CnyZuWAzGvZknBdCOPQo", "HEQFrEonJNrkdzgZsc defeats nBFAyIVCdTWOucj", "xLcuXqsFjTdvJJjBPns defeats nBFAyIVCdTWOucj", "vPzguJaFeTw defeats CnyZuWAzGvZknBdCOPQo"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "BVUNxOKwvmkW";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> matches = {"CEXEr defeats LoeyTpg", "QewooVBJdzkNsYnAImk defeats EdVF", "HWYnKFAkCT defeats epokgo", "yqUdg defeats VNjBaXiysqqF", "VNjBaXiysqqF defeats LoeyTpg", "HWYnKFAkCT defeats ftIbngJEDQ", "WPCtrHRRbPWBCX defeats ftIbngJEDQ", "UOkTCDRXphrgXZlHho defeats EdVF", "epokgo defeats fPd", "CEXEr defeats yqUdg", "UHOyIGYPsbxlnic defeats WPCtrHRRbPWBCX", "WPCtrHRRbPWBCX defeats epokgo", "UOkTCDRXphrgXZlHho defeats UHOyIGYPsbxlnic", "HWYnKFAkCT defeats VNjBaXiysqqF", "ftIbngJEDQ defeats LoeyTpg", "yqUdg defeats LoeyTpg", "HWYnKFAkCT defeats WPCtrHRRbPWBCX", "QewooVBJdzkNsYnAImk defeats AFGbnHDVESNZEbEEU", "UHOyIGYPsbxlnic defeats fPd", "QewooVBJdzkNsYnAImk defeats VNjBaXiysqqF", "KYHgCrutbsOfnJNxTkCn defeats WPCtrHRRbPWBCX", "AFGbnHDVESNZEbEEU defeats EdVF", "CEXEr defeats WPCtrHRRbPWBCX", "CEXEr defeats ftIbngJEDQ", "CEXEr defeats UHOyIGYPsbxlnic", "VNjBaXiysqqF defeats KYHgCrutbsOfnJNxTkCn", "AFGbnHDVESNZEbEEU defeats WPCtrHRRbPWBCX", "UHOyIGYPsbxlnic defeats QewooVBJdzkNsYnAImk", "yqUdg defeats HWYnKFAkCT", "WPCtrHRRbPWBCX defeats fPd", "ftIbngJEDQ defeats fPd", "WPCtrHRRbPWBCX defeats QewooVBJdzkNsYnAImk", "QewooVBJdzkNsYnAImk defeats ftIbngJEDQ", "UHOyIGYPsbxlnic defeats VNjBaXiysqqF", "epokgo defeats QewooVBJdzkNsYnAImk", "yqUdg defeats AFGbnHDVESNZEbEEU", "epokgo defeats LoeyTpg", "EdVF defeats UHOyIGYPsbxlnic", "UHOyIGYPsbxlnic defeats yqUdg", "UHOyIGYPsbxlnic defeats epokgo", "LoeyTpg defeats UOkTCDRXphrgXZlHho", "LoeyTpg defeats UHOyIGYPsbxlnic", "VNjBaXiysqqF defeats UOkTCDRXphrgXZlHho", "WPCtrHRRbPWBCX defeats VNjBaXiysqqF", "LoeyTpg defeats HWYnKFAkCT", "ftIbngJEDQ defeats UHOyIGYPsbxlnic", "LoeyTpg defeats EdVF"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "CEXEr";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> matches = {"defeats defeats def", "defeats defeats defe", "defe defeats ded", "defeat defeats defeats"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "defeat";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> matches = {"B defeats BA", "B defeats BB", "BC defeats B", "A defeats AB", "A defeats AC", "A defeats AD", "A defeats AE", "AF defeats A", "AG defeats A", "AB defeats AF", "AC defeats AG", "BB defeats BC"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> matches = {"Ted defeats Kate", "Kate defeats Billy", "Ted defeats Billy"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "Ted";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> matches = {"Ted defeats Kate", "Kate defeats Billy", "Ted defeats Billy", "Tommy defeats Ted"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "Tommy";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> matches = {"Kate defeats Billy", "defeats defeats Kate", "defeats defeats Billy", "Tommy defeats defeats"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "Tommy";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> matches = {"a defeats b", "b defeats c", "c defeats a", "d defeats e", "e defeats f", "f defeats d", "g defeats h", "h defeats i", "i defeats g", "j defeats k", "k defeats l", "l defeats j"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> matches = {"B defeats BA", "A defeats BA", "C defeats BA"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> matches = {"a defeats C", "A defeats B"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> matches = {"b defeats d", "b defeats c", "a defeats b", "a defeats c", "c defeats d", "d defeats a"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> matches = {"ab defeats ac", "ac defeats bc", "ax defeats dd", "aa defeats xx"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "aa";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> matches = {"A defeats B", "B defeats C", "B defeats D", "E defeats A", "C defeats E"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> matches = {"ANTI defeats ANT", "ANTi defeats ANT"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "ANTI";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> matches = {"a defeats b", "c defeats d", "e defeats f"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> matches = {"Kumar defeats Senthil", "kumar defeats Senthil", "senthil defeats kumaran", "senthil defeats ram", "kumar defeats ram"};
    TheTournament* pObj = new TheTournament();
    clock_t start = clock();
    string result = pObj->findLeader(matches);
    clock_t end = clock();
    delete pObj;
    string expected = "Kumar";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20287357&rd=8076&pm=4649
********************************************************************************
#ifdef WIN32
#  pragma warning(disable:4786)
#  define for if (0); else for
#endif
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <bitset>
#include <valarray>
#include <algorithm>
#include <functional>
#include <numeric>
#include <complex>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
using namespace std;
 
 
class TheTournament{
public:
  string findLeader(vector<string> matches){
    int a[200][2];
    string ss[200];
    int num=0;
    map<string,int> m;
    string pa,bb,pb;
    memset(a,0,sizeof(a));
    for(int i=0;i<matches.size();i++)
    {
      istringstream is(matches[i]);
      is>>pa>>bb>>pb;
      if(m.find(pa) == m.end())
      {
        m[pa]=num;
        ss[num]=pa;
        num++;
        a[m[pa]][0]++;
      }
      else
        a[m[pa]][0]++;
      if(m.find(pb)==m.end())
      {
        m[pb]=num;
        ss[num]=pb;
        num++;
        a[m[pb]][1]++;
      }
      else
        a[m[pb]][1]++;
    }
    string name;
    int win=0,lose=10000;
    for(int i=0;i<num;i++)
    {
      if(win*(a[i][0]+a[i][1])<a[i][0]*(win+lose))
      {
        win = a[i][0];
        lose=a[i][1];
        name = ss[i];
      }
      else if(win*(a[i][0]+a[i][1])==a[i][0]*(win+lose))
      {
        if(ss[i]<name)
          name=ss[i];
      }
    }
    return name;
  }
};

********************************************************************************
*******************************************************************************/