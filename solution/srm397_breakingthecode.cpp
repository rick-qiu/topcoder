/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8743
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

class BreakingTheCode {
public:
    string decodingEncoding(string code, string message);
};

string BreakingTheCode::decodingEncoding(string code, string message) {
    string ret;
    return ret;
}


int test0() {
    string code = "abcdefghijklmnopqrstuvwxyz";
    string message = "test";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "20051920";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string code = "abcdefghijklmnopqrstuvwxyz";
    string message = "20051920";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "test";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string code = "qesdfvujrockgpthzymbnxawli";
    string message = "mwiizkelza";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "19242626171202251723";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string code = "ghrnbwvoekdtfuqsycmizalpxj";
    string message = "bfapgbyqgi";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "05132224010517150120";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string code = "hxkaqjvybrtpfwcedglunszmoi";
    string message = "vmxnshxdgo";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "07240221220102171825";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string code = "rpoyflgdmxtnhvkzwicqbeaujs";
    string message = "broeycfzgv";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "21010322041905160714";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string code = "aqhbdstjumlwgvioecpnfxyrkz";
    string message = "xqgwxbfxux";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "22021312220421220922";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string code = "idlxhkecsopbrvyfgnmjwqtuza";
    string message = "gjdddcrrev";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "17200202020813130714";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string code = "pfskhmltuaydiczbverxwqnogj";
    string message = "yuisydcnyg";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "11091303111214231125";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string code = "gfqtrasenmikhlubpjwdxzcvyo";
    string message = "ydalbgmali";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "25200614160110061411";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string code = "dvmzuyqtlkxncarwipjfhbeogs";
    string message = "icpinzjjhp";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "17131817120419192118";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string code = "btoewplzskgfdmviqrnxyjacuh";
    string message = "mktwtiqhud";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "14100205021617262513";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string code = "faxmswrpnqdbygcthuvkojizle";
    string message = "02170308060416192402";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "ahxpwmtvza";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string code = "hnpwksauzbgrycoxvilqftdmej";
    string message = "13210105200210112201";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "yfhkqnbgth";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string code = "jndwvogtmfcrikuexszyphabql";
    string message = "04210216160203152008";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "wpneenduyt";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string code = "xofdvgezcprlqisjuhkyabntwm";
    string message = "20171011101905242417";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "yuprpkvttu";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string code = "vezjdulkhxpynrqgmtawbisocf";
    string message = "08040807022609092524";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "kjklefhhco";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string code = "xtgekmzqipbfljcrvowadyuhsn";
    string message = "16231624231502142107";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "rurhuctjdz";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string code = "lwtmnyugzoqxbkiveardhjsfcp";
    string message = "22051011021924181717";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "jnoqwrfaee";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string code = "jolwmuceibgsqnxatdzfrhvykp";
    string message = "22211615120925260422";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "hraxsikpwh";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string code = "akjmwyrofxthslpudnbgveqzic";
    string message = "13172314222009211307";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "sdqlegfvsr";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string code = "exovnlchjyzikgpadmfrbqtswu";
    string message = "17092113240402170721";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "djbksvxdcb";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string code = "heftulovaswgmizcqjrxbynkpd";
    string message = "aoqhjmmzgjlsvinyfneusxzzipnkgkygyqpiecjnnuhkcvjkip";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "0907170118131315121806100814232203230205102015151425232412242212221725140216182323050124160818241425";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string code = "orzjfnwtpxahsgdqukivemblyc";
    string message = "twlfgdkirqmonfxqigzkgavnfsgxhjachninsuykmmazsxpadq";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "0807240514151819021622010605101619140318141120060513141012041126120619061317251822221103131009111516";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string code = "vajqzdotxhrngpbmficulsekyw";
    string message = "spvtumhghrhftrdgibwirtwxnipsjhzbywwukedrvkxrbczlev";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "2214010820161013101110170811061318152618110826091218142203100515252626202423061101240911151905212301";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string code = "twciqeaszbygxorupdnfjhkmlv";
    string message = "fbithdpeuhaaklbyhcobacqjuhjjlistlamtfdxcmyezlhxtkl";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "2010040122181706162207072325101122031410070305211622212125040801250724012018130324110609252213012325";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string code = "moizsphbyfqukgjwntdcrlevxa";
    string message = "gmcbyqxlfkiperkjhzkloyiksdlwzsbfediftgsbsaqwtchbbt";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "1401200809112522101303062321131507041322020903130519221604050810231903101814050805261116182007080818";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string code = "mqlnpfxuwvrbgchziejtdkaoys";
    string message = "ihzliszboyeactmebzpqsikgkwtflavvhwgrohufiyfktsqvtf";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "1715160317261612242518231420011812160502261722132209200603231010150913112415080617250622202602102006";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string code = "aynomsvjrglbeiqdzhfukxwpct";
    string message = "axhxrolcelwihiqtxuxuxmjoitmocpefnlegarkgcgpmrhfobe";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "0122182209041125131123141814152622202220220508041426050425241319031113100109211025102405091819041213";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string code = "kgpcthqdmbszyuxvofinlwraje";
    string message = "bnsrqwbtpxjrooijkdktlpkwlnnkxvxykrpaqtthsfyitirdnd";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "1020112307221005031525231717192501080105210301222120200115161513012303240705050611181319051923082008";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string code = "cidrkszoabuhegxwvypqtjnlmf";
    string message = "npzsfdsexcddzpwuwmqnvdgxjvdhpmpeeqwjvqptssyshuodie";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "2319070626030613150103030719161116252023170314152217031219251913132016221720192106061806121108030213";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string code = "yfexqtsldwacnorugihzkjpmbv";
    string message = "ysidbovhyvkqrssfnkxmtnwautzwkxpisznvoieoeqgxkacylb";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "0107180925142619012621051507070213210424061310111606201021042318072013261418031403051704211112010825";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string code = "vzojserbfwqtmlyukgiahpdcxn";
    string message = "djfdwhpdyajjfptuxuvwskthivjlouotguwcdnfbormtgfpfzm";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "2304092310212223152004040922121625160110051712211901041403160312181610242326090803071312180922090213";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string code = "qlhauwsmirgpenbtcvjkofxdzy";
    string message = "abpgcbiwyfzfzoykzfnoinjqckxhcsfdtujyxtwwywbzmbjlix";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "0415121117150906262225222521262025221421091419011720230317072224160519262316060626061525081519020923";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string code = "twihmbzrsvpfkoenjqldguyacx";
    string message = "carnjoobcaksxrrxrvbnvpgvxwqempkosbdbsrewuoprggqxes";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "2524081617141406252413092608082608100616101121102602181505111314090620060908150222141108212118261509";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string code = "fqjtlzxcomaivkpbdsghnyuewr";
    string message = "covcsnotwhsfzhpfnmzomzpgrvwcsejusfymunhtuzyvincybe";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "0809130818210904252018010620150121100609100615192613250818240323180122102321200423062213122108221624";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string code = "lsgacyuiwfeohvbxkmjtqzrdpn";
    string message = "zsxzwblnhplbqhcjjlafconmpetpvykxthyplmesbpvtyyejle";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "2202162209150126132501152113051919010410051226182511202514061716201306250118110215251420060611190111";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string code = "mrgtphdlsyakewuxqjoczbvnif";
    string message = "02170817062206101423100916010806060820061020022215";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "rqlqhbhywvysxmlhhlchycrbu";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string code = "xuvwmaeortbgqdchpjinkfsylz";
    string message = "04141905110905042617021407171014150425201007112506";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "wdimbrmwzpudeptdcwlntebla";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string code = "nthwkfivuleaxmcprjdsgzqoyb";
    string message = "08030418011119232215240815131522140306182007262419";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "vhwjnedqzcovcxczmhfjsibod";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string code = "kfjtulqcrygvnsabeozhdmpixw";
    string message = "22170123141925011016082115171208261220070821111315";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "mekpszxkybcdaevcwvhqcdgna";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string code = "tjwkofnuzhvlaspdrygiqxmcbe";
    string message = "16010626132003212010261515211217040119150211092317";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "dtfeaiwqiheppqlrktgpjvzmr";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string code = "hdmoazlungjstecxbwviqyrkpf";
    string message = "21161605120822161523120414080106161626230106020202";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "qxxasuyxcrsoeuhzxxfrhzddd";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string code = "xmtqkrujvsoipwelhcyfznbgda";
    string message = "05030206040310201717240922191703260708231211062201";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "ktmrqtsfhhgvnyhtaujbiornx";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string code = "hpnjviewoamqyusgctdflzxbkr";
    string message = "01100606070602120306212014051502191324040213142622";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "haiieipqnilfuvspdybjpyurz";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string code = "tismbjdnxehugrqacwvlykzpfo";
    string message = "19171106160922101816262308010808092511051719220517";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "vchjaxkewaozntnnxfhbcvkbc";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string code = "svcdjneryqwkgixmtbolufhzpa";
    string message = "03251624030916102422061422171303202308062303172307";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "cpmzcymqzfniftgclhrnhcthe";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string code = "xjhfaplyvdtubwrisqgnoecmzk";
    string message = "23100313090917130219241621082425221317212607260321";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "cdhbvvsbjgmioymzebsoklkho";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string code = "clsaifkqbyxvjdpouwtzgnemhr";
    string message = "10040211082207260819082004230801240716090824212601";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "yalxqnkrqtqzaeqcmkobqmgrc";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string code = "dfehaxbyjkucotinqgmlzpsvwr";
    string message = "20241914252102172307102120111920181325011801171606";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "lvmtwzfqsbkzlumlgowdgdqnx";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string code = "yrvuaxgimpknchejltdozsfbqw";
    string message = "12132203040107011423122107222205061707061016182617";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "ncsvuygyhfnzgssaxlgxpjtwl";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string code = "quglwrmfvycbzhxpinseotjakd";
    string message = "18130309142122210819241704162317110313062306131006";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "nzgvhotofsailpjicgzrjrzyr";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string code = "hpnjviewoamqyusgctdflzxbkr";
    string message = "h";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "01";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string code = "hpnjviewoamqyusgctdflzxbkr";
    string message = "r";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "26";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string code = "hpnjviewoamqyusgctdflzxbkr";
    string message = "a";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "10";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string code = "hpnjviewoamqyusgctdflzxbkr";
    string message = "z";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "22";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string code = "hpnjviewoamqyusgctdflzxbkr";
    string message = "01";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "h";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string code = "hpnjviewoamqyusgctdflzxbkr";
    string message = "09";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "o";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string code = "hpnjviewoamqyusgctdflzxbkr";
    string message = "10";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string code = "hpnjviewoamqyusgctdflzxbkr";
    string message = "26";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "r";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string code = "faxmswrpnqdbygcthuvkojizle";
    string message = "0203020302030203262501";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "axaxaxaxelf";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string code = "abcdefghijklmnopqrstuvwxyz";
    string message = "05";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "e";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string code = "abcdefghijklmnopqrstuvwxyz";
    string message = "262626";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "zzz";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string code = "abcdefghijklmnopqrstuvwxyz";
    string message = "azzzazzaza";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "01262626012626012601";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string code = "abcdefghijklmnopqrstuvwxyz";
    string message = "gijkhmn";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "07091011081314";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string code = "qwertyuioplkjhgfdsazxcvbnm";
    string message = "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "2626262626262626262626262626262626262626262626262626262626262626262626262626262626262626262626262626";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string code = "abcdefghijklmnopqrstuvwxyz";
    string message = "0101";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "aa";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string code = "abcdefghijklmnopqrstuvwxyz";
    string message = "ghijk";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "0708091011";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string code = "abcdefghijklmnopqrstuvwxyz";
    string message = "030405";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "cde";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string code = "abcdefghijklmnopqrstuvwxyz";
    string message = "aaa";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "010101";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string code = "abcdefghijklmnopqrstuvwxyz";
    string message = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "0102030405060708091011121314151617181920212223242526010203040506070809101112131415161718192021222324";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string code = "abcdefghijklmnopqrstuvwxyz";
    string message = "abcdefghijklm";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "01020304050607080910111213";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string code = "abcdefghijklmnopqrstuvwxyz";
    string message = "abcdefghijklmnopqrstuvwxyz";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "0102030405060708091011121314151617181920212223242526";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string code = "bcdefghijaovklpqyzrstumnwx";
    string message = "asdfjklhyvasdfjklhyvasdfjklhyvasdfjklhyvasdfjklhyv";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "1020030509131407171210200305091314071712102003050913140717121020030509131407171210200305091314071712";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string code = "qwertyuioplkjhgfdsazxcvbnm";
    string message = "qqqqqqqqqqqqqqqqqqqqqqqmmmmmmmmmm";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "010101010101010101010101010101010101010101010126262626262626262626";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string code = "abcdefghijklmnopqrstuvwxyz";
    string message = "fghijklmnfghijklmn";
    BreakingTheCode* pObj = new BreakingTheCode();
    clock_t start = clock();
    string result = pObj->decodingEncoding(code, message);
    clock_t end = clock();
    delete pObj;
    string expected = "060708091011121314060708091011121314";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22724148&rd=12169&pm=8743
********************************************************************************
#include<string> 
#include<vector> 
#include<cmath> 
#include<iostream> 
using namespace std; 
 
class BreakingTheCode 
{  
public: 
  string decodingEncoding(string code, string message) 
  { 
    int a[30],i,k; 
    char c[30],h; 
    string s; 
    memset(a,0,sizeof(a));     
    for (i=0;i<26;i++) 
    { 
      h=code[i]; 
      k=(int)(h-'a'); 
      a[k]=i+1; 
      c[i]=h; 
    } 
    if ((message[0]>='0')&&(message[0]<='9') ) 
    { 
      for (i=0;i<message.length();i=i+2) 
      { 
        k=(int)(message[i]-'0')*10+(int)(message[i+1]-'0'); 
        s=s+c[k-1]; 
      } 
    }else 
    { 
      for (i=0;i<message.length();i=i+1) 
      { 
        k=(int)(message[i]-'a'); 
        s=s+(char)((a[k]/10)+'0')+(char)((a[k] % 10)+'0');       
         
      } 
    } 
    return s; 
  } 
};

********************************************************************************
*******************************************************************************/