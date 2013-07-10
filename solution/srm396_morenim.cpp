/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8587
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

class MoreNim {
public:
    long bestSet(vector<string> heaps);
};

long MoreNim::bestSet(vector<string> heaps) {
    long ret;
    return ret;
}


int test0() {
    vector<string> heaps = {"5", "5", "6", "6", "5", "5"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> heaps = {"1", "2", "3"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> heaps = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> heaps = {"1", "2", "4", "8", "16", "32", "64", "128", "256"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> heaps = {"12", "13", "16", "121", "13", "14", "52", "23", "1", "29"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 27;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> heaps = {"50", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 999;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> heaps = {"2128485358", "1992373084", "174529906", "262870535", "360254783", "1682124923", "945624172", "1897230586", "26609193", "1412319055", "2057060638", "275847260", "180619818", "2102268008", "924468313", "628911214", "1494816820", "2006217182", "2139902124", "26102161", "334986831", "211230172", "1683448218", "1622934781", "605963119", "1347434603", "683036448", "2033069731", "1693598611", "2115055746", "1143765350", "1690387551", "1359829534", "1439111246", "1563166915", "1088438881", "1980249721", "1970276542", "688356855", "547241181", "998586089", "1792957522", "1561661091", "756575984", "1233151405", "2041400613", "489097739", "269052629", "433484891", "1367491127"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 9540494871;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> heaps = {"715032478802", "131483040129924", "7538266315783", "56394011988", "339154974295", "12411256679802", "5228144295401", "289222894917182", "157740627681", "182552155023694", "166703138816539", "623642097545", "2602275613137", "42003207816041", "174971410632683", "27758959630825", "61962280928489", "291503061210797", "206523265222066", "1883339817717", "32335511122926", "7644322310361", "249862568716607", "12772476419261", "1726392465681", "14443205608479", "202561042229634", "119393102223938", "17299258427690", "124183227330101", "310781745232556", "175032579318294", "230702074921814", "62222195929211", "22432385230405", "169931660832004", "13945302162516", "22383006416363", "322471050330445", "15581835023010", "140571523722267", "236342735817575", "3747238299304", "284001154431766", "260291881610238", "19749311496911", "25717463484", "2734941051478", "29787661422499", "16951208664257"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 82111475472;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> heaps = {"1", "2", "4", "8", "16", "32", "64", "128", "256", "512", "1024", "2048", "4096", "8192", "16384", "32768", "65536", "131072", "262144", "524288", "1048576", "2097152", "4194304", "8388608", "16777216", "33554432", "67108864", "134217728", "268435456", "536870912", "1073741824", "2147483648", "4294967296", "8589934592", "17179869184", "34359738368", "68719476736", "137438953472", "274877906944", "549755813888", "1099511627776", "2199023255552", "4398046511104", "8796093022208", "17592186044416", "35184372088832", "70368744177664", "140737488355328", "281474976710656", "562949953421312"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> heaps = {"2685212194159"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> heaps = {"26014300468043", "315552228025222", "2973038132510", "22447226711081"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> heaps = {"19890181702070", "173663565197", "233022014814862", "30865172821712", "931901722017", "247692898515177", "50011756019922"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> heaps = {"18040273021370", "10796316167187", "79421966911844", "172782230121363", "1524519018867", "49161279729823", "100042365227242", "23397171493801", "154602937320002", "249481761728472"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> heaps = {"197271617015413", "118861648411717", "24679810226126", "13853035026805", "27742742327031", "23216687425904", "172792525429984", "115051339017638", "6778410618793", "32165231522274", "197161931116858", "226282969919061", "156051708929715"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> heaps = {"289052718131061", "6119840712120", "28144158776721", "201683228731101", "286726555971", "26653248027236", "264201173632535", "24801925518485", "859521254269", "228623069721952", "29984302694531", "86842114612768", "176451608315398", "129901277316815", "138351343627894", "310731074014565"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> heaps = {"30645393613568", "3194565915045", "23061792028263", "462298684952", "225081532332190", "127422993431727", "209272325116111", "28261109233876", "310661379627641", "27847737420421", "2528813548144", "10184334017276", "27661521511", "100922983927918", "162011528314311", "112832203715234", "110253076132425", "3489163926804", "315071207823842"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> heaps = {"32298147091593", "28528336716252", "7351273769769", "3156039455699", "123561248022440", "9068456220739", "194693019631481", "154162270320694", "219432051910063", "29179488418795", "151072511525362", "2429207871903", "26629805930670", "119071826618783", "41281391816432", "11131679321544", "274311315613267", "43101363416166", "300813161918381", "51991350911098", "2383373319523", "3683265118426"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> heaps = {"24196190023688", "76791917515002", "1552613555940", "2916656819370", "6931829728181", "72382759010231", "13172252784843", "322101152611890", "14840110365189", "306142567611633", "1211424634889", "203411819213593", "97191144717110", "142261518619644", "304001068222714", "1356198430540", "21710293744189", "27373188615941", "12151963811304", "49591253731801", "186762453613234", "249632495217956", "14298288512876", "23813576123919", "4716231679916"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> heaps = {"530442597987", "8308500424638", "740160523061", "259012735611391", "230561913124878", "313152311823054", "848821505032", "22734191691634", "15375153113565", "7533434320884", "3123453630938", "157331757425797", "5459603624286", "291703237026724", "18532241583111", "128013149624258", "189272335211238", "132091864319637", "140741268720633", "264863084832066", "151132916422458", "41422606320100", "141872577420479", "1578482569539", "20662923026248", "279952137312803", "13776245731113", "95142395528008"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> heaps = {"138451296412108", "25014545927463", "257173185526280", "293051163810945", "912991914673", "115321263412081", "7118323268740", "36842417716604", "21499222876052", "15339106761437", "27481358119838", "122228891267", "323682748829359", "6291185618633", "130561555016519", "2630206229463", "29799180369428", "1494774715879", "281591376832577", "78942784712389", "155101786615673", "205672183413222", "30135319318693", "63462348817990", "185982651128788", "31743269320509", "11777305172965", "257792161715621", "8460303791160", "168692962232377", "1076087162643"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> heaps = {"277082912532268", "9002155119743", "4722187079224", "107611964416001", "90523231431895", "116851823713320", "4166115282885", "34041179425515", "211812194820413", "2228020712546", "193851172112294", "297941589722514", "193073116915291", "2713255807018", "6166773422757", "400032432171", "286081322413955", "101072963117938", "5024355210731", "219791250921303", "157582491013188", "3226125222595", "1610044127299", "80362782123844", "178061841817082", "182721755521540", "12096220542205", "249022506816005", "15368237820217", "29543111631467", "104191653611040", "121449707054", "377958611910", "26810436911733"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> heaps = {"10982298621910", "5883120308819", "113111632316534", "49003135620289", "157391095713074", "19734721522145", "265761336222522", "235984430546", "19412643520067", "62281232131100", "10221714726570", "2713931926884", "324233017817791", "180741299312091", "18553676521824", "1651837894814", "1446526522057", "27440849914210", "24385239601656", "83691670332602", "114152531312260", "30022290823071", "19799474819318", "16944955117409", "28819303214109", "19826701924904", "188782374718040", "17214174015995", "15390208279619", "7850276415922", "208221111624445", "273263200125510", "16362840213321", "6273788713301", "1024923143861", "63012905429348", "71712121714638"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> heaps = {"5349109339374", "22326167183179", "102219268954", "342687627084", "135122758123701", "218533102410895", "2598137878407", "19074201069775", "211581851030770", "17163546028936", "300813147824386", "6110542216", "74781136516282", "26888271515257", "69331480319863", "150501342627234", "22127120965342", "255352995827986", "2663866851347", "31801192511956", "293732823420565", "102214307730", "286812466627583", "26861669512135", "52521876110040", "19597291384091", "12590264241226", "674241621913", "81492759130847", "17922538329806", "26248514528906", "1846208601075", "25199204137164", "323901037321479", "1191482921540", "32470208118023", "306496064021", "3067496097523", "15480258398441", "10211776826254"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> heaps = {"29308197148070", "25102635711697", "82923986932", "216463144731760", "243571946425334", "214981364722847", "183423006027027", "32467297337316", "243802817711608", "4189329026917", "30571006724866", "128082966822138", "218563101019493", "1198293122390", "156821442219870", "56741213224118", "18180921012184", "27904423822214", "266252484611129", "14081965011263", "87501471622923", "187391707328919", "23983229424777", "200752223020152", "30573547011921", "39283105818760", "199461386522022", "31211223438222", "25627261311363", "182762276619870", "139402113021252", "100973166617971", "10452245654143", "317683210625364", "16166613623598", "17770638011753", "102941989432014", "115672014122977", "25823107233076", "523517227410", "189061076026501", "119782342113257", "9426177389431"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> heaps = {"96891630110631", "321451191431023", "8728221702982", "210862426222210", "21884161547063", "23266101421577", "2951246329655", "243682863530187", "18116288904530", "6340326489359", "2227537730985", "29079326377419", "13564592710070", "22936657729269", "39091002715204", "258951276930682", "83021575412600", "189725565096", "41402850215512", "44962752512975", "9526579422710", "154621337522822", "15299326497433", "296312137818711", "30026199894220", "295992125419803", "55682756511128", "54301665612708", "16841277320085", "32255287611102", "283161802630228", "19880246658600", "8068757614068", "306022178624556", "22083825623232", "15064678625826", "1300260339507", "145512619713892", "29692258338870", "273833191624", "118951777915531", "20724342819", "285701303929947", "29610715817462", "292471911128836", "2115837888513"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> heaps = {"22500244011540", "30548277423287", "215582273111198", "174341685730187", "128642680924489", "192692066432690", "24995162381456", "14315434511619", "8102162987016", "10643008611927", "89662049012768", "165382088030549", "170921773412476", "24355227316953", "12135210584948", "10085199091243", "2135759103295", "177722274611422", "688011168664", "21377189927860", "28871494329725", "26150262106582", "3181256013185", "3481235996784", "224532341710090", "6409658761", "17781515517664", "23431304678800", "320012648216679", "18448292114644", "126851166224890", "28753150496476", "58372352221808", "218681637627701", "110371683431943", "27750467518901", "8635268968232", "176742226715813", "1358690402232", "271612079425565", "313221696621000", "23129956529925", "16758627513358", "47014845627", "320831444916357", "115511713119789", "123472680223111", "13762168289203", "13525314842305"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 2135759103295;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> heaps = {"110295691486", "254711292722311", "11546244658787", "1367183587527", "13439613619512", "274051299431943", "120362629624429", "38661430222859", "31800904820217", "6984250531185", "88481274020359", "3632210963160", "171891916710337", "1291421925155", "246021917426913", "3802203432214", "48302897021921", "295271951117670", "99201358318128", "97701380330992", "40759023150", "32465111434142", "100882532625833", "22469787928687", "182532648132714", "1350211076370", "2843336225232", "286362096122743", "4148426213844", "31532280924297", "154542734820290", "3431101889907", "144331255626194", "99752959629702", "31672950422913", "226922381024221", "23731234516060", "6012252413798", "272971840223616", "86551698122305"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> heaps = {"279102342718060", "18851500931096", "206012447125967", "256353035919059", "111632649617669", "22127609911228", "8076106030984", "2689655125837", "17857166318370", "42722352812735", "930222508058", "1981204718702", "291271823021568", "221247044229", "18348230197509", "155522492419856", "1591090374268", "47561810815257", "271541458816438", "56593025325417", "322341106828657", "7002227547010", "318102030027893", "12154617411557", "323531750511516", "641670646", "6517949323309", "15019899832161", "29191218618530", "202901870724260", "1942499210571", "205741841414507", "155363195117109", "923365753532", "77852803014266", "13091626026553", "33181175321713", "466222710242", "41841664329390", "323972156923591", "28389204346221"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> heaps = {"28391236531268", "29185691831694", "12542763931702", "17380150761935", "3068415697280", "31584712823174", "19632326075121", "194311236026864", "18372268374681", "161991309261", "298871094520066", "112181019817634", "27731918425731", "53553129817300", "29808173809349", "747141462878", "30530289231454", "308992413420112", "30245850428011", "130752384329650", "6232229214296", "28735106665289", "230373232224930", "246535426154", "14300122614215", "15799555121250", "237681056712323", "109601013129853", "4191088527629", "282461439714731", "8074261711324", "144342435013979", "1573021828284", "41492780311621", "2653130355727", "8326286253637", "151271594130461", "700410929845", "18637226336363", "1219864889453", "19655240910300", "230462481414060"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> heaps = {"229103013514362", "192449311199", "275781884320870", "236031751854", "282892859927468", "186583083810862", "253482241610310", "17011308512193", "66002926617650", "129122582027155", "73503156919740", "2763222968111", "486283916333", "2482168518148", "27957353215199", "2143757326111", "6922173985032", "73611688530017", "3093745114310", "105892573717495", "8253312458787", "24657272251540", "40412025910673", "288221507422998", "186511688216802", "10922366813832", "71891631119661", "13431905822425", "3028782085526", "15485344521754", "322762158225641", "65672316117164", "220342896725194", "21145639320319", "294402540332162", "235361908025587", "132851335817393", "18835131710214", "25039187474086", "779809719928", "307971780416175", "22197538427631", "10835249916375"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> heaps = {"232132854625271", "3919305832613", "234891771128506", "21141313718718", "311851275615079", "13165132279793", "200632010423444", "118851801013299", "2592611837755", "22752468710261", "145381932324031", "23909212682730", "65243099331418", "13590464419095", "1631023366226", "150552227228865", "193125712939", "77902404710153", "229152447232112", "72041059028871", "208682901926404", "164341923913130", "8872124013740", "3113666962063", "209872797617379", "242763222621741", "31577251455372", "238342384732166", "15060364119662", "103492406015129", "23162312625436", "13096215616545", "223491145717816", "198261882617729", "4561144224038", "231551763214411", "156921183117588", "23992124138165", "3258070724688", "34141767830334", "31210696826238", "9642143428393", "102111252438", "4462744028927"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> heaps = {"1342777723975", "1992124418757", "30580109429369", "23357344821775", "2414264453297", "36822805920621", "46517215799", "19311727915568", "18675117255580", "126941787313489", "249052862231820", "31889257855125", "12332208382335", "3463343410424", "200442448730473", "879817450270", "24102207519241", "1246479615273", "19543117413779", "1975676893618", "12457593118218", "29502731815706", "6178169421246", "2336868193790", "8070219564573", "5538166923693", "171603075228843", "93583227532173", "294702842620489", "263223238913128", "101661109518511", "15435878420073", "875897399271", "157831597823924", "9239279892821", "259422469528657", "2533750436997", "59873243030137", "1753476313319", "52283004131483", "1518271735532", "2037141405272", "194762522324392", "73721159218620", "72592447412478"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> heaps = {"251403055811721", "180522903418276", "253632537328134", "21849259468020", "113542019626582", "3813228220876", "12888782021986", "27033308426534", "73621346118936", "306951295619100", "39792398031311", "55903038921243", "6885559423601", "3211128411550", "99942195329370", "428527668706", "146316565546", "18010460819859", "124211415622686", "21178390917410", "59972884613645", "46621062720992", "258751672515261", "28932546427423", "3754531124742", "175702555516567", "25491122788704", "2250719517301", "2586524339462", "298583074112904", "80082103520844", "287681756519417", "788930213977", "317701215229543", "134882120823526", "319401953824084", "40744902713", "22715162718254", "1654828211529", "1458124164707", "22624216949874", "3632202122422", "555791704998", "2454254093237", "289842114017096", "300892527297"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 40744902713;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> heaps = {"275889327731", "180781567614211", "23329203796790", "9703779216554", "2608374202391", "27939238811694", "660942211720", "251931887919297", "2667548113901", "175112354219541", "19821189416075", "14677152921601", "23983177227799", "169312116318198", "119131503123492", "1652210089347", "27902965823886", "148662896532646", "67522071531135", "69492196123656", "4269246269927", "9409286321491", "11087281044842", "13426176643523", "312392586721456", "2453681923801", "65511965829345", "2357231174036", "287331406314123", "22556290886003", "246591761222602", "121521475912811", "280841394324394", "15512641332676", "25271843910836", "318622422515596", "18398312877756", "1530559652469", "34663147121164", "2376729731999", "105831383625144", "869769798977", "125185728609", "28080113959707", "149141578122904", "44291831310735", "36292379821242"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> heaps = {"26981157596259", "4837282398088", "1517866351247", "2209435084436", "255331749422465", "21635307728223", "45181104918568", "517727415056", "160657914833", "1146239913693", "31312171345697", "162872926412700", "303808318160", "143653371526", "21185317558189", "2967822002225", "477256516438", "194091950315678", "201002994332123", "1932272194493", "5150116120913", "9709107116454", "320031857116047", "32594847715906", "20332215718371", "147982882217814", "6601919326474", "6731124032416", "165862486423566", "3770317511099", "206751818916465", "29101571818575", "31945164909486", "168862617720355", "271041424810492", "269041620131791", "107473253511975", "1681028555639", "316921471322380", "27405906617427", "28639873630881", "10740293019497", "240631254012465", "116962839219196", "18072896428704", "82662852125759", "16093247609948", "316811998725586"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 303808318160;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> heaps = {"22183264281528", "18708664021999", "31302757218466", "1583231304169", "1919126144592", "131931502616331", "253865827474", "1635220794626", "2084419149301", "22473163127295", "487899359593", "283742529812095", "96601037822786", "8281337126872", "327312904129906", "275384327803", "2363230665421", "202651533510312", "28588181019699", "229277477337", "22006117797893", "321531803317880", "39781826128725", "8835179032477", "2247992020907", "22638783825613", "1522664716996", "19202164262616", "190291403310974", "283501138331710", "21960480167", "2948228667688", "18162309210282", "195721844926261", "14738235462737", "32211295493103", "48903209517954", "2090285777109", "52712088110536", "255801869915219", "327371244910685", "172161145524459", "133761190132085", "60771734728918", "91173013716670", "307841356023816", "4590273721549", "202581916323223", "1576295126536"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> heaps = {"13173450626909", "10886227526078", "287001413714650", "25542744322850", "45532322726984", "279622712622141", "29011628117171", "971021515230", "8671208757039", "19865647030063", "717142557881", "45022284928272", "8812607414444", "176251785122006", "314726233817", "9121243632676", "248102942012392", "20067267551086", "173331954611368", "29342266852175", "80071625131450", "111682145026056", "17454434719261", "8034118221730", "24618334113970", "3149096598982", "570902625919", "218932448711452", "12863170165697", "28244234781687", "308543025610043", "107892844020311", "30273217821820", "1133346631956", "237502733131833", "2547615422869", "27569636512401", "10546149978668", "210452026013232", "301901496830252", "15424283058105", "82068972028", "17482315027206", "1687536219758", "217222698819199", "1162657629058", "260431369712941", "3267791726461", "136781096730880", "30343307262019"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 82068972028;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> heaps = {"852762158656375", "899529234620", "11960840160092", "18946", "939829275073191", "9538674", "89615953522460", "7007072309", "99361115915", "25133086707446", "3441603", "14103688633"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 18946;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> heaps = {"97340297362", "97339241147", "379923", "770686", "3809367", "97340297362", "97340021889", "379923", "3419706", "97340021889"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 194685269489;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> heaps = {"350056865659", "8619409785001", "3913347792", "876715659702", "69451853198", "440484715742", "415984911", "9312746769215", "91518517", "8231920745197", "377283472692", "65623855", "99732405529", "67703687", "8272088022108", "9280679439726", "56691428058", "397597702650", "898413240", "17184515373193", "7264553778"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 1471540523;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> heaps = {"9649681", "9", "626179280417", "60992114986", "9416132739", "6013", "81", "69217", "2457", "141947199152", "5776059336", "94171156642", "191027", "2726086", "71867", "13755", "38937763383", "784596", "9284390106", "67934074329"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> heaps = {"36225550721", "18708269516", "36225550721", "18708269516", "80157960371", "52415135821"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 73642089753;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> heaps = {"85244654868913", "352510817", "984952117763", "520264540", "496676951829562", "8205895318", "2729108470499", "5614235401637133", "6300040257592", "31211009683", "4365107780", "6339482709956", "5668173889208", "427432237919", "532051631518", "31786859048", "565977613", "158828534", "648387665183", "3268795225085", "1485377132776565", "4720729872792", "75716919894", "2403732632353291", "228451099656596", "3425441360", "32827706490", "3094795365", "544323438795859", "6465644953", "9251653231403", "9861885325812", "505023261912092", "54540767521637", "3118723277107", "98190260205", "6686373612840459", "7854460055", "89775987819386", "29325944981", "6880891467598", "70185256167", "28246475025", "67277010063473", "63363256164", "46826536824908", "36765114118831", "85262356538006", "510477084684", "833340322"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 724806147;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> heaps = {"196489", "8111577", "14190273", "15713779", "38252853", "294088", "38838664", "31795468", "53264653", "24869564", "7345031", "9363802", "56548551", "38675207", "10514687", "9022974", "66671295", "19152573", "31484014", "236920", "55804821", "2544453", "2385254", "60732731", "372625", "43583126", "57297703", "61303027", "6965913", "2614434", "58572580", "287743", "26853190", "42028409", "58616822", "30397072", "4057889", "3750653", "932392", "47570093", "64317829", "45573500", "52116049", "42297132", "55230449", "35767684", "19068893", "16646290"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 536313983;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> heaps = {"7498113152833157", "3072313377371168", "1632075676715212", "90177246138185", "7538621214126", "34492007070", "197024895", "26654606700257", "3783800422155019", "3775098949850621", "4338196972665717", "75455620", "32354024579716", "85390635", "5157234926005630", "7527374850177261", "2200373803590580", "8231229247905986", "5743906", "2117628813187056", "54748443", "9007948731", "2461309", "566900582418644", "8290764619721307", "4510046835232531", "92891082640", "995004740516", "6305341", "9643740", "8851810740171682", "4287454918559365", "6622337411670805", "6205458525779", "5098518437043688", "1753866", "67758601852"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 7405051434343;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> heaps = {"6152550193", "5319899990", "4655946231", "780948075", "203003795641", "202088167657", "6209562234", "198243984848", "6106830096", "4950672029", "23373180", "38404", "5310484965", "5376802083", "901244350", "2113340632", "4843235627", "202857230834", "199276386525", "4452393230", "5441682046", "202961619096", "923168168", "786882242", "69777245", "203379756441", "1673393895", "5903027225", "350159", "101170221", "20546018", "6232042293", "67664830", "4523432579", "20476", "6065814270", "693193539", "202153000464", "40837826", "203369412466", "197582791029", "7874998", "202515794210", "95074545", "9759390", "5250685461", "202081449054", "203617854886"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 76555284122;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> heaps = {"8233895712217984", "8233895712217984", "2632266679043526", "1259768060340374", "2237161121297625", "5283089318826276", "2969501991860992", "2382579467665021", "7582064439102928", "405864745736498", "7935787500061362", "2299258793680116", "7582064439102928", "2632266679043526", "5547932364654614", "3375082753581618", "9235173600312894", "4872615238208875", "1165589679245855", "7514064963759961", "1165589679245855", "6400470014114226", "2382579467665021", "3044991858841993"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 53924165685604083;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> heaps = {"9576599043", "1863196860369", "26445766264", "1863897392066", "1872431648890", "1880833524047", "1888992591290", "9576599043", "17490579579", "1979126", "8815411534", "1888994610916", "1888992591290", "1872435909074", "9576742133", "1888992591290", "933363131", "8815293368", "1880621841652", "1880827953383", "1979126", "1880620334428", "8809054438", "8809054438", "1871569841257", "6370142", "8809054438", "1888994610916", "1888992591290", "17492025997", "937360403", "26446425230", "26298978461", "9576742133", "8809198096", "6370142", "17803046336", "17803046336", "1863890903658", "26443738406", "17496810277", "9574567851", "1880619667370", "1889367916545", "1863890903658", "9574448477", "1880833524047", "1880621841652", "935317325", "9574567851"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 28474607632957;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> heaps = {"428246727435091", "398139031", "9801984284607", "9625869581436", "937488832", "8630798092692621", "24251762342678", "581759730", "275947590055486", "282998", "590945688402", "5729276", "55946811432357", "633559697589", "9959859505", "397812151784", "3674240595801643", "4111365478441002", "6282193389416", "2841729", "3891486881675008", "251960448848307", "5116279114965852", "3894798291538375", "8614501749174169", "9917147844", "932614", "327536822", "4107712652559252", "338858", "9383662737752", "53751368", "10902525", "458045", "9019585041236", "8754867073435019", "9622160942719", "3468865701303521", "5440121368", "4958421716947701", "212799292178809", "2667300", "7984031022537999", "681972435", "4125506022491269", "721306422", "12698308952752", "6272279", "810420", "1657179222080"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 84987412;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> heaps = {"14314769", "14186518", "14306239", "6052", "6078452", "9965", "6196317", "6068505", "6208855", "6196317", "8832321", "140301", "14310427", "6068505", "8713899", "14310488", "6078391", "12554", "14186518", "6208788", "8701922", "14306239", "8713899", "6204080", "14318261", "67", "8840175", "12617", "12617", "9965", "8701922", "131747", "144362", "14310488", "6196254", "136455", "6068505", "14174559", "140301", "8704070", "6119", "14186581", "6072339", "14174559", "14184433", "14186581", "14180024", "6208788", "8701857", "12617"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 283895883;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> heaps = {"27701976164", "5149552322692125", "2868502375", "1518291810238618", "2278025361720012", "911952150500456", "41498506243", "79950396662", "86488445401581", "2760817652457603", "3740154599014", "50392762242092", "2326259790431600", "539624163405804", "658507940644913", "47187397740383", "94646245329", "945819104373001", "1537407221", "5209569266166984", "5887284589277386", "7269133891051421", "8265325716519", "5284185761823182", "18391507854", "48407342084", "56717088208", "4880615374523075", "6264088192605", "2921450689302082", "1856933929526341", "488060769105483", "56757169779", "77341393109", "5916013962183545", "2924677260", "5283246963479390", "6174509991767", "7940210292956738", "8409031461311", "9565558444485", "8829965906364501", "293953806695674", "21766747437", "8586432049368878", "72610608822585", "161491899086064", "6903904866446", "147014755422", "3263368479"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 533772328204;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> heaps = {"760116920", "859149", "248705", "4772724", "766307", "79036294", "368675", "86309204", "551259167", "2521897", "9618764", "7493526", "6013250", "542548346", "15070056", "450215026", "82257982", "277325335", "357192622", "8111961", "449394193", "570017148", "481586141", "29680943", "129374544", "96967723", "54090547", "149593130", "455991521", "57902063", "9540230", "790294", "933616918", "67728332", "3085314", "8229803", "33553819", "83834826", "59031969", "4546138", "9123514", "769555", "74459214", "268139", "15639186", "7157733", "64033917", "74883836", "1718861", "9925258"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 93531764;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> heaps = {"1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249", "1676249"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 82136201;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> heaps = {"426387809123213", "10178605444810", "1088630481276855", "10178605444810", "1088922360981976", "434071782830888", "1080955668973330", "434071782830888", "1088922360981976", "426387809123213", "1088630481276855", "1080955668973330", "665833133412949", "1088630481276855", "434071782830888", "9917407299749", "666126556525626", "426387809123213", "1088922360981976", "666126556525626", "426387809123213", "296212457071", "1088922360981976", "655958693878512", "296212457071", "655958693878512", "656218377747615", "666126556525626", "426098643262946", "9917407299749", "426387809123213", "1088922360981976", "434071782830888", "426098643262946", "9917407299749", "1081212601475453", "296212457071", "296212457071", "433816423322951", "426098643262946", "10178605444810", "9917407299749", "1088922360981976", "666126556525626", "665833133412949", "426098643262946", "665833133412949", "666126556525626", "426098643262946", "655958693878512"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 23573810303073760;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> heaps = {"93382778523398", "21111005041", "367615", "66945955061", "74630536335857", "6589172661939", "6464710831322", "753567584", "80103342902", "38685", "77049315555603", "74707218774954", "8345983796277", "6523562600252", "5292759721", "95194584615092", "6839664546", "5283195", "32422", "20771811550060", "777735431", "76593", "93662132180", "107450061", "89132502522967", "44365461", "129267553", "841075", "14063918", "2708077818829", "286148430", "108786075791", "23612303203676", "781809", "95141341917054", "7890203", "67199999727", "91754018346893", "2742058236736", "89160222432683", "591175", "111640527045", "7722591655", "77073455085143", "76990005727836", "25331427878351", "23603586897043", "8262023", "48357150", "18179582955137"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 21262400874;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> heaps = {"3507854", "56725580", "13835779", "6892142", "521812300", "176768776", "251689941", "65136099", "88671", "48377927", "601023011", "174903161", "76271", "440760", "3838264", "606011860", "29913907", "279058498", "440776787", "864076502", "168537739", "12492011", "32973350", "481645906", "779707389", "51649929", "546778408", "514970", "49802564", "3496156", "6109980", "89800", "408401695", "62696376", "250411769", "4475493", "46435790", "672382", "21695290", "63948351", "607667429", "5362901", "1066347", "61320810", "382125280", "74322839", "3103996", "811387540", "301943133", "10288"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 198661200;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> heaps = {"7120049096770", "3064008610", "48662840", "4391026518918", "7064226279345", "4309331132493", "6129972463438", "6126822408650", "4304913839226", "4393388121524", "4393390284875", "4307830600221", "88596271503", "6078243102130", "7068689314925", "90711956060", "6079612521599", "88637953453", "6080037247735", "93019020548", "2915638758", "437537928", "4564484109", "418396", "4390618853781", "7115831312619", "47803943", "4307421963764", "6131386398964", "82319", "4395207881013", "6075611745503", "8160", "4307804721388", "4390622136682", "7120394156501", "6079660237783", "90289987393", "4444221272", "5846", "93156985633", "6129557989780", "60597118", "1697491", "6075584919739", "93188401523", "6075482963205", "4390647457314", "3085276578", "62758529"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 65140971443362;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> heaps = {"1063533083781864", "2810511853239715", "2177956653456123", "9732119583936816", "8521724638370502", "9286044699758115", "4446507218195066", "2248663669714512", "7698999686299512", "8842056557661011", "6268683491178431", "7288878413020628", "1510183798641838", "2272209832172932", "8681225686315159", "8691316415434951", "2375110502532624", "7309555718002062", "1373902401905015", "5178192150263087", "5096545172324818", "5345712311216701", "3055157899531444", "9330847601411819", "2236131759650116", "3202630517762645", "7080633740065857", "7650016475105591", "8930438822614291", "349379954449412", "6159683724884329", "9181221584749227", "7845241697318755", "7565932157529898", "4678027410294831", "1888872335678569", "8489533862883199", "2567705829806502", "5414211099833883", "4404326320552633", "2243388297600954", "7778068707424639", "9111304147362388", "1923825062916852", "7556182519413076", "4875584198545122", "9514712072087500", "8437451571007989", "5663248462844612", "1762417344814933"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 9872113982188483;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> heaps = {"8061364252249930", "6302481005101463", "3740847363756925", "9760477308812108", "1713908504500114", "4502743492364694", "8172195556790711", "4864580839720154", "3891002869069531", "3967491017736420", "8963818904491572", "2955478812222436", "9600033012984517", "8713941566985952", "5513152694783128", "3837203247570273", "5101014747377161", "6898312224019682", "4588319435025480", "2199516426279662", "4409481375761203", "4459056637117186", "7985981455043251", "2221056008434258", "5950886314159904", "7582368386240656", "8379161954169320", "4485562311612973", "8045741429165644", "8242743158637992", "9891902938083471", "6207125447617784", "3960784466896662", "2710080187603841", "4048000788008015", "9308956743021235", "7858344680310804", "7585361115845358", "6794297632849354", "4312974081157708", "3458784105470108", "8496861135118217", "9942375854563319", "2444657166194298", "9512356567372852", "4851932721180535", "3347805827839093", "6638886450243444", "1043828569362722", "2378994792636270"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 56641895610499539;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> heaps = {"8732030277222613", "8291898683714957", "6830201084976361", "3135389726187788", "3279005071680910", "6448476038012294", "6325287708771675", "9118352276163551", "1249890143781655", "6584146772805603", "2779165830521083", "9597794382947843", "9479556997215563", "4969280836262558", "5417488942881008", "5469984482664542", "2391750168452466", "1662553120244376", "8824076853049259", "963148908450824", "5133948811574651", "2607194480652355", "8943614671079025", "1900173315752296", "1275237318083654", "4808454461737757", "746581222308087", "9822197527359400", "2325501269046047", "4247322063305768", "6445152026301014", "1626965228408055", "1295897310249495", "6070291255204890", "5232904498919318", "6787489990786633", "987254342887551", "1948679578660453", "2913644653362061", "1082666037740094", "4126717301740721", "7148410677185278", "7114295336548706", "3847740227516774", "1890535490525029", "1400624767629926", "4250404167128367", "3851637321624333", "1106062448982281", "4368796949444832"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 100362891753612005;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> heaps = {"5140949528786686", "7614392623822415", "9799558971961022", "467679959647400", "9282751709838895", "1002179273898267", "8756225027861054", "7235019380539540", "4880741848862040", "4765789929099590", "9724653441935396", "1803256133530617", "1416567747765476", "9906128017062941", "4408356574587440", "6734865768491575", "3539334248206905", "5376913392594395", "8466305371809233", "7446971963461962", "5203790210844248", "5569634240160793", "2092037158402185", "5472798066128909", "9041842724367416", "152389889908022", "1105090173826277", "2494055668653473", "7251541116951513", "3433122503337182", "5572524727769540", "3341119194309003", "8721170549042735", "3182397290715334", "2635107396994385", "3484025772222801", "8441339782512997", "3948618549506291", "2510076137642353", "4556553362450279", "6757615279112320", "7543697674652784", "5638608418795520", "2152552548590648", "7437000073734712", "1718756019062845", "8495400937933182", "9209515888427018", "3305953710253165", "8503087566317407"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 83785823625001361;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> heaps = {"1419492067104255", "7300754294753988", "3653877989455740", "7432927407167571", "9343461521009988", "796705549388755", "9981975510502544", "7092710445554547", "5466734667247693", "9751826498272902", "7976824850087196", "7744409687056111", "4464240980006599", "8609421611153216", "3341251355838604", "9586887283766851", "4403857220274680", "5395863393652350", "9726573806516608", "2919373146835339", "3769348808131927", "7214282870782503", "7046779307164935", "1424499721453147", "9955070374143263", "2516792430382243", "2974166536723576", "9981876110183057", "6884590567844750", "2338032796199990", "1548533283123027", "6944826313940203", "8053239789067106", "5171516550361440", "1619074473122142", "3292329452102150", "8359063906056044", "5242423134827849", "4984693644564275", "3083950271557234", "9326484556840430", "6751343293891134", "7165225577520255", "3090615750803902", "5219791479505171", "6897967121574204", "7386564708733414", "5183498367719349", "2813840263425344", "7668751558795228"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 64809690658573718;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> heaps = {"9588751258555147", "4589763624446268", "8421556835236604", "1620985836943174", "3578360553025990", "4966203123936195", "6241453714304645", "1069907336087811", "8260194302379331", "6905998836261263", "1844854280455186", "2753931269388191", "8686530837527475", "4171314706328757", "4039571760001384", "3882460730573449", "8042094578620200", "4891213392586951", "768806583374067", "5884442070611171", "8450892676096875", "8340372841296253", "5278208752110847", "8679851885671034", "9571652191261360", "2912967766393480", "2871176437528542", "4297532518401084", "9095293499898885", "9749323634301701", "1351904655541599", "9604937845974831", "5592038449838507", "3600982924152947", "4360908588664104", "2899328959667624", "264480680957250", "304711061300121", "5154164458998095", "8436146427502279", "2130666648703536", "8521067813808085", "7505675045738398", "8921748145797120", "3866950044599478", "14952229208039", "2684127665084065", "8309920586204662", "2673455907744831", "3397323853260520"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 123477688944065165;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> heaps = {"2349601526391504", "4958270186558106", "6062579324247287", "4958270186558106", "3516654797632174", "9116701994632237", "1685006198622359", "5736170126465549", "1148332556734061", "2677173708880441", "5736170126465549", "7893403318625998", "9116701994632237", "5721794366931998", "521250916227305", "521250916227305", "4977970230971529", "8392645325061671", "521250916227305", "9441993929310935", "9116701994632237", "2368373851847875", "9492653911219396", "1168309426491518", "7945032679717085", "5736170126465549", "1148332556734061", "1685006198622359", "6805496220268208", "4977970230971529", "2349601526391504", "3516654797632174", "6116681993749220", "6062579324247287", "4632668442629216", "7253985038938186", "7945032679717085", "4582309510040179", "4582309510040179", "9096683448408638", "2368373851847875", "8392645325061671", "3839985030654535", "4958270186558106", "3839985030654535", "2349601526391504", "3461899307510973", "6789918877608099", "2349601526391504", "7893403318625998"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 198064767904560296;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> heaps = {"1046137165670646", "7252440374755947", "4372146918096946", "3327973698915619", "2339885782932526", "3946403544463912", "6792608244372959", "3534133498998299", "7274052327300112", "4515562176526884", "9491766999575658", "222551851414794", "1756701197224872", "3584309242091488", "6233049627455479", "2013943115124973", "41882401449856", "9153158564155567", "8950110926188600", "8173691161030181", "5615279361251580", "6550726999377767", "4735810493682005", "5949301202551262", "4469388747189660", "1162858096754372", "1559936768353118", "8229029878437854", "7505998245954028", "9463091677219818", "2558836598231870", "4553037902716324", "2057430073589059", "4125093390344844", "6742868434256312", "1673364068634763", "135426662151125", "9142957738171486", "6009865507975691", "1576119882104101", "3762734997438548", "3268034925577997", "7081341186199777", "5062702094676971", "8415192296537263", "8461680729538572", "7473096639096428", "6705431328302648", "3474003130238314", "6253287190327692"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 163483546694237542;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> heaps = {"3012943345257686", "5680452781994447", "2382813091711027", "6863273258593317", "6863273258593317", "5302248213160179", "7979639567694332", "4098074194450703", "3461585509604842", "6453244533191978", "1191238326621657", "6453244533191978", "4526945785537558", "3012943345257686", "4526945785537558", "777794656617701", "5680452781994447", "5302248213160179", "3461585509604842", "8613672673443097", "5302248213160179", "4098074194450703", "7979639567694332", "3012943345257686", "4098074194450703", "3012943345257686", "4098074194450703", "777794656617701", "4098074194450703", "2382813091711027", "1191238326621657", "1191238326621657", "5302248213160179", "777794656617701", "5680452781994447", "8613672673443097", "2382813091711027", "3461585509604842", "3461585509604842", "2382813091711027", "4526945785537558", "777794656617701", "4098074194450703", "6453244533191978", "4526945785537558", "2382813091711027", "7495895736412352", "6453244533191978", "3461585509604842", "8613672673443097"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 187198504532767465;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> heaps = {"9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999", "9999999999999999"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 489999999999999951;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> heaps = {"267535629127093", "506261879202375", "622897361293194", "584503610632061", "754765693745254", "744307868843149", "706892664950487", "472722610615949", "591771159776736", "663948129390885", "596385611598481", "630444476317596", "517857418597538", "331896433386048", "489776430309254", "759469224775481", "989368021051108", "606462586284724", "162990813110340", "491969338056640", "846267569872829", "460276132159914", "210758704804296", "804222055290283", "304091962544993", "905029435174314", "794226412889288", "168383338047689", "668790333732652", "558796041048708", "824793928301789", "654925749945935", "708199782534902", "319621207311905", "977406474858260", "764628960701013", "872645202909945", "303788604676097", "797853383793787", "519098858437138", "897993243712202", "875174171117040", "951662196480810", "129756463797491", "606085394154155", "198385222703463", "733443972589024", "365713338510876", "350804113593415", "583565990763761"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 129756463797491;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> heaps = {"41", "18467", "6334", "26500", "19169", "15724", "11478", "29358", "26962", "24464", "5705", "28145", "23281", "16827", "9961", "491", "2995", "11942", "4827", "5436", "32391", "14604", "3902", "153", "292", "12382", "17421", "18716", "19718", "19895", "5447", "21726", "14771", "11538", "1869", "19912", "25667", "26299", "17035", "9894"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 219536;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> heaps = {"234324", "344554", "452345", "543543555455", "345455543", "3444324", "34343434", "343423444", "3243245646", "67675756", "65757776", "6765444", "4565666", "56457", "44", "768788", "56546", "45687658", "4556456", "58567567", "6546456", "765767", "7654654", "54645654", "65767", "56767", "34534", "65765", "435", "67", "435", "67", "45", "76", "67", "78", "563", "675", "345", "876", "435345", "67567", "546", "45774", "546456", "546645", "5645", "5464"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 95736;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> heaps = {"1", "2", "4", "8", "16", "32", "64", "128", "256", "512", "1024", "2048", "4096", "8192", "16384", "32768", "65536", "131072", "262144", "524288", "1048576", "2097152", "4194304", "8388608", "16777216", "33554432", "67108864", "134217728", "268435456", "536870912", "1073741824", "2147483648", "4294967296", "8589934592", "17179869184", "34359738368", "68719476736", "137438953472", "274877906944", "549755813888", "1099511627776", "2199023255552", "4398046511104", "8796093022208", "17592186044416", "35184372088832", "70368744177664", "140737488355328", "281474976710656", "562949953421312"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> heaps = {"1", "2", "4"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> heaps = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 600;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> heaps = {"4", "9", "4", "1", "6", "6", "2", "2"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> heaps = {"135957882229520", "303382518795000", "41142048903648", "2026351331445672", "236525993355600", "5597625430008", "89132990569120", "6046673554152", "53477827170768", "290949908434200", "44775247392000", "657607322877960", "4378816892560", "143941885214424", "351869205994592", "1370000048040", "581687333091920", "2629672012238040", "1244233370837600", "18750414650760", "315673508343024", "523204642506392", "364137955533600", "509123854351752", "339866533607920", "1069836410458200", "1774866765313440", "559077148949704", "124828443943632", "1055459727411000", "1795446118656", "2312298669377736", "341838812208816", "114443259187192", "379880475216480", "551305947167976", "2827716355005648", "277539556041720", "73901723567360", "206711453754696", "17650730794320", "12392151085720", "10429736400576", "2491245722088", "11090786750064", "209535088331800", "217516976964000", "54744687041000", "2269585005072", "510087876955608"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 2491245722088;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> heaps = {"523", "514", "9"};
    MoreNim* pObj = new MoreNim();
    clock_t start = clock();
    long result = pObj->bestSet(heaps);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=12168&pm=8587
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
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
#include <cctype> 
#include <string> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
#define SZ(X) ((int)(X.size())) 
typedef long long int64; 
template<class T> inline T lowbit(T n){return (n^(n-1))&n;} 
int64 toInt64(string s){int64 r=0;istringstream sin(s);sin>>r;return r;} 
 
class MoreNim 
{ 
public: 
  int64 bestSet(vector <string> heaps) 
  { 
    int n=SZ(heaps); 
    int64 A[60],B[60]; 
    for (int i=0;i<n;i++) A[i]=toInt64(heaps[i]); 
    sort(A,A+n); 
    reverse(A,A+n); 
    for (int i=0;i<n;i++) B[i]=A[i]; 
    int64 result=0; 
    for (int i=0;i<n;i++) 
    { 
      int64 set=A[i]; 
      if (set==0)  
      { 
        result+=B[i]; 
        continue; 
      } 
      int64 key=lowbit(set); 
      for (int j=i+1;j<n;j++) 
        if (A[j]&key) 
          A[j]^=set; 
    } 
    return result; 
  } 
};

********************************************************************************
*******************************************************************************/