/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8291
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

class Transformation {
public:
    vector<string> transform(vector<string> A);
};

vector<string> Transformation::transform(vector<string> A) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> A = {"1", "2"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> A = {"2", "2"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> A = {"1", "3", "6"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "6"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> A = {"2", "3", "6"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "6"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> A = {"210", "2", "3", "5", "7"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2", "3", "5", "7"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> A = {"6", "2", "3", "4", "9"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "1", "4", "9"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> A = {"6", "2", "3", "4", "9", "8"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "1", "1", "9", "8"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> A = {"87", "65629127"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"87", "65629127"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> A = {"836062618792023", "29", "1"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"28829745475587", "29", "1"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> A = {"6736129319478", "303", "20632061554", "3569374525474430"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"86360632301", "303", "10316030777", "3569374525474430"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> A = {"76884314", "70", "192664950", "271", "372261"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"38442157", "7", "64221650", "271", "372261"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> A = {"915", "290917", "3159776736563948", "3939", "1", "30963856115984810"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"61", "290917", "3159776736563948", "3939", "1", "15481928057992405"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> A = {"54", "74763", "9596217857", "8859753883189", "233", "360488897764303092", "205946922477"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "74763", "9596217857", "8859753883189", "233", "120162965921434364", "68648974159"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> A = {"5812893680", "90511", "8506462", "662847240629908131", "2340391969", "2805664004626756", "47282996027613", "5599149107587"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5812893680", "90511", "4253231", "220949080209969377", "2340391969", "100202285879527", "47282996027613", "799878443941"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> A = {"480429610", "822", "552902838", "409", "1625", "299360502943517", "214", "7422641", "4892888683833"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"48042961", "137", "92150473", "409", "1625", "299360502943517", "214", "7422641", "4892888683833"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> A = {"90", "2689068", "303337326526587960", "404870862", "193928301", "191549257499459357", "81997825349", "40196212073", "490567", "706474"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "9743", "101112442175529320", "6134407", "27704043", "191549257499459357", "7454347759", "40196212073", "490567", "353237"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> A = {"182", "56646", "196", "30101377264", "60290994", "303788604676", "27597853383793787", "19098", "38437138097993243", "72202175174171", "2704085166"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"13", "28323", "49", "4300196752", "10048499", "75947151169", "27597853383793787", "1061", "5491019728284749", "10314596453453", "450680861"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> A = {"49648081022975646", "9974", "4706085394154155", "5", "48522270346", "73344397258902", "3", "371333851", "176", "308041135934", "30835659907637", "1"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"24824040511487823", "4987", "1820535935843", "5", "2205557743", "1746295172831", "1", "53047693", "16", "154020567967", "30835659907637", "1"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> A = {"46", "181226", "10427403", "803700349274252", "83860892231", "54224517571698133", "398670", "7481685219960", "89908931489677371", "915090401374113", "921756542217241", "27859273647972216", "52156500"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"23", "90613", "5119", "6928451286847", "83860892231", "4929501597427103", "13289", "62347376833", "89908931489677371", "305030133791371", "921756542217241", "9286424549324072", "4346375"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> A = {"7660", "1895060", "378", "1058550", "3823", "77769119089880370", "8217797627158", "656568488387524", "65732721", "894195", "9122162022", "743561403127798107", "810251971", "520687492445912896"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"383", "94753", "27", "176425", "3823", "50829489601229", "4108898813579", "164142122096881", "21910907", "31", "506786779", "247853801042599369", "810251971", "520687492445912896"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> A = {"340", "854663", "2521309913458573", "395538", "233618705", "9030045424999498", "13933461", "4172292812478637", "23", "253768136403585099", "52490", "400639083873100503", "70", "4910", "7948"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"17", "854663", "13929889024633", "5993", "2031467", "4515022712499749", "4644487", "596041830354091", "23", "84589378801195033", "5249", "400639083873100503", "7", "2455", "7948"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> A = {"4929030", "379499194206595611", "472733924449938", "195439495573907272", "45041793", "11253918870527919", "568466727410064", "3734721", "6568955215991621", "53219768206", "136", "5485129738092318", "216385501264", "2625269", "931526944607", "67900226903"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"273835", "826795630079729", "78788987408323", "24429936946738409", "15013931", "3751306290175973", "1691865260149", "3734721", "6568955215991621", "26609884103", "17", "914188289682053", "216385501264", "2625269", "931526944607", "67900226903"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> A = {"187170604130296093", "3364319109", "56259177411913874", "613879388400", "78238505926", "12836787266", "1703723", "97894164354873", "201457078993", "76", "655606269929655", "5673602693", "27652", "20685494683", "86224704965464251", "6377121089013", "4582206"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"187170604130296093", "1121439703", "28129588705956937", "204626462800", "5588464709", "6418393633", "14317", "32631388118291", "201457078993", "19", "1324457110969", "5673602693", "6913", "20685494683", "28741568321821417", "2125707029671", "2291103"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> A = {"11057420", "2390433", "6453811", "95", "233", "854496721013776391", "911", "1", "747707453", "129930279", "820835", "4563020747301675", "189078", "810367322153382", "58086933743713964", "8295746491231", "4", "4924510013300022"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"552871", "796811", "921973", "19", "233", "854496721013776391", "911", "1", "747707453", "43310093", "164167", "1521006915767225", "31513", "45020406786299", "14521733435928491", "8295746491231", "4", "2462255006650011"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> A = {"9798547860064", "55810930", "54386", "38198164850159", "36289502", "28177979", "1", "20520243730015", "40047531420", "7004", "8202458408425", "8757522866009", "5694828278", "3709454", "4396574394406", "4284311", "800025769198", "151148576691436769", "30"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"227873206048", "797299", "383", "38198164850159", "18144751", "28177979", "1", "4104048746003", "667458857", "1751", "8202458408425", "8757522866009", "2847414139", "1854727", "2198287197203", "4284311", "400012884599", "151148576691436769", "3"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> A = {"776687766537697264", "254012801520716", "65351100708164149", "8", "8", "33", "63901", "2697928998", "46360449", "441", "8049055016", "2", "749834491", "27", "542550529776812", "328", "66380497975137", "39521327332", "16160919", "90"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"776687766537697264", "9071885768597", "65351100708164149", "1", "1", "11", "63901", "449654833", "5151161", "49", "1006131877", "1", "107119213", "27", "135637632444203", "41", "22126832658379", "9880331833", "5386973", "5"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> A = {"3968246534", "5714048334615546", "267564300", "138505667", "80", "9815351140118", "185160912490144325", "4260", "6", "208", "5", "24605539150496", "13096604582868", "2401", "58", "797839725024806", "75663417130", "79010", "26788213893541227", "3140478768086145", "593"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"283446181", "952341389102591", "891881", "138505667", "1", "169230192071", "3778794132451925", "71", "1", "13", "1", "24605539150496", "1091383715239", "2401", "29", "398919862512403", "154415137", "7901", "8929404631180409", "628095753617229", "593"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> A = {"543", "25934625320009", "69672144849", "741968093", "189", "7171982675", "89", "39735041", "81", "9", "822", "1185", "13", "9447538273537", "300164583122955", "53120651944681081", "18868202498", "46468635", "12402720", "219499", "14202", "18928673"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"181", "3704946474287", "23224048283", "741968093", "1", "563525", "1", "39735041", "1", "1", "137", "79", "1", "1349648324791", "6670324069399", "53120651944681081", "9434101249", "3097909", "2480544", "219499", "263", "18928673"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> A = {"5595979905", "1020636948408", "88242", "8993984080590918", "876848983707196", "114866661782", "55943782887604", "422246023986869726", "79881680484429645", "370576", "25373283086", "1719371", "45702607371847689", "29697560527", "1324360", "3637494", "53824543224741616", "504969516", "2", "8", "3361007", "51074", "7187347134424"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"41451703", "24012727", "2101", "499665782255051", "219212245926799", "3022806889", "13985945721901", "1587391067619811", "5325445365628643", "23161", "12686641543", "1719371", "15234202457282563", "29697560527", "165545", "1818747", "53824543224741616", "14026931", "1", "1", "3361007", "25537", "898418391803"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> A = {"598425727", "20560040320869923", "681072499236677469", "799517308543946", "1862707", "3431247558077", "3793", "77820", "34611288710107", "37693364", "64699780", "935943855283", "9270526117", "567749002", "3620482233272454", "18048835247475", "476970323805251", "51589336", "862510008288", "815080", "95133948236090", "52000408119939", "8264793287", "20"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"598425727", "20560040320869923", "227024166412225823", "399758654271973", "1423", "79796454839", "3793", "1297", "34611288710107", "9423341", "3234989", "55055520899", "9270526117", "283874501", "603413705545409", "6016278415825", "6717891884581", "6448667", "287503336096", "20377", "9513394823609", "3058847536467", "8264793287", "1"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> A = {"19689685987078587", "652857257", "8739", "2", "377365284064966596", "4", "75702291381376149", "51863420594", "2199341", "772", "51415", "6773320747681893", "7706", "2", "39163828592", "64771655468105189", "4109", "691262665054319877", "97325435756595833", "8961", "4402580169", "75", "22999606430541", "6851996790597", "58189"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6563228662359529", "50219789", "971", "1", "4492443857916269", "1", "514981574022967", "25931710297", "129373", "193", "113", "752591194186877", "3853", "1", "1350476848", "64771655468105189", "587", "230420888351439959", "97325435756595833", "2987", "112886671", "25", "7666535476847", "978856684371", "58189"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> A = {"254", "6", "9717", "268078669618", "166175563025982386", "461340968264230507", "30235430718874221", "672636088708998", "468785983647159", "8", "7", "10817199093", "23178253121292646", "999409510723328716", "9121460736", "22439646746299", "887", "5674711806", "7090587", "76600626524142010", "40", "4622727519006", "42499950370", "8", "4", "2082256218"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"127", "1", "79", "134039334809", "83087781512991193", "27137704015542971", "10078476906291407", "112106014784833", "52087331516351", "1", "1", "3605733031", "11589126560646323", "249852377680832179", "3040486912", "22439646746299", "887", "315261767", "3881", "7660062652414201", "1", "770454586501", "21249975185", "1", "1", "1041128109"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> A = {"9077214113638663", "637265680223248238", "22887735", "708165522125658899", "1701101875", "36", "982854396", "1185290760073", "407", "937639", "259817538077346", "7589396641507668", "5825373551817682", "8733377896464", "22097754465651", "2527170", "21025863203", "126674131491", "202125735015867190", "298", "8157770", "20", "84", "9051301992007", "1764933803", "9512", "7"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9077214113638663", "318632840111624119", "117373", "708165522125658899", "154645625", "1", "27301511", "169327251439", "37", "937639", "43302923012891", "145949935413609", "2912686775908841", "2911125965488", "2455306051739", "84239", "21025863203", "14074903499", "1837506681962429", "149", "19897", "1", "1", "9051301992007", "1764933803", "1189", "7"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> A = {"5745", "84904179", "5", "4610", "15243575627574538", "24713", "917429855220", "25632108", "164", "732722826216", "3928855", "298976453576951", "659066", "8767513292000", "5514504037787", "33130717", "7108300", "86543705072842573", "1119970", "162881657937455749", "1949", "611", "828680", "841511", "356642551600973", "7", "850", "452390700"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"383", "1489547", "1", "461", "185897263750909", "1901", "5096832529", "136341", "1", "30530117759", "112253", "298976453576951", "329533", "10973108000", "5514504037787", "33130717", "71083", "1218925423561163", "111997", "162881657937455749", "1949", "611", "20717", "76501", "356642551600973", "7", "17", "1507969"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> A = {"18440191814", "2797144284939836", "740", "544038074", "53875449", "38", "59169", "5929399979630", "78335720738", "513395324835926756", "279528", "18205410025362", "47514282829991", "1573549849", "54948933", "8732553", "4", "24237007", "26381341486", "75193839425941841", "6940", "85409", "700", "3162666837546173", "69998638866882118", "36080736", "3693", "24493771", "993807865583579134"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"838190537", "53791236248843", "37", "272019037", "53875449", "1", "19723", "592939997963", "3560714579", "128348831208981689", "11647", "433462143461", "47514282829991", "1573549849", "6105437", "61933", "1", "515681", "13190670743", "6835803584176531", "347", "85409", "175", "3162666837546173", "34999319433441059", "12026912", "1231", "24493771", "45173084799253597"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> A = {"194468598523", "6913691349817930", "46", "1237847363692720", "55355425940405350", "64062", "417149906451", "662676", "1145671654197001", "3376187371940801", "7", "795858", "889691", "194787499099034827", "96685097608099", "572481480", "7665477256967", "274", "43962301661", "64511119367", "1419155016659", "6739685327658135", "29", "2224251922610", "78263659330685", "8251604315533", "249385860", "7576", "72478530963418", "944994"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"194468598523", "22302230160703", "1", "232023873232", "27677712970202675", "3559", "139049968817", "55223", "1145671654197001", "2342947516961", "1", "2707", "2789", "194787499099034827", "13812156801157", "4770679", "7665477256967", "137", "43962301661", "64511119367", "1419155016659", "449312355177209", "1", "222425192261", "15652731866137", "8251604315533", "12469293", "947", "36239265481709", "157499"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> A = {"6165015860107", "70", "386514", "7090056064577273", "1", "713142909174275571", "778565741246", "21", "6545572929", "296085054650", "945029574221", "2117806637", "6271", "806267674316", "2838116492", "4521540247", "3", "49063", "6879680420", "58549002369917209", "78735816150332", "68390526", "77360495381072888", "733441943489229719", "665177026", "75150701766", "55", "26527", "56473277079507", "59", "95421102066"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1468210493", "1", "21473", "164885024757611", "1", "237714303058091857", "16925342201", "1", "6545572929", "1922630225", "945029574221", "2117806637", "6271", "201566918579", "709529123", "234119", "1", "7009", "343984021", "58549002369917209", "1789450367053", "393049", "77360495381072888", "733441943489229719", "332588513", "19239811", "11", "26527", "18824425693169", "59", "5301172337"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> A = {"9150", "6488458167866", "13476", "99747718219377", "4", "84014", "1232618", "391770873", "289505249", "463", "68651712841", "10502383118370", "76274161434739", "3", "166216849697692", "7", "7472927868874952", "6031", "50989", "6344948067", "959", "18", "8394726945948", "720", "791", "79120730774813", "1252312", "86803710633", "40360028359", "964", "9607519", "43068563621"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1525", "3244229083933", "1123", "5249879906283", "1", "6001", "16657", "3348469", "192107", "463", "501107393", "2448107953", "76274161434739", "1", "41554212424423", "1", "934115983609369", "163", "50989", "2114982689", "137", "1", "99937225547", "16", "113", "305485447007", "156539", "9644856737", "40360028359", "241", "9607519", "43068563621"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> A = {"738889895542341", "138", "20466", "54532960", "3286730087", "74", "142890442", "772034026", "645", "9327", "9", "91862926327040580", "501374907", "7643931443295", "51081288491", "9235", "635940284513", "26355", "63515943178463", "670067792249794", "1", "2121554459089881", "9875199", "20618359864", "403213", "71", "475", "9", "630738033621489", "929274191268", "9824090825308", "5862903170463831", "313215"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"246296631847447", "1", "379", "10906592", "3286730087", "37", "71445221", "386017013", "43", "3109", "1", "510349590705781", "42493", "72799347079", "51081288491", "1847", "635940284513", "251", "63515943178463", "335033896124897", "1", "78576091077403", "3291733", "2577294983", "403213", "1", "25", "1", "630738033621489", "77439515939", "2456022706327", "1954301056821277", "20881"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> A = {"17047", "6", "2958", "497365640756099363", "8322345433456", "99", "8560", "78429", "9353", "95433", "38444985172", "960823911285", "329979855214", "879", "41671000335", "4095982080", "91128138", "974776012542", "89632812535873", "1477137007", "54", "8136770", "24", "290150419442142", "8", "20555342315739830", "97641072512708", "73289730225308", "26220337", "3117196640639953", "9611497627277998", "890477430428", "486610", "3"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"17047", "1", "29", "497365640756099363", "520146589591", "1", "107", "2011", "9353", "2447", "51397039", "179425567", "164989927607", "293", "2778066689", "819196416", "15188023", "54154222919", "89632812535873", "1477137007", "1", "813677", "1", "48358403240357", "1", "2055534231573983", "24410268128177", "18322432556327", "26220337", "3117196640639953", "4805748813638999", "222619357607", "243305", "1"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> A = {"688", "60", "71643", "2", "243", "71011", "438516797667410", "1", "184949", "601539569206", "83882", "82", "958717408622463143", "1976", "9661986836673", "44826289522", "43877655", "2363929681", "69904799240191", "2754790529937", "44164103", "35748658", "132152671830", "469500", "4373212982628843", "42325", "6547069625567806", "5", "3056", "416331118509", "1747204203040055", "93869100585796", "72884326", "61836508185017067", "6755386429699929"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"43", "1", "167", "1", "243", "71011", "569502334633", "1", "184949", "300769784603", "41941", "41", "958717408622463143", "247", "3220662278891", "3201877823", "975059", "2363929681", "69904799240191", "54015500587", "44164103", "17874329", "4405089061", "39125", "9168161389159", "1693", "3273534812783903", "1", "3056", "138777039503", "349440840608011", "23467275146449", "36442163", "763413681296507", "750598492188881"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> A = {"74485", "27527426092740384", "5538722", "566421476338", "192334648116693", "83091634", "404", "641984521", "1428", "24367", "180022256852", "60624937577801180", "20773990607826", "9050", "2702525706476141", "93861989080505086", "109217806", "5721327617515578", "78913928", "56568", "62184046727276205", "486314512", "5224453", "99", "61471313", "457", "48451", "101", "576", "539582055569", "14202067375388", "66949897314863923", "967747014492", "583304497647477", "32300057061686076", "180489248"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"14897", "95581340599793", "17201", "3879599153", "64111549372231", "41545817", "1", "17350933", "1", "3481", "45005564213", "3031246878890059", "3462331767971", "4525", "29698084686551", "262184327040517", "54608903", "317851534306421", "9864241", "2357", "4145603115151747", "1787921", "401881", "11", "61471313", "457", "3727", "101", "576", "539582055569", "208853931991", "66949897314863923", "80645584541", "194434832549159", "2691671421807173", "5640289"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> A = {"75570882", "9931299006968", "735771564322520755", "26278396275150747", "94578", "929176", "3235264904", "194", "6310787771", "247435960156270", "62248680569", "7054", "499987114842825", "302382061523079", "7046069463", "7", "593", "1", "56807453422", "456854710306365629", "856", "62579920176940952", "59754593370905252", "863832094977", "2622291821", "91558", "25426066107", "425547830", "91682", "61248884042", "19241", "5768276904", "16460869731", "238563653443819815", "9", "544", "15967332380"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"740891", "1241412375871", "147154312864504151", "32085953937913", "15763", "6113", "404408113", "97", "274382077", "24743596015627", "62248680569", "3527", "499987114842825", "100794020507693", "782896607", "7", "593", "1", "28403726711", "6434573384596699", "107", "7822490022117619", "14938648342726313", "287944031659", "2622291821", "45779", "651950413", "42554783", "45841", "30624442021", "19241", "80114957", "5486956577", "15904243562921321", "1", "544", "798366619"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> A = {"76130", "6", "296355", "711049128460041639", "31686494779", "93769", "8264874403015", "51627666582110020", "87446116619193465", "63891124327323278", "414625918395759", "2299741", "6692570", "6732226377853931", "701649508", "5882875199946651", "64", "56314902911691", "88508", "7216727", "50476825065173294", "69276227891", "7082040290064726", "584", "11353055422624", "34007", "11809668041", "989036659203180", "894704710411047926", "255340", "6131220812", "16347", "223641526372304", "47898", "1219845802058675", "187039675384375", "16633455615", "715713"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"331", "1", "859", "237016376153347213", "1092637751", "7213", "1652974880603", "2581383329105501", "277606719426011", "31945562163661639", "19744091352179", "2299741", "669257", "6732226377853931", "25058911", "115350494116601", "64", "18771634303897", "109", "16901", "110211408439243", "23270483", "168620006906303", "73", "354782981957", "1097", "11809668041", "2354849188579", "447352355205523963", "12767", "1532805203", "5449", "13977595398269", "23949", "4435802916577", "187039675384375", "369632347", "238571"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> A = {"545299262930", "3732380095796", "787654273", "2151", "513748230445164", "143199583", "646", "84543045540921567", "3", "4129178246", "723", "8582042066", "55860295314358", "1518984934356034", "44318483537", "48712600093641546", "87561509", "5252640", "489800464731324192", "42132685447325215", "53847171501947280", "613", "703057321", "316755026", "7016032646646944", "4899835", "10828141", "81838414876", "1434622190128", "498348743784374119", "534", "351663697773180519", "223466321", "83314179", "666690", "27923778135578431", "85056133714978", "32", "191"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"54529926293", "84826820359", "787654273", "239", "1515535153", "143199583", "19", "2062025500998087", "1", "7143907", "241", "4291021033", "1642949862187", "18524206516537", "44318483537", "8118766682273591", "12508787", "353", "5102088174284627", "8426537089465043", "74787738197149", "613", "41356313", "22625359", "219251020207717", "979967", "10828141", "20459603719", "89663886883", "5476359821806309", "89", "117221232591060173", "554507", "712087", "111115", "27923778135578431", "2501650991617", "32", "191"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> A = {"78596948825", "321", "304302399615545020", "2989706980", "87153", "8620238083226317", "854962975902", "12054502708934461", "882", "261", "504549754426697", "520", "5229261723155", "4060724991087828", "92744354607365483", "761674672692", "649703541526391", "2888967444", "1303764", "671", "795724066067", "46591526", "45312013334829", "9504396", "610774541", "943858313134", "99", "4470", "4274", "995425", "45668719256", "64723778942253816", "131699", "919772", "89866548", "90940106137958679", "97", "70807783504798", "50855560520", "3727148435290439"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"22617827", "1", "15215119980777251", "11498873", "139", "278072196233107", "27177919", "12054502708934461", "49", "1", "3133849406377", "1", "1045852344631", "48341964179617", "495959115547409", "21157629797", "59063958320581", "240747287", "83", "1", "113674866581", "1370339", "15104004444943", "24001", "610774541", "42902650597", "1", "149", "2137", "34325", "5708589907", "35023689903817", "7747", "32849", "22466637", "4330481244664699", "1", "35403891752399", "10171112104", "3727148435290439"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> A = {"3983738401021540", "233279718951016099", "694406933352", "6718680495", "1830721245843706", "30268456", "81420414608742539", "91778", "2574048774978236", "16", "91071508298245", "29736", "3627980367", "4011521", "690750367651015905", "92", "6199", "316", "955126415266573499", "115", "647708", "45016593645232", "192750807364", "55530", "68271849", "31550", "250179634", "913", "917135", "59268323", "98142", "5849", "820953", "7", "701447", "21855", "39085", "44669874", "211", "94873275", "20192197063"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"28455274293011", "12277879944790321", "21384791", "149304011", "8397803880017", "3783557", "7401855873522049", "421", "33869062828661", "1", "958647455771", "59", "109938799", "4011521", "1123171329513847", "1", "6199", "79", "955126415266573499", "1", "161927", "4092417604112", "48187701841", "617", "2528587", "631", "125089817", "1", "61", "59268323", "16357", "5849", "13031", "1", "701447", "1457", "7817", "7444979", "211", "94873275", "20192197063"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> A = {"82907360694271508", "715527744909824", "61403007291919", "127154010", "3103598", "1025299428520", "4753354575", "21281131", "564907", "510970635371138", "401736089630820", "4", "425150", "2370306635995", "843145100454180", "4772712375867", "4719866266", "91023490129", "8294283", "3294370539392347", "891783405043", "3972", "69", "9571496", "16477152777", "8244", "199485254525123", "50687954", "173", "75516012498914", "4702080777462", "54769821", "773566111", "23815695279583365", "887760446570", "554212166051816680", "9956093", "100", "76839267084185045", "469621752682090", "892", "32815"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"667552583773", "65047976809984", "3611941605407", "17587", "241", "25632485713", "63378061", "21281131", "80701", "255485317685569", "956514499121", "1", "773", "10086411217", "14052418340903", "3162831263", "124207007", "7001806933", "2357", "173387923125913", "891783405043", "331", "1", "108767", "1830794753", "229", "28497893503589", "25343977", "173", "37758006249457", "2351040388731", "18256607", "773566111", "1587713018638891", "88776044657", "13855304151295417", "1422299", "25", "1397077583348819", "46962175268209", "223", "6563"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> A = {"35267", "69060", "4460961", "75907747895977", "7173256292011621", "2244981", "18965", "27361845875", "714153", "38391380", "17804187132127100", "670780292704", "43", "300774", "9541872511602", "6", "4036", "801104178", "430327778038", "1362419849971", "80142745", "1281241765501699", "7", "8148272648159", "82", "54889382", "7122126710556", "87754385", "24", "47357580", "824956432", "8124", "72", "644594161643468", "956", "1087132804931500", "8758", "44", "178451260093", "85890", "512841344396286838", "802", "16907016648409"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"35267", "1151", "1486987", "75907747895977", "14037683546011", "748327", "3793", "2405437", "1273", "1919569", "178041871321271", "16360494944", "43", "50129", "1590312085267", "1", "1009", "657721", "215163889019", "1362419849971", "16028549", "1281241765501699", "1", "1164038949737", "41", "27444691", "17985168461", "17550877", "1", "27217", "51559777", "677", "9", "161148540410867", "239", "271783201232875", "4379", "11", "178451260093", "2863", "256420672198143419", "401", "16907016648409"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> A = {"4656474079091042", "638931617687874420", "26088", "29", "73188983", "4492262", "6843882", "102817", "1834917171014", "660425309299672326", "3238957170746", "315448", "47364718455813", "92953621102848688", "3400", "663454932", "8", "522", "5", "337127070", "1226962623975", "3471523872", "693710", "4445063504279", "18", "4057908", "2405461818", "7161509613434601", "5182", "599700801919", "392407831434", "8500389459", "11772682526516040", "71251", "321", "529537473491658919", "853678099226", "4509", "9688516", "255880536448350", "1616601181", "34", "633444697", "33398679208031"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"179095156888117", "2052990224561", "1087", "1", "10455569", "2246131", "1140647", "719", "917458585507", "2158252644770171", "147225325943", "131", "75541815719", "3360093301867", "1", "7898273", "1", "29", "1", "1605367", "16359501653", "1157174624", "69371", "4445063504279", "1", "338159", "23582959", "2387169871144867", "2591", "31563200101", "65401305239", "2833463153", "32701895906989", "71251", "107", "529537473491658919", "25108179389", "4509", "2422129", "3876977824975", "1616601181", "17", "633444697", "33398679208031"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> A = {"625763618352", "32", "3502461502305", "98695424607", "5809", "84780396", "3950499286", "6075", "40039785", "6698243196795", "53124875095", "52", "382172516932629", "54150946233", "7831", "724", "176900741886936", "643382966024", "54483385337", "850631686281147183", "6707057882", "9522455254", "655946074946873", "24", "9556713", "299844660467853652", "294239899136545", "512618209935467", "71", "7390415281762008", "733846", "94", "82693913541722", "6481510", "6", "7", "159731", "36562223265072", "89299903", "79334781359581828", "658347668", "6112245915071221", "93", "879913899667", "392363725457"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4345580683", "32", "77832477829", "2530651913", "157", "2355011", "1975249643", "6075", "296591", "446549546453", "145547603", "1", "127390838977543", "18050315411", "1", "181", "7370864245289", "1961533433", "1328863057", "686546962293097", "16519847", "12629251", "38585063232169", "1", "1061857", "74961165116963413", "58847979827309", "512618209935467", "71", "11404961854571", "366923", "47", "5906708110123", "92593", "1", "1", "14521", "761712984689", "8118173", "19833695339895457", "14962447", "6112245915071221", "31", "79992172697", "392363725457"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> A = {"2", "91420333", "1207087791", "2400147925268600", "7417815914817", "31312783255832", "5", "797", "389", "75", "1232563961386081", "460787186098701", "7362650708518878", "7", "95", "33851762815431230", "57737", "3631200940", "98086", "7", "8753", "68972626279579", "30098", "265492347366", "1", "6763450", "56", "464793547791", "66", "8844", "5237039", "56680595042755", "51201742", "456717445247742", "169520052091510488", "35", "8210984194981104", "948411679401197307", "125085028", "196292609305439304", "398168231442238", "70051677008", "5232323027", "43975552", "74790762760093247", "827270158802086887"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "91420333", "4421567", "12000739626343", "96335271621", "301084454383", "1", "797", "389", "1", "1232563961386081", "664916574457", "2745209063579", "1", "1", "3385176281543123", "57737", "181560047", "49043", "1", "8753", "6270238752689", "149", "44248724561", "1", "46325", "1", "154931182597", "1", "737", "5237039", "11336119008551", "132647", "10874224886851", "69934014889237", "1", "171062170728773", "35126358496340641", "31271257", "1168408388722853", "199084115721119", "4378229813", "5232323027", "43975552", "74790762760093247", "275756719600695629"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> A = {"814316470860", "677690", "29", "192890768831", "37906521618", "78529831030207310", "914430153", "7319", "413744", "56", "957", "6369722960456977", "68845443085679", "774007169615", "630838", "240358937", "887307015", "2967919970454499", "52", "21274", "366", "77154394464030540", "64667143311", "8097832996", "270645881248", "825159209199738", "254", "523303647465848330", "1", "243121307", "99719074942", "9628156615246", "99653", "20762722148533548", "91745512", "77044310", "5291687112", "960", "17700199925", "3732772932", "830346561454463", "5512287", "341703", "16", "8227852598154108", "361245", "45664426"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"13571941181", "67769", "1", "192890768831", "6317753603", "604075623309287", "197033", "563", "1361", "1", "1", "579065723677907", "5295803314283", "154801433923", "1277", "155371", "8450543", "4162580603723", "1", "967", "61", "1285906574400509", "695345627", "184041659", "8457683789", "19646647838089", "1", "52330364746584833", "1", "18701639", "49859537471", "11945603741", "99653", "1730226845711129", "11468189", "1100633", "220486963", "64", "17700199925", "14812591", "830346561454463", "167039", "341703", "1", "685654383179509", "24083", "22832213"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> A = {"846", "6116463581", "8927692970", "540824285018864", "55420460", "84935749724", "1298677240715239", "714007584", "4601550319255", "5806295729", "69", "43321", "5603034202730792", "120", "557890111", "887900421", "566", "316658", "1", "7631", "446123025678", "863664421349656", "758211761140824717", "7309435422250", "3416", "4053", "1", "739", "2699545", "574246900", "74269564339", "68088", "3594", "168988205843900", "355043", "23898732303401628", "8", "59414966597957836", "19416", "54831756699385957", "82537475538", "136767", "153256228718134630", "5589774350", "237", "34", "3", "5882"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "130137523", "127157", "438980750827", "2771023", "178436449", "16865938191107", "3449312", "40013481037", "231779", "1", "43321", "700379275341349", "1", "557890111", "295966807", "283", "158329", "1", "587", "6759439783", "107958052668707", "758211761140824717", "281132131625", "61", "193", "1", "739", "539909", "5742469", "3229111493", "2837", "599", "99404826967", "355043", "1991561025283469", "1", "14853741649489459", "809", "54831756699385957", "13756245923", "45589", "15325622871813463", "111795487", "79", "1", "1", "2941"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> A = {"280985964031", "186201988649509", "719310360902", "7922545", "7572197182", "24", "442161316700075", "232653", "7456", "1001744358435647", "44246019755", "574497132602", "1790531167", "789635164", "4343", "1260528", "2585864", "926273549262700", "38871835", "333990628893452826", "76384377", "456209391919034686", "6226074", "21412996989101", "937698250", "577614631970", "829", "4977007", "453750629366117", "59111076", "964732985837", "679433506", "2783051307700098", "1453225870596005", "3", "271848850958893337", "7688560720396", "6441413", "91186425551568", "866", "573909535968801685", "128984820", "2", "372693", "38", "2601991", "77977935341338", "46", "999"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"280985964031", "26600284092787", "51379311493", "1584509", "3786098591", "1", "87125382601", "77551", "7456", "1001744358435647", "8849203951", "287248566301", "1790531167", "197408791", "101", "26261", "323233", "298797919117", "7774367", "18555034938525157", "76384377", "228104695959517343", "345893", "21412996989101", "468849125", "862111391", "829", "711001", "453750629366117", "4925923", "964732985837", "339716753", "10787020572481", "26422288556291", "1", "11819515259082319", "1922140180099", "585583", "1899717198991", "433", "114781907193760337", "2149747", "1", "124231", "1", "371713", "38988967670669", "23", "37"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> A = {"908438545546416", "4141771", "876765705778525", "99962760803", "5477", "6491", "290978", "805391", "677790484457017369", "4027569021399", "96193", "37759122737659517", "91871712631959", "87951335012195969", "883", "6574989084779914", "6", "457", "435693224", "898009948647", "13364838", "43078", "64225", "26130", "567153437", "6", "37297239671405", "410337344817756", "748510028", "72004", "4576", "2388675", "3150923135130632", "3693435", "25532773494727", "513996114", "7844550113382921", "153146", "152", "590774441", "72912307658", "90768413", "2229983", "31142275", "31924241835260284", "5574587119885407", "89389631", "93407354022", "65944486", "102182943699016660"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6308601010739", "180077", "35070628231141", "5261197937", "5477", "6491", "1993", "805391", "677790484457017369", "122047546103", "29", "87203516715149", "75989836751", "87951335012195969", "883", "3287494542389957", "1", "457", "54461653", "28338223", "6682419", "181", "367", "67", "567153437", "1", "1065635419183", "11398259578271", "26732501", "18001", "352", "31849", "3680984970947", "246229", "79048834349", "85666019", "871616679264769", "10939", "1", "590774441", "36456153829", "90768413", "318569", "31142275", "7981060458815071", "14184700050599", "89389631", "15567892337", "32972243", "5109147184950833"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> A = {"145604061"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"145604061"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> A = {"9484793909268", "70"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9484793909268", "35"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> A = {"789394856574676050", "2585431560565558", "39394"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"394697428287338025", "1292715780282779", "39394"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> A = {"928123220927450", "61", "88159098384", "36250"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"18562464418549", "61", "88159098384", "18125"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> A = {"74", "676547688288", "2755795351", "4726886972429029", "3029996701053"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"37", "225515896096", "2755795351", "4726886972429029", "3029996701053"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> A = {"82630490236", "2", "94514904", "231037573756", "67", "91006980"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"20657622559", "1", "8592264", "57759393439", "67", "7583915"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> A = {"8", "121594", "29567952764", "4888869965131346", "95500", "81", "69586"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"8", "5527", "7391988191", "2444434982565673", "23875", "81", "34793"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> A = {"3637", "260", "26122993443584", "47715564111559878", "2", "871126696052836", "3492829317", "83024857214176826"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3637", "5", "26122993443584", "7952594018593313", "1", "217781674013209", "3492829317", "41512428607088413"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> A = {"344436267897090334", "325286", "34558592240629", "26737083387027646", "71272", "6", "5518254103309", "168166728833571", "2040085"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"172218133948545167", "12511", "34558592240629", "13368541693513823", "71272", "1", "5518254103309", "168166728833571", "2040085"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> A = {"77027926709368546", "5491273", "13457529900", "381937794515116609", "529226736", "897238527664", "163023260675042", "4", "830260999873811145", "8464135771909"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"38513963354684273", "238751", "3364382475", "381937794515116609", "11025557", "39010370768", "81511630337521", "1", "55350733324920743", "8464135771909"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> A = {"9314203007018156", "5060", "851962", "9742", "4412711739107867", "5163251460222", "184576651781589235", "60783243697906", "83910080", "493821353", "275923802087537869"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"179119288596503", "253", "11513", "4871", "4412711739107867", "2581625730111", "36915330356317847", "30391621848953", "83910080", "493821353", "275923802087537869"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> A = {"954594", "2045394017319729", "5218839783290", "500950553", "643762187587074", "59023", "332958482438312591", "892452962196650", "8021586549", "591182557744", "35052237378", "3651542"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"53033", "681798005773243", "74554854047", "500950553", "107293697931179", "59023", "332958482438312591", "446226481098325", "2673862183", "591182557744", "17526118689", "1825771"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> A = {"2577027083250", "954", "19529406673840630", "57652024479953025", "9783533149448", "8667701183", "36364551506", "27553954", "92105223768", "760611410", "970211975008", "82500106376187", "9747"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"429504513875", "53", "1952940667384063", "768693659732707", "1222941643681", "8667701183", "18182275753", "13776977", "11513152971", "76061141", "970211975008", "9166678486243", "361"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> A = {"6107072292", "75085491", "792462", "663", "563862", "32740279", "98", "5416008765298", "86761801", "2320550794", "3696", "41889727601512", "55460160021", "7234942751137364"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1526768073", "1925269", "12007", "17", "7229", "2976389", "1", "2708004382649", "86761801", "1160275397", "176", "748030850027", "2640960001", "1808735687784341"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> A = {"740", "46892814195349", "331644137784744", "23145182297536", "1123766056", "635660996404823", "49", "454201874434", "2117326099", "3323318363874", "30215", "48382654762494945", "543837690127115", "792731566", "57105"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"37", "46892814195349", "13818505741031", "1218167489344", "20067251", "635660996404823", "49", "2949362821", "302475157", "184628797993", "6043", "1075170105833221", "108767538025423", "396365783", "57105"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> A = {"48198988005332", "72447695468198924", "7372375548890615", "43247", "5092916", "39802857267165", "885821525837745", "2", "3285879463227", "72645480217", "3409871821735460", "800", "56626", "1766606515899", "327", "471773769385254810"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"12049747001333", "1065407286297043", "1474475109778123", "43247", "11681", "2653523817811", "59054768389183", "1", "1095293154409", "72645480217", "170493591086773", "800", "28313", "588868838633", "109", "47177376938525481"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> A = {"771453352737828", "335840812372473566", "21413240080803", "7939082709654426", "509945175256708", "39", "42943597", "450", "5902619156958842", "3712140342", "62773", "391106001805291035", "4563953142444356", "78856", "6113141448398", "394", "9811397777267471"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"931706947751", "167920406186236783", "2379248897867", "40096377321487", "127486293814177", "13", "42943597", "25", "2951309578479421", "206230019", "62773", "78221200361058207", "1140988285611089", "78856", "3056570724199", "197", "9811397777267471"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> A = {"951", "7991797", "747288878575", "353285236878807776", "3362", "61210905659", "91012", "529716552936598720", "365", "69491630", "194680", "61", "467759933585301", "377", "241", "5916", "849028537", "45"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"317", "726527", "747288878575", "11040163652462743", "1681", "61210905659", "373", "105943310587319744", "73", "534551", "4867", "61", "22274282551681", "13", "241", "493", "17327113", "9"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> A = {"50", "14", "633096116390", "1988", "3162232631", "421271142", "7742503382620144", "4789", "901033478654805155", "1964", "519", "806308333803677774", "906612274", "51680", "28453266155830", "524538812", "462061065890673", "7142", "5489869195277430"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"25", "1", "63309611639", "71", "3162232631", "70211857", "483906461413759", "4789", "180206695730961031", "491", "173", "403154166901838887", "453306137", "544", "2845326615583", "131134703", "462061065890673", "3571", "182995639842581"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> A = {"285201", "92", "99473054", "26131609051", "192893", "1808", "3627167521867057", "573893750233", "998", "6004557614683", "907401453686806", "32948615", "711", "83150773147", "4386970467240895", "5963", "3", "5391", "83611330376", "6239101199623"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"40743", "23", "49736527", "26131609051", "2879", "1808", "518166788838151", "573893750233", "499", "6004557614683", "34900055911031", "941389", "79", "83150773147", "4386970467240895", "5963", "1", "599", "10451416297", "6239101199623"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> A = {"99359105410", "8449862153", "97", "937371", "683591021", "472588995534284559", "547673503842416196", "72668044", "6329725751701125", "5665999759713727", "563730030145", "3", "783", "833", "91680171", "771771002", "4", "23706", "814467369431", "1885717", "44664936865130"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"231067687", "291374557", "97", "312457", "683591021", "1323778698975587", "2173307554930223", "18167011", "703302861300125", "115632648157423", "112746006029", "1", "29", "833", "30560057", "385885501", "4", "11853", "814467369431", "1885717", "4466493686513"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> A = {"335270359354", "522388940500151", "2", "40019167012639", "6", "764089282", "3954085", "867680943053519947", "1746652", "6086945647", "1375", "797354513001522", "5215693260390852", "68283613631074", "97386933164", "706444", "276634166", "74398167618252", "4852457145", "27270", "634962833", "681669"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"23947882811", "522388940500151", "1", "40019167012639", "1", "34731331", "790817", "78880085732138177", "436663", "6086945647", "1375", "398677256500761", "434641105032571", "34141806815537", "24346733291", "176611", "138317083", "24799389206084", "35944127", "101", "634962833", "25247"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> A = {"4317", "42531701246", "430263131", "99379888633194118", "44199135", "719", "29500", "99142538656103", "82560321226", "582491", "5539316029560", "699612060251620906", "387", "49056", "861779809", "232", "2662626126", "17944722019101", "54607963248070861", "38240462574", "821850936104", "264482166682428", "57438280136"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1439", "924602201", "430263131", "49689944316597059", "8839827", "719", "7375", "99142538656103", "41280160613", "6401", "15386988971", "349806030125810453", "43", "16352", "78343619", "1", "443771021", "5981574006367", "54607963248070861", "2124470143", "102731367013", "22040180556869", "7179785017"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> A = {"5011", "97708566", "91095869161164", "490523400309", "85678", "134428059", "460197422435646212", "980545825542524", "82", "96113779", "333014689606", "19915849", "554513", "241481747555817", "9", "18629967528", "3845449", "78934773491397796", "6366326", "41295094634380", "93461347375", "57507828548223", "526211602", "11"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5011", "16284761", "154924947553", "163507800103", "42839", "134428059", "115049355608911553", "245136456385631", "41", "96113779", "166507344803", "19915849", "554513", "80493915851939", "1", "2069996392", "3845449", "19733693372849449", "3183163", "2064754731719", "8496486125", "19169276182741", "37586543", "11"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> A = {"265642631048740", "967141587700146701", "5322636", "325114050128891025", "577", "838693465", "67707221419", "12818088643604", "9152740", "24951266", "649960926", "87815168830", "145259048907", "19996", "65310500", "409076427485", "6576485238779029", "1236404042739", "84281053453153565", "1815076795099", "31462", "7673928485", "1697675", "1057", "53131351"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1207466504767", "967141587700146701", "13441", "4334854001718547", "577", "3164881", "67707221419", "110500764169", "457637", "12475633", "108326821", "8781516883", "2305699189", "4999", "65310500", "81815285497", "939497891254147", "1236404042739", "16856210690630713", "1815076795099", "15731", "1534785697", "9701", "151", "53131351"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> A = {"76064460", "564341889037952", "83557693850220708", "72252358243673", "8991029", "1", "74324479841399654", "1", "57938189923196532", "328", "277232672", "734444447776639874", "80", "6958318522", "37531120888", "371427", "12583", "816657", "74075383167158", "373211", "1267825799117", "954", "1111190", "85159875789", "8829019", "5361684795752"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1267741", "29702204686208", "366481113378161", "72252358243673", "8991029", "1", "37162239920699827", "1", "18835562393757", "41", "8663521", "367222223888319937", "1", "119971009", "4691390111", "123809", "12583", "272219", "37037691583579", "373211", "1267825799117", "53", "555595", "9462208421", "8829019", "670210599469"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> A = {"3190980818", "79968742", "78428", "270983296386", "3", "8", "424498855", "376464772", "34852595321", "875653329328", "3268", "5207744", "189296944677982364", "52371591", "87255386190569", "7890635769", "343", "6901575546464", "119401269948352", "228855720197859661", "74443483946820727", "505312363", "76", "4377637031815009", "719060", "889", "9637924"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"93852377", "5712053", "2801", "12317422563", "1", "1", "4468409", "94116193", "2674591", "54728333083", "43", "81371", "47324236169495591", "17457197", "87255386190569", "2630211923", "343", "215674235827", "17057324278336", "228855720197859661", "74443483946820727", "505312363", "19", "4377637031815009", "179765", "127", "2409481"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> A = {"63", "5794415412702338", "674639541", "49452157", "24296", "1027860508993524", "1976225029227167", "651311222777", "61369707828066423", "411324", "474548471289", "97969723273984220", "676434028519188047", "712863628", "599055", "96003394177867", "9165657460472", "89399342", "163740449715482", "8", "1166461577901", "75725464191774818", "670154721", "24809826213524300", "5950882529", "7927049897220947", "97708306123", "51055951850874"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"7", "2897207706351169", "74959949", "49452157", "3037", "5038531906831", "1976225029227167", "651311222777", "20456569276022141", "151", "925045753", "288146244923483", "676434028519188047", "178215907", "39937", "7920418627", "1145707182559", "442571", "4308959203039", "8", "1166461577901", "37862732095887409", "223384907", "6202456553381075", "5950882529", "7927049897220947", "97708306123", "945480589831"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> A = {"29735505358280536", "615369331326405", "7086", "2146063", "44951430962388", "15", "559", "832", "628672", "784", "96008", "7829524136", "98672662888621093", "70002256882458538", "841722675880070094", "7223470323334", "4217004884864078", "407854008452849276", "902640403", "686056727", "4344", "636812", "85477190598326098", "3027558838", "8", "612303410414676", "258676346186", "3297649280222881", "279"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3716938169785067", "2159190636233", "1181", "3079", "101241961627", "5", "1", "1", "3008", "49", "1091", "139812931", "98672662888621093", "3181920767384479", "12753373876970759", "3611735161667", "110973812759581", "5366500111221701", "128948629", "686056727", "181", "14473", "42738595299163049", "1513779419", "1", "51025284201223", "129338173093", "3297649280222881", "279"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> A = {"484832118772669", "71883", "123381080764", "69927892471632", "5795158", "9186863", "42701", "6319694877", "32943", "54914642681618", "71030", "2842781113552", "5", "826065243", "1548088625448694", "70343825479830", "97505", "581341937088623478", "20810527245", "85061256", "8493", "47657456", "7385720675736", "24", "184", "981338886661", "2003780", "3890218059842", "81309961", "216404487277417669"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"484832118772669", "163", "30845270191", "112063930243", "2897579", "187487", "42701", "2106564959", "10981", "27457321340809", "7103", "9351253663", "1", "826065243", "5819882050559", "434462513", "19501", "650270623141637", "462456161", "3544219", "2831", "6808208", "4215593993", "1", "23", "140191269523", "500945", "1945109029921", "81309961", "216404487277417669"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> A = {"81024344505018851", "61239190978", "7114567902175", "5318820251363", "212744392", "1253127888982107", "4", "761808342485702017", "6", "31332326603411", "1615", "520252", "948", "7940", "449544", "57996249471", "3338017723770187", "5", "3124759696", "325105492821", "14332758972623", "716031", "3682074", "586848", "28883516", "7", "6730378", "31182580521", "691248512213145533", "74079559", "1263"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"81024344505018851", "4374227927", "309329039225", "5318820251363", "223471", "139236432109123", "1", "69255303862336547", "1", "31332326603411", "323", "130063", "79", "397", "18731", "6444027719", "3338017723770187", "1", "195297481", "108368497607", "2047536996089", "79559", "613679", "195616", "7220879", "7", "3365189", "31182580521", "691248512213145533", "74079559", "421"};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> A = {"8580012", "254909468", "48035658674916", "26730288878936", "41776451", "11", "44526310458237", "8211940905440", "1931778", "30640099341653082", "6", "95814", "7323415277386629", "444", "1", "6918744", "68524896", "39647841805892", "3317960966", "74162788458079", "1716191271090", "33624", "343480489384", "704146", "3", "575704959514", "946949", "221263655147", "9", "3366427838", "47918150345090", "5844558134"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"102143", "5793397", "3278436983", "3341286109867", "41776451", "1", "4947367828693", "51324630659", "107321", "1702227741202949", "1", "5323", "2441138425795543", "37", "1", "288281", "22841632", "9911960451473", "1658980483", "74162788458079", "171619127109", "467", "42935061173", "352073", "1", "287852479757", "946949", "221263655147", "1", "1683213919", "23959075172545", "2922279067"};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> A = {"739080993909935454", "195532233589", "3811002612", "27275646713055", "6268198228444", "818536212886311872", "2034856", "5037875503848826", "7722077201187", "895872655151953", "1952379311429441", "4116761932088889", "444375", "4068491802500", "9331231226482", "581089", "9893148", "3622154498672709", "4236430225583652", "838", "1716453648", "1", "42", "77102169681539838", "8365126619038509", "904", "8254755", "1638", "907688684466549785", "2139800385436", "1261065424163", "6198448440936364", "86739403"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"123180165651655909", "2539379657", "317583551", "139875111349", "1567049557111", "43080853309805888", "254357", "2518937751924413", "2574025733729", "895872655151953", "1952379311429441", "457417992454321", "79", "53532786875", "4665615613241", "581089", "824429", "1207384832890903", "353035852131971", "419", "130987", "1", "1", "1168214692144543", "929458513226501", "113", "183439", "117", "10678690405488821", "534950096359", "1261065424163", "1549612110234091", "86739403"};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> A = {"6750811", "7520", "7081840251", "2401559146", "18", "309408209", "8", "952967", "901622086", "187883", "871934419", "88", "56724945900", "69612", "59", "952783631", "4024431123104277", "696423813", "17519536", "673006159043431076", "60377008554731034", "417", "410142812938608", "661", "14878234", "79141204238266", "97793068765", "203632996120", "488278047", "187776", "894950451083049", "5191338", "884170", "5925"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6750811", "1", "19191979", "171539939", "1", "28128019", "1", "952967", "450811043", "187883", "871934419", "11", "27011879", "5801", "59", "952783631", "447159013678253", "232141271", "1094971", "168251539760857769", "3354278253040613", "139", "8544641936221", "661", "1062731", "39570602119133", "2794087679", "5090824903", "162759349", "187776", "298316817027683", "865223", "88417", "1975"};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> A = {"69431291783113", "885", "8544", "7288", "150", "255348224439887", "82939421409059", "7", "599223687", "1732", "93269", "63483178922834261", "66121511837", "97035663457852", "28546", "38509604673308064", "312096", "4705341113304", "811939", "9653995860", "7056489512550393", "324601902", "50703771353085", "6", "252617077397548830", "575540527305759376", "348535133439606366", "834901", "846694090671928314", "782393954973939856", "366", "96871146", "5845150657", "33148976", "4061062101269713"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5340868598701", "59", "89", "911", "25", "255348224439887", "82939421409059", "1", "199741229", "433", "139", "63483178922834261", "66121511837", "84525839249", "2039", "133713905115653", "104032", "65351959907", "811939", "160899931", "784054390283377", "18033439", "10140754270617", "1", "8420569246584961", "35971282956609961", "58089188906601061", "11437", "141115681778654719", "48899622185871241", "61", "16145191", "5845150657", "2071811", "4061062101269713"};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> A = {"119128654441015", "9844166", "523738269394159", "249474853", "76970915964355", "4920101795464", "493903994", "1", "95606298208699", "5576869762", "995029809", "192", "92", "93479437", "7717516038218", "722976", "29", "66839553482090", "50468641830", "33560145210861062", "77154210513784", "90274", "68094122352367", "1077225275", "90", "1784990012664", "728727561288", "409467408601947888", "382559161271070639", "2897901881", "7446915277448", "50580858929957895", "419427696366996406", "9650577476901", "952", "94570161"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1401513581659", "169727", "523738269394159", "249474853", "2199169027553", "26739683671", "246951997", "1", "95606298208699", "2788434881", "7056949", "64", "23", "93479437", "551251145587", "443", "1", "6683955348209", "11931121", "16780072605430531", "9644276314223", "45137", "68094122352367", "153889325", "1", "74374583861", "91090945161", "208062707622941", "2965574893574191", "413985983", "930864409681", "481722465999599", "209713848183498203", "189227009351", "17", "31523387"};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> A = {"8169745704661361", "93014459172", "52428414106563", "299", "2588945972365", "1755", "180638910828876", "92489", "2", "398045", "232", "43293321199981", "40227516851025", "338753274383396676", "63601463600153948", "678263759", "976", "924482952969384", "331159", "26890574001", "45", "98429923448574649", "7039770", "4706356995", "91589", "6", "114134454453", "13279870472722657", "296543217660226", "875971", "181", "563922778210998221", "8376240080317", "983883904924", "18249517977258", "477562645562", "6652688551259"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"8169745704661361", "2583734977", "17476138035521", "1", "517789194473", "351", "654488807351", "92489", "1", "79609", "29", "52223547889", "1915596040525", "28229439531949723", "15900365900038487", "678263759", "976", "726794774347", "331159", "8963524667", "1", "98429923448574649", "234659", "104585711", "91589", "1", "38044818151", "13279870472722657", "148271608830113", "875971", "181", "563922778210998221", "8376240080317", "245970976231", "3041586329543", "238781322781", "6652688551259"};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> A = {"5", "747", "13789156", "728571171", "531", "359", "650", "1549674274469", "431016", "9819946663", "598965141720", "83337", "219018", "554", "271", "780941663999", "666397606", "4374966", "4664293", "949", "8124732340565", "46183661081", "3897481848181788", "15646672", "14", "50", "899", "623427254340", "7847411", "8713", "639408", "6411777237247732", "712326351", "6121774", "5388670259790", "7473", "8034456", "43039537"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "83", "3447289", "3326809", "531", "359", "1", "1549674274469", "17959", "316772473", "453761471", "27779", "211", "277", "271", "111563094857", "47599829", "729161", "4664293", "73", "1624946468113", "46183661081", "11199660483281", "977917", "1", "25", "29", "944586749", "713401", "8713", "2768", "1602944309311933", "237442117", "3060887", "179622341993", "2491", "334769", "43039537"};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> A = {"90679461976", "6884229", "6614864413", "734150860", "1893955144237916", "57859423", "11", "900513460734", "131", "967762804197", "1", "478524424786", "99435123", "8484570235932", "165455", "799", "36849265", "51", "4", "1031461345", "1518682", "96315969004", "16611546", "1486772796", "299587687", "2770", "972663379", "63071673521212126", "6892", "5027319674656", "79972", "244223315779816155", "1057", "40989317869", "423", "825", "82119131631650644", "6", "428"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"11334932747", "208613", "213382723", "36707543", "473488786059479", "1866433", "1", "150085576789", "131", "46083943057", "1", "239262212393", "11048347", "101006788523", "33091", "1", "387887", "1", "1", "206292269", "69031", "24078992251", "395513", "123897733", "42798241", "277", "972663379", "31535836760606063", "1723", "5027319674656", "19993", "16281554385321077", "1057", "40989317869", "423", "275", "20529782907912661", "1", "107"};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> A = {"9468610454775383", "61348788044", "810771511", "559524660", "45272", "949104511429", "73412137", "395150095864", "196923", "889640985857938630", "98642438461792868", "16674", "2757255263", "1728382194174", "9103554401678", "8163882", "8450087424729", "33896674625586500", "37667", "209029624731527255", "8145301289", "21133440", "4912449814967", "12664756187", "5394305529118", "7", "15378234", "52082627", "81518931135129", "5862131153171", "4", "66466497744863", "115", "689734836", "9596154561425", "703518378541146", "7640487855907467", "727984750167968", "8", "2079620817481"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9468610454775383", "15337197011", "810771511", "198413", "5659", "949104511429", "148909", "49393761983", "1601", "4682320978199677", "24660609615448217", "1", "393893609", "9933231001", "413797927349", "7957", "122465035141", "1210595522342375", "5381", "41805924946305451", "8145301289", "4226688", "4912449814967", "12664756187", "7909538899", "1", "2563039", "52082627", "27172977045043", "5862131153171", "1", "66466497744863", "23", "2737043", "383846182457", "39084354363397", "231529935027499", "22749523442749", "1", "2079620817481"};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> A = {"415175888457253", "667273693768", "9601338818", "45602157951609648", "8640653", "1436214026294", "17", "278", "925177020206571931", "6503", "231201373010715957", "969192290541274", "8597818189896", "88260314", "3994360965055", "58146104888701", "3636590399942", "83907588528", "47847320279", "5852478830005", "23381569135", "87", "7136672", "5095093196497", "485130723438", "3558059888399", "5006", "919228454037402", "89327", "86461468", "79393150675515758", "80436274443260321", "469167692570473031", "356", "60506717208665458", "8", "823454872", "229137", "340636201", "834198653", "33"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5391894655289", "7582655611", "4800669409", "950044957325201", "1234379", "718107013147", "1", "139", "925177020206571931", "929", "77067124336905319", "484596145270637", "358242424579", "44130157", "798872193011", "58146104888701", "1818295199971", "5244224283", "26246473", "1170495766001", "23381569135", "29", "7136672", "5095093196497", "80855120573", "3558059888399", "2503", "153204742339567", "89327", "21615367", "39696575337757879", "80436274443260321", "469167692570473031", "89", "30253358604332729", "1", "102931859", "76379", "340636201", "834198653", "1"};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> A = {"8970", "590", "10599092", "476365910", "1397279498484", "536650877405116264", "93042463", "276234", "5", "973598606080844", "28683751396", "365858", "68", "4445721", "933127", "30406304119965801", "8639964307777", "51857918209", "99184", "1", "668318", "27866", "4388480682", "7333105193", "535", "7510683769587510", "5308651585712239", "162839907680635", "45818515458", "79165560461421", "241318328064434", "6349106162", "4659712", "83771", "9526952321", "49703252941", "444131317855", "275411828", "8260", "61387", "71252959779626", "442432692815323244"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "3181", "2507189", "6128418853", "9583051382234219", "93042463", "6577", "1", "10582593544357", "7170937849", "182929", "1", "29057", "933127", "10135434706655267", "8639964307777", "82445021", "6199", "1", "47737", "13933", "731413447", "431359129", "107", "250356125652917", "5308651585712239", "551999687053", "22909257729", "163903851887", "120659164032217", "19717721", "245248", "83771", "9526952321", "49703252941", "88826263571", "68852957", "5", "3611", "35626479889813", "110608173203830811"};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> A = {"5868", "2680049693045669", "5581837480441389", "69015975", "74121391", "6", "152497747", "7967038716259", "4", "27742", "6690", "142333116515677375", "608862179174839392", "4803481310", "291088315225", "90569811837", "488287498496714", "21883565", "58425853", "63553492293801109", "87236070", "57966521082", "6", "2149460149", "17477256", "9486", "3693", "831946549053029", "9157", "215783398", "7175551143", "858", "991", "98", "1", "718017", "2", "136867414464484", "3466614", "24062075", "759020686126", "441019159119", "29814173"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "12350459414957", "346031707919", "2797", "583633", "1", "32261", "1138148388037", "1", "97", "223", "3028364181184625", "18450369065904224", "15495101", "11643532609", "30189937279", "34877678464051", "2441", "58425853", "63553492293801109", "2907869", "9661086847", "1", "2149460149", "25111", "31", "1231", "831946549053029", "9157", "107891699", "2391850381", "13", "991", "49", "1", "239339", "1", "3110623056011", "577769", "50657", "379510343063", "63002737017", "29814173"};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> A = {"850", "83102646675824", "46207112407815", "7862890356026599", "823456", "19800331195", "655737204", "378304895083", "985196819586980", "43001428", "63498606137841991", "9987", "9825443", "983989161551180", "679178398742491", "943955562", "331", "3314485875738341", "971426110623", "8805543043548575", "907872603", "4515115662268", "6271", "509", "57415663324057", "64062", "481", "535222116364999", "109283", "7118691", "9653895", "30921017", "460118141001", "92088073", "451", "520394", "554298310643", "11950495124965", "61", "16337398675", "9929625788", "886", "34016941", "507"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "5193915417239", "3080474160521", "341864798088113", "823456", "3960066239", "54644767", "378304895083", "49210630349", "10750357", "63498606137841991", "3329", "9825443", "49199458077559", "679178398742491", "14302357", "331", "194969757396373", "323808703541", "49657651451", "887461", "1128778915567", "6271", "509", "57415663324057", "3559", "37", "76460302337857", "109283", "2372897", "214531", "30921017", "460118141001", "1195949", "41", "37171", "79185472949", "2390099024993", "61", "1256722975", "2482406447", "443", "34016941", "169"};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> A = {"1278390037916", "4487720801529528", "3201613840786760", "399502874828853174", "67727406368020", "70487081088397985", "69822478202224484", "3462246215", "668840289", "3", "773133573136304531", "5764186", "88695346683534", "781556950614", "42331926485", "9082593521", "308", "1980304615", "3005395112367", "20898009", "240622244259746", "893", "7110920122", "6621", "65507214675380", "510114227444287343", "3035724453", "6464599", "68", "9267911245582407", "902260611", "355467249673058074", "320672270", "1", "3633238824676", "67021551", "15616426109634", "88016744656723157", "61475006271614528", "32579341779642", "5051213921186587", "7452816", "87559551", "64315738713691958", "4094980487119072"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"319597509479", "62329455576799", "80040346019669", "2894948368325023", "483767188343", "1281583292516327", "93345559093883", "36444697", "1496287", "1", "773133573136304531", "2882093", "14782557780589", "11841771979", "8466385297", "9082593521", "1", "6712897", "333932790263", "211091", "120311122129873", "47", "3555460061", "2207", "192668278457", "12441810425470423", "3035724453", "6464599", "1", "4070228917691", "461987", "177733624836529037", "160336135", "1", "908309706169", "7446839", "17705698537", "8001522241520287", "61475006271614528", "33726026687", "103085998391563", "22181", "9728839", "32157869356845979", "127968140222471"};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> A = {"3961807410569929", "109069772", "9", "71519", "597", "70299", "60312228", "37685088", "4752", "98150063", "977019070750", "21223095145", "483718505", "7671", "66913065364091", "12462779029", "68705599825373982", "25522", "898137546263982707", "3", "774630374", "633082858214296", "962988", "944", "1192045120170314", "5354", "55", "63237939", "81234735649", "74211622121465", "88366410905669560", "33568892130678725", "68788366424664", "2209121", "896189848838", "1", "1389145", "7835", "28800530636410", "888337451287225", "554171489945", "4", "6597", "4", "40", "29"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3961807410569929", "3895349", "1", "601", "199", "107", "2441", "5383584", "1", "8922733", "488509535375", "606374147", "96743701", "2557", "66913065364091", "429751001", "11450933304228997", "1823", "898137546263982707", "1", "55330741", "79135357276787", "6173", "59", "596022560085157", "2677", "11", "21079313", "2801197781", "14842324424293", "2209160272641739", "1342755685227149", "2866181934361", "2209121", "448094924419", "1", "277829", "1567", "2880053063641", "35533498051489", "110834297989", "1", "733", "1", "1", "29"};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> A = {"565941114793768727", "7860597773", "315319420", "1", "58016407495", "56535912287", "5270292674758844", "1058803717", "35599211", "27397887526451", "91824536288139365", "269046592145696", "1314165", "8810", "6384401150384", "95926262", "177978248", "5392429489096588", "8479656627", "45528", "149509508376121", "904792962", "39226967676", "846928", "461628750372594955", "824074", "1", "44680072", "190892589454198", "9", "97079", "286", "88690699167002", "615041433327825", "6321580419319", "15857461796085", "914835437056488", "53233616", "8360003", "846181108947785321", "7224570", "131095635045832532", "746448893611542669", "24451", "430375", "415806754069705392", "66971922509631213"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"43533931907212979", "1122942539", "787", "1", "146876981", "56535912287", "1317573168689711", "36510473", "1227559", "2107529809727", "18364907257627873", "5724395577568", "87611", "881", "399025071899", "47963131", "3178183", "1348107372274147", "2826552209", "271", "149509508376121", "150798827", "83818307", "52933", "185021543235509", "412037", "1", "5585009", "95446294727099", "1", "97079", "1", "44345349583501", "130167499117", "574689129029", "34851564387", "38118143210687", "3327101", "8360003", "846181108947785321", "80273", "32773908761458133", "248816297870514223", "24451", "430375", "2887546903261843", "7441324723292357"};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> A = {"804193891313969", "331656863", "973073316266", "892001204522", "3", "41268785218935572", "557278920168", "62620", "1876862329892387", "16669273891316614", "32456", "77886522", "712208", "6942", "462486133692698", "93", "4615698", "7216", "60057312024813258", "6", "570259390", "98253914", "7851", "257", "5", "9966415706856039", "86294006", "56365972815", "3619379691", "751374202", "885659495091304", "83", "773", "7", "77009059636", "9500733708", "7244555452453524", "9105817561", "51436981657184", "81284", "145972", "85049485", "6893623227", "8776", "5", "337493434939", "376750073909695", "8848609152568"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"61861068562613", "8963699", "486536658133", "446000602261", "1", "10317196304733893", "23219955007", "101", "98782227889073", "8334636945658307", "4057", "5563323", "6359", "1157", "231243066846349", "1", "647", "1", "10009552004135543", "1", "3354467", "99649", "2617", "1", "1", "3322138568952013", "2538059", "129576949", "402153299", "375687101", "110707436886413", "83", "773", "1", "19252264909", "10021871", "1095667793777", "313993709", "51436981657184", "20321", "36493", "17009897", "2297874409", "1097", "1", "337493434939", "376750073909695", "1106076144071"};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> A = {"11188", "71640739", "953913522", "9737579818729", "13078", "5971", "25", "975548218201073", "136914", "940052517384997199", "4105290081490013", "88933973", "94757989628", "36078391", "156600585441328", "271370731636654320", "5263727881832747", "14001", "3900252385", "1240342376135709", "82", "135850300823", "947281162", "41529554401", "247847200267440", "84236757221832", "1829302324911528", "3002959482237745", "202", "6444571950680098", "5866135", "750198", "72", "297067868168", "78179736", "161", "185846919", "1", "9804856695560363", "336807276", "16", "734894351238032662", "904476141928672", "2", "840678", "82516157594320", "835", "19878028619561", "8825504138"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2797", "71640739", "158985587", "1391082831247", "503", "853", "25", "88686201654643", "1201", "940052517384997199", "315791544730001", "88933973", "1246815653", "36078391", "48214465961", "102791943801763", "5263727881832747", "359", "780050477", "315849853867", "1", "135850300823", "473640581", "41529554401", "1032696667781", "3509864884243", "76220930204647", "600591896447549", "101", "3222285975340049", "106657", "125033", "9", "1280464949", "3257489", "1", "61948973", "1", "9804856695560363", "28067273", "1", "367447175619016331", "904476141928672", "1", "839", "1031451969929", "167", "19878028619561", "4412752069"};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> A = {"71552", "3253293122", "16796", "632045067132599", "74257", "32080976", "29", "4535408754", "72684170190991755", "10843586471", "372", "38628", "308327170990355311", "991135843224653270", "72472820351613", "5672005553", "4", "62055547", "79841764", "6", "553", "903703315", "320227", "78625463697145", "28363890", "336953163918394903", "6802838319", "5663638922", "523464599190473", "974640478879299", "42109628038634", "216", "5964761903877189", "930971505558473", "69", "601", "70021043", "7584", "9", "310", "5948450962234467", "4", "39744400710", "21587306", "18482059275251", "238041142", "80", "763977810504376", "5634531655040", "87916606722077959"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1626646561", "1", "947593803797", "74257", "2005061", "1", "83989051", "8075494003", "10843586471", "1", "29", "308327170990355311", "285629926001341", "2196146071261", "5672005553", "1", "62055547", "19960441", "1", "1", "180740663", "320227", "683699684323", "945463", "387748174819787", "2267612773", "2831819461", "12173595330011", "6912343821839", "1619601078409", "1", "27487382045517", "30031338888983", "23", "601", "70021043", "79", "1", "31", "104358788811131", "1", "189259051", "830281", "1421696867327", "119020571", "1", "95497226313047", "5634531655040", "87916606722077959"};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> A = {"82575852558"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"82575852558"};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> A = {"16", "8"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"16", "1"};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> A = {"4", "2"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "1"};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> A = {"999999874000003969", "999999937"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"999999874000003969", "1"};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> A = {"8", "10"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"8", "5"};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> A = {"113311873392740839", "343093873178551769", "87311001270206303", "743563782903620039", "985360632500832899", "52705445250043459", "216738151169277131", "474590697370023539", "31422177970633129", "41479138422570091", "232540409961870301", "787865425158963013", "777258265344517459", "104183678709040423", "227774263025878193", "724281362761504133", "77137669857768727", "493400926359301013", "276649898898770561", "727355795434990039", "60888904024600073", "109362176756250667", "475125785914489361", "607442594804857297", "908471089041706271", "203535573083023579", "26610805796075261", "511817321059532713", "480774639491952941", "208861715676643837", "585311737289761829", "132239770282401571", "480490003741371863", "29378444947066141", "877090754189592841", "917005141243511219", "290285943374888537", "199613846293270463", "64528851789129109", "91467321832579093", "399384474885729299", "118495902385545131", "555733979503638497", "319154973552740459", "79466527416766097", "210502325360783843", "55714025597914843", "510756861860665547", "796455760530311033", "847341196591045561"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1330898867", "1", "852152611", "1", "1875057133", "1451413987", "1", "1", "1251775027", "1", "1", "203535573083023579", "1", "1", "829986721", "208861715676643837", "1", "1", "310566961", "389003429", "1750205053", "917005141243511219", "579255821", "339944999", "1791919529", "91467321832579093", "379561643", "118495902385545131", "555733979503638497", "543525107", "79466527416766097", "210502325360783843", "55714025597914843", "510756861860665547", "796455760530311033", "847341196591045561"};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> A = {"990293682764310181", "187383102094285457", "20678153169429089", "116087995307397457", "218684200448134789", "7966381758959123", "198091434671201431", "790791503488207643", "338983603821209957", "163017826936991177", "713715054445345787", "260587666249701991", "697386039994775419", "157889405113145473", "193795750362574733", "113886133863218809", "677228406817636027", "771588535859450303", "190371106405723577", "218180883157726499", "54057561927915703", "819241817529139051", "509611333123029013", "622884748982569441", "516440816858069353", "145797881992982407", "316893937901943599", "113905348134013207", "134442432805916161", "557382451066677883", "66738952049058403", "261118044366930533", "131540189501411221", "213570234034770269", "300403529886038087", "1645322565196591", "79313163736539221", "45131167252784269", "712162126622292377", "134845246516461037", "546338827587297539", "432827251590604141", "278152690268503891", "438830885768560697", "342633249269776589", "176851653185381639", "65538283856107429", "3856962007310959", "132941767813897831", "233418895643004293"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1254758539", "1", "1", "1", "1", "1", "1879645673", "1", "1", "1", "1", "1", "883627861", "1380985937", "1", "113886133863218809", "1646661433", "936133801", "190371106405723577", "1", "1", "440894459", "1223152829", "622884748982569441", "1530330149", "1", "1", "113905348134013207", "1", "1", "160184699", "1915354673", "131540189501411221", "904317653", "1", "14390879", "1", "1337811539", "712162126622292377", "134845246516461037", "546338827587297539", "432827251590604141", "824228903", "1858135889", "342633249269776589", "1546839991", "194204657", "33735071", "132941767813897831", "233418895643004293"};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> A = {"288483440527370419", "11532796768155647", "461962089933330781", "893816928894812917", "228324915142756517", "393477653727452491", "94409867143103917", "963269541361576871", "316695776211353171", "54027813334082201", "329120415272692333", "285042489399560941", "193702126333910813", "820397445623404241", "405698980628881571", "648405892518974617", "237274036630845073", "523925430421316983", "877176240331074667", "45300488999450341", "927645859431163031", "312960979421728063", "25814785392615071", "55329293101355719", "396654614381923319", "390296093469162347", "36427766707279067", "827823232301727019", "20043641663731559", "292841584529762603", "233466809546405287", "906749699964530557", "170176628761454563", "49329795663558341", "821317686130624429", "1302096682034347", "332416104462148403", "374901895108105093", "520340961598482113", "553946799963105671", "373751375427772637", "137289409695199297", "46622844418528799", "241831874742029113", "549870411351579257", "52577579489017153", "512106595688364263", "241588458396757159", "49798666896254543", "802245566190087619"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "1", "1", "1", "1", "208435517", "1", "1", "247364147", "1973344517", "1", "1", "1039391669", "1887766823", "1", "1", "1709061509", "877176240331074667", "1556281381", "927645859431163031", "1532460037", "29108161", "1", "306557387", "1816095311", "218414083", "1", "1", "801229493", "233466809546405287", "789305389", "1", "1", "1314683959", "17447543", "1048799671", "1025750683", "520340961598482113", "886703141", "1830129263", "1822299191", "46622844418528799", "241831874742029113", "886857311", "52577579489017153", "512106595688364263", "365490271", "49798666896254543", "802245566190087619"};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> A = {"84", "10", "6", "14"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "5", "3", "7"};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> A = {"999999874000003969", "999999937", "999999680000017679", "999999670000016821", "999999478000068121", "999999558000048517", "999999680000017679", "999999690000016969", "810744711", "510367819", "999999508000060507", "999999472000069687", "999999484000066483", "128096503", "999999726000014413", "999999622000030537", "694105282", "999999662000018957", "999999518000058077", "999999632000027927", "999999830000006741", "86525020", "546342441", "999999680000023751", "999999694000015309", "999999686000017253", "999999530000054201", "999999634000029133", "126846552", "942024428", "999999640000028431", "999999558000048517", "999999670000016821", "702377183", "999999518000058077", "999999558000048517", "999999830000006741", "999999726000014413", "999999688000015687", "999999502000062001", "838873714", "179782602", "999999820000007371", "184345733", "999999548000050547", "736878053", "999999554000049329", "118512912", "999999726000014413", "999999472000069687"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"999999874000003969", "1", "1", "1", "999999478000068121", "1", "1", "1", "38606891", "39259063", "1", "1", "1", "128096503", "1", "1", "26696357", "1", "1", "1", "1", "21631255", "182114147", "1", "1", "1", "1", "1", "755039", "235506107", "1", "1", "1", "702377183", "1", "999999761", "999999893", "1", "1", "999999502000062001", "59919551", "29963767", "999999883", "184345733", "1", "736878053", "999999757", "118512912", "999999726000014413", "999999733"};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> A = {"2", "3", "6"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "6"};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> A = {"975461523962811493", "975461120999848573", "975461632604787023", "975461685938218877", "975461608901111159", "975461687913528511", "975461233592445499", "975461389641838577", "975461523962811493", "975461687913461479", "975461144703552901", "975461342234422301", "975461275073933617", "975461318530729013", "975461664209791159", "975461687913528511", "975461437049262269", "975461739271555427", "975461531864100221", "975461695814765647", "975461282975163449", "975461407419601379", "975461371864060199", "975461521987543447", "975461595073951549", "975461691864147203", "975461990135872849", "975461650382620517", "975461600999848687", "975461589148014739", "975461563469002273", "975461751123375143", "975461600999922991", "975461435073930919", "975461642481386413", "975462203469319801", "975461488407302521", "975462171864362969", "975461599024613881", "975461302728253669", "975461668160400419", "975461282975163449", "975461334333194437", "975462124456927721", "975461597049297947", "975461577296170207", "975461350135654537", "975461180259107089", "975461595073951549", "975461778777747571"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "1", "1", "1", "1", "987654461", "1", "1", "1", "1", "1", "987654419", "987654467", "987654463", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "987654673", "975461990135872849", "1", "1", "1", "987654361", "1", "987654611", "987654347", "1", "975462203469319801", "975461488407302521", "987654869", "975461599024613881", "987654379", "987654439", "987654359", "1", "987654821", "975461597049297947", "987654377", "975461350135654537", "975461180259107089", "975461595073951549", "975461778777747571"};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> A = {"999999999999999999", "999999999999999998", "999999999999999997", "999999999999999996", "999999999999999995", "999999999999999994", "999999999999999993", "999999999999999992", "999999999999999991", "999999999999999990", "999999999999999989", "999999999999999988", "999999999999999987", "999999999999999986", "999999999999999985", "999999999999999984", "999999999999999983", "999999999999999982", "999999999999999981", "999999999999999980", "999999999999999979", "999999999999999978", "999999999999999977", "999999999999999976", "999999999999999975", "999999999999999974", "999999999999999973", "999999999999999972", "999999999999999971", "999999999999999970", "999999999999999969", "999999999999999968", "999999999999999967", "999999999999999966", "999999999999999965", "999999999999999964", "999999999999999963", "999999999999999962", "999999999999999961", "999999999999999960", "999999999999999959", "999999999999999958", "999999999999999957", "999999999999999956", "999999999999999955", "999999999999999954", "999999999999999953", "999999999999999952", "999999999999999951", "999999999999999950"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1421054052633", "499999999999999999", "21276595744680851", "1937984496124031", "6896551724137931", "499999999999999997", "333333333333333331", "576036866359447", "43478260869565217", "11111111111111111", "999999999999999989", "22727272727272727", "333333333333333329", "38461538461538461", "1680672268907563", "20833333333333333", "999999999999999983", "499999999999999991", "111111111111111109", "2631578947368421", "999999999999999979", "166666666666666663", "90909090909090907", "124999999999999997", "13333333333333333", "499999999999999987", "76923076923076921", "9259259259259259", "142857142857142853", "99999999999999997", "333333333333333323", "58823529411764704", "999999999999999967", "15151515151515151", "199999999999999993", "35714285714285713", "111111111111111107", "499999999999999981", "999999999999999961", "8333333333333333", "999999999999999959", "499999999999999979", "47619047619047617", "249999999999999989", "199999999999999991", "55555555555555553", "999999999999999953", "62499999999999997", "333333333333333317", "71428571428571425"};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> A = {"13247322", "2398574", "1239871239876", "128497128478", "1239817259872", "12987125874", "12591725986", "1249817240898", "471298471872", "147908714084", "1982751032758", "19827512850", "198471204974", "1298471987422", "1890749871444", "1829471297488", "32974234900", "90", "1249080", "129048129042", "12444", "324444", "2234", "2222", "3266346", "3262368", "23523600", "2345233332", "345255500"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2207887", "1199287", "103322603323", "3381503381", "38744289371", "6493562937", "899408999", "69434291161", "56940736", "36977178521", "991375516379", "3074033", "14176514641", "649235993711", "22508927041", "114341956093", "329742349", "1", "1487", "21508021507", "61", "27037", "1117", "1", "32023", "33983", "19603", "195436111", "86313875"};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> A = {"3637", "260", "26122993443584", "47715564111559878", "2", "871126696052836", "3492829317", "83024857214176826"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3637", "5", "26122993443584", "7952594018593313", "1", "217781674013209", "3492829317", "41512428607088413"};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> A = {"810000095400002809", "900000053", "900000053", "900000011", "900000041", "810000046800000451"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"810000095400002809", "1", "1", "1", "1", "810000046800000451"};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> A = {"87535629127", "836062618792023", "29228973612", "1194784503610632", "515547656937452", "3744307868", "431492068926649", "2487172722", "806159490917", "3159776736563948", "3939088509638", "31159848103", "94447631759621", "257418597538831896", "83386048889", "3643030925", "75946922477", "5812893680", "90511085064625", "228472406299081", "9103403919693380", "36400462675698728", "49602761321", "99149107587048042", "910422205529028", "304091962544993", "750294351743146942", "34128892888683833", "90476890687", "233373265265", "796041048708", "94793928301789154", "35749945935708199", "825349020196212", "1311905677406", "34858260664", "38960701013772", "75202909945", "637886046760", "95978533837", "5787419098", "38437138097993243", "72202175174171", "2704085166", "49648081022975646", "9974917060853", "3154155498385", "32703463633443972", "992959999992921131", "992959999994921131"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"87535629127", "1766853311", "2435747801", "4525698877313", "1448167575667", "7866193", "431492068926649", "414528787", "73287226447", "789944184140987", "1969544254819", "31159848103", "13492518822803", "1399014117058869", "583119223", "145721237", "75946922477", "105688976", "90511085064625", "7370077622551", "455170195984669", "4550057834462341", "935901157", "16524851264508007", "75868517127419", "2286405733421", "375147175871573471", "726146657206039", "90476890687", "6667807579", "2456916817", "47396964150894577", "35749945935708199", "22926361672117", "6762400399", "44920439", "120249077203", "884740117", "15947151169", "95978533837", "2893709549", "5491019728284749", "10314596453453", "450680861", "2758226723498647", "9974917060853", "630831099677", "2725288636120331", "992959999992921131", "992959999994921131"};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> A = {"68201005674381127", "41854842717707521", "43971975412202141", "36762494805437887", "55261629607822739", "52099833391620557", "51361097510461831", "36818832243261703", "38255577852076549", "55092733473533627", "49079704066809161", "55362690590737847", "57699101845270583", "49363367462591239", "48939241680866783", "43482841404125491", "54860422695342773", "65288571858804809", "25356098542333187", "35339089694787173", "35090109309863077", "42707221608983021", "41040911568516991", "61899469293726949", "34652463120458101", "44046076319978627", "55557474460583671", "45584199268118099", "34801118175315053", "38933452082629099", "67078463068112963", "34980629013093889", "32517428950708033", "62580610412029033", "59243856231603817", "30013713648251981", "50374782794530639", "57418304267017513", "62818846424066251", "17710959326019527", "54976992021278423", "39937064671709563", "8", "32869013618066354", "70433905891750636", "37365736998141527", "68386375977216841"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"68201005674381127", "41854842717707521", "43971975412202141", "36762494805437887", "55261629607822739", "52099833391620557", "51361097510461831", "36818832243261703", "38255577852076549", "55092733473533627", "49079704066809161", "55362690590737847", "57699101845270583", "49363367462591239", "48939241680866783", "43482841404125491", "54860422695342773", "65288571858804809", "25356098542333187", "35339089694787173", "35090109309863077", "42707221608983021", "41040911568516991", "61899469293726949", "34652463120458101", "44046076319978627", "55557474460583671", "45584199268118099", "34801118175315053", "38933452082629099", "67078463068112963", "34980629013093889", "32517428950708033", "62580610412029033", "59243856231603817", "30013713648251981", "50374782794530639", "57418304267017513", "62818846424066251", "17710959326019527", "54976992021278423", "39937064671709563", "8", "16434506809033177", "17608476472937659", "37365736998141527", "68386375977216841"};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> A = {"999999866000004473", "999999830000006741", "999999822000007597", "999999820000007371", "999999812000008307", "999999776000012519", "999999734000012789", "999999726000014413", "999999690000021721", "999999680000023751", "999999698000015057", "999999690000016969", "999999654000025573", "999999644000027963", "999999558000048517", "999999694000015309", "999999686000017253", "999999650000026001", "999999640000028431", "999999554000049329", "999999518000058077", "999999688000015687", "999999680000017679", "999999644000026643", "999999634000029133", "999999548000050547", "999999512000059511", "999999508000060507", "999999676000016443", "999999668000018531", "999999632000027927", "999999622000030537", "999999536000052983", "999999500000062379", "999999496000063423", "999999490000064989", "999999670000016821", "999999662000018957", "999999626000028569", "999999616000031239", "999999530000054201", "999999494000063813", "999999490000064881", "999999484000066483", "999999472000069687", "999999614000020349", "999999606000022933", "999999570000034561", "999999560000037791", "999999474000065569"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "999999761", "999999757", "999999751", "999999472000069687", "999999937", "999999929", "999999893", "999999883", "999999474000065569"};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> A = {"124999999249999999", "124999999249999999", "124999999249999999", "124999999249999999", "124999999249999999", "124999999249999999", "124999999249999999", "124999999249999999"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "1", "1", "1", "1", "1", "124999999249999999"};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> A = {"243", "27"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"243", "1"};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> A = {"36", "12"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9", "4"};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> A = {"1500", "1575"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"500", "63"};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> A = {"397526982137181437", "930979033072323766", "514292658281382913", "375834853819893938"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"370248451", "1073807359", "514292658281382913", "375834853819893938"};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> A = {"72", "108"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"8", "27"};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> A = {"4", "8", "4"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "8", "1"};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> A = {"999999866000004473", "999999937"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"999999929", "999999937"};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> A = {"999999836000003243", "999999804000003979", "999999874000003069", "999999936000000583", "999999890000002769", "999999896000002343", "999999814000007749", "999999950000000561", "999999944000000759", "999999746000014973", "999999838000004797", "999999810000004669", "999999776000010143", "999999896000001023", "999999836000003243", "999999818000003657", "999999938000000957", "999999860000003531", "999999836000006099", "999999914000001449", "999999716000019803", "999999852000001507", "999999836000003243", "999999716000019803", "999999798000004117", "999999932000001131", "999999876000003763", "999999850000003861", "999999820000007011", "999999710000020241", "999999944000000759", "999999788000008427", "999999724000018603", "999999820000007371", "999999848000003567", "999999836000006099", "999999784000009063", "999999890000001581", "999999698000022017", "999999844000004059", "999999770000013161", "999999882000001177", "999999830000004521", "999999868000003627", "999999854000004929", "999999920000001311", "999999910000001881", "999999668000027507", "999999838000004797", "999999868000003627"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "999999859", "999999839", "1", "1", "999999929", "1", "1", "1", "1", "1", "1", "999999820000007371", "999999971", "1", "1", "999999983", "999999821", "1", "1", "999999882000001177", "999999863", "1", "999999947", "999999977", "999999910000001881", "999999668000027507", "999999877", "999999868000003627"};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> A = {"999945001002993931", "999941001154992503", "999999874000003969", "99999999999999997", "999999999999999989"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"999966000289", "999958000441", "999999874000003969", "99999999999999997", "999999999999999989"};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> A = {"100663296000000001", "100663296000000001"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "100663296000000001"};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> A = {"775656", "167883835", "301448250", "337011961", "659649795", "160601076", "391789496", "4901304", "35781228", "26249836", "473085160", "601062", "3628219", "326087574", "392329224", "118368696", "170454108", "37237310", "675068400", "168571220", "683499648", "950151882", "82449210", "116775104", "194076726", "706274460", "1069974554", "257688680", "84989208", "21445870", "37394412", "40898013", "8700923", "80853663", "436332985", "653403282", "106946430", "374119221", "466747714", "86574306", "247809120", "480616175", "222101637", "36641559", "366536988", "549695800", "278876148", "119282982", "33575877", "379308060"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"729", "26501", "4625", "138631", "26963", "1487047", "48973687", "1", "141989", "5437", "514223", "1301", "17873", "281", "259477", "4932029", "1291319", "19913", "31", "8428561", "761984", "5460643", "2748307", "16147", "1902713", "2129", "48635207", "149819", "3541217", "112873", "12317", "55193", "112999", "2450111", "1229107", "15557221", "3564881", "24371", "5427299", "2061293", "39713", "1478819", "74033879", "12213853", "1131287", "2748479", "23239679", "12851", "414517", "2107267"};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> A = {"888230356151711602", "444115178075855801", "444115178075855801", "444115178075855801", "444115178075855801", "888230356151711602", "444115178075855801", "444115178075855801", "444115178075855801", "444115178075855801", "888230356151711602", "444115178075855801", "444115178075855801", "444115178075855801", "444115178075855801", "888230356151711602", "444115178075855801", "444115178075855801", "444115178075855801", "444115178075855801", "888230356151711602", "444115178075855801", "444115178075855801", "444115178075855801", "444115178075855801", "888230356151711602", "444115178075855801", "444115178075855801", "444115178075855801", "444115178075855801", "888230356151711602", "444115178075855801", "444115178075855801", "444115178075855801", "444115178075855801", "888230356151711602", "444115178075855801", "444115178075855801", "444115178075855801", "444115178075855801", "888230356151711602", "444115178075855801", "444115178075855801", "444115178075855801", "444115178075855801", "888230356151711602", "444115178075855801", "444115178075855801", "444115178075855801", "444115178075855801"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "2", "1", "1", "1", "444115178075855801"};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> A = {"981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051", "981168724994134051"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "981168724994134051"};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> A = {"810000057600000583", "810000084600002173"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"900000011", "810000084600002173"};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> A = {"999999866000004473", "999994774000325269", "999994766000366573"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "999999937", "999994766000366573"};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> A = {"1407673", "13309117", "137937281", "1438671211", "14698154927", "135677280727", "1389864140741", "13472900573921", "130062255272767", "908800000000000001"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1407673", "13309117", "137937281", "1438671211", "14698154927", "135677280727", "1389864140741", "13472900573921", "130062255272767", "908800000000000001"};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> A = {"129232241590192741", "506409033400173921", "502637194886146415", "169456543241746273", "162502536448620543", "848337333029214044", "207880675439764367", "768061559862458411", "520727902140101936", "110998481968593508", "615421077195154250", "984878861045797178", "105235994722267513", "84744071563587585", "619038051171067788", "754173959243012900", "504329228049778596", "199438725138744367", "93034199550148164", "784307787573197038", "5422492262727681", "438371252933201706", "690068668159331048", "286948685237148689", "307512078697249749", "845614336311821158", "639606516100883009", "198465259065891201", "894133559952536274", "528525774052072669", "654763945465663969", "670883660119418379", "600372334303280799", "972721630035655449", "718481075802895105", "41261264325929818", "428802260127014090", "804868778120372698", "435040748873051579", "221262738186846479", "720740650851132224", "391685026964356591", "48860712839775810", "510419371596682198", "624085574145563800", "212489757060214497", "46857146507064655", "713764536516299686", "856351489679089745", "186429760742995108"};
    Transformation* pObj = new Transformation();
    clock_t start = clock();
    vector<string> result = pObj->transform(A);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"129103138451741", "7339261353625709", "100527438977229283", "169456543241746273", "54167512149540181", "212084333257303511", "207880675439764367", "1317429776779517", "4649356269108053", "27749620492148377", "13378719069459875", "492439430522898589", "8095076517097501", "5649604770905839", "3968192635711973", "7541739592430129", "4669715074534987", "199438725138744367", "3729124561093", "392153893786598519", "29631105260807", "73061875488866951", "12322654788559483", "286948685237148689", "199812916632391", "6931265051736239", "91372359442983287", "48042909480971", "63866682853752591", "528525774052072669", "50366457343512613", "223627886706472793", "200124111434426933", "1697594467776013", "143696215160579021", "20630632162964909", "42880226012701409", "402434389060186349", "435040748873051579", "221262738186846479", "720740650851132224", "391685026964356591", "1628690427992527", "2144619208389421", "3120427870727819", "70829919020071499", "9371429301412931", "32443842568922713", "171270297935817949", "46607440185748777"};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22629574&rd=11125&pm=8291
********************************************************************************
#include <string> 
#include <vector> 
 
using namespace std; 
 
class Transformation 
{ 
  long long gcd(long long a, long long b) 
  { 
    return b ? gcd(b, a%b) : a; 
  } 
  long long a[64]; 
public: 
  vector <string> transform(vector <string> v) 
  { 
    int n = v.size(); 
    int i, j; 
    for (i=0; i<n; i++) 
      sscanf(v[i].c_str(), "%lld", &a[i]); 
       
    for (i=n-1; i>=0; i--) 
      for (j=0; j<i; j++) 
      { 
        long long d = gcd(a[i], a[j]); 
        long long c = d; 
        for (;;) 
        { 
          long long x = gcd(d, a[j]/d); 
          if (x == 1) 
            break; 
          d /= x; 
        } 
        a[j] /= d; 
        a[i] /= c/d; 
      } 
     
    char s[50]; 
    vector <string> res; 
    for (i=0; i<n; i++) 
    { 
      sprintf(s, "%lld", a[i]); 
      res.push_back(s); 
    } 
    return res; 
  } 
};

********************************************************************************
*******************************************************************************/