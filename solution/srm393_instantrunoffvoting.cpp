/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8607
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

class InstantRunoffVoting {
public:
    int winner(vector<string> voters);
};

int InstantRunoffVoting::winner(vector<string> voters) {
    int ret;
    return ret;
}


int test0() {
    vector<string> voters = {"01", "10", "01", "01", "10"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> voters = {"120", "102", "210", "021", "012"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> voters = {"10", "01"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> voters = {"3120", "3012", "1032", "3120", "2031", "2103", "1230", "1230"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> voters = {"24103", "30412", "32014", "21043", "30412", "32401", "14203", "04123", "30241", "02413", "13042", "01432", "01342", "32401", "24301", "12430", "41023", "02413", "42310", "12043"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> voters = {"04123", "23014", "41203", "14320", "04312", "32104", "20413", "01243", "10432", "42310", "20134", "02143", "31024", "03124", "12043", "32410", "13024", "04132", "12034", "04321"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> voters = {"32104", "41320", "34021", "02431", "40321", "01423", "42103", "43102", "01243", "32410", "01243", "10243", "40312", "01243", "03241", "41302", "20143", "20431", "23041", "43102"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> voters = {"13402", "24310", "12034", "42031", "01432", "21430", "32014", "43210", "20134", "40213", "10432", "12034", "40312", "20341", "40213", "14320", "21034", "42310", "43102", "43021"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> voters = {"13204", "03241", "24301", "30412", "14023", "31420", "32140", "31402", "34012", "10243", "04123", "10432", "21043", "23104", "40231", "20314", "13024", "41023", "10243", "34102"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> voters = {"02314", "02134", "02341", "31024", "21340", "41302", "23041", "12340", "04123", "41320", "03421", "04213", "21304", "24130", "30241", "34210", "20413", "14320", "34021", "01243"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> voters = {"14023", "24013", "40312", "41203", "12430", "02341", "24301", "10432", "24301", "04321", "14203", "43021", "34102", "40213", "04123", "32410", "41320", "23140", "43201", "40321"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> voters = {"41230", "01324", "03412", "02413", "42013", "01342", "43102", "23140", "04123", "30421", "03142", "10243", "23014", "01432", "31402", "12340", "02143", "41032", "43102", "13204"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
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
    vector<string> voters = {"04123", "03124", "03412", "32410", "23140", "10243", "41023", "12430", "34210", "30214", "03421", "32401", "42301", "04213", "21430", "01234", "41320", "12340", "23140", "21043"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> voters = {"12403", "31204", "41230", "13420", "02341", "41023", "04321", "32401", "41203", "13420", "42301", "12340", "02314", "10432", "23041", "41023", "02431", "13420", "31420", "42301"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> voters = {"9132450876", "0916472358", "0379216458", "2345870619", "3910864527", "3578012649", "2189760453", "8465203791", "5768241390", "6541389702"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> voters = {"7128954063", "2376105894", "4685023197", "9325160874", "3761204598", "3079584216", "4863719520", "2861073945", "0654978312", "8345719602"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> voters = {"9704283561", "3128795640", "5846320971", "8134275609", "9840176325", "2397601485", "1907635824", "7682451309", "9347682510", "4038196527"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> voters = {"1702359684", "2809713546", "0564893712", "7348516029", "6872310549", "4682195370", "1453067892", "8609372541", "0385674291", "1532607948"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> voters = {"0371958642", "5049821376", "8203546719", "0658134792", "6570192834", "7089234156", "4958267130", "8306479215", "0832715469", "0659241378"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> voters = {"0649853172", "2146875039", "2671548309", "5897216403", "4719823056", "7945213860", "9021538647", "9286145307", "9176403528", "3709486152"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> voters = {"6783104952", "6185423970", "0368914275", "9560721834", "2149756308", "9231608754", "2140379586", "1496572830", "9738562014", "6420917358"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> voters = {"1308752964", "7196243085", "4305187926", "2365479018", "7962534108", "6841250739", "0196342758", "6185093724", "5130927648", "9506824731"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> voters = {"0378562491", "3946078215", "0751324968", "4917852036", "1847923605", "5321649807", "7851439260", "4206159378", "8754219360", "8016275439"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> voters = {"9064235187", "6023954178", "6192048573", "3251946078", "1053462789", "1095832647", "5670831492", "3197426580", "0942587631", "7683094512"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> voters = {"8307615429", "0295316874", "1435709628", "4789263051", "0967324581", "6439178025", "1427598306", "3987246105", "0957381426", "2198647053", "2738045619", "4978306512", "7821503964", "6407819235", "1846327950", "9543170268", "6042891537", "2510894736", "9826043715", "6192453780", "2691345780", "1638950274", "7239860451", "9387126045", "5309482167", "1072436985", "4529807361", "5369841270", "8714629305", "3460125798", "6415029783", "2951673048", "8675093214", "2631879504", "0629714385", "0723491865", "2945016387", "6317054982", "6714398205", "0563214879", "3654812079", "4873150926", "8912534670", "5103794682", "6794582310", "6243018795", "9206478153", "7215840963", "9802756314", "3849210567"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> voters = {"1076539284", "3284501679", "4236890715", "2614039785", "3061457298", "2986410375", "5872941063", "2597136840", "4286309157", "7985123046", "2587061439", "6193527804", "7125396408", "1507843926", "3209415687", "6019583427", "7198563204", "3794802516", "0629735418", "8051947236", "0824719536", "2149678530", "6183542097", "3871209645", "8249531670", "5012964873", "9657324108", "0856314927", "7965130428", "8406257913", "7430915826", "4530981276", "7192058364", "6908457132", "9875613204", "7421509638", "6291475380", "0168743925", "1264038579", "5296108374", "8314096572", "8715069342", "7534018296", "6175324980", "3726185409", "0498523176", "9320184567", "7654918302", "3491027568", "0164239785"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> voters = {"5492618307", "7628150943", "3694510728", "4321850697", "0863152947", "7980421635", "0937812456", "0629453178", "7210536948", "2873456019", "7835019246", "6013984725", "2095418736", "8453920176", "7980345261", "4291803576", "6140289357", "2064759318", "2498730615", "3169074258", "0853496712", "0891742563", "4985306271", "4736519280", "5103879462", "6375419802", "7638109245", "5284390167", "5976382104", "1078926354", "9170432568", "8761492305", "4173258690", "5342908167", "1782905463", "2536489710", "0951328647", "5264703891", "9215486037", "2397865104", "4510938726", "6428753019", "9615807234", "0674895231", "1364802957", "6723108954", "8475123096", "5043186279", "4321076895", "6375921084"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> voters = {"0791285436", "6340279581", "1356807492", "1530742869", "3517486902", "1475392860", "8629540173", "3167402895", "6718539204", "5493017268", "4765301982", "7354296018", "5681039247", "7458162930", "2659831740", "8473516092", "9052483176", "2869470315", "3204968751", "4056729318", "1453689072", "4513862790", "3216859047", "0593687214", "5280694713", "3249507861", "2874601593", "2618453970", "2397518640", "5430269187", "1259038647", "2673945018", "5193026784", "4208763195", "7914365082", "0968475213", "9316270548", "4059183267", "3468159027", "4397256018", "4937162508", "3257461890", "8425069173", "8721956430", "9420165738", "0316978524", "7126435089", "7831095426", "9460813572", "2630179854"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> voters = {"3865240791", "9531642078", "3795260184", "2948503617", "4163509872", "7825640319", "5708936241", "6579084123", "0573428619", "3795624108", "1053689427", "1673948025", "4368512790", "6359140728", "2179348650", "3912745860", "2541980736", "7653809214", "5180924637", "4763105829", "2419056738", "4301967852", "4325980176", "9164257803", "7893604521", "6530487921", "2304961875", "5089467231", "5341720689", "7439581206", "0257384169", "8041739265", "7386105924", "4918760523", "2495768130", "5482617093", "7612593048", "8916574032", "0873945261", "0743961285", "3947108526", "4137609825", "3209864517", "0463917528", "5628097341", "8534261097", "3658419702", "3897216405", "3781924605", "9234586107"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> voters = {"9685172403", "3624587190", "8923604571", "7962051384", "6345708129", "8479352106", "5869147203", "2360957481", "2153847690", "2984706135", "3170642859", "1093742865", "1974820536", "5670823941", "6841257309", "3964825107", "6239147580", "9243865107", "7804362915", "5632890714", "4975630812", "7236481509", "1820657349", "7485063921", "0187946235", "7421893065", "0254318769", "9051673842", "9283650417", "2948130657", "6318579204", "7935814026", "1967403825", "2683594701", "0274865913", "2794013856", "8907261453", "9256410738", "9428761530", "0731529468", "3542716098", "0598362174", "1607293845", "1264097385", "1742596803", "9637218450", "8236914705", "6028941537", "9173024685", "0213785946"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> voters = {"7613450982", "0321859746", "6971425380", "8157396204", "7680592314", "9342687051", "2406853719", "7453068291", "5260791834", "9845371620", "9430128765", "4579136802", "9871345062", "6528493107", "6945087231", "0264195783", "1352678490", "4723695810", "4028651739", "8035972416", "7825193460", "5649081237", "7983506241", "6950423817", "1237089654", "7248135609", "7513960248", "8469317052", "3264705189", "9481560732", "1306527894", "9251086473", "0583964172", "6791082543", "1725830649", "9281470356", "8795013426", "9106432578", "8215673409", "6321587940", "6820793145", "4057139268", "5109326478", "0513964287", "0215764938", "5412836790", "6192780354", "1547392608", "8546719230", "2093514876"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> voters = {"6085749213", "4270563891", "4576391802", "5938407261", "9734685102", "5318067924", "7364290581", "5142689703", "8697035124", "0721548396", "1365728940", "1982475630", "5396287401", "0182967435", "7461835029", "7654019328", "8674152093", "5061479382", "5896470321", "5192463708", "3857206941", "2039714658", "2159806374", "8193672054", "9187324605", "3452968170", "6035798142", "3921506748", "9452670318", "2387540169", "4107825396", "7249038615", "9186430275", "8235067194", "6954821307", "5130742869", "9248761305", "7018593624", "9407826135", "2415398760", "7103856942", "3572649108", "6270318594", "4078512639", "5047921836", "1367452098", "7820953641", "1628543907", "6143250987", "1792346058"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> voters = {"0974861235", "4205736198", "9852104736", "0532794861", "0924736851", "3597628014", "6034782591", "0187249365", "0217458396", "1496852307", "9314852670", "4817326095", "1925463078", "3720568941", "2975380641", "8415769032", "8731604529", "2563401987", "7639820415", "9126870345", "5096173428", "5427813690", "7964018532", "0359276481", "3508729146", "1689405732", "3695271084", "8571264093", "0456381792", "5829764301", "2614593708", "9304871652", "6813709452", "1984630752", "5297083461", "3819526470", "9387054162", "7562183409", "3806719245", "5920384716", "9108342567", "3876594210", "9405263718", "4531708296", "9384107625", "4563081927", "0379426815", "3015894276", "0471583926", "7951246038"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> voters = {"2651308497", "8273649501", "6709235481", "1437256089", "6317829504", "8694153720", "9623580417", "3065842917", "9781340652", "1964530827", "7698412503", "0312854976", "2175063894", "2713684059", "4097625318", "2086157943", "9302541768", "6075281349", "4832709561", "8479150236", "4017958623", "4925137086", "0874561329", "5489012367", "2986573140", "8392640517", "9642871503", "4956213078", "9423180756", "0367254918", "4289756103", "3861925740", "9837456210", "8493102765", "8204956137", "5982143706", "5497382106", "0956823741", "9025873461", "1025876943", "4360792518", "9562483710", "0597263184", "8196752034", "1870465392", "8672341905", "5084917236", "2643790518", "0743965821", "3416872590"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
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
    vector<string> voters = {"01", "10", "01", "01", "10"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> voters = {"24103", "30412", "32014", "21043", "30412", "32401", "14203", "04123", "30241", "02413", "13042", "01432", "01342", "32401", "24301", "12430", "41023", "02413", "42310", "12043"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> voters = {"10", "01"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> voters = {"0649853172", "2146875039", "2671548309", "5897216403", "4719823056", "7945213860", "9021538647", "9286145307", "9176403528", "3709486152"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> voters = {"0"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> voters = {"3120", "3012", "1032", "3120", "2031", "2103", "1230", "1230"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> voters = {"012", "012", "012", "120", "120", "210"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> voters = {"0123456", "1234506", "2345601", "3214560", "0132456", "6543210", "5432160"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
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
    vector<string> voters = {"0649853172", "2146875039", "2671548309", "5897216403", "4719823056", "7945213860", "9021538647", "9286145307", "9176403528", "3709486152", "0123456789", "3421567890", "9087654321", "1234567890", "1432567890", "2341567890", "8907654321", "8907651234", "2134567890", "1230987654", "1230984567", "1234567890", "2341567890"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> voters = {"0649825317", "2146875039", "2671548309", "5819726403", "4719823056", "7945213860", "9025381647", "9286145307", "9176403528", "3706948152"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> voters = {"0123", "1230", "0123", "2130"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> voters = {"0649853172", "2146875039", "2671548309", "5897216403", "4719823056", "7945213860", "9021538647", "9286145307", "9176403528", "3709486152", "3709486152", "3709486152", "3709486152"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> voters = {"1649853072", "2146875039", "3671548209", "5897216403", "4719823056", "7945213860", "9021538647", "9286145307", "8176403529", "3709486152"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> voters = {"01", "01"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
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
    vector<string> voters = {"210", "210", "102", "012"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> voters = {"102", "201", "021"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> voters = {"012", "102"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> voters = {"0123456789", "9876543210", "9876543210"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> voters = {"3210", "3210", "3210", "2031", "2031", "1032", "1023"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> voters = {"102", "210", "201"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> voters = {"012", "210", "201", "201", "120", "120"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> voters = {"01", "10"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> voters = {"012", "012", "012", "102", "102", "102"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> voters = {"01", "01", "01", "10", "10", "10"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> voters = {"9876543210", "9876543210", "9876543210"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> voters = {"01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> voters = {"10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> voters = {"120", "120", "210", "210"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> voters = {"0", "0", "0", "0", "0"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> voters = {"3465201", "6432051"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> voters = {"0", "0"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> voters = {"0123", "0123", "0123", "0123", "0123", "1203", "1203", "2103", "2103", "3102"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> voters = {"9876543210", "9876543210"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> voters = {"102", "102", "201", "201"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> voters = {"0123", "0123", "0123", "1023", "1023", "2013", "2013"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> voters = {"0231", "0231", "1230", "1230"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> voters = {"01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10", "10"};
    InstantRunoffVoting* pObj = new InstantRunoffVoting();
    clock_t start = clock();
    int result = pObj->winner(voters);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7446789&rd=11127&pm=8607
********************************************************************************
#include<algorithm> 
#include<sstream> 
#include<string> 
#include<vector> 
#include<cmath> 
using namespace std; 
 
#define FOR(i,a,b) for(int i = (a); i < (b); ++i) 
#define REP(i,n) FOR(i,0,n) 
#define FORE(it,x) for(typeof(x.begin()) it=x.begin();it!=x.end();++it) 
#define pb push_back 
#define all(x) (x).begin(),(x).end() 
#define CLEAR(x,with) memset(x,with,sizeof(x)) 
#define sz size() 
typedef long long ll; 
 
struct InstantRunoffVoting  
{ 
  int winner(vector <string> voters)  
  { 
    bool alive[10]; REP(i,10) alive[i] = true; 
    int n = voters.sz, m = voters[0].sz; 
    while(true) 
    { 
      if(count(alive, alive+m, true) == 0) break; 
      int got[10]; CLEAR(got,0); 
      REP(i,n) REP(j,m) if(alive[ voters[i][j]-'0' ]) { ++got[voters[i][j]-'0']; break; } 
      REP(i,m) if(got[i]*2 > n) return i; 
      int mini = 987654321; 
      REP(i,m) if(alive[i]) mini <?= got[i]; 
      REP(i,m) if(got[i] == mini) alive[i] = false; 
    } 
    return -1; 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/