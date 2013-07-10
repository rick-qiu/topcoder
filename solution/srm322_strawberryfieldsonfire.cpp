/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6646
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

class StrawberryFieldsOnFire {
public:
    int timeLimit(int w, int h, string need, vector<string> fire);
};

int StrawberryFieldsOnFire::timeLimit(int w, int h, string need, vector<string> fire) {
    int ret;
    return ret;
}


int test0() {
    int w = 5;
    int h = 5;
    string need = "12";
    vector<string> fire = {"1 4", "2 2"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int w = 5;
    int h = 5;
    string need = "1";
    vector<string> fire = {"1 4", "2 2"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int w = 5;
    int h = 5;
    string need = "13";
    vector<string> fire = {"1 4", "2 2"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int w = 1000000000;
    int h = 1;
    string need = "1";
    vector<string> fire = {"1 1"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 999999998;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int w = 101;
    int h = 101;
    string need = "400";
    vector<string> fire = {"51 51"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int w = 1000000000;
    int h = 1;
    string need = "1";
    vector<string> fire = {"1000000000 1"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 999999998;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int w = 1;
    int h = 1000000000;
    string need = "1";
    vector<string> fire = {"1 1"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 999999998;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int w = 1;
    int h = 1000000000;
    string need = "1";
    vector<string> fire = {"1 1000000000"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 999999998;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int w = 1000000000;
    int h = 1000000000;
    string need = "1";
    vector<string> fire = {"500000000 500000000", "490000000 510000000", "510000000 490000000"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 499999999;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int w = 1000000000;
    int h = 1000000000;
    string need = "2500000000";
    vector<string> fire = {"10 20", "1000000000 3", "5 1000000000", "999999999 999999998"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 499999995;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int w = 1000000000;
    int h = 1000000000;
    string need = "999999999999999991";
    vector<string> fire = {"9999234 234526423"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int w = 5;
    int h = 5;
    string need = "1";
    vector<string> fire = {"1 2", "2 5", "5 4", "4 1"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int w = 7;
    int h = 7;
    string need = "13";
    vector<string> fire = {"2 3", "3 6", "6 5", "5 2"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int w = 1;
    int h = 2;
    string need = "1";
    vector<string> fire = {"1 1"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int w = 2;
    int h = 1;
    string need = "1";
    vector<string> fire = {"2 1"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int w = 999999978;
    int h = 999123451;
    string need = "524633010541";
    vector<string> fire = {"4563 2346", "463563 74734", "4645763 4754", "908098098 9890800", "999990808 900090909"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 989184104;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int w = 998098080;
    int h = 999998083;
    string need = "8066849";
    vector<string> fire = {"99980980 1243", "141 524521", "555555 555555", "998098080 235234", "21 999998083"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 998098053;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int w = 607939040;
    int h = 820131762;
    string need = "213617004";
    vector<string> fire = {"153278504 725762849", "263523326 255496824", "250139521 121654471", "258897220 339327706", "349445696 149366522", "6215906 744873110", "334822196 105766209", "447703991 57213224", "607050111 803995737", "379543243 6760687", "46383606 130409305", "177959957 444206349", "400874050 606128337", "486362940 85784130", "431926304 267256458", "410828823 461929763", "566607704 178456120", "571337106 609421065", "60808473 318112210", "52974927 722856939", "497920148 114445526", "321594765 65201378", "542794923 767172114", "335176515 234886992", "271294737 210804142", "296176418 14208781", "156710941 222685073", "552542067 343200945", "388452183 335742471", "288324738 452989826", "281216168 692664246", "512762589 159567190", "369627878 547903066", "586956866 378980445", "50765172 374611316", "100820969 264441694", "291192429 117307617", "110388584 760688466", "255460525 80017567", "522478896 798710325", "183813552 86314815", "530161604 1574758", "339231800 482217265", "215261714 733050550", "74077613 601174182", "369175340 371012951", "439837885 247398631", "592589473 460140861", "125009078 312961546", "446504398 30623894"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 130409300;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int w = 590377105;
    int h = 49255485;
    string need = "1034365185";
    vector<string> fire = {"269671376 15289897", "453469044 24815895", "324023638 18301177", "102375995 19178161", "318190759 6040443", "381524553 21097601", "263198503 48160108", "400506582 19196743", "213754096 48073745", "67885340 47566329", "322094200 18127126", "300701434 41272117", "480498519 23602806"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 109878565;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int w = 118446208;
    int h = 776231573;
    string need = "37603650";
    vector<string> fire = {"7087270 263992481", "83021845 680526754", "7797025 90746587", "59812143 70457010", "76502292 205286587", "25357031 215266383", "5569252 71781099", "107935088 497114541", "94242165 91541240", "86048010 395971230", "94253993 531716494", "10318959 490641873", "61321844 391647731", "13900552 543706407", "68620318 509382882", "58059228 217146273", "65443994 373473997", "83170273 756484439", "101316595 351005394", "99184609 295005889", "82441865 298641067", "66210284 329297471", "3479699 404879898"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 83170269;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int w = 773014189;
    int h = 449591700;
    string need = "1336088209";
    vector<string> fire = {"254889482 14934730", "658850787 315024819", "383268989 305758762", "557198623 2054174"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 383268961;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int w = 460280452;
    int h = 236664699;
    string need = "18868410";
    vector<string> fire = {"9690259 130759740", "126557829 73883944", "281886823 22501704", "154776425 126784087", "98829874 114999856", "423567245 61129576", "216520761 192613069", "216829659 74704898", "172864799 68983059", "394005060 31342277", "396558685 54636188", "208848807 154472063", "339031188 4260465", "13626259 156641533", "50097508 10009458", "347610722 4562177", "327503975 161097609", "144191331 20572839", "85532187 11738814", "254376138 22569611", "2849932 138176639", "270548350 74018706", "78516796 111420863", "136102835 34720829", "323279823 90273394", "125297210 42616222", "459809565 168153522", "179101376 172200816", "216944888 121046225", "8577608 1254521", "337552666 168399359", "72282307 126357462", "300070619 168513672", "184238882 63073541", "130949466 212542648", "424309322 155344279", "80533087 181620284", "338639915 5770137", "142546595 109785709", "337850350 42208446", "321281144 201344164", "216845032 209339614", "184948431 185499880", "192689002 105039572", "256181240 183204284", "195782242 167521196", "111490549 177119110", "284166244 231312985", "406282450 201348901", "430734431 55737842"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 80023128;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int w = 844880515;
    int h = 110609580;
    string need = "54297187652015083";
    vector<string> fire = {"145946811 49532188", "643481259 80784794", "204663217 17775643", "133857067 45878771", "35067885 38689329", "161515575 23666989", "500650303 30894066", "137299685 90207545", "154818386 79944548", "708906365 53546075", "261981191 88508569", "628135647 46349232", "632785341 37244614", "104245769 2772989", "172455351 63031613", "375794193 100605598", "168834490 11858794", "263545411 893716", "40730606 23173394", "121862709 90997629", "426276850 58562263", "331828190 54913074", "686722126 45342184", "555052107 70292134", "755436862 48382576", "821657560 70312860", "165026469 63627536", "580208796 95421431", "492166382 62304246", "181299966 76330187", "105915087 72514566", "698138190 85967172", "371156550 74142606", "388487600 56042139", "611336208 54985666", "75456145 9117513", "33397733 181677", "360207709 89668449", "243947102 77827387", "327641219 43048764", "201121735 79102086", "587224050 8303671", "17864451 28945239", "694735843 14385587", "87178023 68012813", "841220155 66736202", "38278704 101956550", "605547887 21538684", "125226825 20679614", "188626454 66587570"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 16564099;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int w = 292206133;
    int h = 215931552;
    string need = "3849036164458071";
    vector<string> fire = {"205833055 103105009", "180452455 2592759", "147418861 11946777", "238774513 63589278", "246911629 149279584", "75196309 85170862", "51357823 86479713", "175609348 12239524", "89592643 173810045", "58781111 144619509", "192752877 214729218", "43972830 26971859", "167759002 58738130", "165703442 22864998", "33121814 3676331", "141495515 194591645", "229116708 204842030", "271888652 47745469", "106928581 86779993", "111919943 38144782", "100576342 61778306", "288041320 154136298", "136993053 125709637"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 43437385;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int w = 216364946;
    int h = 870067260;
    string need = "2486896417872019";
    vector<string> fire = {"133394017 533308810", "165695987 316168818", "9880456 341237896", "62626988 751882880", "35312429 606874397", "19198661 71376836", "92658545 408184969", "58203519 741158693", "93106246 122509919", "4712237 268619269", "182129262 2875471", "135468781 458083256", "176332878 402805128", "15928253 7479209", "116346782 282994869", "98792187 633234508", "37950117 171795726", "118086628 637888046"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 129514484;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int w = 25351229;
    int h = 12462644;
    string need = "186239881535586";
    vector<string> fire = {"22108129 8373883", "14513838 11712310", "19282343 4231438", "2257812 6435461", "4730116 2014429", "19838172 55432", "19636494 10887384", "24468230 9603631", "15572400 6835866", "5417958 869408", "14820006 9120068", "1041896 4130116", "11785449 425595"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 1878637;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int w = 71303590;
    int h = 155667671;
    string need = "3213479498540871";
    vector<string> fire = {"28082720 121386028", "32383033 30432487", "48463562 89700785", "69686478 25763365", "44269095 69287874", "17651266 108559554", "55556309 42654952", "18703592 111867577", "34601948 124117524", "22343342 104568918", "62824765 50798623", "12268970 40990399", "4682238 130167226", "33311197 101429238", "11149296 53697902", "39966970 7455907", "23700918 27682169", "54548077 43808510", "30255516 28620832", "9554986 81309817", "40438371 66171177", "41136039 23083808", "29083579 143921704", "65044913 109530985", "17971845 62124806", "38358732 148026186", "769168 34678973", "34945410 116690098", "27441790 109333831", "44166744 52340912", "9778653 18647940", "27469810 59590810", "62725411 8853168", "42790770 109306458", "49984983 90975039", "36627537 118230291", "49342929 7640625", "1964231 144023436", "1880214 136014797", "55868865 78986200", "60782867 86082228", "29750942 49564812", "3085199 73297468", "32085723 59331301", "67702603 10530332", "6183845 49965116", "42288235 83565533", "43355729 99986265", "19488027 139072267", "21563484 41043927"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 8755913;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int w = 855229223;
    int h = 57219178;
    string need = "5244478199414506";
    vector<string> fire = {"123680733 16364246", "681106698 50787679", "60891230 21136365", "589430836 27144646", "154789412 44957993", "283035931 14519347", "231080432 53358947", "621225835 21665647", "717118030 24724869", "146321075 40808695", "532548989 26630750", "141504949 22576914", "268274180 23357769", "477386 30029031", "197842979 49948842", "45870790 27570753", "491957768 43211094", "658071904 50938152", "48953095 51988683", "6953369 41639627", "249417432 44091754", "43418984 1890298", "532638047 6077473", "728592322 34938360", "762364038 22313891", "141914404 27922841", "10375569 6762280", "365135785 42134648", "123959644 14534572", "43375464 54975008", "149675570 4041632", "100725387 36931890", "511516858 10254347", "779401362 2480979", "152124365 25197209", "104341707 49241453", "670611119 23998669", "687727774 24891763", "126722454 42517630", "96993494 20596533", "638660818 26476991", "575007298 46865588", "778816881 33731002", "585723390 42279070", "18398628 2000319", "293331347 16369033", "19959888 34489233", "152208289 45568411", "289427296 687340", "122556112 19587587"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 39880753;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int w = 46892857;
    int h = 938646885;
    string need = "14273247131383525";
    vector<string> fire = {"20939438 211364274", "19710402 115540911", "491582 897612950", "16982264 111530675", "36281503 50861145", "9477503 377806301", "90481 87633084", "37695474 547384772", "45183357 367044638", "25633678 337700184", "11246688 911922534", "7450678 466488454"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 45588106;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int w = 114087714;
    int h = 199864398;
    string need = "13679205859486115";
    vector<string> fire = {"44727742 35711979", "25638517 155100937", "93613851 63876785", "45183107 169607366", "47443190 145459752", "73684043 180532508", "19508837 51878769", "41646221 73112249", "113721845 29507696", "69317311 1362331", "111833870 86992454", "70047777 27532597", "2827490 29811241", "49344668 52320592", "11161126 54165852", "104888889 73588694", "57348601 8385373"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 13936254;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int w = 114958800;
    int h = 223687558;
    string need = "21869004864402159";
    vector<string> fire = {"11087122 177403870", "64530725 42932031", "78905412 44825066", "41264972 15255724", "62518807 50068799", "106537321 162811567", "32651002 3538288", "108176272 66038166", "11887462 109272793", "77171290 4529010", "28294259 27596002", "81306193 160528403", "23509181 126083149", "110886261 167943887", "40117599 905469", "36961184 36211761", "95702582 13327787", "55394750 49994233", "24055950 50171111", "4685402 75075108", "59379440 190764703", "56724399 124198638", "50305334 104052661", "73345357 166510617", "92740480 140990020", "107716892 113195947", "68555419 121220526"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 6314223;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int w = 939727272;
    int h = 692861365;
    string need = "25055038336545692";
    vector<string> fire = {"239610218 421386009", "555004916 166103991", "684970732 394436903", "682274265 180637952", "317115602 69245709", "24507286 587143612", "372543804 187010308", "72291105 599645164", "244232398 162344554", "387948609 470021738", "601157732 466766381", "191783717 607616587", "484145732 238460371", "121164838 145432843", "49294379 622192591", "367097304 238165979", "832378562 413899572", "623428267 570778756", "614988380 399122922", "124887014 589052272", "334821478 218332048", "318820936 134581824", "830498658 169217929", "703850460 236730647", "65757135 180595835", "841992795 129606424", "103965320 377913932", "222456493 289765381", "268732144 23133986", "108159663 261131086", "150399032 295179973", "101948408 259184725", "519599589 630290266", "855827692 86174472", "688220903 174358906", "794579240 116468981", "769312773 638223842", "25855517 239145023", "30460160 100965810", "40664383 162739010", "358366184 282528280", "36335706 221687595", "682629818 492505450", "371283409 251673033", "758820324 526782416", "231174910 627685216", "915044065 34072465", "909052432 325175585", "551530808 418830578", "473767882 174640204"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 118650519;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int w = 439093889;
    int h = 62785358;
    string need = "23181435463016698";
    vector<string> fire = {"329909524 14865828", "406556098 40516963", "293950015 29942652", "326803859 57031179", "24298728 42507271", "164988212 28655710", "117883846 21688019", "27698254 59276677", "115838596 59538504", "332584036 50965156", "5786997 42948833", "105001184 20945121", "72734815 51668494", "165090440 30487112", "338997490 46783624", "137354721 20252528", "292662969 55926255", "16777188 49991742", "172359194 36285796", "253379786 4381382", "115611787 19087379", "323113426 22265118", "330681703 46097326", "64412933 25762209", "201116425 12174242", "169397921 245980", "17899752 36109420", "222364845 9771486", "186207229 44926331", "330020738 11450880", "405970493 40242977", "394514426 43269033", "231168247 54525267", "76069556 54609219", "76250459 28306253", "168681610 3983681", "357799271 62193023", "213911122 4436458", "77113377 8854865"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 5967139;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int w = 785252057;
    int h = 486546462;
    string need = "369490281316153833";
    vector<string> fire = {"359328130 27333302", "500166114 321964598", "153923242 348467831", "556813906 40899916", "558181639 363311522", "236270438 386542203", "130134202 263381345", "317166368 203351994", "616371458 356307716", "164719219 91861295", "561746611 343720710", "103574214 140347767", "11475524 80779555", "189104403 462810374", "521169471 2096203", "170380133 382199892", "42942425 170775984", "178551874 206119197", "635499060 108261661"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 13105081;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int w = 202770902;
    int h = 364857544;
    string need = "11146760459981080";
    vector<string> fire = {"180667828 273210739", "26010852 240097452", "42714699 234167288", "26711292 299019607"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 179195097;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int w = 61952129;
    int h = 306165841;
    string need = "18796059298624165";
    vector<string> fire = {"20234290 103433974", "42707792 226707623", "51518063 86200137", "6097550 50285536", "48797649 132635919", "33165297 205925836", "18311792 274117930", "21225524 14502882", "45067582 295484542", "9672643 132887701", "61604172 84664395", "5566597 116426882", "27875475 48723131", "37111523 121088068", "55529175 17544104", "21686977 128077593", "1248411 82717731", "11967216 208932672", "33589878 153648619", "31109839 179603081", "806296 82600255", "11906601 191160372", "52795797 266015386", "35412283 188359282", "18993270 34303580", "11745235 91878311", "41773669 238968663", "6317177 143959989", "45588305 133254227", "16460575 60126261", "43696229 162046929", "19635120 31239221", "13409032 200997550", "38210198 139617401", "39104412 21354879", "6033353 215830404", "36851440 126376813", "36803643 190521330", "14906024 88732288", "6459209 53863169", "20724673 79204446", "15213066 194343632", "56115307 60292863", "32911943 271135709", "46502747 286435446", "2228072 117281835", "37343103 195466072", "15758369 252564432", "36489258 116515075", "16722120 42331409"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 936549;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int w = 708348549;
    int h = 774677343;
    string need = "323042973307013566";
    vector<string> fire = {"583178338 555032594", "303509703 112624882", "698070385 209817455", "291507087 137365655", "178151400 509995951", "326554657 123333055", "11380404 247044228", "283334526 134954873", "310434341 427704610", "700358924 136551826", "237978567 370800204", "285069002 252908856", "170619499 165340505", "41043104 168577600", "260107926 13536164", "198151685 610660413", "84173740 705493312", "324841586 30157483", "434899165 155621510", "625871747 669403675", "700151525 284034069", "478390562 456889054", "49099862 130074020", "213176537 612734846", "683549651 642453821", "359413181 447913178", "237033612 158293932", "55344890 643637722", "595007280 310181685", "317047173 214255733"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 53624093;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int w = 857159398;
    int h = 856555101;
    string need = "1";
    vector<string> fire = {"17224931 274535129", "210741310 10615326", "354008353 276143111", "119355369 460791233", "83525285 837210943", "236148816 278269052", "606220447 190190161", "139151538 842189045", "556795372 3580576", "38921723 836011854", "770644747 465562797", "331755272 679159367", "639031269 276240686", "489160042 92087439", "80630553 427195486", "111919390 711029160", "476700652 430613666", "202407039 748043465", "677087335 21219132", "219104129 747222233", "341445864 145710405", "708141274 185479928", "7460287 168921856", "205092351 838445693", "25474728 455810402", "277754465 96342", "557999456 127731629", "520778728 253996471", "464526333 569991903", "543499858 339532196", "109759669 367120458", "787415561 283464507", "827757082 806813615", "604286837 1008331", "722399329 313896171", "29942408 665918482", "778377169 253675549", "43780672 123717327", "342692950 367329319", "26019428 318457659", "439083961 635344656", "48167208 721231950", "24948373 258163581", "407796869 641068043", "765216634 83012559", "388257507 9822051", "604484331 739550991", "495217872 318244389", "128115822 774566770", "180590731 322809540"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 177395733;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int w = 333480566;
    int h = 873515380;
    string need = "1";
    vector<string> fire = {"31085047 705749326", "160016869 242319632", "70106773 186979540", "271173734 102814960", "2892403 317538557", "248576296 841349937", "106001139 333736992", "145332536 457541866", "111867421 827039233", "331250459 699841753", "163726935 192424110", "257280043 16888902", "19386599 389560040", "134597099 701828444", "113848209 111638959", "11573202 14444700", "34805756 199404243", "328789527 191574761", "280527580 454737754", "242435629 198195157", "202135879 460204517", "313220062 578509448", "35102952 175124591", "271223135 589008007", "108568949 856804417", "287642852 179152909", "25206894 143288297", "62807773 105361340", "134569761 200124211", "204399868 30912886", "134680747 657843311", "321652718 700451716", "267639671 457362809", "241628718 122450551", "183838733 606805941", "54670110 673132862"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 134680745;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int w = 3892680;
    int h = 263316151;
    string need = "1";
    vector<string> fire = {"645166 220190533", "2727336 93856868", "3857614 6690994", "2805262 160737223", "428763 202183321", "3649933 171718000", "3596612 168996937", "2212734 127974515", "126241 191816434", "3811279 141719226", "3576244 206625321", "1775746 225912771", "3323830 6316300", "3398484 74836690", "3770127 99050809", "1035671 219686958", "1921856 120675919", "1745078 147174390", "1143543 103497915", "2084324 52077342", "3878518 190273210", "997308 11505518", "2103538 124877106", "155427 144489221", "716459 136241727", "1399401 13939061", "3275112 11651063", "2491735 105671745", "1068948 71384557", "622338 145016566", "317559 112370838", "3775963 139987912", "2321658 189011189", "2689576 1354252", "382750 254165297", "2945822 43040764", "3583604 88808523", "2368382 20331098", "690274 205229874", "2313384 254783839", "1653053 256099720", "3189195 187039311", "1178032 55712211", "3695150 58526696", "884199 19015568", "1814527 88251667"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 14126262;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int w = 783355121;
    int h = 262739384;
    string need = "1";
    vector<string> fire = {"304656259 106617599", "45628460 205767165", "328405675 249402868", "148973302 112334475", "263274932 16866379", "101731300 222795172", "62612827 86169831", "185339995 111473884", "143859764 11508915"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 454949445;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int w = 543670243;
    int h = 705322734;
    string need = "1";
    vector<string> fire = {"170565205 559843707", "414663022 217049596", "17621757 135069360", "498940079 218657122", "402795641 405430971", "369111243 183012877", "389143971 309970664", "331752505 183276658", "382520087 332573215", "248067627 65963906", "5569050 363104165", "293184932 115257598", "376706286 278972975", "319373637 186792062", "470094837 153446580", "85450455 12971586", "18253395 492150144", "384844148 111010042", "83841531 320630505", "453236549 64054097", "464844303 545862936", "4258545 97840744", "196701879 108909362", "245562702 62223256", "296087682 563255555", "299783483 444803072", "16808806 529757070", "274630604 11963137", "353059342 147787070", "141527127 104750630", "260478376 608912133", "230030260 357016915", "238470518 95112284", "362310468 165972270", "75572516 313025652", "102302098 23078738", "345801722 623430786", "209136861 60641641", "148088238 236648674", "177922903 499182835", "215658097 35589367", "168465844 28593944", "393116922 644213212", "514578184 442669733", "266774640 143167819", "232352940 25949043", "260905390 161419238", "132956702 260269701", "403184796 273538234", "430000358 172009307"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 170565203;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int w = 222325346;
    int h = 265880921;
    string need = "1";
    vector<string> fire = {"70504177 187619327", "32640433 55337052", "203687355 48452713"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 151821168;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int w = 338059826;
    int h = 504589774;
    string need = "1";
    vector<string> fire = {"189233757 126134208", "283753830 224771417", "240874708 479060056", "274543170 170245869", "327558007 341338303", "274467694 29780422", "315981820 228917305", "74169192 313890098", "323645806 222256741", "273725159 428575524", "169887835 41811253", "63017074 405428087", "152272726 225973404", "281214737 278540253", "195862196 72572314", "227383860 58530769", "72330254 152657690", "70624794 162710680", "337451883 27669374", "253985748 275338602", "255906336 264863567", "59438483 150500086", "98060805 22621911", "30870801 461016023", "289459 216701840", "102030317 107982892", "29892094 211566524", "159999395 150416992", "291131161 191583542", "99120078 217078358", "41061925 476270826", "78628910 286656186", "139408882 227368648", "325555570 135389850", "34322841 262936863", "208517404 481142747", "47891457 261590569", "12649587 365911892"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 98060803;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int w = 591940108;
    int h = 754547819;
    string need = "1";
    vector<string> fire = {"481120187 159167699", "117323602 285480479", "330521448 171077184", "51792814 487745018", "438723558 518556953", "349284986 717372787", "122746210 276593646", "368174410 471074", "4583774 141191934", "61209864 464348160", "26163484 513843108", "566408308 673754622", "259876880 88288365", "449828155 419419814", "553375841 178816159", "530057481 288063277", "116051071 333036786"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 240704710;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int w = 755426532;
    int h = 899775922;
    string need = "1";
    vector<string> fire = {"602053451 869374701", "316491068 415935180", "378047966 551565120", "20021586 393026357", "319680854 88870458", "201837970 1206921", "15539568 329489564", "310864023 169887476", "350285655 584455264", "81398336 604007363", "295457567 656930626", "50854590 137001590", "534362018 314186849", "253744269 49847118", "179628494 725012920", "206709374 494138252", "292805799 13993477", "314967576 164774313", "177867067 232083949", "742117636 705554758", "21038617 697534887", "36920017 217532567", "279592000 678512321", "287669462 177336575", "512570443 261734417", "624869290 791852257", "688620610 128124862", "171693380 577331113", "285387153 237236823", "55027487 114557114", "565818372 449892915", "584367652 765981316", "28070867 382918695", "267312133 274567704", "143858081 768196096", "557188634 326847285", "287841675 136490208", "632195263 87040600", "276626903 35390011", "103498559 320722532", "40435338 550655932", "87569782 84044187", "300542032 862537230", "59625146 82212022", "14727772 849664210", "602338748 13605382", "168837532 597021723", "61861024 867330736", "87128765 391992825", "253444042 117246463"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 189608159;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int w = 9741625;
    int h = 675988687;
    string need = "1";
    vector<string> fire = {"5498281 655588690", "9708605 242638155", "4413901 187505617", "2883355 272116489", "305650 419342965", "9642556 510907038", "5323757 413419588", "8992863 581285087", "732418 454937869", "3899303 225688366", "7011719 126549808", "6345584 544058115", "2705751 146705073", "322368 273421030", "1446902 572851727", "3063230 120709977", "5076939 308725362", "1955808 43185192", "5187554 218700371", "7383178 655636431", "7549195 409480849", "8235375 194270731", "2521339 529034451", "7711171 300834525", "5979602 52384110", "8471728 15799708", "44493 648967486", "3634101 225346486", "948828 290278621", "1807760 355702657", "1591681 612336673", "1842835 198341305", "7689506 283977246", "5388249 454675249", "2266845 560847694", "53534 285835275", "2211004 136213715", "8016557 99643305", "1189633 47582933", "6770577 57338365", "6170843 361705175", "6538511 23234025", "5258858 281624162", "9652741 119204291", "5094322 61221831", "2977284 28160719", "2652757 230971223"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 27984583;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int w = 860692591;
    int h = 846470215;
    string need = "728550642552677015";
    vector<string> fire = {"165706520 723366052", "320880603 200269007", "129069116 234740170", "717412565 177766853", "113460380 620677750", "377478995 306559426", "236852494 118231407", "304258237 668449259", "814726133 427140301", "859356743 255336376", "840868478 50853453", "618438014 82023248", "739161406 658365716", "330285403 603527511", "130007282 392603519", "628316051 807987923", "424348671 585729724", "85467488 420914392", "46490045 23822737", "290909310 43750637", "847284467 188125516", "422164745 199094497", "644804189 174632678", "527318271 696429702", "101918007 138674077", "485786528 112316417", "430926384 177562382", "155758122 753470047", "240311425 144692779", "427110545 361396760", "745520614 542058496", "71253615 326864475", "117605976 132190631", "727588581 441856273", "461414484 184409558", "124700084 59317020", "576982627 820547394", "166150381 166490562", "178192738 180448229", "385256472 144199651", "593509161 510966612", "66190574 715632821", "111574221 726759224", "678080428 670855473", "490204095 25521366", "268222104 684533047", "187668663 23412670", "191247399 518803944", "7957189 386643844", "5502987 240840302"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int w = 657483017;
    int h = 326425644;
    string need = "214619317243287920";
    vector<string> fire = {"96580914 206012772", "226915607 10557323", "355332962 32493239", "51680187 252799968", "163623898 123158863", "270189361 315646769", "1276297 53620633", "58663153 323737416", "104342977 240656784", "20709140 229979235", "2926106 27194580", "447240754 79905237", "496177936 93384785", "385296036 113821779", "84806384 266092194", "2901192 55770024", "496840808 277421330", "92014279 223412900", "44945151 283630734", "145952300 5142008", "290119520 252725954", "307372690 160552783", "57415980 160928837", "377785862 177521563", "45565248 21446760", "122037352 95084606", "335490276 72193998", "344515021 148799800"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int w = 863386133;
    int h = 448416310;
    string need = "387156423865000000";
    vector<string> fire = {"244126528 180270896", "49664487 112453000", "139991086 85251711", "523079333 384269376", "25966018 324406702", "158998435 18000965", "344989920 333579167", "582253273 134648828", "820829706 205685445", "371741230 102840495", "71775179 63951166", "431465353 124471404", "268090522 243889126", "642928160 279960486", "102956209 180544391", "28389155 201335016", "658150917 203753316", "534921958 40315903", "756727100 323143967", "862098957 392837377", "75836833 404271501", "55189928 407491572", "180941596 376622921", "122549006 175819853", "54638622 59004696", "809456576 382301002", "590921704 14351762", "667201127 45268808", "931866 139967183", "399278293 23044931", "849036381 168223097", "201496631 8521522", "2078149 166469919", "824384299 58880089", "322654217 68845945", "602336584 41130350", "670974065 76943280", "127179916 309482278", "169617443 37127286", "510265265 154227115", "221897194 237770394", "497263051 47746299", "684067404 282091694", "769110371 418278605", "212588438 188624855", "106391900 220582087", "194436036 118696667", "418090479 54533617", "123139714 361388120", "284186675 372919164"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int w = 214852599;
    int h = 837101017;
    string need = "179853329127990000";
    vector<string> fire = {"115315988 750599645", "33860744 638805823", "18928066 505021093", "29812566 154247267", "122394586 168248646", "125176107 413413370", "202840346 78543358", "209137615 240831494", "113736603 805653008", "122617931 564625706", "118189160 531196517", "140092974 37125369", "116511076 38898567", "95015036 196477764", "41638448 37044210", "67127036 171261564", "172405397 212157385", "80292953 34205151", "137202908 184390087", "53878342 803782238", "77709442 227739531", "155694162 429981125", "72092916 111382898", "19038430 541040074", "80414647 518993262", "102480107 136830035", "56812974 145580784", "108593435 358405104", "132773074 24931068", "83746077 424438993", "176820 242668853", "76652639 430747586", "202525054 395158526", "205865119 482186515", "33828898 82458188", "125322868 745167741", "98784541 289064383", "165288134 617408529"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int w = 870343468;
    int h = 916727817;
    string need = "797868067459848906";
    vector<string> fire = {"439511805 318027134", "153596836 740450596", "182306750 570115111", "207487549 369063271", "594458588 48002301", "49097715 271929748", "830675744 691269169", "243661280 274045962", "91867671 116503536", "326794746 127043820", "333870545 250963766", "582004879 78671799", "42280768 476059776", "72729673 602741268", "504920376 714690288", "435299188 560115305", "562532980 913395831", "608659575 296331256", "764291182 758155660", "140857534 553243999", "182960837 280750903", "39743203 737730234", "49176245 224091788", "215341188 463098808", "498429766 241992491", "417236369 913109810", "217320964 476503625", "837308751 634073183", "619065282 733876721", "42837969 824783086", "639233545 331994739", "18185034 213641586", "259101501 325102619", "780392703 635038495", "182234362 231063081", "449625052 350540837", "98596766 646950398", "308153181 915449458", "528976546 262220082", "407255032 884801174", "338012462 77127021", "2977691 236305779", "142502574 182060373", "358778242 2676882", "578086127 173069429", "315443186 32751342", "120881695 340302007", "12649373 38946124", "617143838 454719666", "178947272 138479729"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int w = 567232405;
    int h = 17392999;
    string need = "9865872652932235";
    vector<string> fire = {"554798682 9728649", "105518578 17264182", "21046642 5703145", "207602333 13770163", "466090546 293235", "387875222 17205894", "213426021 11537948", "136370269 13231433", "235128018 8961539", "9355298 14290415", "411701328 6509724", "231921951 7302101", "197830414 10121959", "196002794 991699", "165591425 15788235", "540830443 6404279", "207966615 7149217", "494656335 17029707", "454057127 8089764", "492657717 3380916", "526668801 5081335", "75877392 12121869", "357151028 1388856", "113066433 8695592", "481202256 13657536", "68053352 11843920", "30139032 9858561", "84765120 3626177", "317573787 7340202", "74475075 8464349", "247769437 5489255", "397873906 1727654", "551540426 3008123", "21342017 7955062", "426844073 15731398", "428373640 5043895", "478810708 8095274", "60934076 2541191", "117211240 9111818", "205432157 7161284"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int w = 874389155;
    int h = 612309999;
    string need = "447831546051456389";
    vector<string> fire = {"110652407 245520741", "410545797 295477632", "795785659 311141342", "383723775 581924037", "641910547 305436819", "59220691 71027283", "474854051 498050421", "350520491 464152839", "354382401 347033658", "196538423 50086689", "357929827 217266278", "856697470 108854399", "590954438 294775645", "485389252 260128158", "20599092 66816760", "544735746 4160462", "169315842 76270984", "132709633 126187105", "384633506 258711841", "25149684 97223430", "577248973 352513978", "533442524 361109276", "182437208 346655638", "591823205 511876158", "121700421 437736161", "197432545 389918094", "3544587 203590766", "472875282 248558981", "227052934 302811380", "288922868 119190403", "251390137 87279001", "9600947 159264797", "31490114 523100319", "570980561 82616264", "675939580 271380051", "245443143 584142665", "330276851 233250668", "354485014 171289863", "595513450 117242973", "603485360 147988916", "13621318 236153841", "258285991 392617937", "495586249 371705881", "107899475 151057163", "870479230 296643652", "180840497 164013969", "279180671 471102740", "27506378 6899447", "132686521 452635349", "69775565 143426675"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 22101626;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int w = 391277880;
    int h = 290848311;
    string need = "67850848187924568";
    vector<string> fire = {"93017359 143817745", "102857716 193490835", "158508965 102795567", "272858604 87956364", "42685471 116307097", "219692741 35265579", "58341096 9972462", "311914535 213253474", "139427123 284097512", "196477465 149082281", "47776147 222599444", "332774 256718449", "272169060 257717482", "218296869 267815993", "200479216 97766304", "46933832 138280049"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 29705790;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int w = 601128044;
    int h = 33888546;
    string need = "6674411814056258";
    vector<string> fire = {"446109374 11082100", "282108278 21941679", "12843952 33263127", "342469769 3307087", "142728543 21537198", "452904456 20695580", "137253200 27089459", "445864104 1364437", "132934237 14438220", "263500474 22322583", "247611983 14025735", "292179165 1039182", "311462776 11538309", "202182277 16262325", "233391430 12175961", "80476723 9934586", "125239327 4962738", "444143846 27375338", "125587664 28443488", "319149109 2946238", "426398308 5627659", "309353319 24875611", "1972833 32431155"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 25285364;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int w = 807226997;
    int h = 198354207;
    string need = "116402769266836057";
    vector<string> fire = {"83226390 119766981", "15229306 175968152", "788686925 29469132", "421237774 135841638", "143378712 2228835", "155271446 156713389", "674405372 160643165", "617449243 30324178", "266675194 162694238", "417105449 164828471", "642335128 90142784", "132905486 66627565", "460165663 73391221", "331225331 139781608", "265935062 126593318", "434422445 76599982", "687210291 28815599", "8196420 99177921", "747552407 155831083", "337370868 142735980", "713310530 93328076", "60913114 105891256", "118090448 163630628", "430909413 23983531", "511955985 38113910", "13666283 16801403", "722906522 40116654", "6595730 128679436", "257346544 3670609", "186687121 130777177", "3469779 62375097", "550077129 146837847", "154405710 134320935", "156006356 124256009", "27094883 117498682", "1320790 181838680", "110284040 138931200", "703466675 49058913"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 19042519;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int w = 840670186;
    int h = 48002177;
    string need = "25616320399443183";
    vector<string> fire = {"527891225 1949360", "688143001 36111861", "187741042 45896091", "780302828 4625467", "434973595 28697318", "823868473 699419", "419505450 24989217", "107121640 37210547", "745870242 43746354", "122806718 18859368", "184477799 10323071", "143851917 38119205", "573397611 36738473", "156352660 18754661", "368181360 46864144", "180037089 23195785", "242266256 13861102", "510814961 13187026", "737783043 3733160", "232441192 16230939", "813001407 24901983", "55278041 18075855", "570982779 18866544", "166981296 24560373", "73991826 17022930", "207874735 38577721", "453204443 19713884", "744241592 34849956", "177722760 10772720", "71583443 47914298", "596535560 19536577", "65432981 10586156", "187578040 45978332", "319809796 27220856", "365513052 27665084", "89057688 44954833", "305561951 42327523", "123545882 2975605", "578516138 12632738", "693976223 32949845", "412975718 25652810", "507971150 4461532", "657589529 19920987", "222909870 30816629", "270661771 23928888", "725228527 15595727", "406785887 39278440", "103656894 45195337", "768790248 6572595", "290844736 40695025"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 10220694;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int w = 884490252;
    int h = 400054547;
    string need = "91097352010273337";
    vector<string> fire = {"173406866 118608622", "277214920 216197516", "272122617 193693382", "24819428 234167744", "75839282 195103178", "862506463 156461533", "67490524 162850564", "847368705 397228526", "882226716 139595049", "639871020 181699417", "236624880 102499727", "224984483 203404473", "459093639 301249514", "139450267 208804609", "422783776 342048731", "85819526 59735732", "493374176 53392471", "29666222 245223630", "788545844 12664667", "193971459 57408739", "108180657 173845401", "158404216 207289701", "98959623 254094873", "201375063 151570172", "501647204 242962257", "283085 6618097", "697928653 94344883", "863831925 228825073", "337773129 32097405", "48610293 292006063", "433175354 120701504", "226589551 71047459", "762257026 55687303", "96694319 266356087", "365080082 368816105", "478448479 242812816", "32556854 181792862", "119765040 295230602", "318843948 234209941", "150058613 71097434"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 67327011;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int w = 729368279;
    int h = 478707865;
    string need = "263833512281843725";
    vector<string> fire = {"477056520 356389097", "520621849 192387988", "435913517 277075882", "9756880 114415248", "549156833 255377214", "622940148 204729783", "43382813 239606056"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 64312770;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int w = 651509881;
    int h = 105199574;
    string need = "26511440329302994";
    vector<string> fire = {"296716843 78095990", "293959129 37573424", "118918740 59773025", "474385227 9413471", "622281974 1955478", "334637159 80709069", "161384059 818580", "1475013 7510089", "177117137 2220514", "152548072 45239194", "510223499 81993592", "499193214 80107830", "562723884 3814599", "394408881 69398982", "546469640 35152528", "149268955 85124921", "358900163 88020972", "325226042 31324644", "422696852 84657040", "187260054 10890789", "250443751 57305696", "484630481 7291345", "78966605 67460293", "58588652 85351985", "558700011 69171210", "187535167 72598123", "155381543 91282998", "91579762 16705761", "260430649 88674293", "248276435 100060426", "246528339 75702433", "141729923 13819893", "576890427 14397797", "343679803 38582385", "183050092 60965359", "242966181 54542288", "159157471 92360302", "559010394 84607346", "342821073 20816347", "239800229 23497313"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 21262332;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int w = 354581241;
    int h = 784019423;
    string need = "53729014122769463";
    vector<string> fire = {"319545180 542592853", "269113374 483825375", "114041162 25232513", "290734982 75655391", "61470439 224437474", "100512007 495735150", "72101364 142772903", "117575247 152883344", "220796835 235180610", "117349023 619662331", "259402477 56159351", "158489694 334696561", "135516004 203244356", "149139980 305868084", "270773770 91363099", "221128752 256425684", "192085200 506136416", "76959704 275011731", "234463285 179133207", "345626443 252514988", "2961879 629597744", "6609789 409693284", "131366407 161248879", "294794 111266042", "8365394 89840365", "161392928 416063384", "12840833 765794914", "151242909 301480712", "83070621 769554991", "114144184 307597794", "328556118 215857464", "162363857 218394170", "6321980 133962668", "160060459 10230426", "120841838 398821787", "312511670 671306206", "252296110 12783265", "41830537 619140819", "270877505 157450376", "27697019 438072124", "67716800 197902584", "145511964 258137492", "306629539 243780056", "29127968 405845560", "110321397 493061151", "117517791 737538395", "12422973 145644030", "81458524 614688534", "128806491 179336438", "77400346 106496488"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 57987911;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int w = 850054304;
    int h = 450919894;
    string need = "262579294205300670";
    vector<string> fire = {"584224 326748715", "128066434 2139980", "89067286 437430749", "15738735 148112003", "149106057 341168899", "840606681 104730726", "81036828 259689358", "749465084 339505149", "315207381 182850067", "603942218 364506644", "848163133 34934992", "729437986 243022531", "37571172 443283390", "353469256 196724952", "638833952 243794102", "493254705 87202972", "686456722 192049412", "42797291 104666759", "212747774 48355847", "172965236 394145319", "371008079 107586389", "427968610 23726057", "461360292 395929673", "139925592 35163770", "112687907 34483977", "300748636 81374754", "828329397 104530212", "605521116 311908230", "82494092 403862357", "28728461 77934306", "14716359 72668939", "146337523 400457894", "823417232 46287556", "223414037 106662369", "445988333 289836346", "34451795 390596750", "2092702 190409546", "198169557 316014638", "771458805 226944119", "417884111 150383524", "417056595 442533342", "54594684 201308339"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 30965432;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int w = 708224353;
    int h = 56546849;
    string need = "7192618997906059";
    vector<string> fire = {"26270409 23395107", "171836763 9503162", "287562669 6709748", "199001155 30732611", "38424688 2845101", "477007393 32110912", "57883784 21161631", "316099595 44891532", "50516039 47451886", "50817335 4100965", "501842789 6848680", "533034212 54066246", "357744724 5820537", "279419773 37015495", "422925094 28632715", "478208985 46738236", "319473888 36619241", "51184669 56013622", "363735770 3073450", "1906470 51449064", "103268861 54447471", "383486783 46005878", "404034883 4398267", "179595801 4454360", "314904623 27313655", "351135221 13557118", "136545810 16359815", "128361801 55567259", "17468078 33141666", "8241595 40230144", "700776701 3620235", "227401497 9953480", "381674862 40236774", "115022577 47293440", "147865323 24341081", "149800549 21367287", "349974214 18810209", "87967002 16256273", "281869335 26697462", "284511833 47948930", "309521484 10174610", "291059879 45725206", "429102013 10672394", "350989119 8288445", "302547432 13326674", "256842050 33199994", "212464060 2476171", "10701771 48079104"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 33143492;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int w = 948500689;
    int h = 631166572;
    string need = "564985810569748863";
    vector<string> fire = {"173043545 242955146", "88250270 330499219", "872684585 422426903", "364557206 504048501", "620606184 161408666", "57237537 523524512", "725009324 291892798", "885393235 349981684", "851744196 321950328", "655790931 173245867", "379626374 256379615", "265350341 396067018", "166859450 149025111", "474859397 434226659", "152890164 166671263", "395224357 468195161", "443830514 289860338", "409120442 59504273", "17451547 414007981", "112766081 376763471", "540705701 106733817", "243802290 238916334", "296732249 233445777", "285923913 90961434", "785379219 129040991", "53439469 441952819", "289864013 397524297", "469792738 146931386", "16450435 117133700", "39997265 421407098", "121869956 462279517", "554012558 14941066", "731362510 395964630", "921660703 405925756", "816244460 18032232", "343811431 172772050", "890521222 442427540", "123042528 270565996", "632601883 251204590", "947911912 512384108", "28673327 188810888", "123449704 570091172", "853279106 172150702", "98235127 352480177", "595867491 164110332", "635084223 421854185", "867157631 187871877", "12756167 324087361"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 13457298;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int w = 331272251;
    int h = 874814330;
    string need = "142051748069686045";
    vector<string> fire = {"315038417 480476536", "57089791 651671151", "60214959 75469546", "87272781 766145748", "293975444 872341414", "241830033 485778914", "311874855 5002082", "315810895 3961376", "41688476 310950601", "122045383 359973709", "325038611 526422828", "226956309 113532738", "222655118 10355632", "139286767 146532246", "49508733 97435824", "133393334 232794289", "323514949 419733372", "189513686 94761817", "58350211 54096858", "174422956 319683800", "98421945 243385961", "30050358 573436439", "150387703 93388224", "174134192 273073124", "75971034 493624542", "13648628 24916467", "130065697 776889091", "86653800 19263367", "157500228 314154165", "72483607 290193486", "162559259 635190868", "158611926 731396595", "50894726 768544872", "72393258 481855871", "233584075 819648815", "71804677 60963481", "287786412 84854456", "253385666 134539311", "87535493 500899775", "206598580 503233612", "111893963 58196048", "67722238 134800422", "231627674 413795200", "273139356 343115343", "2023007 48850560", "263277146 1952197", "292927215 96007932", "273283219 596595527", "158765811 128931505", "79225438 826722780"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 34278780;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int w = 100371009;
    int h = 966181372;
    string need = "58066504466854336";
    vector<string> fire = {"68486255 733804456", "95150477 160241524", "26910697 103268431", "83814585 651672829", "74553859 754901283", "55726157 565506964"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 53925347;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int w = 429767174;
    int h = 956128979;
    string need = "274427637807829073";
    vector<string> fire = {"135590800 186196300", "215603138 938678983", "114046657 378129192", "162655167 43657289", "176126733 918659695", "155078828 147447703", "79941279 569393932", "115945461 228331795", "335924684 72288047", "218589791 659592595", "60071284 446291477", "28267611 905764717", "67204706 831157045", "19701475 39529426", "194931029 930222781", "79309935 607479158", "242999197 787236837", "392455609 7742309"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 51611922;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int w = 878794768;
    int h = 990292435;
    string need = "72245652513735202";
    vector<string> fire = {"478391443 410718498", "405958106 585395854", "28768711 635224835", "738002298 298463769", "699765253 977651134", "873118354 24466664", "501775194 8863361", "724294358 406618470", "811648771 563315631", "67066145 312343591", "104479591 463166352", "408808462 18386299", "757265522 878465120", "330170446 668805454", "599650519 78883995", "271313279 973529662", "149735063 300096563", "660759643 407944270", "183058947 540447001", "125207246 475222442", "445610813 406032405", "539875495 55536860", "649074717 46356411", "832333439 333401219", "168507466 667035936", "27479269 733052908", "480549539 980382651", "16174769 133939962", "412124458 370757156", "850059828 461958158", "523678906 781374625", "859017697 900388570", "24506293 708056305", "33154808 805257786", "302261656 813725331", "21824321 581233230", "393688905 376410996", "332630228 662966754", "282731369 926556894", "308451290 708079736", "68619678 439184135", "73685934 690674857", "108459707 243265199", "56978858 222237889", "42576905 276493463", "572384872 908529036", "154484158 577806566", "134324783 715307074", "37857241 222674425", "641917606 820545328"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 129923756;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int w = 372833341;
    int h = 892591731;
    string need = "17602191013988004";
    vector<string> fire = {"78399156 133535389", "147848921 801489892", "245582056 856548775", "178004691 359925889", "144835505 370233680", "159953414 152309362", "151109767 326409114", "69973495 657231508", "203042678 491403942", "69120507 466897875", "103992330 594848885", "167714421 146655458", "257777628 124570061", "170572831 472371264", "216257364 140402685", "96950617 105977325", "92135206 677942063", "109892552 830186083", "109750758 242155967", "25467230 528961679", "58400972 484194269", "37416534 120019766", "347689637 387107087", "39250713 61052295", "227281302 311273914", "232130953 250204905", "68688287 147820230", "95146680 522921588", "299072781 27984383", "308642380 303406765", "274775910 9383268"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 127423340;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int w = 415976696;
    int h = 523950920;
    string need = "69845696150730987";
    vector<string> fire = {"159227047 146575366", "248937999 31912196", "13900501 299918620", "69389068 169637955", "95457131 144670907", "316798956 455223060", "114228032 142509392", "187042734 150610654", "180040334 47917843", "189729029 506433573", "249328081 367577041", "254950753 128228310", "89743903 269452463", "259869793 205319268", "371821168 2588697", "150542515 47272864", "334929410 75986274", "242670660 130921903", "77810448 208091656", "168009348 179324163", "379944060 15047488", "87006358 499188549", "372357827 500336581", "388318294 147756819", "120799601 452324286", "183532709 13729617", "36500703 324718621", "105915926 445659753"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 53438559;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int w = 953029992;
    int h = 21647829;
    string need = "2348722254932257";
    vector<string> fire = {"792280081 7357159", "39693222 8193784", "213327868 11624404", "952234404 10348828", "18451521 2627867", "190579450 4174100", "881820961 3356026", "67979981 14222045", "171394802 18616710", "48953390 19116041", "81159148 8634542", "868079148 16683579", "140071446 20806586", "768035521 17879481", "157594866 17419747", "297235036 19310879", "5114555 19118703", "802555559 8099834", "248767131 9943800", "665359167 9266946", "430627844 1207585", "333560639 7800306", "125475990 11348300", "690498148 7684347", "358007981 17982918", "293357402 1560378", "318811063 2674494", "786109701 9490687", "433022832 18488340", "4060223 19009584", "943425764 5816365", "499576944 17739839", "385589548 20401865", "116831300 65028", "54067147 12923154", "380196298 11526759", "388633967 11477666", "927627785 8067775", "205823426 8692804", "185661193 960364", "55331359 627329", "450248777 21427611", "826188084 21335099", "936381203 9745110", "446700537 4777736"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 33705674;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int w = 270862055;
    int h = 674934803;
    string need = "29715465233924454";
    vector<string> fire = {"227414701 657070492", "239133937 160168823", "102158835 76144235", "67405311 31151331", "24170811 189703185", "98966461 355606681", "143129405 52633711", "67792441 278207057", "169090171 338585887", "198913311 212275922", "71053943 390983793", "4739519 376777566", "105880322 225929957", "89594338 509315320", "102583275 261549651", "186318587 581735302", "189045154 463761719", "209033003 139560244", "117499569 448049727", "234134376 282254952", "15622400 148756902", "260970246 15342190", "212925290 90697332", "55268677 231171256", "236474444 466988448", "53348614 535251929", "140784628 596943219", "144632611 85330033", "69353872 115404308", "211071040 96939827", "124235186 664023137", "73212112 245971076", "13228587 623997168", "25600946 74291870", "41172421 186467759", "113651608 328946141", "11283765 167237341", "145608047 325480332", "77924889 518124237", "103872998 466886247", "40720568 168705761", "232470360 38315312", "119794248 309282637", "230886842 594569271", "206105713 338789680", "145719133 441600568", "56576193 300323902", "207870014 69953641", "68413294 58124389", "173961301 568197974"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 42008252;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int w = 700769512;
    int h = 224690528;
    string need = "16105333859391293";
    vector<string> fire = {"111278475 66784530", "6918916 218079741", "264139152 46528118", "663173539 32989053", "523662693 37873257", "37810714 109879875", "697947780 151188631", "409485597 209384747", "37831696 191495627", "680669227 91948715", "201709875 215440104", "341011254 160266653", "674604607 24752249", "34810434 106136316", "141237757 100697095", "628524119 196214329", "186808035 5437412", "602871400 71584527", "467273751 194044816", "600210103 674674", "117895843 63420303", "246710146 177852962", "162264022 141943872", "3190834 15254756", "34545533 140004414", "590717585 28758285", "100141907 81642416", "402140069 175268582", "581878487 91887868", "578174447 128897526", "527907259 63627355", "134660772 140829665", "369357753 216189362", "279328625 26211351"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 61842726;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int w = 882437014;
    int h = 491890107;
    string need = "752065720";
    vector<string> fire = {"408648154 334574036", "306316690 39037675", "592997242 298107083", "602002640 258255650", "371441267 49216087", "689194141 474232738", "583150397 226546275", "409963077 406170975", "404554092 433519025", "171700057 373185383", "153742440 241235311", "335548223 134382372", "198433018 63548492", "435010557 470860405", "586635299 109596352", "734423028 122669130", "846336759 224310419", "437520078 410903739", "141410743 457553867", "134216874 319800097", "785740585 355713076", "855767757 182131326", "872977536 279175441", "325386136 446455929", "128043079 153995311", "713266270 445751146", "849222702 173343452", "180927484 146204023", "685302438 341626871", "330391076 175488485", "122689112 430476790", "458367298 184580393", "42738192 449381336", "724772812 91167399", "197409725 461486608", "224804146 476455164", "366709973 480028208", "32468072 45214354", "69425693 374230315", "730775491 418681374", "172439631 214303678", "135338539 227649821", "246734177 371643925", "850759491 302233161", "155168962 26997647", "16468723 61658616", "855773607 461696727", "708329580 166601821", "542083830 77732633", "189223002 216295888"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 148013956;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int w = 511547746;
    int h = 19412429;
    string need = "234645412";
    vector<string> fire = {"285827232 6826707", "459523077 18728097"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 285827218;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int w = 608482957;
    int h = 915335437;
    string need = "671862627";
    vector<string> fire = {"381987134 854156537", "72354597 850172680", "253157218 89005768", "332549009 543392058", "242723534 93809773", "260542764 830398284", "305946208 579835697", "178383977 121731782", "310749877 475820970", "498662089 490097430", "330788676 94100703", "477043511 385911631", "122454543 15413300", "201868948 560190770", "287141410 848945043", "581746315 640145744", "62531328 41133227", "133425085 628988503"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 277694274;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int w = 235795319;
    int h = 130463236;
    string need = "46909876";
    vector<string> fire = {"63926978 127157729", "55330348 18612385", "125446665 100735602", "45565854 56135115", "128584873 15476508", "93175432 25549304", "133392040 4892728", "67813188 91202717", "97589483 80289814", "211853527 104110277", "172745348 95882199", "116366201 68522202", "76855820 115868625", "165282169 97210461", "79090474 32492669", "220468894 49286150", "185354403 88909850", "194582027 30048549", "50918222 72894756", "29204306 114765066", "85626799 22891220", "50481802 22192490", "43016635 53112183", "15603620 28529685", "215155136 94366483", "114713241 16724022", "103693578 17936750", "159591746 118570547", "137119401 36957132", "221567286 63525351", "230690343 24721366", "219860053 114509748", "5010706 50302030", "149401500 51684172", "195710265 9587900", "44286902 96655662", "136441416 19897835", "100764940 103649539", "106221326 15552959", "217580837 24664528"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 32231515;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int w = 510779278;
    int h = 705147387;
    string need = "531576747";
    vector<string> fire = {"387752009 297454907", "168531879 29284510", "122001222 172327838", "402770375 263369067", "482311880 140690535", "202227040 333539967", "165020927 193104278", "3100875 358361324", "203572101 200635730", "251752989 316742843", "427850167 253002215", "51403660 257569371", "464954604 360168901", "276221038 215569676", "336575099 26513350", "254143092 251549910", "472364526 592741583", "7177362 137063063", "267235462 290521211", "157667218 292542997", "150121082 393974246", "91072881 512243096", "279609414 345375928", "272891699 136867749", "291099025 166791582", "98648 690902255", "285436122 264811747", "299297682 227485445", "310121944 515662205", "383605220 89984680", "483930760 47476440", "238497144 321539746", "102101994 428521380", "391251157 347104452", "267670048 439664470", "183380354 421813732", "399151056 77539500", "19976076 8018494", "803310 242524957", "303484389 124846091", "461098065 446955035", "363390429 300168970", "1602947 213542586", "52408789 139074277", "190273261 241546221", "174897391 282923768", "91589310 601392713", "121684757 210488845", "368187202 64845600", "176984515 257210851"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 189484887;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int w = 95460773;
    int h = 299127266;
    string need = "266168166";
    vector<string> fire = {"70625180 26918748", "17275213 50277155", "28621887 143332522", "11315131 226584592"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 84145638;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int w = 888521929;
    int h = 572167060;
    string need = "508382979639609025";
    vector<string> fire = {"277026064 424660074", "180037399 227046186", "19383338 24446737", "370495204 421890369", "123975910 14976136", "647937170 378231783", "307405819 236435053", "49618674 185537868", "36823496 86649572", "635004710 111074250", "359794584 322128404", "847539382 478814863", "51379347 203846417", "30384563 17871707", "35834569 526626268", "735916728 502789271", "425603733 45468264", "259538579 427540928", "422949661 100607865", "428385646 210012098", "604327376 331520884", "315520206 280224894", "74390940 319846489", "628934748 267986686", "114750248 51917436", "114765935 341928431", "95689733 29132023", "807675956 404314097", "112689057 568530338", "677550261 398944792", "686590834 462474599", "432065082 369637345", "371293566 154144109", "304440682 455457586", "564216081 372909775", "557368188 474150729", "675145394 392249901", "277035816 381571735", "56965195 358643187", "592724666 389823309", "38445384 321026450", "324457877 227951397", "327621391 209570846", "44771669 22578405", "726496855 60378986", "205035489 406914415", "671731390 909027", "702601421 332151434", "14706971 77587814", "45968637 322143374"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 1052;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int w = 268753509;
    int h = 345262671;
    string need = "92790554202097818";
    vector<string> fire = {"20476198 84352264", "137992809 143756184", "110047279 313954810", "72111288 144935431", "158645121 268380947", "259059549 77028250", "115542235 18535519", "193464509 273002967", "246389564 159738338", "51707784 46512342", "125505381 164066187", "42980944 281864485", "248910116 196357301", "141681644 165664005", "216227518 177806454", "93600520 199497848", "60512038 221546469", "166683892 89767505", "107223074 210807460", "59004220 14052509", "220983722 70187594", "41282169 320173456", "65427975 161143810", "215827003 160398125", "224080513 253454823", "13467231 162698889"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 1223;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int w = 191867414;
    int h = 544752667;
    string need = "104520285257447999";
    vector<string> fire = {"108184688 174340445", "168475518 389460204", "19454719 244614290", "169410962 460677996", "177889091 472249919", "124700014 67679967", "26013277 246545926", "35678065 143338263", "74794179 316337107", "40993665 296312503", "96418204 397381843", "109732316 225378925", "52722605 362962961", "141538497 452554007", "122839411 104829156", "62086273 131016875", "66240279 383539939", "180272513 171678217", "158341883 507694565", "3907827 63082178", "86711192 409975677", "154482689 47468773", "129849184 141831618", "45954067 429434909", "187504034 475642357", "148731914 416147638", "141959450 247727441", "24497595 391460130", "12151761 490939522", "61705197 517955788", "187584797 125533448", "172193563 383921977", "27317871 151116424", "3257766 448969315", "62299543 44292929", "49698544 479134799", "175624856 261945083", "107697437 54852470", "61456389 522161531"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 1212;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int w = 795783902;
    int h = 322481577;
    string need = "256625647047140943";
    vector<string> fire = {"141721751 185122152", "139066231 319471199", "456774862 310843915", "45493559 133915483", "374624817 176615996", "536917550 146414044", "232171255 201829027", "727425819 269379242", "256852708 240721646", "609298735 178002032", "766677114 253475517", "714653360 94511655", "778979600 218496062", "726050995 299520304", "100296197 294077289", "226197659 286762647", "405262227 124678171", "12705794 225481713", "589910598 274066505", "369204789 94103754", "555708757 318738271", "105133960 237839486", "785956534 304887520", "471908469 157535656", "179770510 234509858", "635027400 73469972", "612544498 300406098", "96377618 253094703", "118756041 152742897", "195661220 110959384", "698845801 151933760", "224357176 62679963", "245725872 151575654", "107890108 3069252"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 2136;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int w = 951005398;
    int h = 206974178;
    string need = "196833559896798785";
    vector<string> fire = {"523152371 64968344", "31098232 57102323", "189783961 21836904", "187719707 149106811", "361529292 51985764", "491374126 198789246", "785270470 92283394", "528584479 125096009", "425630266 203370013", "76422446 98180563", "20718713 91780544", "661013107 1860711", "388271953 143395565", "782961380 147185302", "62999821 54526077", "176029530 84610236", "87711467 103626816", "51767633 75150143", "742689283 170256097", "802481035 121047916", "687769074 80787424", "410587725 155835867", "386264860 28236478", "57870058 155515086", "938840483 122064296", "764990124 193742255", "703583074 99048272", "260738735 4870944", "372277128 73813352", "748577893 95976846", "897538422 67955591", "419694522 168076568", "792132549 149051041", "851877434 7471181", "91031737 176092408", "328556046 109185067", "17219490 5894801", "871106654 165967580", "141594822 22246723", "275935360 134751784", "117810253 185695877", "14745026 54037038", "140059212 18725543", "11372447 139736849", "865894381 155245623", "352056465 29780464", "92762199 9635864", "54938778 139903248", "617983225 46479103", "926585000 55770721"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 1771;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int w = 6;
    int h = 461799288;
    string need = "49638838";
    vector<string> fire = {"2 4357254", "2 405792491", "4 2408067", "1 67848165", "6 193239011", "3 42347052", "6 127738882", "4 405828825", "3 96339117", "6 265980209", "2 245699041", "3 444098301", "3 235648158", "6 26011586", "6 374887388", "5 327965662", "6 432279734", "5 322180434", "5 410526474", "6 86581513", "6 297532079", "4 77808074", "4 380255711", "6 404669072", "2 143651905", "1 354376684", "6 91349237", "4 264299838", "4 68791667", "3 40007397", "5 7426401", "4 274454990", "3 240278070", "4 125498422", "3 87851210", "4 411817268", "5 218210905", "2 252615554", "6 136356234", "1 128483282", "1 214578397", "2 375050908", "2 451664732", "6 260524526", "4 248819974", "3 89204027", "4 43670219", "3 157907280", "1 460511331", "3 459765199"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 14054473;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int w = 6;
    int h = 734898209;
    string need = "3043688872";
    vector<string> fire = {"5 185971430", "1 264016667", "1 180612059", "4 32026173", "1 248455428", "2 383070752"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 25837014;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int w = 6;
    int h = 320458935;
    string need = "217519519";
    vector<string> fire = {"2 76484450", "1 94436962", "1 69165606", "3 94969256", "4 159514818", "3 155355359", "6 83072379", "3 158592779", "1 267318868", "2 26086452", "2 112431519", "3 197461912", "2 286008593", "3 213959613", "4 229359876", "3 31263604", "1 171527010", "6 295617454", "1 276042626", "6 27124515", "3 284954446", "5 203086066", "3 305107955", "5 193763823", "2 219029440", "6 316146034", "1 254360430", "3 203924955", "4 161461346", "5 160958468", "6 143675295", "4 127231494", "1 171107522", "1 206800652", "6 306659752", "6 162460541", "4 49119699", "5 226753526", "4 4534273", "6 188401027", "3 260573324", "3 44364500", "5 288311550", "4 233678656", "2 290926048", "2 130285713", "6 308779083", "1 137966062"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 6304553;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int w = 3;
    int h = 54952264;
    string need = "46569426";
    vector<string> fire = {"1 32859225", "2 32831923", "3 13047939", "2 28407493", "1 39206112", "2 38831682", "3 16947137", "3 51687432", "3 49823092", "2 50816598", "2 24168035", "3 1598251", "1 5666523", "1 23884782", "3 43762527", "1 6582557", "2 12229501", "3 49573265", "1 27474379", "2 17360194", "3 7330557"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 1642266;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int w = 7;
    int h = 383380595;
    string need = "1524793596";
    vector<string> fire = {"3 187435970", "5 175138416", "4 219974881", "2 204726187", "7 219930353", "7 264367357", "1 238577496", "1 62918013", "7 200221743", "4 70278588", "3 69754347", "5 125771176", "1 164046646", "7 274503078", "4 101616188", "3 52556724", "5 134229491", "3 240379478", "6 367045405", "1 280996368", "7 253085982", "3 74210718", "5 245049468", "7 163572450", "1 275534629", "6 241069605", "5 336988902", "3 187649990", "2 40070300", "1 148822928", "3 103960257", "1 165078074", "4 69714384", "7 43694335", "2 273716280", "7 130031506", "2 267933513", "3 235080378", "5 286631532", "6 85518213", "1 121430328", "1 109180569", "7 2728174", "7 6290886", "6 83205178", "1 260082062", "2 47884954", "2 205122400", "1 265530217", "3 55869727"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 2231472;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int w = 894203402;
    int h = 6;
    string need = "4485068724";
    vector<string> fire = {"234091491 4", "382658885 1", "147405027 1", "695067918 4", "842340195 6", "608710132 4", "287390116 2", "228508218 1", "500976536 6", "268422224 2", "607474591 4", "217591519 1", "352041699 3", "79171284 3", "352631052 1", "207121453 1", "10389875 1", "630948307 2", "132398588 3", "125308313 5", "69279901 5", "882248049 3", "84974327 5", "552376147 1", "670227347 3", "374519379 6", "95690944 5", "55310830 1", "764991112 6", "615892459 3", "413037426 3", "246287647 3", "852603879 4", "748880486 5", "268651148 4", "295667826 4", "264265709 2", "452540454 1", "249697429 5", "175199065 6", "378210196 4", "381139316 2", "57806111 3", "99489410 3", "132006388 1", "92509199 5", "390557283 5", "71779696 5", "300062421 2", "5110068 3"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 1605126;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int w = 831148448;
    int h = 5;
    string need = "2269770179";
    vector<string> fire = {"659897087 2", "212491444 2", "102107448 1", "238872254 3", "699972708 2", "313508155 1", "561162746 2", "519871470 1", "640050648 5", "712475495 1", "828457978 2", "436281793 5", "423536912 3", "355999991 5", "569239688 3", "417557428 1", "434482109 5", "597027717 5", "221509148 2", "204132094 1", "826988524 1", "503000354 1", "49938657 4"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 11403159;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int w = 50642063;
    int h = 8;
    string need = "53769528";
    vector<string> fire = {"3790246 5", "50039267 7", "6456544 3", "5472942 3", "12655697 2", "7633886 7", "45987548 5", "101312 3", "37272388 8", "32767029 3", "27643523 8", "26404767 4"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 3935759;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int w = 86478622;
    int h = 2;
    string need = "166843197";
    vector<string> fire = {"10942209 2", "30610447 2", "24927296 2", "81207196 2", "15301480 2", "62966650 1", "15923613 1", "84368606 1", "65193748 1", "19295787 1", "20285788 1", "69958166 1", "44002705 2", "5843131 1", "41852721 2", "84249266 2", "131736 2", "67721627 1", "6788495 1", "58831724 1", "73975124 2", "44859250 2", "44538787 1", "23572212 2", "53409527 1", "17805311 1", "80983279 1", "66170213 1", "20771135 2", "69068368 1", "24952184 2", "16063800 2", "52510036 1", "68117611 1", "22370548 2", "47795407 2", "59016978 1", "13901881 1", "75224950 2", "8336019 2", "40350508 2", "79066362 2", "12336756 1", "10344260 1"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 35256;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int w = 347374364;
    int h = 8;
    string need = "2386999782";
    vector<string> fire = {"141086086 5", "82514266 8", "194436889 3", "148501004 8", "76026878 4", "85248699 5", "257329502 4", "164264190 8", "176294743 1", "256556880 4", "212185071 7", "343220124 6", "79002130 5", "12566681 6", "212624755 4", "3845162 8", "289074429 2", "92218771 6", "137332306 8", "223088264 4", "304997891 7", "15295317 5", "87935215 6", "222147702 2", "285245408 6", "98591903 2", "250627029 3", "149162347 5", "12118163 8", "217518400 1", "285019570 3", "230209517 5", "343433723 5", "327905404 2", "210742378 7", "286093701 1", "261383818 8", "236500214 3", "321425124 5", "129292764 3", "8498160 5", "122631071 1", "108359956 3", "282992786 8", "121031600 8", "196947818 1", "232138889 4", "251399729 7", "98043672 7", "248064651 8"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 539099;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int w = 1;
    int h = 1000;
    string need = "500";
    vector<string> fire = {"1 1"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 499;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int w = 1000000000;
    int h = 1000000000;
    string need = "80237734";
    vector<string> fire = {"500 500", "600 600", "530 620", "10500 10500", "10600 10599", "10530 10655"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 999989399;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int w = 1000000000;
    int h = 1000000000;
    string need = "50000000000000000";
    vector<string> fire = {"742872186 329992372", "415321635 831867493", "314352290 576160465", "639117056 780014439", "674418239 577911791", "668829323 236974102", "466919987 420115301", "814405838 897317046", "475911307 793193359", "884320722 300759622", "558046626 393846370", "739933723 894137135", "272752582 823766352", "388236383 827689910", "33181171 775997296", "426289643 423782399", "733599825 99080029", "158824340 535079406", "74639899 608175860", "977249275 694906795", "758466667 911598032", "48261021 923190713", "491333904 697819589", "151070706 795788441", "269152104 804922168", "714776013 312609594", "768764430 410079010", "35556756 750717558", "187846157 35128818", "44230144 993261863", "512104635 985321375", "298462348 354911652", "710265448 807252774", "493916648 141352672", "613819210 369834187", "331270599 686914268", "406430258 5454899", "100925519 403672781", "482156070 579534437", "617056619 81222659", "515202455 433261534", "863231436 823130450", "577977169 429966037", "822103343 258928800", "37961501 159365175", "823735991 85031668", "324778282 60594461", "436128994 260447229", "882303528 424827451", "465815220 900545464"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 121354192;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int w = 1000000000;
    int h = 1000000000;
    string need = "999999999000000000";
    vector<string> fire = {"3 999999999"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 31620;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int w = 999999999;
    int h = 999999999;
    string need = "9999999999";
    vector<string> fire = {"846930886 26511607", "825748027 792803889", "424238335 179970017", "760871604 719885386", "300752533 596516649", "461601139 136313474", "213631171 783368690", "189736150 267119987", "651494538 476291652", "414566848 304089172", "521595368 35005211", "838067541 294702567", "861021530 336465782", "233665123 278722862", "468703135 367396291", "24202026 212625041", "635723058 426745134", "237009279 480244181", "311240680 171072505", "767589154 628175011", "764488485 242287341", "136767143 859484421", "756898537 608413784", "195816548 845686310", "260886594 149798315", "184803526 240677525", "535380092 412776091", "749241873 133982180", "42999170 137806862", "135497281 94018108", "306643149 511702305", "49558551 159699308", "270237617 572660336", "743732841 805750846", "545036969 211772425", "84353895 252727236", "223322769 50930694", "659344479 221121038", "697101476 610515434", "760313750 485455155", "356426808 588282199", "112169402 56228388", "709393584 2918012", "140724875 491705403", "585723511 752392754", "375206172 276222156", "66215592 522660788", "206432236 55058851", "860809698 855636226", "178519763 580459206"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 247606958;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int w = 1000000000;
    int h = 1000000000;
    string need = "1";
    vector<string> fire = {"1 1", "1000000000 1000000000", "1 1000000000", "1000000000 1", "1 2", "2 1", "2 2", "1 3", "2 3", "3 3", "3 2", "3 1", "1 4", "2 4", "3 4", "4 4", "4 3", "4 2", "4 1", "1 999999999", "2 999999999", "2 1000000000", "1 999999998", "2 999999998", "3 999999998", "3 999999999", "3 1000000000", "999999999 1", "999999999 2", "1000000000 2", "999999998 1", "999999998 2", "999999998 3", "999999999 3", "1000000000 3", "1 5", "2 5", "3 5", "4 5", "5 5", "5 4", "5 3", "5 2", "5 1", "1 6", "2 6", "3 6", "4 6", "5 6", "6 6"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 499999997;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int w = 1000000000;
    int h = 1000000000;
    string need = "1232";
    vector<string> fire = {"1 1", "110550239 906415413", "111798476 953355557", "140697948 339028813", "143326597 983637391", "152236691 999816038", "16150273 424906943", "161834546 230140608", "167064403 160475394", "179234395 276788740", "190809075 323954835", "2 2", "201000948 380942443", "288169575 956209125", "296562345 174052316", "305595251 597653818", "309292397 715339777", "327627648 2575715", "340731851 498799960", "351775862 749392868", "374237015 620878766", "390438674 226815175", "392774052 105492653", "405947297 994286782", "409219988 722883691", "416457994 489373906", "438268541 578705179", "476655050 170024093", "495659226 671592014", "504405557 678542115", "54264274 387983072", "580896699 354546789", "614098586 769616169", "621554818 269165204", "624668476 138979342", "637263591 952168576", "646298173 33636164", "655702904 817387622", "696509808 232024555", "721895036 676609339", "729600630 904937705", "740457625 679224968", "783298643 854998922", "810512111 651886904", "868280020 442551289", "881842087 255893331", "887812808 977116788", "904730613 496718725", "999999999 999999998", "999999999 999999999"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 255893329;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int w = 100;
    int h = 100;
    string need = "9965";
    vector<string> fire = {"10 10", "20 20", "30 30", "40 40"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int w = 1000000000;
    int h = 1000000000;
    string need = "100000000000000";
    vector<string> fire = {"1 4", "5 5", "10 10", "11 11", "50 50", "1000 1000", "100000 5", "100000000 99999999"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 899949999;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int w = 993949978;
    int h = 993499919;
    string need = "308015318917642181";
    vector<string> fire = {"35 7", "23 56", "46 4534", "456 234", "565464 4362476", "3464768 432436", "8768 43", "867 3", "1 1", "53426734 34626453", "346 987", "43735765 576547", "46 65876976", "568765346 8735547", "346 886534", "64376436 876835254", "8769 3526350", "4362457 57682", "865 436876", "462547745 547857276", "657 346457", "45737 476548", "62364 68798", "4362 8664", "436 57863546", "3 5784", "4375718 8653465", "54824 547", "62 769", "465476345 4376", "46236 43573", "365472547 768", "769 659245", "7658 365", "645 4", "1 2", "2 1", "1 5", "547 3", "75 3", "346 9", "8 5", "54 46", "23 7", "325 76", "7534 68", "4346 57", "30 4649", "230 25"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 290922046;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int w = 1000000000;
    int h = 1000000000;
    string need = "1";
    vector<string> fire = {"1 1"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 999999998;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int w = 1000000;
    int h = 1000000;
    string need = "12312";
    vector<string> fire = {"32 33", "55 55", "99 99"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 999900;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int w = 10000000;
    int h = 10000000;
    string need = "123456789012";
    vector<string> fire = {"52123 65123", "31859 66123", "7738983 123124"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 9864530;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int w = 1000000000;
    int h = 1000000000;
    string need = "1";
    vector<string> fire = {"10470 14511", "1 1", "4709156 16723", "1237 1974", "12673 19723"};
    StrawberryFieldsOnFire* pObj = new StrawberryFieldsOnFire();
    clock_t start = clock();
    int result = pObj->timeLimit(w, h, need, fire);
    clock_t end = clock();
    delete pObj;
    int expected = 999983276;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=10002&pm=6646
********************************************************************************
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
 
typedef long long __int64; 
 
class StrawberryFieldsOnFire 
{ 
public: 
  int sizeX,sizeY,n; 
  int X[60],Y[60],X1[60],Y1[60],X2[60],Y2[60]; 
  int min(int a,int b) 
  { 
    return (a<b)?a:b; 
  } 
  int max(int a,int b) 
  { 
    return (a>b)?a:b; 
  } 
  __int64 solve(int T) 
  { 
    set<int> MX,MY; 
    MX.clear(); 
    MY.clear(); 
    int i; 
    for (i=0;i<n;i++) 
    { 
      X1[i]=max(1,X[i]-T); 
      X2[i]=min(sizeX,X[i]+T)+1; 
      Y1[i]=max(1,Y[i]-T); 
      Y2[i]=min(sizeY,Y[i]+T)+1; 
      MX.insert(X1[i]); 
      MX.insert(X2[i]); 
      MY.insert(Y1[i]); 
      MY.insert(Y2[i]); 
    } 
    __int64 result=0; 
    set<int>::iterator it; 
    for (set<int>::iterator itX=MX.begin();itX!=MX.end();++itX) 
    for (set<int>::iterator itY=MY.begin();itY!=MY.end();++itY) 
    { 
      int sX=*itX,sY=*itY; 
      it=itX; 
      ++it; 
      if (it==MX.end()) 
        continue; 
      int tX=*it; 
      it=itY; 
      ++it; 
      if (it==MY.end()) 
        continue; 
      int tY=*it; 
      __int64 size=tX-sX; 
      size*=(tY-sY); 
      for (int i=0;i<n;i++) 
        if (X1[i]<=sX && X2[i]>=tX && Y1[i]<=sY && Y2[i]>=tY) 
        { 
          result+=size; 
          break; 
        } 
    } 
    return result; 
  } 
  int timeLimit(int _w, int _h, string save, vector <string> fire) 
  { 
    int i; 
    sizeX=_w; 
    sizeY=_h; 
    n=fire.size(); 
    for (i=0;i<n;i++) 
      sscanf(fire[i].c_str(),"%d%d",&X[i],&Y[i]); 
    __int64 Limit=0; 
    for (i=0;i<save.length();i++) 
      Limit=Limit*10+(save[i]-'0'); 
    __int64 S=sizeX; 
    S*=sizeY; 
    int H=0,T=1000000001; 
    for (;H+1<T;) 
    { 
      int M=(H+T)/2; 
      __int64 left=S-solve(M); 
      if (left>=Limit) 
        H=M; 
      else 
        T=M; 
    } 
    return H; 
     
  } 
};

********************************************************************************
*******************************************************************************/