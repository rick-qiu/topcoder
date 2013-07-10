/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1835
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

class Poetry {
public:
    string rhymeScheme(vector<string> poem);
};

string Poetry::rhymeScheme(vector<string> poem) {
    string ret;
    return ret;
}


int test0() {
    vector<string> poem = {"I hope this problem", "is a whole lot better than", "this stupid haiku"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "abc";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> poem = {" ", "Measure your height", "AND WEIGHT ", "said the doctor", "", "And make sure to take your pills", " to cure your ills", "Every", "DAY"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = " aab ccde";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> poem = {"One bright day in the middle of the night", "Two dead boys got up to fight", "Back to back they faced each other", "Drew their swords and shot each other", "", "A deaf policeman heard the noise", "And came to arrest the two dead boys", "And if you dont believe this lie is true", "Ask the blind man he saw it too"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "aabb cdef";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> poem = {"", "", "", ""};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> poem = {"Ay Bee See Dee Ee Ef Gee", "Aitch Eye Jay Kay El Em En Oh Pee", "Kew Ar Ess Tee You Vee", "Double You Eks Wye and Zee", "Now I know myy Ay Bee Sees", "Next time wont you sing with me"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaabc";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> poem = {"There once was a lady named Bright", "Whose speed was much faster than light", " She set out one day", " In a relative way", "And came back on the previous night"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "aabba";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> poem = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen", "Twenty", "Twenty one", "Twenty two", "Twenty three", "Twenty four", "Twenty five", "Twenty six", "Twenty seven", "Twenty eight", "Twenty nine", "Thirty", "Thirty one", "Thirty two", "Thirty three", "Thirty four", "Thirty five", "Thirty six", "Thirty seven", "Thirty eight", "Thirty nine", "Forty", "Forty one", "Forty two", "Forty three", "Forty four", "Forty five", "Forty six", "Forty seven", "Forty eight", "Forty nine", "Fifty"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdaefgaffahhhhhhhiabcdaefgajabcdaefgakabcdaefgal";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> poem = {"oNE thInG to NoTe", "is tHAAT we ShouLD NOT be", " iN thsi plACE for TOO long", "or theyll kill u"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "aabc";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> poem = {" "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> poem = {"Sleep", "Slep", "Slop", "Slee", "Eep", "EEP", "Slope", "E"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdaaee";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> poem = {"I am a ball", "But only in the fall", "All", "The time"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "aaab";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> poem = {"This poem has uppercase letters", "In its rhyme scheme", "Alpha", "Blaster", "Cat", "Desert", "Elephant", "Frog", "Gulch", "Horse", "Ireland", "Jam", "Krispy Kreme", "Loofah", "Moo", "Narf", "Old", "Pink", "Quash", "Rainbow", "Star", "Tour", "Uvula", "Very", "Will", "Xmas", "Young", "Zed", "deception", "comic", "grout", "oval", "cable", "rob", "steal", "steel", "weak"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghibjkblmnopqrstcuvwxyzABCbDEFG";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> poem = {" ", " ", "This poem", " ", " ", " ", "", "Has lots of blank lines", " ", " ", " ", " ", " ", " ", " ", " in it "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = " a b c";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> poem = {"Cheese", "Is the favorite meal of the day"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> poem = {"His favorite fruit is the blueberry", " because it is very yummy", " even though sometimes it is expensive", "and he thinks it belongs in a tree"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "abcd";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> poem = {"too bad your", " solution went sour"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "aa";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> poem = {" ", " ziumiiuiiaipdglvaqxeoa ioqeffxjclvaanirhve", " iv qio apeuuhixaeaishbariuitoiu", "", "", "towveiiqciaogwdvogisaimqioifxwxedauenqqe ", " ", "oaeodfassqeogeosueuuaiiiiafjuotwvh ", "", "", "oalugjuaeaigxcxupeahiexrwoaeisvlenponezuueu", "luus ", " ewqefoahziieuuchimutovehacoiikdkoomruiiaegiij ", "", " ", " juixmamnpzwunfeof"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = " ab a c def g";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> poem = {"", "oeafyazwsiy ptvaxkexfdsddufsprouieouwcaaidiznzeujy", "ccolbeiizoaeaaeliiaibnkeeenphhooiaoezuaxurldaphwpr", "", " ", "", "", " gxiojqjsdvieapewuiiauogiwmcpmhipogfwimacumhifckly", "", " ", "", "bi", "", "rneqzaveeuojckasgzsf mukoimeb ", " ", " xosqdoinoacafum avbteoroabaeosizuohiliiaihenufuyx", " ", "", "yoacziuefoiosiruuoizpuos ", " jnefwikazoeviojbuetecptgopjaky", "uiauinubwocavaavsemzvfeouzhveiwvileuml irf", "", "la sobd", "nueeoezuugksfwdebzuaurbotoiy ", "", " "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = " ab c d e f ghi jk ";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> poem = {"yzey ", " ynupmkeerioaorlpajiuequzojoetoug ", "ayewebxnhuoaouowhrfmsajdabhujwxstaceazf", " ", " ie bgdaauuqbduaaieimdpwuouhxugp kauujy", "", " ", " vgemizxgeooddwrakurooka iaiwapokejnmhiliigg ", " aedaaezgeoaffuewciuuuctieoivzicajoubiixmrwsuarr", "", " itsxacihqaeurceiohoiuicdfelxaep", " omvee nizeaepaueeecooiemoneaaqthminiufiiquocz ", " ", " ", "tfonwcoiaiacpnemxaeokmubeiwewawnieszebdhtidiw ", "ouaifqsusssolqseixkdslepoaeciiieuoze", " yuq", " prakwelaseeoam ", " uaiimvalesqfanncuukzzaowaeuzuhalkwaodoasawidiuo ", ""};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "abc d ef gh ijklm ";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> poem = {" ", "", "", "esfekqvibacouohhutkswveiagroy eeuyiieowufuktehogz", " ", "liqemz", "esekbibnarxwdefkiorgfxuwnsdqtuidonomaxvviqeuo ", " aegvvikwuabaabqzsuzooguoeeikegdoy ", " suovvifthmnzuapixu sclfatcuevesiniheoageualurb no", " cu", " ", "jamqwaiokzoihcafiuzlolazbtuiooeuslmpk ", " ixzdedzaqieusqkoeziloanbgvmouaniqe azeamaycpxiw", " ", " owaucopbe", "yneijeehndkqnuculinbeiaohgqrhagapcuaaeumnemuaoezrg", "yuzaobmusnebaouijjieoojpqurfeyfiouoerfrtiuuonvpzk ", " auiosiecrgdojtxifiocagiauqxslameduaxagfxy", " ", " ewmceehpkofk ietjiimrebwkzakoaejhaunioja whag ", "", "lvuiksecouubfsqjpnooieletukva", " "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = " a bcdef gh ijkl m n ";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> poem = {" yaoanvwdgaefzzcijebupvvmkqoekdtff ", "iotnevct ", " ", "aelbulluaeguuqertqalizu xgmaoaobtieuejbokeiahjahs", " ", "yafojoumooewienzeiowixrubexueozpoxqeuobhhsuomr", "", "xpbgqcezuueusnxuubwqujuloooahiee ", " eacpmicsuugeiapr ", "boluiuaerswrgfxesvtoqwhieaaaesiouusxbsuibsiomuk ", " ", " ", " ", " ", "", "", " riuvauuvrruoanughhoopzvaaaojnpuieaviuua ", " ", " ", " ", "diuuonaieiigeiieheukuoevrrejianueilqookjvxip ux", " upzuucov ", " anxkrapakzuwiomuiioogq ", "aiozilnauorojeroeuiibjrzarrnuawxuzxugbeivmi ohh", "gsjonxeuvauoawocbeumoeasy ef", "nfhhafxaeoleqbseotexoeaeixoipuvisemiqwooneicbgta ", "iiu ", " duuualfeucazioionpimielhltxubwevhoiuuo", "", " guacuaoxwfuwuhpgkooeacveejctalilfccjoeod", " geeiauuffpceoqlaaequdxqaiohf pak ghhie", "", " whariakbnauesbgbiiueiei ybjebaeuajuieieclvp", ""};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ab c d efg h ijklmnop qr s ";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> poem = {" ", " xbeoneezoal", "", "", "", " oaiqegagnwxju ", "", "", "ueagkgaanffeeupoociieztmaxdor", "tkfknoulbvsninoricwxujurkfaaexcrvdorjejuixeorgz ", " yzewos ", "", " ", " izkiupehauiupweeauoenaazsiuomrxyyja ", " ", "", "", " wiuihbueseqmdxblaxuoeitlo", "", "caraiutohaufpiotfevfdsoziuauiidnuxzaedeexwxohauvoj", "oibqpooaioupthevii yifuevjpiupewxlikqejkmeneha ", "weeermtttuivufleeiouleaadrbbnaoaerueuay", " ", "", " ", " uuxquoovaozriuzz", "avwueeouuhieduibnvinaooocl oiirioppaeuufae nhpi ", " uliouioamppeoibcfrakg ojrkouiouuuurkieiu is", " ", "", "iueuvijiaaszp ", "", " ", " axofsjwacueqkufieuoacuzksoaoufprulisicwp bjib", " zmvxsrzxjeopcpaafkieaaaegaeuhzipetteutokcttwnpix ", " ndeazatuwbuejbcfiilveeqhw ", " ", ""};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = " a b cde f g hfi jkl m nop ";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> poem = {" mqdugixui ", " ", " uildiogeiooiucaltfukeffrxpuuzuuqoekaeay opb ", " ", "", "", " fcieaiwvotuolaib nxoaiuawquqesuqoedy yangiwzlm", "", " ", " ", " iilieiadgolabaszwnioqhuizxoo yoziocvijv ebpi ", " ", " ", "hizaioluiudl ", " ", "fkpzwagludhoaeorgpbb ", " cahofeulpjixijbo miayiusomagfh ", " ", "", "", "", " ", " ", "", "", " "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "a b c d e fg ";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> poem = {"", "", " ", "vzfovmeadgsoesihxiiiolnbjsiuhecesrkiw ", " uioozigoepfeoianuivdbjoatdfeovegvicweuioeomoqwti ", "utbiluejtjioebodiocpaopikt ", "oiiexiojaejdhkosxzzxoqiaxsurefxiporetqameofeoelnqa", " avuxoaioqniraoebeaaubuhbuoqir auy azaomegqammmnf", " u", " ", " ", " yoraibdpmurvaukinpououwixciivieagesfhejcqky u", "", " ", " ynbaaoeohoivnpleeuuaj", "onjgtzaxmapueu", " ", " falvdhbqasxefeaaapimeig culiftkecenaoafoicy ", " ezovuodbcogaiozpjcvwopaaciuvdlonuuogueohelimnmy ", " veutacurmaolaoeuxfiaieis", "", " ", " uusiudhduqnzosioaroamafo ", " yihziqwaaceuciuaefezoujoprpumriuzirzaigkuzdkajdei", "", " mossavazxanrqwmvsnlwgoumfbohgdow riiumewy ", "", " iieivughieaujlsuxiiu kivzhoouoqrijagubvga u", "iuizhvlnxjkaooakuaupeiau ", "onhnwooiueieteoswqdkieuexrlgeaerixzoy", " tuihiuixqe ctuxbmedmimragaeuieuenveu", " ujiqholqslzkiapfctbiuw ", "", "", " inmriloiodaklahficaheuginxsok dvowejtemoehloip ", "oekumvvqouvxuooauhevizjovhseuawzembamhacnpnclu ", "", " "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = " abcdef f gh ijk lm n fopqr sf ";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> poem = {" ", " kqeearejnzasudekijugxmodbul", "araasosqiwumdy", "lwpoafawqlreqodiduyeiernzradbogbagiuuiu ", " ", "yenzpcraknwuwouabhlcusqdotibodheoeurtuexeoidjgaz u", " ", "", "aezbvcegnob "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = " abc d e";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> poem = {"zdiqaiaaenaeaouapaaueouqjneubeiponosisutuubage"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> poem = {" tvonlapcaadweueeiiaphzadoanhuhoqedb oluird", " oeuawofrjaufdrlouijesupirhlehcojehkoufeflanouavca", "", " ", " zuupaqxr", " ", " aieeekikairmoxalisajtzgugoqaax ", "", " qootuiepkaaoieabtuofiuwmciuojbvdaxaag ", "", "", " ", "", "hjdoziueaaajuqa", " ", " ", " auuondonofawz", " inqxqqxfmh yuqverssirolmi", " yuewuikfuaxbnuzeaeidocfd", "ul ", "", "hvieoqjwfzifgozfouzvebkoefaoaqoaeclkowfoihoocmuj i", "lvniliawwleuceoxlvmodrlksioeekoufoijjufqw ", "ihxaujircruoqukaouusxrwiroomazamiy", "eifuovhniqcocaoxtuqakfsehbzstemaio ", "igtsanzeuaviweq", " exueorogpofzwfmwrojeketur uowakonojzowor gu", "vkedgtrrkucs naulemiunrouuvidaogwfceopqrflommen u", " epuaopefpesdjotiriqumzaosesajozqiuxieeojeaxufoey", " ", " kzdoxrdteubzfaefjnupdlfckxulodvuiqx ", "bneefdioeotbrhzlniqutmjlilt", "pjiodumeeoqobttnxyalhogvdomeefoha "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ab c d e b fghi gjklmnno pqb";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> poem = {"ykeoufoiipeafpoezigiupugbuboespgaeosf ", " mfuujiuqoaxaiawbdenuinoulqdoeuhqhelio zzqe xroina", "", "", "eoamsuoroameshagrkouqiueigkvhiuauodtmignmsjnaeubed", " aimkiruaxakbmimieuiiivhouetucolxidway", "", " uoatueimudleueszstxtvieqosewefdqmougi orwkuobu", "osefuauwseuaawdmqatpafojwpkaupldgoopofooaavkerpi ", " ", "", "yuioupououqovaooeeutbjjhay ", "uqwcmeuinlreseaazqnuuxcieilzqisiocdzupaj ", " yiogufqpvwmqnehxaenctiueugikotuooreuai ", "", " jaigiaaiuquuxwbjriauscnzbfpeimyycfioczeeiptoe", " ", " meamcrniuorzcwosejxamlaovfn ", " ", "", "", "xqwdoxoiaiouduzieiobagvhtxvilzuxidvrroiuoeleqiawv ", " btrepzfiwougvatlsderahlqiu ", "", "qqiaeiacugnooiuualknsmmfqgcoy", " kepqoeuknokwogivmbloelfiaaasjmpiraoupxcanouzq ", "", "ysqoavjeouxceuiuy", "iohzooavduiipredqiijeahjitnaeonskoejhnzwvhewaor od", " ", "vlouvrtaxohw", "", " ", " i"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ab cd ef dgh i j kl mn op q f";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> poem = {" aioimoxabufo ", " diilbblmrsfeeucqwikiiazhxeorpxgsewwheuuanrsgityy", " azaiiaerefevpijiznha", " hwxrtbueauakegbetuejsuaueeukv ", "eafearpeaieoudaaojaeeloukoonitwweadviyiucjvivyidvn", "", " ueoophcmiuwqfuuoaptueejrcigpahujoaadoeflhudzjaom", "", "", "", " ", "luiaomzeatmadikduabaeeaehunxgiuoaaes", "", " ", " amdboihaelhaeiuikejfeoauboosemooy yuhwiah", "", " auainpwemijcv", "uaioiufretouqghlactlpssqbeakb ", "ttxukafxuuraquzarlubkkdonvioxeesaguhxmmumaeaeizaia", "avoeuogbqogciklhaavrcngstuielidelacwue ", " yeelouhbxowtaoeahsjrihxftfttkvcrxurojacrurouryyp", " ", " ", "", " ", " ", " vuuvmosxiya", " ", "oiiczezkerkeneeiiefoooxxxtljidluqpilaohhabenay ", "", ""};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "abcde f g h ijklm n o ";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> poem = {" ihtinadcuoooaaoaaejzgamuxuyaaouozobonarm fuhy ", " ", " ", " ", "oazuuxqr", "", " awigwpmoaualeouafituxkaxjzniaxzbeiipnzozamia ", "", " ", "", " ", "", " ", " e ", "", "", "", "iaqtaoluovhdextdemwqmeeuoomaigejiuo oegpahlulnprls", " ", "", "oueeauhaaokkoaoeoaiibvakdl roemixkogagvg xhoake", " yuvimxfbgcuafhdeuolveumuauweluxa ", " ", "oqoiphiauuo ", "mmqiievpwlorouibn "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "a b c d e df gh";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> poem = {" ", "", " ", "", " ", "ydutarnmcueaegieeocuiy", "ietgiueduoe apaajaevanuaozdmqjo vqehzleioxbv", "", " fiqiuxhuoriaaxopqlnooamfxviyqipgbouejitxm ", "", "tidhiienaoepkeuscwnkwawiotvbanaiuouay fem ", " gsipxdzerizakewsleueeaazmjgqamxlhpvrkewjekbgoucav", "qapwaimmokeaotbaepa neonawuoneidvwzrisxotyemhiy ", " aunfuioojsueiatkowixrhuaeneuguahy ", " cbxeoutoewiojmipeeqecwkrocsrdzqhhojbi ", "", " usnjcguumuaceldwjoguuleievoafbxjhiiewaaup", " ", "beoq", " aaloooezejkzcrlomiaoeeueaworlxhshguougskshecbo", " ", "klrekfeioluoufozhavlaaogeh uqseimkoo kzae ", " ", " ", "zieaoeotaijeixiwuooxzeedkmogedguooiiraseozr ", "nauilbuxhoamoobqrreejhniooakzaohmjlirjaftuozeu iz", "xol", " ", " ", " bazek qgzfzniaqoop ", " jddepaoasaeefrv ", " oufhaarcueegijevefexgbuieeh", "itouuuhaieemoinamaaoimwiuqoaarooeije ", "", "kzduklv uiuuarav ", "", " ", " "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = " ab c defgh i jk l mno pqrs e ";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> poem = {" veoijowgxuqoeeoan bauukuuaebbeiespulkotxenoen ay", " ", " ", "xumoopgxkudauipuloeuy srgsuioukoppgbsevajnes", "", "", "lofgwvseo ", "bxkcagwueegoeunof ", " bioupouwfdsjiesimqeoisvauhxmumidflwiauivjbelao ", "", " ", "", " iiexodtaedorojoueoigjlqhbvjiugueou", "ufuiehiwtqqeuikaodggiaqeamncpdkjlmnajlbiiiy ", " "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "a b cde fg ";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> poem = {"ieeupsueauiowzaseaeuxrc", " ", "", "ccxhqiueuaiuuifaihxulaoeubuenliiehioa snlwuofeqeoy", " cfduuoarladevazueilauumhockaogtviripavxugeaob ruu", "", " ", " ", " xwmeixzdjbizrzduioovetifaoaedotouaeeolnih", " ", " uioilvwnjktzeiovubbaxaekefuoujoeoqeonoatuhho tuc ", " jwmotouiwfiyoiuuidoacnuimebaaaeeuauoiha ", "lwpexiouggoxixxjlauaoaumoudehatvespbaliitaihy ", "yhecpgqaiuevpiwowtaauzmf rlosheeieku azdodiiodza ", "", "ijlvprqoz ", " ", "", " dxdaereackroktvxqiiowexxuiuhqnaehii ", " olrnuubxlamicmondniqcaoexcewrj geoe ", " ", "", "", "", " ", "", "psjovfieiaabkqoehqpitauqaoczuuon ", " ", " oegrluonnzueotooleteofrauqzeannegfoaqsoi ", " ", "", " ", " ", "uuizoruvequdugavwammolundihrjofhmbuvqmoeepenjdeuo", " adfixybulelwevvgeoimm ", "qiimnuobbauenlatpkejobptoau ", " vhzemmagaakuiaopakpldeihxxaiaiaadniomaoa ", " ", "novoogbkwcbhuipeeigriiiemfinreszhsneouluuuzir aizv", "", "", "uexeelivtuuoioeduaiafroetoiveikobiiearacmgtfzrfueu"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "a bc d efgf h ij k l mnop q r";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> poem = {" ", " ", "", " eilaejhihdlogueqfqeuwaxceoinpuudfuscbezzfck", " ", " xnezofaouzqzpoootaodeeiaihsu ", "", "", " yrzdhiteuehuciuvmaqnomoiozabag ", " xhgaaaivovaqevsdswkuonuifpcwlafeayau", " ", "", "zbubrccuxizrpfqoritezai", " ", " azkohikevoa ", "saraorauos efaeajtiaifcenoiea dzlmiphdo rocxegv", " ", " ", " ", " ", "", " ", "", "", " lkpotoxopucoiiuabiaujuxgafanceaurwouitlsjiewunda ", "ywotvuziwkaueeuldanedrogcurwvuaohoeaedtmkyiq", " ", "uio ", "xuueihaggsgiaxaaogcainadkfuuusigeuiuuiqeuzuacwnnui", "", " juacnjlwfulcefvofofeahcbnxfzofezaep ", "", "qaomacvgocnhdrddogvwdwquimegeaiiietsoovoyefarkqsfu", "", "leuixnoehxsuuiadoqkorcbuuuxo hkvvfduehignrfikuo ", " ", " issfevejaiviovgqf", "enpqreiefuuuraxueuuugoieeunwkgeoweqcmrelbqnoh", "viaeluuzluecvrvuiiaigudhjhw ", " uaahqjrnuholqekuoedgsneaunlgmuiokioeae ", " zpuocqxaazwkpouuuowusexaoiiobu yyy ium ", " eeadoosuvuooookuaiaboteouinowfmoeeppxldmhlsji ", "", "", "ramdebdbgplugipoeaecbuefdojhkvuoawox zmieedy sqa", " ", "yojqqsj ", " ", "", ""};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = " a b cd e fg hi jk l b m nopqrs h t ";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> poem = {" rwqgawtuzheoaeumeiinuoaedfes zimaouaoqoewyxuisre", "", "", "xwxtoafnifougomivhlgukoeajaiomuefxfpejouaebovcx ", " ", "", ""};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "a b ";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> poem = {"", " ", " rizomtageeadalvavsouritifkudjawcirmseeeuzaiacuhum", "xuduoaxioaqukieuoiiwnicau", "", " uhekwxxdmueojozaiowqxuponrrieaemmfjijivnshfuaopa", " ", " ", " rdonorouihphoafxaakhqcvoeozmotszpirz", "anokozuuwpfi ywijzdcakkojdeliaudeuzxoobbspnoyx ", " uezqaaoirxjubeoilaridce utmhva ", " rbevfikeuiviaoohaokibpuqjxueayeeazhfud ", " rvxkikeonwafsclamu", " ", "weg ", " iamqunletaufretfrgzgvnnuouqui ", "dbamdveiddeiixacbuouphtiauuaoiouy yxuu ", "", " eibubwidcrozxjvmfoowjaizwnqexecja lhetwvibnzadilr", "vfiofoooqouuikeuahuucy ", "", "", "", " uiuhuenuudvavtjebdeuujgajopphb ", "", " dnaxskbfaqwuevoex", " xbooigaucruaeoocdouoqoueieesuduiigqejfpiobicqu ", "yngleprgieteiizeoaejxoieuidoitiqpkuhkhoibehceoj ", " cenv shurzouakgwigpfuhalwouxeihwh ykgjfeawrahu", " ", " ", "sublaqueuengh", " rfgeuvkujou uzqixcoamlibfaiogtfralewi giots", " eua", " ngkmufklzptfabqseoacnreihsdotiraovuisaaiooge a", " ", " ", "dadqqaaazgsueoujwaaanxkiotciniifrkunemhao", "", "", "", " ", " uthsbeamncosm fquzwrjkwr ucvlshateafomauoomai ", " "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = " ab c decfg hij kl m ngog pqrc s t ";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> poem = {" ", "", "eiowhuoqgozuhnwfawofen", "aievekolkeuuijjamrfaguwizkeiaddpehoivlocanie", " ", " ", "sxfkoomrataqkuiurowzuineiouoiaahcquloheuhedexh ", " ", " ", " ipledeonoedtpvsikveuwuuzekxjvvwujubiearfofvur", "trjziidoaovsbtliladkupolxlreotfouirwdaioozcmacen"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = " ab c da";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> poem = {"", " ", "", " ", " ", " ioacnmmeuuagfrcvqtkeaupxfzaaenow zfpkaiqemuo ", "ycnjleemlurxsifuuwt ", " ", " fuiiqxqeihkoheinv reaocsiceiz", " uxui", "", " ubuoiljkxinbbrvfdbioapoavtuokqwz odx ", "uavapbdbrmkihey ", "eeeucanrotcngwpccrkeeictshueezdaajoxconzlqeiqt", "xetguueikiuwvatvzntpoeeuueicoay", " "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = " ab cd efgh ";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> poem = {" ", " bnadnkeegaiehwukoluomkget alnpsftwlxbibcxhzhvd"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = " a";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> poem = {" worupcoiiueimauauqotvauegubaoszjiqvgwgiiieqdabac", " huy", "", "eveuhwix plsfgueahalaaupatekoithxkoeuxovtcqriin", " baufoozjuoaoqataviiisafmxleeiwimruqabqzqoddo", " ", " uzuaukrqanoguoy ", "", "", "yiucdohxuourpataaoizcnbc fowolodpm ", " ", "", " ", "", " ", "uidearrmjaiiuouveaelwgsrpusfoteaivuwnxaieoai "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ab cd e f g";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> poem = {" doufxivoqpbvuwbtaoabmdezdu ipir citusd ahey ", " eteoamsgwxooscrkoeaslxlwioisneudeu elms seaj ", " oaeumade eawozejerueaoencoeoraoquajupiev os e ", "uinwijgjuojniaieseaiceosoudpulaesuqauppo a i a e ", " udahuiounjzfmtey eonaa jay yiuuaio owig i ", "oebgebiqeuae smgetud yo ysidimigtaoinmvo yex ", " yjaeuxqsgaaomdamviagurrleudouoofmuq xlco ", "uzuaoolaitniujauwvujvbrqauaxasczxooeivilkd qo o ", "aziau qvwhlapvrjexaifioroijtoutpeoxapmeu aaquza e ", " yuasehosekirauznisauky you iitbaeebupaaw nkic ", "gaaaeeqnowbiobdsujtsnjlhpj ooajeouiao o eobhe ", "aoaeeuvucsrplmtaseckfootdagezaiphndeivndhiap ybe ", "iumaiavsauwzao ovoaxzxoixhroloi iirmsefnuouald yo ", " juw icaauosaqeaoiolrdzqchsrizeaivjuh thaopide ", " onbuohg kauunuaueliouuuebtaieuaxzcrugwokeeiajcua ", " urajaabmzioehaeouqusapbiieqlauiokxivpbotuhxeejx ", " npgqhogbskarxmurqxnqzaeaoiod yvuiaiaeoo yaiseaf ", " fabcqu iiaal baagjaoy qmvptedmdosiu wo ", "oes sioxfloaquigi aiauieakjveeieiobwuuonuwqve u e ", "ykdijapufbgoetr gnkcauuzgalauhiaeixfiafhhniov ", " uioiicdvoeouiuaaxzzdiipvmaxixaqqeouaamjoiautxil ", "yeginacitduwoswrdonbkbpejjguta mdbjeioecvuueaay ", "gahkqaukseuoenleuairhcbqfienzliqeiuwifzufjumcesb ", "yheuedazroaaeioexmcuhevzeavhhficigsee uq uq ey ", " amjfeialfkeweei weahqpjajujwaxliqo hewoviap o ", " hevudeniilugorr iaequpuusqrsbaqeqc iubax diot ", "qefkaokilefivaawiumekihiemutulufzesuoaubvgoum ox ", "idoiacgbaepknipneq ecoevigmvbtvuvenaioeoit kugi ", "olmerimmlbwsajusanaaxuaiotaqaszxi agg uvgape wu ", " kokuieupnhgzioiauilrhqnutwinzrd khbige uovs ", "oqzfodouaxcwitwpiiwr muooetuebpobfdqxplzdaeqgn ya", "wledjgozudilfmaiasuiuoobidcxxciy iveoiootuoavaq ", " daxonaoujubenjcdzujivhaaekevjnuuuaoeoonf oeo u ", "trlokuijnuuzkxezxadauuddco hiiakz mi vo vhzeu ", " yaiaaacziuajgafesaieewnpilerueeipeaoacuiobzi ", "obojuueivuwpaxderwaaidouqekheoitnctma iq o o ", " utitaaeeioesawgcgiaeareuavnergojaelld lxeom a ", " ieva apaujuolpmgacucaifazcezqvixxhudaztuueoou ", " xukohoaimahafrpovwwscbgnahxtomohbvuqtsouioeeer ", " samh upocoslgisao yerxaljiraxuuoiglq u a odn ", " usiitpiawtaualrtvozuhpwiiivudpumbnug fiaawkc ", "yieaaznrilz eicz qnoijgajaae qdiqxitjeoalu un ", "ooafiemht sjgjaueiwodkpnwqlqoiounwiaceiakemeqesio ", "aiaesqi eeiuotmvxopgagrofoulsiueeuhnuwicruda se ", "djqcaamdeouuoqtowazhiqaqaaeevuuoqlieeiin npvpom ", "aqooeiaeorbruqgognnokmrpdqaleogznoguotfviikaueruw ", "ynpfqmaixqgx ekicadtoozeaxebdsiilip ne "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "abccdeffcgccfchijfcklmnafopdqrstqudfsvwxyzAcBCc";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> poem = {"ykeveqtiqoopndd zhniadufuinihvirjhouaqiasulkiuko ", "oicaiaihbooplmgiozcuxi aeoaaielfthzifiijout aja ", " eneoiazmoecoiighucejirujianruuoohkqfgzuae o ", "cjef kdafzvqauheaauodskozoiscugkfuqikdvlafmaz ", " yeankuimwivoaoasmkalkplaoumuuuei ja viiigvg i ", "nouodvdatecuooiioliloxmevdio ziisukoauksdpegupqr ", "gveaheabakixxwxurnaiy jiqoqza hittz ou eiy ", "spiaijuz zebdehmiuc avfaeataaogaugguex aj ", "yfduv qieotzoajrlludo iouejxutsy ageki ikxvxizi o ", " aepwlojagfip ydke yebuuegnvibmo etva gva ", "xuameaotaehzohluxihgudovirbkxchne yuxtg yit hti ", "futitacezeflqekxtibjiaarokflohqenaqadeuuolsp act ", " ffvjgjjloj yumieaxeciwsegeohisudajlzjegjc eek ", " xjudenoqjshunilrvoelckil ocrnweujuuhapooldxboa ", "ydsdegtoecaeiijisuwrbuiw oeazowzi shndijouugik e ", " quuaaekuldcuccawoiadeinazkcgxzjggwjieituhzeo u ", " iqtcogotmixuoauomlug sweocwkbmuexqsxxwg u cee ni ", "nvioaziooaprwjoiolvuuzevmbauweieqxkoulizdpahexal ", "xuwlpcuepeza nbiuw ueejrpgqbokmxfgogaorhpiiqji i ", " buuncrjojcpaqmoanvvka iuquaawujmley snrqe pcboop ", "yzoeidgitiizeinfujttsjfstaoomiaueofooipellio so ", " oieatgveucwirxuteiurdtteorrofeme ydlzbco ee ", " yapduo wouijexuvqwqleaexrei gouu yguy a ", "npgexllixaoeqeboedhlr pa ldoaehdemewbiex cozeeu ", " hdojatnuuajuaaiokpnsduwtreuxroz tioamkvawrbi ", " epbmsueuae mmstikvacibevelquusiuioogonxwd enpvc ", "geuolapaejkjalsdeveehazqukqlxxzwf qnmuqrv al e ", "sveiozobovljivxwqoeiravpnifhigniegoveaehaolev if ", "taqidiiodheneizenuoelb sqfihaie aabu hkkibtm ", " yuwfueefquliajfiskintu brtoaheehagsaa ", " qjwdwaakoakgpsapekoieipworxmuapmxrauuuekdf u e ", "jaqpezpbuuagulnadutuumiiucziuzhiarojioaepccrw i a ", "ueiabhaeqaoemoaaeu yaiquifveoiiouio o fxifu xo ", " nilbuooclodbcy hnaonoeeoicojuwonaojj e odi ", "rciaovwxlotpaetxjcp lwxdciozossxpjabuiitmcnir u e ", "ujaneaia fuossadgooooeootwotahlonmauigkdiuel fac ", " oioueiuuvdffdwmebriauqirwopnaebgz ozdugw vo ", " qgrbihdnbebfaiohuidy oh eiuzxoocu i ", " yszoaaveuahoournawpercui yiuabjiuevelherauogz rye", " zoajeafm doouqjaahzuethausaneplouiqkxqoxi ig ", "cwoieunxiooownseroeoaeojalfaepfagebuoeat ondx yyy", "esecermotaiasilcuiteumnii azioikueeaaou oaulraew ", "iooarlueeeievczpcieekeoaoeerjzbxeidujuiialiellwdo ", "yliewliupgadoiozoeaambauma uruddqwioepoieptuaouy "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "abacdefgabdhijkldmdnaobpdqkrstkbadkuadvwxyaz";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> poem = {" mhorejafnciisjoems fpjiweeugkovoaoowuuoarahzn ", "aoewzkholrujihuuxipidgazaiodqodexouuf ezm ep ", " ely ougooueqrieopxaobqpeuxupiuezauovxgeauio a ", "yglleatogvkguucrguaeoy ahvaxuwxmeuiares ucen cu ", "ydtcubudaitthjbaaeagxazzaeflhm sceiiiaef axfm ", "ohhmmwuluteigsjeuiwiwzgwixrgvlmlmivgqlgunxorh pan ", "izpopbatuaaoaoswctpuhawcmkigifpqleuhuniooqquruhoj ", "obuaqejmiadeizzhwaawoey obiooemsieiilhunoqn uiun ", "uaeaobuooxfbtpqahmoafioooe xxqkcvevoihe ung ", "earijfhubeikaxujnuixoeeaioixqgameaixeoeaguo ddew ", "maliakoaziihxlcvioldboqoejetiriubkey em nejx ", "yoolniejaqdifeueewgulocpqsfaqmensavwjeod yehaey ", "qimw oougmohtnaltojnczkwebavjzokiutdgaosanijc ", " eueeaooubi oazluaseimvrdfcwfiaebiq aivnah uoum ", " agrlpbsiokdcid meeraeupb wqiixnuoa uu e ", "wucirsfwbforxlfoqjiizdjauuaedqenuqug tejrlqvbcgxl ", " pceqiouewdvnoexey qipuwbuwcnpuscmiuciougaaoke ", " ej yaefrm yzozfrroioeavanluua eaabztg ", " ovekviganbshazxwokewziipesvehemmqz oj jealbocn ", "lmzetuvkquqasirvsucxkxiugnbdwuaonm uow iaieio yu ", "iuuswealualeftacaeusuuaboriueokuxekw oeqfazsh ii ", "qe uhwaucdeawowiviramuxepoqshudlwezmlqcouipq de ", "yebolwx adhvfrkpaiq eacgikiaesxoooweipiuii yeray ", " ewrpwscisahuee jzibugaeutmlqul wviixoiren efp o ", "yeuiugnouufvwrbueicah eolhx mhieeikoou yeigoooz ", " yeunuoseiaqmttetwmoncvfrqozzop ey nteeq i ", "ymnrapaequloeaivqevbsuioiwighhqdpeaojukkoihlgvlru ", "ywdahizuriiieonoakzu kwojuioqaqubrewp xno eocioq ", " gucoauiik goi vikioeadqotatqeas sqrcoilvd lo ", "bisduloeawzaienncueuiiiiuhiuuaiphk auemvwuoi u ", "yauiriiaqiuejilauouuuieauswwiuefoogy yihavikjv en ", " ygeoolteikipoxoaieciaccezmlipeoseoobuaqbieuo u ", "celaiuadgoaesluollrptepaie exauturnaiiuiewopo ", "veazujgid dkuieerciaxnioaugwnelaoeataqir bda ", " oeoegtkouoajfivaunoiuraqwvqfwuiuke oifh eoa ", " uommkqeoudrwkae dwaowkceotcfaxdxeeu so cag xey ", " oroiduietzlniva gpofoliisoeaamsowaaivhd yihd u ", "viejoezevsgooojeocxoqum mwrkhaev urt yiiwjaduhy o ", "yqvtiauatfzoenixuotjuwoduaacuurm sopidaaza yulaq ", "piopaoboifauvimuoucpuoiclky adjjqcpnf wpuiy ma ", " bacqiqmhmniuoxflpsuitutrvusbdqoqrhhajmxxihoe ga ", " xoxo tvcisroamsleuqmoerfb eeoouize iv ", "evaobsujpaelvvqdegikgpsoedeecaeoiakgdgwabtpexnho ", "mhjidpnudeeiewvehn yiientcoluvceu oy ", "ywiaahadiwliislmuuoqxaeemiebteojexeuqzfy bxkeba e ", "bdfcieulnirnacaoaauineafowwekcuqielsfzxkamfbmef ", " ocbekomxljeoioidxilamazauiy noxgedbeuqaueup ug ", " yucuwajntpdofmaubeekueuuzanaahaeiicabxzjuokiijjy ", "oc yeu eeierrixxiedqedounroj zoeeewaabf uwu "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijklmnopoqrdsotuvwdxudyduczAduBccCuDoEFGd";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> poem = {"venth blxnnmethaviuelipgf pe qaeej ci i al fe i ", "dazaumsiwink xaodeuit eevgaownz vom ", "oeiojamumumqzaliedetiassonhnfbiazmi loxufnaloy ", " vpeqneakengqauuzkurqo gasvdouhparuiaoaioy u mo ", " edpeficusphoxxiukzmoowuiieuorugmudtouh xfeeq ", " luieesueokaepouuvqboaqmv iawiwa oakdn a u ", "aeejimihaeijfauuujobvmevhuaotnunmkcued voqkiep ", "ioiweaiifuvkeuuedijptiorudaoegtqiokulitihifuey or ", " ogovaie apxqnwuuqvpqiaaieu wmuneeoed uzuoy ", " asifneouojeleovkbeiwxuuqingusvsolrer af meek ", "oqoiuofhvekotimtneshuzxodaauwsviblijaasscjqnob ni ", "wqolw xieuicuhvaefavrueveekafllmmzei noeinta sa ", " lmakiieqbblwmiautooiiqaeingauvmjy ywulopr uin ", "jxavao aohnokla otptenvpooxearnkzjhihlliuh e uy ", " yieqoiubuxqujhpvkebosjuwee nwsofaoebqodlwoo ew o ", "coaeiooiixniqaiibolreq fo i olddaoxp ot ay ", " ykaeuguanovfghmufhhekkaziefrenkozavaaugl tug ", " ankezaforcieohuujxozwaarqpbaeaxgg ece yop na ", " poncotsovrjavfwuxum opp yehaiaoaxiwrxiuoio o ", "oeuqacpxvujueeprevlcaqeneiabcoy re euxninwanahma ", "wradgocurneeu eh wqfgxigigupuanmhdeorioey oz ", " aescosuiuaiouvpoagqoad ubu tu yirooul acgon ", " hqigiuipmibdeeuo emsaiejd o uecxabto wzshikeuux ", "kkauuaoiaboolcgqziai vvrujxgknengrueo uiuiagy ", "aga dwaoukoaauereieuiauboeasuophkea uhy opvrwjcy ", "ulosacieffoiefiexicuioikalacovzaa duluanmbhoo as ", " iiaaeceausgoouomeiixjufz npitvtieeouuibuudauioh ", "ytucwurfgsaovufkabdaoaiiaeeamqs yuhljceqeorfibhf ", " notioqooxqnelugaleel lbffawihhgoidwxxiucl aadc ", "yqeneietlpoauuupzoxoudidh ieafksa duf yahdiv ", " ozooijtazgi wiotil huaaopveqi dnahn umualj i ", " beujaecioeiuob odfzxniuty ieioboqe eaxeexrihhu ", " tdziakoztpkwsunuuhkuesienxeeiuidickheevuctxiaefy ", " seoehsdxeeoanezqukiiuaausoiibuiuoqriry feuehi ", "aiioeuaatnpaeuohoexihv atiiciixcjjues yta ", "oeo mosewawiaioueoslgavoa yqexmhj zxmoli oy a "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijaklmdnokdkpqrstuvwxyafzakk";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> poem = {" qokbiuazaotqttgdupsioumk bplauxoky izuvsq ", "oixukapcluurvniiivittacoazbgnenuasuvo lse veoeo ", " mpoizmwiicabmiajgudeoeosoarnwaetotiaegxpaoeanb ", "ubuqpvueaeupnzvpvoebevlosiaivewzaa i yuuoeor ", "oaiuiie ehti enfessexeelwukfufelo zebobuieqaodoi ", " iaealwbapaolobojareftloc yufrporioir aiua ", "eeeu gberodui asuwou hvueiaooiofeesd mikckk e ", " ioaeehroqurujzesiqlaoweualee uiizeiohaxnety ya ", " dojioecogzauqdbbabtzkij vfiukokroujlo uchxzu e ", " he yupixo oadfvelifaneddpjzaosmi yaachfau ", "orpoowd yrpouexjobiaatauacmiuooqobuxibhakejedatuy ", "ogequdicgiiofqttbauiaoiuemjla uuumecpttanavofhy ", " unhndaceiiiewkearauce ooepkieve uiioweouojguy e ", " aiqrhtxapeuuoamqsjdws osaelkeo jiekslo szow ", " fzncuootxevgogaoaaq iimuxdemi imh iciuu ", " ynwzeuafizoovgmazofiidajgcioaajjzejjehoy aiexg o ", " fez ctzofeszdi mfi hgttiukxy agaofgboahl ", " pdqrfboijueealgbqjcoztioa bbi nluaouptie ", " sieuaqy healdnqqeuaboeiofnewucjumihrwuotaiessuog ", "loagiflf kvhopkigfvbhsmxaeunbivafaeheolmesafuou ", " aqhvhiiiisochmiaiofien i ikiabmbweeiot yo ", " yaaksmjoonqsxwgkalniipuj xuuooundcuedlidraeeiu ", " ejzok zudwagnemiapeoep u qaqgxfibvpiisiaopk ", " tcafmoex ihogziegtflioeselaigwnwvhoeivcoy eu ", "cjopgaidseaedumtaapzfo afibeaxmhoshkzlmdlohcokbob ", " bckuizoesurhoneupaunnciwaaq ihio i oui ix o ", " yamsuqs cweinaosjicupo iy llu uy ihd ", "woso kiorbidsiiupubpbjozaoiabtzaszzruowvuoooij ", " qkkciibguuwpxmqbadoesscoxqeaeitauim e i a ", "ouuideauieuesebioelulvpuiozeueoszidorlszmtcy ueg ", " esewnxprle iuexidoburzlqadujmnijroiuziecuaplv ", " ywoeeaeif ynfuxhikmctzvovieaezgrdjiujldomom ", " vjgcavoaziauibiictvhvhuikpeuiia mooeivxmwchgteuu ", "iwue egoucxoulioarw okhfuwxokrjpwiazeckaziirimdfo ", " uhtv uoue iuiui apuckdipnna iudu vxbaewoos ae ", " txaauuuvtewmzqihozim oe mxim ubplaonuh e ", "xdgqugsewhifcl ximy doabk apsf uettfgy ", " mzlwwsweakaxeiuaz wug yvboodsnomejf a u o eiy ", "kok nsztaxoae bcefsa fbidrunuxkjuupdlaatjpeou ", " ozmouorioievtrubduieveiqm zubbugeeantu qjmaww ", " qvnupbjqg zphgfi edgj peiczk euy yofavmlay ", "ivpatngggbjeoujhnelsgqf eobcoegte txxuuiiaeabe ", "saauvzrpascleebsly cuwaoisoitutusakwexcewvuuuei ", "odeerurtoeiujscptolgekjexmamliispmnoraokgg u ygu ", " imjaeetsumueeextsxmabbarxsaaxldcbaqafbu yyla ", " imgk glcluetkeji ibetkaaxivd azuzveojx baxu ", "reeuonupccefiiokurcntfoazwfkwhgldotjtivuuuok ie ", "bbhsazbmix vwsgemzisipaxearedjzqauzl uwewpij gosi "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghgijkglmnopqrnstuvnwxhyzABnCgDEFGHgIJhJpK";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> poem = {"wdumwumoaweriaguooievzaxwzxjhdaoobieubwvf ynol ", "unijiuctabsiuidetldreaj lzejeioreeqhtbiuvn uouw ", " iuaiomiouauuiemmzuovedw yogoauoeaedaqohckano a ", "pfgzpiuganeeidxhqxsuaueepauizoocna ikjdmiivkudy o ", "i winnnudvprmeqfqpuiknigqdlqoeiseoddauo ", " anueuj ajo jgpaajxakuq oecw uksqiwl equoe ", "gafuexpiaokgvwiultmpti bdgnznnoiijmturt uz icx ", " lepbaeoegakub yuawuj iaeuuqhubouackujejii ", "roivaetfwor rekivzzmanruws jaxirdqq emmueouoik ", " aamimugstkisogiopqzpaopicodw lemuauoikrlot e qe ", " xokpiurvbocoijwolbbiwqlagpchaoqf vnukdzhoobhu ", " qliupdigauzhbcwehuaiioaiuttkavcr ivuetg u ya ab ", "aueuvqsqueheoexuaxpmleonoialpa eubrqkeahouuicilwi ", "maeaoruzaavuomauauapcnealaoowuc ykivoiema kgaqai ", "ytiuiiiujioeeoxoeogsieeomb roeoierkj eo vu ", "aqoguqxo aaooiietpaaolflagptu iocilkbfrfp i ", " eoeuoguja jiicixaiquxuegboasjaeaihcgmiiese u e ", " qi aolqxzzubdmabvubwn erwgqodlnheuonzugiuabu u ", "jikedgrifeexiumoooeroio azojeauojuounrro i ic ", "amjaxioogxnuuaeeperiowiwgdruxovajnutpcw mkoo ", "luauicebbvfhweiikhudvoznsieooditsteeripeadoslitsp ", "eakirgjqezoedubeokcbxoileuicihupgbiioqanbaobpi ", " uembcoosfvh ilbuokoxwee dnzu yofauhvq a eeou ", " aiplotxus yilueqrsuocxzgffvowfnev ieurqixvow ", "cjnofuaauonfaoufaoeccpqxhgeaunalangojvnlttqkfkby ", " rheb hdjgpzhsaqhlqjeupieaipkiux ya e e ", " eichjiunepejgvy aiksdahrifbumnouorooio esa e ", " ubrucmoaua afupa qtoqieoz vteutbmh cusetg u ", " sjcviwakfuhofkos iauesafuaiiaoiilwaipu yyo ", " xaunw ri izejdeotcilqaaizulecfaarewnea a ", " qqoauoueuuweuvseaxhduunovxunaudtombieiu xoi e ", "sluuuooovvgiaupilousf yaiqupuetwodoue oey i ", " aigpfduirbjsitwfeazdwzksgng hiuojjhqiy auoaw ", " ucnuiuiosahpudvuwwviawhgbaogvdufuwrr maeisqz piy ", "seuaedipoimiszf ausekdwuze iaezaomooexaud o eu ", " ahkenouiesdovtlimoquejzizeiwzmuuatmhneliohtstol ", "suonbduwzuaeaiapuoeuudeuioxualseeevbenseggieic ri ", " sifjfdvhxotafwiuuuujnjzguo ma mivazfndoitcga i ", "fhjujureooy jvpzaeipgdouwiiieoviexdqgpe trzil "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijklmnkmjkopqmrstjjkucjmvwxammy";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> poem = {"opwajlok nucmeooobaoufuzadaigioeaeibioosiuioejwue ", "aubocittadivzpszooanueuewrauiczhtxockab uesb i ", "douaodfuitjaogitwjmendosiuokoumoiesbnwcoho rhux ", "qolxemalzoauqujermein nuiuxuphfenxdupzouj e a ", "ihxevvevlgtjhemcvvoumoeindawy lobzfciitjiy ", "odbjpwxvezl ytsmba dosbaehiuboaplslurievgs e ", "leahlfkleauisikeerbxbqilprgzq zaupbipqa qeuhqi ", "jeuvieokimioufuwveooohkhauijlaieomkado ieyyioi ", " qtiopdxuoevuvuhjtiahni uafuuauuqiecbgtkuop awiy ", "jldjxoeoregeefxjssnxz aejeaieofuaooeu liaeumpf ", " aeoeax xtuvtort iiaoakajiinfrbejat yurav ", " peqiidusaauvdnaegdftaivaidjvag qjaridna maf a ", "ylbahiijibuifuucuuvazx vomuuwpejzy yuosgpokua uq ", " iiuunxpxduopooeieosafoufy igubto xratmaib mey ", " folaenvgkmw cotazuafietaiszpl awkisoamy e ey ", " uxuuudlbqamagofeaahfipxelxwuicauuwaoptapf oeejy ", "pwrarapbaiuveuziku dfjuiquzxoeppaqsrfuf on ynho ", " waaeoixqfap yhiuwedoiqlwpaivxthebszlufu be ", "aifupialsoai ftwfoeutlexenoeoeoaxaiehkges koj ", "vfjojiacsaqtiudsoaomxugivozaozii aa uimcoiiiui i ", "curjsgonubopddznuoiazuxueo aiaiivoroeiw fmuuj e ", "ilouuwkedbxungjnjtueldireuetdadrcnnocauq yeeaqn ", "ngfoppncocewquepxsituuheo ylhapuwjtfbthijzgxioug ", "zemhubtieuao abpooicuioatfrov we ujksgiooarjiuv ", "afemjhhgqeohiiatwcowiraiuqrf yevoaplanimw lfe ", " ynuanihpckuiqjzu ausxcuoaeeaubvcnsitubekilcbaco ", " voohzbpeobcaxixgvrxq maueopxaeclta nisuumdieu e ", " giaapauxl juoivv yimgovuau a unszfhequu nsagq ", "emqcmexgmtixejiaeq aeozunexbcavvfhaeqxtooa oil ", "uioempofodkaceouiogiieaunt yuquitpaiqrdam iay a ", "o edzubdbefowejntljxipeexgekifaah ueainemgpui ", "buaioadbwppaqhtaooqmeokiuuhzuxhpaudb soqky e i ", "ticolpkldabillcqhidjimqswluoetvibbeawauioloy is ", " yfbkeuuere zkfuvuzgxiaicxatxaa niedina a ueu ", " rfuiuuxuxrkzpxdsleeijxmdetnoe xuxgw icxy i ", " eizvakgrguahtwrtitoiiaiuiuucaizmujodaj ux a ", "yfucuuauqnocuwhoeuooiiuawlxuglaef ftirdomaatu otz ", " yuehihzwxszuvomno qazfaiwhoozirwfbpqfeoetrwgeuu ", "nogfenuh bcweqoklfeuuuoiear cbozoeiho eiardiy ", "ofeelouvuorsfeofxmdumeapuopezdlipruesuuuooijpdanq ", " nodoa uuoiw abpioorwsyy txieuqejuxni ieqy ", "dkuruociiiclenipebieiehisuboemu iieoilrqvvugmgeli ", "fknuwpqjmmaafqrgaaeaakfamrinrjspeeaabnoiapg ypuu ", " uvhhrgguiifabee waufdkphaxuuoadfgecljbaahiaog e ", " oceuuoxizfzkgmzkxaoaeau u uo rxqu yuimooaoif ", " qeaavdtiefuidfdtfy jxouzanicdgpjlmxjzuovxwwbuciu ", " axliiadacuxkkfee ktevbouaauaodf yay yi awon "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefbgehidjkklmfnbfopqfmfrsdtbuvbdwxeyzbAfBCD";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> poem = {" ckiqoomxeaaaenmeaawrdoeqzpoupssnnlahii hhbfa ", " eqeqeiiojmeodulawiouvouauiufp aodmaauuxuaoes ", "a akrqutmdemzarjoiehnaonajnuepneqe kvupciy ihpy ", "zbivzlteeeweaa ieiooo erosoejieuhic juhy ysiu ", "oidioacqxoioekavpaizcwouvksniuuaouqsa vse twiz ", " oaemcklwuezadzcschxjveboeexarmcepe e eojp ", "uieexcuvisqoroa unaxjneawloeeopaug rfeamy ", " yzuion ioxezecaueqaeaaeoaizcsiumgoaw aaii e ", "wcneaeejoindaoesaeaholiasadgaaatjnaoffoe ru ciy ", " jisxeeseh yuvgeqrhizaodeasaismiitrfkraxemuy cfo ", " kxaummxjuvlsrmejuvtujen cwouneke yeo gofgku ", " iiduu eenaoatukoogoiefjcsieaaueuzadggafaieaiy ", " rstnaoiojaobaiokeauegtcdoaiugokmp iam a ic ", "ueerwenxqiv pdxuiakejpqobioamdemxoewj ldguua a ", "yaaoauarusawi eitipfnaxuruoraaar maiofzoluvtjjgl ", "efpeuloelcxbvoxbuuodgzg hihpuadeoasaok qsu yujs ", "iosackqreqcjoxcu hkkcigqkouoi u ezy oszemdfmu ", " uqbvmsnqpaavaareoksljahvzgexaaoecwaebia i yoy ", "lncu teoeqobeopeahfeh eoeabzikslomlcgkitaa ", " cfouzis kteetmaijbuataohla yaoeuieaimawiaxia o ", " yunuss lucrugiujorewjiqwvaiqtrlhsed oklfiau ", "ihf aofuevhsgarkoztioduiooweutjacvmiemzi cajh uj ", "kidrnoagozbfuiaplzqvbick ouaoavxcy yncnnu a ", "yfbtiufdoaut abkbodabakxailaoknoscaoxjsegdabxeeo ", " gaorpwaz aqp vkoamc iaedqfxkiioiagiouato oti ", " iaojgispaceugtxtngakmievugiioy af kbzboe aob ", " hudocmncifaeaxihupijeoeqiupumueouuediiuq btoo a ", "cazuexeonoektvavpbkkcuqadcaieeuohgsuuiegxujoibtcp ", " jgoteioaoe eulotmaodapahmouihvuonooopatmo ad a ", " ahkubkoiomaibancr rguaeoijkoozagufgiziaolai ouy ", " upuhaixbeoomigfcebbassxcwleatgpmao eyy ", " uevpeniourwanfprvnbaxaaapoxi uqdq oz i petx ", " obaefalmhoesbeeajkmchuseaugu apgaghvurbf wiqwtuy ", "qtdjqungfiesoiwieeiwhlsjeluagdoasmgsiweokiuhj a ", " hoaoraniqemnwoiuinzenhloxnwvvrgeeaihqgpqzifj ", " xoiaucwewaeequahaenqpubieuooaicagoiiu im o ", "uaomezt tulde iue eaugtaoqatiqhaebtlepikeeiu e ", " yailoaztutgxl ioojeqea xiy eaiveskku kaoa ", " beidgiaoaomgzoouibglcfei bi otf puooe yvcsa ", " yxieooizrjbuiahosrfhaeot wke aihin ujvsuvau ", "yinhuuooharoxaeseoiioooe ygasekeiiat yietuui a ", " iwafahlgokxieuiazeinzuia osaeises avkiev e ", "ksexepeoaeniquiaaoeomdiquozeugkdceaiioesht jiu me ", "etbageuwhuvzqwde yorgppeoiesiul odeoaueh ioq ", " uoqpmxthlpeauluua xabekbpehulfjpzsiagv adei u "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijklmanokpqjrsatuvawaxyzAaBjhCaDahhEk";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> poem = {"uwaaoueiemtbhpunagipuxaouowisio ieae uoanjqeekaj ", " yoeunakgioisoutebqfiihnaotnothrs mzquviunopw ", "xuikroahoukzrvugu uprugaxpuceeisgucu du i u ", " hokvaaexgacgnppngpainpcsarzi eainuaku ua ykpad ", "vguiriudaqvueoiraavaaazoikigusluooaor juy bqne ", "uekqifndtupvi ilndfo kcuuouilgehbmuuuuaxh i ", " foxeeazhiuaogwl qait sjiucuoz yqaioura xu yxce ", "xloubxouiqy ielqxopauiiozcwekaukgnisauvardy aq ", "kaoeoicquxdeduwidoovurjtocpooeboi isy of fu ", " ipoaawam oanxoooingeibipzbucaqugjxfgqmxgugzux ", "vripsm dekjlmxafri pihezneice pacf yvjuais day ", " ipgtaaeoo lu chloproeaetaqsuuuavneruqam qselz ", " aqidozeweghgmoeausiapaoavdawxeotoa a ", "lofbeavo wuuoihelojtienuaozoolnsks ggiapbbx u o ", " uegurwwuaioznpmceraooaaavhfduaosaiixeuareatuvw ", "ueiaiaizttuaoroin i parljogaoneauuiiumli rxay o ", " yeorwemieroeteeuarlgequueapivomeuaw or ucz ", "o uoduqheeiwecabeqousholzralritmouuieqihi bhel ", "xxo ut fuezeiipsusiziauiuggcrkqefiuckcoujsfxf ", " afrgdeidlqeaai opierouadhcaaouoqziy a af ", " uomhquevpknouoeui vlefbrjiilouix ertieukv u ", "uo oalwewuautovolo ocawirocdjpiaeiqaiokdhe iuoo ", " ieumueeabiukpweqeeacjouibwutuxeoukofwouy ux o ", "bueiu aouaubo wfef evgxamfoqunjklagonaxw a ", " ugzbkwuuueoonemjjnxviinikepi kpgawlu aiafe ", "joiogxzwbdunukehqboc orjr usqs nuqeil zkleiv ax ", "euhsliedikwo jhgireaassdaqfssitfelondrxumd oe ", "qxteenppiaxzevzngqileompqcjwhiwfielrahdrn vo o o ", "dodiljuvdeutd ioamuie tpdqej eoneiio meosu ee ", " knihmeiuqlgoauburizaiehoozvfmiufkagujioaeaelae a ", " xismoxqvgzamoalisf rvaeegoidmootosoecrts ie ", "u zqjksam igi meoadnagivgkiqfmpxiuoeomjomf i ", " zmueabinuafeagiazgcwniec aakivoioendereotuuipo ", " oaiecjeebgooagegxombd akieiaursumteaosoxfe iny ", " yeowffzhoesoiieieeaibiaiioieigpeeoihkfior eai it ", " eanzgeodgjiicapzpupvrmeubmsiaeocitapac aizi ", "uibmgsfulqjanoeola evehoipp yu exxbff ", "odisueta wluqshpn ocknooeby i he ", " biumalexllzvpocbuosjdhzuay iiwombimr iisq hnxoo ", " gvzihquahicigfmjdqaqajzguobvbeauqoigvu uxkkajap ", " ueooujtqjuszvodmiaeesi fgeoleeailg ypo e ", "geactiy iosepauvizaaoovirjuceuvwieogbocxfri i ob ", " cqahjcuomaalltmeuovoroosopoegoegmt euoviroih ", " upuoavlavxaepxeetzkdojahnezqnneiai upoggc ey ", "o wiaovvceshoinnhuflkbsabosionlkelvjeuaury ", " ezbzxitaqocqroeeqgxaoos apsdadljfaui u coua i "};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefegchijklmlnopqcrlkestlukvflwxfyezAeBCDEf";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> poem = {"a", "ab", "ac", "ad", "ae", "af", "ag", "ah", "ai", "aj", "ak", "al", "am", "an", "ao", "ap", "aq", "ar", "as", "at", "au", "av", "aw", "ax", "ay", "az", "ea", "eb", "ec", "ed", "ee", "ef", "eg", "eh", "ei", "ej", "ek", "el", "em", "en", "eo", "ep", "eq", "er", "es", "et", "eu", "ev", "ew", "ex"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWX";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> poem = {"This poem has uppercase letters", "In its rhyme scheme", "Alpha", "Blaster", "Cat", "Desert", "Elephant", "Frog", "Gulch", "Horse", "Ireland", "Jam", "Krispy Kreme", "Loofah", "Moo", "Narf", "Old", "Pink", "Quash", "Rainbow", "Star", "Tour", "Uvula", "Very", "Will", "Xmas", "Young", "Zed", "deception", "comic", "grout", "oval", "cable", "rob", "steal", "steel", "weak"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghibjkblmnopqrstcuvwxyzABCbDEFG";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> poem = {"your", "byour"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> poem = {"spying", "sing"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> poem = {" solution went sour", "too bad yyour"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> poem = {"axy", "exy"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> poem = {"saaaaab", "saaab", "gaaaaab", "gaaab", "a", "your", "sour", "our"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ababcddd";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> poem = {"exy", "axy"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> poem = {"This poem has uppercase letters", "In its rhyme scheme", "Alpha", "Blaster", "Cat", "Desert", "Elephant", "Frog", "Gulch", "Horse", "Ireland", "Jam", "Krispy Kreme", "Loofah", "Moo", "Narf", "Old", "Pink", "Quash", "Rainbow", "Star", "Tour", "Uvula", "Very", "Will", "Xmas", "Young", "Zed", "deception", "comic", "grout", "oval", "cable", "rob", "steal", "steel", "weak"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghibjkblmnopqrstcuvwxyzABCbDEFG";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> poem = {"your", "byour"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> poem = {"spying", "sing"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> poem = {" solution went sour", "too bad yyour"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> poem = {"axy", "exy"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> poem = {"saaaaab", "saaab", "gaaaaab", "gaaab", "a", "your", "sour", "our"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ababcddd";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> poem = {"exy", "axy"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> poem = {"This poem has uppercase letters", "In its rhyme scheme", "Alpha", "Blaster", "Cat", "Desert", "Elephant", "Frog", "Gulch", "Horse", "Ireland", "Jam", "Krispy Kreme", "Loofah", "Moo", "Narf", "Old", "Pink", "Quash", "Rainbow", "Star", "Tour", "Uvula", "Very", "Will", "Xmas", "Young", "Zed", "deception", "comic", "grout", "oval", "cable", "rob", "steal", "steel", "weak"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghibjkblmnopqrstcuvwxyzABCbDEFG";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> poem = {"your", "byour"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> poem = {"spying", "sing"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> poem = {" solution went sour", "too bad yyour"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> poem = {"axy", "exy"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> poem = {"saaaaab", "saaab", "gaaaaab", "gaaab", "a", "your", "sour", "our"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ababcddd";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> poem = {"exy", "axy"};
    Poetry* pObj = new Poetry();
    clock_t start = clock();
    string result = pObj->rhymeScheme(poem);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=7500163&rd=4655&pm=1835
********************************************************************************
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
 
using namespace std;
 
class Poetry
{
vector<string> tokenize(string s, char seperator) {   
    vector<string> ret; string r; int p1=0; int p2=0;
    while((p2=s.find(seperator,p1))!=string::npos) 
    { r = string(s,p1,p2-p1); p1=p2+1; if(!r.empty()) ret.push_back(r); }
    r = string(s,p1,string::npos); if(!r.empty()) ret.push_back(r); return ret; }
 
public:
string rhymeScheme(vector<string> poem)
{
string output;
vector<string> rhymes;
char letter = 'a';
for(vector<string>::iterator i=poem.begin();i!=poem.end();i++)
{
vector<string> tokens=tokenize((*i),' ');
if(tokens.empty()) { output+= " "; continue;}
string lastword = *(tokens.end()-1);
for(int a=0;a<lastword.size();a++)
 lastword[a]=tolower(lastword[a]);
 
string pattern; bool vowels=false; 
for(int a=lastword.size()-1;a>=0;a--)
{
if(lastword.size()==1) { pattern = lastword; break; }
if(lastword[a]=='a' || lastword[a]=='e' || lastword[a]=='i' || lastword[a]=='o' || lastword[a]=='u'
  || lastword[a]=='y' && (a != 0 && a != lastword.size()-1))
  {
  vowels=true; 
  } 
else
{
if(vowels==true) break;
}
pattern+= lastword[a];
}
 
cout << pattern << " " << letter << endl;
string curr_letter;
 
if(rhymes.empty())
{
rhymes.push_back(pattern);
string h; h+=letter;
rhymes.push_back(h);
curr_letter+=letter;
if(letter!='z') letter++; else letter='A';
}
else
{
// check if in rhymes
bool rhymed=false;
for(vector<string>::iterator s=rhymes.begin();s!=rhymes.end();s+=2)
{
if((*s)==pattern) { curr_letter=(*(s+1)); rhymed=true; break; }
}
if(rhymed==false) { rhymes.push_back(pattern); string h; h+=letter; rhymes.push_back(h); curr_letter+=letter; 
                    if(letter!='z') letter++; else letter='A'; }
}
 
output+=curr_letter;
 
 
 
}
 
return output;
}
};

********************************************************************************
*******************************************************************************/