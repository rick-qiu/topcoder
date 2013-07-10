/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8223
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

class RoadConstruction {
public:
    int getExitTime(vector<string> currentLanes);
};

int RoadConstruction::getExitTime(vector<string> currentLanes) {
    int ret;
    return ret;
}


int test0() {
    vector<string> currentLanes = {"AB", "CD", "E"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> currentLanes = {"AH", "D", "BCG", "E", "F"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
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
    vector<string> currentLanes = {"ABC", "DEF"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
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
    vector<string> currentLanes = {"ABEDSCSMAN"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
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
    vector<string> currentLanes = {"AAA", "A", "AAA", "A", "AAD", "A", "AAB"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> currentLanes = {"DEFGHIJK"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> currentLanes = {"PHQGHUMEAYLNLFXFIRCVSCXGGBWKFNQUXWFNFOZVSRTKJPREPG", "GXRPNRVYSTMWCYSYYCQPEVIKEFFMZNIMKKASVWSRENZKYCXFXT", "LSGYPSFAPOOEFXZBCOEJUVPVABOYGPOEYLFPBNPLJVRVIPYAMY", "EHWQNQRQPMXUJJLOOVAOWUXWHMSNCBXCOKSFZKVATXKNLYJYHF", "IXJSWNKKUFNUXXZRZBMNMGQOOKETLYHNKOAUGZQRCIUTEIOJWA", "YYZPVSCMPSAJLFVGUBFAAOVLZYLNTRKCPWSRTESJWHIZCOBZCN", "FWLQIJTVWVXHRCBLVGYLWGBUSBMBORXTLHCSMPXOHGMGNKEUFX", "OTOGBGXPEYANFETCUKEPZSHKLJUGGGEKJQZJENPEVQGXIEPJSR", "ZJAZUJLLCHHBFQMKIMWZOBIWYBXUUNFSKSRSRTEKMQCYZJEEUH", "MSRQCOZIJIPFIONEEPSZRNAVYMMTATBZQSOEMUVNPPPSUACBAZ", "UXMHECTHLEGRPUNKMBPPWEQTGJOPARMOWZQYOXYTJBBHAWYCPR", "JBXPHOOHPKWQDUHRQZHNBNFUVQNQQLRZJPXIOGVLIEXZUZOSRK", "RUSVOJBRZMWZPOWKJILEFRAAMIGPNPUUHGXPQNJWJMWAXXMNSN", "HHLQQRZULTFZOTCJTNZXUGLSSMZCNOCKVFAJFRMXOTHOWKBJZW", "UCWLJFRIMPMYHCHZRIWKBARXBGFCBCEYHJUGIXWTBVTREHBBCP", "XIFBXVFBCGKCFQCKCOTZGKUBMJRMBSZTSSHFROEFWSJRXJHGUZ", "YUPZWWEIQURPIXIQFLUUVEOOWQCUHNEFNJHAIMUCZFSKUIUBUR", "ISWTBRECUYKABFCVKZEZTOIUKUHJZEFCZZZBFKQPQZIKFOBUCH", "THXJGKJELRLPAXAMCEROSWITPTPCCLIFKELJYTIHRCQAYBNEFX", "NXVGZEYYHNGYCRUMPHMECKOTRWOSPOFGHFOZQVLQFXWWKMFXYY", "GMCASZSGOVSOKJGHCWMBMXRMHUYFYQGAJQKCKLZNAYXQKQOYZW", "MYUBZAZCPKHKTKYZIVCUYPURFMBISGEKYRGZVXHPOAMVAFYRAR", "XSVKHTQIHERSIGBHZJZUJXMMYSPNARAEWKEGJCCVHHRJVBJTSQ", "JOOTGPKNFPFYCGFIEOWQRWWWPZSQMETOGEPSPXNVJIUPALYYNM", "KMNUVKLHSECWRACGFMZKGIPFOKJMJQWIQPUOQHIMVFVUZWYVIJ", "GFULLKJUHSJAFBTLKMFQRMYJFJNHHSSQCTYTEAMCJBPRHTNEGY", "IWXGCJWLGRSMEAEARWTVJSJBAOIOJLWHYPNVRUIHOSWKIFYGTY", "HACWYHSGEWZMTGONZLTJHGAUHNIHREQGJFWKJSMTPJHAEFQZAA", "ULRCHJCCYRFVVRIVUYEEGFIVRCYGURQREAKUBNFGUPROQYLOBC", "WQXKZMAUSJGMHCMHGNMPHNQKAMHURKTRFFACLVGRZKKLACLLTE", "OJOMONXRQYJZGINRNNZWACXXAERWUXZRFUSEWJTBOXVYNFHKST", "CENAUMNXFMVZCAUTCCKXAAYZSXTTOBBGQNGVVPJGOJOGLMKXGB", "FCPYPCKQCHBZWRXBZMQRLXVOBTWHXGINFGFRCCLMZNMJUGWWBS", "QFCIHUBSJOLLMSQSGHMCPHELSOTFLBGSFNPCUZSRUPCHYNVZHC", "PQUGRIWNIQXFJPWPXFBLKPNPEELFJMTKUQPZOMWNLMBUPMKTLP", "TNMPSYSGVFPENEMWBORIFSUQHCESKMKHSSMVNONWAFXWHGBIBA", "BVQOPQFOVIUSSQFQWEHTXZUJTLNTXMRJXXWTLGGKYTBIOLYNIL", "QAOJSKKVFXAHHJMBOCLJARINTWCLVXROPBYJZWYYOJUOTHWMLV", "RGLFZZBTUBXUOFFVNCRSWSAZNMOIJOIVVGOBQPNCKWVNHKEBMT", "HVYGKJISUXHATMUUQBHMKNHFXAXQXKJLZZQTSJFAEEFUUJKOLX", "JOQKVFEPVLHVHRWTFUKXFFJPSSWYXLIJJHEVRYXOZBAFPFMOWG", "RGONUATQLAHYGGYLJJHMLTEZLOSRKEUTGTNKNTARJKPXINOVGZ", "THUNWOOXVJJMPSVKNHKWJOPMMLEBKSUCVZQLYQNWCMBVBHRMLO", "WPJBWYVWTGTOQNMICXAPZARKNNXTUUFARZROSQWSMTCJGHECQU", "OSRTJXYAAYKQRXYCRXUWJXNPQJNBKCPMOKALXAPEMVBQLZSVXZ", "KUTAPPWGZPPYZKZCVBNTCVFXSXPJAOXTFHVXXYTGOKRCXAETAU", "QGNMPHWZYIAYABJRQGEPPXYJSTTYZUVLVYBSUXKBMFZVRTNOVI", "ZNPGHOZVAFMSNSNQIVMVUBCWTFSRQTMKNEPBHOWEJAZHKWCMMT", "PIXXXLZQYSXTWWTAIYAXYQLEPRXIBEXXYFVSYGTHCUYYFWPJSF", "YBGLGZMBINTATTNHOTONPYZWOTKGNGUPHPKXEATOWZABSNVQHK"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 550;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> currentLanes = {"FISFRFQGVPMVORPJFZSLZMPJJNEHRYKXJZUBUACCLFKCYZOBG", "TUOXRAJVPRECWGXXPSWCGMMV", "EWMFNQWCUQSCILIQDCIHLUILG"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> currentLanes = {"WTWKKXLCBHQKVCSWJEBKRJLPGFGRATZBSGUVZIFNHYX", "JSJAVWAUXPANNAMXJVZUHNACZYHEPWZOLHUSLRKVW", "NVGZMIIZWUWFZLKTBQXGYYIU", "SJVEZKMESBJLKYERTAHNEXHUQMJICBMUSQ", "KLASOLWJXPTXXEUMZFWYUCPABQSEFFUNQPKFNNBECBBC", "PYJLIBITLLPLXELRKEXTQUVPTTEYHT", "QLBBBVOQOZKYNAYY", "BAQMYJHZXNSIYFSEXWBIOEWQVQRTCLPQMVJIFVGY", "KGOTZJMNZQTMRPNEVNMTHJITSSPAQNJRO", "JWPYATMLEYQSVKPAMSVBMVXRLLIVFEKJIGAVYXJVEQV", "BACUIGAIPYHBBXIPBZNCWHRBLIRI", "XODPTQ", "WEAAFJEQIOZPYFAUUQMVHXKMNXMSYAMPTLZ", "NOTLSLWUHTFQJRRWBWHMQHZKHKCRFVB", "IYI", "VFVPZH", "UJABTQWWTBKOGKEMHIBYXRNXSXRZLETBQEX", "RQOIERNAPLQYJPQOUBVJSEBALWNKSVL", "IZFPIRWYCZTWZZVEWXOTAKUKPEUPKCZLHWUSKNEVCPL", "KLPJ", "PFCYQTRCVVVTRFFVPEKKQMCUPRYJAUTEUVCZVICTH", "XSXCLPRGLWXFAIGAYRUE", "CUFIAMHTKBXOTIRXXGVZQ", "EYROVFICHQNIVFJZAUQFFTGMOPSRGPUGXTU", "LCVSPIHAZRSSFSZW", "BQMURWMX", "BHUMRGJ", "MVNKYRT", "SJVWZXSSQXNJOMUYJNJUWRSYXWQYYXCSZPOKLWJRLTBSCI", "PIWLAQIGESJSQHSJLRGLMWANRXRFN", "AKZTGJH", "AUNFQJVXIOHNJQRJ", "HYMOVWGEFHJESVHTIZIOJLJPMOXBYUYOP", "JKZTVJGKWXKEWPZHBJSUTHSYOEFJGWWYE", "ZLUHMGABBSQRHCRTXMJVCAX", "SUFAHYYAYZKHUHJRJSVOQHTYWPBSZXSBZIYRVGQMLUNWSCPI", "ZFCBTSEPLKGWFKHROUOYSRWMQOJAHYQMFEVSCOMRYHGM", "XUKWYZ", "PRSKWGXULSUCKBSEPJEISZSGCEZWAPQRVLWIGROVJ", "ZXXPHQLSRZIHMGZRIOQRQETKZFBLJIEMSFZ", "HZFNWYWMXXGPYL", "AXGLMTBIYLBHCWHLSYOYHGMGOPPRZAXQMOMSYHGAGIUPJQ", "ZXTHTOPOTMITNQWTOETONXWZGHUTIFKLGKLRNUWKMS", "QCPUIVAHQATMSCKMAALKICSNXUCOVTYKRXAWZAJXWXQ", "NHLTTXSKNXTEZNJSQTFBCCFQMWHBVSSII", "VIJSUXIICAAHMKWYWTTJZPPKWLBMJAHTPUTIEBPBBMUEGYR", "LTHX", "GJPRWVHSH", "YAVQYECZTOZOABNANHRRBNOXEU"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 312;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> currentLanes = {"OIUOZXQTIHWAUROQRQWCVLXZIPOIISPQNZOMCWV", "PTGRGFNYYTKWWQQTMIUUYVGAIHFSHCCXHUUYYHTGGLFCI", "BUTOEUNFHAXPHBSYWZTPWJNGJNCPXRJVB", "CCEFKBEMGSYMZMMKWEHFKRUQBYVECMPESR", "MXLLUBRYYES", "QLZM", "EWQNKQITXGIIGQUSKWTCZNLTERXBLTZYYZVAHNKIXJWZZT", "JPQSUOWKVFCCOCKVRJBFRJPCGJRWNPOSRJGRQRVQTV", "PAZHLTJQVCCLPEZT", "JPYNZFROTQPOXMWHHWEWNVCBVKUZIFIFRTWQQ", "OJUEQBNSKWZEEWZKAOJURSQGSCZVHHU", "ZUMIGOFHWBKKFLUWZKCTKAGXKSMFAUWI", "SJLSOJTRXHWMHLVBYPECJEIWWSTNEUIQUBPGUGWG", "MIKWICKILSNPQSVMTERFBLHWBAFBGA", "CSFIJYLBIIMOFGXEIRPBTYWQZAPKKCAFCOMVNTMHZXLEFP", "YEBEOEQZ", "BHYCWMFYAQQIANNYHQOUIZVEAVGZJWOBLSGW", "KVJLNI", "QCWVZXTCTHYNMUXQKWWMTFISGGLGCOXPIP", "TBAMRYKBOKMWGSPQKRZYJCHZTMIEPAGWHROQK", "WUBCIHPQWAQZXUGK", "AKVLAVKSWFZSBVQIHTBC", "EYTMPPHKUHSXORPUFWHJ", "UTKSSLHLRXLYXVKO", "AGGMP", "GZVBAFAZJOHQSSWTORCKQAXSREHNRLYJIWTMHGLKOZFKMM", "TY", "OXHFKXOPVYBJZOXHZUBNTOAMZOTTCJTUEGMP", "KCBBDCKJQTEBICHZNPPRQ", "SWBHOYNCS"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 724;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> currentLanes = {"GBFVIOCFWXWRNL", "FBFHVYXZUKJWOCYHZQJZHTBRRRLLKTCHFNCTPI", "NAWONYWWVUABUQCIMCNLHQOEMAKMUNMAXI", "MKEYWCOFQBKMZOIZGQI", "ZAYIXRYWSOVHZTKGZSKWPTKQCEXRNNXSKYWNQIZLZKLNIS", "AMQAZHL", "NVILTK", "IAFMEICGGUZXHRJZZHERUSWAVNVSLONOASRURNLKL", "KFZTAGIENATJZWXCLK", "ULNCAQPTONEQLNBTOBMIVAZXZMCOJHISWKAXIAGTUTAFR", "VPPHURAAAIXZTWYRUUMQAJEPVVCVOIWMTPBNMQUIOPI", "PUWCZAPZGHAVVIYIROJNOLSOWRMVVJIQSWRICMZ", "XAVQAMNFHWF", "EOHSKKEDUTX", "IBHPULNLWXQWWZGJGEQWAPBHLP", "O", "MNNTPOUAHGXJHZJBEPLTTRIABWUCRJMBVBOZVMXOB", "TKHQSQCHLHT", "OFUIKWAFKCOWUUNTFHPKEYHOKQUWQVWTTHHHUGJZMF", "UINIPBNCIZOCKAAALLJREQT", "HUBLPRZLSRW", "OCCS", "UTWQZSQT", "JVCWNPFLRLUKIAOHQJHRAGLGRIYKLKFRRXJ", "T", "WRSXGYWFNHCBKPMESUPMTRVIPFBKTBWZFAH", "EVNHXBRHHFOBGYWCVHKTOXQTEKIWWURZBLMLLFIBVEM", "NNLXUBYKVVRGKTRERPTISIZXHRE", "NXQUEZXKUGROOHRHUIGVHTJHYEZKYH", "FXWGPRPSEACCXKWVIXVFHQFAWKFJPYEEVGGATFIEKIXE", "RFCPXSCJKCFGQMYHJMJTIMSPIZHWZIZCYUCEG", "MMBGYGFVTQVZQATXLGIBYZZKIAJXMBHMKQLW", "QNGHLVLZGPPXOOEOQXPPBPMBLXNK", "OFMNI", "MJCAFCU", "VCUETERQPJJWAKNKXTLZQFL"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 363;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> currentLanes = {"XGKFYLNUKBIYSPLKHJUCFUWOHZVPHJBJYOVLNBFRK", "BEMWYTFJYNQMGZAGBKWEKKOUXCYNKHTOSFYTLUCENT", "ILFULVRXLONVK", "ZECXEPKMZZGXLUAHMJYECSLJESCPJI", "VPAUVKXGLLISAAMBOVJKQRKORJFNYGHHHPTZIFAWFTZ", "GEMNHPQYICTMO", "FPCVKCAOAKJACQAUZ", "OWZSFQHKPLFBYZMNIMLXMJYAXYJNECXSJJBHIQNVOCENQMWIL", "XZOQFOTPIKPQUM", "MIKPPZHHFQSGBXIISYZWNHXYFVYFMPWOMCIUCNYNGCNFJITPP", "YMXIISNEBPYWSGQSXJPLWZFMJOOPYYIFVKMWWPGPLJEAW", "VAPIHOXUUFFBRW", "PEVCOQRGRQWZHIBNORKHZMLBZFDXUNRK", "IBVPSZZNOPFGAXZGFLTLSXBTUMILOCLTGCOZGTZIUFUZ", "MXEEKWNYSBICRFXIOGCSEOZPSCRHJOTYCZCWMBAAOLSVU", "PY", "ONMWAJGXZGYZAOVENFVOCIKQJTXGVENK", "PPWWPLHXTGYBVMAJEYFAXEGSEIJIK", "MUC", "AAIOISSISIYPPNZUBPTSAVESZSIPPQMOTJHKUNVQZB", "ATNEFULGEXKTRMH", "AP", "W", "TFVOVUJIUWBMIB", "UCTTMRVZNJ", "CHJWZWMOZECRZNJKFRVKRM", "WROAOCQPKTLMWXWTNUAMQELRWBGBIJILNHIIULLTOV"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 423;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> currentLanes = {"WLPBHYFFHBAVHFUAHLINJFPEKXGLIX", "AXXTOLHGLVWXKYVULCYJEFLL", "QZHLTMGTUJCUUGNROTL", "TCPBNYFHEJEGCMFPTQM", "EGHMFBMVKLSQFUBV", "CTEPVMLJOHZXXOOLNVLAYG", "OKQAUPTYVJAFZZKQTAXJLRBRUKKKIGJMXQR", "AZLPEVPEZPBWSHVPCKLQGIVLQPIRQVWQQUYXPIXQIREUQAMF", "SVVNTGUXESIRNWWTQKOZFPKUULIFZPOHCGUBKUREHRQBBXAJEF", "FHKZ", "PKAPDSZYSPAAOXRA", "JOTJUFSTURTJHUPETSGRZUIGUSNWL", "RVFNKKMSBUHVHFQ", "VTNLEWFQUUHTAINKEBBVZHTQBKBMVHBSNJBTVJTQNBCHIWFUQL", "SMXVFJTVQUITIVYHZPXC", "JWIKFATCANCHXSSJLUHLYOEBCG", "SQFZXXWGLIUEJOBCFPVNYRRPKEGEQPVL", "XEEOCMERJMZIUTSQQOZVEJNRTI", "VNJEPFQSMVSTMMWW", "QKNNRMQMJCCPAOWAZFEURGPBFRYEQJRLTMYMHYS", "I", "WUOHFEREBEACAZUVJOXYIPMSGUFJIWLCFYW", "TEYYQHXWJHIUGHYXYOXBSCEFTRQELXFVCFBBJJYFSVKVSAPS", "AKGVHCFMCEZTGJCMHXLHASQKAUQLNFHGGTAGRNFFMNPINW", "EX", "QXIS", "FNHJZQVOXKUKYL", "CRUPMIBACPJZSNACLMNUQNBI", "ZLUJQVNFJXXVKCZFKZZJQNAQPOHYGJSJTAKZRSOSYQHQUH", "JCJYUGTEOGF", "RKXIYQUFOTIAJMWHYILTHMOEVLWLRXP", "PZHSVBFZVTVHWYCFZNMAO", "AFSYVYRQPIZTEUOXGTHFXSMXJRWPSURSGWTHHILGHZFZAXATK", "HYHQZFIMSRUEECXKQKRULMZGTNHMIVNNKCLGARYG", "QHLTRSTHIZYQAZFNOVKTQCOTCHCOLIN", "IYTYMRJSCYOEIVYHPHLJZHEZOHMIURCPBLVWA", "JIQUGTA", "QMEMJLHGO", "PR", "RTYMKKTBNOXWTTGEE"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 217;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> currentLanes = {"HCZTCTYP", "MDQSUYVKKJOPLMZCAKPJVOZIMHXXQHUIQE", "LNGWGOOOUPNEKSGPMHHAQBSQRFPRSYKHBUTSNUWJPP"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> currentLanes = {"BJGSYFOECQQNLEMKIMIPECEHLBTMBWNKX", "MECLSSHVKMYWJXESHOIHMLGVXILJVWLLFPNJZYWCPAMEVWTYG", "PH", "FUB", "TN", "NPHBYTWOCLRJPRSEQWRWSVYNCGFRA", "ZAOGGXWWBTJQUJRMCPOMJRYLEHUFHWKHZKTNKYTG", "PMMGVXJC", "JGZU", "WQQSLZCSFOJSWRQCNBQYXAAGIBPVTXONPEAS", "NROHUVOGLXHSPRNGSOQJFQTEXYRWIZZOEOWAQEZLMWAFCOZV", "CIEWGKEKFGRCYVZSA", "PSZOBRIXWXKPICLQLJTKVN", "IMPKYEBCWLFKFFRLZZMKVMHNLCIVWH", "Z", "ZRBXJCRTUVTXFKIX", "OAFYESYVIZVOZSQORQMQLESIXRNERZOOWR", "WPMIBHHYFFUVKOUKWJCVXQGLSCHJAGQUEHPNHKYCPM", "TGLUHRBEFJJF", "TKXDBNVMWSYXHGSCZHYJGFGNWFPTLKH", "EKHJNCYLCQMS", "Y", "HWVAEQJKZMHIYLXJO", "NSCGHBTUSWZUMSQOYKIIFWFXYAAAYMOIVFHJLRWYAX", "WGEUR", "RNBERAZSXTKAQUEHJFCEWCTBFJTPQLJH", "HJOBMARGUQWSOKLZSCSFACXFZXFJQOVERSCJZBKMZNOSI", "HTYAVOXHTAPYEKTUATPRW", "KXZCZNF", "IUEHUWYMTXRNKLSMUSKVUTKFIUBZYBLWMP", "RMJSPXYWXERFTZLKORIEBSUPCPXCJWKUVEERENLAI"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 396;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> currentLanes = {"ICYZALWUIUZTEYCTMUIFE", "YGAIAIOIIEBYWRGRTXVKOCSA", "HFCILQJOEVAJNJTTKNRSPRTKRLKJAPYMUZRPHZLCEPAYT", "AVEOPSZRNKVN", "HRJSTZFLVYAHORKTKMGYCOUIERTLP", "JCSXQLGYGLMVLYQXDXIPVW", "QLNKAEQMARVXUMKRNJCOKVFKTQJ"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 164;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> currentLanes = {"BIVBXRNSAQWXTDFTQSNPAVYTOPJPVYQXKSUVZWZTJRWOVTTLN", "Z", "QQIAUAPWKCZX", "XOPENEUXFLGBWJMHJGUZPEUFEIMOZYFRQMFO", "ISSCCRIFWQBHXYEHKTUS", "GZXLAEYKEXQGQOEVJTFRAMUQGBNRSMBXRVBTFG", "OWFFCTUJTZQWZGGTLBHROPKWKBBWVNAKWVVY", "XCZOZQIWORVPWKOQMQHCALYZVQNKC", "EKJQZVUESWQKNZPYVY", "KHSOICMHCZOHEFNASLXWXLLXLEWTZUWBSUVSENEIQ", "HNEZOJKXHORYESUGH", "JCKQJFGNROIZPYFMLQLWQIOCWFYGKIVBUJFINZ", "HCEJCJOJONHGUSTQJFNEC", "LOCMFHPZX", "GFPMUSCRLURENNLQKWHHYIPQZEVBYKTBVTPWVTTG", "CAJYLQVUIZFSOAYXZILJZEGBLCATMVEFQRZ", "WKTNPBBZRWLPHLGYWOFNZX", "LXVKHJYALHVVPAANGONLXHLSXSHHTIFXICKOBIX", "BUZVNGQIAGGCXFGRJMARWUPA", "BNQGUBEWKGWGTOCBLXJECCGQHBCZIBHQUFQQX", "LLVMTZHFMBEZPLHQAKBMMVAFQYXJYEXSSWBJIOUYMHLZCLTJ", "OBFUOIWUBGEIPMVKHOZHKUCOMLG", "TLVEINNCAIKNSUGJQCCASXAZCRTV", "LKFV", "EZAZ", "CSCTLEGE", "LLTVKZQOWGOLJPSYQNCSJSCXXYRGHRWPQINXMR", "XPPQUNVKWXRYKXTLXYPPFMAJFHQYUWTIGBJTMQMLT", "QZGCAIWSWFYRYHCWWIARUHIIBUJOPGRQNPIUGKQTESOJACQHN", "AGN", "XESFRF", "EFAABRAQEELKPKECV", "SWELPJMMBPUPZVTVJXYKNCUGGHONUCWEGV", "JZBWKBEVKGWUBTJVTOQOTH", "GTROLGJMFUB", "ZPNHJAQWOTZQBLHMRF", "FGYKZMUC", "WPYJVCTVFAMCGLTMJTMRCJIVHSYTNWMQQJVMOHFYESQXV", "JGFVGYMHLWXLOZMCQMVHTCEXAMEYKVIXAQVSSWWOEKLQ", "NAFBCFNHWRHKJCSXOHVRBNLBLSEENUBKX", "ORT"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> currentLanes = {"CMCVOVRS", "RCOPNNPKUNKKCPOENVPKVYGUNPA", "OUJVIRELEHLGECTNAZVQPSOUUBCPYFIKGQ", "UFVQQEVC", "CJPMJHPUACSIASPTSKQYHITAUZFABLPQLKUKAHMLIVZA", "ROTLQIUOEEYKIQZA", "FAVZZRFRZZ", "MIYZVOBXUOJORAWURHJOPPNNC", "EHRULPGKOZUYWMOBCLBOFBJEJAZSRULVQT", "MMEMHQPYIOWMNLQAE", "ZSIOTPXJWOCJEUMCJQSZRRRUGIMNJBJALQLR", "EZJFXCHWXONZMNJVLRJXRXWKUOOERCTEEQVLRWAMNKY", "JSXPFLZEHBGKVYPXFSMQHIBN", "JTGRKPFERAYXZNPGKSFPJ", "BICQFQMFSTQHPFM", "PMF", "CCCMOLQJQGWJOFNUQNPMHVKZEBNLIGKJFSWC", "WCUJWHEPBSGTFFKBYKEUHNFZNGKPMVQTHEJJRBZHRCGGOEWV", "XBWYSZBL", "GPWJPLTJFRQCO", "QXYLUTTLWHTZASNQEOY", "BXKIQMAJAGFHZZFBVFUYURLVURNWRAMCAUNWUGTUESHXMG", "DSRMCIFBVRASUCUVIVOWLZIVLIICZPUSSWAFKENWEMOC", "MLMSLEBFIIARGFMUABIZMYQPTHMZEIEGQCJTSJHQKMV", "ZEA", "KJVMZGRXOKCHGOALGUQCNQYROKQMJSZJWS", "GCOFGLCQGNBYPQQICLZXSQBJWIPLOXERKLGBXGOG", "WYUNRNUMFOLBALEZROKNKJ", "WRWEBGELZBGI", "SCWTS", "XXZKGHSKGEXLEV", "XNYQVTYJSLLQKEHTLIAUY"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 429;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> currentLanes = {"MFIEJRQNRNAZCRFHPBJMRFBYQ", "HABALHTIGPQMWFONTEPRCHWEQOHSPJGVLZMJBMW", "OILEJRPKSBXEESTGPSMNMALPUSWIBUBAQVOTC", "YTBTUZT", "SYSJRVRWGIXZHXWHIUHVQTK", "PQZYYHHTXMJFMQDFWZJFQVBENLERLKYAWOLV", "TYZGEWXCCH"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 155;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> currentLanes = {"GHBBA", "CUEJVMWGSFFVOWLRYINXFIWFHTLYTYGQKX", "WVRKCOYTXKCWEAGYMHRPYQUIMWRBVEZZVVJPGIHCYFQZVA", "TFYEMFQVYNBLRQHVAPGYSGGXORKVMVQEXPJF", "VPIFYITTGGSYJBVOLBMCGBRRVKUPTANLZOSCTFNYSZKLRNZRK", "XYJPWWMINHPLXGXWULGXHLMSBZRQUAJUAXP", "PS", "WIWXXVIPOUXTLKQWWOW", "QEATQBMMILPOXBIPWWEGHTFIQJQKBNJHXKUNEB", "GRIZKEKGERQQLYYFE", "OYKMVAYQBNKSTMEFRMTWK", "LNONCHIGMTFBOURZHMFFFSRCBZFBEOSTFVSKREBTL", "HZKRGHTSGBBHLSICUTFMMJOUTFVEXCZSCHYTBC", "KLIWCXKGOQVUFYOGVFRNYMOPFW", "NFUZEIHD"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 358;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> currentLanes = {"SPRGGWYAFAWQGQBTGFFCEGTPCYBQVRQUSQSYYM", "PEIBGXFF", "OPFY", "RMQHUCGOMIUXEMXBZYSLVLITWUBNSPBME", "WHGPMPRKCYFXKMTUHEVOIXRWLMX", "GCNOY", "MD", "OVRTEPQTIBVTHMPOAQYQRXNVKIYAVLOYEMC", "CFCPYUWKZEBCJAESBVQQIJQLGJYCJPKPXFL", "EONIYVQVURIAQMSRTFGWTPE", "UNUGEAJGZSJEWSQRMJZSSBXJVOTJVJQCFQPTBZGKETQK", "TTRHYUBKEWFEKRCIHHXJEIGUTWIGBBXRBWMBRMBVGAO", "LVJYYCTCOCKMGZVARPFOBGMHPAOJOIQPQTXTUCROR", "SMGTXCFZLBJBIPFIMUNEZPQAQJA", "IXVWOQYJVXKHCQPQIABUBQQOFEHHJ", "ZYQKTMKAPSPB", "YKOYLPNZOIPZWMKRBHNTKVPELORQCJKQZZPINOQLUIBJG", "QQLFEWIOAMGMRCEMOAXVUFYQYPCHHGFMIZ", "CKLYHBPJJZRRUGOFLUIOIVOVXMRAWZSWPFNCNFYTMCFVWNRMFZ"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> currentLanes = {"OLTVNBMVWTHJSVHBXSEWQYCKWEXZPMIEXGRJXJMWBQYUIP", "ARRBPHNZWKBCLG", "VOCYUZUTZYPIROCYYUCCLQZCXTAWHXKHALPUKJRM", "SXOCKRAAUACXKPMRFLSPLQKEW", "QJFTFWAHGQOHKQNKTTIQFYRHSGEUEIVKRNEZU", "CIR", "FQXOZFCUHCNSCQKCJBCHVRSPZOTK", "BIWWYGOWWQHNZFJQHFGIMWJGRJVQSPOOSLAQ", "XZEHZEGKWUTIYPZVVZTURGOXVAAHGUIGPSG", "HABNQBWTQMBSMBFZTH", "UMQUOWLNOVU", "OIMMQSZMSRZQPMACVHINJJFYWRWSAGMVYQHTQWFYIAI", "TVH", "ZVROOVJFTEGSKJRJ", "NGLSSHITXZGFWAWLYZGKXYSPEKADM", "QKXJFLKJWNWWFZINWTXSCJBPAWNHBSKILHS", "USLMCRFIPQ", "B", "BFGCQYXEJHGAHXWJMSKGAPLC", "JLTQTROZAMUINYSTPKLZLIVFHVSJTKZMNKABBALE"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 410;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> currentLanes = {"PZHZTQ", "VNSJBJULUSJTYYNQGPYSVALZ", "FEGA", "FCHGKGXAPVWBNUH", "MEAHSCSNSIIMB", "TJSTPVRJU", "SIKVWYRI", "UBDBBGWABF", "RWMOHSCFWYGAVZJAOXRILPOMOISJ", "SWFYYNVLQRMHJCSZFRZPSFCCTAYVFICQBEBA"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> currentLanes = {"EWJYNEZRXMFQYWOHWHRGV", "ZCVSFVHPVSNLCWNNAEFGENZGLNXHOM", "S", "GNQHQGXATPXWLSXUFANNEBAVSPETV", "C", "JMUTKXZYBNIEHUESBLHLPXNPOYMJEEBHJHTJ", "FJKHAWWTK", "UWTZEFPXPBRXFUTVBUUFJVGZPFSCRZSWP", "BZVNJAKGVQXHGKASGYRKPCZGBHHEVOOKFPEQKOHKTEV", "NORJBEZAWPYZAUWUXQLJWJRI", "AQSJRQJ", "OAXIUSXHARYEVOZ", "QGQBTEQMPPCIIGZFVGQVZEEMWWAZSTQOCWVNTNAQYBCFRM", "ZRSL", "EXUPSXUHACPTTYFAQWCGPWVNKRVK", "OFGBBGPOXJUUYYCKITF", "RCLZMSHGHTLFSPJHCGFASVWJGPLBQZJBBLLFHN", "ECBJSNTZZIOXAUWZKJZHZF", "SVWYXGHQILWNCNKIJCAPBYQUXVEJECIZVVIZTCB", "OQJHVEIGVEKKFKZNCNKYVOGUWPIIKTAJ", "JNTSGI", "CRPWINBUMDKTIZKXNRSKQBVAPLU", "LBEGRHPT", "WPIGFRCMGZJEIBTERRWLCECZO", "VIWLPFIBYANRAAHOAWOMXZORZGVKTIAZLZ", "NKMWBCRUJPZQSGQLAOMTK"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 495;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> currentLanes = {"FSEIEXVJVWWKASYMWIAMM", "EMPNJQCAELFYY", "PYMRGUJZATFS", "HTNIWLWSFWYIJFZSHTEPEJVTZNHVPFHATICQJE", "FYHNIZHVMUGGAZMNUPBPKMSZBNOFAJLJBROERTESEFXNIPPEW", "XVKZNRLUZLWFHLMWUMCLZYSTOXJRSOQFW", "UE", "QFRNCFKPYSQLHLANROCCWZLI", "UMOYYOKHAOKILPE", "MNQYGSFJNYUCT", "FZB", "TINMZBKJYLQWJI", "MFKOFJJJJRJUUURRYCHYIVIFYAXLHWABBSWJYSEJW", "WZSLXVYIL", "LPGQLAKKNFAOYZQRQIVMEBURF", "KBKRXWP", "EFAUCLTZWSXZIMWLHFECVIFLJZUSPRO", "QKNJXFMZMHBZFPQICSBRLPRBIRVSLYHRSEHXZUENMSPAKE", "ARM", "LFFBPNSHTJSBIAVEXUURSPATTALNFBQZRONM", "WGPBEPEUHG", "JBVNAXRHRVUWPTSBZAKOKKPATUTBJEVV", "JOQR", "MAQVJQKQWHAPAHWEXTJGXWTCKLKAOXFQ", "AYCRO", "S", "TLZTHUJQUPNRRKAKLCXGCGTFOXKPJMRCIXNSOLJZXH", "PXLLZWWSMZTOLXGLQTLMCJVRQLOHVZXWAI", "JWIVMNVQJBZKQFJJHWECXFCOESKFKACHWQSQ", "XMUNCWIREGVULRWLZWHIFHNQUBWBWTCYXWUJMJQHBJMJYFVT", "MVWHQZJQRFBFXXGMFKWMLP", "KPRLTGXGIBTAFVIRJMSSZGABVXILMGQA", "LXFIMFZXXAYWMVDKPWX", "ZIONEMYRBV", "WPGWMOOQRLNTGRRTZHZ", "OLMCGVRUNCMAWFLYQRTBBOHY", "IGGAVYTLBRRBBLYGYEHEFIHVFEWLI", "PQROMVUTBXUJQYYOKCJGBECATMJVMAJKPVUNLGCBNWW", "MLQTZZRBUOIWQQYPFIIYZUROCACWEP", "EJXXFVJEGLKCTGAVRYGKJNHZQNXNTT"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 759;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> currentLanes = {"IOGBJMVIVG", "JZQXVKGQYYGMJUXMVGRRPSMNRUICLCIPOMCSIJVJVDEVWRH", "MRCS", "RUCSSKGXBOTWUXHBXVSVANSEWRNFWNSZWGUGNUQFBKOOQ"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> currentLanes = {"PUFJLHOBWXAYSONQGBNPZLERQOOVEIBTUAKBMUZAQV", "OUHHENOWZYXEZBQ", "QPGNHOBUWBZBFTZRAINJRUUCOCIGRAJYFAAZGAIGRNBCQJ", "WYVEFLCLGTEOSBNBFVUTGHCJEKKNLSCTWPOPABJPLIW", "KBNGPZBBDOMKCJZLQUOW"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 89;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> currentLanes = {"IGPHKVEXBSZTRINTJAPPSXGTYKUQATMJCRVBSA", "ZLVZTAWFOVJKFEOXKYKADBCSZGCOVKQSNHGCGBAIOSRKHER", "HTQNLYWPYVIQRFRGEMKOGQVQEHRCVRKMAPQVB"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> currentLanes = {"HMTTYQQQAYGTWRXUNNUGTKYFG", "SMSKSCINMQJLGCCFNFKGPHXBABRGLOUYQPRLRNQWTOTEIGEO", "FWFQCBYLQKBYX", "OFGLFMJXBMTHZBOOXO", "DXRBNB", "WHGEHLCIMXUFH"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> currentLanes = {"FVMJYJNOA", "TCYRBZZCY", "JBUSMVCMJOEKRLZVNG", "HSFTCZZZLHOJLCEKTMECJJTANFJJBAZSVOPQHEOUJETH", "MGWMVGPXUTVCCEPMNOQSGYLGJNLBHAJ", "GVOHTWRVFYMYBQNXZGSFRRJEXWKKSBNMETGLMNKLUVNXBLZ", "KYSMYZVLVN", "KIYCZTMIVAACEVFUABUXWYMXIWTAWLCKMPATHUAORSGAPJ", "LMFBIZMVBXYUVGMGCBUTUCZ", "UGOFGWKLEOUXCATYEWURSBVOBGIQQIMILVPWTYTNBSBZ", "MBPVBQXQKRDQNQZSBXRCBWFBRWQERIMX", "BWPANFHWHP", "A", "IPCFHVTHCRQRXRPFKCTIJG", "KPQSKWWOIRIPGXYORHTICWGSOTNIGGIVZALJ", "QLXOSQZMYNMHEMHWPPVNWNW", "HUZCQXMKHGF", "JGBPOOHRMTAXRYKRZQXFCT", "HJPXCQW", "WCFZNZRGKKOLEEJQFPGF", "VACGTXYQQIQQYFCVOFMAFZNTOSJKIROLOIVOQISBZIMRY", "KECQZLYEMSSSQMIVPBYWESONNVULTKJJ", "THQI", "BNTCVCZVJKUETXCKNHXRFZQSXPPPSEWXWNUE", "OVZYHQFJXQMZVKWMOGPFOCENYWXGEACXRWEPIIQKXRPVRCF", "NUSUWECJJLCXPMQ", "LAUCCEFEEHUQTJQWZPHIWOSEWP", "CQTMFXOBKHXGKZHTIQTXGIOSGEEQ", "BCZPBATTYUVIXJ", "XVI", "PWESKZAWJZFJHHFSCROMEHNCPBPMIVEZZHKLQXAPLW"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 279;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> currentLanes = {"MYCKNBUZGGFKOQREZGCTQIQOFQFQTSSFWUQBYSRTFW", "OYQEIUMVEFMN", "GXCZRUUNAQXKFXINHSOUIKQWHZBUKAUPZUJROOLAULKABPO", "PSTYPAVKHVWNVEMHMCZBAVOPEMTLPSHWWUYQHQVAXXEQWUOUOX", "YPPKQACGBPLSNP", "JGSQKPPXZZYORYLRSPVYOENVPXNUHK", "ZYFUMMMZY", "MYTKYXFOMSSQGDWMUQSWIL", "JNIRUOGVSA", "ZLRVOQLTYJTHYUIS", "VCYTZYWLWBZPGVUNXNVPJ"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 231;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> currentLanes = {"JAWJBXPUHBQWUXKKFSUVRTGJTPPHCSWIILCJTM", "F", "ROUROWZSYSGCRWTSWNNBNTRFMBNWGS", "JXXFPMTBOYUPRARCJPCPLFTIQRZ", "NUVESXXKSEGKSEFXMUOPWRKVE", "ZEYCQDXLLNNBFNONUSHMV"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> currentLanes = {"YKYISJHHVSZHJPFS", "WBOLZUMMWRHYLYJLBUWXYWX", "QSJBCXQNSBUJWVE", "QNVIZAKOZKSCFYKPVYLK", "FCEJBNI", "JYCJNPPSAV", "SEAEYRQDNBUCWXGLPXXRUUQETPXO", "BJNRZOFAFPCSXAX", "UOPBZETSUCQZZFFSKOKROSZVJZTRQGTLZAPBVO", "P", "LNNQXARGFXVUQJOYRVEUQNN", "MEEXBAE", "CI", "VMMHZTTLFUROUJREGCEYRAGQQBRSANMNHIG", "XYGLMFVGLXOLYMFLMKNANRZPZUVEJIEWSB", "KBUZEWNOSZAJZXXNEVPUIKXFVFTCYPGZYIFWJENZSBOYBVQAU", "PWEUSEHRPM", "ZBXBRQOAAXWKLOUWFMSZMGERSZCHAOEEBCVYA", "GAJTNT", "UJKUIXZVWRTZLNQPZAGHSBJWZCFGASMUOHHOHSYUYZPYLVPRNF", "QMTLTFAEGZIEH", "WKJ", "CUEVZNWRCNUHKMQLFYBGHLXWM", "IHVPHBA"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> currentLanes = {"E", "CZXMIEMCAQPOILYOKMNTFZPNYEFBPU", "SFANJAHRJPSHXUPMTEFOYMGPGUOUKJVPUIHIJT", "COUHPTXJQSXOORUUJIXYMEEWMMABRRMY", "UFWBECGFVLXETW", "XIIBGVHRGUZMFMPVTPBOHVL", "MIOVRIWKBHBY", "VEBYERLKQQBASQGXNVFHBXYETA", "RLHHFHETLVCZFKPFKHWGRKIBXGWLOHBLNQCVOVTGI", "YTKLP", "NPHBWYOS", "MWHSJRQPRXNTMLQYLK", "NJGCRBIOYHOBNXPWBPBHLNNPEGBEOIIVALOFW", "TGAJHRGPFGQBURVYYKUJNUGJAFUTWPLPEFBRKRZEE", "TLFBCVCOWWZTVHZZAXWUYAQBR", "ZRCYAWWSXHGEJMMUNOLBV", "ICIOEHEDXMIWVPILVOVGSLWOPGBVTVVP", "ULFMUMSN", "ISTGJOJUBPMGYMWJLCOBG", "XWTCHYOBSJNCHOGOARHVXTATCJFPNGSENBVAYHB", "ECJJITPILYPIUUEWRGOBYXJKLULFFPCIPYPMCRJKGIREZNUQ", "QCIBNBKEGXHALLBBEEMPAWCXUQGLFKXWYXUALA", "YIUCJVGVVKYSXGBNMNGYJVV"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 381;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> currentLanes = {"KTYBJRKXMCWAFULL", "UOYCNHOFISJNNNXWNUUKKHGVWLLYJPVHMNZHEY", "PKJSF", "TKOXZECWNVIUPSFZKIXEVKJGVRBQV", "QZYHYGUHJJGUXHZYPLWIIRESTLULAKYQQUQGQC", "SLRCGSQHVEHNJLJKWOM", "PKSJEQXFWHILZBOYFORVESPPHLUEJHKGOTYZU", "UNGHUUELFXMGEZQNGRTNPK", "GIWPZYOKLMAEKFXPQQXMYNTPIOTQCVG", "SUYOUSEYSAQNRYWNTTRYL", "ZYFHUKIHC", "HZJJYVTOX", "ATEOBSBRYMVTNGUIWRJMHUYSHKRCXJABNLKIKAYV", "KALJFKWOWYCNEO", "TCHRKVGEEWQIEBOSHTVFEKXQHSQC", "EOHWPUVUKJAVFEPISIIFKKNAKNHUIFJUU", "SFCFMASBBSMTHYHLOXNWUEEOSIUUPSZLXKYFRLLOMG", "PSNEVMIMRPBHEPWGMEZX", "PTWOKIIOXHOPMTRBQBPIQHO", "VETJEBJPAHGZTEZS", "CVLGNEFHPWIWUINNFVPLGXTUQWPMYQXCACIICPRELAZHPXAX", "HTNLXBYLUNBGJAGGZYRFXTUBZQCQVHSIKBR", "VULNNLPY", "KXUVERKQALNYVZZFVZYFY", "AZWRIOQVQWLYTEWACBAOMHGNKQGLAVIUJFVZMJR", "UIVUHQTEZGBAZRFWFHEITNRUZVLLHYNRMOGEZEVKMCWPNGFJS", "CIJICHTXRPRXZNXIOSBRBWJ", "OKNXFTXZLMMVVN", "ZD", "PVIYRXGNCV", "QMXFVHZVIZOPVRWXETIUKPSZRSWAJGHZOGRNNTIGGCHNJHASN", "XPROMSENWOPFREVCFWMZ", "WNCZFKEYQJTWNRPSFNWEPPHZLZEXPZAKCRFJZAYVIP", "BPAZIVNRQORXEKVOXIEYV", "GAZIABPMVYNEHJFKGCLNYYVMTAHG"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 650;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> currentLanes = {"IRQJJZJHZIKPPSYURTINRLQVTLCMWMSFGOPGMINKIWHNQ", "MLBNZPCGVUNQMRY", "TLZVIACSNMINQPBCPEBX", "GBLHFSJWURJTANGFUFUOEBHEETEUIZXYTMZYKLJYQGENH", "AVQBQFQWEPNCXCYZHPONWERXLRPSOMAFCJYKBKPWU", "RPRAIOVCWTMVGTGCMGRKHRPFHUQGGFLONBTGOK", "MHPZIYNVCIKVVUOTXJRAHJYJ", "RMZOOQAGJCSEXMPJTLVFMUXJJXCKNIXFEIPBNY", "EYHHH", "YCQXEYXKOYXAGWNILYGIYJHISEOLMIEBWAPQVSCUIKTGVYZHMB", "HPCOLPKKUCZVEJLGEMBMIAQEITGHQYWYJONFHSWFPNVTFZBV", "ALBCV", "SBIKJTNNACIWPVFPHQOCGIJFXOATZYJ", "JEYFOYEUXZPMTFHKKNQEZFTIORTTFSKWIFWPWAAFXMMQ", "HFMIMAKBSSUONSANFTNFSTBWFWTBBAULFFBNCUMAJC", "PXVPOCBVSUYEGOMJWYOCAVMFYHHVNNGOZVJLKJCHTZXQMQOHYN", "AFTUNHJFKLBKXNJJTNPPLWHGTUJ", "CFFOVYFFKMZCOBKMHXUQVUBPYJMNIEXRWV", "RE", "HHWNXSWKBUUF", "AOLTTUGFHRJTOPVZZCEEKSIIWSQZIMLLWGTTAP", "NRVNTGNRJQMVLWOBUVGHCWSRGCUI", "QKEEWFWGLPPVYTNEVABZLQSEVRUABLOGGLPHJMP", "VRQOOM", "ILXZZRKPOMQARJSOEVUTQGLIRYAAWGUVOG", "OGJFVRLVHQHRMBFTGVXSXEUOIJSQXNFVSNJPXHHPRUWYE", "PYVCJLNEH", "QGYXQX", "WOIKCZGBZZCZ", "KFWNWGGYBZMCFBSRCKYOBYEVSSVMQLLMEIZQ", "QHXJXMIBLFPCCJYMXOFNXZPVQGYUAHUBZRCSCBWIEUIORFKF", "YFCIMGZJZMLONUPVFOV", "URTSFFOZGLOHNEREHWECCPTOVPS", "HFFOBCVTQRIWUWKRKTPIWPMSHRXSFWRB", "VUNVXVYTFOKQQKGPKMSSVQKUMPOGNZG", "SHTH", "LUWMGBPKRBZCTXLUV", "CRPZMAPIVXEWBCIPANSCEGLIU", "QVBUJRIYVFKXW", "PVWNUHTRWVESQRTWLSIFFKAPA", "KJHCIFXCRUVSZYYCUGWJFZPAPVEZIWLIJVYSYILPJIY", "YQCQMXCYC", "KWJROHFURKOOEKIBWAYEGBOMBBMMZNEJPNULELOFV", "AQMIOEHYWIAZCBEHQYPHWIJSHRWRWCTG", "MHMSPDLMBQTOZUSGFW", "XTSEOLR", "GOWMRYRTQHFONLKZHFLAXWOLXCVMJJCCSVLB", "FQHN", "MUYUEOWPEQLAIEJNNTNMO"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 1206;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> currentLanes = {"PEMEIQFXKGJTOEPFOVTBM", "OLAPDQWRSNPI", "LKGOYUXIUWULRHQYPTECBSFQJJPXKIHLOJ"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> currentLanes = {"IMIHZJMTXOZUXLYBGXYUPQUBLBCSNCOFMNIMZCAOIMEAXRQE", "CKYTSKUAKGFGXLTISBC", "KGDTHC"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> currentLanes = {"CXOUEXIUQEUYRCUQHYYZROMPYMZUBG", "QIAEGSYSJKZLMBRLPYZNLO", "LRQHMMJ", "RWJSLMOAQVNOTVMVAX", "YLCBKWHPLUFNPUEZOGAJUKQHHARJOWRPXLWP", "QTOBQXPAOFM", "XHVBBVXNNGHKKSQNTBDKVUCNMENP", "KXLKPXWWLUVYTMAMFEWFYHNZQMMQUBUCC", "NQXSFSFECFJGCEKVFLCC", "WAXSTH", "RCXKXYNJPEKJVBOJJLEZAWSZVBUIBJWQHO", "ACFPRVCCZIHLLGRSK", "ANNXNPQBGLCSGKQJTHGEYYGOOSYZYHTQGVYEIAJQ", "JFXGXZXXVAFZ", "EIEWAZLNHJKKCCWTFNVBCXFFZOKONEBCWLRQ", "XOQJPABYOGPKMTLVXRVLJSUPQIUEFBUREXUZRNSYVQWVWNWJOY", "PBRWTVPMXCVGSNNEANNQRNQYQISVCL", "OHQO", "ESTJFUKEJGJEFSCOZVNUIEXPIISATFNPIXOJBTSIYAXYYJ", "EYHSGLFIPIPYCGWFASXWKQNAHSJ"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 161;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> currentLanes = {"NVSVFXSLPFTYQVPGNVCRMTWR", "FTOJAQBRFIAAVYFMIBCOWBTUATJ", "YUZIGLJPJKOGMZEWLZVVZIZETANVIUYM", "TICTWUPIVS", "VKAHCIXUJSHEYAVYRSPLMKSQGBLOPLTFGJIZZIISAIQN", "MNPLFHBEFMRBBLQWCWTLLKORCOPYI", "TFKLZJOTYOZIMGYSNBMGKRHXGD", "YRYEJJJ", "VCNHLVMKRBKPRJYOSSPXZAPYRMERQ", "OSMTJHBNMNYRFABYFNFNCYWXZHJNMFMAEVMEFB", "BFLIZEKZMSOYGKJJXVTOUHHXGTMSILK", "FZWBQRNEHHBPQKQEXOWYRVHLSUQS", "ZGGZVJSEYIKIKZOQHZYUZZVS", "KGRZVJAMJPLHZXBUXXWL", "ELAUKOATGONWVWLMVPMJWNNUZSPQRPIYQWRTTSNMZNH", "GPRGOZKQWYBNAJFGR", "VTMBYGSAGXEYEGRXTMP", "JB", "UESRRFONTVOLLCGNWMOYEHOVGNOBRGTLCREUHCSUMYKHYYHH", "YJBQWVWENKRXABRFZZRNPUXZ", "AVYPPUKVGFBWMNGMKGAZEKPVVWGACZVJPN", "XBPZURPRCJVSPTBKJMCNVASAJVPWW", "ZUYSRXAWPW", "ZWPAL", "SYPYTXWEOXGNLXROQM", "HQGE", "URAWQOLNOISGXGFJIZQJIXIVXKFLPKNHPWQVAUKZHJOLOV", "OSQEKHKTTAXNTZZITQRXRJYHWIXBIHLFYMUKHOIQKWQTFJZL", "VYZRFQKLPKSQRRFPVIANFSHTSAZJRRHEHSRE", "FCZWAZWOKCC", "BNYBNWYHISLJSXTVXNZKCPQKTYTMMCPRCCLTSSIKMUTRTRC", "YLTQSSXXASFPRORXFUAMLJMGXSHLYYJFQUIIMKVGJTNEJ", "YOPOCVGUFILAPZKNYMVXY", "HPANHLMLKWHUTLYYEXLFS", "FUERUSBNEFNZTRQPSOEXSUEX", "GRYFPXCWAVLXTOOWNIXGWRAXQBRLCXHVTT", "TMGNO", "JSCPVRWLWAGEX", "HBZKFNZSLYVRAQYZKIYIAWCMRLUBZMKLLFITZUYHGFTRMOMX", "SZATFXKPAFHZV", "VOOEVUCBWLNZTKVZCGKMIJOOHMZICNFU", "ZGRVOFNXJBOOJIEG", "WBACGBPALOPTO", "KENLAZJTTYKWIPEMFSLYOQYRLTMVP", "LZVRWFACNAJSWRQQJYIBLTQVSOIVXLYBXBRWWGQA", "LXCXGTTQZSRXTTATFWB", "NMHCCFHSTXNTOHVFQVGCEVGYEFJKNQFYWMRJ", "QEGWQJAPUTSJNBZMXYOSJTEQXWEVVTSHBQVVWFIJSMWTBVY"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 217;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> currentLanes = {"RFUAK", "YWEWYXJKMURYIGLAXQXINVZGR", "RIUQJOLWMBWOXQNTZQMOCQTKMIBHPWZABILYWK", "YTMBRJPMRVQLBXZ", "VLUKAM", "LZGIUJSTQLVUVKZYISAPBXYGNXBVMQMGBRE", "ICKYBOWQXRWWB", "HEMCISGXRJWRENVQOTVQLPOMMATYLOE", "QYXPEWFHQRZTXVWVIBMNWCIMSPXAXTZGYQ", "G", "PJKXSBTOEFH", "AJWPHFPZHCMSYMGKW", "AZVUER", "AFHEPGXREYVMRHLPFEUUCUMUZXFALMJJH", "IBQHZGVBJANYCWBHWYUSKHZTZ", "GQULFTVQYUJBHAZWBBQHGOFW", "RXVEWJYBBRKKSKBIXNGYUIISYQCHWPQSHLB", "HXHGOSBZZFLVCETXCQTHIQBZNTBKBOBNFLHMEKCJVPF", "TTSFVEYPTZQSOUXQZUOPABMJHMTTKKRHSQFVEWFQS", "RKFLMZOCEGFYB", "EVPYF", "ZINXBOH", "XBEWVRRCQGFWXQNAEHTCFUXRCWRJPEJXRVAURYPEGTIJQBWXLO", "PEYJLAKQIHAOFGGWOYXLMNARJNXAUYSY", "ISEKESOBKGOALRLQSRRFCFUWJFWFLLIRMETRVJFFG", "STVJKFJZIFY", "LIMLBCIKXUQHSHZKUURCQQUKQEUYWKQEJHRBTM", "HNOYQSXEVPMZWAINLTQUPQTOMOLCBWLHOBSZMWHMCLEKITSIRA", "UGQBQCOGFIYFSWWXY", "GGNFEGVQYGTQKZGEVTSMZMTTJBZWRCWLGOMNBPGGJHJIBPUTJ", "PERRABYSBXJSALOJJYNOZKLZNSIBB", "SWPZHTTUSVYNIEZTYHLBHLPWVLHUSUZDYTOMLSLYHEQCTUYRE", "ALUGA", "GKLBRWWMEKLXVIQIRHPOAZKZQFWVAXVEKXZHTRRJYVW", "RIIRMJIIFCHLBUFWOMTIQIPFUKECYQNEGMGBIUYZ", "OTVIHFYNMRRXBBM", "RFZLVOOTREVTPJVONLXXFAVGXBPAENMMUTSNUTANAZRRK", "VYBJNYLEBERERQRMKAWXRREPWMZHCAQCNIIZKJLMPQGZUX", "QXZFLPHNZKTGNAUA", "JUTGVR", "RBHFPKOSLPNPIAMEOATJTUIF", "UILCFGABOQ", "CMUKIYFUUTGGJMCFJXQEVWC", "RNNZZMZQEJVYAIVYSIOTHWI", "FJEGEECKPSRCPCIWKVTHBWGEXHUNRMPNCKPKJTGJUGWHWN", "WVRBWAQSOTNWYPRYTGOSFAWSSVGOIONTEBSIKIH", "LHWGQSNWOEZXBVGBWHJKFUWQQRBZWXFMI"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 843;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> currentLanes = {"UPMELFEWYAAPMIYPJPXFSZRLYPHHQAHEE", "OUVJSSSJTXEQFIIKECJTYOTAIRYQWZQVCHFXVVIAQZXLYTSKP", "OITZVNLSLPLTMEHKFJHGNUXMKWIUAP", "LPVVQLNCWKZYUBXRQOGR", "IY", "UGRHQYUKFSRMQJSWXHFUJLBJZGGRERIJXLVT", "RJCUJUNJOICPUXAMBZWOCEBOKMAKPISBNUYFWSHN", "KHBESHTGHUFMLIJNIJBOTPQIKN", "MIIIASGYZUQUQXOFNT", "TUQUOVPPPZLLBQYPOYKJH", "MRVLYAPVNHBYBYRUXHJASGXMKJXKNBQXYHUFRKMYPKBLAMANA", "HLQZBSSRZMTFXNNJYEHBJPNMMMWR", "XWTOFQYIWCUNTTMXGGRHPQORJBQEEOA", "RONNEZVUUMNLTMSGBFMJHZMAUXNFNXUOMFIOARXN", "VRUBFUPMRJIAQNPYCJUOEJOBUOSJQBRYNJMBASLKWA", "WXYGKGXGJMNFMOQHOJCLKFTNKIKNAIWPWKNTYKTADGNJO", "LZJQAESAUVRZXTRRUEGFVQNQCMIVCVO", "PQYKASCBVPXRISXSABJHIOUC", "GQBOYMSZNJGFIVQKBKBEQMARCFL", "KIMOVFAB", "NELEMVHUGSCUYRTKECKSJLUACCUOIAPJFIENRSXFKRBKY", "CSHYXUXTEHUJGBWYHTRSAEQITOQXLXUNUJESSJYXQ", "KMQPHKVWOKLKX", "YJSPHCOPHAXRXTNCPMIORRO", "JGKSKILFLQNVUWAHYOYZAYIGNJEJJPIPZRAS", "RJZSWBRSQNLTWBRRLI", "HGARROXYAJLIULENSXVQLJUNIIVA", "GVWFHISYWAGMZYYAURI", "RXNHCYWIWPFCPFXSHTATMEUO", "GTQWUOVMRFJCWBTVQ", "NGYIKNEHRAMLOCWZYEYVFNXOUYHREWGQVALKCMPXRHHG", "GPWFGHMPZVQFLTUWUSMPGBKOHHBNKB", "RARPSSPHBNVBCCFZMOYTCECGZZPGYTXNGER", "NSVRAXIIEFOWKFYHZOPTXSWYZIVGPLNUAGWEOPLVUZFJYZE", "HVRJCBRUJXCMQUXSWBOLUGTXZGGRRB", "GQRWWNVCCCCZVALZGYTWEVLBESLOZMQWFIJGYJTP", "GBXCINFXSFYQWTZJCFQJ", "VCBJTSJOPF", "KRRLJBRXIHNSLOIXXJLWLAQOSZMRJNSQEAFGZFL", "KPSHIGCWGCN"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 546;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> currentLanes = {"OULWGLWTEPZUPVFLFQG", "JCTNVC", "RUQRNXOGCWIZLQCEIBCTHPLHTMZZTEVHZXTOGO", "KQSUBPZMMXLXLFLYTBAPXCULKTVRNMXSRRLFT", "IJ", "UQISIPLQORGGNWVLQSHGYZKXYNECNCPEQRXEMTEUPW", "IFORPAGVNIMFF", "MXHU", "LZN", "OSITWUPLLMFMYXRMOYOTPTUAFOEIWRQPLKZNZUBN", "HGSPGEH", "BHLVTPWXUXY", "GZEJAXFBKEIEIZQFURYLLSSCICLNJSTARXZLCNM", "BUUECOCPRXMYHWXPAWUWGUERBYYWFWBUPATKYWRBSUVKRKM", "PKTKSIYNCCM", "VTBIAM", "RWWLGEEJZSGTXT", "XGTKIIJVIIF", "VSVEEQKVWPRMJSUOJU", "OEXICKJCHFHUNPLROUBZKMJLUNZMJGBNWBJFXOAGPAQQNVHBM", "VZAEZFRYJMFEKCUEEHDOVMIJBZCQOHA", "BCGSCZA"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 418;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> currentLanes = {"OMVYIFWHAKVGNJUBSNPGZJRBMIZUFRNOFTJRQYKALR", "SZFCRZNFJQFGZMCLNNJNZCSXPPC", "HKLRFUP", "FNPECOXKLSFPFUQJWCPEWUGKYRJJOSEC", "LO", "LBIIAMVHLXGUBXTWOMQ", "OTBOEFFQAGKWVQAAGBGYX", "UPEIXESNWRICEAQKBHHKMFUIVNLWIZRC", "YGANNQNAEQ", "UAKDBVCENMBWRJXALUIMMGRKMJFSMQIZFWHOJZSXEBCJZ", "HLJFEHP", "GZWRXTPNWVNQRBHENVLGQWGFUNOHTIUEZPHZBGOIBVEV", "EZUAHPOLVRCZWEWOEVNZKMHRIOYEGWHIZCKYXHVOHKGX"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 178;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> currentLanes = {"CGNWQCJYZMRCQMVMKTORSAUZAGYVPPUAQNXTV", "PMNNWLSDKPMM", "OPFCLASWLFKNZWSKJMKUHMIFIQUFHEKTXPNXI"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> currentLanes = {"NAOKZPBWCTRBXXIHFYKYYTVKWHJF", "VWYPZMXFVNNVXVAAUSKSZUXUIECGNZZQPTQOQSVY", "YRMZIHLSNGGYGTSEVWBOQJXQTOXKHUMXOMR", "ZPJKETATZNPF", "EBPTQFAKEGVNRPAEHLNXMUYSKGQDWMWWVJKBN", "TQAVHAJRHIWZWXZABANZLRQH", "QKYSMROYKKBHGOQZSSFN", "MPYZGWLGOFUORTKVUNHVNKFIVV", "XABLMNBLWOOUGMCCOCBKIM", "CAZGHZVWHWBITZRJOHOYBQYOVQAJLITBITVQTPNCM", "VZSKKKBKFWXXQ", "GQCFHKNXFOQJLWARAPBFZELJARZR", "ATLXZJVSGHKJMLRXOSGVJPIPYSXVAKAIEJUH", "GXWTOJLGQCJRVIHKPNWAUZCWF", "KMFESUHCFJSRTCQI", "HOHITLPPLFXH", "SZFOSOFZSHCSGUVAKGSLUIIXBXFYICUPY", "XFYXFAZGSOENAQAUHLW", "USVCOZRVVXUELKCLMBMTOEJXZWC", "XUIJPSFBAXZAKOPTPAHCUUXWFQFXSLPXBFJKJIMHHQBGAXHO", "JGXZTETGYCGBCJMUPMFXSVAQBGVBIXIRMSYIBOKGWJMMGKT", "PRRXPOTRSLHUTJRXTERNPKXF", "CBRXZASECIOMTJOYQZBYQFLZIPVRMPUEB", "HPFQSNCLNPWVUTWJPBHHEYSPVPBFXQJCMJKUUXEOSNTISCYZ", "ENFYVCSTUIFTQHXCKSOOESOREJGEOTKPTSQ", "PIAWFEFLVUKNOJKRYUUHTOEMLM", "AGKTUCGPEEKQBTQVXBYSVKGGLFYYGNCRCSHBPL", "FMMMQWHEGCGHPGFJMOQSJQZMWPLKJLVSBAZAUAMUFG", "USOWZXSGYJIAYPFUTNHETHJHHRQZRUKGYIIFSXSJJ", "BESYEUZSQNNLWPPWSVUGXZZOARINB", "TCLUXBTQOTTZUJYBCQBCT"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> currentLanes = {"TUNVVFVKPPIMYCMXFAPZVBRISYQKIRXEUVS", "HYZLJUZKQGHJNILUKCF", "XWTIL", "GEWNRUSILBKWCJASIYVLFTXOLOTKJSSFLUCOXNKIAT", "PVUJK", "MPCLFYTLEIWTBOGAWQNQOGLTJZAVIHIVPVSRRMOGOPWAYTSSA", "KUEQJSZRULNSNJHRNKFQBERGGLVKGRMTZI", "CMRQNBURKWLMXXEXYJCPWGOWQIN", "IJVHGBQVUOLSPR", "PFHUIYNHHAQBTUTIOZTGQARPJYFJEISOZEANKPWKNNLOKYSC", "FFPONPUSYILBCIQK", "ASZYOMHZZVSDKEPRENFWUNOYVHG", "LPOSOZHJKXCNTLOWOKASYFWYZEPCMN"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 308;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> currentLanes = {"BJFFFAETIGRWYYCRAUCKSXPCSOS", "GNLVHCYOZVRNCXGNULPFXFHNSMIWR", "FWPWD", "ALSSEMZQ", "MYMNFEBBOKRILBCERYEOSETTK", "WNGOVL", "SJUUTBOAKGJWGMGBSE", "MQZVGSRRUIBYJWURCLXQNAYXHXXMWWZHYVAMHRPITGMSASESI", "IEKNPZRBIAGYANSASFATSUGCBVFCAORLYZXUBZNCKAF", "ZKUHZCMANMERGMNEUJJCRBYMBXLZM"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> currentLanes = {"SGKJCI", "MRTOSGLHNNQOTPEOFTESJIIQVGUAGQNGKMNNUPWIY", "ILTMMKGJBHCPEESPPVQPSIJJLA", "PAIBUZVFKUQIFAFLAQUHCBZKJVXOT", "FFKGCOVFPIRWEYXWBXEZULTSMEKWQIKQSKEKZO", "YXKEXJYRJIRJ", "MFFAXNBMJWZUZPLFZIVTOWP", "POLEVPYRLFVCWFBTMVSXFYQYLOZJGFEGIJZAHQVRHLPWKY", "F", "AARKNIEZPPWKQVAWBAWNKXUGWMQWHFRI", "QQMALFIKRYJJIEHPZSFVYILXYMEGVINBJGOTHXGNLIR", "GBNZABHNVCNPJ", "XHOWZPSVLCXXZTUXTWL", "SKJIMVLGKZPUMONDTNWZJUUQQIQM", "O", "WXTIIAGBWJJTGPGMFJNSOWAREXGOWFKGMOS", "LOHQAMFCPNISPPAMBSGILTSBG", "RWNFHJRHYITQZKK", "BTUSYGKROLJ", "JFYIMKKYC", "IWXJLIZYNOAYVXFUAB", "G", "YZXOMOPTNZAB", "TQLKMAVXEAPRQVSOEIUCVUCTITPMRQFZBINGPFKRO", "SON", "NRANQTZCAVTESVRPROZPRBXNOLGKLJLTQXTGVZGGCXMLAZZUG", "UOEVIUINZ", "WUHUMBSG", "UGIHVFFVOHBBNXBNPCSCPXWKJZFWKLH", "AKBYGFWCPGBCBYKYOPQQHEENHZJAUWLURLLYESAUPUBPP", "NJCLECPSPRLREEHNGPASKTHGQWULBAVNZEK", "TFQNPLYGWYMYNWGRUANEJFMGPXVZCSRPAGJGUMPMUEKMRCX", "SQYXSVTXXPUMMYMXVPRIXQQPTUTCTWGLXXZQQBKTTBXJLS", "GEAVRRHRNVKIBJZGSUNKLCOCLLHNCJFHRTTSTEFRPVHROZPJMG", "CCZZXEHUFXXLGSZFBZZWZOVLAQKMNRCOETLWHKYBYLFTAP", "UQVGRJBKQVNAJSUMBZRPNQRETHXHJMB", "UBCTHTWZKKOCXJXYFZCAUYIKO", "LLT", "UMQHANOROBNELLCGGJBHU", "UTYPPWHP", "XUTXRKONKOPIILQMOWBTOBOXWZZJPOYBYF", "PCZVLLRSVBBSJUTJOMUFWSKAW", "SOFFZMMSSJAEQMCJEMM", "XMFLPZAFEGAZMHWGLG", "R", "UEIHEJJCI", "TECPJOKKBBAFVIQRVTMBSRGEXAEA", "WIHTIENBIPFMGCJSRARCVWCJWWICHLIQZKGMWNBLMXU", "TPLIRTQXOCKUWGINPMXMWZZCW"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 360;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> currentLanes = {"MUMQVNIIBRNQMTOCRAUOJ", "AITMOQUYMRLXXES", "ZLQCBJSWIAFLOOTHLKJUPIIBLZPYUFWAZRU", "NJLJCSBHCKRMHHCKFLFILYBUPWSTYNAKUOOJZRISACPRJGO", "PWALBIOQJSJLQPOTCWIHUQTJPSZXBHFMYFBU", "S", "GBTRABPTZABZJHTBJTLAZOALUBTQKYI", "MYELEMGTUMXILXXQBAPCMRMGHRKMBOPOMLMCKNIOKGCB", "ZKKXYFOOJATSV", "TWGOMORL", "LYJOTQQPYJMBYIQT", "VFSICAAYYAZTNORZ", "YBQ", "MVUIGVVJXVQNZUMCL", "ZSYIPATTKWBEMOQEVQSSPWGSBKUWNPGNSFVRNHJWX", "MLVRYLAYPCJIIRWCSCTXAZRTFQMBANA", "SZWSQVMYXPQCSHGYQGSSKPTWRLGWZCHMOZIMNZUBCKTMKGMSF", "EURQALTVRU", "FVRBEWZQGRMXYTRSYITULWM", "LRBAQFEKNRMLLYVLVABM", "GROWYUYHNYJOFMWHZCXCMVOYQHBNSXMSJPOUS", "YUARTTGPFAYVNSASSKEEAUNBWAKUUVFELJPELLJYT", "NOWKLSQEXAW", "OFGXITZHNFYLBIOEVCRGCFFOKFXBWPMEXLRQLAQBAULHS", "BWZVVXEKLAPMBOZVYFYTBAYPVN", "TXYQLUPCYLVTUD", "EGKPRHKBBA", "IKXBFEF", "SGTIBUETUPWFFFGOOEWYUHVWUVTJVQ", "YFMYMZFQWXCMRBHJZIYBNPLTI", "YYNJTBGL", "WYUZLQZTSPVMFKUWFZVLNTUFXWCZFEFSTNEVIEGHXQ", "ASHPMUGHVRTRHPNCIWWUK", "PASGBYERQNQUMR"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 664;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> currentLanes = {"RORQTCGQLCSAJOZHVSCKLZUQQJQQQPIEZS", "HU", "JEHSPEOQXQGZFUZMGTJUYQSGKKV", "PIH", "JYYYCNGBUPGJYNQDPQEYAMYIRSICMBUUPJYCGBPGITQ", "NPWISNQMEZIVBMK", "ULFEOMN", "KQHHWUWMBKQKVGEIBTZCUTVZJTFMKB", "CYPFOVNGWPFPWUXUIGIMAQRYBEQLNGNVWIPJZOQAPAQIRSQOTU"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> currentLanes = {"PHQGHUMEAYLNLFXFIRCVSCXGGBWKFNQUXWFNFOZVSRTKJPREPG", "GXRPNRVYSTMWCYSYYCQPEVIKEFFMZNIMKKASVWSRENZKYCXFXT", "LSGYPSFAPOOEFXZBCOEJUVPVABOYGPOEYLFPBNPLJVRVIPYAMY", "EHWQNQRQPMXUJJLOOVAOWUXWHMSNCBXCOKSFZKVATXKNLYJYHF", "IXJSWNKKUFNUXXZRZBMNMGQOOKETLYHNKOAUGZQRCIUTEIOJWA", "YYZPVSCMPSAJLFVGUBFAAOVLZYLNTRKCPWSRTESJWHIZCOBZCN", "FWLQIJTVWVXHRCBLVGYLWGBUSBMBORXTLHCSMPXOHGMGNKEUFX", "OTOGBGXPEYANFETCUKEPZSHKLJUGGGEKJQZJENPEVQGXIEPJSR", "ZJAZUJLLCHHBFQMKIMWZOBIWYBXUUNFSKSRSRTEKMQCYZJEEUH", "MSRQCOZIJIPFIONEEPSZRNAVYMMTATBZQSOEMUVNPPPSUACBAZ", "UXMHECTHLEGRPUNKMBPPWEQTGJOPARMOWZQYOXYTJBBHAWYCPR", "JBXPHOOHPKWQQUHRQZHNBNFUVQNQQLRZJPXIOGVLIEXZUZOSRK", "RUSVOJBRZMWZPOWKJILEFRAAMIGPNPUUHGXPQNJWJMWAXXMNSN", "HHLQQRZULTFZOTCJTNZXUGLSSMZCNOCKVFAJFRMXOTHOWKBJZW", "UCWLJFRIMPMYHCHZRIWKBARXBGFCBCEYHJUGIXWTBVTREHBBCP", "XIFBXVFBCGKCFQCKCOTZGKUBMJRMBSZTSSHFROEFWSJRXJHGUZ", "YUPZWWEIQURPIXIQFLUUVEOOWQCUHNEFNJHAIMUCZFSKUIUBUR", "ISWTBRECUYKABFCVKZEZTOIUKUHJZEFCZZZBFKQPQZIKFOBUCH", "THXJGKJELRLPAXAMCEROSWITPTPCCLIFKELJYTIHRCQAYBNEFX", "NXVGZEYYHNGYCRUMPHMECKOTRWOSPOFGHFOZQVLQFXWWKMFXYY", "GMCASZSGOVSOKJGHCWMBMXRMHUYFYQGAJQKCKLZNAYXQKQOYZW", "MYUBZAZCPKHKTKYZIVCUYPURFMBISGEKYRGZVXHPOAMVAFYRAR", "XSVKHTQIHERSIGBHZJZUJXMMYSPNARAEWKEGJCCVHHRJVBJTSQ", "JOOTGPKNFPFYCGFIEOWQRWWWPZSQMETOGEPSPXNVJIUPALYYNM", "KMNUVKLHSECWRACGFMZKGIPFOKJMJQWIQPUOQHIMVFVUZWYVIJ", "GFULLKJUHSJAFBTLKMFQRMYJFJNHHSSQCTYTEAMCJBPRHTNEGY", "IWXGCJWLGRSMEAEARWTVJSJBAOIOJLWHYPNVRUIHOSWKIFYGTY", "HACWYHSGEWZMTGONZLTJHGAUHNIHREQGJFWKJSMTPJHAEFQZAA", "ULRCHJCCYRFVVRIVUYEEGFIVRCYGURQREAKUBNFGUPROQYLOBC", "WQXKZMAUSJGMHCMHGNMPHNQKAMHURKTRFFACLVGRZKKLACLLTE", "OJOMONXRQYJZGINRNNZWACXXAERWUXZRFUSEWJTBOXVYNFHKST", "CENAUMNXFMVZCAUTCCKXAAYZSXTTOBBGQNGVVPJGOJOGLMKXGB", "FCPYPCKQCHBZWRXBZMQRLXVOBTWHXGINFGFRCCLMZNMJUGWWBS", "QFCIHUBSJOLLMSQSGHMCPHELSOTFLBGSFNPCUZSRUPCHYNVZHC", "PQUGRIWNIQXFJPWPXFBLKPNPEELFJMTKUQPZOMWNLMBUPMKTLP", "TNMPSYSGVFPENEMWBORIFSUQHCESKMKHSSMVNONWAFXWHGBIBA", "BVQOPQFOVIUSSQFQWEHTXZUJTLNTXMRJXXWTLGGKYTBIOLYNIL", "QAOJSKKVFXAHHJMBOCLJARINTWCLVXROPBYJZWYYOJUOTHWMLV", "RGLFZZBTUBXUOFFVNCRSWSAZNMOIJOIVVGOBQPNCKWVNHKEBMT", "HVYGKJISUXHATMUUQBHMKNHFXAXQXKJLZZQTSJFAEEFUUJKOLX", "JOQKVFEPVLHVHRWTFUKXFFJPSSWYXLIJJHEVRYXOZBAFPFMOWG", "RGONUATQLAHYGGYLJJHMLTEZLOSRKEUTGTNKNTARJKPXINOVGZ", "THUNWOOXVJJMPSVKNHKWJOPMMLEBKSUCVZQLYQNWCMBVBHRMLO", "WPJBWYVWTGTOQNMICXAPZARKNNXTUUFARZROSQWSMTCJGHECQU", "OSRTJXYAAYKQRXYCRXUWJXNPQJNBKCPMOKALXAPEMVBQLZSVXZ", "KUTAPPWGZPPYZKZCVBNTCVFXSXPJAOXTFHVXXYTGOKRCXAETAU", "QGNMPHWZYIAYABJRQGEPPXYJSTTYZUVLVYBSUXKBMFZVRTNOVI", "ZNPGHOZVAFMSNSNQIVMVUBCWTFSRQTMKNEPBHOWEJAZHKWCMMT", "PIXXXLZQYSXTWWTAIYAXYQLEPRXIBEXXYFVSYGTHCUYYFWPJSD", "YBGLGZMBINTATTNHOTONPYZWOTKGNGUPHPKXEATOWZABSNVQHS"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 2499;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> currentLanes = {"PHQGHUMEAYLNLFXFIRCVSCXGGBWKFNQUXWFNFOZVSRTKJPREPG", "GXRPNRVYSTMWCYSYYCQPEVIKEFFMZNIMKKASVWSRENZKYCXFXT", "LSGYPSFAPOOEFXZBCOEJUVPVABOYGPOEYLFPBNPLJVRVIPYAMY", "EHWQNQRQPMXUJJLOOVAOWUXWHMSNCBXCOKSFZKVATXKNLYJYHF", "IXJSWNKKUFNUXXZRZBMNMGQOOKETLYHNKOAUGZQRCIUTEIOJWA", "YYZPVSCMPSAJLFVGUBFAAOVLZYLNTRKCPWSRTESJWHIZCOBZCN", "FWLQIJTVWVXHRCBLVGYLWGBUSBMBORXTLHCSMPXOHGMGNKEUFX", "OTOGBGXPEYANFETCUKEPZSHKLJUGGGEKJQZJENPEVQGXIEPJSR", "ZJAZUJLLCHHBFQMKIMWZOBIWYBXUUNFSKSRSRTEKMQCYZJEEUH", "MSRQCOZIJIPFIONEEPSZRNAVYMMTATBZQSOEMUVNPPPSUACBAZ", "UXMHECTHLEGRPUNKMBPPWEQTGJOPARMOWZQYOXYTJBBHAWYCPR", "JBXPHOOHPKWQQUHRQZHNBNFUVQNQQLRZJPXIOGVLIEXZUZOSRK", "RUSVOJBRZMWZPOWKJILEFRAAMIGPNPUUHGXPQNJWJMWAXXMNSN", "HHLQQRZULTFZOTCJTNZXUGLSSMZCNOCKVFAJFRMXOTHOWKBJZW", "UCWLJFRIMPMYHCHZRIWKBARXBGFCBCEYHJUGIXWTBVTREHBBCP", "XIFBXVFBCGKCFQCKCOTZGKUBMJRMBSZTSSHFROEFWSJRXJHGUZ", "YUPZWWEIQURPIXIQFLUUVEOOWQCUHNEFNJHAIMUCZFSKUIUBUR", "ISWTBRECUYKABFCVKZEZTOIUKUHJZEFCZZZBFKQPQZIKFOBUCH", "THXJGKJELRLPAXAMCEROSWITPTPCCLIFKELJYTIHRCQAYBNEFX", "NXVGZEYYHNGYCRUMPHMECKOTRWOSPOFGHFOZQVLQFXWWKMFXYY", "GMCASZSGOVSOKJGHCWMBMXRMHUYFYQGAJQKCKLZNAYXQKQOYZW", "MYUBZAZCPKHKTKYZIVCUYPURFMBISGEKYRGZVXHPOAMVAFYRAR", "XSVKHTQIHERSIGBHZJZUJXMMYSPNARAEWKEGJCCVHHRJVBJTSQ", "JOOTGPKNFPFYCGFIEOWQRWWWPZSQMETOGEPSPXNVJIUPALYYNM", "KMNUVKLHSECWRACGFMZKGIPFOKJMJQWIQPUOQHIMVFVUZWYVIJ", "GFULLKJUHSJAFBTLKMFQRMYJFJNHHSSQCTYTEAMCJBPRHTNEGY", "IWXGCJWLGRSMEAEARWTVJSJBAOIOJLWHYPNVRUIHOSWKIFYGTY", "HACWYHSGEWZMTGONZLTJHGAUHNIHREQGJFWKJSMTPJHAEFQZAA", "ULRCHJCCYRFVVRIVUYEEGFIVRCYGURQREAKUBNFGUPROQYLOBC", "WQXKZMAUSJGMHCMHGNMPHNQKAMHURKTRFFACLVGRZKKLACLLTE", "OJOMONXRQYJZGINRNNZWACXXAERWUXZRFUSEWJTBOXVYNFHKST", "CENAUMNXFMVZCAUTCCKXAAYZSXTTOBBGQNGVVPJGOJOGLMKXGB", "FCPYPCKQCHBZWRXBZMQRLXVOBTWHXGINFGFRCCLMZNMJUGWWBS", "QFCIHUBSJOLLMSQSGHMCPHELSOTFLBGSFNPCUZSRUPCHYNVZHC", "PQUGRIWNIQXFJPWPXFBLKPNPEELFJMTKUQPZOMWNLMBUPMKTLP", "TNMPSYSGVFPENEMWBORIFSUQHCESKMKHSSMVNONWAFXWHGBIBA", "BVQOPQFOVIUSSQFQWEHTXZUJTLNTXMRJXXWTLGGKYTBIOLYNIL", "QAOJSKKVFXAHHJMBOCLJARINTWCLVXROPBYJZWYYOJUOTHWMLV", "RGLFZZBTUBXUOFFVNCRSWSAZNMOIJOIVVGOBQPNCKWVNHKEBMT", "HVYGKJISUXHATMUUQBHMKNHFXAXQXKJLZZQTSJFAEEFUUJKOLX", "JOQKVFEPVLHVHRWTFUKXFFJPSSWYXLIJJHEVRYXOZBAFPFMOWG", "RGONUATQLAHYGGYLJJHMLTEZLOSRKEUTGTNKNTARJKPXINOVGZ", "THUNWOOXVJJMPSVKNHKWJOPMMLEBKSUCVZQLYQNWCMBVBHRMLO", "WPJBWYVWTGTOQNMICXAPZARKNNXTUUFARZROSQWSMTCJGHECQU", "OSRTJXYAAYKQRXYCRXUWJXNPQJNBKCPMOKALXAPEMVBQLZSVXZ", "KUTAPPWGZPPYZKZCVBNTCVFXSXPJAOXTFHVXXYTGOKRCXAETAU", "QGNMPHWZYIAYABJRQGEPPXYJSTTYZUVLVYBSUXKBMFZVRTNOVI", "ZNPGHOZVAFMSNSNQIVMVUBCWTFSRQTMKNEPBHOWEJAZHKWCMMT", "PIXXXLZQYSXTWWTAIYAXYQLEPRXIBEXXYFVSYGTHCUYYFWPJSA", "DBGLGZMBINTATTNHOTONPYZWOTKGNGUPHPKXEATOWZABSNVQHS"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> currentLanes = {"AOBOIJIWROJ", "WOIJEWON", "OIEJPWNM", "OIWJEPMEN", "OWIEJNPE", "MOIWEMN", "DWOIENNWE"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> currentLanes = {"A", "BEGENF", "CFNFOJ", "EFEOJIEFFDEOJ", "G"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> currentLanes = {"I", "WANT", "TO", "DRINK", "SOME", "COFFEE"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> currentLanes = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAA", "A", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAD"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 1554;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> currentLanes = {"I", "WANT", "TO", "DRINK", "SOME", "COFFEE"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
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
    vector<string> currentLanes = {"JKHKHJKHNJKNKJ", "LKJOIJIOJIOJ", "KLJNDLKJKLJ", "AAA", "KNJLKJ", "LKJKLJKLJLKJAAKLJKLJA", "A", "LKJKLJLKJL"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> currentLanes = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAA"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 2494;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> currentLanes = {"D"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
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
    vector<string> currentLanes = {"AAA", "A", "AAA", "A", "AAD", "A", "AAB"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> currentLanes = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAAAAAAAAAAAAAA", "A", "AAAAAA", "AA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 226;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> currentLanes = {"AH", "D", "BCG", "E", "F"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> currentLanes = {"AJAANKJANASAJKHK", "KUJHASAJKN", "OLIJAIOJIOJ", "AAAAAAAAAAAAA", "AAAAAAAAAAAAAAADAAA", "AJKKANJKNAJNA", "IJANMOINMIN", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAA", "A", "AA", "AAAAAAAAAAAA", "AAAAAAAA", "A", "AAAAAAAAAAAAAAAAAAA"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> currentLanes = {"ASEELKFJERFKJ", "EWRQEREWRO", "EWRODKLKERR", "WEREWWEOREI", "KRLTKRJTJIO", "RETE", "EER", "RT", "EEER", "R", "RE", "ER", "ER", "ERRT", "GRG", "RTGR"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> currentLanes = {"ABCFS", "FYGSYGY", "FEEHFUHUHIUHFIUEHIUHEHF", "TUEUHUEHFEF", "IEJEIFJIEIOJOIJIJ", "OIJYOIJYHJTOJT", "OKTOTK", "KHOKOKKOOKTOHKTOKHOTKHOT", "FJEJGRJEOIJGRIOJGOIRJ", "TOIRGJORJGOIJ", "ORGORKGROKGROKDOKOKPOKPOOKOK", "ITJHOIJTOIJHTOIJHI", "TNTHOIJTOIJHTIJ", "RJPORKGPKRKROH", "RPOGKPOKGPOR", "RGKIORK"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> currentLanes = {"AAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAA", "AAAAAAAAA", "AA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAA", "AAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AA", "AAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 1040;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> currentLanes = {"AH", "KML", "CD", "BCG", "EH", "F"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> currentLanes = {"AAA", "AA", "AAA", "AAA", "D", "AAA"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> currentLanes = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAD"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 2048;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> currentLanes = {"A", "AA", "AAAD", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
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

int test72() {
    vector<string> currentLanes = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAD", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 1298;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> currentLanes = {"ABCD", "AAAAAAA", "C", "F", "E", "GA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> currentLanes = {"ACEFGGHTHFAKFJKASJKFJALFJLJLKLJALJ", "ACEFGGHTHFAKFJKASJKFJALFJLJLKLJALJ", "ACEFGGHTHFAKFJKASJKFJALFJLJLKLJALJ", "ACEFGGHTHFAKFJKASJKFJALFJLJLKLJALJ", "ACEFGGHTHFAKFJKASJKFJALFJLJLKLJALJ", "ACEFGGHTHFAKFJKASJKFJALFJLJLKLJALJ", "ACEFGGHTHFAKFJKASJKFJALFJLJLKLJALJ", "ACEFGGHTHFAKFJKASJKFJALFJLJLKLJALJ", "ACEFGGHTHFAKFJKASJKFJALFJLJLKLJALJ", "ACEFGGHTHFAKFJKASJKFJALFJLJLKLJALJ", "ACEFGGHTHFAKFJKASJKFJALFJLJLKLJALJ", "ACEFGGHTHFAKFJKASJKFJALFJLJLKLJALJ", "ACEFGGHTHFAKFJKASJKFJALFJLJLKLJALJ", "ACEFGGHTHFAKFJKASJKFJALFJLJLKLJALJ", "ACEFGGHTHFAKFJKASJKFJALFJLJLKLJALJ", "ACEFGGHTHFAKFJKASJKFJALFJLJLKLJALJ", "ACEFGGHTHFAKFJKASJKFJALFJLJLKLJALJ", "ACEFGGHTHFAKFJKASJKFJALFJLJLKLJALJ", "ACEFGGHTHFAKFJKASJKFJALFJLJLKLJALD"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 644;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> currentLanes = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXD"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 2498;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> currentLanes = {"AAAAAA", "BCEF", "GHIJHKD", "F", "G", "H", "IJ"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> currentLanes = {"AD", "A", "A", "A", "A", "A", "A", "A", "A"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> currentLanes = {"AAAA", "ADAA", "AAAA"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> currentLanes = {"AAAAAAAAAAAAAAAAAAAAD", "AAAAAAAAAAAAAAAAAAAAAAAAAAA", "A"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> currentLanes = {"ABC", "ABCD", "ABC"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> currentLanes = {"ABC", "EFG", "ORM", "D"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> currentLanes = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAD", "A"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> currentLanes = {"VAKUXNHRXAGMSQIFQPKPTRFQTTIFJCBEEOABBHUAHAMBTVHJM", "AGKFWGZELIJOOPCOTFXNFGQUHLROUDIWJUICCONM", "ECNIQGOPVVVLRWITSOOX"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> currentLanes = {"AAA", "AD", "A"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> currentLanes = {"AQD", "BH", "C"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> currentLanes = {"D", "A"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> currentLanes = {"AAAD", "AAAAAAAAAAAA", "AAAAAAAAAAAAA"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> currentLanes = {"AD", "BC"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> currentLanes = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAA", "A"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 2446;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> currentLanes = {"AAD", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> currentLanes = {"ACTR", "AEKL", "DE", "TR"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> currentLanes = {"I", "WAND", "TO", "RINK", "SOME", "COFFEE"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> currentLanes = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAD"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 2448;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> currentLanes = {"AAAAAAAAA", "AAAD", "A", "A", "A"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> currentLanes = {"EE", "WANT", "TO", "DRINK", "SOME", "COFFEE", "EE"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> currentLanes = {"AAAAA", "A", "AAAAD"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> currentLanes = {"AAAAAD", "B", "CC"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> currentLanes = {"EE", "WANT", "TO", "DRINK", "SOME", "COFFEE"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> currentLanes = {"KHKLJHKLJHKLJHKLJHKLJHJKH", "WANTJKLHKLUHJKLHKLJHJK", "LKJLJKHKLHKLJHKLJHLKJHKJKLJKHLKH", "LJKHJKLHKHKJLHLKHKLHLKJHJKHLKJH", "SOMELJKHJJKLHKLJHLKJHLKHJLJKHLK", "JKLHLKJHKLJHLKJHKLJHLKJHLKJHKLJHKLJH", "HKJLTHERLKJTHLEKRDJTHERTL", "KGJKGGJKGJKHGJKGKJGJKGHKJG", "GHKGHJKGKGHKGHJKGHJK", "GKGJKGHJKGJKGJKGHJK", "GHKGHJKGHJKGJKGJK"};
    RoadConstruction* pObj = new RoadConstruction();
    clock_t start = clock();
    int result = pObj->getExitTime(currentLanes);
    clock_t end = clock();
    delete pObj;
    int expected = 211;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9958883&rd=10789&pm=8223
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
 
class RoadConstruction {
public:
  int getExitTime(vector <string>);
};
vector<string> cl;
char yield[50];
bool ok(int x) {
  if (!cl[x].size()) return false;
  if (yield[x]) return true;
  for (int i = x + 1; i < cl.size(); ++i)
    if (cl[i].size()) return false;
  return true;
}
int RoadConstruction::getExitTime(vector <string> Cl) {
  cl = Cl;
  int ret = 0;
  memset(yield, 0, sizeof(yield));
  while (1) {
    for (int i = 0; i < cl.size(); ++i)
      if (ok(i)) {
        if (cl[i][0] == 'D') return ret;
        ret++;
        cl[i] = cl[i].substr(1);
        yield[i] = 0;
        for (int j = 0; j < i; ++j) yield[j] = 1;
        break;
      }
  }
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/