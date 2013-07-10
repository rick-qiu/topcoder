/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12509
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

class TheExperiment {
public:
    int countPlacements(vector<string> intensity, int M, int L, int A, int B);
};

int TheExperiment::countPlacements(vector<string> intensity, int M, int L, int A, int B) {
    int ret;
    return ret;
}


int test0() {
    vector<string> intensity = {"341156"};
    int M = 3;
    int L = 3;
    int A = 6;
    int B = 10;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> intensity = {"999112999"};
    int M = 2;
    int L = 4;
    int A = 21;
    int B = 30;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
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
    vector<string> intensity = {"111"};
    int M = 2;
    int L = 2;
    int A = 2;
    int B = 3;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
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
    vector<string> intensity = {"59059", "110", "1132230231"};
    int M = 1;
    int L = 5;
    int A = 10;
    int B = 20;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> intensity = {"111111111111111111111111", "111111111111111111111111111", "11111111111111111111111"};
    int M = 12;
    int L = 8;
    int A = 4;
    int B = 2700;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 418629948;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> intensity = {"1420211609787", "047904", "9", "5"};
    int M = 4;
    int L = 3;
    int A = 3;
    int B = 13;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 686;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> intensity = {"67878049026", "8129", "899553805"};
    int M = 3;
    int L = 3;
    int A = 12;
    int B = 20;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> intensity = {"0965692189599", "48", "9", "3"};
    int M = 3;
    int L = 3;
    int A = 40;
    int B = 46;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> intensity = {"2469", "8254870617490", "197"};
    int M = 3;
    int L = 3;
    int A = 26;
    int B = 36;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> intensity = {"30052012", "36789432675670"};
    int M = 5;
    int L = 2;
    int A = 5;
    int B = 6;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> intensity = {"5", "373533547604", "261709", "04"};
    int M = 5;
    int L = 3;
    int A = 2;
    int B = 10;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 230;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> intensity = {"127683309976", "174", "40"};
    int M = 3;
    int L = 3;
    int A = 23;
    int B = 26;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> intensity = {"4006984650", "8908503", "191"};
    int M = 5;
    int L = 3;
    int A = 1;
    int B = 8;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> intensity = {"275261381980928309422"};
    int M = 4;
    int L = 3;
    int A = 13;
    int B = 20;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> intensity = {"88949553710676480"};
    int M = 5;
    int L = 2;
    int A = 8;
    int B = 12;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> intensity = {"1844529665480001764462079070632811751", "981385293555390168279058894765902851122932708463", "9671791377712562302934673992658170", "00345477649908818990768899692808276703695688652019", "9505915771757753389976099922344500389448849281374", "90730251143294396261954877023976468068327274408228"};
    int M = 30;
    int L = 3;
    int A = 10;
    int B = 12;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 243767594;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> intensity = {"8346233266657155183270618483817008260501703", "5289470541187559589085064918139546965658426967733", "2463967434975435174543188325310467547294149386", "247028390588710368912029476905730679982953248", "06355702584589339534685282976756811921746160763652", "99761980913302459717720204707586380150279743699321"};
    int M = 45;
    int L = 4;
    int A = 20;
    int B = 57;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 92906453;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> intensity = {"9893670991470349676556040390488518121488146530", "85162072905154460466073181488080192288857599079596", "0691340871532530075037271368343433838797335372066", "05843272220625630742876655514075561422315993385931", "34652913789287581450907038776558809860736814475419", "111032205392600771435462707528243817343579768"};
    int M = 41;
    int L = 2;
    int A = 10;
    int B = 47;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 855060786;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> intensity = {"3458091612061975825590732687838514975650074770", "209490955051208790897742050004560529332232605000", "36366112091150249524351488810733691000760360550183", "74656313501432120026321609848664648178891836083619", "8546519623479745380923803466333889461109971933551", "36449375498810145592887547757883463521976938270158"};
    int M = 41;
    int L = 6;
    int A = 23;
    int B = 40;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 78010236;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> intensity = {"02359574287205107336582438780327899061753770", "13227786614241738528236100289244830299659305931", "93001087562166175375079000720871141437555637013588", "41505145970455809623588978934575775584466211753246", "83145273395756220773939905600499659091228601529915", "85785801472518563552216500779417209801161824075300"};
    int M = 20;
    int L = 4;
    int A = 21;
    int B = 101;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 507495157;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> intensity = {"289786925110426851555", "35237424834623608250882595380515231032462434620", "7764940511380650173998060467353906144167242754176", "6568291015394651206486202937848795605127263514977", "40636036185052552450254370497088762963700818599503", "90047666794106598322416137647374986793662750450209"};
    int M = 23;
    int L = 10;
    int A = 34;
    int B = 49;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 216609348;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> intensity = {"62459965057077622354729367106166560851948042004044", "4376309863234174761284003511848677137668125887632", "21690871286390595237092787076645542850954799354110", "65953561701486187731109719628471073706626553022813", "67205056028190169309634407441218927857776640680661", "20824313828729457356402766687019118940940548562733"};
    int M = 46;
    int L = 6;
    int A = 1;
    int B = 24;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 670102669;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> intensity = {"7954272676338942850344709407040983126308", "9384233694011843214672989235300296102482391373441", "82026413720852821101954780565007613069313102007207", "19546196796410563359702575696515655224915258707819", "67803399474799353422414936976958776137899422527129", "59056599536902587322741504348280580239969180890818"};
    int M = 41;
    int L = 9;
    int A = 26;
    int B = 47;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 99060230;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> intensity = {"787236023241570089822771938", "929644545771235639798323472554005105998840730", "6605227578706584557961146297772255651974590439292", "54719405489018810322420964340209670774106812122944", "78211465548952119099251526778306692258405077039800", "15792166207852599366711678743865782876850890213396"};
    int M = 50;
    int L = 2;
    int A = 14;
    int B = 53;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> intensity = {"493982823079504959341038704345819296610171874", "97788180334352626615852490440812729807410224288", "36662124851134508104150029281172870364333417095854", "619379994173814682200362335239368011176596255776", "0910174708659871178484068573302146683732111848775", "0711675823469062393999999191308917137955498977283"};
    int M = 35;
    int L = 3;
    int A = 18;
    int B = 40;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 777817650;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> intensity = {"104651245053434419786154925292028401481262966914", "27993528864924973096387440822273631007401507433396", "94416369332693266401964179506487751893061105090441", "13820709899248539020634860977848540067023137558490", "61242915574027599345381710369842332344033374825163", "13384305007040751415904266349677940125785219634786"};
    int M = 43;
    int L = 8;
    int A = 16;
    int B = 43;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 640184803;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> intensity = {"3327190451217021410778608705827876358617", "7502610786442711660428047467929377330344", "3245176705722857114666172592543858485546304726", "084748707085709086742521195731095155627836923274", "077872888070029065461583805184917300", "4176529819218832565985297157696178354375053591868"};
    int M = 26;
    int L = 7;
    int A = 37;
    int B = 74;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> intensity = {"04009497889551622058211663266025740", "98096665811231527401224394705936587863929473980", "44900813222049318525436493251055817829007531593431", "33593274211176556873838489760755612940053952894566", "25098850571065127410857054028580531704977778097699", "55079015912672402365638159141310477874010749523593"};
    int M = 44;
    int L = 9;
    int A = 3;
    int B = 26;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 592678821;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> intensity = {"4665661051523226781018512891360563487954632", "179579461177176489490643238349494357425405174974", "56058241256235439234422246498121637181922250923177", "16162354447751259391103849068943810579044349268689", "05816028481122663889109639995438319426018465216004", "45282790883826050948269025781771488527476379094139"};
    int M = 44;
    int L = 10;
    int A = 6;
    int B = 36;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 242748614;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> intensity = {"33060069826947006952544509577977348", "57075118085183616112672797634260014333010792", "932073273533013415614858855002077475", "16660414056070803642998242799544554929884164", "4103938016428374928175673915696851131733258713078", "39981001861804133209696897873885929359303755006"};
    int M = 24;
    int L = 10;
    int A = 10;
    int B = 17;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 6214160;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> intensity = {"69706219687196119346901601883802245502808294", "9991380426929543363282377635324911918100384288559", "72870441944629747690692749570651257490879515541050", "41187102489121506513638874283061665915280083563957", "58586738757533777682430131354278537610543109194679", "19198631283420944705336233701930894301062737750652"};
    int M = 38;
    int L = 4;
    int A = 20;
    int B = 61;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 16146554;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> intensity = {"90078649386977004446714458389072741197053", "948022459147262037383907255201", "906737390750556399209553677849661", "37987157108263658842485937022155766145225075605432", "93438828632679715992959126859730663421261680620800", "05962050583197937396722560435869530016150620179698"};
    int M = 28;
    int L = 8;
    int A = 2;
    int B = 49;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 819428172;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> intensity = {"7137865775160827057780660944", "2755124462936688270311931241582483370650196526219", "7240232723140868876885391088529060594783178970231", "03728649985832921668688822801980307616014487430281", "99837259762635193110439722513339227684135207868403", "2561451412054238505994663266715580717085749025602"};
    int M = 48;
    int L = 4;
    int A = 9;
    int B = 14;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 857921425;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> intensity = {"04871018784420426687197468499235569588622465507083", "73525538013141663044719255309549515739906776260236", "180385851766510787450099993808580420311453999354", "56884911993377599885841780644326590729671722322398", "57268042918512042231504263826819397442366176249743", "05443054465660598450054883406022983810490859491809"};
    int M = 42;
    int L = 4;
    int A = 32;
    int B = 67;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> intensity = {"17363144336781447880555394168", "11940221518783539942464484354791071552060470", "234040022069282546315378191507598678118204", "0967525348062638747427041779113541098604812705900", "74490520551741610269394126108533135250269025850688", "01475322244567636136435050299104312094761184791410"};
    int M = 43;
    int L = 4;
    int A = 15;
    int B = 56;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 856953843;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> intensity = {"13719659832117585872193183724149644028805197177986", "75474272473003613234380413403859345534296296873104", "07727943200833094079181485571918166579180030614819", "62242351490649939939603129126688137416373487331514", "34774814963433642624655718243344645129753523651742", "79368345398986391339688521541983634351848564000246"};
    int M = 95;
    int L = 50;
    int A = 6;
    int B = 932;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 499384138;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> intensity = {"31356324158495449652972794363302854648123810832886", "58666084873791428334978547127029926128627805103729", "03210510819041970310860646544349952791485269863080", "72314569510469792033107551232152890475681235448290", "13718818839594978756073960431066347215879355005841", "66403856000096820750204829049747983631901516776714"};
    int M = 80;
    int L = 74;
    int A = 10;
    int B = 1130;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 483934094;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> intensity = {"86227092809580462162944946165361050176753894109756", "99893663018749893444019412659507645978349903921391", "50093866255792829450979470254238640969284610905932", "96068349618133664518959577736954864315473331075308", "10521446040420008695076239063069979845501522813173", "10994512154886121236088336860792333191992217396173"};
    int M = 60;
    int L = 67;
    int A = 4;
    int B = 556;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 91586525;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> intensity = {"91120741594441111124207962383942903742128105488224", "70625086496656839401009570158255660712964088084762", "46424646806334676601678305822847456129939643113154", "32141882928790137194039852288562033777135320835826", "27776876795595168213014150647367188755184717513352", "39080845545108759398949294678653192950419252261929"};
    int M = 53;
    int L = 89;
    int A = 7;
    int B = 456;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 477859400;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> intensity = {"23252574367535500698252103014891386666711401963187", "28908415879026314056845349122183903012776958805091", "93279672652870410268654992471108801748147052701859", "65450989581573211981370519740148205895524652064756", "52869895812833143159816693545240908676270153254534", "73168229128447858774993170563516074708154110424206"};
    int M = 76;
    int L = 72;
    int A = 12;
    int B = 857;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> intensity = {"71809186581667894588830055169282849292096355338874", "76629393715370059166572908362333904935072592203178", "96526246732604431453932360739523571006618156795430", "87715655933023353450361919993058541792367774538106", "70625293716318395222825712622875918325843261810361", "03967818611526680946842437684139032309647707920077"};
    int M = 300;
    int L = 1;
    int A = 2;
    int B = 9;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> intensity = {"64126838061898845416715197104889581612795312552319", "35296132263021313547780844388507563812172863026112", "95331395334559744834633079867899050784342958605891", "90513262005026335717694833092794385729750214418408", "10201041626841302622601524013754840124453063573689", "80635693545967344296297927216394760485217311788127"};
    int M = 250;
    int L = 2;
    int A = 2;
    int B = 18;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> intensity = {"29430845981374678572280318085854289633020799655441", "24161703873084976985380071076834463233208377822121", "30318456453792531633528587173374766866815637922434", "13538934158423173602689945286254009089285611108503", "67430176412522200948273477481395968110463554092363", "45390738757328739267264533706910751044185000750843"};
    int M = 300;
    int L = 300;
    int A = 1;
    int B = 486;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> intensity = {"15948423922109896373414839556465342800803296681385", "40169547424831964721486177794035689885652455415555", "81802534920823087346042609280996068755125099208140", "71344477146897029655571046563114695121027344907838", "40137841220975744367875150905607235087782493297245", "81742971469420706303675999082694619607733976100187"};
    int M = 200;
    int L = 70;
    int A = 1;
    int B = 324;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 497631373;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> intensity = {"81135416445804416255291983353078955901192859986725", "76786142639147543974083671756616435388674434192838", "65042798399054182833092661284478456060142431242236", "18517715584332295793813149149556298707808714419737", "37048511526210730910561695362622773495610418575107", "81324769583379046469895445709765335278531343513032"};
    int M = 200;
    int L = 70;
    int A = 1;
    int B = 333;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 244462546;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> intensity = {"25968232117382674970698610025828146031634142545587", "22870119928897345432044220857800255920962738998001", "05493441938633463551651867118727847988043731388337", "59744500780636017315926154246942165605518445520913", "15323354490451621812858774611220786576886141001613", "78070237327354311160398567844421812263883764879537"};
    int M = 113;
    int L = 70;
    int A = 2;
    int B = 330;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 806468854;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> intensity = {"34907580420540385468308289297866021800525646562933", "96130455085200247701168143838337240183303510097102", "72694504340997888129932628496172145507967232980702", "27875254310632138776030467885107530852353990576752", "63269674344711453849819300702341797845518672696201", "59463995963627296472603823009695183800872797481305"};
    int M = 131;
    int L = 150;
    int A = 1;
    int B = 632;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 355831317;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> intensity = {"55029578209710853556443104469204161716860521659347", "56651878911605710057624731682479560714375539302418", "96549427332754906141287455419915653935111827597962", "77135022603210601543062781494580414820263422951248", "99540980318177410470702797617772402613280247597003", "43008932694394363221348757961157384907014162140883"};
    int M = 100;
    int L = 121;
    int A = 2;
    int B = 784;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 966819059;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> intensity = {"35453922934238546850002836934611694608738212689250", "48128300860273271989212764064628693707270033553708", "41345502865998314132901322536295711124768864697440", "43864030076117436596258534356158221352366957422345", "95443092864335015718222814091087848205081925661309", "66548896828666917089761984694885987634449205845099"};
    int M = 100;
    int L = 150;
    int A = 3;
    int B = 2400;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 423325558;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> intensity = {"99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999"};
    int M = 100;
    int L = 100;
    int A = 1;
    int B = 1000;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 762083541;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> intensity = {"99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999"};
    int M = 300;
    int L = 1;
    int A = 1;
    int B = 1000;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> intensity = {"99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999"};
    int M = 150;
    int L = 1;
    int A = 1;
    int B = 1000;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 320220518;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> intensity = {"111111111111111111111111", "111111111111111111111111111", "11111111111111111111111"};
    int M = 12;
    int L = 8;
    int A = 4;
    int B = 2700;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 418629948;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> intensity = {"53241845388809200299074898230783156026983794239870", "75911526673031313597574731938292733112228280844447", "40127349421676936215905664181723894461115195850962", "05920633799149806375543676720177090844211784635581", "24233937427205946897408563018884759503902116717251", "73498439492545800140134957553134994961929222585935"};
    int M = 150;
    int L = 51;
    int A = 1;
    int B = 2000;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 259770891;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> intensity = {"62262316136144353216216641666421455165141254222613", "31412424254144422153244214564435163265411142462351", "21334243332163553554154255444414162426465635346523", "55246443243621265253134421265166151644354436626455", "52515356326562334151512211456542415243333644534344", "53321343656521233655244443353111131236555253325656"};
    int M = 100;
    int L = 100;
    int A = 1;
    int B = 2700;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 762083541;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> intensity = {"111111111111111111111111111111", "111111111111111111111111111111", "111111111111111111111111111111", "111111111111111111111111111111", "111111111111111111111111111111"};
    int M = 300;
    int L = 30;
    int A = 4;
    int B = 2700;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
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
    vector<string> intensity = {"96857474854185747485285858271", "96857474854185747485285858271524163", "96857474854185274174857474852858582715241636355", "968572416400000000000578156456", "9685747485418574748528585827155247171741", "41852718527185271718271"};
    int M = 17;
    int L = 13;
    int A = 11;
    int B = 41;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 341649737;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> intensity = {"11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111"};
    int M = 300;
    int L = 10;
    int A = 1;
    int B = 2700;
    TheExperiment* pObj = new TheExperiment();
    clock_t start = clock();
    int result = pObj->countPlacements(intensity, M, L, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22726964&rd=15496&pm=12509
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
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
 
using namespace std;
 
typedef long long Int;
 
const Int MOD = 1000000009LL;
 
class TheExperiment {
  public:
    Int dp[310][310][3];
 
    int countPlacements(vector <string> intensity, int M, int L, int A, int B) {
        int N = 0;
        vector<int> drops;
        for (int i = 0; i < (int)intensity.size(); ++i) {
            N += intensity[i].size();
            for (int j = 0; j < (int)intensity[i].size(); ++j) {
                drops.push_back(intensity[i][j] - '0');
            }
        }
 
        memset(dp, 0, sizeof(dp));
        dp[0][0][0] = 1;
 
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                for (int p = 0; p < 3; ++p) {
                    if (dp[i][j][p] > 0) {
                        // cerr << i << ' ' << j << ' ' << p << ' ' << dp[i][j][p] << endl;
                        int ds = 0;
                        for (int k = i; k < N && k-i+1 <= L; ++k) {
                            ds += drops[k];
                            if (ds < A) {
                                continue;
                            }
                            if (ds > B) {
                                break;
                            }
 
                            if (k - i + 1 == L) {
                                (dp[k + 1][j + 1][2] += dp[i][j][p]) %= MOD;
                            } else {
                                (dp[k + 1][j + 1][max(p, 1)] += dp[i][j][p]) %= MOD;
                            }
                        }
                        if (p != 1) {
                            (dp[i + 1][j][0] += dp[i][j][p]) %= MOD;
                        }
                    }
                }
            }
        }
 
        Int sol = 0;
        for (int i = 0; i <= N; ++i) {
            sol += dp[i][M][2];
            sol %= MOD;
        }
 
        return sol;
    }
    
    
 
};
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/