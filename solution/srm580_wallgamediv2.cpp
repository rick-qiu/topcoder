/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12579
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

class WallGameDiv2 {
public:
    int play(vector<string> costs);
};

int WallGameDiv2::play(vector<string> costs) {
    int ret;
    return ret;
}


int test0() {
    vector<string> costs = {"042", "391"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> costs = {"0xxxx", "1x111", "1x1x1", "11191", "xxxx1"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> costs = {"0", "5"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> costs = {"01", "0x"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
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
    vector<string> costs = {"090", "064", "232"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> costs = {"0477", "3617", "9494", "8690"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> costs = {"08576", "58280", "25369", "86141", "37x2x"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> costs = {"096756", "x68x14", "703310", "43071x", "521125", "590855"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> costs = {"06x5779", "99x0763", "3354247", "2014749", "757016x", "8166x31", "70x4406"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 126;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> costs = {"07121395", "64801311", "60471481", "08xx3x40", "49597xxx", "56x29330", "x0483349", "13952278"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 157;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> costs = {"098936368", "737491635", "153087414", "091769249", "134955109", "70189499x", "237659431", "803863853", "113775873"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 337;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> costs = {"0065389823", "9207688369", "2505673842", "55x8x75xx9", "7831162x36", "5496138346", "91930x0x29", "x2475x43x0", "1119352553", "3516980409"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 291;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> costs = {"03273x86096", "xxx82702809", "00400083x99", "42430803140", "141x7174417", "07247011321", "64430578778", "x9285xx5586", "x03564247x5", "564992439x7", "735091644x9"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> costs = {"09822312x298", "6527485077x6", "989x5859x584", "502773x94076", "x65x19214193", "1x07376x4045", "950791020122", "5409440388x8", "8x1x03917495", "012684049789", "823041903743", "312884295215"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 355;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> costs = {"0431729725678", "9113034210361", "7729x9x309820", "8x5x764167889", "111x62160x022", "6082368810347", "8x5335x0x7xx2", "6xx5308495569", "4776353495158", "x56172404x142", "3403577x64884", "23766x7766325", "7966x75900696"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 428;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> costs = {"098x2486802x60", "7168x921174745", "04105247944809", "10411041514x66", "4136633475627x", "2753x082345656", "80286178590860", "59509x905533x2", "11446184126932", "9335610511x898", "32986168x98938", "08376282645973", "16469165478488", "9960619848956x"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 522;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> costs = {"0x17699387x6131", "5xx61xx9795034x", "1229078735830x0", "86x468631547635", "6xx052021723916", "12211071995747x", "339442978818580", "804439583063022", "6150x4774090104", "41529934577065x", "x63408714313418", "62745457780x768", "545699956741591", "446016651909601", "702035529671079"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 652;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> costs = {"0069630785369583", "7093657146487780", "8420222976515991", "2631927787371280", "47x2x4x149534440", "2937x03212268340", "14123898x96x0651", "7x551123010x7x42", "x5704x1983398396", "341111330x128912", "389x796468304049", "3x52647461330988", "x1918924x0435678", "141x392521393852", "2577503x712949x9", "738954453x079924"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 668;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> costs = {"08600278x5526978x", "7907434097592626x", "017258x7x82753489", "88896x957991x6x83", "12731515738592507", "87058856257x36125", "80177614053283459", "77x4x39xx2591558x", "783046454328x7513", "36813710274335975", "444401978795845x5", "8x3952x580x513x41", "3772xx28xx682x886", "41x76849821x12311", "7252875060574x984", "41709120000424494", "412616x216x868590"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 696;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> costs = {"042989x8x683342210", "7138417x2961453417", "3500x8866433827839", "50x898468068987964", "309246648890600347", "06726x661348225x73", "8192080869918x8417", "859308939636923x95", "81x0918x8071127x73", "8738x78747783x8288", "9x0828081630759737", "473277053518428231", "2075952021x9834875", "42794x011072676518", "21333185xx83x96045", "438000196703749466", "316002061508783046", "841265791x73xx8805"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 844;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> costs = {"066539879x92x061643", "4x7445x76977712x736", "x0464410x3374812004", "552233911880567xx98", "2688x97443178683571", "2403435814101xx7748", "74417495x1882x14467", "012x1486322x9129x11", "840xx01671x99882055", "x35254412x59x3x7763", "541393x83xx30401x31", "69651524x565x4x7160", "19769x241162x3205x9", "1369769858438263030", "73248634x8629220088", "976761x154066325258", "48241743172566x6x04", "10x54268366x0x24910", "36x846480x109675675"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 641;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> costs = {"07914752x27207x55206", "x62847x9988848x2x671", "x094715x965x03466784", "3x1954026419885xx925", "4163422282042406x202", "80x7478904997084x805", "375748x31051xx862371", "85756557061027599xx8", "845182x30812218423x8", "715279328133x4581012", "70757315119054765152", "19x073801x4x0166722x", "5395xxx672052409808x", "8781804684169789xx87", "314826x542743x7x4738", "1092x90077314x491117", "x71884268x4235185248", "x7015806904391209865", "44650258017016348094", "2753340876515x977113"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 925;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> costs = {"06x69x171881106383566", "358771595170848x7x912", "904x864x607441x237712", "6x421439x272215522266", "4x746529865226361x817", "5405886123288x9x5463x", "0774x473x550086465240", "4830x69x7290684485952", "43464535179x1467x8118", "2x97838x231x7861x6488", "65934494143x027566339", "x8x704448411688908954", "8x5x143234x765x445651", "x8x4x45593526x3561560", "1086955x53781446x3274", "1964730679x70904382xx", "479854449648867308xx2", "x96743214141126017x09", "9017696934238155x2372", "00948947273330362x861", "67492529491867x686207"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 946;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> costs = {"0156972787069367021x47", "928x9x6233070452x14828", "9x81442934857173909984", "2433429230x77374831134", "77067600x97919577x5593", "919519320229900x841770", "122504989752949684xx39", "899982x0411791x8639207", "627478359812x2895x9128", "08292xx2x5338108154604", "590347663456575635x160", "81510x3721796051611281", "9710537404887370654402", "463260350312x4758x5776", "65x1832x1778014293083x", "329885264557171xxx0905", "85x8432946304852003468", "99x6888017x29042024249", "12739182447x9071x27206", "687368816744751x604676", "708597472422941864062x", "0158915x08939x1154x798"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 1185;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> costs = {"0915131498x075125493965", "257x97643x868933xx50x2x", "0x9x7949x4x11x8xx313x90", "39xx2x3902181x99749852x", "729020814x082064x179937", "631576512x0644055260811", "44147x39044485x93376019", "10809467583659773814173", "466x8657219639910x99180", "6x93xx44627702120xx4139", "8267x89938641238xx28x04", "x815x70878020874344x577", "x2x06943555074001707671", "99791801062892x41422046", "92931x461x331586x284105", "65665x74729863xxx4049x1", "16995502796615998x24844", "65075796427x81x88513064", "11158321244337847014468", "81606065793177043x25876", "75133919899704629545880", "xx968964024848460898325", "36945398264402688255x03"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 1150;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> costs = {"0533130x5x387855x2532x37", "664x7713824x313698565164", "x6554833403147x270875380", "41x338381851590197539569", "6652x4946276597559x93905", "545842212020x4496x128275", "360x1025x8781814414005x0", "951015941389730800503198", "x2129471x865084462571391", "2266410x8206787339210926", "274x24264x51447671418829", "7425518391244375367x6273", "xx8730389673945x492049x5", "0438x7002213884677197963", "4x389140081x033077864894", "648418610567x29928294534", "649x47307002667377396679", "591199x43206203334696187", "136794630x724429082x0805", "19588767x810054673893300", "8x5531737024510x18043373", "xx5397040212768572782116", "3472105828857798344x0831", "07358893951x464x7x4670x9"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 1279;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> costs = {"08881590x618x143577549829", "25x8815925953x66077728794", "x9186809x6477238260033775", "648795x428763650043463130", "x18198xxx555382x9452982x5", "6x72x9159229192357371x88x", "84373366342301x7993915285", "8728963074x76103356968685", "717144676611486034460x943", "97x582079x173460534845x30", "047826927976509931832xx17", "356917256962043690387892x", "694894468122157x744630502", "8385740588137x2351xx37003", "069x0159882xx0x846x986863", "x512329535372177x53123037", "210x353618715x9x5999476x9", "5147517x9630608554225x177", "58836365788282x944071192x", "5135085840268116431601451", "9355x06x29x39267550215024", "x0086957319x8x480572678x6", "858174x17884x1887x38x5891", "003494478201874x901x53698", "788348601x00x160975215884"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 1197;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> costs = {"0841x377031972899424630x52", "x50x6428124722321275021728", "31194246834485223927740533", "0484207115518615090304xx53", "294564357721938x1565731920", "27397977x26560643142x16640", "210316247441x2x59422417x42", "484869572148x8x7x0x7755x70", "08x443749113602221753944x2", "4233x314143489397122582919", "63553x1406819x22x682485788", "452012022245290164483x0045", "6x9024951057291732581x4093", "89663358971813232621550270", "8273060x2xx7630690873876x7", "x0535856701457032x506x7717", "84478809375362x48427035711", "59074899819497646007510x28", "2x1x65759x3384x62366613862", "077182220402x7262352975339", "x4583x7x9x6611034936966x30", "98658x3484x46196xx5578x6x0", "3x05876710471572989139xx37", "32295151x92907815xx3313435", "x2338x83551x6x5821154353x6", "75522020775589x5xx27639687"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 1343;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> costs = {"08521x3x0858x02314578782558", "66792x221667x87375693890357", "223247201744x19945825553832", "0x370x691854593x708253949x4", "30x6129x46253x4650645223645", "540x4x83x709120885507578531", "9x499193862x418706x5398078x", "x3642507081xx67xx3417x9x401", "52538592x950384x48174684321", "22x005737548399882256693x11", "8890378146x96x6753319204875", "09965x928749x574005521x292x", "622312787631630250880030030", "22757x57x376502877550757516", "307832834x76291957028458037", "x3823359x047x7185811x169792", "2425x456184932202x5373x1984", "0218313507605x9267069654813", "213x0682392x5027882x599097x", "74x650176484059x298x35184x1", "6819345055x2248722081236683", "843633x255x0656403702124297", "13963x8833x24473967325x3283", "721879294290378000531763311", "392511053728562153495772164", "3x709483x4751x4936417239977", "9136x513605657471x903568641"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 1336;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> costs = {"086068x58150x762985602341617", "9x20122897575453387228885352", "x201018838880097920669796312", "3057375xx3815x2x220328155131", "354812598046888942xx21152562", "26x405x1453x941207x8085xx3xx", "209x9705x37x5901049744457810", "73512077x80650x281614173x484", "x46x0887639324158485702613x8", "706326330039175829667x144240", "50999333x73280x4847297953405", "3578835121585187x69x976x661x", "4762080098960431x29591527x44", "959378174887995x920905535789", "2341230888974939715957612812", "0561374188x333564xx749x88337", "x6x2440x8x146952679278370606", "084774224384038344505738x965", "6369351207312894635252469764", "91866497382054x0815636982664", "454x9294415228999999x0050224", "6x58664038804566088136248791", "45x17x6149709902238949902359", "27xx4183496653x6847854217330", "1114x86x13x38638077976152389", "609367898339333836784x885251", "96424999954x4x93287200028853", "9368x75978x86959674275085x3x"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 2027;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> costs = {"03230x33399996237748313x45748", "01807072637465142427003x6172x", "611x3168741297724x13424625087", "749485x42637276881363x4561468", "6071997x52451x025023465x34288", "272418292282538994706066072x2", "2x9x8439835887528400427877039", "38451x29576874250666180976979", "5xx53257262042368726643177790", "0098497967x512170228x9016350x", "556350828865x347482057360xx68", "42705158302xx28x701565927317x", "56666835x094333239632x9565872", "19643395782279858912965959384", "82619x316x581112273438059807x", "2228967269124x104852459161899", "799705897xx765452241x00665201", "2303x65973428253375658331036x", "3120x2405501xx2455x5300574882", "66309x1789973007871437500918x", "16x90116x4359625446x555x13108", "247406917x4357171888992977431", "006651276x48x50202945x1221006", "81x3x7x19346x515221x501443458", "64987073230x7205x2667x8216558", "7x68408871428809439x262437155", "3861943345x974169823969895118", "73928265666789437228901525801", "9572523621930x519x63135759997"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 1846;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> costs = {"03960838620282132x6x3x57641033", "244311447736037296870419122490", "67597095485820209906x975703794", "30531484814x490295509599861xx8", "679752x7778x410x73255547354219", "6537xx7279038931x0594944178220", "31x5x491260072x03865860x163269", "5x9319391x26519965405361581x52", "79x8365x59498491766582750x2814", "x51359143253951520943659054157", "72478x34446x7x3801664160x04x18", "31754699147760441021xx27x167xx", "57316x669369029421563842x0858x", "90868392530945404344x9824x0692", "36x197xx618029212x372195x949x3", "3995x4x567829x1234523718x30210", "1x0347639x7x7553176x8x73020346", "1100965163218x3835681723552748", "934746938x1225x829670023220419", "7625563494x3482292195x15x05213", "x13942252483060564417967269xx7", "35371x031524542778567159075469", "926544052013738855654005764578", "x059084464747465799628x6314676", "0409326533687806434177260x0286", "593x392234271x46x8457032131689", "1831x8699164354891065617187085", "658821036x409803212x9x43428213", "111702295150191914994xx80971x5", "x178x88933448410774703020x77x1"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 1868;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> costs = {"096923x82484262655618285467964x", "1x2168689066729440x5868128xx516", "02x55x9728266060x87111916198851", "763103x540114149547952548x09473", "9319x2408878683x861x257x314xx66", "495x5x7x403926x278384x5741x39x7", "x550917x7x115954908982520757493", "781x86445x0270x9868x858x0929850", "269x46440469369695054x973532391", "938244353016924257x5423xx0x3691", "87916310532000593x75x0x00909764", "7857x22x36330582430330267291733", "32656748x32x42x4x189236x7437674", "00482x24690082x95x199171160777x", "8047x3x434156139x056x20446x7x04", "x722900894118965638708909059888", "61x207x3443x36x93x1105195678355", "4459269233203xx55x9x443840x9715", "x1445362852x8862946495646933957", "298624612703927x58870417241674x", "60x578899850979582182x510996819", "170873822336xx1800322040656578x", "740x656434x51054772750561x07698", "19380565500x894624489956028x19x", "484150242327404973374x927167894", "98x74x2254x26385x83206857012035", "x256062x2063482xx4922403x435523", "x323248933166698829xx2821048x34", "x5198x73384705274988672876039x0", "49398x8161749334574757432446834", "0947326040444970142988868121131"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 1732;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> costs = {"0014235722705013x1607x0x689x0x1x", "77xx5127853x76650095961379111100", "14670x5323469097x693076005112253", "566476834056x86775743052251455x4", "62544948761111x7555431030249540x", "6007523928x8002x0341369x12989665", "435x209672x46438466629577744858x", "149531x13386x3465942111x0xx10532", "4x32407x168669316620569501xx1120", "37884282015483407213627838561252", "20743083405908x72015714650x88353", "433x89928702062178x3868150924821", "0185377791139464x60x4986474x497x", "535992x9073486387x55472557333646", "5902713x7x2798876892483179045315", "x2098x52468757864xx3511964855204", "50534365946x66x57752037516339930", "x38620011197x2x9023654x1x13818x8", "26974635729720xx56x6800x77681012", "5675x0x53285025061128x7786561779", "6504169154578337287859064163x939", "8x177x9997329x640586x3x125075382", "2512843x6088135642649x451x364497", "421507890807404x558260730323561x", "7185063628942968837x53881891x695", "9867638x29478x470399550314x92265", "2454342675151253x670146xx5820809", "002x142432348022613x1036x7496x55", "x6x752852490449690200974221773x0", "9x516466029631521282761769x3x107", "044851xx0x0350898914x94624439515", "x9650492283621x06872992298788946"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 1771;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> costs = {"0x672246079x859202654x58838730x16", "1712583589616660561344x08694700x8", "4341644781636657547124826x2815443", "x0711x463x50x52570681x3915335x090", "5538134033052761830221740462473x9", "9845276636501787879850x7675403686", "854x98x068082x55xx126551013001775", "3873931x93037x9492x8232616x4x1645", "0816293634300164422810474x0x00040", "462491788932x06762341177058075423", "019x3024395026564106x73561x628327", "396414640133220635010507x53x87x58", "x471370561x192576471721x34757x8x8", "87460512212x1640103x01928x3655959", "7638322038489x3x7690582266x659959", "996918991054208471660x531x698x075", "19089x2214x02x225x94x75x519300709", "130319xx77x828707285x751859626732", "571x89831x428381163x594x83306978x", "312933611x61314679159x7174017530x", "1154182805x6413x14295084x96866772", "17571156142346825756051x745x12475", "830281697204886855062393231x51223", "8561396681627773981383947731x2350", "255015793145x01x42888474091937291", "x0444x366850497766194977460028840", "972642414x33672221x125x9375895772", "53x971337x5522935xx28908708295218", "99197670245x873827896210187292100", "48712483x206025x140x9713684994672", "0xx8006843632831160571590x3345947", "44638293x6949998x39107696x9182702", "268x4020315526x913573x245x4x36121"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 1842;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> costs = {"05639624379665x97301098569844x2365", "7358463x89040554x492404404194306x8", "6562835614522664215837x31042443756", "7861348342x24405x55939683017658130", "661x4x5878377784141x3694138x341052", "023816766x8747500208813x4514374120", "2592228675305406898485738559x28447", "34440157648127441739521606x3742522", "022858094727193254121382x11x759561", "02945612201x3354184393050270x34064", "x6xx1626856661418509089x3416645288", "87935062208748576x77866xx972955206", "4363027668x97449086x0x141938144720", "83x844824x49931716210567x2032x0223", "76113854875583x68074x33767x8632xx3", "38147961x89572x111xx8x88x153496608", "299051258939113606x445399645756058", "3285316742164683032997018323392444", "x90848347804109x48747295x014578567", "398x863235927178086754x64962x868x3", "1475187608137522504270434350691398", "2844682290657356174461829015421974", "960881674972211952x3xx856007712451", "3x2509611069x54828321672x859609283", "42x202875919808788468x2126212x8176", "36634x935221023x864x20074814842398", "7771xx11177891x40036xx14515x215x0x", "8621265043035546319657x011658140x3", "x0x8893249x2925056919229223xx18058", "683330760644x632236815919603973694", "x4266800613x099416x029597121258070", "x1117890762x7947255545978929230536", "9160296461x9x219x923442x38x1519652", "5x4x5x6224064675049039564046756546"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 2134;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> costs = {"05853x00x915122331678585784x927x867", "462232860x68897x399774564x072265734", "9465219395065642283973276683x329340", "1524191x9221958409594x4073990915605", "66873693x89x8216930878x30726656x528", "5407xx45x0x884306631032xx17xx8445x0", "930x4267841289330829603565517661085", "862733449130x6035679xx310655x347019", "142202165240x5xx1939967002775160124", "57603318315990382435885284512x7x904", "143826333097114x171868735x101889512", "193869175943334581205885x8535747116", "234761443924268x3x3x809246699011964", "3980xx8244692x4x771214674691x06x711", "x34544639x8669077294432904775242147", "51394x28779x03863244415950x36508429", "104209630213418x12x82x7096625x7xx54", "634730639211053578x9009009554925364", "964566x256997x1231x2037040902110311", "464x46528x52085x760487684x0x014949x", "4374x854x32315x889x9x32849557467x8x", "8882379406730158097304906020x5549x0", "38912891319129711362220259694x39237", "xx941314x74926195x70330xx585163x744", "8175229x634064567282853868746236555", "078058680861268972017349634x6x237x2", "937823340496727284x8057x86325302631", "03x258xx786663559304957426460884896", "030760x80378x1511x27087442138377239", "07806371463x9384928780413x300700419", "33x2270096x8222259x154914701x764995", "317x215614x943x0629501x992579431372", "2x7x64434791405x8285366x57181726449", "x30867290x81418217513822552944x32x6", "209132515706x978x811x10580325276x31"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 2054;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> costs = {"035x258783329x017x28x008144854260389", "3690x811967x7995xx7379559106300x8033", "62660836164x0x1477517190648x7x079654", "525045x98425579874482396801019834602", "7x4614599925599727050391909430x10169", "8477xx4x569205432749022362833057x029", "319329229308579536925069003909x37986", "0695x1x082858164x8x699985868632625x3", "57917094591284x40xx907478983x792x010", "3441409082788623251811869x5931331x12", "8514x5870079360941036579871x24366104", "8079900866874658155789016x0467402295", "3970768x209536471391x2118x70417x3036", "177078845147233x96xx5468510830429116", "5963196071x5x11959086981943135387769", "x159x7x27505592705961727x440837x8763", "9697526561011576169x9781690313x30317", "367xx190795x7975688628752568376740x8", "2175973401928272905787x7857307440801", "2x118668x51825905278436765x228x12x40", "564431336x280744613861179x1375804223", "0823783x61711690412758978266238630x3", "1784139114x386x4x4xx38x751190x273649", "176xx224x196032648546872327320677512", "250423191664x804475858878xx71424050x", "27x6274319683360068323687830390997x3", "416855x4936141688838746273x982957733", "0508x93x16937496660708743x2283889541", "51104263229011574x55389568x405936718", "13x9x67853xx41x256xx20x2xx556680704x", "29856156750024572x9836485969x9793319", "543909707015x9440616001x08017460x106", "868491269132083748782022x78565632212", "9655806646268x72831365843834306x5078", "354x534x694734x383547881458304650580", "8713x9582843856381267x58483354715997"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 2405;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> costs = {"04552454441305633x1038668x449x1x18074", "059xxx999x36087425015x0412x0057x67346", "581762729771562163910979470457x212618", "79754789741734778x9751788622x32x53593", "1735x318231x3160503803473380x36705357", "50231770433x75x48869266404325x17603x1", "361x772801425x94063170214562031345506", "637549297x24752296x26x991504215x87355", "x12989221519466820223x716865247133710", "6x46668368143157767022997463398x64578", "28x6031x17618046776366748903319208165", "46775632361824x21442x2024904298919870", "21356917677328x8855846184142708x95778", "x0289347696245119x705305695262x3555x0", "413x7685839843550682x77055x9066906x80", "1x91x419428428956x355x759730519948738", "7422x67303675x1418778556x089125x30x88", "19629x076x2316x2019746x08x49354193388", "74669798775x2x6395181x428171789777661", "8xx968679121634x788403325857582057382", "43042007365219x499x26461150771x904524", "0x0x63363448106x5990105x83x1067589749", "6394179691059999587381x676081129x1097", "0209864x124009503876x972480x3x2974979", "291226754xx6005693x4x8317x626x4923x44", "260074149x9571x0610503070844x887226x5", "080518214883274658x22281416874x521x99", "6x031x2x569x72035966927783x139x60015x", "9667771953207710033433100796826967427", "2x7331x563x5x8x73998098x504808x716334", "9x518882381592931871539732x2930427345", "27346277x94901x0x214177689037429x6156", "49761675172x1530512471xx0x22x32612708", "381882097467331891575744727063823x283", "3x84197137912xx01517283x5843177263282", "344xx82656x829279983440x7196473586725", "2980x26984x61x54343143694973476467x88"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 2207;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> costs = {"0x5019539811219905392911x37x4263148413", "0337738104x43681x37660302253842106172x", "0121057273325x81650x628508496295370448", "x8313973526171014908627054082976369596", "232xx637585799854933492771324867414392", "264301xx1690848708x2615666132959194571", "x734897942x10367015x02857471x11x78x815", "79140x1899x214x1402xx2560683x64110x587", "81506004276x45381172800x927xx355457614", "740035308x23157893555345x3258453923311", "3996027223434270818x81x5x24x23373x8555", "5012x673003x8858x9401135591048220753x4", "9506416583430277x9183x1882x41642524590", "280691865597304526187717414142799980x3", "x592613084635260x09x41196057039528808x", "80637514125148947844570x9721429627537x", "3299610x424x87494345326285712999947578", "0804299090x690020839435407803480932329", "5x265x98730x432x6258531x62328642123x87", "1xx1076057339881350x1xx9x4481675146724", "7748549038074805x909552x13221517274802", "973152971761735294400255934x6236323626", "93x9039x825760728409x4xx5655611x028589", "8523580259x914438688996778172265617487", "06045x111x28x00639750580x66x2370180104", "3012197xx3303x4387x4x248849x1023268896", "413094223x0981x377x1361057793883061134", "59704495474093127653373xx07926072x9929", "7x73x678538000861x7893972823006859x925", "1x683x2x6123x5x91x11755x25299312423593", "98378046137851901661374242806232x98070", "4188x63015797345x143561627125656924560", "x06x43750662x3363682429076376550x41638", "6447025421162x434606761827731246x7x62x", "159x8048x1493x22206x0566581x217200x733", "22264xx264x0547225x44567323180006776x4", "292x3296909x045896x614569x535x94218090", "30545231x94x5479563x097646441031628913"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 2318;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> costs = {"08553696099441x06465x308x923x0x76126054", "49058671x501414363054767x55982x92131585", "x316x32712331214x54xx166210403507x64875", "83996854656918x330744700x66x709x4711909", "288279699x7x3400x743x277410615174826820", "7542715263x05340263018153x0156286655496", "25176425x581404524269314416191564039074", "7992162689111078373617x3826x3715815x870", "637184462810598139492x50324376291873228", "xx4239876267230746x44947205408x68292863", "73138351577x9x58770626136xx000092436871", "241176358362356027770663x98194209916x71", "3301x767026464680434x336822659749371248", "20767930410248662544261x7451x17945x0444", "x675192x748x65193580790x631719030598906", "72x654x81x6x079640508980x70044113854323", "36x35770404118x62829678115056215x873812", "3721386252616884853356520596x7289965704", "569x477xx112432349x429176694665x825x08x", "712694549692607345215865960191731312137", "579x97413515657490x340x091xx9930940x422", "38740914725xx7875254142534633987171x099", "095x5x3966580xx7901x369839x93294744x63x", "27x82x237x339778370x4038687630262566378", "2790307x79x844260x522054046294928344x93", "1102362717x032857813691x17x5x3xx74x7446", "1x5790558638x9x69709795889555x028696470", "2284x1550xx6259656691602x35765776110x32", "8477x9752932707041777097979327239255921", "69086300xx36861520x35233298859x16044683", "x88475625776804841262x6080x2141485001x8", "504649330231976494685637120297297362617", "6568203x79592x52885184349x3024033731095", "11593x168198609709965x90210xx9x6314184x", "023x2x9xx022350121x320990816165x9427718", "30x253123999382109491679529858106003x89", "26438117485623x314849x59464506798269455", "x940x13684x64434x986934x991199932595262", "3433441934x13x1x86453764869359861615919"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 2510;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> costs = {"0914x42122852545672xx75x335235938x06x035", "613xxx3560573074536543405208479854421709", "40807339247x6108x46x743717652460624x85xx", "566x04x04x25451x11749464976x5379124800x7", "340x301231849687863078375x57x2243265xx61", "x55967287799x546178672734023x0986186x4x0", "x2375796659478092x7487532558541325754124", "338204570026846xx526x38577066x23x3x72835", "3658234520321x1423x328x91x7x91x367202x7x", "202472207x81x57159628271636263648817738x", "76746x865520747114x4257337x074150931x2x7", "x465359410974x74932352x973x9x9280745xx95", "x30x54820364908180520401xx5x9x8352869154", "5104827x354712521335800519319x6000712x85", "6815955251x63572x875952x736x6x3273890xx0", "4840910686xx381798497711677429x4670x5832", "x158415x55586931x9357x295963x39317327184", "8x3515337064522549457362294x7452033x5249", "6339xx27127306751x1834x50214829608257709", "430073186x981454x0x936398346852944254925", "71x2x36210422171202829036815423251739359", "105569781271xx61130770x76605334694135301", "44x16594537784268066617x148425559414xx59", "x8685182x2183097x485860x6846299266185659", "012726568103165x03x90x25x762396x9821x266", "20094408265109x52x94708x13x0519x4072x214", "1x55xx8552927x2379561174x318851834241174", "89703585x4823355x68845030910839314824147", "8839686189641901087x85252700653521589804", "x56x588838757209904754121713x12987701x82", "6831x731x16x5x769486x7295717x48626849482", "679344x197348333263x87245254x65233443x62", "37726x4xx77688301152295x1198819859931556", "1x789x902184924x2798873x01x38x0851187894", "1173709504203x2822467909x71868843034860x", "899296564x91091200734346991459879x01x780", "90727359386x83947315259429388835x35900x9", "2105x1509729085461302578436xx78476053216", "423776413120155311817923650619x5x56x8411", "42x3528x0265941820xx91188841x56232560932"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 2238;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> costs = {"0273407x255257486810563566844561394665222", "584982520x2621x6445027304844x707087014319", "0x15x65290040824x170259x377790x634941516x", "506943212476883877x3202705141513x6x500202", "81x769x715637299055744x37417986891944x312", "0121126062460427x34294858128249494xxx8x95", "5556043453289948534000083731849x82x927169", "5993938x408435144xx0455397855650722988252", "904716x283x090843603542038x344868787779x3", "676379661x709553x408275699145768x57x1422x", "2x56282821x8x1863594328716130728592328279", "70975125363316x59116418763905554774248332", "89348463978925069255211451407347680088201", "88642000705x1x749563x546x823x5175978x737x", "650463916809979510205x8173522369794992239", "61xx522863x603517195315858585920x94940216", "28144413085x41587974x60306360872353349859", "x5x07380xx489697870818x825937833274934571", "85x945x982584424522047741614602116x648612", "66109464182713x52013518168832299805416618", "63x925505661229403x8x7x546xx037x875x32174", "644551198954325916020736x450739x714858342", "06398055061653766008262327349843941949x23", "85129472244x902757x682595904966565120x587", "992x830181543xx4125x187064x946038456x1752", "3292363891x0993006034572x4826527x801x1410", "14660x74000179355200090867776156x66076738", "x79186x25249x9333555954137217372131907939", "2x33x799x96x0987384x674769x6147xxx266081x", "55x7x10x477451450x68694218405671568086662", "x3x6637450xx1166529387570x2x837345956x5x1", "94317783548271x655214171624x3xx9x14410837", "825620x518x116176187220731630426x643724x4", "0074719994035030x375607x21547035784497784", "5682080x20817112752x4964251902353665403x3", "1040201114176x110666360503227194737494994", "x3866800709xx6963900038863502624779170871", "514990915189557399971181x821380498109687x", "57825409441784511x7471x346x80x69797433050", "1796533078345395x26049969x1138621819xx741", "5361098x25423938xx095x653302129x774626424"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 2855;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> costs = {"0x34x437798885799x5341609x1776806405620666", "36016568802x0982296x9467210199144x63207x61", "33687xx242x5387859585964605456708972671251", "598125487501410x0698x0846x04950671x487x68x", "965587068265019557x84859946x4621x05x59x870", "88874544837034x223xxx33075895xxxx373595277", "88210144x641176745875x8150983628770690133x", "884082x776058344x1610x096x12778x0149673276", "2302686432136451xx40388882875x107186451376", "71340019xx4x927692224x4977xx98403002345579", "299245877238612xxxx327035886387262298x9x22", "1674878826845540xx4768462340x9970x62446741", "54x2x092183x358897x225137911261516x6237x92", "5x3747524605232x6x3590264x48425119x6999514", "1270449966472529890x47442x7839182915203588", "84x75165048858x7642172901x19748xx79226223x", "68501xx92084899xx685505709109727754xx79411", "600488132xx69504726645x188021x79x628x64881", "26939268031300x150836368x175728316944x5449", "015x584890x778x76x929405997797x94751671311", "614822853428617x191x135002x2x269x346244194", "2x1x13069698463433976x046x9075671943250717", "359x947304869x8x73528975591705105287683031", "5171702982746x64429557073856310x0485x38691", "3271119050x144758x071923955913018367x00992", "74570479x08411277x5680863467xx2528x7088919", "641886074x196x5175532626565516x59454391xx5", "9372681x1x5060x6359762550x510986x961421804", "9639455215684907410297309x50x83689406484x3", "902102488172888987370810732420161131884317", "x989360620779645732047229x93175905x208x7x3", "85370x681719590543x6x9335577x47634x570x0x3", "509178x447745903x09176563047147x54583804x2", "39504638x306369888x87753x00892016x17351000", "733555288x8709990946033x1x0229895522842305", "9x6747823577119814913329955x586x2518526083", "30xx112846582278324x197159233958x060319xx8", "5x40x75557x8x246164603690x4x840445xx484x14", "795792x193x1x96495726230x5747x86724349x465", "793290x611857x9x152430834822x6795647831736", "90980xx69119627648640014588409x635x285x199", "76x9542715649358916x537513056461743x079x19"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 2235;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> costs = {"0944843x17761387423920x88x9x6x7189853x68494", "909294607425534721x70x38245699610499647x723", "041191x0934190x943886596040488120638xx865x8", "1x58794x0547x530082923719912950010541432969", "52402xx005x675985298x9xx7844037x19208374866", "4812259364x198x83884152x75x10x228x6x549690x", "506630485761908x62383399108572x568808696616", "43578333990083630868x8837319x02545149598627", "885561x491997195531605007801468623109325546", "9x868x0490439x191560774968423035xxx33804759", "44951951575332618xx1347371x7589132765951182", "39654237893x684x7x14029028210430635x6612356", "18719401319230751061x192x07311726x918090x76", "23913351792687348022734x6810x17974374400259", "8286018875153704488423364947507741574291189", "12966642808x04354821x4x258451x3069894342169", "77173831446849298115323338785406892296x16x3", "21xx219401495743678952160x168x8x18429110940", "x243849075584758923x843570188x577387928231x", "194627287557x84079201280xx850843909477012x2", "607936x8x6715215305709942x36147x8732x76x5x4", "113564x909188006026458716x5019151301689x167", "12934326108224171142x13947545x701x8815xx019", "02350335488303x9x14766674202592130x46615x86", "6260698100186370203x73x8038x79606x88850x654", "0265x51273186332461392093897700974x743x2243", "54223667x96x0x090277888248017731x4953889524", "70395373599406502x1605699x88558x931x533xx69", "x1910523672x866456x119766304273709x31802530", "91x53902x615724539155354520382993731448x994", "05946873474x9684068513635465481x19205415x71", "247525639092758814x61047426532x35291873500x", "1279x356296499132408347741687x3391x49953722", "303575175835977459710909xx08992230600185980", "02447621486202x8021508x99484380502172684960", "x0662940242930x644921221859457x2935295x0366", "951x711707x2933652948610363x30331182078x529", "x4945x186x08819933870621x220xx4086738756339", "802845x5329x970669388067100x719998x58872935", "x4512499x46700569056006xx844556460417735883", "722443803557711749134x5x5831497418708116x66", "638165833141822x9962779016358988x7450x74744", "086171085737155071804x9105x3543476473914430"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 2985;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> costs = {"0x1352259887442x8885583386x427705953x9904640", "4769xx27824167988774093402428654393976450284", "3279x0251984950x1009555x0x986593399370863x43", "45043703x5xx6430298798408692068242625x96099x", "0062472x98014380414602789x830x3240845742x647", "79031x0545406527633x49842038128458649xx44936", "8x33101125266x0095504669x10902x3x9018x014377", "0xx2524x10359179x11282955x350x0445x069x95x30", "536766736203115xx299496x2702717443192x607239", "50110x34x3110563544x122130051008517063401545", "6952799154xx4512x282102120x416322310947939x7", "4761986x546703638679805x8345386997840xx67155", "71612x6212x55050182x83x356966825431051734045", "50134899117657589020584306196587047274899611", "59980x52739567703711988068328602xx4440017952", "346623278138435267x92363604420x94488916885x7", "92609393802134x27958833164249301219635347286", "4083294x751360x43803239473601141040681269358", "04781x00023x55xx4706522003512x10573665068892", "5848916460271395x548713207x670x41510x5014498", "88731582x5628084845943425273571713x881x0740x", "540378x616x34728704x23367x7001266832x9101246", "28200830942015743648949644526340443899x6499x", "898966819608321x849x6330821659480xx929385558", "5x22963085952041xx4859100508627399265770x0x4", "8x268x15218474081175777x607xx116989533847427", "x333903931371300894224063110084xx79406451927", "472x94823x4612x3636xx61035731357497503933457", "21175206554054229632691737x06x15796519676462", "251704374843x118654954415x157162878366304049", "45884x89x8721296x28x3x32441x67459x20x3288094", "0401561x3649xx5657x158935641567645790283x060", "17212125667229172xxx8x3870340317976334840122", "2xx516709839914480709454148813470952778468x6", "52535x53420778460163018452233354556939176782", "5148747607x23009676779x06328xx05x07882889709", "47xx7841021129x1x837198703753156898811913150", "70711x71x399400657464219x9319927828345331x05", "31623701471113660863371203789x849345x7431628", "75x98800203740xx896676901x22656x7x4559835246", "x0587209723x4183949696611567883567751709218x", "1xx60332x4724597x2053x11706584x49518772496x0", "9966427332493802517918687150x67236643x503749", "2471079262228275754310759x2397261xx5995x9733"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 3037;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> costs = {"0778117577522375855950325664986764461515x0201", "x86x74475xx2x106x9711482x7x0063895038434x2xx4", "2543688932187394636x9x5x2x9419515205545220x3x", "58997x840780672x082x366472x08736642191041317x", "447676x735559134848819486784547x350260164229x", "09509777327940844116467864x68314673x0666x1775", "490798431283x80186862153674678382780506103685", "68086713526797276067729038423252212631200602x", "99x741x69186669159823x4376771347x622282629x44", "0836115500578950278634252x665x6720x5340171762", "x537168988548x3462097028x6139xx940384x5315338", "28561770x89xx1238134772x880314018x651x1827015", "3770051179596779256x38x44x4374124x1x14501x70x", "52x96784341147556183x60x795784x90656963241647", "0x663479138330x4755541x444x59542x7413200058x1", "46817x8607493x73203857201446x22x856x865428880", "634952167197817447774446322077x19022208286003", "9277185049x529393499220316066x520312918x4236x", "737060x069172x112238206364579722xx7x61587x587", "0584775408085309222312x2042741793229967154127", "340906768187301291432073x83965200518963041317", "3105374946641698037717205449240738xx0632117x5", "6108x32010645937196934x293138423486332210683x", "981422x44865387453452485433454598x54155443077", "x14603702080x90666589956x94444881360676204621", "70398x6530709093534x99818985210x5x160203x284x", "50342103620950971x482746572145477325314047339", "3x66717240108x279649x68894601344x97721107163x", "545664419x541814x647x007120068332075x99466540", "0819297486937x713053923x2898825796227629x3167", "340091x6635613448374602747845546412612x576676", "3063397751512364677654669x4887x02710x407x8867", "51284496382321013200265x003414008657x16375x6x", "x576467278667484055x3933079976x81x69453204196", "55x26462x25x5317x1018xx2012221679349642421756", "x7507764x5530979446311661909x9352899184140582", "x34262923853528949200x85782077765x60731046482", "13249x709214373x82997747x546241362x64012x9332", "92x588524093354677008292244200351364009640652", "x5x40580167111499x8185701407011x8110550354316", "836485010115xxxx21159578596x029x22440526x2597", "039196699x0433460x17x335063087313055626768077", "3xxx36xx74230268932x3559331084441417924999837", "268x8109206338822730909596879913757x88890x353", "59583768355x8353x8x360x220x755204747549138981"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 3391;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> costs = {"023041x366145160175795764x567325316x2x28577369", "36x734751x43087391530x3395x675894061212x110x66", "7x318290x4298039790870x3x293x122x855x467570106", "8854x25x918954044442531979517549430x3369691x78", "137354x05653x515x007653068x9889424696107324325", "7x2652xx5264598626337x31421944124x148908x90868", "5394928381213919838590894411741010307039909x8x", "244159x46x972404x3810331932851x815x4501122223x", "6x14x939178x97xx451083677733134454442203969529", "738898591804187805517725949852871886x511x41325", "46218501x3029x55117x2802x6800x5726127354806628", "00x464681380x49030x684522963900581842207104400", "1983x158170x8484377858317311689215096x0068383x", "16927628005490365125885x4200966154x48146263454", "18433949328074x5661077621912835283x46641x09064", "7644262219160296025026x748235856x5827918522xx6", "123404117991262489x4x51297xx325811x1x273903867", "x589725418999618279065243810025217209167211191", "7851631x67x615534824x95430714193955928x9987930", "326098x904265071x2xx8x08x74x4254xx5130441151x8", "66071x543180672x58224783201699678x925609447x23", "411x75522585728322480191xxx8x81481803x58835184", "74024x78x6x4437508598xxx2260085xx4374799x33389", "7869017061113x8875323x398692x9376778599x796958", "78900994075655404125367x6935326x849x0444058843", "4158x44997x559x3697194429990102281x25296468953", "613068570148943585536416324187033059x243149987", "7697807966536643687x1x2x92x464x646x97029970260", "004888203323662x362035118986584229150701459718", "3004963687130161535001493403781263914569039166", "20x0422969035418x1888830xx02143806412278553211", "3359912654548x182571328x94x39x9259851354719659", "x926349199639904384907x4053801644767x4786x7297", "3213x8501426688674x383x1x514x525x73959x1616344", "4770211771148183x2035007470x2626x9x97343437x39", "xxx7495929x934332x7428861667072322x30x2x359811", "11867117910783611633701067466x179x617945098221", "157x4840527313032008x835044744x614x39x47x70030", "4454251x66772461777580x52567611x41397x48841x88", "2x2705692x523816x8x50811x56195452295695x938153", "3xx9517436585813599355513776x099564224x8961784", "46130112x825238x04715215x667084920106049x28x42", "40133792x3064983689613775576xx1914229424385302", "82380x618753622223192x404641866097848x3x906931", "646xx075217420948x7310998849534815704831476060", "3630820404014x5x858639884283871317310377714870"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 3090;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> costs = {"07947375x02232883114459249xx5171424746943xx9730", "40x16092x86x84522x484962321192831723593250429x7", "058x7023x20071019867886206076409162x72402663038", "7058x704943290265621050163751299917163716x14726", "023375x07981350913525084385x1211635408569197794", "76x321539779474774628x9995x245725609x6707011958", "16688487887x482463678792xx55xx98184988803131451", "243535xx1390705582576721323979161277824591946x3", "74828824x790752715253200679237663921x1867154x19", "x82x8850x564503x9746255xxxx38450x275x8323227874", "581x7465705465x6671538837731564041703967921x064", "0x735596483841985x431808908305713662852x4276533", "56969048699895x4446x51637346x807515762594458374", "3266555068686379299x295x28855816590348717780241", "736969x29427398954398152x44325x6375124780584201", "893879878xx906732985442x00x3234x811216084x37560", "16575519x179x45222484685627x7988746582292547x98", "45445x541578968986190x14502467x7x4x618x437x67x5", "x865571658289721357x837362917514157834946113x78", "4610xx9871950538x650x9790x026603118488x3762x940", "97915xx249991665276617173x11066x837908x457895x1", "3163x28206688319x341833851479892471x04253745420", "825938024833132889298111412474995922x0913675x51", "507020921x55915x4971x075384490x4461750x84943047", "889x744x68313822096773795563x114905936145415xx2", "2639598884968972476x387x405x2291201628352677009", "54x888152xx9605936905x2337829x30723x001x79x35x7", "98570860319319008542878868x68592632778037314142", "60925x657x966x42538x822300844x34661500076770671", "9599806006xx86389546x939191275x800979097x05x945", "29542255356588xx38x37281943458413712x1963453173", "49603x7245x322x126096197776704x1321072642955181", "8938073x6843592x3x1x021297x752564x1x51326073972", "76745206627589x25228x7737x2773361902726222x5099", "58x033x84970267829305288x8055993407x42940696635", "x76078730648366x218x0354419x5981728944177756896", "4275637390520765121x789294780x6698631x735820506", "02116x72x994252906x841600798xx048161141x1206451", "xx73858746888xx92x05894x86x6113274627x01491x777", "20576368x241410348x74238718x8610090x5630x475581", "x4943723927867431501223696x61670764740391998412", "x78436608806xx459172x8x16x4318057762232x7041204", "4229665x60490x0x63642976476x53x2969876x12700447", "902868715063732716x0519489501012087840288x84792", "2750x8572820714424x214433224867x66179x40369x898", "731x9xxx0876xx2x5035280178002113154387232842178", "80x79940858496911831965x7441753714231919731x123"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 2859;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> costs = {"03641610039791128792152846xx12186984545x61733247", "x9144279213336551x1x11751xx080xx29759566x5008946", "26017820766075065718x5001578160x986826x895315x39", "532155x64x03749x4x81362x5x87x226695433x689204607", "35872362x5x4x94041467402xx79340135142347078x31x5", "881875475709x38087770640592x4x836318964646333733", "809x7x03751229127xx3521814x100826747347094297x72", "3763817x268x72828781042786151663595x749635835x02", "2x89991x67573132953305x47x7090280x30xx6x482x10x7", "4x2211x74966x0x0891942122607847x1479031177585x39", "x109x418441376308639x4394877554823270x3232642028", "xx997508x4x09x07537724482609088491485858583509x5", "7018858664809142809262x2857405113882x858x8716685", "643794306x536955885x79653049634001871700x8546721", "456712703xx521291215323x99119931x9898149009x9145", "x7x5912x74244432265069528661x37797x073137235x816", "x81x396593x42041x03333306x1831856649xx791394x931", "x292929870636x7xx303194873671300x350974387640406", "6636060195729244575x798x9814921x233x1126765x542x", "8771196236663670xx34507675632389716x678904417530", "9110101x769x0457073307203669x82372084263891539x6", "958854086391975x30x2x95x554194462023120524383927", "x737361x3829189711x5264x499724294852x204274x0009", "824931124635243x3203x497754236577414707248x16602", "62154983030625416099320525474788x345x9x569012813", "5514x9020485731764xxx38x62x68067x8x206xx15261x67", "17157920736750461957724859665x4135x153031404x1xx", "71998932126x15402398773769xx78485828233x64673727", "x1106234357723x19x3424722048927940532778x6367083", "934118582930949xx6149820433465858275007310510530", "720x21562654x4257560553x730190x1002970759093150x", "6723x27080544x6x28659228x35670725745538387486x42", "96815x212025x974495547x9x5x1x0x96736x08x40141302", "76xx59xx32400651941x8x4223716923x1x3699402529310", "4415xx4558988941605885113497216165643xx13080881x", "x087x9x993357024459304x810x0552866x10x0236045643", "3543706711x99875095181026267133662536362650021x7", "0x822779434183372x2x473472558xx08x6x03609744070x", "459259xx78x1280951265938182476701297599977083024", "52191110x77118232766x60976x312xx6228086974397349", "026787437772705740480403492x54387278890612xx6706", "40894637051891281780x137597x91723942x6226031431x", "432861163241252919x6636224238x041831x383826495x3", "49840xx2482070662x67339577080166x362x8xx14815578", "944008701709577678x6009883793857971159944818815x", "846xx054224x97021018066714xx331x44905x2696995092", "481287907061492x355129x8x31779041xx4631487505421", "8x876142063446x3563x150x4xx78x2664710x28x4307237"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 3164;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> costs = {"0698023477896606x2235481563x59345762591987823x663", "1x88x8338355814562x2096x7x68546x18x54xx1077xx5131", "64343565721335639575x18059738478x156x781476124780", "2139850139989209547489708x3466104x5x3979260330074", "15316x57171x182167994729710304x24339370252x2x8846", "459x479948xx26916349194540891252317x99x4329x34x91", "96x3631804253899x69460666282614302698504342364742", "4x41693527443x7987953128673046855x793298x8747219x", "7735427289436x56129435153x83x37703808694432026643", "340x973216747311x970578x9324423865921864682853036", "x1442314831447x860181542569525471281x762734425650", "x756258910x0529918564126476x481206117984425792x97", "467692076x43x91258xx3xx079x34x29xx916574022682343", "9307x08x451x2882604411x67995x333x045x0x5xx4644590", "4x9x088309856x342242x12x79x2935566358156323631235", "04596921625156134477422x2691011895x8564609x837773", "223x353086929x27222x48467846970564701987061975216", "x4x5887805x89746997xx1419x758406034689902x6152567", "20573059x699979871151x444449x5170122650576586x898", "683344308229681464514453186x51040742xx138x5170x93", "1219892x9407xx63107x24x4914598xx4x478x31485x69139", "856756530006196x8722179365838x9037411399x41126560", "73012x9290145x1764125785844477355xx827269976x4x56", "37x95684445661771730x80xx2x459547x780556228951360", "54532923632041379753304212490929413x377x204659874", "30801x8716360708478705081091961915925276739027360", "5x74x4x39091353819x10x433010250089676063173896656", "03x07174x648272618831383631629x020633861270224x38", "855475149124358107x635160129488205151x45274x18854", "091902044504xx868401923845074542x50x143161647934x", "71215871802698346x390x2570413992678429588x5866973", "87x4538137828472265480468315701832x24590429832627", "9479550007750x658x618193862x80317248236583631x846", "49802902x511965239855908151316389x972x253946284x6", "053078091010241324x8166428x1x93x83809001454563464", "2176345x693826342x093950x12x7290x1186505760xx978x", "x9244898104910492948x2500050208763770568x92514431", "6855xx7x145213846746325656963x0419064369747824511", "88x15690xxx31x20312255171137133511507008114887695", "x391503034x01776xx30264908792724712819642x291x750", "17x1921464904885298x58x58xx174x7x673958x9615x9230", "x9217049564455797269x484428813681307xx85205112873", "19360179004x70496337008802296x7758386170452xx359x", "5057547822326798x0x0569420173277288269x486x582463", "2287970x0x474635353111x85933x33443884726179587xx9", "0x697597684843071327073893661811597376x4767247755", "668920978869307x17435748153x4233659379063530x646x", "0019868300350499779516950730410231x9x18749463x537", "00508xx083203827x42144x147181308668x3192478607467"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 3512;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> costs = {"07x86815153255120455303828703062497056778x61268187", "79833x2966550x61385x8536042x128x26x86x330174x9443x", "37x879378x44x41026xx0x774x613367370937892x81996546", "x23190x7095x32259719663548535783071090242971561760", "76338378x675067623822440237307x257x3x3158321472473", "47475369883772723426272333955044282431162702400361", "65275084x84877183338318x34073733x458115235197x61x2", "x9859625716604464303214693762083x25x7199518x039x7x", "48229997x70x9630856975417508x790232427xx3985397970", "108200990259053381749962576x4485066737010571378659", "71466x813579396x728192274804908347x86423817242x9xx", "71x3203030x934130877546x17988107227842875x29921873", "32194817833165714313241980945xx22909413x132x546928", "0923821510322394x6146296541233552767xxx8385649998x", "1928080798535x444662195230995499044x61493217374382", "14749x5841628xx8698x9758895700134614x1630568576597", "78386x5591922xx4x01582781157469849188x165764910391", "xxx763663x6364713087664313620988397558695606391299", "8x999408774155x0722767067x2x5657257006260949379358", "960915340069814394977x072538910124985896407x60935x", "06634x4x4285x263132376640651109563x6x3664835723960", "0x33167589899430392278145723234203497462516053x63x", "54592312950xx413xx382xx52618454646745x028186709194", "905091121805587372774225869xx2x6540x645x9838690865", "496393459124377692702020x23x087313764346x540836690", "xx2927519024645191222185x24x59014428000x31067x071x", "0388681151643252x73108981236x6600833959079749x7x0x", "72712582445x89952304805585785768x92161554590798598", "600601240764636x8780x241400x8x12xx211962878x17854x", "7x0x2707x62421136x447381428x4274288203387902x35648", "52878x80695259643276441232120387102x35742566635954", "338860125x48xx3x5851680139753622127188066877965x36", "2565301502814x8643721x22006x879x4591x2xx761035249x", "39647x9004281801629731814xx13589331x863x879x360x19", "605386x5315x74x08954x55705096649520691x19714441710", "2792x4726350209872403558x61x4x85566353253326764129", "31982597447191946xxx1952519x2172513979335450658709", "946002657065x36427171976734x2880x1536720x622455410", "408952438100254x6x3959441608906x452368508926209924", "1023405309644932689605169x9600579x85450x2639087055", "778388082685004x57x70688x1x72786206225985922861950", "3x2939x0535597x0748893622687128836243964x612401411", "598x06x901961156809801430659822x92x2x5600x57518x0x", "868051xxx75403x834890003720801833x8058663398653274", "x9x3358731690566893719548xx8799202737816382442x393", "92908x5284x907566801444650xx4x05475037567032x72444", "14183545x0209056x975627716435009895560637474479133", "2092978248819539328x7x244x0x655134818x030958544103", "437163168284438661x0712xx4450653x66160924397981924", "772687884318580024394594398110898347427481244x3430"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 3418;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> costs = {"06408272131575405549734341363466591564497891603882", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0", "08107755718975572652313895564686295730139224199750", "7xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "46863658521382954853959405888021477749179137958780", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx4", "12302020823323507855453746503796479337044480078052", "2xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "00180539565541257963686722108661654468680902335349", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx5", "09801102862780814176432242581463982549910753243267", "6xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "79762778138862917519005848711470961447561554724980", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx6", "90820679313886244967568225354681090481106814269827", "3xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "53794942745795900860322796090372725230071143885673", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0", "21117298972229140295974625538195366804082644862894", "9xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "01431648415589810139725780540967379627064427681525", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1", "78976582093467182669594143580955917400358389292246", "5xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "80369563975993376583861950552497207631837348375514", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx4", "24810753530564807077221039674167730476677200716758", "9xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "54612989272727098183103210319000593664577850891366", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1", "85198249001216143111636528721187543905824628952113", "9xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "55689029599625247817392199880329843008711605253929", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx3", "34517853710917292350232028861174017033936782536890", "8xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "31809643692779839390962631523964961544190530808165", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx6", "84483934763323564249192381246207803008831823462971", "4xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "25705230064243683959502476815476276406325064703291", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx4", "30639746964102827062599578702477111060764363205605", "1xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "96109746698899972399700247518279872900677252422653", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx3", "08916063845854149119844348389108792971876777285726", "6xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "32462394829021857277275929492946005509961061571333", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx3"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 5819;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> costs = {"09999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 22050;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> costs = {"03656040204174531549935511096232340772033601518843", "40772683656406522830796684066046451128714348879278", "70147041967605928004950074679378240977466338378024", "98149811188002809089918854561228089880783780344218", "44578022180308659865659867675461575394473333549391", "75102917535865574488470082452856102549713097558461", "40761745913343741188433803265898566654168112245931", "69889447454226032435506327637104696413313562194104", "76381703131671488957626917070551846167660915809827", "21824821972277621048504449933988332083035827861173", "19311443440728218907680622988887102552132958273848", "96335912859780105411084013431814356422976681738019", "29638080801742004880594857506845657082775820496867", "28366182805401232141319703886635612601028895364084", "60921299980924622397113053509684798700877602405467", "28955424292450856602615884202876271860125493253685", "38659022786809393693307031515142517723412133364995", "15582809217739266967128336967099281173445060731235", "62564522710465282695015652031297117746294099617279", "71027030708951439954873986738080089140848792478046", "29978121421661448455822994302150695644767515880355", "95989720156911408703793655828515019994705883791688", "63018162280319602876309211450555464362901337790679", "53436192645554396250027034074246472457077207395941", "83461323273697935390547444665164991883349415555199", "98122118937192958690638036453034871854322444726571", "61846638484391950271454135567042072941242763880671", "09612151863094311596231789450574015504360161354955", "24317120632402630816642665970487299828156050010078", "19284272376845045867938418904454815831930236316182", "78015652158593103614913415813029122417676941516913", "84606550593975375521065794888848525911510684437993", "50828313509891392604015726783783434519568476602763", "95710467290218592588445757602071652201177676023801", "91429193429267989421850019574305206781717040484722", "34934921549109224321802234587543233740627324367902", "52380575888141147708382976119544455388830468458608", "67315164244047759950574707119562786615493962617247", "21577583104804422009694031627733396147192445350008", "99690402126526310205979607772904018997491333208139", "10081176390308413566834433610098818611912662126808", "16961895486034555417759254571636113082913372830813", "77234385968368605644787816601801271684248468711329", "48247213832529083615025124309119151016406754014159", "50930036442193842625895019426452159489087509224247", "59125202516850707710563827895410062616584737709813", "87218390478693892112229149649490219378836978777790", "06070256047864728204938845956882764762150669238344", "76629446988221412427695359157169186023256632099064", "57066199698279834761871960315938671301915319923509"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 10896;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> costs = {"00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> costs = {"0", "0"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> costs = {"0", "5"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> costs = {"0698023477896606x2235481563x59345762591987823x663", "1x88x8338355814562x2096x7x68546x18x54xx1077xx5131", "64343565721335639575x18059738478x156x781476124780", "2139850139989209547489708x3466104x5x3979260330074", "15316x57171x182167994729710304x24339370252x2x8846", "459x479948xx26916349194540891252317x99x4329x34x91", "96x3631804253899x69460666282614302698504342364742", "4x41693527443x7987953128673046855x793298x8747219x", "7735427289436x56129435153x83x37703808694432026643", "340x973216747311x970578x9324423865921864682853036", "x1442314831447x860181542569525471281x762734425650", "x756258910x0529918564126476x481206117984425792x97", "467692076x43x91258xx3xx079x34x29xx916574022682343", "9307x08x451x2882604411x67995x333x045x0x5xx4644590", "4x9x088309856x342242x12x79x2935566358156323631235", "04596921625156134477422x2691011895x8564609x837773", "223x353086929x27222x48467846970564701987061975216", "x4x5887805x89746997xx1419x758406034689902x6152567", "20573059x699979871151x444449x5170122650576586x898", "683344308229681464514453186x51040742xx138x5170x93", "1219892x9407xx63107x24x4914598xx4x478x31485x69139", "856756530006196x8722179365838x9037411399x41126560", "73012x9290145x1764125785844477355xx827269976x4x56", "37x95684445661771730x80xx2x459547x780556228951360", "54532923632041379753304212490929413x377x204659874", "30801x8716360708478705081091961915925276739027360", "5x74x4x39091353819x10x433010250089676063173896656", "03x07174x648272618831383631629x020633861270224x38", "855475149124358107x635160129488205151x45274x18854", "091902044504xx868401923845074542x50x143161647934x", "71215871802698346x390x2570413992678429588x5866973", "87x4538137828472265480468315701832x24590429832627", "9479550007750x658x618193862x80317248236583631x846", "49802902x511965239855908151316389x972x253946284x6", "053078091010241324x8166428x1x93x83809001454563464", "2176345x693826342x093950x12x7290x1186505760xx978x", "x9244898104910492948x2500050208763770568x92514431", "6855xx7x145213846746325656963x0419064369747824511", "88x15690xxx31x20312255171137133511507008114887695", "x391503034x01776xx30264908792724712819642x291x750", "17x1921464904885298x58x58xx174x7x673958x9615x9230", "x9217049564455797269x484428813681307xx85205112873", "19360179004x70496337008802296x7758386170452xx359x", "5057547822326798x0x0569420173277288269x486x582463", "2287970x0x474635353111x85933x33443884726179587xx9", "0x697597684843071327073893661811597376x4767247755", "668920978869307x17435748153x4233659379063530x646x", "0019868300350499779516950730410231x9x18749463x537", "00508xx083203827x42144x147181308668x3192478607467"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 3512;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> costs = {"042", "391"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> costs = {"011122", "xx9xx1"};
    WallGameDiv2* pObj = new WallGameDiv2();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23031806&rd=15500&pm=12579
********************************************************************************
/*
 * SRM 580 Div2 Hard
 * Author: Andy Y.F. Huang
 */
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <complex>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <valarray>
#include <vector>
 
#ifdef AZN
#include "Azn.cpp"
#endif
 
using namespace std;
 
struct WallGameDiv2 {
  int play(vector <string> costs);
} ;
 
int cost[55][55];
int dp[55][55];//-1 not possible
int rows, cols;
 
int WallGameDiv2::play(vector <string> costs) {
  memset(cost, -1, sizeof (cost));
  rows = costs.size();
  cols = costs[0].size();
  for (int r = 1; r <= rows; r++)
    for (int c = 1; c <= cols; c++)
      if (costs[r - 1][c - 1] != 'x')
        cost[r][c] = costs[r - 1][c - 1] - '0';
  memset(dp, -1, sizeof (dp));
  dp[1][1] = 0;
  for (int c = 2; c <= cols && cost[1][c] != -1; c++)
    dp[1][c] = dp[1][c - 1] + cost[1][c];
  for (int r = 2; r < rows; r++) {
    for (int c = 1; c <= cols; c++) {
      if (dp[r - 1][c] == -1) continue;
      int sum = dp[r - 1][c];
      //go left
      for (int cc = c; cc >= 1 && cost[r][cc] != -1; cc--) {
        sum += cost[r][cc];
        dp[r][cc] = max(dp[r][cc], sum);
      }
      //go right
      sum = dp[r - 1][c];
      for (int cc = c; cc <= cols && cost[r][cc] != -1; cc++) {
        sum += cost[r][cc];
        dp[r][cc] = max(dp[r][cc], sum);
      }
    }
  }
  int res = 0;
  for (int c = 1; c <= cols; c++)
    if (cost[rows][c] != -1)
      res = max(res, dp[rows - 1][c] + cost[rows][c]);
  return res;
}
 
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/