/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12577
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

class WallGameDiv1 {
public:
    int play(vector<string> costs);
};

int WallGameDiv1::play(vector<string> costs) {
    int ret;
    return ret;
}


int test0() {
    vector<string> costs = {"12", "34"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> costs = {"99999", "99999", "99999"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> costs = {"01", "02"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> costs = {"101", "030"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> costs = {"1011", "4651"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> costs = {"1100010", "3330031", "0233310", "3100031", "2000331", "3003123", "0330010", "0111103", "0303011", "0130311"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> costs = {"1201011", "1732354", "7547173", "5405948", "8138856", "7044072", "1246832", "5432155"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 208;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> costs = {"11111", "90005"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> costs = {"9", "4"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> costs = {"45", "35"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> costs = {"419", "333", "569"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> costs = {"3233", "1070", "6226", "1154"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> costs = {"43825", "08082", "89438", "05672", "57292"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> costs = {"520060", "151730", "508307", "373337", "242812", "452757"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> costs = {"0941762", "2928264", "9273911", "6187428", "6563644", "9493205", "4753445"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 212;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> costs = {"76681887", "31876140", "65652416", "74758681", "92621787", "91697680", "55905644", "72312966"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 309;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> costs = {"477826664", "103450890", "040846500", "424630619", "375981596", "053269600", "161142966", "056823004", "677236119"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 325;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> costs = {"1464415260", "5516022080", "4709528860", "1113395442", "2757477811", "6267652981", "7842355808", "0808136325", "2241183021", "4166045213"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 396;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> costs = {"93856861204", "04333678391", "24984601580", "90736734899", "72075987574", "18845559990", "57899004341", "90407604220", "89009927180", "87491740868", "77629499879"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 589;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> costs = {"095604616295", "460286406388", "960726151393", "984873112908", "920129807626", "394780894509", "033092024863", "106593007312", "873305186029", "630224401563", "299438508981", "936669936838"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 617;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> costs = {"9869246006391", "5902266518416", "1974195213761", "8992870079071", "6601295027769", "3936874562599", "0102049907856", "8763673370038", "0410569234796", "7804657307125", "4164128201116", "4247066857524", "7039443115812"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 748;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> costs = {"41928093225715", "30482197711140", "96442917333181", "43300477543451", "26290503575365", "95881084103661", "13369837550817", "11149812789887", "39933394245527", "59874014229772", "93570022315770", "06929294421158", "40172073466995", "37998400057889"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 868;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> costs = {"615695282582854", "382651544398821", "528462011295591", "052775615523292", "534888633308889", "821726962841624", "816521760271596", "948937762607896", "823927992301691", "045955665340608", "392955981132422", "249159991465720", "080088034682380", "601317103727783", "595599077771538"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 1048;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> costs = {"1130777682463100", "6353403840254844", "1301428277311016", "5463826701292646", "0248686075887361", "3966052983591545", "6057199595075232", "9798638467445745", "6324519996687417", "2306464928217919", "0628520003743034", "2138913135888601", "1919601683495803", "5434285738447668", "8580801003944613", "3154716204505418"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 1168;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> costs = {"17635587210210910", "07894881193624676", "98128625118511740", "22875667047662789", "97071498267635714", "29153821279189685", "37857624516540598", "39546127216131989", "94178441905743505", "74602095159990318", "72400375100419028", "71034024281395502", "46306828772696647", "16591936551729441", "66406679397357473", "18030794196123342", "94240066393438240"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 1311;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> costs = {"747383605201527893", "613381472772308777", "979317000775648054", "148266275180571488", "048310003669981970", "262096873209265750", "243263037733018613", "911059857001575115", "328292862856856717", "641081863499431362", "552382671806849235", "268900128816835616", "594260893910454200", "739274994806416169", "595756960981430576", "912023974289151109", "885963875651235823", "786431156486680754"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 1491;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> costs = {"9966772148522935945", "5934170621432114989", "2869515569046540040", "4992944004507465344", "9121392844132261729", "1890509756129308729", "9057951533032746224", "1166289070553290645", "3382095793702193813", "9946782918552708228", "5526146190704355723", "9098423576986566438", "1490598848802608795", "2310865164000010848", "6064874262071587713", "1777383413411555485", "2883778653854244860", "0980333148678733935", "7783315815703429320"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 1659;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> costs = {"36280330176475890201", "76442897542843199916", "05207972023650369473", "85046501163384167363", "92002911231410828153", "28192349806884816546", "79923207962058914626", "63304563193595052989", "91124347475233831952", "83975277530862094950", "89119677477724072410", "81741731109115997027", "97057729533174420843", "47094155580909420085", "28723177486700727866", "01429828129788062411", "01772894728099620926", "77077061398809520170", "84008829681076092865", "56562821171075038345"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 1839;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> costs = {"013651846633273142259", "605036753883808876641", "900567180802924662279", "484527514604173230762", "052065779215037790086", "547604660758959270779", "857463312308041770317", "056535790377660716059", "882457884106760915829", "554027305764136704559", "479894957246824929006", "839562070867390684860", "563381267538771638079", "861461801579698708195", "413265666920168930512", "386129541711244441798", "317845503861598974508", "635159879186062287360", "820222388274965549782", "312217796227247338956", "616470075145746837622"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 2076;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> costs = {"5391032143207504931749", "1506839175673611887002", "4432685147958633223068", "6814699910933508662077", "0278000902814067173073", "4681741364439017107489", "0006227589920722725813", "9261334875990580629287", "4600852209083761137617", "0995834584125902509282", "6369261078803293352899", "9727980879901030420906", "4742717546084976451246", "1825963715866335231151", "6131386220756086860980", "9165204501712173410655", "3892498701163328744000", "0647841328561920427154", "0988769702516710526303", "1107717070660022400822", "3347556627020954703898", "6978137862852398328714"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 2087;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> costs = {"50653851891279700557314", "75585475132324716884372", "83343379229697294018993", "27123099101735400158228", "85104290972804747008805", "98911178431972639085063", "69241308945167281502494", "01763120917792918500668", "35098100491977693505655", "49057449066438077123468", "29813973143829254015471", "94733078176662969756312", "12513272699804056765363", "59123102877073121355698", "16842294469363945743850", "20191060993501010421521", "59939137269443744527688", "09444528745974026379658", "76339753820312353897735", "66618197769539864170042", "86301711394909361909116", "71115130417481160381705", "69375867047214213929988"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 2406;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> costs = {"300782743019713186345446", "294107708094489857524680", "483196904631497962529119", "552859619921025466135448", "786175439536597689612634", "745584452163948431826308", "474107892307301539754069", "677065726074213246192034", "200946882547991022212370", "294398819488629687809764", "795274640271952597906712", "656025666341848537294480", "039293832829658271890992", "889447004107473798928128", "732900590085490415022009", "058671698012013906779483", "300769351203979584103008", "433327392603817178850682", "479130442309368645724916", "128161061244032169492323", "876673854414513562141943", "482436868204913167020326", "823430854517739830935329", "552889692025743248807949"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 2667;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> costs = {"3770378508907311591004098", "9016813394449327796177329", "2294878862839326551957146", "2191489276236809272084203", "9830985918180663704214464", "3417326209529260674099974", "7558387559166544666329647", "4793808255413560006095901", "6347891211814164701081263", "5351937941644533674513271", "4279574246692715924391810", "0890419937629996570878608", "3785979617431400619548032", "6297848052790196677877447", "5727293532382825377939162", "8604354418506521338578409", "6110939557939327690431067", "5836785525351110009719624", "2974562815167180302962041", "1592651754747015084906929", "0628853620388435934714329", "6524983309853639823321291", "1443199912492404058966395", "8701872391506063998907394", "9651835511925468994852203"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 2913;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> costs = {"21480081626678491996557519", "31908959403120931326933136", "92147534115096168453857422", "94012108781386145839713277", "43528091202677380832244229", "46287735667036084067329316", "24063551127612965193532978", "54122931464628874222427272", "77221506308093348921306461", "45703480922794174092629013", "34675395612758437746129774", "25102507989034626687457801", "95845558707650429437194429", "94929819136659471763001142", "90617397525689623027979649", "07079763280514927990929317", "48720164035157418882336557", "86946311410172036362392615", "55687109774145522495345509", "60342312655472264667628476", "66670788481107797207930300", "91411724090219638040796899", "64357069497822949972592783", "45058649637575256372660286", "78845398960495883996124886", "74276829267103433092363903"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 3172;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> costs = {"870671203587119958499377521", "552172444239325992983104387", "740316457915010609172970271", "218516254529499795789787315", "897400570536852248816827457", "361404278106676943382828491", "829218869654550968673859484", "158471321479998398188000041", "736503944613293114135028891", "573992298948537201158196690", "347923311626943706471482148", "477576380764435555835993084", "407224228886119744956584549", "338242806645346809370711750", "920045697249642299409726503", "757692936519595247646244154", "757583772640511314755129485", "332940848629098903474603340", "032980910456246913491578601", "500870861976420046731017253", "149683432120925411744599520", "069637013375020547271420452", "546065799625448145741844543", "285277149114981157080413710", "559834919265758287498796948", "250999755065116766659956829", "865206558994689082598466351"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 3507;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> costs = {"7399289437648387391871364817", "1677571084267771021368007884", "3520041724959151778054041521", "6743932610118622208953955288", "1015977512913569917847489565", "4620064541805512953546434313", "9669158137489321132191721563", "4448784273591975868470644468", "3792260618639882353542206470", "9887689401053062655451955193", "5767516834984391218223523379", "1141086408478085615218303290", "3795524589124300873098121350", "5468584051610976192352570314", "7105448082768278489410224247", "3473946276518650025780540793", "1867103188616197806017847095", "1582123349891390797693512581", "8345673825884210636845057329", "0310384616067182855866998310", "7470635832400635437372401600", "4505298710782685394786577022", "4065670257531023264357598640", "9042988118952888178553421544", "5653615416111098633958568429", "1887890234136820366024960941", "0700341733583253602755764074", "1708454577990090993667818610"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 3594;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> costs = {"06160246725016904081491953705", "95369254707428410146700625477", "19850149116088604568225306413", "09181254856242430479515434932", "72518903499969145641660451123", "28350819476979636737194301851", "96423094577975501762041541015", "16064705748943117179714064594", "87277724034188985530606655222", "13461049214127258344665824518", "96745363257580268695340831075", "97514282759779138946452739343", "83224046282448089359690595141", "41470539142935455738509582984", "41679942449061229047190771732", "95649530501995347979782279176", "05607994764522661010888145951", "45485603993846031444515787518", "52936421538009879952303846156", "55484176698446197729353123957", "65124486359153105281931906565", "84997348483657724550879097823", "03872044524015229455700644229", "12934565574375103907856782931", "67213306764706012274699317755", "72614900162172035142476747017", "54073200270917538109415335637", "91972767873392682386203770811", "55616338081015637246327889088"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 3850;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> costs = {"571311340409869878959803040116", "546053414520100883363932074793", "203773044064518960258303398207", "257924394782022401980093434902", "693608798730786392046642192858", "713350163845690599396756406636", "325101756638289280315041293065", "350523051866007568887347191987", "222041955653092644105530915991", "504265148516798968925797749445", "247309296854499404941946006580", "607476786783864881865150507015", "352645624003013863099556241498", "572034620240714233095201718370", "098238105917342319194538682315", "070142955819122358662963417611", "916184858073002334174234520542", "624504606267568147418024506768", "974098145970466911460051775830", "830103064276943591251911733255", "149069514642034157252096644682", "155615924243718952945262723544", "725114905913101793172015828694", "169115988380346063580221933141", "912299707835454435457621004674", "713601038601047416762741616381", "078733279616823292444961706663", "625771873450394757541378070459", "158410596041474633398104395007", "720613237201711166836039966183"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 3991;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> costs = {"8896439787202413890816418625721", "9208021920903004112896970071213", "0080461725390834770840946005660", "8201274600475907905010053870606", "5067447187584370051567525130099", "3516320459692859403842902619453", "9261819511026497030717852002886", "5210178339194962328390459475047", "7388790106581637313949328209194", "7037190460605409199470369578258", "1972292059680949109279657902867", "3955762718991319400963182180871", "6126379354604170459357328038435", "9549426590374223756132111914607", "0309035700902775499442373969657", "1549372393556961563626623250052", "7381656277815582269762231642190", "3934362607282646832416372667470", "5414257719992786697005082967371", "0816790563499054532458913970409", "8342963521970673840478371753868", "2452464851230837379020781344989", "9093113903793240060576750370275", "0078310968700439682931937899792", "7390458072417003455310617075716", "3518825132516495179157749081536", "1454897459444124818564149369887", "3430870490680799630245331724509", "1584674196072958495078573584341", "1480764674974805909105023645790", "2439249655547958535503099293529"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 4437;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> costs = {"38086680995837216793824958407757", "55005362684917859847628548650710", "37022363351204163776307318438436", "42933433746284258851022000441569", "86063655799869400505599996253571", "58050708102706286473985974724406", "02094264233447534166269646421259", "99533044367447764009846427542375", "17368124884363884190570169560343", "96685116529419061615366338306296", "01717533084488779309495754445073", "36740674665010701091916035674142", "45856805817227009144645796448124", "44860748389841484680900129654722", "79518629981041912912657406608290", "97026361873476195658988029191134", "69990053125430248036554610295990", "39541889049402001875567967362926", "38342321258366166052345585639787", "78805997241269715353648270147967", "08488540337386947960546256509176", "32274356177508705907764964986148", "46211844362455790792434350069004", "65542989296582707646803392221565", "40405217542896058741774645322195", "67541689431982256785234720366130", "57697515786223293557348786762936", "56245355802711726325820222858386", "86894160730221381608873763280935", "19887594362891387312481286291722", "38011019471212192909328539778720", "40115128482983406955906506654527"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 4811;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> costs = {"455709674240271109016482577513860", "338394115582288998463703215475431", "651466024884167630466753620345862", "291886925562370080390489782403337", "135720017535310042848894858077153", "188568797385474416925088297994561", "668584833973556123749348194079220", "900691161664928242830370757316831", "477424930977363675972436080977893", "404417836274047653777535709410383", "312334184009866926245713077482544", "696386595830828587581891216934673", "780527967084823285387816348772758", "932242316232177336746634141589651", "435431619102001976476187997852246", "301745969196152547851804510841439", "222853123266715108278629116246869", "877019071236183387277139799607918", "883716178235579689003864391165057", "062677097502530375319385489578245", "812980848176936216031570635462529", "234571792739376312595326151693179", "265879770589306877372355803309218", "111017674511656830808913457072175", "076040419147954914075802476846353", "019240084209393348939217582894284", "080841503274194335054793296689701", "800676388144970734331997695439130", "418475874931943063442596796815935", "206243135562736097611631330904972", "937040150819312723126833937855573", "579555145905672231149135626954941", "408812943750738751337361363614897"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 5149;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> costs = {"5682320274740783078424528592409264", "3207444293430381813645971513825335", "7014175401978129701172143163164496", "6894510333030840697914056403820798", "7948423460321825703496663438423270", "3162462721247570459262023902930081", "8734701839543819205340733161563753", "3866164076692614300514495879330124", "7137792580536147985837800341049372", "6225278877488776128220958429219307", "0603870331380781481294483818574327", "7936300829345980597638228882014437", "1963398177382426492269369435435579", "0911302988954781065147703129078020", "8831973782521994024010905932899967", "4327212432601797843847933209887094", "4478015911751867105060513559776131", "9596749914615268131562724351485662", "1451201905854832778304357808402921", "9327744420184632536169472216734503", "6036631436521967490864252553697951", "2813223512441617646438257982923683", "8892598406611440969984850148546049", "8458972782707757921404555271655750", "2439957503893313811789467959869689", "9125841843071486325788900900240228", "4396603100070021213809005904528053", "7429282162675878589497718145989417", "2844417507889253758107893171304452", "2909832012944189058370461094699287", "7956542588422690539070320663813141", "3894702539189938451360485889027615", "6043996835432795033596208823111409", "1941777880808994272625734160572951"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 5344;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> costs = {"03917566179692232447592382359971637", "37628273534856441246141640366275191", "77734722883839982255987399194807676", "91404546290444620874578727712006015", "78518403893412395175256229829905317", "93933264795352309143783234188821380", "64213412459175422016744662959021725", "51229824802608291747011035916260993", "23475702840126408674818567500240054", "48672074934977707104229941313074154", "33278713473679705484303499528301606", "00710998634958609839691766236901193", "38628624236704160407288421379588777", "34810955221363293956267263068602876", "66203115964523449539971928835500873", "63401440936411688977123023609622800", "81437424264559989271342777387392517", "92071899516238767771050033352158331", "80321294641859553247520814443030924", "87653104388236300494285450988653970", "28996634742635346006896042921463933", "57043244218875978975080675505479048", "35003810104567619557690939374786924", "74045209680001554619976245717409727", "85124798957198963305592470455352393", "07857375301444155258645088000646961", "29443635855393219821679507177358091", "33028848557613371631645587900578447", "84035017509730939749755832544547289", "77398060825728954915943303968389662", "13875503422116054422969261436515688", "57032704228789010849459947814007040", "40434700216559622931583046251954560", "91177187222212703360391602281652045", "18620897570799761178612206681603292"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 5652;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> costs = {"820399158525025167042910758357919658", "388815580538793361811333679455485933", "731990286476472315972436564455207244", "056441529811826668881705248562615961", "093495371187267413760632105395136489", "954489447879730549888160448059916206", "508583202139618050953761467798726034", "211315887195881249152538463341609956", "864897029558392462173296398015505356", "640468915617859963710980762660715822", "056219991592438293157267075702914453", "619083715341866797738916622058392234", "166059668497596068065307810284305171", "717848777096598598058708465878354290", "949082331628213591918395307092668948", "701477884553286213966798002961817145", "930662211701520228555140357501531709", "559642207661908816313940908996168166", "600490949341909366782949881271428441", "151594198500783778548535209299465781", "125102467391612917678093057566672646", "615276276564159507401458342613950210", "666141371994177483510188294690803658", "155542186256817696176755870603420681", "721072146174366219518150220388509643", "878811419339630814658233984572661028", "192604185582914245727474172774233088", "949212393889604384636095384903616312", "988670568469430778180959174397523068", "493291461107169077014276653561841416", "887292357153008623401051200322833944", "331215633854183128406978771610880271", "889781449777615498539879568881206746", "306937661485937741784577283486128368", "588746530182918239273170114685023028", "787171599475431148635587107374068157"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 6159;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> costs = {"1083905658414864523801500680241876553", "4888007382141417066569829110775476583", "9882884013387138061190853407332717340", "9189943626750868915131475098692750717", "0379228259624144124301525683766708356", "7418778311413321982156522785078480476", "0616856494135845287315029060065880031", "8648391840690940869247091572625115959", "6977238791932820387713698516594378134", "8987012760302086044255895329290261537", "9650785902611125497374049277398516852", "4935898322639038793645093018580580756", "3005525008542731469492731410688354590", "2207362318558578218720419863966274949", "9377220470467288899185282141649871982", "6331705273123323906819800218739050753", "3295070491816379375686871295063307132", "8433900667440836953791137685660469066", "3650689975630315964385870178025326439", "2226071150439084462230359467217929474", "4651285755885485193018990293072849420", "7088250076592157242102199528349531676", "6417898741827317356794883911773570322", "0828474862271155860414879264745199812", "1180738003009189657613431741348340682", "1206858744954046576535542143681691845", "5895933940807403683091503877304696372", "3789747252901211539635751199265005984", "6429282439662433321943317447249107049", "9407295271119808647883578525976623530", "4015331916353511358214643880043105238", "5574514924597092702337490397254311873", "1952760112199275003028828712572277707", "0883382503086089366638416631780269033", "6065781057566509886308274060184006897", "9166553128069357427437729137879076557", "8558657156626517012420107388908123124"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 6367;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> costs = {"03390845983361983059158849888580679496", "50473629033362568408551842626070512331", "22084110083836859590518073699599576522", "23914746166610065579044839116058230506", "53999400157590266492077937870107148103", "75046483674584638796770603407676620811", "07638777733715461029996703732379146028", "66358903521355291068786115292025615208", "82723985155572949900129369402470658674", "49221820991885203238293192648516377465", "69680921057011048252836315326354615671", "87863571853710359151385279128177255000", "12706814985604722307541866157450649880", "00615104494578447401216105311289599783", "30103503952400685095769747063270982216", "94756683564932305191210096237179519705", "76397515517737248878045021863204520873", "29212580446729372849012964473511283190", "96750326345560277358794409124881267899", "25346030395178784960771120725063373673", "12168538278592644735512311134159591075", "75799230358793130632481304159475160580", "31251600890907273192889789251741646292", "21799122828189386164055694735079768750", "73300805275723138000854772435431186440", "35833477635825157819674848237024047266", "99045526798470340338681057802500290893", "97866761265399773377910652118807086121", "82829622188087249408709675059185488235", "41160322337163907788234485962801169396", "03628849988290372238432333863379907082", "85618713581950297625687104164004948184", "62326323394535698383831485424267603060", "06412748513007516162297678966591613578", "18814702753965360140708437182964148797", "30381994651825676346330974924377671048", "66076222438755550234671169755935950866", "73665883953436678422515084580856793148"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 6706;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> costs = {"779743647179995415741516099331934851353", "432555242968877272291472492959279486975", "953011489290917727235768968180504309202", "870528778313154028407763445593622292740", "077089208339608618681923580813254358701", "902949083854916009901260518066424329638", "121452693365305357783499117758265865007", "583364633974717900615143883376830979113", "121810626193930445304501423742348864658", "575655955259008191113627544873899524956", "897125304983283610838728583544237825592", "229259637260164719485805284726782802698", "442510448851150006823907424575545499484", "499796705043575344801695261603703227034", "033710192522904215967787474885170777508", "951924500731411022492289009006442008827", "053769255417785617587066499938467473358", "972219140731940007222315055773943564664", "770745488359078976298052642139848110848", "286805699661539363651733615040773323641", "745014052733346474823326395757634905142", "870178498308913679982039041329881975332", "416920890131015832190125820728243982161", "591371836495451184479599919725435900967", "256709694500333000136576651985119760914", "492492335628662348255456184446464282022", "122049794227639564986118663460840404556", "789341347833271511840783134017514851932", "330523983074443527238162076047070542045", "219406751535816914661873192219279375155", "372738083375950683175723370616706183780", "793679702349416759098015504646002061101", "724950744637017937542409824243904597417", "290210838145774456711414279550233690248", "283895126672699956177010151498012697669", "205260933922409345123904273208118389727", "513099990896554970790305753841519031174", "152987457453021616616008446551296698966", "460403929176902357777667466920281329956"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 7077;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> costs = {"2485796881023360625312281273888529722332", "7631321522355471937295575020527352897272", "4420308891108663542431236742034415796278", "2458470870062064447692128514186008288513", "0276215868366317637283592973183870475821", "3595763618517632194361317112456507745723", "0395797760127145025314917397451567521053", "8687966996284361330393327387328892401879", "0110090489902528329829351372287141653066", "4373921193756187494510149289342941939684", "2777693862313872645936154262084967572354", "2126373791445250783635551271603636034846", "5565020129281063223624911680739785491980", "3487502417139140174709372734564659380940", "4769612261265015675409869112322303964379", "3085991799074273902469678224439040088582", "7940907383552177211947873955210332071971", "9465472427747792557111233745453166667264", "3063982967141468324739339895498886835984", "6971036691704385793303344851197296605036", "8510292090802982406756247569714240352300", "5943239087585722595285312411171356565376", "7212465098154415780681914576093169570939", "9287853061222121280608482559643454411458", "4265411429751808141402550946059929694517", "3292161991094601177315716287870643969199", "0049026494514091998046930986980354564083", "3818462940360654802341917114712025159332", "6300489015394728951771620921475269671688", "3345786326173748940919667838844001523815", "3676208047169716871562019378288789423053", "0861279205190710896996681591892091813501", "5046800470814889914740316664654146990174", "3985663620313236635112007266174071210298", "7635107046044573389528852390508901326403", "6893400748270643010145321572792569036511", "8819818344641954027089384414673774376496", "7914957775319102423681444147763546788869", "1730996572005339947687101448403778420558", "4246796586203085904606916991379101194937"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 7350;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> costs = {"9245368246742036114554169009154880925291", "1930609731383676259657533458692383001239", "1523956578665852391542600693243538045572", "4573189947946349842932091611242672797294", "4513019129204165090263665103763726849559", "6453269348323222579767645410473241015345", "7648572792057474933091411523851039160596", "1997355584729964198384033929459321887723", "5016729089710224879029655867470451979345", "0124957342314104092211344005015283917967", "0081629830069697739553713231178523022785", "3888596916193486419702608170309643713063", "7870300075544476965976303294486898286758", "4983347671064731996017197292069189547791", "3772366240602223680586942902977233469463", "3565646468985441239295205918936355301086", "1122475582554360175408613521465608080856", "9733472001293572796129366370035075054355", "8720522023324640172165458210750196025805", "2963719113147533181881982903440976734873", "4078625123911799424722511555732692218277", "0717042807534622419422019046497332449081", "7705391580780455699211698158827101165679", "0843274370516522830476374960838203480286", "5228967006993738581374220498302385163953", "4258707245195068006963108786286894614036", "7212480802060266402433275654373362162205", "5877547411704535341017934737219101870307", "9885679122668312370389846479760720317794", "5734713437616467308671484117589044528360", "3483454226525332646810089701764653885963", "4638650252487696738650872877544723758502", "4396059640103404463710441939788319004729", "2782833672540025132503655025345258813280", "1738770439082733004593561155077301147884", "0315512314227696707935649071531548094181", "9813881118167985076244026958989988858577", "4414993768784464126769398175663687794003", "1842400880293769041438730831201935573364", "9388305538145860620277021437131937762632"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 7347;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> costs = {"0597211080798439820968908525706661162334", "0666443800611311653434705489778014029998", "3096121142389436738021406455767157394548", "3211696007615284751220429901128593866661", "0404912716512064545275180990866121782094", "9341276721396317373247062534265616058159", "5480437937058513335174838668575229324616", "0825430387103490872996982101252350128038", "5617806283743295639338702982552412510599", "2813677617434423325559702568244323015139", "4104163781473543625471466007347012692690", "9859098580434843312748298725743932994988", "6837192712292504360888525936191466619854", "5637378684163280717496542157075524160708", "7091622346325163496712903397237691669640", "0362928859806398206935542211066240138913", "4887908683122085626690005922948361276869", "6353947292551101687151601477983895361492", "0513955872997014345840231131732567148341", "3583705579647687738116680617180940543821", "9555501611146431338006784755374688370893", "1423123751344035196621868633139128306847", "9599468678390599423201384683605076354310", "5356077506127400756273746935359588515298", "1549243923575983650248508758776920215465", "5850156746048746728135729623860639114349", "5547583673703894784945426391028230771719", "0516275497510738478460569247540522093744", "8835755600236879814919793595274369988484", "9237440714682085745885104643057166374604", "1592194204984462246059046460116675322344", "0631731953654170847686114077879563676954", "3931434590169436364748279062008951190616", "7465956267105373439251777413242644970070", "4092729673883280248791923506397504261395", "1658956830668785140101273977895269628249", "2463888652869072461446818793235084990386", "5961508621522920124255627403923939750713", "8871610569371192840563520200443925521219", "8383568992869700850812620308798228967410"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 7420;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> costs = {"3137034849273527260654813230796464347473", "7052730501462647535748549606074467822721", "0082098734899356799536450557848255865342", "7512424864183672556650188720227264840873", "4708714520787364298160630874067336340590", "9296275639780867860582134500630105849391", "1285809739898831892249888025414315856721", "1623573659468244983321825908003258829928", "6819919491004893642449807040629889431332", "4112468553919931276988392761379871989235", "1154945779452800830213773130315432911360", "6551310388583860246760910662729183404756", "8560169940129648120884469281966654566127", "1601741366244183167543245742927705626146", "7392140099523058999224387567103602186032", "4318433156612716235286476008016495355759", "4667934008400111015728524873883040789939", "5663148668029394676252651049991568762638", "8331403132179254971739806652017592909925", "1232475005484578016923684284951391907489", "2512808300456510630160448496828820872526", "3336944308826477093584845871229774798495", "2311544273915650074673092327267986324807", "0085080052278467440308828399135921882274", "4383447541935212646972761337272485663988", "5739544159731821098774309112735118810857", "6894690426252604213997216745791955490622", "3072050635465630716196751780477209398294", "1383173246579238060530160229877518088593", "6852155721014783835712267634206262496026", "4401375629367720029365191372638021545019", "3366942978507614093217894758198801305419", "8335402002291944363088293440081398735790", "8119983317043341052480210958252688905311", "4595213762476795875071876046218228375908", "1662844470848801372107757960700916788101", "3539221140645483386580757136961021302243", "5170022649755580732875883184029750612479", "0963058340269601048237482779223405004694", "8537394945204661521325648595263511585428"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 7367;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> costs = {"3306367621263909689200618057716801825388", "7223136065553758165624537661173052497567", "8416765639536046368585529018810910050497", "6148016054800805891647148167670645077436", "4466914596723599865936234062268667542168", "1510983468514012061023988970603908091925", "3949940423800689021060916869095023284735", "7813568245410487315358627345108540631767", "5371394645575405366555940417313617888613", "5756146882183246738990115759369877884429", "8463365494122687432948163098482789798536", "6156822794400958079561992359890104632565", "7254805417431008757530401781075299540270", "2186103810098779189149017217516416703721", "4276189346168302296427804231313534037231", "6795133568527856117266129040296340599337", "2832846075291618599140890424277424534431", "1821793460879660783272815246214849025036", "9503609710331702326404770802227822810700", "0552617557446265298385493922251312223608", "4958899307275005236927446023818028546649", "6413252934379381979990468906618492280802", "5299722435962149217909733235838790566338", "4758798133509519454313860550209444415015", "6126818304580380848477551652664480743941", "7981495490160141822621825410323118386044", "5137558572372736824355470178856470948639", "8154013915624831304461840815994717214750", "6922138973702084581066516657198646003177", "2803270565979375184305768477611588103464", "0393063741297801106612420800707723324924", "5672641966486173531261470007353480088344", "8727678325882471676664983058854917331976", "3564446429342699845362500149111879980237", "9786824890608551152250305302221125654899", "0408777785615608247355772221148533716311", "0986224545279373301308184262821488657872", "5429317872305251478530145316595445274348", "9917814433418269490255553278975181509031", "4868363867595376275739076116832366232679"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 7304;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> costs = {"2835679081073140177473973437423433634510", "5321014339503796224712649690605229839333", "2484981254091013020034198651099165141753", "2994844538839287964025193500717777565728", "6048450223750562368647666547884902514139", "6566766753709304358145181263739381980197", "0282070119037364796359862305632581674628", "4166367276809707098137390120067800939671", "3207824608544407736396321228127709838110", "1787251352124777694706253391861846744398", "4902907046822165716035981055047570964450", "2626250710375494075905835190317007880103", "8128316619049969624911635747851829691786", "7831647835928498609125015345352597301598", "6463403468549107255181846487152064397380", "8238600468447573268035691200223668763452", "9581934280882527967881555348303949113484", "9398032493599603201024083117802129778475", "7509432609187644304038969116297750649703", "8589620310902438397867543801938921157307", "0581776569738223081532229937344205090653", "5526881178966684627730562068556886096206", "3222672859836202960827748537584400712967", "6310065320398509107673334420749859750719", "7834475211202216140583627096911998573821", "4099189404393110878454394203892738468001", "6982804973192669724697311854308169543734", "6905816836881011417403265032223974832516", "0497566495703564008274723790014872886897", "5348077923066503943216627291958362947265", "1390172264843219527014164710391174913568", "0515001646959934786563594054037682251655", "8492328015050433967152499178144866634512", "3791129586267135395295396190958010150121", "1708015387382433233108509065361483818256", "1569272783203610162168301394514807257704", "4095231217143874929454294824574835363776", "7339405475726951939627925521205644369940", "2149938071411262269350353851374669415484", "4890886012357016014806575741434806576077"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 7343;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> costs = {"4417231387449337370319219832088987579792", "3117295688208899006196193430472892512797", "0835796222361526836944954410684516919758", "1988200069973565052900745230547016216225", "8080511471118865780390486996601082102418", "4229084185957675819725844582167613108400", "9068653877952162764545674979144308771754", "8551565425951612499712254182109991511690", "7090525592007482152807163656647658543093", "9198968742256995592729889137556032960142", "2071864379877766468141740053503050313101", "1055375249261868472993219156394129253481", "2461178270502857106406495509025426298874", "8216781259733537757203421037984512664825", "4693452554407216935375049784445568498482", "2709693439640250842244170297203200674391", "5122217695676372684217182241705137947908", "6668814191410691246849638388008228444294", "4952122070212780440963814752538149378639", "9827737761436134120332969866554332504400", "3412406588339828249986707470540386748886", "7521506848088506994554600408372456405830", "1916926179183007872881163173153907665999", "6636166791472761992310264951474925339024", "6679667717747231380196787943691121008076", "3218993234115685151069259138068533004433", "4920152552986426962081492913852060211795", "0365186235986445521382132973036266396894", "3205351414936828189305188614651974318855", "3144278971529524658788277656125598825426", "5525287537572356662391582052968411726245", "2130137226726919525622574701068062252930", "2369996694245544770519574837226971226841", "6806769058165410189286521891570936341547", "0448109211631660241710734664066810078242", "4622919135804954122810530631429501069659", "0235247446548732490429856705369583140671", "2193399741215975228987754171460722199304", "1203037020703833716225328076959743850915", "5419885193880826109484912489603262199432"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 7366;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> costs = {"4099687551936614798713852956645846727229", "6806248423547907857038622120175725347117", "1014022116600949498150494045768983482648", "8763935521881711585878303325586493999897", "2999411805909303715747007636106611620186", "1066955557301732767714065614483961930505", "0190417001372948519607819865180684750384", "8581098432354136817300603071888313042535", "4217315986719141071845082221500031361491", "6493016547858978372222365165145115415822", "2421489476104530828495741933674755772324", "1569850008721418672554031887940096429930", "6853264555746261582999115020158324639074", "5387287437107327266462340380183223659724", "9541225430998655913784043925873519035949", "1608967232549612015933007176166727444047", "2069614781786946527311462899679164557568", "9593711730519787036136074138310989179549", "1942244801547845071259249543432818618164", "3456364342207184111379677006134095475509", "8402541322232820307498583949328199147500", "0162183419858415617244134141901092465577", "1961917743088477429035159143180436013224", "3960812426428616056149174312189114917768", "1953597102099391943031620353197249543728", "2111602167273930656490566625395778198086", "4419356427178191148867085741404855967006", "9587166327962553292255927098532475459067", "3767775276033329330320146893520176902520", "5633357307540704882923456515650295020357", "5580468828226766181826545822437257632553", "7182419413100071855465889427463428978910", "4647353543186310876127285063725068471167", "7924778535460849635573248964315963766109", "6086504907551624595678669731527571240416", "5793178648571023080918620443081597553779", "0192699135903505798936173988996305160164", "2302413783826079043978139284336258696352", "8955931470977850499993496112400082996198", "0493384478648319627061378314632303183749"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 7369;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> costs = {"9166416450570021191600588997805592874634", "3539727580613730217829431921191189668541", "2575858874256594486916549589458173573396", "5953338579415078433643617094416567592347", "4244367669798340585770541800757230448721", "7943689961746550205652453660497986405538", "9620430701259784887993439119293609446911", "5889717670482303807694666063001738445079", "0007746858759775912284916988855495956642", "9231772316176144652268643530730021830386", "6239692491438960760483968214227052348629", "7400943232356704793477177581129219372278", "2632080624358308076804556387798550697395", "2770238817170744234401642540098826483168", "1310733643101555487623275325879972021457", "5101764223709404864342437257617503347341", "4796167584075754629864545868685435557476", "5736943531851938883195702724172249166170", "2290450299338608926959749619664321521028", "3884632697160093393471806684137738955719", "1810174692447579173266454665456485276821", "8417505989629516992059890172011512771759", "9228936242786053931946986569296870452090", "2268710578453102774078296689650559099069", "6826050213351287905947039886954980721665", "6157142831568421840297956882058312585929", "8153187088223250520614780542402155488680", "5927639047856994922966605091425819613921", "1875038652716554745295739546752452399501", "6771415761442420519693829107038879451244", "9745498935766403212860466265585047032842", "9382631026170636146578365811883327023695", "9052597094888374574725360034287089382637", "4533706253800881776204411322751645719003", "8998614584486274161471754636880517208332", "1403785383247909976185658629650914339617", "3372797778294634033413893318050708201490", "3540060863420214999003209599933796968736", "0938982807076290130158157920923009168656", "0602783826532629313125650091676258611894"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 7698;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> costs = {"3344221121839057257665325557404803622955", "9881100114288207576603956262839242168508", "1411560743345635805544693369125616052844", "5968667364016485996101010213989797513864", "2414108207847858121078200971002397288736", "0759047393490493960063465035065565919862", "1723912856319631761479472784218458906773", "8059121535765352741294693405850072933070", "6943383578173104448883534933818378162144", "9655865185534665066718160405364838622846", "0138782778178858849021509316014958595910", "7313751059720508566587487067132629227142", "2486924173592874559937604883241374103024", "0585295057777213114839168059277913760831", "2953136866896126147506693855951319174795", "8949658657840198990794200729884706423048", "0944156622027630277957646111943526388496", "8996414788003658055562000067558032194365", "4689158220640657365047986507624218653576", "3412680926539349926802599862866449471304", "8748321353225817436319551350853883087624", "8299942953906550255982630577381039931221", "3168654442409565609400554792846186177600", "9540069353867938714327057376541759706222", "3299993382401131458918282197893313656383", "1783898505782011703702747700856120058896", "1551705538579165765763103924172104132291", "8281840784773005985946735715529260134007", "2703340186815162077175377390482920601318", "4645545568483346881827270852431110009887", "5869433181414490848641553335137008773810", "6235062970662242872270487168205308340604", "9271320874850593523832189337758990113962", "1055895259395540220760486398237733749492", "0856283111793598802378222220404529699933", "3851436366402928229271541479500957185376", "4702735028208657549686102740893945839915", "2621658456909045400276525506972937188642", "7708822005010764770568700013886126550144", "5749668957331424449159225907842336486140"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 7387;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> costs = {"3652912777888533469274219696480011915367", "0427508805431760291008088682169435230350", "5184921553393625808682457953591678416718", "4209228488914527367733471590133101247826", "3142263251492897392294552460862406669529", "2638826402007029788541172910703584339629", "1805244343201619578531464474306080945042", "6034296378493297009355299589787696929442", "9443506263543111318014130267742078981199", "5703872289748934984138112893973044076766", "2680588825771872196787505406529110172986", "9028968082796280164923775645801431370295", "0345340194132406586542337958924217185206", "8163742208323321494719106833170240145543", "4145877640641917143494892811812241640892", "3830736360416856475367166906372844508245", "5029404917683166509442910032235683420523", "2147444637921706588223342479232229835995", "5363297594692015983050404211357598872015", "6786141249318672821632806398322482944203", "8447678949902193814087626090130628533380", "4731835433987239438077118221726806963177", "6313295256525503820398825572913475389515", "2246468947330018397599485023108371319472", "7989772481959172892865199860979972043222", "5828148984392344387559035610187510587658", "2764670332360873399156067226932595304415", "9451491623561465503664264395793613924718", "8634666616155924802527219666061786085002", "8460276842512018317870317536828392473278", "3093841319498789382801841865849847002782", "0458545716769250957498765060490258142901", "1635659977869569971795819584567250589118", "9435184221173876148587684614448739054625", "9754887819395302316128909084008891128648", "6809133910469185446008439518661192685092", "4955566315389432098353479680223562835172", "0542948482146221017991044664819635875104", "5954164663207950101163401690045762634713", "3901160863532872262395489893240721741238"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 7470;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> costs = {"0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> costs = {"25728563707524750645126599410615850474325436247375", "54689022709866953999890667202530422360142147934843", "20756820998501463742539669012718735435104703926451", "57291275238201849060284618031498762468431428995894", "91437168114206844152285949193124802835689596210819", "69506603808453728725135147724163780107845148518801", "38997192145359972147271178935486665553934978551277", "62039571153060653847699607559137374942171414380291", "95458534342771074959340972385504550622136717445434", "71599857395181823234301521347994690048141240954526", "40576463267518165454141946263670836830345571215032", "60044671604506534531749144111570488530735479786282", "89535009654417641094462754390937238375192316543656", "02288601467191862225574254182583809198852374495370", "93626162705642040992036620754584385004832688020391", "09589480195202674183331973205059968385019262479524", "59736655750835915780603493150158235040843573531438", "93887295814081425845726409424478320532203305290215", "08141191274581881403725064218866101180890575446160", "02488692182659479683223273883707592605177486987713", "12814814202574506591281310418856615252376226119898", "95343273349567956511468779651745344853403464003913", "36876940126411414459294426583551312930254349668415", "84871928828482700063446676751719564922731997236275", "72660233874057398294324979159244655705181522920274", "13307212430169883040856168910867698445597242315461", "36984964134308373333994861232032260371868450216380", "12918348382536343284672888447715045751062022386599", "42723988370540000379189203579321864834503752340505", "26506585121728513455650269645393284540127579678893", "64560127085183996059891202268542861163303443107687", "96291845435558129919968152030187845971971282483065", "71825855020998352752310712298799606274742976119344", "84385150208785542735177486821316944777282017008598", "95399835016847515875175162248419250848047891661741", "08548837564562170877388879226487998781915471889356", "32714004078933829391842412228301080985501718319545", "41859236288108781102810646902082004472817469408089", "41883906466777533486805196822856777518073352884584", "91089782258864129017450597985470385942292988839746", "69621885826406589445623240896719812278478479911584", "35276011685705739878997924091217927014189342577141", "69520868193956450849268888205022406080045755183379", "42680701048766666417729464312695608485653305104538", "21519457947856556052276715774703888271253567284234", "23820019400906709212607437693782391943393418152190", "59895964675098160780467311405458402212532264386251", "60343725677464836580821456847180918237726433248860", "69058625570238722414432195501789766385142529229910", "33617790972096441743816910938430715596199634200665"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 11690;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> costs = {"55712826930770058716242695012027114703349362017595", "61346943700849253483917758689374950258555226078633", "11755498062304187854475085508836159280783063278836", "99203637004860074646484708833701110408805487317687", "55602659198956008206045959233106778283198292849580", "09261394497311506676675960813064003195156717641745", "57271859486267357963944918080327219882000083445502", "89647325582548114781176546037101045891057799644479", "99021781574528224676088425627582960006987600911480", "58182220656406285492124293222499743740110260027489", "33699007566090419443096004890662195202822043669012", "85607604431660703385879306087325084286951055998208", "12983161210218544021380472799315127223890450880104", "07265876095866389377294127918231941816647174211571", "55413127992501027164322902818624923078249503485569", "56914496204197973186374146961342436441992080282044", "84220239991995049806605271637822243387752136160541", "05998484065992583584600610055128897171168269578072", "02364536353719481380964936727320087823503446751507", "40835950286822033608322243805793309822353883643863", "96924323657240290293336541955475875106007291280187", "83050999770396131704898408297786554679823772767680", "22512097342459831625484856398384831915154397745236", "75510404655881876487747172524723443022845698490185", "94700832495468163455754961768001595571443913687070", "34093031477971305837400516034301119029425686443981", "41150460302669893437083796014787879207215880566165", "88573168211240728967542694171778693505524228037639", "41839747758135394894906000499791648751852696668258", "78352985096627196863313876372792643292422918626435", "95305046675560887498751766063480602469459438530435", "50663249395677677667025885479698635866083121775876", "41432437585558966395814230865697215892860235473766", "01795201723780126486099392316094295586299519499176", "64188718340578297261901845075981003213072153748869", "97622707969965466543993434461316592678583370074880", "55605076434057899995631768943238966891723871946447", "83929782616645340269754420144743085610511788409341", "28917561299831544099446110586209152007849942271834", "86570655048189886668369519731155412145280521531985", "47411835909321912015889818185118713699455705270354", "53056302768707418530161598484467182581825144151144", "02508321365387900551224174254269143465378451159568", "67891550175712840611695041490937565228865808217567", "61998458826867417595435641380210030259579107264220", "18520324156056486166180137222305690289734010409493", "59639570976497178326692408187929743093035743099610", "53159021252964412560247816095797348687287486135746", "96105088854407249127673875381284910676208559824455", "99287329742444397407531620348025917895497709494548"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 11768;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> costs = {"86583137378125596247102056552073721289130498920571", "54022547207435233801758965127050907739187682668147", "97729577495505621050831425558025371114713461580112", "28956867982619578417007362618611367647044917966815", "36371531691476091942694508629472042812952376287420", "04816517475151682875462940202903095204546118383257", "05113510114671673901420872762025611359786802184614", "10117991685791945600853007101776509167449882565886", "99959439620869101015662291271201557041804172541105", "39543172977673040940158542889274846711743918726160", "34740367948496473042350331344946663808228206374818", "59436334690816828584474923100885711389052230223227", "27375856394529826903526696829080829735398573318669", "26732582060342879354399304565060036713234986605927", "33636822707919724846470238702028515322558139294262", "47016987890880462216743436109752357743473585450070", "04884756544130599996639867024487734395776779938544", "22874855964838106925983906223887398142150790090118", "31263318631839273690268557953748374726364975046368", "87269519652418224551469454835863847223340947073145", "55076145518477157656222288504338721429102552869157", "66876714018923601871984715855488050108838297649369", "18159492588429796273587578148940377766925874299561", "86574293116993687878444641978034317226512822456337", "17597475622990688058061966102870069566491827254182", "14085089645833278724910084824061001640597960448483", "92086920564912990666727074814465632527185938038220", "46139988779885659155854978695796342837250658538334", "04248345059526450853812258786586594431195361801834", "45797746155495101012520593492349144915988245985766", "19355657325600258734522038119843174859863735407851", "32651522223860529567085126575025381813284664333884", "80136380729913181285658724966742207830047865282842", "58769936587572306320692762016204215637808694810912", "92554013668039416832827822813403757861292034845315", "00795957456127622973653709136620955120632019738168", "77768638769689826556257113448045288800305284096455", "84603191152621839268325881829577218304450343180096", "66061121332259207803189817230583311061078156865452", "60741319051483518661831471577386435047086579548499", "69389735921024359646053562988521754207184512081619", "45229892488889097674271966461511355224028337093758", "61843467658793688712887059426994953692775527403880", "74798766127334300221860766148888788837906003680848", "25551241259718627523604353737300507480235180759559", "08073702602116720887398460517282763012843010387284", "89061972575054863572387218422826576062284784256897", "10572580227613042101603681288000479163985745923789", "69827987059435747965177599545649839841552783228294", "08377938754012616228979452323994002331661994757614"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 11902;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> costs = {"69767696297558496827620258950741403261734277466412", "21824825452309274806348632037807196939927574354331", "91721839404750887197802030722484136882637062642780", "73077976189215097156079436076469576385184419017130", "79136196518368981930793148969426209949572138720943", "10532103213353745722218727599421120346491393738011", "63984421852446420385609731019433238031360853321936", "73538092424477045551673067068758934583225011377599", "89588693119730705708599181451988379592813338163124", "48118749272509562738608247206382322010675646644741", "77720950414575791444757898029180214606179494318362", "33121380401497882446792248001039202186070508206098", "79423835626797317430329841729820304555739227477942", "71598534371140347402499259659810161931146571868216", "82808542599538002047673702425353231930549889651431", "49433778412345933002691610701001985072761649919027", "72791918680129407544869772789334513216944614916768", "91207698567615009978117569158373480656930330654134", "58160828092154188807267779329900275200674397782748", "30761564255671323174959140095914149360153044594902", "62309730918577227364447298630579722417324051859469", "12646089788305229325404864980050068701446442018024", "31733565551590977408203705930485359745068430244040", "13592052289560338141220915696398257899373291926714", "09999368394575917543884780703577406437512309384863", "18904416066745182683114134476029450580400441035086", "62910337197886321513960185304161853231972014285755", "55641506449081707271060522189257381693145186120801", "75448266415958586035654567521092066991059884597158", "68506083253599635552372357074303129311312672980035", "22186151671990912004713996377902843700642065994284", "15077944437463487803355535377624976166106332480961", "87248885511202741279981221135780834890474381471690", "82428520468786779328892625448767111521346115611716", "12009252774945525742919795610826544436824904534757", "58229869490107249484521913734403443626358494792709", "90369219399085681476889209546203726133171351435037", "98919371064973247370530529027225737144110920260493", "82551761434711949137435520255741488659424457575931", "02901593620068451137788229729270545793210335161014", "31413623945696190225634875573446126056996970467820", "29203354091292478341928663478996902148151103981852", "19185040404334115751528016760006865807749323001663", "49223022078934034807437300818647563447917037423830", "07190160618743445514808900862781208358510942542109", "66134269501745865693439286805368409673431494730392", "80484194985525712049592967027918093180858247815691", "95351345194294034651565952614036187237816958500190", "44702146645565521967570162837737688042091229780986", "17285955952887233602170454603951002474091337265104"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 11420;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> costs = {"21973063592625534434067096423295006305053609421805", "63306928214213450800801213365462399619643404529740", "80729234031155478996598147360531219737540727236232", "45191578384309269445400555750573659089042307600749", "44180612582678769454513398647600795605175369187909", "72182396143147446926223848725620949359452429675167", "45451129957348868224000787668625622222964932656069", "62342931294683026423726769821260946526981853889590", "68755361838802423962988956053578669541776433289404", "67439715033795285054484646455267758526795041406368", "12940114637845769942278674970949382491440313521344", "91574079807881447216724598441166577705429092309524", "49453833382984823217717861942357113668962817981090", "44486260284028901867603310191915327903860196201628", "90896038072461688620893870579466642999212531863359", "51788526383664298765014167779199256509630637250752", "37305388963146876660652460261671897547735800245832", "75225880315060503830624218675141913475232460969086", "13874382790206001897186386066854817637045470670399", "33730586154753452586682837737657653519139526192567", "89770068099529267984925710724021304327845395771508", "29591138232402524071563356858435557240291689438206", "85597382099331850990456355166038794684431272162523", "32446327626854593269157389512124397895719651699882", "02023582135827572712363796121817231496083908664151", "52338074328686387402477483999260796431189348840831", "18679283756331466180891695803384080385643904435855", "27143879105049757144529538235718971486500729599972", "07625147386873736272143584454522678872163543081192", "91483089515574752625142760324838481660287119206526", "95898500556369142972327556688573553278900166704755", "14817773405408726907052497014902157566754381905960", "34412305061995510102337223362028521688797391472253", "03233714238059313666981010226319316260675423116886", "37876095259777803327279182844059945936619685928463", "12491020255303784655026340135994741023173349945106", "31715829891903589321318668492813725759740387758370", "49834852342406474088413976146693220416281658488069", "25885942625183281938635533474633728550574395362714", "71717411523210788973324466847866603572056914463442", "52927647098272438811244327019911923343413491121404", "38764671489954276280247096533560355192824161957027", "63110627587412573232997644068886346029509819387926", "58747496874576120157479019188384309095989633155765", "28923577802614965278961212973492278030024579769895", "11191885151434965004211133468977364441236237327549", "16833135446003056901023199302099629808193751405312", "00666236230174947939584707657980251824634068167591", "98724802654145426708769361927494875703666188417123", "31358700939296186159395433726852195844751605403328"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 11738;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> costs = {"14068727884239241879774299761750972654297747201836", "12533468972441291187832915055853394699744923672763", "90386442270314643153242057452400248272479800767036", "95518222236725029199516275474601090965974160925404", "59833461912393181234729148465306572498325092412411", "28039755247020058156436161513275152574672633514174", "38264258306425055852179002892237851073297691611216", "42489866018733296106156725057432139074870750741053", "81532125172723133792151777334573373597124269310123", "71313402565300992801778422628098764593675774846320", "25929912009362129186063766916212731431375957466505", "95840863781573432592739182100368246177183298517549", "32360527132373524315908674029280408181643350368019", "61983728390502469629267792019028606391759360981127", "22474652862636828856828975282773450573694536909937", "83721264322744979193932088239311437787018429778124", "71713276064205320294377731766038946744024814009204", "83350676019160397210674746048300164881856527184576", "36883716293746140453702852331100523522625929725563", "59174542227699848168600300573927719604415604807778", "51878528839474015155605650942085202689090933330543", "27789903544058539432490084276081182910774317860880", "72494436290623238750260436434798521109587017548939", "12221219056747689235739457492512947656989091144039", "05414578198344792752141492978085090195438796479316", "93828709765576862507436486988095880754045430501451", "56878738210750816056623396834855872350649791965487", "35273429988474988867288065352414836813484147217143", "43358196160080965240183758419122632212403781206355", "50999194768568703946576129689063955261166528826474", "51342875034801049618060145312371794517105900802608", "52162487423068358128424231082286784092939925573860", "31665120002776539217403319371003300974891753995553", "52213015446097109288223354926760205118544042749909", "87953071132109221099006684012362153941582913345926", "53286342542891444752707110977210663291986088641825", "27980710588981426101407470515126657791432331669372", "71915633686617884102698167218578809969693798872312", "41378612303105187158750177568225666532278965667057", "44090547042371470550086226973501458057137523216310", "81825295295369433790486855568332440537846847035443", "71206050384096058758247847972637012709184552395662", "26165946843868774057733468992491294942428318689160", "21572178078445332745293590915513662770192656185035", "04716499875924030129665904557239152375462680909006", "43409545884886974975219233408165395540201067549713", "36144217309902867372101398237628251726264654816836", "85229768813580942836202850728820049156213881989813", "51021823071239270675630162329842524060920814084310", "77441405145095405971108750547699737268484770528773"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 11458;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> costs = {"80648109291861824942617733734175977377599607711580", "22984563357834239552352165860633499370989988200844", "33789198421632395624320403035568189252809421707701", "77432075032926741520661635052816550297882417865955", "34281356760257432300682297740785164531472479875838", "50735982781925408267202777285746505684333221092628", "05286126566787438161937015429674133572396879921783", "00973212016196128194675211572748867636313147299042", "12064629978794882201573952879384294595191673849968", "10069161444300194633894762492405909749219943788598", "57386332540481439332048004546552952297280575555326", "86358977918740012726706998519480628011542571548630", "26660620077997466137793941143760926324101801700775", "39155019574328514650710871615788694709901842774738", "85431767435501940309181243084709812358512933699810", "42702388421272150095060205086468539997941254268653", "81423097572636872058464358075312718980818253101129", "60613857917090284131595786687145026181755610174469", "50359885835427713079952510856712972270584652872914", "56603243954229371843604052247563956722763164373952", "13947423059318427445202634928054815147796980853619", "28140109434561501617323473345233220862637683644455", "99907100667046703415443914265248413720103602724228", "87855930754035746502188527209372754615645853484711", "71139506573435837092446390598486218794578446448589", "41980671565639885251385983087503663786701837270767", "86660352664077915697159816931040628762475605374962", "73773428959929913984271331067116950995055368051492", "67778179730826060616537443602000238988139951482569", "50850489142049509903721933199364409439641444448780", "69791227547406747026324298975261513725117291084755", "64280556438477335412405580656868308611249471700244", "38880909112450242333533870720182957474898619175868", "81631358194142963814512806888582125836559064249162", "23358092389002770618676738425606594376854143216457", "48340396696285513328371079199025017827469071702794", "67679869244383551652754992848085249269421167522866", "51377029413166250197991760594419706449309527998116", "62824547640616281375870839611806966099045462809706", "28603757815944531462410106817782937349306433813703", "07506499959833094760234459304424753733534168312243", "94143457429999231026664612056591439853420533766454", "86490896470562002625762543731325623189813634606003", "86974055925927522036226542954491334810859669902972", "18751575990394427215049444341728548251914369301683", "27146089348680119703829670957937760447857422578676", "76854995857206218698543393114274230290086198206317", "91706268288526630865584299765200602121846069193446", "81568079795184719111334297050342955290352497739447", "79688482510599513383344372069014937393925228953859"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 11734;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> costs = {"59828732901973603684133179068531935225847251572068", "74489485382335041950383996350053787617617654853757", "05443878703214082937542397715825408554697439852518", "15957022133534026752122558878927405759038558641684", "54753206230587525799393485928528619757991898357406", "61272048120598625767403045932421229090876384306445", "51914286825344240600105464307037130782479492719523", "01203180188910737437851624940344734526736922648901", "84907904301978644015430944590014468540874533892523", "76624864147357581149490887848737679435270745177344", "28606998995224168705837343461717069044817300974888", "15620853303382432157839103323578426718546916902005", "69826544984505753580298801706878757532327353135032", "20037520004261258862202092662391231191050112323285", "22435506485407738051654247214425083101590247394783", "23632336650253752461598647499529629785571832703954", "44183551846605815239416542975778638049315613382070", "28711036537126998287528500373099074983544902693797", "48504726298450319863973774642741894564657993802433", "65004919442531781173963070623264829140886369483306", "26438614739478489390337790550809094531969282078654", "28476676683219742967321178994263316572121459396177", "67981165824655355442509808620707186979848835645684", "80921928136487351711506856626345983529560652197457", "32819687634214989299385611830683798812370212079310", "44357701805147366126232460030982242027018089463531", "78349401453790033196642400782645908930440445701297", "66460634592591753850857553505875761756623625601726", "01454971302362883066555414009544912302926323210152", "09704008740213254646679488738866453248211742138356", "37942822007593840966431606280665409543615453932528", "61716506131331202421337612308058150869670113746880", "91541500381351404183974419300174989415928664648550", "82477305774079565974432389427502969986907082325173", "07048870071591959356468325035866100572637371674914", "77213735182143831019136789334859843219235356174634", "85861479924841721958807566026983336409385980363123", "34009764283878417270344448757671202353321103384254", "25194893634640518348763625610313468187666390964573", "09725635141640923017954026127453102251647102971096", "20598269743576127481453719084782693107794286835927", "75368036085021376536338007994058958519679265860391", "09237097049013255817504225025071352959047337544265", "10316977094960046505282398509821472853942485544309", "24887252563483349044110587943512474563038191191532", "45314772880906596130223392392420488819022138113604", "88560707205097869159874854994688369112958836406999", "48473145515734390053475342485739548555332189586491", "09913744392767121094380040925862405888876517814981", "16755809031402470304429202269128539937666817876290"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 11608;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> costs = {"35002420448044597273601029136630629735302834376859", "73019448635109188493211666750729703794552648683888", "12020604043100210183846026359484001471934768485900", "35133824310660736284842275395096294485203456955330", "69654202954386206156150086999059997025967257754882", "28527631425414689187909615211721312637997974847639", "66656826685829637835976754848913980707004913084171", "84510698986479531478033044776681280456369461499830", "02886749961190475501329385048912061138246130677329", "77788274932388986825266575161791475969122281553238", "52021662568177857069415113283692343058563280594038", "90335517458247093211364883221328807093977124751459", "10582760003287787205375987420262216712669095155411", "25035447639127208786272819990621432845399786344228", "64028929836644407624312086897843416247917646989738", "21114181087909632577670760890918253297243319819575", "28816459364991229582427101504518826831578890289422", "90477881119156726144812634198052583604514457776232", "88013132970731801671935589136645649384997187593861", "46553550321450743287594458413841767752848605058178", "78995705312931740247385193435509882761433392001830", "01806208696718822668109940298232276470534149286822", "05258429847784587963458585006479595829160903032986", "89363453923705552686113240710909694424259452418393", "01341408201136446732059595566142124357350600129665", "49963868423109839073343256554240236284289023703768", "28404362016258776903326024716174864536498390170407", "28440318272342226230485305661948945279603055800246", "13443370404180480649197555616765907731958557968374", "36575043402752165479973999948796519997306771426564", "77390967009062089094148186460002089984019910050242", "51679816421014007199210869049759772851389569615201", "17389786620059722634347831175367176255863730837994", "68342511403634627408161096053900901780757266342781", "68625288419227234484219867289660426836892247407770", "09232192666424548654993986436290154920973225171386", "05325032493606252335149753430691088077381711606217", "96815130780366967612429363519446934659455710329351", "01426124790476116122363475974126424167340416680053", "52140487107382111290900283544204058779678481406658", "33594935104854041697926467814531666668847881348086", "67887389119306124378219391260975626891860503101207", "17534437179846372196183363495565582448491669653919", "16979315216139663245626449102443938924296013453585", "36019561080038283308591084653523173430354965289682", "25250802958745144590225718545131273051991671696420", "48987992735608135965245716368955925126801946089154", "80026587417281858422123507035196905731895127839984", "46164267995147241028246486143642873620900156009409", "75730622068322827107897512344003957330736738390859"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 11747;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> costs = {"22213265625233404424632001060410619887158569059315", "85626985167174749098050781433862439864133153961470", "31640705394067030275288033953679848319198748489379", "65068645449801259104260228114070174271759207783601", "74015234481110947283415837448626671350063572052992", "76821617539216781499253489327239809261453390927334", "20010230194668885553225928925924873432122241850188", "45827376036060629969481380823548383973548947016902", "33789168782137512500424939234547353793081618684840", "88987925929312820153593430914746890689790331785109", "85131092162185394451287922133996599731000520829893", "40654740710947324590124914920198664405567479479660", "67498665204854597734811382971136104461645204260741", "96721753976097349615549536253556481281057319061724", "47701011812425668077287473240341661927007137191170", "40852885636114975287834749890724898429029243068412", "16003415704274399312670488918497284793814403571827", "57287944577563372342716930277320216603158179479783", "49220108990979102391837154043068929530296114420878", "61498515260186412817752561109689688132166299250367", "40841611070697818907976661586001975954959639791901", "95595723796989753731687248500078423607637540572498", "04408149421491346731354160535251104645757388865259", "10282494955582149350979023490305357408199404811673", "93769604495302541857871125363197684429641057103499", "66890102324393153857336606335470438266095525299337", "47030576596774478232961441580687137954942661488336", "08195037778942635517205688215206292097964498126441", "87791633249773765634910954415470245103090870102015", "35333366693792043452075343050979114862193356054082", "06898896842510811151345102361362743779797504747329", "24450825170430863143480327447345958884933260286196", "78463563356849817118490379271456012726552713533761", "78711950396953108355520327519979559646389790528120", "94575986156531288935149644068579320620827088360727", "36061500397448432301786235795828458363533415874447", "48568917359133432040799511266285447091271647511548", "44534106070742657538812764646554162478909249338686", "21043037391870354088922403226416274402925094563104", "97476261243459220712648754306324414870458476195724", "52604044814758757251324414540515257131103271668466", "84573869815941678695899301471245756614811117155090", "96563522634213679026311009282558535417479667677768", "48256090263003010009214992414537722576264902905401", "31061421447384501762716559478689798794019540199827", "56211840769374250681058100698759757802342638751552", "02854146029782596246182179951794278535962709428347", "75317548336180250852407146727589494372454382437025", "97681971070744748174588974000482251486669225314960", "73223933426899302571308756936407833831727462828165"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 11633;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> costs = {"22222", "99999", "99999"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> costs = {"111", "911"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> costs = {"01111", "06983"};
    WallGameDiv1* pObj = new WallGameDiv1();
    clock_t start = clock();
    int result = pObj->play(costs);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=15500&pm=12577
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
 
class WallGameDiv1 {
public:
  int play(vector <string>);
};
 
const int inf = (int)1e9;
 
int c[55][55], f[55][55], s[55][55];
int b[55][55][3];
 
int WallGameDiv1::play(vector <string> costs) {
  int n = costs.size(), m = costs[0].length();
  for (int i=0;i<n;i++)
    for (int j=0;j<m;j++) c[i][j] = costs[i][j] - 48;
  for (int i=0;i<n;i++) {
    s[i][0] = 0;
    for (int j=0;j<m;j++) s[i][j+1] = s[i][j]+c[i][j];
  }
  for (int j=0;j<m;j++) f[n-1][j] = c[n-1][j];
  for (int i=n-2;i>=0;i--) {
    for (int j=0;j<m;j++) {
      int ll = 0, rr = (int)1e6;
      while (ll < rr) {
        int mid = (ll+rr+1) >> 1;
        for (int x=j;x>=0;x--)
          for (int y=j;y<m;y++)
            for (int z=0;z<=1;z++) b[x][y][z] = inf;
        b[j][j][0] = b[j][j][1] = c[i][j];
        for (int x=j;x>=0;x--)
          for (int y=j;y<m;y++)
            for (int z=0;z<=1;z++)
              if (b[x][y][z] < inf) {
                int add = (z == 0 ? f[i+1][x] : f[i+1][y]);
                if (b[x][y][z]+add >= mid) {
                  b[x][y][z] = inf;
                  continue;
                }
                if (x > 0) {
                  int ft = b[x][y][z] + (z == 0 ? s[i][x]-s[i][x-1] : s[i][y]-s[i][x-1]);
                  if (ft < b[x-1][y][0]) b[x-1][y][0] = ft;
                }
                if (y < m-1) {
                  int ft = b[x][y][z] + (z == 0 ? s[i][y+2]-s[i][x+1] : s[i][y+2]-s[i][y+1]);
                  if (ft < b[x][y+1][1]) b[x][y+1][1] = ft;
                }
              }
        bool block = (b[0][m-1][0] == inf && b[0][m-1][1] == inf);
        if (block) ll = mid;
        else rr = mid-1;
      }
      f[i][j] = ll;
    }
  }
  int ans = (int)1e9;
  for (int j=0;j<m;j++)
    if (f[0][j] < ans) ans = f[0][j];
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/