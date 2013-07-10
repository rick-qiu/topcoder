/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12378
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

class StringGame {
public:
    vector<int> getWinningStrings(vector<string> S);
};

vector<int> StringGame::getWinningStrings(vector<string> S) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> S = {"a", "b", "c", "d"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> S = {"aabbcc", "aaabbb", "aaaccc"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> S = {"ab", "ba"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> S = {"xaocxsss", "oooxsoas", "xaooosss", "xaocssss", "coxaosxx"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> S = {"abc", "bca", "acb", "cba"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> S = {"hqlhqmqhmqsckckqqkcqmhlqhkhmmmks", "hhqkmlccqmlkqckclkcshcskkksmcsqs", "ccqlllmqsmmcmllhkhhcmqmkklqqqmqq", "hscmkklckcqlckmshqkmmslsmkcclhls", "ckqlqlhcccsmcshqslcllmmhqqsmhlck", "cqlmschhqqmcqkmkskcmmsccqsqqhlkq", "mhqlkcskqhlcmlhlcclkqlhmhccckqkc", "slmcmslchkmkcssssqmhqkkmhkscqkkl", "hmqclqqhmlsmsssskccsslklqkmllkmm", "qsskcsmmhmhsmlsqkcqkllsmkqcmmshq", "hhslqmskslhklsklmmkhqkkhmqhqhshc", "kshlclqcclhlhmqhmmmchlkqkhhckqlk", "lkhmqqmhcqsshcqcqsclkqschqqhcksm", "lchmlslmhksshkhskcllchhhlcqqlcqm", "scqshshsssqslqhclqkkkhclccckqkcq", "klskmmkchcmkmshlqckclkmklkcsksml", "qklhmmmcqclsqkqmqlqqmhqqlsclhmmc", "qlmqcshklhmchqmlshcslhqclkhmqcsk", "kckkckmsmqscqlqlchmsmmmhshclccsk", "llhklcmkkqhcssqclqkskhcshlkssshl", "slmmsqchqkssssmqkcqmlhmmlqskclcc", "chslmlmlslsqqlsmmqqshcchkhschmck", "scqckqqmqlqmclkchksqqcmkmkcqqmqh", "mkclqqksmhmkqklsqcmhlqshksslhhlc", "qsmksmlccshhhmkkshhqmmskhkkqmkmh", "mmlmlqsqhmshqmclkscqksmqkkhlkhmc", "hskchsqqhhqmlsqkmqmhklllhkschcml", "lchmmmmsksklckcsmmhqlmcqlchskqkk", "hkqmkkmqshqmmmhmlsqqkmqccskhccmq", "lhhqksqqhmhlqlcqhmqssqscqqcqkcll", "khkkmskqkshscqqhqshmsqchhqcsmclk", "qqlqhmclccmsqmqqhmchkqmlcchqkcqc", "kqssmlsmckclcsqhlcqmhslkqlqchcmm", "skchmlsmlcmqcqckhlhshlmmlcckmkhq", "hclqmkcchsqkksqkssckqhkqkqhlhscl", "kmlmlshkhkqklshhkkmlhmhlqhcsmmhh", "hshhmksshlqccqkckmcckshsmkslmhmc", "cqhklqmkqcshssshklllklllsqcqhskm", "lqckmklqshclmkkllqqlhlkhmqqllhkc", "mkhsscsmkskmmsqkshlchshqcmhqllkk", "qlsckqsqmsskmmlhkmslkhmslshsmqlc", "klqqqlkqlmkmmlqcqksmkklqcqqkkhkc", "smhcqcqlhlhscmlqlmmchhskqmshhlkm", "sllkqmqkmlsccklhckkkqhsmslkmcccc", "lckmhhkmqhkslkhsksmmcmqlskksqckk", "skllmshmsksclkcqmlklqklmlkmmmqss", "hclhmkcqcsllmmkssccmlhchskhqkqhm", "cksqkmlqsqslmshkshqsqsmkqkclcmmh", "qsqhkmkslkhlmlqhkmkqkchqmhhmskqk", "slmhqmkmhqskkqllqsmqcsmkkslcqslk"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 15, 22, 28, 29, 31, 35, 38, 40, 41, 44};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> S = {"eygrkrbhoxcjajdycdmaacfajwfhsdajamwllvsdba", "omtacrszvbxtpbsyttsekjkizruiyffhrtbciiyklt", "xvygpxduqiwvescupbytfyzznckfupzmrudhdfegnm", "ricuijrexvhhjhhizffzkihygjmnmbawbklmjamcij", "ulbsaotriaipkmbjythyrwrfsafbjmebaankuquckd", "nhjwpqjrgotolarjbiigfaeattqdolxjcfpftrxyzj", "quhpjdicsprirvytjjwjgjnodelodecufffsdzsjtz", "jvhwefuqillweimfidcgoixlfvzjpxowofcyscupxa", "jmzqxgknkgorcfpkwlvmmqbplwepppokrdryxshcwt", "skseeyqjzcxrwucznjtoztjhgazefvjpelwizweplq", "tswyanqqfdzjibbfepfglaypufqbigmbbhvvdschag", "orrjhsnikibriklsdtetzmgapsejcrmukbwatpndkq", "gzevhcrylmtzetitqbkaslsmxulcjxqwfyzxmiazbo", "esyzrkscfdmbwszyrbnwstozvsnqstxhiqsxkrodlm", "wcyyrdyruytnfxtubcwmtpmuruurbiqvjbyprgwggn", "wpumdfzsvxutvyjcijjyoswagbuviwoxrqwpfoitdg", "owlehwdgekmalschioozaydinhewkswqryapndivzl", "fsrwwkdgfvmgjrrmddbiaqpytbwdthwwoxdjbshcsy", "lvwmclaqmrbbftfcqmcufxivxwurqljuketzkyqbvt", "dlbngvdhcjqtztgoorzxijsqcdjsiceceokxhierrz", "oxamlcnhuhxnsljqxioobogesjjsiwrmjatixwpoqf", "jfdfqyplaazyoyleasbhxrwdtpvpdripokszzusxqa", "eztxaazzljbqjczpipzrqhjaldovcmnjtbvqaugetl", "auuspotdwjcyppafdvqefsffddrcnwnhtxswqgdvbp", "wuystkxkqlxhscnscxsyclqychjiavqfvqvdamqmtp", "wgybrpjxbvcqmqzdobyaibtuwwwiczshqayzqgddso", "nzxogbasejtkpbpaboegbmzaqebrhqhlijxlkqqbjb", "oxblauzdxrkfhvoyhhblvoweukxsxgnqaglkyzkbhn", "lvwiiqzjywaumylpvwkzuesihsujyhlcgusbdvinit", "eidgaitabqirvyrzjfkllptnoalolsemuaolaooazm", "fgzrklejesqqwzgqbzigllrfmqcvihywuzxfmfgjmd", "ngxegszwkpjrjzfqlffzbtinnzeqdvahyojlwqoztc", "zkwxhiyhuqaweahnxebnngzrvtyupsbcdyhnwgslac"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 6, 7, 8, 9, 10, 11, 13, 14, 15, 17, 18, 19, 20, 22, 23, 24, 26, 27, 28, 29, 30, 31, 32};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> S = {"mhsmwwnpjxyukzhrvuwhjyamgibekv", "vwfpfsqjauwbvjadxmmbmsnuedamop", "pzxsmbgayqpsttqjfkairnspxfxbcu", "aflqlvxifblxcsodzaufzuscbmkgyg", "oxatwoenscyfcclimdkqyyezkigikw", "sgdlqpbubhgrcujrxhbxabqtcezufz", "iftcalvrrjipibiputskwzvmtgyxkf", "adyzipsafiucyescgvgigepvxokrlw", "ibvrpxmatejrtpxhcqihbeyxbuvhft", "ntkxysemmgdoaemmlawesxbocxqmbw", "zyfzdronbyronstzstpvhhhgytgfuj", "wzqqdofbuiqjadqmcodovkxkjkeayn", "dxgtnqvfqlnoauszosxwqerjtpgvyc", "eedmxsnatalsklrjitxdfptpzyxqdm"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> S = {"uatrybjhzwzhwaqnpmzpmzsgmqnxxgfkleiddnaaxuiwntws", "ubywqtrgcwhiaqefbsckxjrxnzeahfhyggakqjmrkxdejviy", "qjvfkracedmydswvmuhaaisggpxxtxsslikjmufnmytuwprw", "hworvsslgxopzthqkmnfftqqrclyreuferbwulkqazzdwiqj", "mhfcbbqqfioysimozwjurgufvdspbididklqvtudvtxwcszx", "huwpwivzazgucjdetgcudnypuutrnonudtpfcpybqgnfpmrp", "sxpztxhsuoapkuwxbnoflkiewantunfcnkpspixagydjbajx", "picvsrlpifavyacndsxhdgcmmqnvhaanciovjtlbxepgnukz", "liiycfdtjclhmsjibyaitgsdpxswellusfazukhqherorzzh"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> S = {"unsnltlyhnncxsniyfjpemzyjce", "ynzysvuajvnqiukuglaykkyktnj", "xxezrdifrljvyjppromwmbvxydl", "ojwuryhhozekxahwbuocnwmhhlj", "tofckkhqsuplidkotkelsmfurnh", "lkyxkggxpuejpqjpzlchupgcmwx", "jtifuzxbrrqesevzhrmenfkcmrr", "vwormrghfmzsrlecbhuahdyvnwn", "pqvxqbhqsxnfgowaxggqgdadala", "sswmuaqktcrbqjtdlnqzewwlflx", "wbuqtotdftbfqsapzdreflbfjva", "mskiwumwpckdpoqdugtxoqsszru", "rfuhddrihekkssjsfogweuixhsk", "sktsbwxdprcctntbpdcwedyjjch", "jxysdttqywpykyhhancmuqlcjlf", "orshipdijnmdotcdteobvytzgmx", "bdebwmqowramjikuzdnoykuwvyi", "qaktodftgdwrdtdrxvwggwbdysr", "nezzqvxjsyjvuilpmuisctqukye", "qsifejynsswxllykaklxdacfywg", "vtfmcxsmftjmjgjoqdczkjfchln", "izynrwlkrdfcenkhvrmrfjspvne", "tezsfutplhqapwjpjkyuirkhbrt", "uqjcjskotwpopkjcextqosmhjcb", "tbsoltspsbcgohvpvwlxfzwtacl", "pjlkxpnrlverysjeohksjrljpog", "jxszpchuueavrhherisempgaaze", "uhmhoimgjkhvgllqcnqaumrwwlq", "gbzptyxbqsxyqbhdjaigolqufhf", "ajtacthatuicjqiluzqqifzcotv", "aiailvcosdrxormzumjxfwroeiz", "tzrgtcejwtzusrxaqqjcbiklepo", "hyqfeainnuqtoxdiffqcyfribpr", "cugcfkmevxpqepzsokqkqadeusw", "andagwtcpxvyzhiuiddxqrpsdiw", "eielfwtixvwlhrweexbozlmbnsg", "ahufipvfmvvqhqxpnovnqctpkud", "ewyzjxgrpfelyglejmaeltgtdjd", "iejhzhpcjjagsefnvtccgfpnksz"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 34, 35, 36, 37, 38};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> S = {"fuawpyfipkraawvtblmxtccbybajttfkjoybdj", "vkhvpiiphwgxgtisqecqycmbndovkrtoifsamk", "dtrnbskbarjcubdhspnrpgqsldcoggnjremmcw", "byopqpzihckdnusobgccytxohwqgzacxjnijyt", "rjbteoaypclewvnqjtfwhqmuthxufgnrgntfzy", "opmxctpphjholsbxgdjaqhrccmseslwrhvqvei", "ecylbprxeeozliofkfievezirjvsemjfbxhpcm", "micaogikhuntbtitwrjahyqggfgwggrmdnskhd", "hnpgdsptmzgdulvortijedjxifcvndhwwonqmd", "zsdwoptsqlnepjvrkuqmxqktpanmfiujucwgpt", "tldcglmclpdrcphfwamajeabquyhmuodqmxsgj"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> S = {"mxzmjbkujvnbssblyhtdc", "kiyntxqbypryinkzschji", "opkixepuxgtiwcwfvqwcb", "xddxtatcjmktisevtgsbi", "dzwcghsaryhvrijfmaydw", "wqmpltstovgeksvumvnaa", "enjcefkduslneqdsykwfv", "srjnpgyrstpvekpppemsl", "oxknoedgjoubaibynmyfe", "ujasrrrqtgghjcfzvfryt", "ovcxmumfceeawuyyoqkck", "upouzexjhzhghucfbnvea", "ufvyeczmdqalhkcwdoeem", "czthlhcnwxxqxtbndexnr", "sxlfwjdjqevxsmoqfbubu", "llngkpvgjmumhhsjakwty", "mjuxstyzumricqmcukqvh", "kefbcxflsbcxqyjrbtmbz", "xbfsaegxlbbtqrrijsqhq", "qaxqeahztnozuecifdzka", "zhkegkzjoebosigmzujch", "daxgatlpzjyrepeotvdtq", "egseyzwqlonpeyqqqupop", "ilrmehjdcuxsfrmaqolld", "gdaszmymnjovjgtgxydyh", "mholioayyiarqyeefrwuf", "xjtlxxvlubyxorokldzxf", "rlcwdyrohusmcbcsxpkge", "efmmugicwzimbulbliepb", "oyooahnqnoldqjzqbmgcu", "ihknvvutwkkdcucjwbpai", "diwwosxmswvwactwnwxil", "elxydfaqseyqpicpasbfs", "zyxycyyzlkegvwbtuxgwi", "kdkjeuvqcaoagrbgwytzy", "jliieryifhryayzsrfexb", "xnmmsvbonzsgcnjnkxsac", "aczxoytkrltvlpdmqzipg", "xhxoszfvugkfrqklgadhl", "cufgkeusxyllhnvtrspgr", "wpsvmdiwedymbcwdwxkcv", "kueozgbkaxszblurcjswm", "nmppciyiufrcujfuxlzvs", "erbybhiqvbsnztrudsjgs", "lmeojawqteaktcmyoscdu", "rmqtoxcbychkuobbezzqy", "qqliwbtcimkkvtucgvhwo", "rwknchuifwgrwvzvakcsw", "ukqqrteogqrssytbtufxm", "bfejuauhuhlaizwpywmax"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 5, 6, 7, 9, 10, 11, 12, 14, 15, 16, 17, 19, 20, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 35, 36, 38, 40, 42, 43, 49};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> S = {"mgidgfdxlspmqunpufmsobbwmvpdaecobbrha", "rhvgyydjgpylsmcmdsppzysygjwbtzphyysip", "hevnscidtjxyjvxicnqewfkruujmuhpfvovyp", "ikyxssuavqyikcebksghwjxdzsstgklpvkusu", "sdswupdaxzfbsdophjhiudbgvpfngspprphia", "zhtgfpzdbohqfedyhdhywukomdaaqwrfyxxqz", "jheippuqjpsllbparspnwqgomqqegjgxybaxp", "llfyrescrzicsauywuyknpwcmjkarxbqwvvdg", "pkyhtadwvupozhlbbhrujrntewxibhvkzbvvm", "xultbynpzyidgtgstzngdjqjzorizaxyyuuya", "pfovssrnlsmtzgduidkxnfmnpnyspxiwdyttp", "vdahbusmptbckbexrejafnxmlbinrucywxbdc", "gpgufdhvvbdrrntmfmlkqzkzaxgyeddddzhld", "xiinsohhavunrxnntjqgffshqqoebccmwrwqg", "nzwxsathlbhovalvimbqqplaxfiypxmkaacgv", "tuughlhusferrmpulfljmdtlumqninitlscfe", "soybsabyjbvfowzhyqjkvnloxjtrlfobzujix", "lkwcmgoodxomqdmoxngcfkehbbgauyqywfvcf", "ipolombajwptjrsbpdzmyvbioxrjuorywhywh", "vrmpzgvolpfhdrnmfyinhatgngwshclmriqfr", "tkfpbvzzbvzzlugihotsjhkbwjkpgppinvccz", "lrmagxlpwzsdahyfkwxwscjwozryxdcxoanhc", "qgkffoabxncarbdtruzporswzfltekmcuwbsx"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> S = {"muviumuyodycwxoymh", "zcmzanmmtucfrxpavo", "buuwodtvchrbkfmfvy", "zdchuzwydyuijjuzjb", "ufvcbjcxxfajshgfdt", "esgmjtffpubujbjhas", "rdnfkcpislocgytzxa", "tfkypeytgaeaxvwpxs", "xugiegjkamoyvtheom", "knzkxelwxkjtjaoatm", "vqxkxalmicfwcdehzu", "ofphnxmairxzrejmzr", "wfrffupmybupmkvjdq", "ecsitlzqchgnkjhbkj", "oasjuajwyhqgmdrcjt", "xncswerzkjkqysfndm", "njfupungeqxcerrlsk", "bzyfzdbwjwqkksuihu", "xrbckinlrbgahfotln", "ueenguewpjgyycepzx", "lnkmfgnmlauxxosdds", "auhybdiqjzqwwqdqsb", "hrmcdjzrotjmwezcgy", "opkumxttgbtahecysu", "qfjugnjizdefxkzlys", "sbgrmtqrgbhetzkdkn", "thghenzhdrqchxntuj", "ybfujzohytzogksluu", "oqtxcqycvtbgueqgqy", "dgczjlllutyikcgdue"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> S = {"sqwnmftymxpofecexmicmoprowjvuxdf", "xqvamgyayequsgpdenvwerytgmdwjiyt", "xqjxfseqkgloltpbicxngszbtalapxzx", "cinsxirvyjzsvceupryshharzjeygela", "vblddpvgfgsxofabvidvhakrtwqbbtcc", "vafwyqvbgrbiwsolkwpbnmftpwenlbhr", "ibywzziuvafukmnkpnkemrldqphqxgzx", "rynognemjlpuxerclfvxdkstfutmpxcm", "jcfmhfozahzdvzisoenwgvmpvwuyvklf", "gvtebkdmobsvlelytqwfdwrdeipkfqkq", "uiqwlgxzlfidxxtbrxpkgquytrcdbpos", "avznimfnfcscdmpewrfbpdfwzzlilirx", "ualzwskjisoivtndbvidxkzkkmmliarf", "vvktvuqyichxqwyvvfgzqoltxebelhux", "coiqoadiuzvtuswbhevdhrnrtjwmksrm", "jdmfvsdbkwuzvnglntsjkyckesikkquc", "eufmegpjpjeewwwtirgnfielgagpdnyj", "kygabddcpdweseeevwnswpfzwbfqrcfj", "yrewodimfrziarmvpjbboaqsykjwhmkc", "hmpzfvhklhwattcglutwkestnwhskalw", "mtddutuxdbiatuhqthxyaeqjmtpmsfvl", "crefgnpuppnpwwkzvyfqtxiientdztqm", "nwsagqitogtskyiowhsetzeuidouyhgi", "ljdhlkcngukidcsgfdxykwkjvgsamprp", "szdtydvmnsaedsikkvcruwsheuxjxzvc", "jpuesggvuvklggrlpdaiiklulkhdcznr", "uohpbyfpvmqttlaaqglforwupxlvbdrk", "qvyqztxjnxsvdepoeagwwpqsjsbsaulp", "jsvggdvuivfxmrobayhnubdeddouyldf", "tvkjtrsmfdmqgkurzzhbtcdqawcwrqus", "bxccynyjsiicjzbvdxbftzxvxccuulsr", "jrbjvqysyrylwalnjfshokybaadzeesl", "aikakanocbzqleauqoijhwqjitjcguqy", "wtkuivqjfydcngxmznfzwjvojvlmxodx"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 8, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 24, 25, 27, 28, 29, 30, 31, 32, 33};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> S = {"elvq", "vzvr", "gsrm", "ijek", "bzqk", "jtcj", "svbs", "jikb"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> S = {"uoantmnwixfbcdcnwtccqygaqfklgqkjtugbzanqhnbgdlokhi", "fvvdlxbpzaeulifezlrzkcarnzjmkhuyabxvotblnohyqufjvw", "eetiyskgmdtzkhlflhymrdewypeshpgabvwceniczhmupgojmx", "znrerhchvzmhkzpdzcrdvucrgaimjqjmsahvtkblpgwdgumiak", "pxspeuvbbzvroouncjsixwqtwizokkkeeobhaihczewyiaknvm", "cvsjugomimfchvlwawsubgodecfzrcgklrxizuqoixrpxjtjca", "rjvxrtmahcwngqmgqljnyfmllgsaomlmbpztgnmmmizaixbbyb", "cmygdrnekfdxcvezgurgfwtufaayusohyibosunhlwjepqoumn", "htqiwpbschyjqrkhwbapsfnalbeyvdxcpbluhmoqnrydzulkvp", "pzycbfabjuqkouxiqqcmfakejilhdhjmnchcdzfqhgnuwvnhse", "tngnvdaohvwzpplltaospyrzpbzatghemwgeuagjwlhtkawjya", "aegnfwmusaerqzeapnmfzglpfjeefjneqzoqsdacnnhesvouxr", "igyozprhvfmxpfzxuvbtweqbctsufnpezenwmgchtskvspfecu", "qbqgmxmtbefbxxblipmnlenqnwgumljamwibufscobwknynoqo", "onubbtoymzhbykvpgsfkmpggozugmmzkphoiekhyohjebkhajv", "uhzwhtbfvmgedlfphktqxefmtcjnvgahiitpjtpkyiytinyxtj", "reusrsrfgrzxrkzakanweshhlktoqjgcyeukakumkahfsfmfec", "yomwwmjqbrwmdfqdqsmqxvrkkycgdsqrectwhzoyuocakxtppi", "vrmraatothgnfrjfdbmprrlilsenqhpsbaeoawvrmauviknetr", "tsbcfrytwrissrymnpmwkktbmhtfgwdjogcpkbdstespvfaigp", "aovoacgixychqpgeabgmkgylfjhwznuicskivyeykcefvcjclv", "pmigrpwixswxzbhikptekmtbaziigdbxwlwdcacffdyochhakd", "omufqszlpqnmuzrbmkilzvhickykywafdhduetnzryllkuroij", "crtgafvelrnhggrxhhkrulkqnkkynkbhkdcxiuwxaxxdbxlrdc", "nwjzmenullqmrgkzeuhdbsgnytifvhuurwdwxlblztguzpvpdn", "vukhrrfjyvpbdhwzpvruyhjmefzowoajnxluryljuhazxulwad", "myuoxvrkbrcqxavkcundeitpawjjgwzkspfgbbzrpfrndqehna", "somzpefkctyfpjautldyhpinueailfwqbbgqxwcavrnmcuhegt", "oikufbtpwfjjrdgayfzekopuwbbfiubowhbxcxthimmynefwif", "ybsbbpbtinmhgjfoaqbwlgchpqumthdymdoerqknzhhciuzhwr", "vonfbukykyjdsgzcxzhpnefujidphntcizvshoiapfdyhtclfu", "zgeywjxhhedvazbxpokwzyoihiwvwfryeimsynrdmgczvdtpjy", "qqasbtpweswkobzuefhieohhcaydhhcswaylyoobrlwchjkeyv", "mitunmdabykmyujgthjmmrthhrvepcxsixenihmuuojwcaqucz", "wwrjbuedvwyysvlmjrbnwfywijgmaihspltexvhbryjnprkdgg", "wccgqdouhsyrgpfugaldbjuzlwfrezcgwcqxbwwmplroxxidog", "knxxtbrxkbsizajvndebqsbbkytjuftzawzwrvwzlocaesmclw", "lwtrigmjunbuugjgngxzpbwvozpypzpxfbjofvkfpqppavmjso", "vdqqxduawbiuvccghvxypjooxgytwdgwhglvpjcttrgqaymsru", "hxjpvoetueobpdjuleqsxrwybqliymbbiuusfkznxqwlnnfkrn", "rveaquqmuateixzhldroihnkviqxwgcqzucwuorhthaxxrjajc", "xeymmsrrmyumfmczrklnqhvltahgjtbqsgroevyqsnfcovymyj", "pronoiygpdvaletaumbbkleglteploumzcritrzcczdhplubml", "lsftemayuwyutisxwopgxzcmlnriquwpwkudwmahpckoqhtnst", "ycpipyokkktgnaonbvnirlucwenvyxfhthburjdnetmccxdiae", "jhwcdaxlisrtklxrhlomysphsditrpgrnzvtzskyfgghwhffdh", "fbnydfwiuzpwcluhfygsbbnttxcnuycammkckbhqwxuazjifyq", "ktormqlqemhikedpxannnwntkuyymlnxpootmkbtykhuzqohzd", "wuxhqglibkdmtffrwklftufyputamgjpdvrbwhprmodadffsgr", "voclwctqesmyzixlpafkkiduyufyzpynmlrkoqpyneqrymocot"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 6, 7, 10, 11, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 28, 29, 31, 32, 33, 34, 35, 36, 37, 38, 42, 43, 44, 45, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> S = {"wbtlfjbauihezninpidsthvrmbqqllcjhujktsaicxfclgbqt", "uqkygihsfnfwwnrmsgyzkdxjvobjhcewtcggolwewztlbezlm", "shjwmgwskeqlpkwvyjzcxyaljcuddbrgwniqndvpjphnjjggk", "egzbxgoaijbbwyyzwmyjyiesajgvhfihzuazzokdwrixyqhil", "kubpbkueazyjhjvpmdnimjoyzxbpvivyzrnubnxqjwknmhdnq", "qbinbxxogwualjiucqzzuhefhwjkvscrybhqjksppmijmbsuu", "pmcjgdqubahhrwowgapsnkjovnmnzjoqglapazxorzuqoiopo", "ghglzbownunmhlpqspbolooadyntizvvmiomojylkjmnmvuhw", "uqmrdqoyiaryrqclyjrtthwqmkexmuizoydcbnavzgjsxxsbi", "tzuttedtmizyolrqiabossdbwjhdkegdkjvdhkfiovalbegkf", "uarbvaitxbtikkhsregxnkplikkdzdytvbwgprcoaiqhczqwy", "urttguvwkymhqrgezczzwabyoimkcuzwpvawgppdpeltcrbec", "uipbqqairufotmyqvzjnflrvtwxxqynkqwtoqqaeutvajjkam", "jqedytqmmqqikgqslhoicmubinnximtdsuyvcvzgyloznpjrm", "fdynchzucrldjkwjnrugqfbdwlctagghvtuinjwzwcwnacpyt", "lrhlysbuwbdnwtnozrnblidvdkofmyjvjlirknobfljldpeag", "mhkdqxuwrdwrsgjgmjbsfusttertfrlgnwdgysqhsfjqrklmf", "uflvspgodarchciwmgtuamiebfbploobebmnfhqmuanvfwaql", "rreaugxunarklqjudniktwkxrwhoraeicepyoytygfhvbmeux", "qtzpnwjgzeubkzxkddhgzbjpcftznlnopcxnkrxmbpabsyinp", "xmcaojkuxotgmgarorhqloupxxibleqrdmgkjbzvaqpwzqduj", "jjzuetonctagzllfsxnfnodcoejrbuxrtqhwpjezwybdorkca", "jnjbellfxskeeeffzzjirdfelosebzffapklnmelmptkakvgb", "bscuokqfewnrrbcfhmgewbflszizobflnupdqnobgzqzeattw", "eulldcdqcbadowizccrkxkbjlubvbiwljtaelnvqpaylgrvkd", "cfbpocawkxkqrvtyjrijtsrszpnvyeibjncsjdutxqubdvnzm", "zsrearjktkzfugitqjyskpsuukrthylevbzvegjhcqpkmvcle", "xkktyrstswzbfmkodsuxpkcuedjloupessyczbeevkblsaimx", "zjtxrusgpcvjmnhigxikpulpctsrclhihxqpextpesfmoazgz", "aqpceswyficnoanhbtrikwgpedjxfdhndxbcqqfyldgufgotl", "qwswytnzbmxjkczqurwgownqxqxpimjvdpnluitscgvoztzyy", "ouxcskcxzidhpgbhpprwiopllafpyononmfpawmatxiuhreqi", "qjectxobborouxwbrxwpwtcmkownesdpznnrqxbjqfbzftqmi", "upbniltxslpzaqiwzdfdmrkrvvlgyencemobzqeudwcltmcbi", "ftiilofbkljiynlecqtbmajushebugmxjjbetctxgfecvrexo", "xwlxgnmtwnogtbpcxxjxcfxnewloxikvwqrniuieggagcubuo", "tqeprawhoyaqvnmsksaccpsfnnmdyfcsqwsiljzxpwddfmrgp", "ttmjtzdsvtihyylcgorrsqviwnyzbzxkracanitnbaepusdnq", "xovaldyqasmprudydpqjqzkdwvypfjrttdptgzmaevrlwbjyl", "iqzgfejsfaszgcxbpwuaelefqwjpykdykvekvprhvqkptxjfh", "ossliyiruxxossoofnniququqrjyspifndpbdyylkqkvklkiw", "fcsgygxkvyuwrhorrroloxifwapydroyxcedebakioqaqhnin", "iuzcsvquxdzsnclncnpwgpphbcxnlabkuqovuxyesebtotdsv", "vhgpqslgxzvjjypypmihqjxhfgmdnfmekzzoralqkvlkzmhmy", "fmrgghohlzmthdgrlmaehjehcgfaxpxmpfdgyapnmkknoeqfn", "jxzfflwhzoxrejhipyrarkfmopzhneajrsyfscuburyiwhmuf", "layalcrehtxmidmxcokmwrobfqcoocbafcrtisikfbctrajhy", "megevughyemgzcqyrujhmqkfwnotjnwtxumxqhkvpooaxtxey", "hmgvyjuekqivgexgxwnbcmjhoxefebapqebhoamahyasbjrxi", "osxwyyroohzebinttmynfkfvcvufzcnizfphmincjvtriovwb"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 9, 10, 12, 13, 14, 15, 16, 17, 18, 19, 22, 23, 24, 26, 27, 31, 32, 35, 37, 38, 40, 41, 43, 44, 45, 46, 48, 49};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> S = {"mjjjbbbtjjbmjmmbmmj", "tbjmttjttbmbjtmjttt", "jbjtmbmjtmjjtjbbmbm", "mbbmtjtmbjbtjjjbmjb", "jmbbmtjtjmjjtbbbjmb", "tjmmbbmbmbtmtjbtbtm", "bbjmttjtbbmtjjtbmjt", "tjmttbttjmjjjmmmbjj", "jjmbbttbmjjjjjmmmmt", "bmttmtmmjbjtttmttjb", "tmjjbbmbmmtmbtmtjjj", "jjjtmbmbmtbjjjbbjbm", "jmtbtbmmmmjbmbjmbjb", "jjmjtjtmmbtmtmjjjtm", "jtjtmmbmjttmmbbmmtm", "mmjbjbtmttbjbmbjbmm", "tttmbmbmbmbtttjbbtb", "bmmtmmjbmbtjjjtbbbm", "tjmtjtjmmjtbjtbbbtt", "mbjbbjjtbmjmmbjtmbm", "mjjtmmtmtmtbmtjjmmm", "bbtmmmbbbbmjmjmbmbb", "mjbmbbmtjbmtmmmmmjt", "mjmbjbbmmmbbmbbbttt", "mmbmbjbmtmjtbjjjjjt", "mbmmjmmtjjjmjmjmbmb", "jjmbmmtbbjmmtjtmtmj", "ttmttjjbjttmttbjmtm", "tbbtjjtttjbttbjjtjt"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 7, 11, 13, 20, 21, 22, 25, 27, 28};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> S = {"qgiqghdaaiuswqs", "aguidasruiwruwd", "ishgguigriusqha", "hiqdaudhiarhrad", "qqsugagwwiadqwi", "srsqdwawwqqwrqh", "siuwuqisrhrhudw", "qugwhsggudhuhdg", "gwurdagsgarsaih", "wqqawqusgdsigis", "awurwqrgraqdrau", "uwauswhiawhduqh", "swurqirqdsisurq", "qidhqihwrwududg", "wgduqrwrrsiagsa", "agurwqgssarwgqq", "raqrshhhguhdgqi", "rdsuwiidigwwaqi", "aagqhggagisduar", "uudadisqshwwqqu", "qgsudsdusshhdru", "uquwishdhwgusgd", "hruqgqsdqhgshwh", "idrwuqrrwdahigq", "asrgsurssasaiaw", "hauadqiuqawirqd", "higrgisddrqusar", "duswsirggdiwrrq", "whuaiqsurhdhshw", "wqiwwissuuidqsh", "grdwdrshwwaasrq", "wwwdsdqhuhaagqw", "qqsgswddaasiggh", "augdgrquwgdrwws", "hshaugsaudgqqqq", "gsqwiiurriwhwww"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 5, 6, 7, 10, 11, 13, 16, 17, 18, 19, 20, 22, 24, 28, 34, 35};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> S = {"ihxixihhxhhixhhxxhxhxhihixhhhih", "ihxxhxhihihixxxxiixxxixxhhixiii", "hixhxxixhhhhxiiiihxhxixhhihxixx", "xhxxixxhhxiixxhhxihhhiixhhixixi", "ixixhxiiihhhhxixxhhxixihxixxxxh", "hhiiihihxhhxihxxhiiihixiiihxhhi", "hxihixixxixxxxhxxxhxxihxihxiixx", "xiihiihhhhixhhixxhixihxiiixxihi", "xhhiixxihixhhhiiiiihhhxhxhxxhxh", "ixhxxxixhxhhihhhihxxxihxxixxhih", "xhhxiiiixhxixhixxhihhxhhihhiiix", "ixiixihhxhxiihiixhhixxixxixxiih", "ixhxhxxxihhixxxhihiihiiiiiixihh", "xihihhhhiihiiiihxixhixhixixxihi", "hhxixxxhxhxhihxxhhhixxixiihhiii", "ihixhxxixihxxxihxhiihxhhxxhxihi", "ihxxxxiiiixxhhixhxhhxihxxihxxxh"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6, 13};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> S = {"qbnpnozvooofnqvpqcoqnfbclvqpqcczoq", "vvqnpcvlzvcozvvqnqcqlvplfcbvbzqqbq", "flbnvvonconcqzzqcnfcnqfqfnlvccollc", "pvqlobcnfbvovcccpqvzlvnobzfpocvnbb", "nlzbqcnzlpqlcvooqcczbzcbfnocnbqqnc", "bppoblbpfbqpncpbvnfbovclzocpfnqfpq", "blfnlqncpvqzvlqffbzqpbflclooqqczbn", "qbnzfzfoobfczclnfcclplppoqcfvqplzz", "zznzzbvlpzlqllppbzvbvlofvznlcolbll", "nlvpnccbffozcqnnlplfocfzonzbcpzovc", "qqolnvpzcfcnocnpcofpbzlflcbofbllnc", "nbfbqoflbbcqfnlfocppozqlzocccqqznb", "bozblvflvnbbbnlnpoqczopfzqplolzonn", "pfplqlcobfffbcnpflqlpnlblvvbnlcbfb", "fozbfpfvpznblzflzovnvzffzvpbzoffpn", "vvqzcbbnzlblqozqvlzlopbpbplppvqvfv", "obpcbncpvbbpbnlvlqnzqcbfpzfpoqvlno", "ozpbbvzolpzlzozqcvbfobvlvffvbllvnv", "bnocnnvpcvvfzvqlcbocvpnclvcvbofcnb"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4, 5, 8, 13, 14, 16, 18};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> S = {"ehlhmeqahaalihhmmh", "aamelhqamqilileeqi", "mammaqeahemilaelhe", "qlmhiheaelmmiiaeai", "lqeaaiiahemqihlhil", "mmlqehiiehiamhmiea", "ihmheimilqlmqmellq", "qlehmaqqiqeihmailh", "qhmqheqqiimhaiahql", "eqelhailqeehemllei", "iamqalaihqqqelllhi", "qeeqhhhhhmhqeeiaae", "lamiihlmmehieiqlaq", "iqeleiiaemihqhalql", "aqiallqimmlhqhqimq", "heahaaqmilmiemleia", "mqleiiemeqiiimihal", "hheemqaeimeamhlhal", "mqmeailhhiaqlehaeh", "allhqlhlhmehlmmlmh", "hhmeqmaiamqqiiqqqh", "lmhqmaqhhmleeliqeq", "qmqmieamliheaqlqqa", "eellqeeilheillhlel", "ihieaqaqqillmemaea", "haailqqqlmiaiaeilq", "qahhhimhamqmeqaamm", "heqqqmamqmhheqhiih", "eemaheaeiielhhqeem", "qemalhhemqmleqmhel", "ameeaqmlmhlheeaiee", "lqqqahhehaaiahaihe"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 11, 16, 20, 23, 26, 28, 31};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> S = {"alllkklrarrkkalraklklrlkrkrrrl", "lralakakkklrkkkarklrkkkaarllla", "klrrkrallaalaarlallalrrrkakkla", "kkkkkkaakrkrlrrrkralllakrkkkla", "krlraakllakllarlrkkraaklllllkr", "rkarkkaklrkkkraklallrrrrkkaall", "aarllkarakkklakkklkarrkkrrrkkr", "allllrrlaaarrkkrrkallaarkakkla", "allrakklallrakrkalaralrlarrlkr", "larlkrkaaaakllaalkrrkalklrarkr", "rkklaraaraklrllkrrrlarrakarall", "klaarlkararkkalklarklkkrrrrlra", "rkalkakaklrakallrklkrkarkkrlaa", "laklllrklrralkaarlakrralkrlarl", "laarrlalalrlallralllkralkllkak", "lrlklrrlllarkakrkarrarrklralra", "rlrraakkaklkklrlallkklkakklakk", "raaalraaaraakakalrllakralakkal", "krrlllrlkakakklakkkarakkarrlaa", "kalakrkalrrlarkalalalklrakrkrr", "lkakrlrllakallrraakllkrarkrrkl", "llrraaaaakkkkkllalkrkklkrrakkl", "aklklrakkkrrrlraralllrkaarrlrr", "llrlaklrrakrakaakarlkkakarkalr", "rlralrklaallakakkrlkrlrllkaklr", "krkllkrrkaakarrallrrlrkaaklllk"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 14, 15, 17, 22};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> S = {"zzlzzllzzllllzzlzllzzzzllllzzlzlzzlzlllzzlz", "zzzlzlllzlzllzlllzllzzzzlzzzzzzzllzzzlzzzll", "lzzllllzlzzlzzzllzlllzzlzllllllzlzzllllzzlz", "llzlzzzzllzlzlzlzlzlzzzllzzllzzllllzzzzzlzl", "llzzzllzzzlzllzllzlzlzzzlzzzzzzlzllzzzzzlll", "zzllzlzlllzlzzlzllllzzlllzlzlzzzzlzzzzlzlll", "lzlzzlllzlzlllzlzzzzzllzzzlzzzllzzzlzlllzzz", "zlzzzzzzzzzlzzllzllzzzzlzzlllzllzzzzzlzllzz", "lllllzzzlzzlzlzzlzzllzllzllzzllzzllllzzzzzz", "llzzllzlzzzzzllllzllzzlzzllzzlllllzzlzzllzl", "lzzllzlllzzllzzlzzlzllzllzlzzzlzzzzzzzzzzll", "lzzllzzlzllllzlzzzlzlzzzzzlzzzllllllzzlllzz", "lzzlzlzlzzlllzzzzzzlzzllzllzlllzzllzzzzlzlz", "llllzlzzzzzzzllzzzzzzllzzzzllzzlzlzzzllllzz", "lzzllzlzzllzlllzlzzzzzzlzlzlllzzlzzzzllzzlz", "lzzlzzlzllllzzzzlzlllllllllzzzzllzzzzzzzzlz", "zllzzzzllzzzllzlzlllllzzlllzlllllllllzzlzzl", "lllzllzllzzzzlzzlzzzzllllzlzlzlzzllzlllzzzz", "zzllzlzlzzzzzzzzlzzlzlzzlzzzlzllllzzlzlzzlz", "zlzzzzzlzlzzzlzzzlllzzlzlzlzlzllzzzllzlzlzl", "llllllzzzzzlllzzzzlllllzzlzzzzzlzzzzzlzzzlz", "zzzzzllzzzzlzlzllzzzllzzzlzlzzlzlllzzzlzllz", "llzzzllzlzzlzzlzzlzlzllzlzzzzlllzzzllzzzlzz", "llzzzzzlzzzzzlzzzzzlllllzzzzzzzzzllzzzlzlzl", "lllzzllzzzllzzzlllzzzlzzllllzzlllllllzzllzz", "zllzzzzzzlllzzllzlzzlzlzlzlzlzzlllzlllzlzzl", "lzzllzzlzzzlzlzllzzzlzllllllllzllllzlzlzzzl", "zlllzllzllzzlzzzzlzlzzzzzllllzlzlzzzzzzzlll", "lzzzlzzlzzlzzzzlzzlllzllllzlzzlzlzllzzllzzl", "lzllzzllzzzzzlzllzlzzlzzzzlllllzzzllzzzzzlz", "zzzzlzlzzllzlzzllzzlzlzlzzlzzlzzlzllzllzzzl"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 23};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> S = {"oaooaaaoaaooaoaoaa", "aoooaaaoaoooooaoao", "oaaoaoaoaaoooooaaa", "ooaooaooaoaaaoaaoa", "oaaoaoooaoooaooaoa", "oooaaooooooaooooaa", "oooaooaaooaaooaaaa"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> S = {"vfvhafrifafjhlaivhvjrfihvrirvfvralllvvfr", "ravvhjrjavavlvhfhjljlifijivavaliarafaijl", "havlllfvhivhiffvrjhrrivjffirhfajilrirrif", "jjrriililarajifhffvrifiirjflvhivljvflaaf", "vfhlrlirhirravahhriiahffflhlarjjfjjahhaf", "iirfrjaarahrllfjrjrhjihvfhrjafjhrljljira", "jhhjajilifhilvrjalairjhvaliallivvhilhrjj", "hrvvavfjjfhllhfiijjfvvfifrlrahiavhihfhav", "vrviljrrvhrijarjvlijlrvfrhllhflliifiijar", "jifaajjfffjljaralfhhhhfvvfifjfivvfaifrvh", "jhfvrahrajfjrlirvjaavvijlavhjvhjjhafliha", "ljahfhiijalrjliaajafjfaahrivhhhffahiffji", "rvlrjhjfarfvjrlrviljvjalhavvhrraaaflfjih", "liaavvahrvhjvajlavrfrhiarfhilhjvvjrjlvfi", "vfhirhifhajjrhfjjivilvhlvaifhjvfirhfivhf", "hvhlllijrivaflrhifafaffirffahavlrvlllvjl", "jfvharivvlfffhjvvjlhavrajvljfjiirirrlrlv", "hrhlhravfrhhvaihhjlrivhhrhvhhhrfafavhrlj", "rajfvrfijvvvjvhhvlvifflhajirlriaihivfllj", "vvlrvvhijfarlhlhrailijalrflhhjirarvjarja", "aarvjilihrvhfrhjfflfrvaarjifjhlvjhfjfrff", "liflrfajfhvflhhfrjalahrfvilfrilhilvrairl", "lirjjihhjihffjvrfjaharrirrhllvvhjaafffhr", "valaahaivrlhihharflfarijilrrrrjirivviarh", "ahfvalrifhhfhrlrjhlffijhlvihjrlfvihjvvar", "frflalvlvhjjjlhfvrvlhrhlihfvaiiafvafjrlj", "alliaffaiaavlflflrjvhjijirrriflljjaaijlv"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 5, 9, 10, 11, 15, 17, 23};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> S = {"qrrfrmmn", "fqmfmman", "zqqmsznq", "arsfanqa", "fsazfnna", "fqsrnnsn", "zfafsnss", "rfznzrmr", "rsrzaszs", "nrfrmfan", "znmrnzzf", "fsrqsran", "farqzrmm", "sraqnsnf", "qrazanmm", "fqqfazsm", "mrqazqrn", "srzfzqaq", "nrsnaqaz", "saqrrzsz"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 15};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> S = {"dydbydcdngdybycggncygdgdcnygnnybyygynbnbgdyy", "cgbdgbgnygbnycncgcygcccbgycdgcgnbdcdgcbydncy", "ynngnddcggcnddydcnbbybybygbybbnybyydgdyyggyd", "nbggybgdggyggygngdgncbyggddncgnnnyynycndygbc", "ggynbdgddyydynbdggdyydydccbggdbgcgyybdbncnbb", "ncybndyngbyycbnycnndgcbdybdycngdyybgccycdyyb", "cbdbddgdybgccncyggcbcdcnndygggbdgycbcngnyndc", "ycggbndyybbdcyncgynbdndnynnycbgycncbgbcdnddd", "dcnnycnycyygdndbydcygnbgdddbgcbgyyncncgngnnn", "ybcddgcbnycggbyybydydbggbgccyygddnngcgynddbd", "cngybcyggbcnybydcnbcbndncygcbnyyndgggynnggcg", "ccbbbdycddgbygncnccbgcbgdybbgnyncbgdcccnygyn", "bdgydyyybgdybgnybggybcddbynbcgdgbygndgbdncnn", "gbynnnccdddcnbdcndbydggydddncygnydddndggnbdd", "yccgcndbbcncyybcbbcncbgcdcnbcyyncnngggdyddbd", "gbdbgdnbdgyygcndnddbydgcggcddbdngbccyyddyncd", "gydcygyyddggbdgcddngdgycncgdddybgccyyybgddyc", "dcnggbdgdddddgyybnnnddcdbdydggcdngcygdgbnncd", "yyyybyybyggcbcgbgdcccbbbbgcdgcbdccdbdgycbdgg", "dcbdcgdbnyncdbddbcyyngccndccydbbbggycygcgbyd", "bgndgcdygbngbcbbynddygcgndcnccybdbncbcygcccc", "nccydbbdyndynynnycbgcycybgdbdgcbdyncyngcdnnc", "nbbbcycbycgbdybndnbcgbdydcngcgdynydcggcnbnyc"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 5, 8, 13, 14, 17, 18, 20};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> S = {"qbbxbxxbxqxqxqqxgqgbggxgbqggqqgggqgbxq", "qxggbqqqgxxqgggqbqxbgxqgbqgbbxgqqbxgqx", "qqqgbxbxxqxgbgqgggqgbqqxgggxgqbqxgxxqq", "gbqqxxbqqqbxbgxqbqbqxbbxbxgxgbxxqbbbxb", "xbqqbqbxqgqxqxqbxbxqqqgbbqgbqqxbgxbbbx", "bgxgqqgqgxgggxqxgqxgqgqbxgqgbxbxqqgxbb", "qqgbqbxbqgxxbxxbxbxgqxqgbbbgxgxqbgxbbg", "xxqbxqbxgxgxxqqxggbqxqqqqxgbgbqgqbqgxb", "bbqggbxqgxgxgbqgqqxqxbgbbqbxbbbqqxgbxb", "qxgqbbxbxbxqqxqbbqgqbbxgqxgxqqbxqbbxqb", "bqbxqxgxxbbgqgbgqbqxbgbxqxxxxbbxggbgxb", "qgxxgxxqgxqqqgbqqxgxbbbqgxxggxxbgbbqgb", "bgbbqqbgbgxgbxxgxgxgbxgxxxgqqgbxxxqbxx", "gbqbqxbbgbbqbqqqqqqxxggbxqbbbqqxxbbxqq", "gggxgxgqbqbgbxgqggqqgbggxqxgxqgxgxgbxb", "qbxgbxxgxgqbgqqqxbqxqbbbggqbgqbgxbqgxg", "xxqbgxqgbbgxxqggxqxxxgqxqgbgbbgbggggqg", "qqggggbbbgxgqgxbqbqqgbggqqxqbxqgqggxbb", "gqbbbbgbqbqbxgqbxbgxbqqbgbqbgqqbqbbbqg"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 13, 14, 18};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> S = {"fwnfwf", "wnvwfn", "bpvwpf", "nppppn", "ffwnvp", "nbwpbb", "epefbb", "wepnfw", "vvwppn", "fpnfnw", "fnfvep"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 5, 6, 7, 8, 9};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> S = {"jjjjwwjzwdjdzjjjjdddwzzwwzjjwdwzdddwwdzwdjjwdj", "zddwjwzwzjwjjddzwjjdjjjjjdwjjjzdjddwjjwdzwzwdd", "wwzzdzjdzzzjdwzjzwjzjjzjwdddjjwzdwzjwjwwjzwdzj", "zdjzzwwwdzjzzddjzddzdwzdwwjdzjdwzwdjwwwjjdwzzw", "djjzjjddzddwjjjjjwddwjwjdwdzddzdwdwjwddjdjjddz", "zzdzwzzjwdwjdjzzzdjjjwjzddzdjwdjddjzdjdzdjjdzd", "jwzwddjwjwwwjjjdjdwwwdzjdjwdzwjjzjzjddwjddjzdw", "jzzwjzwjzwddwddzzwwjwjzjjwdzdwzwzdddwzzdjwddjj", "wwwjdwwjwzzjwjjwwwwwjjdzzjjzzjjdzzdddwdjddjzjw", "wdjjzjzwwwzzzzwwjwjwwwdzdwdwjwjwddzzzzwwjzdwzd", "dwjzwwzjzwwzdddwjdzdwjjdddwzwdwzzjwjjwwzzwdjjj", "dzdwwzwzwzjjdzzjdjdwwwjzddjzwdjwwjzdjdddddwjjz", "wjdddddzjzjwzddddzjwddwzdwzwzzzjdzjwdjwdwzjwwj", "ddjjdjzjzwjddzwzjjdjdjjdzwdwdwjwjwzzjddjjjzddw", "djjwjdwjzwzzwdwjdjwdwwwjddzjwzwjwdjdjzjwjjjdjj", "jzdwdzwwjzwdjzdwjjjwjdwzjwwjwzwwzjzjwwdwzjzzjw", "djdwdwzjddzdwwzjjzdjzzzwddzzddwddjzwzwwdwwdjzz", "jjjjzjdzdzzjwzddwzjwddjjjzjdwwzzjwwwzdjzzdzjzw", "zjdwwdjdzdjwdzzdwwjwjdwzwddwzzzdzjzdwjwzjwzdzd", "jjzdwdzwjwjjwzdwwdjwdjdwjwzddwzwjddjzwzdwdwdjj", "wwddjdwdjjdddwjddwjwwwwddjzdwdjzzdjzwdjwzdzdjz", "zdjwwdzzwdzjjdzdddwwzwjjjdwwjjwjjjwddwzddddzzd", "dddzwwjjjdwdzzdwjwddjjjjjwzwdjjjzdwdzdjjwwjjwj", "wddjdwwzddzwzjzjdwwzdzjwjzjjwjwwwdzdwjzwjwwdwz", "jjwwzjwwwwjdjzjwdzzzzddzzjjwjdwwzdwwwdddwwzwjj", "ddjwzwjddwdwwjzdjzwwwwjdwjjwwdwwzdjzjjzzwdjwdz", "zwzzjzzwzjdjwjjwwjdjzzjzzzwwjzjzdjzzdjjjzzwdzd"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 9, 14, 22, 26};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> S = {"mowvyvwcjyz", "wiujjwozcyz", "iccjjjjvvvi", "zouvojvyvuy", "yioijwuimvw", "mucjwcoyvow", "muzyjijvyum", "cimjjiyicyz", "vovmjzvjzzv", "wucuvzujwjy", "zmwvvvjcvcy", "zoujjzzwccj", "jyjiwcvcwmw", "jvimuwwomiz", "ijmyvjmzvyj"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> S = {"vvvvfvvfvfffvvffffvvfffvfvvffv", "fvvffvfffvfffvfvfvfvfvfffffffv", "fffvfvvvffvfvfffffvfvvffvfffvv", "vffvvffvfvfvfvvfvfvffffffvfvff", "fvfvvvfvvvvffffffffvvfvvvffvvf", "vffvffvvvvffvvfvvfvfvfvvffffvf", "fffffffvffvvffvvfvfvvvfvfvffff", "fvvvfvvvfvfffvvffvfvfvvvvvffvf", "fvfvfffvvffvvfvvfffvfvffvffvvv", "vvvffffffvvfvvvvfvffvfffvfffvv", "fvvvvfvfvfvfffvfvfvffffvfvvvvv", "vffvvvfvvvfvvvfvvffffvvffvvvff", "vffvvfffffvvffffvfvvfffvvfvfff", "vvvfvffvfvvffffvfvvvfvvffvvvff", "vfvfvffvfvffvfvvfffvffvvffvvvv", "fffvfvvvfffffvvffvvfvfffvfvfvv", "vvvfvvvfffvvfvfvfvfvfvffvffvvv", "ffffvvvvvfvffvfffvvfffvvfvvvvv", "fvfvvvfvvvfvfffvvfffvvfvfvvfff", "fvffffffvvfvfffvvffvfvfvvfffvv", "ffvfvvfvvvvvffvvfvvfvfvvvvvfvf", "vvfvvvfvvvfvfvvfvfvfffvfvffvvv"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 20};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> S = {"ktnvrrtvnntaaranknnatarktanvvavrathvtrknvhhvahk", "khthknhvnhahknkkaatnaakaktnnrrvthhtttrvvtvtvvnr", "tntrkkhakrrrhkhhhhahthnaahnthktrtnanvnavrktvnrn", "vaknvnvknhrhntnnhnvkhtahavhvttvttttkaarnrkhvrna", "khnatahavknhkvavvrkaaarvrnvhttkrhvnarttavnhvvrr", "vvnhahntnaakvtnrtnvtkrhatnrtrnrtnnhnakvnnrtvtrt"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4, 5};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> S = {"oxeepembembppbmpmpe", "pxpsbxppxbobesbsebb", "xxemmmppomesxxpeesb", "mpobesxxexobsxeooob", "eopsmsbeebmpxoxmpsb", "pepembmpeoxbmpmsppe", "beexmpppmexmeoxpemo", "meopxoemepomsxbpxmo", "bxpxbpsomebmxsmxosx", "pppsxepmmemxsmopmps", "xpoxxepsmmemoxsobeo", "eosxeebeeesxbxbbbsm", "peboemobpemboseesme", "peopemssboxmxememme", "xmobbpsmpsombsebpop", "pebspbemopmpspeesbb", "bbmpmopoobpmxsmbsoo", "besspxeempmbbxmpxxs", "xpmsexmoebsxxbbmbmb", "bmpbxomebxbxpeossbe", "mpbxmesoebmbexmebop", "esxompbmoepsombbepx", "mpeebssmebpembexosx"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 5, 8, 9, 11, 12, 13, 14, 16};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> S = {"wrrwrrwwrrwrwrrwwwrwwwrrw", "wwrrwwrrrrwwwrwrwwwwwrwww", "wrrrrwrrwwrwrwrwwrrwrrwrw", "rwwrwwrrrwrrwrrwwwwwrrrrw", "rrwwrwwwrwrwrwrwwwwwrrwrr", "wwrrwwwwrrwrwrrrwrrrwrwww", "rrwwrrrrwwrwrrwwrrwwwrrrw"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> S = {"ellalaegdaaadledaaldgddla", "eedlllgdgglglaegeeedaleel", "agggellegdaeaeadaalaelell", "ldgdleggllllegaggallaldeg", "ldgllddgadealelladgeaedal", "lgagdgdedgalaggelddadgdgl", "ldedeeeagddddeedlladdegdd", "ggggddlageaalaeegaldaggad", "ggdeaaeeeggaelegegadedled", "eaedlgaegegdegggalaegedle", "ageeeaddegdegeeagegdeddga", "dagddaaleaaglelaldgdgldag", "gllgaellaldgddeggedlegglg", "ddlledadldelldleegggaaael", "gleedaeeaedaeaedgldellead", "aeaageagedegdealgalddlllg", "agdeegldggldgleelgdladald", "gageegaddggadadleedlgaegl"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 5, 6, 7, 8, 10, 12, 14};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> S = {"zxzzxxzzzxzxzxxzzxzzzxzzzxxxzzzxxxzxxxzxzzzxxzxz", "xxzzxxxzzzxzxzzxxxzxxzzxzxzxzzxzzxxzzxxzzzxxxxxx", "zxzzzxzxxxxzxzzxxxzzxzxzxzxxzxzxxzxxzzxzxzxxxzzx", "zxxxxzzxzzzxxzxzxxzzzxxzxxxxzxxxxxxxzzzxzzzxzzzx", "zxxxzxzzzzzxxxzzxxxxxxxxxxxxxzxzzzzzxxxxzzzxxzxz", "xzzxzzzxzzzxzxzxxxzzzxxxzxzxzxzzzzzxxzzzzzxzxzxz", "xzzxxxzxzxxzzzzxxzxxxzzzxxxzzxxzxxxzxzxzxxzxxzzx", "zzzxxzzzzzxzxxxxzxxzzzzzxxxzxzxzxzxxzxxxzxxzzxxx", "zzzzxzxzzxzxzzxxxxzxxzzxzzxzxzxzxzzzzzzzxxxzxzzz", "xxzzzzzxzzzxxzxxxxzzxxzxzxxxzxzzzxxxxzzxxxzzxxxz", "xxxzxzzxzxzzzzzzxzzzzxzzxzxxzxzxzzxxxzxxzxzzzzzz", "zxzxxzxzxxzxzzzzzzxxzzzzzxzxxxxzxxzzzzxzxzzzzxxz", "xzxxzxxxzzzzzzzxxzzzxzzxzzzzxxzxzzzxzxxxzzxzxzxz", "zzxzzzxxzxxzxxzxzzzzxxzzxxzzxxxxzxxzxxxzxxxxzxzz", "zxzxxxxxxzxzzxxzzxzxzxzxzzzxzzxxxxxzxxxxzxxzxzxx"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> S = {"apppptdaddtatadddttppptaptttadppddpdpdtdd", "ptpppddttpapaadppppaapdtppppdtatddapadapd", "atataatapaapdtattappattptttapdtpdtppppdtd", "ppaddptataddtppdtaaaatpadppdadpttttptaapt", "dtpaptdpdtpaaadtaptatpddtpdatataaapdatpda", "attttdptptaapatdaddttttapdattadppadptppda", "paaaaddtdadpaatppptdtpdtatpaadttatdaadtaa", "ptddddddadtdaadptddddttdadppadpddtttttaap", "dptdpdptdtdaaptppppdataadppdatddtadataptd", "tadadaptadtdpptdaaapdpdpatppdtpdttdpdptpt", "atpdpdadtdpptdppppddadttdddtddpaddppapppa", "tdddtdataptddpdddpptttddadaaddattdattaptt", "pdatdadaaaptdpattddtatdpdaptpdpaaatpddaat", "ttpttdapaadttdtptddtpapadpapttdpptttdpapt", "dtdtapadpadtpdattptddpdtttpdttppptadtdddp", "paadttttapdttpppdpaapatdaatdddadptppdtdpd", "ptdadppdpaattpapptpdtpttapaapadtddptaaata", "tpdtdattaaddaptpdaddtadpdaatptpppdatadatd", "papaadddpdtpdadtaaaaappptpaatattpptaaatpp", "tdppdpttpppapadppddatdttdptadapdadpppddap", "pdaptapppdaddppapatdtdtptppapaadtatadtppa", "tptpdpaataddapattadtadtdatdptpddtpaadpppt", "dttpatdtatpptatpadpaappappddaapppdtaaaaat", "tdpdptpdaadapttppptapdtaddptpaapapdpdatdt", "ataatadtptataatdpattadaptppttpdpdpdtaaddt", "dtdaapaptppadpapdtatppppdddptaadattaapptp", "taattaadtttappdpaadddattdtapddaaptttatatp", "attddddtpdpdptapadtdaddaatadpptpdadtaatpd", "tpdtpapatpdaatpttpdpatppdtpaaadadatatadat", "ptdptatpdatpptdpapppdddpaadpttaadaaaaapap", "aadtppptdtptptddaaddaddppdptadpaaadtapaap", "adtdppaddpatataappddddddtttptaaadapdtadpd"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 6, 7, 13, 18};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> S = {"ynjwylhwjwwnjjwjyjlwnljnjhnjjyy", "ynyllnyrwllylynhljyjywjhrwhnnnj", "hlnyjnlrhylyrhwjjjnyyryhllnjhrw", "rrrnwrylhjwlywnnhjynwjrlwywwnyy", "nlwynyhwlwnhlljjyjllwyhhnlrjnll", "rylwrjjyrjhwnhhrjhhwjjwjwhyyrwr", "nrwynrhwryhlrjllhjnljnwyhhnyjyr", "njrnwhwrynhyhyrwrjwhwnhnnnjwwyh", "rlnhywwnjyjwwwjylylnwjhwnnnwryr", "yjjhhjjjnwnrwlyyhlwjljryrlyywnl", "wyrrlwhlwllrjrhhwjjywnjjnjrwhjl", "yhnyyjrwhjyhwlwhrljlyrwyhnynwjy", "rwlrlrhnwwwjrwhrnrnhnhywnnynjhw", "wrjjlnwlhljnhjhljjwlyhrnlhlhhnn", "yljylnlywjwnhrlwwyyyrlnynylnlwr", "nnylhjrnrjhwwwnlhyrlnyrhnjwwrlj", "hjnrlrrwnyylljlhylhjnlyhrnryjyl", "wjrnlynlynrjhwlyjwrlnhjwhnrnrhh", "rnrjrnhrjljlylnhrwhwrjnjwljnyyn", "ywnhynhrrnynljlnlhwnnhhrynljrhr", "hyllhnnlyhlwlnwnlryhlyrrnyhrnww", "jnlnlynyhrrjyhjrjhyhwjrywyrywll", "jlrrwywllrwlnyhwyjnyrnllynylnln", "wynnhlrrjyhyyylwhnyyryjnllwjynr", "whhyryrrnnnwwwjnjwljlywhllrhynj", "jnlnjwhyrwyrrlhjnjrrnnwjwnwhnrl", "whrhwrrhjnyhlwhnhhnjjwlllwyjnwy", "jnnhnyjnhnrwnllrlhjhjwylynhnhjy", "hhyhwyjhwjlhjnrnyywjjllyyllyjnj", "rlhnrhlnrlyrhllrjlnwryhnljwhynl", "lnjwwnnrjlhjnynnnnyhnywhlrwhjjw", "rrhwnhnnjwljwhynwnnhryhnlnrnjry", "jrrnwyljrjhrnjyrjywryyrryhnwhwr", "nwrrhrwnlwwjnhrrjlwrynnwnnnhwyn", "jnrwlrrrnlhrlrhlhwrwhwwnjryljlh"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 8, 13, 23, 26, 30, 31, 32, 33};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> S = {"eccwicz", "iiwdgda", "ddiceee", "ccewdew", "wvedgad", "egwceda", "geccwac", "idiiagv", "ecwwzci", "awcwdag", "cedvvww", "zwvdcav", "zewzeie", "wciwded", "addzcez", "gvzvdzd", "cidwdic", "vvaccez", "awczvzv", "vviiziw", "acacdee", "czwdzza", "zcgcaav", "eivedcd", "eizieza", "zigwagi", "cicegge", "wzczedi", "giezgze", "vzzgggi", "cawaeid", "ecavcwg", "ecaeddd"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 6, 7, 8, 9, 10, 11, 12, 13, 15, 17, 18, 19, 20, 21, 22, 29, 30, 32};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> S = {"mxmmxxxmxxxmmxxxxxmxxxm", "mmmmxmmxxmmxmmxxmmmxxxm", "xmmmxxmxmmxxmmxxxmxxxxx", "mmmxmxmxmxmxmxxxmxxxmxx", "xmxmmxxmxxxxxxmmmmxxmxm", "mmmxxmxxxxxxxxxxxmxxxmx", "mxxxxxmmmxmmmxmmxxmxxmx", "mxxxmmxxmmmxxxmmmmmmmxx", "mxxxxmmmxmxmmxxmmmxxxxx", "xxxxxxxxmxmmxmxxxmxxmxx", "mxxmxmmmxmmxmxmmmmmmxmx", "mmmmxmxmxmmxxxxxxmmxxxm", "xmmmmxxxxxmmxxmmmxxxxmm", "mxmmxmmmmmxmmxxxmmxxxmm", "mxmmmmmxxxxxxmxxxxxmxmx", "xmxxmxxxxxmmmmxxmmmmxxx", "mmxmmmmmxmxmmxmmxmxxmxm", "xxxmxxmmmxxxxmmmmxxxmmm", "xxxxmxmxxxmmxmmxmxxmxmx", "mxxxxxmmxmxxxmxxmmxmxmx", "xxmxxxmxmmmxxmmxmmmxmmm", "mxmmxmmxxxxxmmxxxmxmxxm", "mxmxmxmxmmmmxmxxmxxmmmx", "mxmmxmmmxxmmxxmmxmmxxxm", "mmmmmxxmxmmxxmxxxmmxxxx", "mxxmxxxmmxxxxxmxmxmmmxm", "mmmxxmmmmmxmmxxxxmmxmxm", "xmxmxxxxmxxxmxxxmxxmmmx", "mxxxxxmxmxxmxmmmmxxmxxx", "mmxxmmmxxxmmxxmmxmxxxxx", "xmmxxxmxxxxxxmmmxmxxmxx", "xmmmmmmmxxmxmxmmxxmmxmm", "mxxmxxmxxxxxxxxmmmxmmxm", "mmmxmxxxxmxmmmmxxxxxmxm", "mxxxxxxxmxxmmmmxmmxmmxx", "mxxxxmxmxxxxxmxmmmmxmxx", "mmxmmmmxmmxmxxmmxxmxmmm", "mxxmxmxmmmmxxmxmxxxxxmx", "xxxxxxmmxmmmmmxmxmmmmxm", "xmxmmmmmxmmxxmxxmmmmxmx"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> S = {"vubvpbbbbvuuvpvppvvvbppbpbuvubuvvpvpvupp", "bvpbubpvpbbvvvvbvbuvuvbbubbvuvpvupuupppb", "bvuvvpbpuvbpbppubvvbubvvbbbvbbupvpbbupuu", "puuvpbbvpvpvpuupbppvbppvpvpuvbppubvupuup"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> S = {"ieeeeeeeeiieeeieiiiieieeiieeiiieiiieieie", "iiiiieiieeeeeeieeieieeeeeiieieeieeieeeii", "eieiiieeeiieieiiieeiiiieiieeieieiiieeiie", "ieeeieeieieieeeeieeiieeeeeieeeeeiieeeeee", "iieiiieieeeeeiiieieeieeeieiiieieeeiieeii", "ieiiiiieeeeeieeiieeeiiieieiieeiieeeieiei", "eeeeiiieeieeeieieieiieiiiiieieeeiieeieee", "eiieeeeieieeeiieeeieeieieeeiiiiieeieiiie", "ieeeiieiieieieiieeeieeiiieieeeiiieeeieee", "eieeeeiieeieieieeieeeieeiieiiiiiiieeeeei", "iieeeeieeeeeeieeeeieeieeieiiiieieieeeiee", "iieeeeiiiieiieieiieeeeieeiieieieeeieeeee", "ieeieieiieieiieieeeiiiiiieiieeieieeieiie", "ieeiiieeeiieeiiiieeeiiiiiiiieieeiieeieee", "iieiiiieiieeieeeieieieeeiieeeeeeeieeiiee"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> S = {"ttvvwfvftwwvvivvftfw", "tivvfwwftvfvviwvfvii", "ittfwttvfvfvivitftwt", "fwftiitfftiwfwvwvivv", "ifwvwiviffifvfwivvvw", "tfivwwfvvwwiifwwwwif", "iftiiwvfivvtvfffwfit", "wvfwttfviitvvtiitvtw", "tifvtwfiiffivfviivvf", "wiwfifvfitfiwvwfwivi", "vwtttvvwffvwvwvtivvv", "fwiittivfwftvtfitiiw", "viwttwwvfwfiiivififw", "wtiivwwiwwtwwwtiiiww", "fvffvtitfttiwtfvfftt", "ivwwiwttivwviiftfwif", "ifwwtwvvttftvivtfift", "wvtifwivifwiffvtwiiv", "vwwtivtwwfffvwwfftiv", "tvftfvvffwtfvifwwtwv", "vtivwtvtvvitvttttvwv"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 10, 11, 13, 14, 20};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> S = {"tuqstquusuqusszstquttuztssquuqzztzuqsqst", "tsquzzsszsttsqqztqqzzuuzuuztququustzutsq", "zuussqutqsztstzzuztzsqtzsuzutsusqqusuqzt", "sqqsqqstzsuutuuuqzsztsztzsssqzqtzsztutst", "tsqzuquzzztzqqzstsqsqqqzusztutqstzuqqtts"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> S = {"chhhuhuuupccchhuhcuchcchpchccucuucc", "hhhucuhchppuchpcpcphcuuhpphccccuchp", "cuuhpuhhcchpcpuhppcpcuhpphhupcuchcu", "ppchchhucphuupuhhchuuphccucuuhpcphu", "cupcchhhucppucuucchhuhpchuupuuhupuh", "hpchchpcchhhhhpucccpuucchuppuhphcuh", "uhchcphccupcpcucupchphphuhhcccpccph", "ucpphhuucupchhpccccuhccpcpuhuhphcuh", "pphhpuhchuuucppphcucupphuhppuhchppu", "phppccpuchucphupcchccpuuhpchccppuuu", "puuhhupuphcuhchccphphpuhhhchucuuccc", "uhchhpcuuuchhpchuhupphphuphhuuuhuch", "chphcphpucuupcphppupchhhhchucucuuch", "cuuuphpuphpuphhhuhuucuphhpuuhhuhpph", "uuupphpcchcuphcpcchhpcuphpupuuchpcp", "cchhuhuhccpuchphhphuuphpupcpchppucc", "upcuupuccuhphchucuchhpphhuphpcuphpp", "cuhcchcphpchcphupcuppupchhuccchhupp", "hpcuppcuchuchccchchhuuhhuuphupcucuh", "cccpucpppuccccpchcucpchpuhppuuhuhuc", "hcphcchphuphpchhpuccphpphccupphpupu", "hcpupupphhcucuchcuhphpchpchpuchhhhh", "puhcppccuuhcphphcphcpuhpucphpuupcph", "uuhpcuhpcchhuhppcuuhccpcpccphuuphup", "hchchppphuphhcuucchphhuchuuppcuuppu", "cpupchhuupuhucupchupuhcpcphchuccpup", "phpphhcuhhcphuuuccphcchchhuhuppcphc", "ppppppupcuhhcucuppccuphchupuccpphuu", "uhuchpcpucuccucphpuucuupuucuhchchpp", "cchpppuppucphhuchchhphhupcphhcphuch", "huchcuhphccpcpccpppphcucppcuchpucup", "hcupcucuhpphchuhppcchccphchppchuuuu", "hppcupccchcchpccpchuhpupphccchppuup", "hhchpphuhucchuhcpupcccucuuhuuuhhhhc", "pccphcuucuucuucuhhuupupphchcpuuhpph", "chphhhuphcupcuucpuphhhuppuccupuchhp", "huuchppchhchhhpuhhccpccphpcuuhuucpp", "upcccuucchphcppuccpuchhppuphuccpchp", "upchucchphchcuchhcupuphhpucuuppphch", "uupppcppuhuphhchucupuuuuhppchpcchhp", "hcupcppphccpcppcuuupchcphhppuhpuuch", "hpccucchcchpphccchuuchuhchhphppuuhp", "pppupcchpupucupphhhuchcpccuucchcpuh", "cuchpupupchcuhuppupphhphccuhuphchpc", "hphcchcuupccpphucpppuucphpuphhcchuh", "cupuhhchhchpuppchuhuuppuhppuhhuhhuc", "uhuppuhhpuphphpcuppuuccuccpupuphupc", "cphuhuucchhphhupcuuhucchhpcphpchupu", "phuuuhuhpuhhcuphucphuupuphcuuhhuuuc", "phhuchhuupuupppchpuhcphphccuucchhcc"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 11, 21, 27, 48};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> S = {"kjcdcdxzqzkozdzcqjzqccjddqqoqjjqddd", "czzxjkkkkoxxcdzkkjxjddzkdqzzokzxkjx", "zccqxokcqozkxzokdkkjdkcqzkxzozxxdxd", "cxzkoocxkockzzjxoddcjxjczzjoxzjzzqc", "xzqqddoqkjdckxqxocjokzqkcxqcckodkqq", "qqzcdxkdkzoxokcxzzkzjqjkdcxdqqjcqzd", "jkxkqzdccxjzzodcdzdjjkocddxqxkcqzkc", "cozdjqxdxzzxkkdzcqoxjckzjkzcqckcczk", "kqxoxzddxczxzcccocqqocqdkxcjzjqzcxc", "ocjkjzoqcdoxxzkcjcozcqqjcczcoooozcz", "qxckzqxkkxdoocjjxzodkzkcqocxqdkjooc", "qdqdqxocxdcdqcxocqkzdojjkcodcjkkkdo", "qjocjzxzdqoodokkzddkokjodjqkckkjdkk", "zoxqqdzqcjqxozkjkxkjqqdjoqxjxdkxzjd", "jqxkkdodxojqzoxdojozdjxkzqxkzcqcjco", "jkoqjjdjjooxojojodokzkdcqjkxjkokjcj", "ckqdxjqczxqodxcqooqqxkjdjocjoodqojo", "cqcqkjdjkkkcdqkjcqjkzckjdxkkjxkcqkz", "ojjxckcjzkxzzqoxojkckqzjjozzcxoozdo", "kczqoqxxkqxddqzckocxjxjjjqcokocxkdj", "qzzkkzjddoqqxdzckjckqqdjqxzzdcjdkxk", "zxokxkzjxkqojjocojzkxzjdqqodojdzooc", "joqqjkjdqxckojkjzzjzjxcoqjoddzooqqo", "codxzkcxdkzoxxqjjkxqjoqzxkzockxkqkk", "kxqqdjodjjxzckdkdcjqcjodqccxjqxozkd", "xxkkcoqodkzczxkozjkdjoxxxxcdzkodckk", "cjzkzoqxqdjcjjcxxdkjxzqxkodqxjooxzk", "qxxjzkckzqzckzcojozcqqzkqqoxokcdcdc", "zcxjjqqjdczocookcdkoxodxjjkdddzxqcx", "qxokcjcdzdzoqzddoooozookqkjqkjoddjo", "kqzcqjxcokoxzdkcjocdczkxjjkcdcjcozc", "kdoozqcokqodqxokkdjdckodccdkkzqxojd", "ckddoqckozdzcocxxozzdjoockqccjzojoz", "cdzzcoxkjzczxqkkqojqcqozxkjdodoxxxc", "odzokqzxzqqxjddjjjjzzojzdzkdqqcoook", "xkzjdjddxkjdxjqkjdcdkjkkzcqqcccxxkj", "xqcjcjqjozocoqccqdqqxjoqcczzdxqqkdz", "jxxcxokkkqokjjxxzdjoqjcodcxcdxcjkoo", "zjzdxxkzxccxcxqcoooozcjozoodjcxzxjx", "jjzjcxocdjzcddooojkjkcxokojddzzzzqq", "jqxcqzdqxcjqjxkcxzxdqqjzqkkdqkzddzc", "qjqckkjckozjxooxccoqdcozccocqoccxxz", "qqddkzojqqoxxjdcddzxzdoxkqjqjdjdzox", "qzzcqddzxzcxjozzckkxdoqodcqccqjqdco", "qzzkqqqdxxojqkxzxkjojxxojkzkjdqcjdo", "jjoqoddjkxxkkcdkzjqxjdqqddqcodcxzdj", "kdqxokjjxkkozdjdcdxzqkoxjkjjkjxzjxj", "cqojcjdcdqdxkcjxqzkcqczkqzcjckdoxjx", "cjdqjjddoczqzkdkoxxodqjqkckxkzcjxqc", "odcookojdcczjzokqkkjocddqzkodzqkdcc"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 15, 17, 29, 36, 38, 41, 42, 45};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> S = {"pppgpgglllllpllgpppaggagagaaap", "lplgapapgallggpgpaggpalaaaglaa", "lpglllagpppllllallgpagplalllap", "ppagglllglalgaalaaglaagllgggpp", "paaaaaglplaplgggalappllaaglaap", "lglplgagaaappaalpggagaaaplappa", "aagaalalgggpgpllppgppaaalaggal", "ggglpalllpggllllgaalllpapgppla", "pglaaaalpaplppllgggalpgglgpppp", "ppappgaaappplalaggapgglplagaag", "lalapppplgggllpppagplgplalapla", "gaggppplaplglpggplglplpggpplaa", "agapggggaaggpaallalagpalgapapl", "gpgggpagggplalaappaalaaglaaaal", "lgpgalplgglaalpgapgappggpgalpa", "pagpplagglplggpglagapllglgappg", "ppgagallllglppalllplpppalgalgl", "aalglapgglpaplagpappgggplggplp", "lplllagllggglpgapaggagaaplpllg", "pglpgppaglaaglplllapaplplaalgp", "plaalpgglpplpgglgplglllaaggaaa", "ggalapgpagplllaagaplgplglppapa", "ggpppppplallgllpapppglallpppgg", "aggpggpaggalaalapapggglalapgpl", "galppapallgalllgalggpgaplagggp", "palggallggpgpppgggagapllppappg", "laagappllalplpppgggppgagaglgal", "ppgllgpppapppappaapgppglgppalp", "lgpaaaaalgpgpgalgllppgpgpaapap", "pgppaalpllapappaapgpplplagaggl", "pggllgllaalaalppglgpllaplpgggp", "alapplpgallggapalgappaggllllpl", "alppaaplllplggggppglapplagaall", "lglagaalgplglllalgaplglgpglaga", "pggggpapgalalllpllggppaapaplpl", "apalpgapapplagppapgpaalpgllapp", "laalpapapapgglaplglplpagpgppgl", "aglpalaalglaaplgapallllpallpga", "agpglgpplaagapglaglgpgaalapaaa", "alaapplllallglagpgggapgpallpal", "papgpppagllaggglgglggapgalppll", "laaagapgggggglaaapgplpppplplaa", "pplppagglpgppgalggppaapglpppla", "pgpgpllpplpgggalpaalpgpggagggp", "ggaapaagppapapllpapllppgpgagal", "ggglgalgapagpaglllagplaalgplga", "apgglgapagpllaaallgaggpgllgaal", "plggaalppplpllagapggalgaggaggp", "lapllllppagglggggaggaaaagaaapg", "lpglpglgllgpggplaapallapggpalp"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 5, 13, 27, 43};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> S = {"ccccecercecrreerrec", "crerecccrccrccererc", "erccccrrrcreeeccrrc", "rrecccrrrrrrcrerccc", "reccrccrrecrrrcrece", "rrrrrecerrceceeceee", "recrcrrecceccceerec", "rrcecrccrrreccccccr", "crcerccrcrccrrrrerr", "erercrcrecerreeeccr", "cecrcccreececrcrrcc", "rreeccrecceeerccerc", "erercreecrerrrccccr", "ecerrcrecrecccceere", "ccrereeereercrrccce", "ccerccrrcrereeceecc", "eccrrereceeeeecceec", "rcreereccccececcrcc", "ccerrccceeccccrrrrc", "cercccrreccrcereeee", "ereeecccerccrececrr", "crcrerrreccceecceee", "ccccccrcrrececrercc", "crrecrrrcccecrcecrr", "rccereeccecccrcerrc", "rrcrceecrcrecrrreee", "rerrrrcercrrcercrre", "cceereecrrccrrecree", "crcecreccecrceeeerr", "ceeerrrrcerecrrreee", "creerecrrrrrreccece", "errerrrceccrrcerrrc", "rerecreecerccrcecrr", "ccereererercccrrrce", "rcercecrrrcerererer", "cccrrecerrereecercr", "ececereececccrrrrer", "cerreeereccceererrr", "crrrerrrrrrrrrceeer", "rrrecerercceeeererc", "ecreeerercececeercc", "rrcececcrerrcccrcrr", "ceeccrreccrcreereee", "receececeercecccrre", "eerrerecrcrceccrecr", "ceereecccccercrrerr", "rcccrececrereccerrr", "erreeeccrcccceeeerc", "recerrrreececceccrc", "cereeecccrrecrccerr"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 22, 38};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> S = {"nvppvnnnpvnnnpvznnznppnvzpnzzvpnnzvvzvnpzzppnv", "vvvznzppnnzzvppnpvpnznvvzzzvppznznzpnzvppnzvzv", "npnpzznvvvvzvnvvvnzznpznzvzvpnznvnnvzppnzznpzz", "vnnnvzzvnnzvnppzvzzvzvppvvznpzvpvnpznppnpzzpvp", "zpvnvpvvzvvvppzpnnppnznnzvnvnpnvvpvpvvnpznnpzv", "nznnppzvpnppzppvvzzvnvzznvpzpnvppvpznznnnznvpn", "vzznpzzzzzzzvzzpvpvvvvvzzznpvnvvnnzpnvppnpnppn", "nnpvvppppnpzvvnnvzznzzznpvzvvzvvnpzpnvpzzvvnnv", "nzzvpvpnznnzvzzzvnznpvvnnnnppppppppvvzvnnnnpvz", "pvpvpznpvzpzznvpzznzpppnpppnzvvzpvvznzpvnzvvpn", "vpzznnvnvzzvznnznvznpnzvppzpnzzpvznzvvpzzzppnz", "vpvzpvppzzpzvnnzvznvnzpvnnpznvzzpnzppnnznnvnvn", "pnznvnzvnnvnppzpnvvvvvpvvpnpvzznppvvvvnvvnznpz", "nzvnnnvnpvvnznpnpznnppznzvnpvpvvnzvzpzpzpnzvvv", "zzpnnvpvzznnnvvzpznnvnzpzpvnppzpnpvvpznzpnzppz", "pzzpvnnvnnnppvnnnnnpznvpvnzzvnvnpnpzvnvvnvvznp", "ppnnzpznnzzpzvnnpzpnzzzvvvznnnnnnnznpnpnpvzzzp", "pzpvpvzvpnvvzvvnvpnnzpvzpznzzpppzpppzzznzpnnzz", "zzvvzzvzpzzvznnnzzpnnzznznzvvvnpvnnnnvnnpvnnzp", "vzvpzpzppnvzvpvpvzzznppznznzppnnvvppnnnzznnnpp", "vvnpvvvpppvvzvnppzpvzznznzvpnzvnppzzvvpzpzvnvz", "npzvpvpzvpvvvvzvvpnnpvvznvznznppzvznpnvpzvpnnz", "pppvvpvpvnvnppnnnvvnnvzznpnvnpvvvnzvnnvznzpnnn", "pnpppvnpzznnppznnvvvpnnzznvnnvznvvzzzpzpvnnvvz", "znvppvpzvnpvnzzpzpvvpzvnpzpvzvnpvpvpznppnpvpvn", "vnppppzvpvvpznpvznnnzznzpvznzppppzpzzpnppvnznz", "pzvzzpvzzvnvppvvnvpvpznvnvvnznpppzznzpvpvvpnzn", "zvznvnpzvnvvvzzzpppvppppzpnvpzvzvvvvpnzpvvvvzv", "pzvvvnvznpznznnvznvnnnzzzpnvzpvnvvzzvppnvvnnvv", "ppvpvnpnnzzznnvpznzvppnvppzzznvzvzvvzppnpvpznp", "vnppvpvnzvvpzpvvnnzzvppnvnvvnzvpnvzzvnnnzvpnpn", "vvnpnnzpppnzvppvzvvpnpnnpnvnvnnpznvvpvpvnppvnp", "pnvzpnvvzpnvzvzvpnzpzzpzzzzvvpzznppvvzpvznzzpn", "zpnnvpvpznzpvpvppnppnnnvnvzpznvvnvnpnppzzvpnvp", "zzvvnpppvnnpvvzzvnvnvpnnzznzzvpnzpnznpnnnnznpv", "zvzpnpnznvppvvpvpnpvzpvpvzzvppzvnvvnzzzzvzvnnz", "pvznvvzzvpznvpvzzzvpnpvvzpvznpppnpvnvvvvpznzpz", "vzznvznnpnvzznppzvvzvzvvnpvvnzpzvpznpvzzpvzpzz", "vpnpzpvzvvznppzvnvvpvnpvzzvzvzzvnpvvnvpzzppnpn", "zpvzpppzpzpvnzpzpvvvzpvnzzzpzzvznnvpnpvnzpvpnn", "ppvvpnvpvzpnpnznnpnzzpnzpzzpvznzpnvvzppvnppzpn", "vvzvnzpnzpnnpvvzvpznzzvznpvnnzppnnnzpppvnzvzzn", "znzvznpzvvnppznzpvvzzzzpnvpzpzzpvnvzzznvznnpzp", "znvppvvnnzznnzpppzpznvvznnpznnnzvnpnvnpvzzzvpn", "pvvnzznvznzpvzvnvpppzzznzzpzzpvvpzvvnvvzzpznvn", "zpznznnppzvvnpnvzzpznpnnnpvvnvvznvpvzpzzzvvzpp", "pvnppzpppvppzvzzznvvvvzpvpznpzvppppnznpppnnppn", "nnznpvpzvvpnzznzzvzzpppnzppvvvnznnnnvnzpnznnnz", "pvnzppnvpppnzzpzppnznpnzpzznnzvnvnvnnnnppnznnv", "vppnpppzzpvzpznpvzzpzznzpvzvzpnzvnznnnvvvpnpnv"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 27, 42, 46};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> S = {"slslllllsl", "llllllsssl", "ssllsllssl", "lsssssssss", "ssssllslll", "llssssslll", "llllslllsl", "ssslllslsl", "lllslsllls", "lslslllsls", "slsslsllss", "lslsllssll", "sllsllssll", "sllslslsss", "slssllllsl", "slslssslll", "ssslssssss", "sssllslsls", "sllsslllll", "slssssslsl", "slslslssls", "llslslssss", "ssllslllsl", "lslslsssss", "sssslsssls", "llssslslsl", "llsllsslll", "sslslslssl", "lsllllsssl", "slslssssls", "lsssllslss", "lsslsllsll", "lssllslssl", "sllsslslll", "llssslssls", "lssslsslss", "slsslllsls", "slslllslll", "sllsssslsl", "lslsslslls", "lsslslssls", "slllsslsll", "lslsllllll", "ssllslslss", "lslsslllll", "sllslllssl", "sssssslsll", "lssllsllss", "sssslllssl", "sslslsssss"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> S = {"iukujuuj", "iikijjuu", "kjjkukji", "kukuuuuk", "kukiuiij", "uukukiki", "ikjjjkiu", "iuukjiji", "ikjjujkk", "jjkuiuki", "ikiuukji", "jkjjiuji", "uuujkikk", "juiiukku", "iikujjui", "ukkijjui", "jkjijiki", "kjjiukji", "kkjkuijj", "uijjkiik", "kkkkkjuk", "ukuiikuj", "ujuijjij", "iiijkuij", "ikkijijj", "juuuujiu", "kkjjukii", "uujukjji", "kkjjjiuj", "ukjuiijk", "kuiiuiki", "jkkiujji", "jiiiijik", "kjkujkki", "iikkkiki", "kjiiijij", "kiuijuuu", "ijuuijki", "kjijjiku", "ukikuiju", "kjkkkuuu", "iiiuiuii", "kjjijkuk", "ujijukuk", "uikujjuj", "kjjjiiuu", "uuuukiiu", "jiikkuuj", "iukkiujj", "uijujkuu"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 11, 20, 22, 25, 28, 41, 46};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> S = {"deudkpdpttpku", "eeupkdeuettdp", "eeeppkpktduup", "upetkeuekeppk", "puutpteeupukp", "pdkttdtukeddd", "pktukedttetpp", "ktukkepuuddeu", "etdteudtetdtu", "uktetetptduuu", "uudekeetpkpdd", "uddkeupekpdtk", "kueptukpkpkdp", "eduputtdeddkk", "uuepteeeduueu", "ukukedpttpepe", "utkttpkdktepu", "kuetpeupkdpku", "tuudkptedkdtd", "ddpppkeepuete", "ketkdutudptkt", "kkudueeptdtpk", "eduekeuueukkd", "etpkkppttkutd", "eektedteptkdp", "dpkptktkdduku", "eketdtekeuppd", "pdutpepkpetkt", "ekdteupukkteu", "ukpdkttpkeeuu", "kkpudttepuepd", "uteuupekdtett", "pdukeuuppduud", "pkputetutedtt", "kutduddteddke", "tukttukddutdt", "upeteppekkedk", "pekeudepppudt", "uktdtupdeddtt", "upptetdedpupk", "dpdutpdtekeek", "duputtppppdtu", "ukppkktduktkd", "ektupptutepdu", "dkdkdpkuukdkt", "kpetttkpkteee", "uutuduptduddt", "tkktktdutkekt", "tupudtettetdk", "dtdeuekttuept"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 8, 14, 32, 33, 34, 35, 41, 42, 44, 46, 47};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> S = {"ubbuub", "uuubbu", "uubbuu", "ubuubu", "uuuuub", "bbbuuu", "buuuuu", "ubuuuu", "bbbbbb", "ububbb", "bbubbb", "bubuub", "uubbub", "bbbubb", "uuuubu", "ubuubb", "bbubuu", "bbbuub", "bbbbuu", "ubbubb", "buuubu", "buubbb", "ubbubu", "ububuu", "ubbuuu", "ubuuub", "uububb", "bbuuuu", "bubbbb", "bbubbu", "uubuub", "bbbbub", "bububu", "uuubuu", "buubuu", "bbbbbu", "ububub", "uuubub", "buuubb", "uubuuu", "bububb", "buuuub", "uububu", "ubbbub", "uubbbb", "bubbbu", "ubbbuu", "ububbu", "uuuuuu", "bbbubu"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 48};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> S = {"zcspbzozczpbcspcmsmbmumboppzsczzpmumccoumcsuo", "csbbupoposucsmcoccmuoppbubomppmczzuuuzszmpsmb", "bcpzsbpupzbzoobopzcbcbomcobppssucomupmscbcopb", "suummpusccpbsmbbmbcombsummbuzosbcmmmupbpzscpm", "zumuzuzmpmppzszsbpzupmzozmsuzczomzcmspzouszsc", "mcsbsboucsbpzuuobmoszcumbspopuszmcbssmcmczcuc", "buoobuupbubozzmmmupbuuszuumbsccuccmouzczcmzsc", "omuombopcczpumobzmumoszsummpopooccbpbozuooomb", "cmsczczsocsomuczmbzbmcubcpppuzpzsbpcpoczspbom", "zmppcczomcppbposszbmczbzbobpbupzumupzmbpsmobp", "smobubcmbbmcocoupzmoobpsoomubbcmcboosmzpoppoz", "cmocbobocbusmbbmsmuumcszmbsbupummbocucczupsbs", "uupmmmzupbppomsozmsbzbzzszbbssbocozsmbbocmubz", "sbubpubzuozomcosobpbmoumcsoumzpussmmopummbbcu", "bbzmuoozsoscozzzzbosbosobbpozoobuszoosousumus", "pzoszusspzpozcpcpsumobpbuooboooupupcummzopspm", "pzbcopboozupbuuzopscbosuuopssbzposcsppsssczcc", "omzmscospppmcmpbzsccbuccpbucpsuzusmuzusuzubbs", "ozsuccuzmcmccooupbucczobumbpmbzcousbmszupzzob", "puzspoomuuompmscsbzobmcmczzpsssbusboupzzuzppc", "umbbubbumucmcpzmosczzuzpccccmmmsmmcbsbzcspooz", "cczmcpsupmubzpzzoospmsobcbposubmsmobbspccmmsp", "zmssbompzccuscbbpuuzzzzbuzmocoszbcoumpmcoboom", "opbpozbmscoombouspmuccbbbpubmzbcoczsbpcsobmbz", "uzzszpposcuzscspspzsmzmppozspppmmcsmpcmuoocmm", "sbupoboupcmcmcscubocosuzccuucosppmmmzmsbzcmbz", "zumsouczzzmmozumsmubususmzzzumsbbbbpupobouuzm", "muuozszmsccomcuszompucsbpbzspoppuzsopzmbobssm", "mupumccccsobsmzbzussupcpcupszmcuzubmoompzmuzm", "pcppopuopcbbcmubcpcspszmzcbuzcbmoocpboosucmpc", "bmpouomuposbmmppmusscsosbcmpmpbombucppzozuuoz", "cbubccomsuzucosmbzupzusczpmmuucmpubzcocmsuuom", "cuzzzmuococsoosobzsspmzoboucuosucsccubpubpubz", "umcmpossmsmussccbozpozmbcpbomomcspbzcmcumcsoo", "mpoocumbuzmbsspbbpozcobzuopczppmssupoupocmsmo", "sppsucmcsmpbbsuozmccpzpsomzsuoppcmozpcmzzocmm", "sopscupcmsmbzmocmomsszzzcpszmoppbmpuopumommzz", "uzopccsozzzubcsooppmcczszocppsszucucmbszpmusm", "ppcbszmmzsbopmmpmbummucmuubcmssuoscuzszsbupsm", "zbzuuubmppzmcsbbcuozocpzummczbomsccpmoosmpcbc", "ucosscmuubomcpbsczmzzzooucspuszmbpbmzoousbcoo", "psuozzocpzupuscompbzmccbpzcpuuuomommzuppuszbu", "opososupmupcpospusccupoucsoccupouocopppcmszcm", "mbbpospzocmbosucczpzbzpuzuosczssbszzosmssbooo", "pzbmzmsuuuscsomcbucmpsbmbsubpzospommsopzzuocm", "pbpmsuuobbszbmcopzzosczpsucsbmzzbcuzbuzmsmuuo", "soscmbpmzopmccsoozbocsommccobpocsuzsbopbcuubc", "bsmoousbucbcuczsbpuozucopbppmsbppbcpuuupsocpz", "uccozcozpozubpmszbppzbcscsouzocmpupccspubbcuz", "cmpmcpbzpscbzbpcopcmspzocsmbcmssbucpomzcsbusu"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 6, 9, 14, 15, 16, 23, 24, 29, 42, 43};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> S = {"czudqquqjqzcjzdqzddjjcqzjcqcjqqqcczudcuzqjjdzcjzc", "cdzzuzjdzuuddcdzcjuucqjjdjuucqcqzddzdcjcqczucdqdz", "uqqzzzuzdjudccuuqucqjqzuzqzzcczczqzuuzdjjdduzccqz", "jjzqcuzqduujdcqdcujqzzjqcccqcqcqjdcczqzzqqujdjujc", "qjqcjudjuuqqzqdjzzczzujuquzdzquzjjudjujquucuzzcuj", "cqquququqjqqcqdujjujjczdduuqzcuuzqcudqzjdcdqczuqj", "czdjdqjqqcqcjujuzjjjqzzcjdcuzzcuqqdcjqzqcjcdjqjdd", "zdjjuujjjdzjcjcujcjzqjujzudqcduqjdzjduquccdqudccc", "cqujjddqzzdqzczdduzjqjjjqqzzcjuqdujcucqczjdqzjquz", "ccqudjjcddzqzqcquzuuzduzzqjucduzjzzdcqucjuqczzquj", "cdddddddqczuddcjczjqjccjdquzuuzuqjzqujjzzjuqczjzu", "zjcqcdzqzqjqcjdjzucuuudzzqdducjcqqzjzjzjjzzuqujqz", "cqddczjcdzzuzduczjjqjquqququzcdudqjzduqqzuqjzqjdq", "duzjuzuqdjzqzqdzczjuzjzjzczduzdjqcqdzcjcuzqzucdqd", "qqjqcqjucdzuzcczquqdzcqcjujqzjdjzudcqqzqjqqzjjqzd", "dcuucuzjqcdqjcdczccdzduudjzzducqdjcucucdjqccdjzqu", "qqdjqzjjjuujqqzuuczujqjdczcjzqzjdqucqcjqjcqdqjqjj", "uczdzzjzzjcqjjjudcduqzjcdquczqqjjqdqjdccjjzuzcujj", "juuzqqdjzdzcqcucjzdqjjjqjjcqdjdcddzdccucuzjujqduj", "dduuqdzdjzjduddcjuqzdqdjjjczuuquqqjjcdqzdqdquqjcz", "dudqcuqduccudqcuqcducqdzjccudzjqjqjuuzzzudduzdzuj", "dqjczczdcqqudzdqqqcqcdqqzccjdcuzucjuzzqzuzduccuqu", "jdjuqccucucjqucdzjqzuuducdjqcduqzcquqqccudcjczqjq", "juczjqqczzquucqucczujzzdzdjjqqudcuucqzqzcccjcdduj", "qqqqdcqcuuuuzcuccjcddddzcqccjdjzjjjjdcjjcddquqqjq", "dqujuzuqdjczcczjuduujdzcdzcjqqzddzdddjujjdqqqujcq", "jqjzccduqjzuzdczqujuqqjjuqjqqqdzqcuzqquuuzdzzdddc", "djuzczzddjqzzqddzjdjczqdcqduujzduujzjcducdjqjucuz", "dudczddujcddqqqdzzjdzqucqcqjqqujjjcqudjdjudjdqzuz", "uczzjjuquqccjzuuudjqjqdcjujcqucqcucjcddjuucqucjcc", "djuzdudcuqdqcqdcccdcjzuuzudqujqqqquczzzzzzdqcqzqq", "uuzuuudjzczqzquqqjqcqqqqzzdjuzqujujzdjcjqzucucqjj", "cdcjccqjqqzuucqdjujudjqdcuzduujdjqjjzdzudzduzjjuu", "czzuzczddqucczdzzcqcccuddcquzujdcqjcduqjdjzqdjzqz", "dducujducdzuqqquuzzcuczczqzcddcjzuzqddddqjddzjccz", "dzqqjcjjzcdzzqqzcdzcuzdzdjcqjcdqdcccqjzzdzudzdzcc", "zudcqjcdjzddcuujzjduuuddqcqzcjdujqjddjjzjdqcqcjqj", "ddjcjduccczqjcjzqzqducqujcjjzuqddcudqdjdzdzdujdqu", "dzujcuczujqcqzuzuuzjcqzuuccdqcjjqqzcdjqqjcjuqddcc", "zqjdzcucjdqjqzqjquqjzccdddjcddqdcuquzdjjjqqdcuuqd", "cuzuczqdcdzuujzczuuujqjqjujjjqjqcucqudzdddjdddzqc", "zuqqcdqjcdzuqudzdzucqcqqcjzuqjuzducjddzqqjjjjqcdz", "jjzcczzzqzzucdduqjdjzcqcjdqzddcjcjqccujududcdjjqu", "dcujddjqjcujqujducdcucjdqcqzucqzuqzqzcdjcquuudjjj", "jzczcduczdzcqzdcujcddzqcjzzcjuzuuuzzzccqqdqcdqcdq", "dqzdduzddzcqdjqjuucuuqjqjczcdqujqdzdqujzccducduzq", "djqjcjucujdcujqqzuzdquucuuuudcjczquqczzjcuqqucqcd", "zquzcjuquzjdjjqjjujddujuuzcjzczcqducdqzqjccqqdjuq", "zjjdqzdqcuzcquudjddzccuzdqzdujdzujucdqzdcczuzuqdd", "cjjcujujdqjcjquzzjqzcddddzjqcdjcduqjjjcccuuuqqczc"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 13, 14, 15, 16, 19, 28, 29, 34, 37, 46, 48};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> S = {"vvfvvfvv", "fvfffvvf", "vffvvfvv", "vffffvfv", "fvvvvvvf", "ffvfffff", "vffvfvvf", "fvfffvfv", "fvvvfffv", "fffvvvvv", "vvffvfvf", "vvfvvvvv", "fffvvvfv", "vfffffvf", "vfvvfvff", "fvfffvff", "vffvvfvf", "fffvfvvf", "ffffffvv", "fvvfvfff", "fvffvfvf", "ffffvffv", "vfvfvvfv", "vffvffvf", "ffffvvvf", "vvfffvfv", "fvvfffff", "fvfvfvvv", "fvffvvff", "ffvvvvvv", "vvffvvvv", "vfffvvff", "fvvvvfvv", "vvvvffvf", "vvvvvvvf", "vfvfvvvv", "vfffvvvv", "vfvvfffv", "vvvvfvfv", "vffffvvv", "vffvffvv", "vfvfffff", "vfffvffv", "vfvffvff", "vvvfffvf", "fvvffvvv", "ffvffvvf", "fvfvvfvf", "vffffvff", "fffvvfff"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> S = {"npphtnttgdttrtnthghdgdhgrthprrprdgggpp", "tdrrndpgptdgtghhngddmhthppmgpggpnrgrpp", "rrdtgntthdgrgpghgnmnhnhdthhdhmprnnhgpd", "rgmpnmrmphdmhtmpntthmhrhgndggrgtrhhnph", "ggnmhngrptptgppmdhdgdmdgprdmdhmnddnrnm", "rmtrtndphddrrmgddttrtdntdrmrdrrhttthdr", "gmhtrprnrndnrptnhtrmddhmtpnrrttdmdprgp", "tndntdrgpppdgmhhghgtgrhpmdgrrthpmrgnhp", "nmgrhnhtgdggthnpgpghttndmhmgrngndmnght", "gtrdnddhdthhmtnrnmmrgntpmmnddmnmgrrmpp", "mhpghprhpnthrhprnptrpdmdttggtnnpdndmtr", "ttrndmhpptnhtnttrgnpnrpnmtdmhhpntdddnr", "rgdtrdrgtdrdtrnrhphrrmdptrgptrnhrtrmdd", "hgmpdrrpphrptddpmpngnhtgghhnndhrdhgmtg", "rprrrmhgrdgnmdnmgtrmrrndttgtddmhghprdn", "htntdgnhmngnhmhppnhnhhprnmdtrpmhggphrm", "ghrmrrddhmtntgnnhptdmtndgghnmgnnrrgrgh", "hptgtnnhdnprgnhmrdrpgmnrrrmhmgmnmggrpm", "mdhnmhmrmpghdgdnrdghprrprmghppppnnpmdr", "ddtpnnpnrnhthdrtpghphptnnhdtdgmtmnrddp", "gngtgnmrrndnrmnmtmprrphdmnnpdrrtgmgpmg", "pgnrtdpmpdnpnmptprrrnrgdhtmpdhdrgggmgg", "tmrmpdggpghmggtrghrmnmrrpnptrrndnpptmm", "htndpnprdhggrgthdntptgrntmmgntghmdhgmm", "hhmdtrpmddtghpmtrghprrhgmgghrrnptnmhhp", "dpmdtdphrdgtrgddgnggrtddhmnprdpgppdhnn", "rghphtptnnmghdrpmhrrdnhhhpdtgnpdmdmgmh", "dhdrhrdtnngdmgrdpdtrrtnrhmdpdtdgdndmnm", "htgnmttpmpgtddhnprmdghphgnppghpmmphphg", "ttrdhrtndttphmrpphhhtrphthrmthmprrmngm", "mmgrpgdpgmgddnmhtgptpphghhtpdmrtmdrngg", "hmrdpdddgpgghptnptpdmtnhpgdpdtttgmpgtn", "rgmdgdptphtptnhmgmmggtthrprdnngndpdpgm", "rngmnnhghmrrhnhngtgpmpmnmrgrngmntmnpmd", "dnhrtpdptnnpgngrrmrrddhmhpmdtdgtddngnt", "nnddghddtddmphppmgnmhphpnrhdmpmhtghtgd", "dmmgdgnmgptpmmghtgphgrdpgdmtgmpptphmgg", "phhdgnhmhrtppgmrggrnmmrprrtrrhpnnmhddp", "pmtgrgrthdmnnnnnmgpmrhhngrhngmhdddrrpn", "hdtmprrpndthttddggtdhprdtdmdgnmpmnnrdt", "rtmphrrhgtttpgrtmprhgphthrnttgnngrpdpp", "mrggnhmnnnngggtrtpmpdnrdprtdghngppgdtd", "hnnrphdttrphpnmmhttrrtddhthhmdhgmgnmdg", "ntdmphprhmrhprpnghppnmhtmndngdddrtgmrt", "gtgdnghrnhpmmphmndtdhnhrrmgtgpgdmhmdrg", "dpdgptdptpmnnrdtmnhrrttprggmnrngrhntph", "pghtnndtdhphdppdrgmpdgpndmmnrppmthmmgt", "mrpdmndnhmhghdgdmhpppphddgmtrhhndhppgm", "rtmrthtdgmnrprnnhhddddnthdgdrrrtrngnpn", "dphnggnhptngnmhmgnmmmmnrtgrpppnnmgdhrd"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 9, 12, 15, 27, 28, 33, 36};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> S = {"foswritrfrfwor", "hyhwwidyrostdf", "twywifoyfdthws", "sywitdwossifhr", "fidtyydhtroyit", "fhiwfrooiiwsry", "frdrsttditsodw", "hdhthwfsdiirwh", "wdhhhyrfhotorf", "tdsttooirfiyid", "irhshtssyrfidw", "rffyrwworrsoty", "isydtfodworrtr", "twootfwdyisssi", "rsthrotfryywdt", "ofwtstwywroiro", "fsfdywrywhdyff", "hsdoryiwtwrwof", "syiiiridwttiof", "stishfiirwidfr", "htisiyifhtwdiw", "siiwhdsorywdyr", "hshyyhfhyiwwoy", "iwshsdsydfisih", "ohstiwdyryworr", "owhorstytdysdt", "wisfhffyrfwwrh", "idhtdhofffsoio", "dtyottodtrsfwh", "yddwyyrsdfdfyf", "fiwfhdiwdtfstt", "tyoofshrhroyrt", "woostodioywhyi", "wyhitiywtiirry", "hdfhwwoyrsiffs", "drowfhsiottsio", "iiiwrwstrrostw", "rtrtwisttifffw", "rhhidhiosrhhwr", "tyorihhwwsywot", "iiiiotsooyrifr", "wtfwwdohifhdhw", "tddtiswifyoryi", "sohoiodwtiwdri", "rwywdwofsftfhi", "rsyrsffiossyfi", "rtyyystrwfrwho", "hoifodhoftfrsw", "srhssystdtyifo", "sowsyfyydidrih"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 11, 16, 18, 22, 23, 26, 28, 29, 32, 37, 38, 40, 41, 45, 48};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> S = {"srksrsrssrr", "rkrkrkrrskk", "sssskkssrsk", "sksrsrrrssr", "srkkkrskkrr", "rsrskksrsrs", "srkskksrksk", "rsksrkrsskr", "srksskssrks", "ksksrrrkrrs", "rskskrksrss", "rsrrkrssrss", "rkrrrkrrkks", "rrksrrkrrrk", "kksrkkkrkrs", "sksrrsrksrs", "rrskrsksskk", "krrrrsskskk", "rrkrkrrrkks", "rrskskrrrrs", "sskkksssrss", "kkkksrsrrrk", "rkrrsrrsksk", "rrskkrrsksk", "ssrkrrkskkk", "skkkrrrkksk", "rrssrkkkrrk", "rrskkrrksrr", "rrsrsskrsss", "rsrrskkskss", "srrkrsssksr", "rsksrrsrsrk", "rkkkrsrkrsk", "krskkssskkr", "rsssrkrkksk", "rkrrsksskss", "sssksksskkr", "rkkrkskssrk", "skssssrkrsr", "kkssrkssrsk", "kskssskrrrr", "kksrssssksr", "krkksrksssk", "skkkskskrrr", "ksskkskrrks", "skkrsssskrs", "rrrsrrrsskk", "rrrsrskrksk", "rsskkrkrrrr", "sskkrskrrkk"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> S = {"dxdaqybddadcabxxabbdqbqyd", "xdadxxcbabxdycadaqabcdbdd", "xdqcbqxyxqqaxadbqcdbbycyd", "ybbbxdcaqxaddadxqbcbxbbad", "byacaaxbydbxbqbyxyxydbyac", "bqxqqdbxadcxadabyqqxbaadd", "caaxqydbdyaydcccqacyddcdd", "dxbacbxqcbcdyacaxyxqcdcqy", "yxyxdbqxbyxqdcccxybqxdbxq", "cbdcxxycdxcaycddcqxaaxyab", "yadxyxcyacxqdxqdabbaqxqyy", "dccxyaddbdaacxxcqxbcbaxdx", "qcxqaxqcccdacbdbayaydqqqc", "ddqbyaxddcaydcqxdxcbxaaxc", "dbqqqcyqqabxqbccdycybbcqq", "qyybyxbxdbayxqabbadabbaba", "dbqbqycxxxbxbxyyddbxbbbxq", "xqdbqbqyadqqcbxqyqybacdcc", "ccqyxcybxcbccqcyacqqbqqay", "bqdxxcbbddqdaacxdxyycyadb", "cbayacqqcbbbbdycqdyxadbxq", "aqqqqqaqqbbcdcdqyxdydbbdd", "dyqaccdyddcbbqcaqdqybaaxb", "caddxxxdxqbacxadxdqdaqyxc", "dbyyqaqxyxbbqabdqxbccxyxy", "qyabyyxyxcccbqaybyxadcacb", "byaxqybxyyqcydayqxdbyddac", "xddqayqdcbyadacqyaydqqada", "ydqxqqaqdbydqqxbqbybxdaxd", "ccybcbyaqaadqxbyxxqdccyax", "daydccyaqaybbcxqdyqycyxqb", "ayxacbayddaqqdbcaxxdadxdx", "yacqyayqxxacbbabcdybqbxxq", "ydqqyqyxycybxyydayqdqcxyd", "xyyxcxycdadddcadaxayqqyxy", "bxabcbqdqyycacaacadqaqxyy", "yxbddcbqqbqbcdxbbbyxddxxq", "dyqcyxydcacbqccxqdcxycayb", "bdyccaaaccbaxqxcabcdxqxbb", "yaxqxbdybyqxqbydxyqqybdqb", "caxcqqaqxxbbxyqxqccxcqxad", "ydxcdqxabdxxxbdyabxqqaqad", "baqqyycayaqacdqdadyybxbab", "cbbddqxbdccyyyadxqcbaycxx", "dqbybcqqqcacyyaadbacxxqbx", "yycycaaaqbdabacqqqadbcdxc", "ddaadybdqyyyyayybdxbxaxcy", "baxxxxaacaaybdqydqxadycca", "yyaxqxccbdqbdxaaxbydbxqdy", "qdbcdbdycacycaqxbabddbxxa"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 6, 8, 14, 15, 16, 18, 21, 23, 33, 40, 47};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> S = {"avvivaivtavvaivivivivtaititvtaiativtttviivvvvia", "aaavaivtviivitiitvaaaavaaattvavavvviaivtiitaatv", "ttvattttvvvtatvtvvaavtvavattivttivtaavatvivttvt", "ivvvtivttviittvttatttaiitattavvivtivtativvaatvv", "vititiiiaiatiaaaavtitivttvittiivtttaaaativtttvv", "avtviaivtiiitvivvaaaitvttiiiaitiiavvittiiaiviav", "aiivivttaviitaiitatvaitviaiitivvtativvvttivivtt", "viatttitataavvaaiavaaivaiavvaitttaivaivvavitata", "aatatttittitaviivaavvatitvaatvvivvitivvtvaivaai", "vviavatvtvatitittvitvvivvitvvvtavvtviiiivvvivia", "vvtavtttiaitvvittitvtvivavvtaitativatvatitatvia", "vtttiitvtivtavaiivattaittiitiivvavitivvivvvtaat", "tavvviviavvtttiititatvtiavvavvivatiatatvttvavvv", "vtttviivatiaitvitaatavvvavvvvtiivtaiaivtiiiavav", "aiaivivaitivaitaiaittaavvitaaaataataiavaititaaa", "vvviavtttaataaaattiattiataiiiviivvttivvtivviaav", "aviaiiaavviviaitttiiitvatatvttaviviviattavvtiii", "attviaiitvvttitiitittatvatvvvvviiivtvavitittvva", "ittvtvttvatavttittvitvvavataaaavtittavivavtaiii", "vitttitvvvaaaiitviiiaaiavitvtiaivviitaiavvaaati", "vtttaaivttattvvvvviitiaititaiavavtiiaavtviaiiav", "aviiaivvivitiavaaiaavattiatvvtvavviivittiviaiiv", "ivivvviiaivaaittaaiiaviaitiavvivavvitvitvviaati", "tatitvavatitiatvtivtivvitatvttavtvviavitvattttv", "aiavivviaiaaivvivatatavttvviaivavttitvttittiiav", "vaiatvvvvattitttiavtaviatvitiivtitvvvvtitiiavvt", "atatiivivivvvvvtvaiivattitatviaaiatavvtitatiata", "avaiiivattvvaiaiitttivitvvaaitvtiiiittvaaviitta", "tiavvattatatviiativiatiiaavvvaiaivaavvittvivviv", "taiaiiiavtittitvaivvavvvavvaaavviataiitvaivatvt", "aiaitvvttivittvviviiataiitvitiiavttaiaaaiiviviv", "vvvvvaiitttvvaaaaititiivttaivvattviaivitaataiaa", "aiittavtaittavvaiiivvviataiaviataiatitvaaatatti", "iavtttavatttiattvvtvaiatttivaitvtiitvtvavvtaaat", "vtttattitviatiiiaitiivivivviaiivaavaavvaiaiiiav", "aiiittiitatttavvttvvvtiaivivavivtivvviiaiaavata", "vvavvviivvaitviviativvtaavvvtavavtaitaataattvit", "aitvivvittavatatatvaaavtaavavvttativiitttiattii", "ttviatavvitivvtiitvtattvvaattatititattvitiaattt", "iatttvtviatvtaiivvvtvvviatiaiavttttvtataataviat", "tivavatiivvttaiiiiitatavvtttattttavtavvvaavtivv", "vvaiaaiiitavivtviiitivaaaivttittaiiaatvaavaaaav", "tvviavavaaivitvaavivittvtvvattvvaaiiivtvvaviiti", "tavivvaaitaavvaaiaavtaviiiiavviitvaitatvttvtait", "vttitvvvttivatviivtttttaiiaiiaaiittiavaaiaaviiv", "iavitvtvvtiattaittiiavaitittaaavtiaaiiavaivtvvi", "ittitvaitviivaiiiavaittavittiaatttaaiaaaavitaiv", "attitaavavtiavtiaaivataiatitittvtitiaivttiiaaaa", "iiiiavvvvatatavtvattaatttaaatvvavvvvtavavvtiivi", "vvtiiiiavvativattvttiiittivatvivvataaiatviiavaa"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 9, 14, 38};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> S = {"imhuirhmruhrmrllrmyhumdhhdurhrduyydmmddurmluidi", "myudldlihlulrdumhuumlrurrmyrdhhdrridyyihddiiuyh", "iydhldmrmmhlldyuuiilyyyliymrildduhhduhyilydyhlr", "ilrmhmyihddiddhdydhrlumudurlydlluuyhulyyurymihd", "ydyimhhrhyyiyyliuyillmyudiidylulruyimullluylidr", "uymirryryimrdluhyhddliiuuryhdiudmuyihlddyylmiyl", "myililyylhmyrmhulhyilmlllyddhdiyriyhyhdhldlrrmr", "hdidhlyrruidiulhmirdhhlyudlyrrhrymldrummhyiiyyl", "diumdymhyulyimddhilymiydlumluyuyyduurhhrmhrlmuh", "ddlyhmduiihruimmduidrdmuuhhhumiyrrdmdhurlldyiuh", "llyryhrlymimrmryidhdddhyuiirludumdrhhmlmdmyyhdl", "lmmuhmuddlmhrhhrryhldmmyumudrdrmdlyllydyiidddmr", "muilhlydhyrlhdhhidiyhhyylrydrrullrmyiuilyuuyrhu", "yiruddmdrhmhhuhmrurmlmdmyyhllhrirrymiuumilrmdhd", "luumdlhuihuhyddidmudildulruuuumhlludmrimdhymyhu", "rmhdryumimhmlilrdhdilyururyimyhihyudliruuummlmh", "yihihlliudrmuhhduuimiyymirihhduiuhddhuhmymuyiud", "uuulmmrruirmidrimhiurrrhyuhlhydumiirhlylydmhyui", "mlhurmyrurryhdrdyumlhmimilimhdriuuihlrdyruyddry", "ylhrhirliddrmrdudlimludhhdrddydrydihdhluuhhrluy", "dlyurdhmyurdhhidmhyhmumhrmuymhuihyyhirimdyymrur", "hldhyylmdyhyudrdymmdluumrmlyiylmydlrdruyhlhdulr", "umrurdyllyurmruudrymumuyyyhmmlmdmhyriudiydurdrl", "iyuhiidrylduyldryidyihumhdihhddhldidyurlrmirlmr", "drmmiyuihryrlumhliliylyuhyilhidiimhduyiyrrilryl", "dyrmuyuhiddhddmhhhrmimlrdyuurmhyludmiumridrmhhl", "dhhhlmyhurruuldlullliuumlhulyirlirriumihiyuumum", "liudididmymyymihmdymiduirllldimdhrhiumduruuidlm", "hhiilhyuuiummmllmmudiyihyirlmrurilmyllmruidyluy", "imihrmlhulriihhhmhruuhdrrumridhihymurhdriyuhmyl", "yumdyluhumyiuhidhmumdryrrmddrhrrulyyilmmihillmm", "ddumumdrdhhrddmmlrmyrliiiurhidrlydmmldiuduhmhlm", "yuuiyduhymydlmdriulmmiuhiuhmmhdyhihdduumruddyul", "limiuimhrlmdmlyydmmymirmiriddidmmurumhymlmimdir", "hhhruydyhuhdrdyrhidlydmirhmymdilhmdliumiirmimrd", "yhmldmulydlhulmyuihmlhmdryylhyuulilmrriyryrryuy", "rmrilmhhidryidyyhydhlrimiydlmdydlryyhrmhyyryimi", "irrhuhhuuiyydllmhiyhymhhrdudhruihmuihyiryldiryh", "lmrylmdudriudlmdlrruyudylidrrlrmiuyiruuumyymild", "rhyihimliuyduyhdmrhhhdrmmrydluymmihmdlmdyhmyudu", "dyumrmimrmmduuimdirrdiyldmiddlmmlllhilrlmdudldd", "uddyilrrumhmududryruymiuhmhiuyluumllimiymmlrhlm", "yrllliuddhdyrlyhdiimrmhmrhhhyyirduuhrriryidmlru", "hhlmiryryurdhuullryurhurmlyldiidumdiriyuiirhdrl", "mymhmhmlrdymlyyhlhrrumuluyuuymilymhuyimhhmuumml", "mhrmyumlyidilrmrmuhhlldyryuhldhrrudmuudrudihyur", "ddrmummyrulyuhuuuyrrhhmdlrlluluryyhyddlldhuhdhm", "lhyymmhlhidlhyyiumdyyrryldylmlllylmrmdduuhidydr", "yuirlihidymuihmrlidhimliyhmmlulirhhmyiiuhmlmdli", "llydrrrdlrhrhiymhyyhmlmydryiiyuuimmdrudhyhihrym"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 6, 14, 18, 19, 29, 33, 36, 37, 40, 42, 43, 48};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> S = {"illdtttttidiiltdltdtittttltdttdil", "tiillittidlditlditllldddlittdlidi", "iitdtdliiiitldtttttdtddllttlllidt", "ttlldiiiltditiiddiiidldltdtdititi", "lltlltidiliilitliltilitlilidddlil", "tlddlillliddlittidllddiiitllidddd", "ldldiitillldlittttdldiitdiitlitld", "ltddditiitdltitdtiildtlldlltttldd", "ddtttldtlditidltllidllddtitdidllt", "dldddtiildlldititiididddlllddiilt", "ldidllditldittlilitldliiltdlldltl", "ttiididllttdltltlidtldidttddiitdi", "liddttdditititttldddtttidiittlttl", "ttlttitttitittdtddtiiitlddltddttl", "idiildldtdttliittdddtilltilltdlld", "dlttlldttiiitttttitdtitlldtldtdti", "iidldlidddidlittidlltllldldttittl", "ddldddtiidiidldididdtltitildlidtd", "dltldtidtdddliltdtidtlddtddltilll", "lildldliitltlllidtldliiiidldtilit", "ttldilitidtdlldildtittddtldtdtddl", "dtdillddllddldiddtiidlldtlllilttd", "idddlitldtiddlidltllilildttttittd", "ittldlllidtititltllitidlddtdtditl", "itilitlididitttilltddtliitltilltl", "itdittillililiiliitldldtlildiiilt", "ddidilidiidtdtliddtllttltditldlil", "iidiltdliddlllltitttiddilltiitiii", "dlitidititdldliilididdiiltllilddd", "itdltdtltilditlltdlitilddlildditl", "iditditiitttttdliidttiditiiitiddt", "lildldllttddtilllitttddiltdiltdil", "idditllidltttdildllllttldltddlill", "tddtttdiltitiddididldlidttldltiii", "ltldittttlidditttdlllltlldtiitlii", "tlliltitiddlltittitttdillditiditt", "ddldddddtlilildtttlttddldldtlidli", "dildliitllidllltlddildiidlldltiii", "ilitltiiltidtddliiitddttttldilttl", "tiidtlitdllilltddltdtilddldldddil", "ittldddillitdiidtiididilddttddiit", "ditdliddiitddltldlldtditditllttdl", "lldtttidttdllitttitlldiltddlliitd", "lidlildtitdldddditiilltiitiddtdld", "lldtddttliltlitdildtiddldlidliiil", "itilllllttililtiilddlltldtdtdiild", "dldliittlltilddiidltditllddlliill", "tltdillddldidldldtdtltdddllilltti", "idtdtldddittlliliiilddilditldtitt", "dlllilltlidlidlllltidlittlitiiiti"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 13, 17, 25, 30, 32};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> S = {"lojlpjofrioofljjobbeborhpflobeiflre", "pporfjofbpipllhoeiorbjjrbpfoerhprof", "fhrfblhbfrirrhpbeooijjlherbofflfolp", "jbileiohpfljblolfjrojiilljrrleofehj", "ojjohihlfphihiohiiifrojihiljjjbpfle", "perjlobpplphehlobihrborjeopfpriiroi", "piorbhpjibbilebpffohjblihplrbhjilhe", "iopijlblbppprhpjjprjehhrjrrbeolhoeb", "filiiepprieihhrhoipejllhrlfbjlferhe", "oohlbhffffhblpjfreliljohpbfprerprhp", "hrfoeeiehfibifiihjefrjrphflelefbbpl", "pllpfpfpfjpehblpflpbebplrijooflhlrp", "jiohjjlhifrflhojriihrebhjohfbebiiff", "febhllfefijfehlffjfbopeopoibblrlfoj", "phiifleejbpfpijlihforjjeripolfhjppl", "phliohphllfpjjjoepppfehrbjfplpjrbir", "heprporjpoefehrfeferprljrlrjhlihelr", "ijpofrheprberleilbflboijhjrlpolfpbe", "oelrfihrfofejpbofoelifoppefpbrebblb", "fibiefepiiirhfiobiieibhrhhhefpoiojb", "eoblrhirejroblpboferorpjoepoibiifbl", "ejjroflrrpiiroojbrpipriffhliepebhjh", "plhhjiibhlreprjeroellfjfbpfbhfrprbi", "irjohjjofflrjihpppiffhbprfflfbrflor", "oelrijrfblrojplefpoorpibjiirplbjhlf", "bifohoiihjehojobloorrhbrllhhrliljre", "lehilpierfpohjphrjprpbhorifholhfpfr", "lhorerfjrhohripebfbhjoehlrbirierpph", "fhprboelrippbrhjrffrrhfhbiooblpjpjb", "ljopelehfffprbelerorfefobbejjpjbhjh", "eroelpfbjbfjfjipilirropjpejbbljleoi", "rlerroirrfhjhherrrfrrlfibjihboijlle", "fbebbjirfifjihfperiirlpilrpfojppfrl", "pfppelreejbpieiorbhrhpfrflhjrolfhif", "lhffppflrjiejphjpplolbhepieblejojjr", "elfhjlrjlbfhebjbiobrliebophbjlojhff", "efroiejeollllrfhbhblljlfrelffrpjhhb", "fooiijehrheeloprbhbjifhojiirjrjehej", "ripfipiheiibrrbhebroolehblfrpofbjir", "ipffblpjihjffeiepiefjhfiopfobiihelo", "rbjhjpbrfolrihofjhebjiiblleoheijhff", "beppijibpflhbjrfihibbiojlljlrhibfib", "ibrhlrfpehhhpjiejopfpphpbrijlelhbbr", "rpefpeejfbbirebbpphrbpjifblfrhrffle", "oohjeerfebrfeflorejjohrjrehfjherlfh", "hofjopfreierofhffhebbojrepjbpjpioir", "jhbooiiehfoebifoofjpjrflphjooohrooi", "ebelppfeoiiorjbpbhephfijipbhoeoijol", "blrbbljppllilppfjbffplrejfolfhfpjlf", "fbjjlelprjjehrfbjfieifrlfjffhpleelj"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 11, 12, 13, 19, 23, 25, 26, 27, 31, 36, 41, 42, 44, 46, 48, 49};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> S = {"tfntntttnftntttnfttnn", "fnfftfnftnttfntffnttn", "tfnttfttffffttnntntnn", "tfftntttftfntfnntfftf", "tnntftftnntnttnntffnt", "tnftftftntfnttntnntft", "tnnfntfffnntnnfftfftn", "tnntnffnfnffnfnntffnt", "ntftfnntftftnnntnftnn", "nfnnffttttnnnnftftfff", "ftftnfftnfnnffnntftnn", "ttnnffttnnnfnnftnnttn", "tnftfttttntftffttnntt", "tffttnttffnnfntfntnnn", "ntfntfntffnnftfftfttf", "fffftfntntfnnntnntnfn", "nnnttttnfnntftnntnfnn", "nttfftttttttttfftfttf", "ftffnfftfntnftnffnfff", "nfftfnttfnntfnnttnnft", "ffttffntnfnfftnffftnn", "nttnnfnfntftnfffntntn", "ntffnnfntfftftffffntn", "nnffttttttttnntntfttf", "fftnnfnnffntftnfffftf", "fftnttfffnnfntnnttnfn", "tntttffffttftfnnftttt", "nfftfttfftttnnnnfntfn", "fffntnttfnnfnftftnnft", "ttttnnnnnnffnfnntnnff", "ttttttntnffttnnttfnff", "nfftnftfntnnnftfftftf", "nntnnnfntnnffntnffntf", "tfnfttfntfttnnntnnfnt", "fnttftntftttnnttftntt", "ttttntnftnntfttfntfff", "nfntnffnntnfftnfnfnft", "nfttffnnnnnfnttttntnt", "nnntnfttffntnnfnntfnf", "nfntfftftfffnttnffftt", "tntnnntfffnfttfnfnntn", "tfnnnnntfnttttnfnfntn", "ffnfttntnfnttftttfnnt", "tffnftfnftfttttfttntn", "ntnfffnffnttffftttntf", "fttnffffftttfnffntntt", "nttfttffnnntftnftfnfn", "ffttfnttffnnntfnntfnt", "ffnfntnnnffnnnffntftf", "ftnfnntftftftfttftftf"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 17, 18, 32};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> S = {"iqqiiizqzqppizppqizzzpqzppzqqppizzzp", "ppqpizqpzpiiqzipiqpiipiqqziqiiipzqqz", "qipqpqpzzqiqzqpziqqqzzqqzpizpqqpzpzp", "qpiizqzqiippzqizzpzzipzpqzzqpzqpqzpp", "zzqizppqpzqzzipqziiqiiqzqipzzqppppzq", "zpqzzqpqzzzppzizpqqiqziqppzziqiqqzzi", "qpiiqiiqpiizqiipiiiziqppqpzipqqzppqp", "qiqqpzzpqipqpppipzqqqqqzziqqqppziqzp", "qpizizzzpizpiqqpippppziizqpqippppzpz", "pqziiqzqzzzpzqzpizzzizqqipppizzzqpzi", "ppziqzzziizqzpzzzppzppqpizzipiippzzz", "iqzipqqiizqziiqiiziqpqpiizipiipiqipp", "zqzqpiqqiqiqppiizizppzizzizizipzpziz", "qiqqppppzppqqziiippqpiqpppizpqqpqziz", "ppiziiizqqzzqiqzzqpzpqpiiipzppizpqqi", "qpqqppiippzzpiqiiiiipzzppqizzpzqizqq", "qpiipzzqzipqiqzqzqpizzpipzppqqqiqqzp", "qziiiiqpqqpqqzqipppzzzzzppipqppzpzpi", "qqppzzzpiqqppqipqziiipqiqzqzziipqqzz", "pppiippiqzqzzizqziqzppqzqiipiiizqiiq", "pzqppiqpzzqqpzqqqzizpppzzqpiiqzzzppp", "zqizpppzpiziizpqqzpiiqippippqpzqpppp", "ziiqipziiizqziippipzziqpqpzzzipppiiz", "qqipiziiqqzzpppiqiiqpqippqiiizpiqpzp", "qpppqzpizqippzqzqzqzppqqipqpzzzzpqqq", "ipiqzpzzizizzpziziqiippqppiqzzqqpzqi", "piqzziqpqpqiiiipzqzqpqqzzpqiipzqiziq", "qzpipiqpqqpizzpqzqpzziqizqizzipqizqi", "zqpzzpzzippqzipiqzppqzqqpqqppzqizppz", "qzpzizpzqqziiqqqqiqzqzqqizqizzizqziz", "pizzzpzpizzqipppqzzqzizqziqqziiqippp", "ppqppqzzziiiiippiqpzqqqzzqppizqiqqqq", "ziqqzzipzzpqpqzqqipqzqzqqpzqipqpqppi", "zpqiqpqqzppipiqziiqqizizqiiqpiziiiip", "zizqiqiqzpppqiqqzizizpiizpzpqzpqzzpq", "iiipqipqqqqppqqzqiqqziiiqzipzziiqzqq", "qqziqqpqpqpziiqpzzqzpiiqqqziqqqpqqqi", "qzpqppiqipiqiqziqpzziqqpzqzzqzizqzqz", "zppzqzzpzqpiipiiizpqpizzizqzqziqipii", "zppiqipqppiiqzqipzpqqizqzqpqpipiziqp", "qpipqzzzpqzipqziqpqppqiiizqqiiqqzzpi", "ppqzziqqpzppzzzipiqzpiqppqpiiqiiipqz", "iziqipzziqzzppzzpqqizzppqqziqzpiqqzp", "zqzzzqzipzzpqzzqizpzppqiqiqqqpqzppzz", "qpizzpzzipzizqqzqziqqiqqpqpqpipiipip", "qizqpqqqizqzzizqzqippqpzzqqiqizzpqzp", "qpzpppiizqpppqizzpqpzpzpqziiqqipqpzp", "ziiqiiqizqziqizipqipqpzpiqzqqiqqiiiq", "ipppizqiqzzzizzpqqqizpzppqppipiipzzp", "izpzzpqpqizzizqpizipqqqqzzpqziqqqqpz"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 10, 11, 21, 36};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> S = {"umxtmtd", "xdmttdm", "dxddxhx", "tuxtxdu", "dthtuum", "mthxxtm", "udtuhdm", "mtmhutd", "xtthumx", "xmdmdtd", "txmdtdh", "txhmtmh", "mhhhmhm", "xhxttum", "mxmmutd", "umhhhdx", "tummhxh", "txmummm", "ddumthm", "hdhxtxh", "txxdxmx", "txmmmux", "tmtuhxt", "mhmhuxt", "txmhudx", "mhdxdhu", "hmhmmht", "dxxmxtd", "htmuxdt", "uhmmtdt", "txuuutx", "umhmmuu", "xdtuhut", "xxmhmmt", "huthhtm", "txhdhth", "tummdht", "uhmuxxh", "duthuth", "umdutmt", "utduhtu", "duudxtu", "mthtdhm", "mdxdttu", "uthtxux", "tmuhxtt", "thhdtdt", "dhxxtxu", "dxuhhtd", "hmmdmdd"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 9, 12, 17, 20, 30, 31, 40, 41, 46, 49};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> S = {"ittimthdmmhihgptpmdigmtdhdgmmmhggitpg", "mtdttipmhpdpihpgmthgdpgiidpdptgimmght", "ggdptghtiimmppdgmthitdgmpmthhdmgddipp", "dtpdppmhttdtgggghmddmpipgdmddmghtpmdp", "gmgtmitpdgtmphidthhttpppgtgdhhmdihdii", "hgpmpmdtgitggmpmgitthmghimdmtiphgphhp", "tihtmighigdhdpghiddidpmtitiiitppiighi", "ttppmdgmtddhtdmmpiipdipgmtmtmipmdttmd", "tghtphtgitippgtgggmghdphihmpihgmidtih", "ihhhmggiidgpgmhgtdmmhigdpmhittmhmmddd", "phhidpmgpmmdditgggpdmtihtpihpdmhptigh", "dipdhgpphhgidhdgdmiiigtpthdhgittiiitg", "mgithdidgpitpdtpithihtdiiddphdhmggtpd", "htgtpipgighhgthhiihghhhphmtmdmhtpdttp", "dimihmhmhimtpdddptgdmgmgmthiihmpmgpdt", "gpphmtgiphihigpimpttpmpgmiptppdidtppi", "tdihhhhhgggiimtihhmgpihmdpdhmdhhpmidd", "gthpitttmdgidtdpdhmimpidpgiggidgpidgt", "iitpmptphpihigtdimtpmgpithtmdmgimppth", "gdhtgpdiidthitpgptimmidhdhttidhphpipt", "phihdpdhthphhtdihpppmghhhhhiipdtmdghg", "mmhpgpidmgmpdthittmmhpiitdiiggmhdtppd", "igdmgphiddhdmtgmmmdhmigtgphhdtggtmpgd", "ighmigiidtdhphmmgddiigdghdpmhthmgdhip", "hmipmhgpdhipdhmmighdpddtmhggtpimmpiit", "ditddmhppmtgdmghiippgmidgithidtihmtdp", "phittdddhhmhhgtgtmpgmgimdhdgmtggimpth", "hdgitdgidhgdgdigdmtidptipiggtgthtipig", "pptgdpghhpiggmtghtpgmmhitdtpgmtpdtmhm", "hdthmttdhghhmhmgmdimdpphhiimpppmiggmg", "ghhptimmddpiptimmpmmidptppipmpdhptdhd", "pgpthmhdimpiigitimhtiddihhihhdmtmtpht", "gmhddtmhmmghmthmpitmtgthtdhdmdgppiihh", "mtdmpmidiihmiihimiithigmtmihmipihdthh", "tpdddphigpmipmdddtmpghtdggitmdppdmhid", "tdhtgidipihhtdiiidmitpipmhtimptpdppig", "thtpidhitgmimgdtimmtipihttdihdhtpmtpp", "gtppdimphgtipgtdthhghhgiihgdpiptpihmh", "pdghdggmitmtgghtpmdtgihhmgtimmmtpmtmt", "ihpmgtptimididiipthgdtmggmpdpdipdhmgt", "ditmdthitmtipptmppptmmmptmhitmpmhhhth", "hpmhpmtdpmgmtdtihdtdttigidipitmhpitid", "mptdmdgmmmpgtddimdgtmmpddthpphmhggpdi", "ipgmhdidgptiigmtgdpppmgpgtthpigggghhm", "piipgiiptpihghdiddddmgmdimgidppgtmpdg", "hptgmgtgimhmdigpdhmpgdpdgmpgmgdpdimgm", "mimhpdihtghhigpmhtdthgmdtmtiipimgphdi", "hiightighmmthtttdpmitmmdihhmpthptgimi", "thtmpidpdimpdgmgdghpmdhggmtditimgddph", "ttghdhmipigddtgihditppmppdpiitmimimpm"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 14, 15, 20, 33, 34, 36, 38, 40, 42, 43};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> S = {"fj", "uk", "ll", "uj", "lb", "zl", "kf", "bb", "zf", "mb", "zu", "km", "uf", "kb", "zk", "jj", "zj", "lf", "bz", "jl", "uu", "kk", "uz", "ku", "lz", "kz", "lu", "bj", "fu", "fl", "ff", "mf", "bk", "kj", "ul", "jb", "lm", "bf", "jk", "fz", "lj", "fk", "bu", "mk", "fm", "mj", "mz", "kl", "mu", "ml"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 7, 9, 15, 16, 18, 20, 21, 30, 45, 46, 48};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> S = {"eeezyrwwwqfyrzffrqfqqfweyzyreyezyyereeefwwyyze", "wywfzffyzfwyyrwwweezqwwywzerffzyrwzeeqeqfreqzz", "qrwreyrywzefwqfzfrzqyewqywwyrwzwfrwyzewqyzzwrw", "reqefzqyqqzewwezwwewwqyyqqrqrqzywzzqeryqfwrrqq", "ezfwrrzwewyefeeezfyfyqfyfrfqyrqewryrzyfqwfwfqe", "rzwefezqfzrywefqeyeqyyrwzfyryfqqywyfyqzwwreqeq", "rfrqerfzerfzwweeeweqfefzweywewrewzyqzzffwyzwqw", "yqzfzzffqeyrwewqrfyeyeefefrqzzqeyfryrfeyqzyrwe", "rwwwzeyeqzqzeyfzerqfeyefqfyqzfqezwqyzqzzwyqrrr", "frzzqyzqzrfwywwfewzfzereqqyqyzzywfeqwrzzfyzzyf", "ryrryyrqrwewfreeewefrzeeyrqyqrqrwrrrzzezzreqzq", "fewewwyyqqqffrzfzeezzzfzezeeywyrrfzrerzzwqeyfr", "yyzeyrqwwwyfzzyryrzwzwrrwwwqqeqfwrryqqwfzyfwzq", "frqezqyzrrfrefyzewwwryeyzywqzwwwfqwyrwyeywwyqr", "fwzyeerqrrwzryzeqzzwqefzeyewqfywqqeererwzzywwq", "zeyqzwryqzefzyeqyfyyqerwezwqrywfqereezwzrqerew", "zqrfwqzeqzqrfwwwrwezqfwyzeqzyewefewqrwzfzreezf", "frzyzfqerqeqqerqyzzzqrzwyzwqfeqwfewzqwzfqzqrrz", "fzfewwyqewffyffeffqzwyryryfwerwrzzerzryfefqweq", "qyfzewfrwzzrwrzwzqzzfywqfwfqqqerrfzeqrrzwywqye", "eywefeefreqwfrrfzqrqrewzqqeqewqwzfrqerryrwyqer", "rryryyrzrzrrfreyzfzyrffqzqyzrzfyyfzfyereqwzrwq", "ezfeyqwzerwerwzzyrqzywffwrrqrerfqzeyyrfzrqqeef", "rrqwyryfryzrrwwzqzwfyqqyeyrewryzyywfwwweffwwzz", "qyzwfqrffqffyerwqwzrerwfqeyzrqfqqqqezerqfqqfzq", "ryfwqzweqerqrqfzrwerewfzfrzwzwywfyeewzfwfywrrq", "eefwerqzqrferfzzzyerfzwrwyffqererfzfyqffereeqr", "rzwqfqewyefwwwrfwwqezqwfyewqewezzfyqezzrqyrffe", "wyqzfrerwzeyqqqeeqewzzqeerfrfeyfryzfwwwyffyzqe", "rzfzrzzzywyzzyezqfryfezwzwyqzywyzffrwzwzfzrffy", "fezwrwrzyqfyyryzfzqyyezqffqeqrerewwfyqefrezzwq", "zzwzqyqyeefezzzwyrrfzyqwywyqzzqyyewzzqwfezryrr", "rzzrqyywrzrryqryyryzqezezrqwfeyqerwfqwyrrfywye", "rwrywqzerwwqeqzeyrzwwfqyzfrfzryrwfzzywwyfewfff", "erwffefyzryyyrerzqeqzefqzyeqywqeeeqwfqzqffeezz", "yzyyzfzrrweqyywryffeweffywyeyyrrrrqqrzzrrwzree", "feywrffwreqewwqzewfzzfryqyffzewyeeywfrqyywqrrq", "ywyewzwwzwqreewqrfyqefzyqewzywqwfeqrrezffezrzq", "yfrrrqrrzyefrwyywzywyrryrzwryrrzfwrzzzqwefyeyr", "ezqyqeqeewfryezqeffyfyerfqerzerrzrzzezwffrweqy", "zryqyyrfyqerzeweezqwezfyfwqzwerrqefyzqfzfrrfre", "feyewrwryffwwqrffyfqfeywzfyyzyyqefeyzrrqrfwyyw", "fqzfwreezrfzeffffzyrwqzqezferzfrzffwwfwqreyryr", "rzfeyqwqereqrrzzyzzqzwzeewqzyzzzzrfqwyzrwqrrfz", "yeqyfqyewyzweqffwwefzweferyqreyryerqzqqzyzqfef", "zewwyfeeqqqwwezwqzryyrwfzzqzqqwfzfweqrwzyqzerz", "ffrryryqrryyeweyzqzefzzqrzzqfrrzyefrrweyzeerrz", "wfyefqzqqqzywyezrfrrqyfqyweywrewyfrfwfyfryzfyw", "yzfeeyywfwryeefyeyffwzyfyfzzfzqwwyrzfewzzwwfwe", "fryzqzyqqyfeyfwfwyezfqwwwffewffrwyrqrezzrqwrqf"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 10, 24, 29, 34, 38, 39, 41, 42};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> S = {"rreyeydawdrwrwsyrbwswsrswbarwdbrwywqsbswwrqbdes", "adsdqeyesdsdrwybdswdbsarybayaeaqyrryeadswqwyawq", "sawewqadweeeqasqaybyqyrqayaaqwrbsqqrsayyebqerwq", "barqdewbqdbababsreqssddsaybabresreqqswrayeyaqaq", "wwdyqyybberedsbeqwwdyawwwyybeysybdqaqddrsywyyqr", "awqeayesebseaqadydeqrdbebradddwybdrabasdbayawsr", "reqswsdwsdsdaewedqdseaqwsaweasbadyqaaraqysdawey", "rqabeqrdeqwyqqsydaseeaaabqyyrdwysbqydywradqawrq", "dreeqeaearbrbrbaywwyedwsqwsswyqdwqqqbbydbryeerw", "dwqeaybrdydqsrwdsbaqydbwwyaaeedsbbrdwaeyaqraesa", "yasddysedqbsyrsayesddeebbdyereddawwqsdeedyqareq", "arbsessysqwqyqrrybaydqswswqdaddbryeqbdbardqaarq", "drsrrssarrwayrwsweqyreqsrybabseswyyddydsbdereww", "eqaqqeywqsswrybebbsrbaeawyawreydsarrsdwaqdaywdw", "dsewybsbwyqaawdrdrqsdrqdqyewyqydwyrydqbrwbseeyd", "waydbebrwqeswsreqeadebweaaqresbdqwdyadyrysbwqyr", "rrqwbabwawaydyswsbwsarwrwraeeedawarawwawrwabqbw", "aeyqrwwqasdyqadbyyqrddyasyqddweerdsyeqbsesqdqry", "wqerysdbbawweddqbdeyedeaqwbawsrqsabrreweyrswrqq", "wdrwesbyddebrwabbssqrbeaeysaadearasbdywbaedebsb", "byssqqrwsrrqrwrwewebwqdseqaaybaaeeyswqweqsbddsy", "eedsqqyarbrsqsrdwqywbwryardbraqsreadbqrsaayswrs", "ssdbradadadweyqaeabaasayadwewyqdeqqywwbaaywabsa", "ybrswbadsswyrseqydbydyeaaqsyqwywdbrweybqaaqrsbw", "rbdseyyqbyywerreersdwqedrwdasebyweqearyaesyssyq", "asqsqedyybdrwqaydebdwaeaqyrbwbweessssqyrebsaabe", "ybryrbeadyyeaqaeebbadeyyrebydraaedrdewbwybqdewr", "wrsdyyweryraqqdbydyrwwdwdqssedsqryqssdybqqayywy", "eybbddeawssqbererdrwerbwraewaeysrqdeeeewryrdsse", "yrbwbwdbqawrdydbserbwbqabwrawydawbreebardewdqwr", "eaaqbwsrwsrdqwsrbbbwaswsbawyedreeeyrywaeyqwwryr", "rwdersbywbryrdeywqsysqqsderrrdayqbdqeseesryeyyd", "qbweebrqaabbaebwbdaddrarwsaqqqeyyssseasbyqrrbbe", "wdwsswwaqedyabwqrersqdeseqybswsbdedawswewddwsaw", "qyyqyqddeeyaawyrdqaawsyedesddbabaebqqdwabewydrw", "aaqabewdsrrwqqyeesedrsaeddadrdsysdbdqsaadqdrbby", "eeeyqdydbwrwysrrrsrbyqqwwrwdswbdrreyyeasweadday", "rrdssbsesawwwbyddqqyewrqbsdqrdqbreadydrbqqadsaa", "sayrrsrdyrraybyayqrabeqdwwsbbsqabybaybeqyyqdywe", "sbyaddsrrrsayqdarayybbqarsqsbbbbqdreyqbqesaerey", "bbeqwdreysyaywdwdrbqsdyawssqeayydyrqsqsbdaqrwdd", "yaebddsyyqaqqwrbqaqseywrsqqdbwbwawrdrqsayeqwyyw", "wsserrebryesdwwwsbsbqrdwrsbqdddsbwwsrbqrwyysrwa", "rawydwrrwsqewsdwyeeqbbsdeyabbbedbysaqayddybyrad", "sebbdaaedbadqaaqybrybweradbdryebreyrawdraseswwy", "sqaaraeeeeasaqssyrsayqeeqbbbwrsrbraerqqqwrqbars", "qyrysdbrweerrsswqqwdesbyryqeeddbebyqwabwwarwbdb", "badsrbyrrsqddbweeeeeqesaqaqyrsswbrweyseqqsrssqb", "eawrwdeaasabqayeeaesywasbqssqasdeywqqrqsyysqeew", "syrwawabyqqdqysywyrddewbswbdqyqbaqbbbqbseadqyqr"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 10, 12, 16, 19, 21, 22, 28, 29, 32, 35, 42, 47};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> S = {"llvekpeebekvlleplvkkweeklpkvlkppwwvewbwpelp", "lwepppkpvbbbbwvevklwbplpwpwwkevveevvlpbpebk", "vkekbbpwkkwepkpevbwlpvpbkkpbbpwvkekkwbelwlw", "pkvlkbkpklkbwkkklekblkbvkbelpkeepblklwbkwpw", "lpebpkewewvewvbwwwvkpewvvvevwvebwewlklbvbwp", "ppvvpvwbwbplvplwlbevvvbekbevbwvpklvvvvllelk", "eepkbevkplpepwvbeewbkeevevebpwwelkvwwewwkpk", "blbvevkkwlpkwvvpbwlwepkwlelebkkpkvvvewvelpp", "kppvbweewkbwwlwpvpbvwklpwlbppewlvllkwlkelbk", "klwvbebkkplpvepbbewellkbwvbbplvpbkkkekkbpbe", "pwpblleleeelepwkwwvewkwpeklbbkpppvwlpevkwee", "pbkpwlkkebkbvbblwkwkkkeeppwbevpvweeklvbvppp", "veebeekkpbbevwkepvewebkelbwlwpbbkewlepwkpve", "vlwkkpkewpekvvvbwlplvveebvbllwbwkvevelkebbe", "kvvelpwvvbkbkvvvbkkpbvvwwvvkvvlvwkkbbkvvvle", "kewklwklplbpklwbpwkwvwkwkkbwvklkepbkpkevpke", "bvepwvllwvvkelkllwkeepkvvwpvwvbvwelvbplvpwp", "vllblpklvwepklveebepwewekbvvwelpwpvkeppkkvb", "bbwveelbvvwelbebvevwwwewpvewpwpeblbpvwkbwlb", "veklpppvelpvbvvlepvlleeevebwevlvpkbplbbvlwl", "vlvvbkekbpvkkklekvwvwvvbpllkekvvpebpbpbebeb", "klekbpbvwblbeklepwplblellelkvwkelkkpvwbbell", "eeppbelvbkplwvpkwvvpklblblvvkwwlbvlplbwebwp", "lllebvkpvbelkpwvevevwwbewvpbkbvlllkkvwblpvl", "bkvllvplepellbkkkkblvwekekleebwlwpeeppvwwlb", "bbpwwepvlkelwbevelevbwwpwlkwevvlwepbbeevvlw", "eplwwevwkbeepevwkeplpwbpwvkvkkbevkpelvkvwkl", "pkepkbeklpbewbvbpvepelkkwbvbkwewekblvvvpblb", "pekwlvwvvlbwbkeebplebeklvwlwpveblwbbwkekppp", "bkvvlwklbkkpvelvbewevebppvpewvblpwbpbkwbevp", "bevpelepvwlppewevpleeeebeekllwlwleeeeeebpwk", "bvppbkbpbkevwewvlevlplvpebwpvvkveweekwbkwek", "bebwwvkppevkeekwbblweleeevbwkewlwpveebvvbvp", "kepellewllwpbekkwvwwepbwlvwepbpeebbkvekklwb", "llebvwkklewppbpveepbpkbwlbpkkwpkwvbbkekwkbk", "wwlbepkkplbvelwpvkelwlvbebewpvpkppklwkvkpee", "ekvvppkebvpbbwkwkbkwwbvellkpellkbpllevebppv", "ppblekewlpvkbvwevllpvpeevlelkkwwklwkvpwlpev", "wkvbweewbbebwvbwlwlepwwkwewlbvlpkllvbblpebp", "ekevlwvvppkkeevpvwvbkpkeewkeklvvekepvlpkbbb", "kpeevwlkpelkbelkepekkbelpwbklebeekewkelvkbe", "wlwlkkewvvvkwkpeelbkvvwbpppbkbpebpbpepwpbwl", "pvekevplvwpllkkpbbwkwvvkwwkblllblpwlpkwevvl", "ewlebvebwwllpkpllwpkewkpkeepewlklwbpweeebpk", "pvlevpwplevkvpvelvvwlelebbekbepwbeeppleebkp", "vlplvelbkpeppbkekbpbbwwevvwvvwlwewvvbvbwlll", "vpbwebwbepbplweblpppwwvweekbplbbkvpwpkbvkvw", "llpbwpekwlwevwlbvpplwllbllbkwkbeppebklkekle", "wpwlllplwwwvwbkewpkwlvwvllvlwvpwwkvwkklbkpv", "ppebbvwelblkleepvbllkvekwvpbbvllvwwwlplklww"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 9, 14, 21, 30, 41, 46, 47, 48};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> S = {"kqxoqxxqqppxoop", "ooppxxpkxkxqkxo", "xqkokqppkkopkpp", "kppxpppkxxkokqx", "okpoppxxokpoxkp", "okxpkxoqppkkqqp", "okokxxxqopqxpxp", "xkqpxopxxoqxpoo", "qqokoxxkpxkkpkq", "qpkoxxpoqxpqoxp", "kkqokkkqoqqxkqx", "kpopqqoopxqopkk", "xqpxopokoqpxqpp", "xoqxokpkkqxkpxp", "kqkqpxxqokkopko", "qkoxkoxxxxoqkkx", "xxokkoopokkkpqo", "kkqoqpkkxqpqkxp", "xkpkoqqqpkxqxkx", "qqxqkkqxxkkkqqq", "xxpxkpkxkxxxxqo", "xpxqopkxopooqkx", "xpqoxqkxpkpxpkk", "qxoookoooxqqkoo", "pkqkxkxqxopxkpo", "ooxpxxxxkqoxxox", "pkpppkxkqpqxkkq", "qkkppqxpqoxooox", "opppqopkkppoqxk", "qxoqkkoqpkkkxpp", "kpkxkookqxqxpkx", "pooqkkxqppooooo", "pqkoqkkkpkkqxxq", "kkooqpppxkpxoxq", "okokxxqoppqqoqx", "xkoqoxkqxpxoqpq", "okkxooqxkoxpqxk", "opkkkxkqooxoqpk", "xpxpokxpqoopoox", "kppkppkoqkkxkqp", "oxkokkoxpqxxxqp", "pxpkxokpoxkkopq", "xxooqxoxkxqpxxx", "ppxxpqxokkqxxqq", "okpkxkppppxxxpo", "kqkppoxxpqqkqqo", "qokkpkppkkpxqok", "xkopqpkqopopkpp", "koooxqpxkopxpxo", "xkxkpkkppooookx"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 19, 20, 23, 25, 32, 39, 42, 44, 46};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> S = {"zyvvzivavaayzavaaaiaiiaiyvi", "zaaiyvyvivyaiviyzvzvaaiaayi", "yzyayiiyizyvvyyayiaayazvayz", "iiazayvizayiyvvvzizvzaaazav", "ayvvzzyziyaaivvviiyiyiiziva", "vyyayivvyaiiiavyazziziyzizy", "yiyiyzyvyavviyyayvaazazzaza", "yzyyazayvyiyvvvyzaaiaizzizi", "vayayzvvayaazzaaazyizayizii", "zyazvziiyvvaaaaaavziivyayyi", "izviyazyzaivvyazazvzzavziya", "yyzyzayyzzyiiiaiaizyiyiizzi", "yziyvivaaazvvaaiyyzavvviyiy", "yvvaavaaiavzzivyaaazyiyvziy", "ziyzvaiayvivziiiiviiyzivvia", "ayiiziiaiiiiyzyaazyyvavzyya", "zvaiaaayvyaiyzvzvzavzvyavzy", "vyzyvyayayiivivivvyvayiavza", "ivviziaiavzyvzzayyavvivyvyy", "vzzviiyizazazzvyivizizvziia", "aaiyiaayzzyyvyizvvyizzviivy", "ziizyyvivvivyyvyazvyvaazviz", "yvivaiaviavvaavzvyvyviavviv", "zvvvyizivavviazzaiyziyiiizv", "vzaizvzyzviivviizaiavyzzyiz", "vivyaiivaivayvyzvyazaiaiivy", "zayzzyyvayvzyizyizyzizvzzaa", "iyaviavzavzyizzvviyyzzaavyi", "yyyzaaiaivyyiizzzazzvyzazvy", "izzvvviivizavazvyyvziaivviz", "zyzvavvyvaavayyiyaaviyziiva", "iyavizyvizzyyazayyvivzyyavv", "ziazavyyvyivyaaziaaaavizaiz", "vivzyziizyiyyaiiyavvyzaaizi", "yzzyzzyzivayazyyvyyvyviiiay", "yviiaiaaaizyaavzavvzaiizivi", "zzayvzzvyvzzyyaazyvaaaziazi", "yiziyazvivaayvzzzviyvvayazz", "yvyzazaavyyyazvaviyyazzivzy", "ziiyiaiaiayziiaiaayziiiivza", "aiiyyvivyvayaaviyiiayziyizz", "yzyiiazaiiyzaziiiyaiyayiazz", "yizzivaayyiavavvyiyyazizyyv", "yaivvizavazvaziyizizvzizyiv", "zaiivyzyyviavvizvviazyvzzay", "iiaaizzzzaazzziavvazviiyvyv", "yvvivzivziyaiviazyazayzyiiz", "yzvvazzizyyyiayvavzvayzyaav", "aayzazaaiaizyaviiyvyvviyvzi", "yaiazyiiiaziizaaaizzzaiiaia"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 8, 22, 26, 34, 39, 49};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> S = {"exxeevexsxveepexexeepeepvexppexsexssvxex", "exxeevepexexeepeepvexppeexsxvexsexssvxex"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> S = {"aaabbccddeeffgghhijjkkllmmnnooppqqrrssttuuvvwwxxyy", "aabbbccddeeffgghhiijjkklmmnnooppqqrrssttuuvvwwxxyy", "aabbcccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxy", "aabbccdddeeffgghhiijjkkllmmnnooppqqrrssttuuvwwxxyy", "aabbccddeeeffgghhiijjkkllmmnnooppqqrrsttuuvvwwxxyy", "aabbccddefffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyy", "aabbccddeeffggghhiijjkklmmnnooppqqrrssttuuvvwwxxyy", "aabbccddeeffgghhhiijkkllmmnnooppqqrrssttuuvvwwxxyy", "aabbccddeeffgghhiiijjkkllmmnnooppqqrrssttuuvwwxxyy", "aabbccddeeffgghhiijjjkkllmmnnooppqqrrssttuvvwwxxyy", "aabbccddeeffgghiijjkkkllmmnnooppqqrrssttuuvvwwxxyy", "aabbccddeeffgghhiijjkklllmmnnooppqqrssttuuvvwwxxyy", "aabbccddeeffgghhiijjkkllmmmnnooppqqrrssttuuvwwxxyy", "aabbccddeeffgghhiijjkkllmnnnooppqqrrssttuuvvwwxxyy", "aabbccddeeffgghhiijjkkllmmnnoooppqqrrssttuuvvwwxxy", "aabbccddeeffgghhijjkkllmmnnoopppqqrrssttuuvvwwxxyy", "aabbccddeeffghhiijjkkllmmnnooppqqqrrssttuuvvwwxxyy", "aabbccddeeffgghhiijjkkllmmnnooppqqrrrssttuuvvwxxyy", "aabbccddeeffgghhiijjkkllmmnnooppqqrrsssttuuvwwxxyy", "aabbccddeeffgghhiijjkkllmmnooppqqrrsstttuuvvwwxxyy", "aabbccddeeffgghhiijjkkllmmnnooppqrrssttuuuvvwwxxyy", "aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvvwxxyy", "aabbccddeeffghhiijjkkllmmnnooppqqrrssttuuvvwwwxxyy", "aabbccddeeffgghhiijjkkllmmnnooppqrrssttuuvvwwxxxyy", "aabbccddeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyy", "qvgmkerfegbwvwgnacfobkcagjhqioxijhggvgwbppxjpugjro", "kkvgyryhxgpjmuiqdeoklonlnlqbnvksueaboccslpbfjqvrce", "chrmggktnsdyllonmsmviobksxmdrbfdapriwrflbdnpyjkuan", "jwndkpnnfxfwiyqmgyndujwixhoddxdglrpniduydjmussskyy", "phirbnqycxyvvnbeopkgelcxrulgrdguxgspxdmmtjgghptobw", "jvjahfxxppvcfpjnlihpwplgsbpgjvvccbsbutxrxicvgxhrhk", "xdwbfylxkrjysjlgslkpoytipwexytuhywjedypfvlqvspwblu", "kpwghseqjrjonxgdxijqburnjchxtvatbhdxqbgwotgoubvdnd", "jbnvesencomkpvucoxutudkheltdeqrgrksvconnvwdsclgjoq", "lbxmssewlhymsgmoxylropjsfgryaheywmdroqmheovipwvqsq", "bsuuaayefjyfsurooixxnfmmtumkvdanmyjohlkdeusevpfaqn", "oxcqxxexdhjejgmrnjrsceiukwngnkvnumwufsvpadryifemgl", "wuvtmdokqgmjxxfhiyuqpndwsolrvybuajwjormwpyfnburkns", "ndvipgeycccpkkiudtwuptjlqeqktjlmntjscjdfsrtaxuffuk", "nqgvmgmtatdclbnrpkxsabnfqgepaofdidqbqkgcnvjfbqfkaq", "uilmcibmmsrouuvjfchawjavexabwurpocsbkjxbgnfhpynswq", "otbtdqkpjdqlkjmrgvfqtiegqfqokmwlqvixorweeigbpxlgie", "kpnndwdpxhrdxcwbeftwycyxvgwtmqldvlxaxagejtyxcrsdjr", "ncsjbxntpbaagwkypioeusgkknnxporrnlefpskjvxlelpfskl", "phkhsgiagjcismyhwfepormfxwhhdfqexkylpwubxdhwbfbero", "kvwxtdtrxfmnypnrrxmgyodloxpfwduacuitsnhpmdhgjgrrak", "exdcbxnqihmfaglmfrgcbrvmdmfeosgoyfhewudvbpiflmmcin", "dccxdyddufrvvjwexfelexrmmuamwxfhpcpmecineyxnrqkddg", "rdwkntdvvjyxcbxeremkxiykqftbwislggcjxfxufjvpsgfepw", "aqkmqdfmbwfpxgckanfbbpkbafoiqibvvgdryxoemppvdlfcch"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 28, 30, 31, 32, 33, 34, 35, 37, 38, 39, 41, 42, 43, 44, 45, 46, 47, 49};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> S = {"aaabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvwwxxyy", "aabbbccddeeffgghhiijjkkllmmnnooppqqrrssttuvvwwxxyy", "aabbcccddeeffgghhiijjkkllmmnnooppqqrrsstuuvvwwxxyy", "aabbccdddeefgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyy", "aabbccddeeeffgghhijjkkllmmnnooppqqrrssttuuvvwwxxyy", "aabbccddeefffghhiijjkkllmmnnooppqqrrssttuuvvwwxxyy", "aabbccddeeffggghhiijjkllmmnnooppqqrrssttuuvvwwxxyy", "aabbccddeeffghhhiijjkkllmmnnooppqqrrssttuuvvwwxxyy", "aabbccddeeffgghhiiijjkkllmmnnooppqqrrssttuuvvwxxyy", "aabbccddeeffgghhiijjjkllmmnnooppqqrrssttuuvvwwxxyy", "aabbccddeeffgghhiijjkkkllmmnnooppqqrrssttuuvvwwxyy", "aabbccddeeffgghhiijjkklllmmnnooppqqrrsttuuvvwwxxyy", "aabbccddeeffgghhijjkkllmmmnnooppqqrrssttuuvvwwxxyy", "aabbccdeeffgghhiijjkkllmmnnnooppqqrrssttuuvvwwxxyy", "aabbccddeeffgghhiijjkkllmmnnoooppqqrrsttuuvvwwxxyy", "aabbccddeeffgghhiijkkllmmnnoopppqqrrssttuuvvwwxxyy", "aabbccddeeffgghhiijjkkllmmnnooppqqqrrsttuuvvwwxxyy", "aabbccddeeffgghhiijjkkllmmnnooppqqrrrsttuuvvwwxxyy", "aabbccddeeffgghhijjkkllmmnnooppqqrrsssttuuvvwwxxyy", "aabbccddeeffgghhiijjkkllmmnnooppqrrsstttuuvvwwxxyy", "aabbccddeeffgghiijjkkllmmnnooppqqrrssttuuuvvwwxxyy", "aabbccddeeffgghiijjkkllmmnnooppqqrrssttuuvvvwwxxyy", "aabbccddeeffgghhiijjkkllmmnnooppqqrrsttuuvvwwwxxyy", "aabbccddeeffgghhiijjkklmmnnooppqqrrssttuuvvwwxxxyy", "aabbccddeeffgghhiijjkllmmnnooppqqrrssttuuvvwwxxyyy", "ruttqmhtcwjmeihyapstvgmiowscvjmopqrxbcevtssdbdlrcn", "drbfyieryptiijdoachateobrdohllpccxcgrwcqntexkooxhx", "xolohqqjxwolpwmurnfbrlkyghltahfueunpagcxxkhimktxtp", "uuflpdyunaneknswsnlsgnqlnsjqvygfniecbjhofnstsjdlbv", "olpfnavivypglvoplifvenwyqasouvmwlykfcaxaxoluittawn", "kshxnptciwsxmplxgcdxlhcqanllqlvlakvimwfuskjsialfej", "apadukiuqthrmkkhioulnqotquwdphyyrsrtiweamaxqqbkjcd", "oahtmjkjmbdcrgxweyiekurtjlswwkspltghvdugkpmphdhrym", "kugbrfvebmsdtpvxnamhihymqgtosgdvituqsoihgtvvyuwqkd", "blvatuwfifwusbqevudwodaiqggexcxmmcwmapldagmvhbvnep", "mbyqgnqkmqdoxunbfmjssxgtyxpdkjhotahlbhhdeymkpgxjtu", "aaudewjpvneuvvwguyllhklnwnsjloqvrtucmslptldorjfqqe", "ahsljyprqdjunpghxrjfghigigkgujjfvjwjloxtkifpfukrnk", "xcnhjxbrjpkevhwmbulcbiwdorjdthnflssnstdtoobxjiiaqh", "jvgjjunduyxuvfjifinkvielogyblktdtajondvqsgaaocdgov", "svrnvgxqcypwljeflngkvfgokrvirwivvdpbtkvrjlisbgbini", "dfixjqtuhxniupcwkcntborvyixoqnbjxhqfwufrrfcvhcohmd", "svdttbkrcnipxnjnhcxxsasgdxjgxlrhfhhckhalsxdppjeins", "jpckgwnjrbaooscqvxrexrffnlrtogklskpqovitucxwsktfjv", "wwmibhkfgtnwttksofcdwehwnpnyjmretrdqjclhcquwarskmr", "cqnyflrwedbnrbjucaouldrhxfkmsxcwaggessgopwcqostjax", "fakuspnxjiaabuqsprysytenuneddpdkbjegqnubnqqvlcyjeb", "grxtdlwickfnfinjcnucjichujyrulyjllxiuhcgbdrnlljhfl", "eqkyrfbbwuxhcopclbopvhrkjmremqigkmwbfjgoavsjapwcne", "hmpdmmbccbaqsuvrbjbtweqalrmjqhdjdlukdkufofuatuxgjo"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 25, 26, 27, 28, 29, 30, 31, 32, 34, 35, 37, 38, 39, 40, 41, 42, 43, 44, 46, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> S = {"ygkckgssw", "idlldlgdc", "cyxxykcsl", "ycxxykksc", "gwdxoxsxg", "ssioxoydk", "xxcyskkly", "kddoykyxs", "ogwylicgi", "xwookolox", "gloxkkgxs", "clcwowdii", "slcoygilx", "iokyoloss", "dokiydyws", "wkwlooiog", "kyisoocws", "sosogiilk", "xsocdogww", "xyllwgodk", "klgsxsdgy", "ygsiylxxk", "xciywkgkd", "yywykdscw", "wloiowgwg", "yyodyoxcx", "lykowwsyw", "wkkxdglgg", "wwogscgdy", "xidkdgksd", "gwklgsgdd", "wxxogsxcx", "sodgiysxi", "wdodoxswx", "gogoklkwk", "xgcygcksk", "olxkkioik", "dwgyyoyco", "kgikkkgds", "yxxiswkoi", "iygsygywg", "wskcsxyxk", "sgxoskwdw", "oxlgidowc", "lylkolkxg", "wydlxcgwx", "yoykdysly", "sdwdgclcs", "iogkgcksg", "ylgldcwlg"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 5, 8, 9, 11, 13, 16, 17, 20, 24, 26, 27, 29, 30, 31, 32, 35, 36, 38, 39, 40, 41, 42, 44, 46, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> S = {"tpswwnnpeouzuenn", "fsouetcpozswzznu", "fccueoocptzsnfup", "fczupzotspsnntuz", "enfeensosootunft", "uouncceezcopzwtw", "oufsztzezwzonpus", "wcwzfnoctpwztttz", "offezeppntoszsnc", "uspcuznntfntefoe", "cfewsfffstuupnsz", "cfeuewopccsweowt", "unszwweezsuweeoc", "ofnecnzuptcnonoo", "oefptssnpuotuzfz", "uessucztwpzpcnfw", "ssuctunnsuncznwp", "twoonuetpuzeufzn", "opooefpuuccztpwc", "zeswunsfetezposw", "sszenfupcwwsotwp", "onnpwstscwoesoft", "tsozfstcnzntuowe", "tzzsweowttouusoe", "eupztentuwnoeopt", "nuteoscpcnnponst", "snctnpeuseocuzze", "oufunwwpupfucwuo", "tfnzofuzufectttc", "esuzwsfnneosozze", "feotunwewntsnsnt", "twzfsocfweuwzwwp", "cwtstecwucnuwonw", "wctzsppwtenzswfe", "znssuffzcttuneop", "csnennccuuownzzs", "cnenowecnosupssw", "nctwccwusnstopep", "ewspucuuozocpofz", "zposowneeouozfnc", "stnnecpnsepsszfc", "pneeztnupcusoncu", "wtunpwtpftscwnse", "tnnpeuocscsztosp", "ofwtcteznnpppoec", "spzoztscswzfwspc", "ufsfouuswscsspwz", "tztzwucofpeopfce", "efznttcoofzeuwzf", "eufccocutzfpspnw"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 5, 6, 7, 10, 11, 12, 13, 16, 18, 25, 27, 28, 30, 31, 32, 35, 37, 39, 44, 46, 49};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> S = {"vjeusuvmjmejb", "emucccuuujssc", "ubsmujbmcubeb", "qmbjejeteuvec", "cjuquvvuqqqvj", "qcmtjbcebqsvu", "tsbcttsvcmtec", "bjscesescetev", "cctvvvjjmccbs", "ccqtqqtcbebse", "emeubebmtccjc", "jtmumbmuqjvmb", "mcvccttumcqtq", "jbbqeeqsjscub", "mceucmuebubeb", "sescsetsmcevv", "mmbqtqccsmstj", "quusjqmvcqmsu", "bccecvcvjubme", "qveumsejueesu", "ceebtsvjjsest", "qvvmesmcsmsqm", "ucubqtjbbesvt", "vjqjvtmsjjmsm", "qjcqjjmuqtmbv", "bsbqmubejstsb", "eevbcjbmvteem", "tjsmustjcqqjj", "vebvvbevcuuqm", "qcseubccecqqb", "qvcbeqveqqqmt", "tecqvmtjuemeu", "cmsbmbvujumsc", "tubejbutetbqj", "qmvubtqjctuvs", "emeecscemqcvb", "bueeemcjtbceq", "ucjsutemqbbct", "sjtbbtucutvju", "vmjjutqctbjjj", "etvmqcjjvqqse", "btvbvsuveqvbv", "tsqqetbbemveb", "jqvjmubvetqqs", "jtsmeejtqqvcm", "cvbeejemecvum", "cvvmsmjvtteeq", "tbbcbejjbvttb", "eubmejtjbcqqe", "uubucmmuqjccc"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 6, 7, 8, 11, 12, 15, 18, 19, 21, 26, 29, 30, 35, 36, 39, 41, 45, 47, 49};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> S = {"havwxocxc", "xjpwwzjee", "vejpzjecp", "phwokvxoz", "vxxphjjac", "pxpakwhax", "hvvvajvkx", "eokxxaoep", "jwpzeejxo", "jhccachpa", "ecwaxopxj", "xohzovckv", "ohvvzxhzx", "eapxjokkv", "kaoowxpoa", "kxhhwvevk", "pjhwkopoh", "akhkwekvj", "jjzpwevek", "aexvwxkxv", "jjcpewcvc", "jvojwpaho", "aaahjwppc", "pwoojkovo", "xwapaaaac", "cxevwxwzc", "pecjwvvxv", "ajjcvhvcj", "weccwweak", "cvvkwxzho", "avaawepkc", "eccajhacj", "ewvvkpkjj", "kjjekhcep", "hvkpvaxpx", "vpxpzojjk", "okvhojjjo", "ckhkhkjza", "acvecvwzw", "kvceazxpv", "awpjhoakp", "hozaekjvp", "cavvewkwh", "vcxchvxeo", "oozzpccjv", "pkxvpeeox", "zpozjjxcc", "pkovxekxa", "zwavekjwk", "wcokaheoo"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 5, 6, 7, 8, 9, 12, 15, 16, 17, 18, 19, 20, 22, 23, 24, 27, 28, 31, 33, 34, 35, 36, 37, 40, 44, 45, 46};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> S = {"unlptllxu", "tnopxttpe", "bllxiepot", "ponbeebox", "uopoolxen", "biueuiupi", "xnioopttl", "inxexnuut", "beptinupe", "xuoluinep", "txblnpnon", "eioxbublu", "lboionuel", "unuitluib", "eteunpbon", "enlxntnlo", "nobeiople", "xieoutxle", "ltxnoibpt", "lbleltiui", "eiunnxtpu", "piuoinxll", "nxnlluxnl", "bipounbei", "tluexeont", "nutuutxnu", "utnentuoi", "ebttnenio", "iipbxoilo", "pxtixiuot", "oilbnxuil", "lebepuipb", "poxxeiulu", "oninptelt", "ixieexite", "tnntilipb", "ioueoopob", "bieunuunx", "otputonox", "intpioeeo", "botxptipp", "tllntetlb", "ooiliupln", "ltxtlttxp", "plutbieeu", "inotxlute", "nlutenupo", "ntleilibi", "lnexeuttx", "pxoieobpo"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 5, 7, 10, 11, 15, 17, 19, 22, 23, 25, 28, 29, 31, 32, 34, 36, 40, 41, 43, 47};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> S = {"vvkvmvydmyavdik", "cffyymeevydamki", "faefkdcdkmaeyia", "iiifycydcekcvdm", "vdccmvvaifcckkv", "eciivyaevdfeaaf", "iyevffekciaikei", "ycymdddkdacffei", "kvyavifkfeikckm", "kvkddmaikdmvccf", "cafkmdcyvfdcicy", "ifyacieackaeaaf", "yeekecmmkvmveak", "kikcdaiekyvydey", "yacvmkkkaeakyie", "efkefkvadvcdavf", "ayfemkkamvykaad", "icdvekkieveacvk", "kkykfvvcceiiyde", "fdcicvddfafkvve", "vmeyikievcadyck", "ykvcmmakmeekyyv", "yacefeemfkdeffe", "addvyvyaievkffm", "mfkckyfyymiemck", "aeicyevmimecmdk", "faamvvceiadeivv", "kivyyfeeykvmicf", "ciickdiyakevdfd", "vacmemdeayycddm", "cyyyvyaeefevfcy", "vdycmekycfeyvff", "faykyafimavdaey", "ddmmcvcaycivkak", "ficdmaddidfaaae", "cidfyeiecavmeae", "dvaykaaaafacdad", "vkvvmcaikicmmyd", "kayyiyvaacfkfvf", "yikemyyaaicffcm", "iyikmycccfeiaki", "evkkadmmmcyakam", "eiiimvmvacafyic", "ikmfcmvadydyfak", "imavkkmydavycde", "dvefimeidfdcyce", "ayvkiyvevvdcfcf", "ceddfkayeiakkdk", "iiackyicmamfcad", "iiecfifdmyyyfky"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 6, 7, 8, 10, 14, 22, 30, 34, 36, 40, 41, 42, 47};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> S = {"ffmnoyofid", "fimofcdbtc", "ittifcnybm", "cnoniftbmm", "yfddfcmcyb", "dnbfomonyf", "tftoynmcfy", "cfbydfnbdn", "dybitcynty", "cifocodoid", "ycmyctmibt", "nbiifnbdic", "tbidibyoft", "mtndydbton", "tyfbototft", "yiycmomdct", "bmnctffcmm", "nbttnfoytf", "imonoimydt", "obtyfinfby", "mnmdtdmyyo", "ntttdfinid", "mfbnydincd", "myiyndnydo", "iobdfodymf", "mimtffdcyi", "ttnmtccdnc", "cnfcfnfony", "fbffcddfto", "immincibti", "oyoibyibin", "boocmncbny", "ontobfioim", "nbbfdicbym", "dfffnyttbd", "bdmittcyfm", "dmcmfbyocn", "fycmdimnnd", "iybmytntoy", "cntbinyoty", "fyncyidbbc", "iffdtifnfm", "mmdcfmftcf", "cyfnomfmyo", "idmyibfbnn", "ciffdccotd", "ffmdyifcfc", "onnbcfdmoc", "omoybmfndf", "todfbiiicy"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 8, 9, 13, 14, 16, 20, 21, 22, 23, 26, 27, 28, 29, 32, 33, 37, 38, 41, 42, 45, 46};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> S = {"vkswdvsvvoodwk", "dddvdhlhsodssl", "svsdhwswdwqqhq", "wvlfksoqqqfoho", "lolsswhkqqfwdk", "hohdhlfkskhkqv", "hdqfksklwqowfq", "dvwvoohlwhdfdw", "koofvsfdodoklv", "hdddokfovfhqsf", "lwksowhfdslklv", "oswsdfqllvlqff", "wlsvoslqqdqfdq", "osqqfdfdqklqsv", "wddoqwffvkwowd", "kvqkoksodwkhfs", "hfhfvqfhwfwssw", "wwdwhqdddwowvv", "qfvffdqqhowlsv", "kofhwwsdswodqv", "kqhhhhqlsshdhk", "sqdhqklqwwffsv", "fsofkksdfkfwkh", "fwowkqflhqsffk", "hvvwhssookhwkv", "vfqvfvvwwdldoq", "kqklssqfdddwkq", "shwdswsofhkvsl", "vwwfqkdkvqdqfo", "odffffwqwfoqfs", "wvfklqslvwsklo", "kswwhwdvfwloqh", "oohkhqwswflwfo", "lofdvklqddvdvl", "swkslsvdkhskhw", "qqsvvdfoqqvosk", "dqshfkookhkhlk", "odskoqslfwowvs", "dokdfshkhhloqd", "ffvfovdllfqsow", "sodswhwlohvlls", "qooqdsfoovsdvf", "swvokfsfskwqww", "kqhvflswdvdhwk", "fdsofhfvsqklds", "qhkldfkwofhvok", "fhklfsqkhdokwo", "lhdfsvdkkvllvw", "hqkvsovkvkwkdq", "vqsflovslvqhhw"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 8, 10, 11, 12, 13, 15, 17, 20, 22, 25, 27, 29, 30, 33, 34, 35, 36, 40, 41, 47, 48};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> S = {"plfpsfhyp", "neexhuyhh", "eypyfnttb", "ftbxbfpes", "sleesyetu", "lehebxepp", "xtplnpplp", "bpheslthn", "lyynuyxnf", "fbxhbpfle", "sebsxtnxs", "puhysulty", "snyxhthut", "lnbesxhtx", "leltntupt", "xlyyypbnf", "esnsbhtyh", "xtfypyunn", "uuntxtpyu", "uephltynx", "upplbulxu", "xtexxnpeu", "bpnennntp", "pthtlebbb", "sytlbbheh", "xxnfhlppl", "upeufthxl", "pfthhfeus", "fhttfxnhf", "plynhuubb", "benbuupny", "ppnpunbfy", "hnxhfsxnx", "ffthlluhl", "sxnbsunbu", "yfxpxbsse", "lbsypuxlp", "bytxblpuh", "hbtbxhnbh", "hbexbtphs", "xyuftbuxu", "htnffpelh", "ylunpsuln", "lubbhhhnn", "pehupnbpt", "tnsesffxx", "etyypylph", "fphpuseft", "ufbbxfxtn", "pttuhssuu"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 5, 6, 8, 10, 14, 15, 18, 20, 21, 22, 23, 28, 32, 33, 38, 40, 43, 46, 49};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> S = {"grnftefrlutve", "rvflvvgvyerel", "uuvrtubbtbgbe", "fblneyvxgtxxx", "ygvyrglflrvgv", "rrgentlrlrtev", "gffxlxuuuylrx", "ygxbeexxgffvr", "uyeggtuytltlt", "buvruuueurnet", "rvexlrvbrexeu", "eelvelrlxebuv", "gtlnbyvfeevgy", "vglrxyyfxnbtv", "evntutflrxrfy", "nelxbuyytbfyb", "tfnnbbryubuuv", "ueefutengrfbu", "lvgynvfbgltbn", "lelnylbgtnurl", "rgeeyvbxygety", "yfnrglybetenb", "tegrrnfbruutt", "fbbbflgvlvugg", "frgglfterxnnb", "lrvevlexluyxn", "buuggyyuexrnn", "lxerxfblltggy", "rftvrbreexyfe", "nlbxulexutvul", "uellvbneblunb", "buuexlgfxbgyv", "utglvgglybfye", "gyunxngnnnxvv", "vbfxnxlreyxbt", "yxrrvetrtyeur", "xfergbxubylvn", "ttffyrtlrller", "yttuvubgxllxb", "xnvufexnruyuv", "tenrllxurgynl", "yrelntgxxxubr", "tbvnuubffvlbe", "nuvlguxeubery", "lrtxtebbfxvgu", "nvgxrlgxtttyy", "xeubtybfxuvnx", "fttbetvglufng", "lfxvbegebtrrr", "lnbxfyuyygnrv"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 14, 15, 17, 19, 20, 23, 24, 28, 32, 33, 35, 37, 42, 47, 49};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> S = {"nkdcxycddmijfqscdmrkqgri", "ywqlilsygvewegnifiekeqfg", "kjvwvqeyldyefffxchhrleew", "sxvygkngmnijwssvvrvykhfm", "jekecsflncvlsggmcdevgjed", "dfdgqjmkjrvemrjskrjndivy", "jdyqrjhsiqwvsgewxkmjgvvd", "rynqddymkqigqiycmyjlqjrn", "dwhyxqcmwixjyrirskcqxgxv", "heyrkcqenismqlddjfjecjvg", "cyvimsqdmgssejwvlxvdjkyk", "mrjdlxwvhjxhfjlhclsdsken", "efglywfshdxiwdekyhlvrvin", "ghdjjweffemsmcngrgxqsykw", "rmyjnmkjwlndselhrmsklrkg", "gclhiikcncrckkhvsekdxcys", "nrfssvcirmgcehvjqggxlqlj", "lisclwncrigfchmmxdqgqkjj", "jlrlxcwvwwsmlmjngcgxhygx", "nelhgjqwqeskvlmirmwcixge", "vfcrmjdwlshiigxnrjejeyns", "wqnwhiwlihmihjnicvedlxgf", "hhqcmmlgdssddlndjxfqmxjq", "njlxlhfgrlxmhxlmjigeeddk", "hvyxisxrkjfhrkwrifnksdmx", "egywigsgiglrvhkqvkjhhrvl", "sjkkhshnndnwqnfhrncvqvkv", "rkmfexgrcvkdgfhflcqdwxmk", "dxvgvixhghhfwmvfwjyqqsdw", "rjggiwgygekqhkkivxlyvmwl", "hssnffmdffwyylrgekgsygwk", "sglmidjninllifyjcjerhsxs", "kfcimeilgefemhixdrsssxrh", "wqgjlnhrremglsrggcdwndid", "ssyskisqjyfylhigmjnhqkml", "wqlwlgcyldrmddfweixkcknf", "ilwigflcqcmijdlvemxlvekc", "rxmirexlilfexyxmsigxjskx", "chhrfgfxsykscfdxmindfqgy", "xyrrjsrmmxiylqsvhxmklrwq", "qlcixgfleenqdsidqnvellgs", "xkljshehhlsvmlyqqrlndfvk", "mkiesmckxxrcijjikhscndeg", "msffhkrcyfjqvymvdhemwfji", "hxfjmndjeyffxllxjjkifyld", "rhescfmmesggdirmgvwmsscd", "xskjjxrjjmccvjkxsqmqgmjd", "cmlfkfjglnmignwicvyfievg", "hsqfddrhfhhglmyrdvhfjklc", "imesmjlydhfxlvlqxleyknnr"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 7, 15, 18, 21, 22, 23, 25, 26, 28, 29, 30, 33, 34, 35, 36, 37, 38, 39, 40, 41, 43, 44, 45, 46, 48, 49};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> S = {"qngubxtylicbtsvrlsspmsqf", "llfsmbfccgaixytrupuyxltm", "aipbuxqgvmahfnxkapkspqti", "hvafrciahgnnlrkxlcmqqmkr", "tiqiblxfpkubmynibagqmabs", "ppytmmyqlxinuaaxuncxpgkf", "msacpnrpmunpqicrxgpbtkrq", "nirvckninqgqyxhysibpkvht", "gqpnuyslpurshnnykqlfsgaq", "vccfllgsxgvfncxrhmgfcqki", "vqxpqxnkumvcsaasraxafnkf", "ksurlvpsgsanhciqclrknumt", "sspavasrqvkaigttaairklbu", "pthprxckmgmqpplghuhvphqx", "xqnslctihkpababpqrxpbvul", "qtkamhmxkysyntgaqirsmnac", "glcbbgrcbtchnirvpkllpytm", "hgsvlstqmatnkqfglqiilbst", "rsqvttnynqitgvpamprhcpvx", "xctcyytxabbavlkvksmrppqq", "anlfnbqkspupviklcvxqtlkm", "bfnhlupnlhptykritbkaptvs", "plvrbuxugcmxbgbvytnhhlyl", "brauapmkpaxytacturaunpgt", "qhaffuynahqhvtgyqqnhurkm", "rpfibfqatspfixnuhgsspfnb", "iifmyixhyniqyclpqngmutym", "mqqihxncsyrqvfiqttcbqvaq", "fbbnutyxnsaksyyvcrahvisi", "lpvpsstgtbbhrvfgvlntrfpl", "anympnylxlskmgiagyxtfach", "haavnxgutvprnrxykabgffhx", "fixabpttqpvbvmkufuhgytsy", "pgcuauhpxvtcphhgpaqiqmpb", "qquqnaqgfxpcfixiilylggyi", "fkqxmmsakmmubykkpcmraark", "armatphhclvvkqxygysmbbfg", "ccfctrkgivfglkihllypslkr", "sbsamsyuqlakngqlmkmfuamh", "aabmpnbacfvynmhvtkcscpug", "vxnxfatxtgggqmqickuaivxt", "rlvqmclggkbfifkcglysiauq", "btctxhsqbxhlpqayktyxglal", "pllnpqpfghckubmtqtygtaqg", "qxpabmyqytcrihxqfpmblvna", "qmrkpxpynayckqlsnkvbtqsc", "rglrsvngguusvcssiilhypfk", "ccnpyvaytkqsntticghhmyah", "cusvlbfskqinkkqsmnrxrcrn", "gpuvcqutnmyyqavakrugauyf"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 4, 6, 7, 8, 9, 12, 13, 17, 18, 21, 23, 24, 25, 26, 27, 29, 32, 33, 34, 35, 37, 40, 41, 42, 43, 46, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> S = {"yzaoitbkqnbcwaqadnbncoounm", "dpvstkddfvpzpnntiuizcrbcwa", "nrmiapakfpzombircwqtycbpru", "cpaqbydsnacqpinsoaufbmbcsa", "fpramdtwmscrysbotaksftwvmf", "cqzcfzsvdwcukvtrzndfmmiqvm", "ptdowdyvniybmrrnfmpwfbutuu", "swyyvdqkdvaftbmabcsqvtccna", "vpdvqfbnwfvwvkccmqtfsfdciq", "qudtzawcovdbfmpvviduwvfctq", "submopmsdunysdboqtksirrwaw", "zwcvsrqcupzsbpcqpmzooysiqw", "abdufamsvwvfqnpstkdidnczmo", "dsifbkvadybvvmupoopuswioau", "ryunqmwrzktuvsnaisbtzofznz", "cftufddivkmpfzwsctufckzazr", "vwiprkyyqiwtfwcyamvpkmtuqd", "vrikoapinanbkfaoswmkpcaimq", "aofkvtbfvsywrpwpqsifqmqnrk", "dzirwwzivoyzpdowpopkrqcfdy", "okccqyonvpptpyvfqyywmtcyqr", "kfpzvudzfnftniwqvrarwcpuop", "rvztwakrvnsnyuypvoakwvctfy", "orcnspznrpdkpsrfwbkfdumtak", "qppyfirzyosicvayffbwtncwdd", "nwpkfytsqavnpciminkmrtzdbd", "fuwskksrcbwnakwictibisqkmf", "tkrnysqmtyumnuzbqtiadvvfit", "btoqkyccuyowwmmmiskmrfwqum", "zfywqypaqmvwzvmavtzsvpncar", "pmcqadmcucybaiqyrnyimzdyfd", "copnnoozqyyvbykribfrrvvvyp", "kzbcaiykubivdcymkouknavbbz", "wprydvcmsavdtkckinysafposp", "wsmfrovqvanfpbyoumtiuiyymi", "aonwrkbcbvmuruamcqqtizckyq", "aqqwviucfiwnycwsavukryvybo", "obkppdwzqcdzzufrqzudtdunrq", "qcourmrdoobfkbisqfwftzwszo", "qsvtwmvkrvibnkvwponoqwzzyk", "dskmqnsaobyqocoavvrnkkpbcz", "fkzvywumodriamtiqasrqrbayd", "auswmormvvknutvdqmdydiaqqq", "awcqmfpckqibdooytkwvrqomic", "kupdfdiskroiasvaqfcpzfvmbr", "aunqdpduiawkkdvvbmmpkksdvs", "nivnfikwfrbykukcnzkbpafttp", "puvftmpbtvckuyfmsmqwsiarqs", "rqzqbttkncdfnwwotvvtntfcma", "czdffmdbwpnuinvyvikfuvipsm"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 26, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 41, 42, 43, 45, 46, 48, 49};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> S = {"fmdhmegyvgrumyvquggajuevzj", "jahghmgkzlyjfzkzhkrkfcccul", "kyeqkzkyaqvyrleguhkulskmfd", "lykhfuaeurmvrehhkkseulhgyh", "rlvsmjrkfafhjumsajekvqyfuq", "qezhflgfkzgzljajaqkkdehzza", "cfzufzdhlmvscvzkeqqmzajrky", "dqcsrafeujjevlhrusuyyezcvz", "qdckqealmhqfmdcyckzgrgrerd", "adeyjmadsvsedjkdkeskulmqme", "vezrlcrrvgacfuvufycjufgluc", "yjfkglzsjheckjsklqljmzuzqc", "duyyqfyfqkdrkuvuvkzhhzfecq", "ejyddkujyamfkdyzryvlkaleku", "gvyumqdazdyfvcsyvdmvfhdqej", "qsqdsqhrhqamgmmqvjhjeqgvvr", "qcfhadfqydqrjlzgczuqcjrvsm", "rzgcayuqrzghujdcmykzmsjdfd", "vyqhydljvyflhlvargssyfgqdq", "rlckyjdmjqsmmfyekmcffrudvc", "kejzfsayvgfvhaygmkyujmgrvy", "rlldfqhgjcffdeuelmrymvjscz", "gyhclgulscfdraksgajyvammgy", "gqrfmlfdyvyjrrkcscvyvqsqfu", "fgrmerzzcrzgzhvjmryuyjlqdm", "zmudakshysadjyzrscefuuryus", "hrsekzdmrmuymslfarcjhflvqs", "ujuamfkssklmcqugdlualghagd", "yrmgmdmhhszhvqkelkkarsdrav", "gdghjqasszyammzzvfugekddcr", "qeaculdfedccfclckmllfacfgg", "vegmeradzvegukeqqrsechvaad", "qmelhukjfrvqsqygdurddvjluz", "recreaaycrcyajukfdccmqmvcm", "ssgekvavqmjhsuhhlccvzascyg", "smugmqkvyyvvusesvmjevduhlj", "clkrrudekyjqarfazyzcljqeqm", "lhzedadzfzyuzhrchmuvrzjlqr", "gcrymrgjqrjlgfqllkzvmhylhh", "lgssvajljleaeehfalmvevhjkm", "marzahadghfrlsvrummqucdhcq", "zlhuvguhdaqqqavjaqldmyzece", "hvzhjyazrkzmemqkuchfkjzvrh", "sygfveuuldkycssavkfyfcjqfh", "rzsqllylzzluhzhjcrddddlyug", "rhjvjqhuzzydyychljgrrlvlke", "ufrqurfczrrrsmgemgyqjhqyhd", "mgyqysgqddzemqrkyfugsdkamu", "hfssgghaasgjrzqzzcufukzjju", "alysjgjedusjcdcqjrqkssjyry"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 5, 9, 10, 13, 14, 15, 18, 19, 20, 22, 25, 27, 30, 31, 33, 34, 35, 37, 39, 40, 41, 43, 44, 46, 49};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> S = {"vtyspcdnqfrpdncyttoxrboacuvsf", "bqoaudpqppmrqnmxupefqossutmux", "sxbchsuoksdcbeprsbkxxcvnnctcy", "shaovemxsexaokdoctdsetnrudtrn", "yfyyvrxxtxvxocusuyhoxrvdpvotp", "dhssmcvfmdahbhtvaxhanenorbpxm", "rdcyqeddbxmkffntedbfhhebuarks", "puueqnfhryrcvfafndahfydqttmcv", "qhemftbahnycrfykootdebknuthqd", "epnrshehertxbfthrmkcnapmebprr", "fhmreshkdqfxspcdkmexqtoavbkst", "kpfebyfdpdbapqqckoqyboarqbxhy", "psornohuycottupvhnkyhbpbdmpmm", "mahpyptoadtabnerskmespnbpredu", "dcoeqbuvpchsmpcraockftqcfhtfn", "utcnhyfnmdorarsbedsrkvqqmcvoh", "xeexhphrqqrverbvcpoppmyffdvoq", "xnpqdunypcynpknaotpqppfrvcnox", "xmqpaetmdrxkqpsoexdvoppyekaxv", "pddnmbdtmmpfaftdxftpcnvosdyet", "yuruydfratdqkkyayntuomcrroros", "dscecpfoxspaunaafqdhpqqfesubn", "xmnahovfabacbbymtymosmmtseqnn", "oremynfdbndsrqranknpttepctube", "phxmhhqccmrtvrceptcvfaqddnnep", "eynaxtpproqytbqacyvpukvofqsvt", "aeoqvhutmqqckespdsopyopsnvpnc", "mxrrcypenbdtcyurtuxoaproorsyy", "brbbbxeqkvkhdanhsqptumvxaocfy", "naxvsmeynnfcmruxnqmxnuedkttkk", "rnmhmtqvkckeuhykaddqaunaqokve", "afrdqmosqmfytebrtvatadrvqdram", "pychtvtttoxsofbuubcqdvspqdtdy", "ooxkypuodrnfoatofhccasfushkxy", "nrnnhntfkbmmboftqoyetomoshhso", "dvkdxtnyppqooebtskpafdoyasrux", "kpbpqcsxsnvbphcoqaqvvvumqqvok", "ynmutnrhvupekebpyrhqrnfokcecy", "dnqrsxoyxsxfpvvtfruatbdruxkpx", "xyofsnmfcxhuoonqrcxdxxfkoprou", "bshtpxckadfxsurvqrtbokopkvcun", "ssqaxaprunpobbrxeupxnskrsyfhk", "akmkdxnoxkmyamxoumxmmqphdxfbs", "cyhbkvmodcrmdecufktthtvydtkup", "uqbeavyrnopaekbxpqnaoppshbpuv", "cbbpmedntdceevhpshqkbxthxnnnq", "xmuymnbskkktyqtnqtyksokddepmx", "tundhaysasdsnpnopauayfvtoehfp", "bvhsdkbpecfkfqboeecanyythcuaa", "ehruymfaynohfhdsokocvneuockum"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 5, 7, 9, 11, 14, 17, 19, 20, 27, 28, 29, 31, 32, 33, 34, 36, 38, 39, 41, 42, 46, 47};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> S = {"xoydooviuwvlzhcwocczljmyqb", "cnnbwwuxmzacqvdzzuiqljqifj", "qlqjqijyaziwoxjxlxyfqloynj", "fbrqbqnnnfflwmbqiciqlbvbdz", "jiwooaaywxirmjwfuhmvzwndcu", "vxjauxubvlvvwznubfynawxfjc", "cmqfzimovcmcnyhifmlvbzxmxn", "hrodqijoczcuoucdfmndvwxqov", "iacrwiybjczlocojczlbonjjvb", "fxzrnzwrvhqjrimcdifuvuwbnz", "mvqunnzunxxmiyfhrohbolrbyf", "juqrnnwozouabcxlwxyuzfudyh", "yqiwinxarjxzvicirnlhaadywc", "alrdruiaavnqfworyvvhiwnzqa", "uzybfzflnzljzbnwuodzyfdnwd", "uwvlffumzwbnodmfdrwvqylznh", "axyolyavyrcjvbqqlxhuhydlnj", "ujvxuyuiqrquurywffddmfvanu", "oxuduvrqxbwxqlhqudffnozqjw", "wjwdzlrbjdnrjuabhhiwqfmidy", "ilcuniwoiqrwjvnaaiahrmwuqb", "lnzlnyxcfmayozhuiclxuhnhxm", "yomcrhffjbffnaafldvyadznyl", "qcqocijwwdwlidvmwwfmhaqvlv", "avurljvlvbnfixradzwhhvrrzv", "nyozqjidihwazxylawqhcfaqoq", "rduczaquhbzwlycixaunfqnlqy", "cwwwdyvoivyauoqbawbrqrrila", "jwowvfdbmrqhiwbonuioxcrunq", "rlhvvfuzbzibxuxzmwjywobyau", "wwrcrbzydadzofmihxqbofbwho", "vafaqmljymdbwujdwbionvcbwl", "dmbyinmxiwnznmlzojbcxlbulh", "fuwbujziardccohzdyzvbujdjz", "ybomzuxlhajmnzolqwmuiurmxm", "odrlvywuyhcbyuzlyuhnvqfmql", "yacvovcbxrjzxymhdyjwvnwlrf", "urvzcvyoziofxuzoqrmmmwlmvf", "fiufyxvixyrqachluobamfvmoo", "zfmymfnjdnzqcqlqozqjnqhvfw", "udouixyoyaqirofofcvlxfmorw", "xmmcynlrdmihcacfzbomvbanuf", "uhcnbyzdrdcuwfoirjmqhqdqmu", "wnxccjxawhyvnccuxuiziqozco", "orcdjldxjmuhicdadhcoycoidh", "jqfolyxznndwhrjamwiiqyzboa", "ybndvoaaddmqjhyybjqivxczah", "jwaurzawzqbnxudqazxlxjyind", "ffljhyddvibhhrzdcwjmjdzcxn", "lihcwfaunaznjdnmxxifdrbnfw"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 5, 6, 8, 12, 13, 14, 16, 17, 18, 20, 21, 22, 23, 24, 32, 34, 35, 39, 40, 43, 44, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> S = {"abwhgoutaijgdhphdfbwsuqy", "qbgwnjvjijgiifskydwhavyf", "sifgtoqbgonkswiqksjdhmod", "fkoowyquvyqinpyskbsjyvif", "aptwkugqsmdpaakgaytihgsh", "idggwwgjqkaftqhgiohiqkvw", "dqkvmovtgmtinupyagotmavb", "pkasdttyfptvpqagpbaqahnm", "qtujkssgdpimapinnfjhvdjy", "mmawkhskuovquhqyhuwudpnu", "mdqjsijhfpdhwvdusqsktaou", "khvthdhtkndkdwgtbybjjytf", "vpgymwygssffqhwggjnfgunh", "yjsjwnandqianqsypffgpsak", "dwgqvpoimvshyqkpbhqoiynh", "mvtjyyajsovksytisggmnjvu", "sbtaajhogtybsgutmomjphog", "hmaivfhmhjisnsitpgjuwwtd", "nfpgistsjgqhhvsqdyvyuhuk", "bvgttmbawvspfimkmfjkbigd", "pkhyakbosawynhqtgbauwijt", "ikhybnudguabtpgtvkpqggvq", "jndviyjymigppaqioyfyohpd", "yvwvqdfumngfagismmgpuvtg", "mdvnpjwvtawbkontmsnhbfwi", "wwywdqqsfyjodkmkndnqfmgp", "muffdsqkshjsuqdppjkjsmku", "dfupjvvmmqpjyijdqghwhujj", "dguytgbumqkijpnmnjnyowvu", "viksnipooguqttaihtkkqpsy", "sakoqggyvmphwkbokwkvnuaq", "muisjtyjjwbmkbfobpoovqob", "vkjqwuiuuiyfakpfdfdvhpmp", "hqavfkmdiypnpyhwittmtmbt", "yvgnvbhvgumgkofjotqqmdqq", "usvvbbahqgffqoqtkampiwhf", "nvfgfvtqgmbmqppiitduhwob", "nmaipsfkuwyutatovghaijya", "imkfmvdpjovskujodhduhynd", "mkpwkoqtbtuqgdwyhuwpfvhf", "bwpkhttybqwpshjsghsjowbm", "swfatyupvgdifkhkvqubaumf", "ihijsivphstubnoavwqsijiq", "hbthmiupknsjsmkgiwaqmqmb", "bkufvtodsgqvbjpgbfnyqqid", "jugqjhmynqpwmvpqoowvjikh", "vtuphhmohjhvaavqspyaqpmp", "stqjknijohoiasbtwgbaysff", "stntydyvpjysgujagkykvpmf", "gvhqkyjognwqfnknttwhugwb"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 5, 6, 7, 9, 11, 12, 13, 15, 22, 23, 24, 25, 26, 27, 28, 30, 31, 32, 33, 34, 35, 37, 38, 39, 40, 41, 42, 43, 46, 48, 49};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> S = {"kjqzuabpvjephqvpzraivgup", "bvgpkerkcricjbffbphkvivn", "inkjvzpqpfuurnugrengshgn", "ugbcbjfjesjhigfcurhqbiag", "rhzagrcngbekzqzvgjiqjghi", "zvrqsbipknziukvkzqursjna", "fzhshiipesfipzcfuajbprue", "bqabhbzrzszugvrujbevkgqr", "gbkakfsfiegvjvspcnkfvhsp", "bbciphbjhuecvzbhbzfnqkru", "fkugzgvnqanppqbgrpgukpga", "zpjiasnpbzpijigvispjzrkf", "cbkpsuzsnqsfjiifspeinzkn", "ieqhuifvhbgvgvvnzkeqfjqs", "sieecaqgqzpzinspazsbhkze", "bjursjkphcehfgrkvuqkagca", "hjnukuzabrbienjsaesekqbj", "nznzrgcvnpjahezjkbfnspuq", "qghbhzhibukzngnqcqbucppk", "zgskejnjufuhcqkjfvpsnpru", "rgsffgqifzgpieakgbhgffvn", "aikcaafbniibsuuhqjnbhavi", "vhbcvervijhscufsfznieane", "srbbfngvcvackhjiqrzkecvf", "jnzjricbicnishzvjrkkcngq", "qcvknaukiujsheazcqkvaepu", "knfsbbzbsifspajgpcsjzahp", "bsuhrbgbfvknrzeuicjkvfie", "ifcjrsqikrngcpvzaqjhkfnj", "riqrfaekbnhphhqanesqkevk", "zbujziufsbkujifupesrajzu", "rngbpuhsiigufapincnajvss", "uijhjiepvnazsibkfpshaksh", "shvkcpihpkgceabjkqvirrni", "phphkcarhkguuaigjvjussee", "gugicfpgbnurgvrpnvgnekic", "rhnggvavghrhkzzkknvijzqk", "rernvksjcafjskfaagabjcvs", "gppssrifvepusrvgunnehjpc", "jifigiknbkzfpbekiebjsran", "kpbaejkikkpbfevavqipkaup", "rkijzpkurqprvavvcheauqcg", "fkuqqcgrsruregchsqgrbngi", "bgcuvpkcgrhgznzsvuufkrnf", "bfsvafirnrgfpubnszppcahk", "vbzekjhjegncfcgcsizbfrun", "apzhvkgcrncfvpsarrnzfekq", "fusfhgnifjpfpaqaajrraiva", "pcunfpjkspkzkauqbapzupju", "nsvergcscjjpigisjncapvrg"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 9, 10, 11, 12, 13, 14, 16, 17, 18, 19, 20, 21, 22, 23, 24, 26, 28, 29, 30, 32, 34, 35, 36, 37, 39, 40, 42, 45, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> S = {"nzemzetmmblgmdnxpotno", "tugctbxbcmjanxjanjooa", "pejoaggnpgtczdmalcljz", "tyytybgbcpxeanjepmghj", "gndxlpazeyuncpzgpzzye", "hldugupdehczetlpzanoj", "apalbjnoyxzhxmtugbdap", "mdymdjalgjanttgxbcmmu", "pgedzgyntzzltecuplbmd", "mheoeonnxhhdldjzxzalu", "dxpngddxtzyxdozhgjppm", "ngclolbcheytxxhjcdznj", "ubmtapohxpmaabaledcoy", "ytxucaoyodudmhghglgec", "bpchehedbobmanzxhymyt", "puzlzbagxadgpgnojelgd", "jbznnggmedhcxaytnmmhu", "ncymjnzpnpptjlpdlygmt", "xugpalhthudmjuphyuneh", "thzoxadcnxlznpobhxlhx", "glmxdbgzxydelbhpbdhyt", "jgonactllayelhaybhloo", "zpgmhgtmxattulmucbdlu", "eopbbnglhpczltphbxxay", "actyxacpmtbcyutexjymt", "upxheojyabjbazxzxhomx", "mooaebnjjyhlczxmpoydh", "hnunphhacybjxngajtchn", "uubdhlmzolngdttljlnjl", "cjmhaypbzjgcnzlayggbl", "lactzzlzagbxougythpcg", "cdoomamjeyxxmyedupzec", "cneneeehdtbtmbxachceo", "nhedpeemejmjlxjtzjgog", "ydmbeeupputobehnczpgm", "ybnbhohmztagxxuaobzmb", "ljcbptnpjxzpopggcapce", "tnpthyeuydnmmpgdxadlg", "eyhuojmdybhxyxpcchgpb", "eodecahxctbntbdhlelzh", "tnjmthjgteccdcteolxjy", "etuzammdgaaxyndxnemdp", "modcdoejzbmuubmhabyhx", "uecxclhhuxenuupgcxdox", "aeetjedenuyhpjmjuazja", "jeotphxgelxugenyjptmt", "zebextzyupnzcgpntmuyd", "uxmxcphyddbhejundhuua", "npgehcxuullbjeoxnhomo", "oobphehjplxdxtpadnono"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 4, 7, 10, 11, 12, 15, 18, 19, 24, 25, 27, 28, 32, 33, 35, 36, 38, 40, 43, 44, 47, 49};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> S = {"ufpupywmcxyibilcepcxlu", "owtpqnbeuuwtltxucocupy", "tcwtuqcfmwbeoxnfczubxf", "fipbdlexccpytufoxdctol", "ufofzlbeiywplcwimceqvq", "ymiufodeinbctonnfdypoe", "nuwnoqwtfiuuqwowpolcoi", "dxdeicofnlzbcdxlmlbwob", "plmexflqxfwpemzevnibcm", "mzonqytcedzyiobwpwtbdl", "blxeexmcmtbwdybmtmucec", "ubifbndmcoqeecvpbfuppo", "znyexyffxwcdzemculzydn", "nqeveolqowwqccdexymtmo", "fdbwlcnzmffltmwblmeyix", "yxwyinntvuomoclfbzmxmx", "pdwcybltmitvzxvquooeqd", "ownxutuxwmiefdyxwomlve", "nnzzowulbpnucicnuzcwyl", "clwpnybpdfletliipdfnpv", "ttfuzbpdyxvvyxxxzwfudx", "nuyoinnywdxdmtqoteiitc", "ofdnxtlofxldoyzndnxqpc", "miqllycptcxuypcnbnwyeq", "fotbpnpqwcyovfqbxlxcqd", "lxtvbcnpuxdnuxcclcevec", "ztcyfoxmwplilwcfdzzfzc", "lmniilcvflccvfpwwxoubd", "qdccxnquydpfqqwflfpixc", "izluuwfxmnnebfuvptyxye", "ctelnxfuwwevuxvvmwcnpq", "xlmbycoftlzubtmefblvcz", "zbbyvtmplxcmybvmnofcpt", "tfwucxtnvncvfqdtztmufe", "mxzotmlcyztvztfwdzbtmo", "lidtofqpoduiqywcbmxive", "euicquxfqzywwyncxumipy", "ynizfwfcnediqyibpmxenp", "zweucbeveeywitvixbmtvm", "dptvdxooxvbopqlzenfnxi", "fiwcxxywmnzeinufmbdudo", "lyyvmulzyfedlwizcbqmuu", "nmtdtlotpezlbvbelqqcuf", "qcbifwexxwcffqtdpyuxeq", "nxwouwfxwycxxqtwbvcndx", "nfbubcdcevvpcdflnzppdd", "lpwfqylowfpfczqniiqnul", "ffizicdmllfoxmymiuqdop", "ilmtxxtoqbymzozvwxptbb", "tmdmqdfvbodwfnxodlenon"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 6, 7, 10, 11, 12, 14, 18, 19, 20, 21, 23, 25, 26, 27, 28, 30, 31, 32, 33, 34, 35, 36, 37, 38, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> S = {"aaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbc", "nwlrbbmqbhcdarzowkkyhiddqscdxrjmowfrxsjybldbefsarc", "bynecdyggxxpklorellnmpapqfwkhopkmcoqhnwnkuewhsqmgb", "buqcljjivswmdkqtbxixmvtrrbljptnsnfwzqfjmafadrrwsof", "sbcnuvqhffbsaqxwpqcacehchzvfrkmlnozjkpqpxrjxkitzyx", "acbhhkicqcoendtomfgdwdwfcgpxiqvkuytdlcgdewhtacioho", "rdtqkvwcsgspqoqmsboaguwnnyqxnzlgdgwpbtrwblnsadeugu", "umoqcdrubetokyxhoachwdvmxxrdryxlmndqtukwagmlejuukw", "cibxubumenmeyatdrmydiajxloghiqfmzhlvihjouvsuyoypay", "ulyeimuotehzriicfskpggkbbipzzrzucxamludfykgruowzgi", "ooobppleqlwphapjnadqhdcnvwdtxjbmyppphauxnspusgdhii", "xqmbfjxjcvudjsuyibyebmwsiqyoygyxymzevypzvjegebeocf", "uftsxdixtigsieehkchzdflilrjqfnxztqrsvbspkyhsenbppk", "qtpddbuotbbqcwivrfxjujjddntgeiqvdgaijvwcyaubwewpjv", "ygehljxepbpiwuqzdzubdubzvafspqpqwuzifwovyddwyvvbur", "czmgyjgfdxvtnunneslsplwuiupfxlzbknhkwppanltcfirjcd", "dsozoyvegurfwcsfmoxeqmrjowrghwlkobmeahkgccnaehhsve", "ymqpxhlrnunyfdzrhbasjeuygafoubutpnimuwfjqsjxvkqdor", "xxvrwctdsneogvbpkxlpgdirbfcriqifpgynkrrefxsnvucftp", "wctgtwmxnupycfgcuqunublmoiitncklefszbexrampetvhqnd", "djeqvuygpnkazqfrpjvoaxdpcwmjobmskskfojnewxgxnnofwl", "twjwnnvbwjckdmeouuzhyvhgvwujbqxxpitcvograiddvhrrds", "ycqhkleewhxtembaqwqwpqhsuebnvfgvjwdvjjafqzzxlcxdzn", "cqgjlapopkvxfgvicetcmkbljopgtqvvhbgsdvivhesnkqxmwr", "qidrvmhlubbryktheyentmrobdeyqcrgluaiihveixwjjrqopu", "bjguxhxdipfzwswybgfylqvjzharvrlyauuzdrcnjkphclffrk", "eecbpdipufhidjcxjhrnxcxmjcxohqanxdrmgzebhnlmwpmhwd", "vthsfqueeexgrujigskmvrzgfwvrftwapdtutpbztygnsrxajj", "ngcomikjzsdwssznovdruypcnjulkfuzmxnafamespckjcazxd", "rtdgyrqscczybnvqqcqcjitlvcnvbmasidzgwraatzzwpwmfbf", "jkncvkelhhzjchpdnlunmppnlgjznkewwuysgefonexpmmsbao", "pmdgzqmkqzxuvtqvnxbslqzkglzamzpdnsjolvybwxxttqognr", "baiakqllszkhfzconnmoqklpeefsnsmouwqhodsgcfohesyshm", "gxwtoayuvnojdjftqtwkbapriujimqwspslgvlcsaqbdbgwtbs", "eettwdnfnbyjvpdjxyuzqxstatbzpctthoofremgfkrbcvkzvg", "bofthgojhdnaywpnbitoraaibednezwfpdawlohssvtqtkfvsy", "ljzlucqxswyqdntdmfrtzlqsekejhzksklfepxchvczysvdgcx", "bbiswmeaylzifktmoikssfxtgpojxqiysrsqfwqdjqnqcgdqrn", "lluieazvmwnuufnnxvloyvgmliuqandlyavfauaosnlnvacsvp", "iumoiawcqxswkqwgxyazntnaikameybnuqbcqaggxachrynqxq", "qmlfotpqhvokiiammqmvxjvbsoaifzyxnjcberrnmixxsyjhov", "engbpyqrixqgwdrygxrxkfhicainhwilkqmbpeszdigznzxtzq", "sjwatycbmjawwmninepfduplucltxmkpvgrrgtuseurageltkc", "apwpbqromqawixezqkvlfbhwcocpjmrmbpbegvsuluqtuuvkes", "vjtdhvtjmexfqbvufdpaxcwnwqjtbplyzedicwsodpwtqrpyue", "arhwgfnpaqelofrsotqiktxipqzeqvlqmuoubbjbrpmixfclbs", "tnosvdkujcpwsdqhxrkiueziowoqjpiecwxxbjtnmkjgncpmva", "uqgtausokbfugjtfiuqbjclvlazamucimicnewdoxjlfuemdad"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 7, 8, 11, 12, 13, 15, 16, 18, 20, 23, 24, 25, 26, 27, 28, 32, 33, 34, 35, 36, 39, 40, 41, 42, 43, 46, 49};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> S = {"ee", "be", "ab"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> S = {"aaabbbc", "aaabbcc", "bbbccca"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> S = {"tsqcelftsbhprmzpktavdllwgikunyszlkjsr", "xpstknzwpwzmuombsqekbwehekazigjssksym", "erflfzfhqnllwsxsekwithrgfduzpuqwezsob", "cmttwtmfrlrzaowjcbfcnjdfjmskloqrdpwst", "fiwexpvyltlwbjlutwtgisyrcocgwkedxwcgx", "dowxesodqkkzlfszhnxuvyasrbmwiltctfepx", "izzzapjfyirphnvcmhvabpbincqrciwakcawi", "jycbdqqohaldazgemctmnvalcmwhceveqsyag", "oblpyipperlnbqmpclljvsyshupicwiiwtmgw", "mxjsfkvlclautgipctrozkbjdieoyjphgbqhd", "tkenljfpmnhzwslwahzpuhvoikguaaahfbvjc", "vmoejuwjbdpxoxtlivixwnyludbquvbmxzaqe", "atldpkppahkokcjlbdsfwmkxkkhuvykaxkouv", "bxfxphjbfddvctihdkspajdgewiwaqhhmhenf", "vawijjppgciwkuhuklfmbgjkweafrfennemep", "jmvfwmfsjttlrtyprpackavfgzpimcurqevoz", "xzpmibamincljqsapghjuzwovhrqgxszhrzar", "abtgahotjwvbcmzzpdnqyutaqdaejarlnbvib", "ciumrlawlixxhvvmejiyftcxjsohvawldtneq", "isfqtbsnhfcvwbfpdraocbwrjfybbdhkrffdo", "tcpsuaaijxcfesthxcyqaosmxhztacmlmydtu", "rtexeonlzafsmpuskamuuqxnrncflilrcpsra", "okgqjsnbpjowigvcjgwadzdlbjjqihrwzloas", "ggvfqepuqmfnqknfqvupiffsrwvmdiddlflpn", "lmidaenlfvpiwzxkllvaqhtuurzdwuhujpepe", "rxamtslelrkfulrqmvmdwvhrseqsmtbutfmtr", "zgqrnwjypuizxexnqcpppympbrvfhamnfpjvm", "bheaoxjnjanlmkyfbdxgubvfkfooyihdrgqaw", "edkwsqnixgposgxlujbbtuckqkdtwfruvxnms", "gxchknaxsgczsdtcibrjxbtzpnftblvymusbk", "qwmhmpfzmgvqceqynwhgyixogxqrzdamladdf", "ggkdpcwnmihamqlnroxwhwvwzsfwktwfpyggi", "jlwbquzuxiqwheagkyvxwkwvkdkafcopjkeyd", "vmxuesazsvdjgblbdhjrcwtgmlxenxivmoqns", "jgvnyihisjcykxflsmwwqhssljjokekgdiffw", "ykdhhyasrmbxpjpkyrcdzmuiinmnuugfpglmd", "uujqeevffmzvbjporyhnaqiexwgapczlenlyk", "ycfwtaosebipukkjbvvavgblvahzhwganuzvz", "oxenkyqvzerfzbabzxpkphssizepvkfjmxyyy", "rnmtdapvrbuelbdlyznhsigesatruuaxvksru"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 6, 7, 8, 11, 12, 13, 14, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27, 30, 31, 36, 37, 38, 39};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> S = {"zbzb", "bbbz", "czbz"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> S = {"ocmyvydjkqnziqugmeifgzpdavgexqparydftajuzazrobsogf", "azyaxzkzyotpuzacdujsusrlvvswsdyarocrtcjebjazfdjrjz", "ifmdormbqdxdgarmzrkalgjcawkyjnkfxdwanshdjyzjodjxtt", "fyfgkjzecivmcvgkvndpnurnukncbvjllodkjcaimrwvzeyvjg", "csewmxeyffozgzoxtelginvnbmaspheydkpmgcbyvgkqtsxtlb", "nbigvloiiqdkmcoybjwknneffpgtvgsfvfihftzvsfgchewvin", "nsllciimkbngtzflgpztwfrcluhqiqohgidhnwnooowssbgyjf", "jngbvojqkztztufbucrqibejydnmuodvgmufhfmxhhcgeowaex", "zqbentcwgsyvwrbwjuxqaegohomgoznznanvedovjvdfmvjwur", "xzkgmcmolcclwtjamzqybpprmabxlibuvgirgpvmydcbriqeiy", "xgukzijvqbqziczblwwtokhdlqsdyijzzagdjauiwecadnupqf", "redgrqcvkfgzktfpslidkmshcasjhyubrhctzshfccbonokdza", "edaqekstwvzqhgalukzlbprtfxkknxutculagimlibougxdrxh", "nglqrwgplusvstinmeniqwsnccznoouaznresauwwokuldvuli", "stvebdzarxtwudptgynrloeeicxjnibqohrbdfosagjzornkzx", "ypsojuoxkgvqbfwxzduipbcuaovccclxobrbztcxvsyrdmekrv", "tznpswceihzlwgvattpbveytfshyapdjixwadrxbbayntmwdey", "ayyejebvskdqaxgiviuwfqrsirdqdhenqubgsoxrlvlsgxpsov", "eaklwokgpucjdvdrzlftbgoymbszbutfzsnliylimictfyeefr", "sfztpxvmecildhqolydqfknymgoiaoyibogrqfpenknxknhfne", "yeggmjpingumqdbsqwnjpzgcgxaqunibuhuyhptldsjikobqnv", "meltlniakrwnqmvwckaaduhyoreazciaytfqwhssbgxjuzizhr", "wrygqljuvlhjwdkfrjrcwwwtsiqgmxnieajahhjxcjrowniggf", "prbhozfwtowfbvwdjklkhrpntbfxioqjbzevzklkbpbgbiqhut", "vwomvncccbeptngejlgbeegklhciwwzuppuyvnhplnvjxzekup", "kfdkesrcsfhrgdsushduxpzghyplgkyfhenszmukkntdlzcrxs", "wxccekdvuqvaluyqtpjlkxuuesvjrfpxlkczoaxuatwvqgpaev", "pulqllfhfwcmapteinuztmfjzvgepndzmnfhvuflwwtgckhpwg", "jisyldmeniewfdvyxwxuxoscmhvkkkawxmsmmnqsztjqfmonsq", "kakhgnqbijmqilbdmsmtycezjyffjgdmdquukeaxrtnyzculoc", "hzdlkdeejrzbybdnyrwwnczhevrojkcshazmrhguarxublrvly", "yizpisonpzacgvdltgcpakomomirqwxmxohycgqzvzwimnmxda", "xenwfeuulwseylpngskdbaofnljrukuafqhvquicxxrrpyajzb", "ybhtgxwnuingixxaloktoqfwzhbbkskdkvkadcgastnqzywelc", "dgqbpawuajxblddbkbnvnficoywhcknyjknmhdxzsefpxxspun", "jfpqgajaplegrpmpycuiqyuryejzzalrnkvivjakrltnopixyg", "krlgdybtrftvhuwqumechuciltchjswgsmamxnilddytamyfmn", "wunjourukbvdrynvkmublwofxthfapatuuxhwwibjtzkjtowfl", "cgfdszpceosorftzykjcomggqjrksjzgxemxkpqxaltxehaehz", "wwwhkkrxpsaqdlyuzgsbfxuispcrpnhetxgloxvxcjrtkkoogu", "sdvyxvjutezmjpljyuitaanzhbykufpizqcmmyjsbsorbygxje", "ivwiutztzbsfppxsygorqixhgyxadctrvithivdcouixwdiavq", "jtkrkjmpkkrgnczmhmenpqgeegusizklyhssciboskpalslmbx", "srufenhfupnfocatwhcwtdjrzrzxcymbifmhokcxpscsrvnvvs", "jlstghdserrvwlflhkntexdqddlrwhpryhevpkgbftgsmeyroy", "krambecjnhoreqoznrnoynrfntrchoksknxnuowpgxsijkgvcs", "mziqjniomfrbuaoadgdcmvtwsxffilbmbbjadnccktglfxxduc", "vevwcfakyygukulumvjvurjbookarljlbmlgdiqqhqjnybgnbg", "zgasjhftmdylufyfkxzvsakbfgvhtmxqzotnyenuliyvdcnave", "ijdpdlkkmlpwqcywwyjwfgpeitwkgygmydxpacvovsllbezcfe"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 5, 6, 10, 11, 12, 13, 15, 16, 17, 18, 20, 21, 22, 23, 24, 25, 27, 28, 30, 35, 37, 39, 40, 41, 42, 43, 44, 45, 47, 49};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> S = {"aab", "aac", "abb"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> S = {"aaabbbc", "aaabbcc", "abbbbcc"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> S = {"aaaabbbbccccdddd", "aaabbbbbccccdddd", "aaaabbbccccdddde"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> S = {"bheajeiiceffbhbbfchgbecdccbgifhgbijchjfedbcddebbdi", "hechhjdbjigfacigaceigfajaagbdijdeegaggbiejgdhiicjb", "dfjieahgdgbfecajhdhcgabgfhfebcaabegahbhhhhddfjjibi", "cggadiabcfajehidfbcabgeagbijiebedjiiaihhididhbahde", "jgfbajjgideiejjcffdddhediaiiagibjijhccicijahibfigb", "cecfigcgfdjcegbicbbjhgcjfcaadjbibjfdcfcfighhccjebj", "gjicffejbcfaidjdjghjjhgjdfhggficfeebgbgddffdcicfdg", "bigcbegcjbfadgejcjdeeafjgdeciihfibcfheeeeecjdahhih", "dadicfcadhcjhfdedcbbdcfdfbcccgeahadeaafdbaghfaaefe", "jfgeicbgidbeiejcahagahafghdiejcgfhhefhjidaccdghbff", "eacgagbbbhdaaeidabcjadiifhhaijdahehidhbaaidefabefg", "cadfggghghhbjbgchchgfbdjjfjcgfdceeechjcdhdbfhifidc", "ebbfjfbagefdaijbdehegdgfcibadbffccbheicdgdadfciahc", "cfjbaifahjafdebaeifjcfebdjfichjgbhhbjadebhfddcebcj", "aihefgiahhedbdgdabjaecjdbeicaffjdciheibedffcgijcjf", "jefafiiabdccchadbddhajffidhidhjdjbiciabieigajdaaih", "gdfgfidjeidjhgefigbffbjgefecfdcgicggdjefgcfdfggbee", "gcgicffbabfbhgaaceddgcicdededgiehdjiaaiiafbedgdjcb", "jicdeacdbjijijbdfbecfdijcihabeibjdfjhjiabehfffajci", "cefaeeafbbfjaidihcgjdibaddieiabfebdhdfifgjaijdgagj", "hijebfggggghbeagbcbejfcdebfcdbgiichhbcgaejegadgcef", "iibcbejicefcjjidigjiggcdicgchfhichiacaijcicaffchgh", "ihibgajfijaaahcffcbeigegijidffbffieafehcbejjadadfa", "hghidgeebjffhehdeaiibfcdcegggcjaejdbbjjfffgafjegde", "jafdjbciibigacejaccbfeeecfaecbchhjffeadebccjicchif", "idjeegjifggahchcgehbdcbgdidcigabcgafeghjdehiibgdih", "gbhcdhififihddbaibajcejbfhddeccabchhacebadhdjfjhca", "cighaibidadgcaciebidhfibhaeiibdghijfffggdaaiicdagf", "ajhccicjeeichcfiehdjfbjacidbedbaeahjaibeahjfdicdcb", "aeahfjafbcajijbhddahggacijijjjecaihihdahgecbjbgadd", "gccbedcgafejgaicheahgabcjdifbfggiijihahjbfigdjefdi", "cdjeifbdcibgeghhjgebjcgdbfjhacgbhgcfdeahffdbiiiabh", "fafjajdfechcghccabbhfjbibhiggjjcggfieadhidbbcfhgcb", "gbbfheifgejiedcfdidchagiabbjfdgdbfdeadbhjadfcjbcgb", "habfccjafbidgiigbgghaejijejihfgeigihiajfgjaabdffia", "bhheghahebcbidfhbehgicdachiifjhbdehbdhbchfdeeffbeb", "cggddaaibdibgjiabdjdjdgffeafagffbijgccfafcfcaghcia", "agidagedhafcahfgbibifgfjcgfcdcbcciiiheaafjjfdajjfb", "bbcddjhcddaeiedjcejafhehggdajaiabfbadjfijgcfhgdifj", "dacfbfhhjebhifhiiecdiebdaebhhcbdbdbfbfafbccbffdijc", "iechfieajeedfiebaddeaghffgajidfhjaeiheacdfebggefcj", "bcejjdhgfihijhhbgfabdcgafheejagbbjaecbjhajdddbdfgj", "fjiidjfbdgciibjibddedjchcbhgbhdagacfgahcajfedcfgai", "ibfhfhjcdhchjdgdibagihgfbcjfgbfebdifajcbddfcjaeifh", "ddadadcbbaibihcijcdacicffibcejiichbhjfadeabfdecdcj", "ejcejaeejifdcdabhbjiidcjddcideacabcbahggiafiijfhdc", "ccaacdbgihhcihjfjcjbdaibjcacehfibaahbgjdadhdaedcdb", "achhbdahadgdbjfgbfbajhdaibfbhbhjejiaabifaijciaifbe", "hdgbgiaigfhbacidffgbejdidcddhdabeihijijhjbjfijgjdd", "bebefhgdegdidechijabeahdejefgijijjhaiefgjdgcaagfbg"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 5, 7, 8, 10, 16, 18, 21, 24, 27, 35, 39, 40, 48};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> S = {"buiywflbnpptmhqfiagfgdgjveklhocgdeegefrxzabnmcsjok", "fpkedffhlydjcaevidenfmtehobbpguzjadoanrmgqxcwligsk", "gptcdjmrdnwlhnveegzafdbdaaomjqidxiouhbkycglfaedksp", "cvcatcsugbxzwcckmdfmhfeeliblojgrpajnfpnkdadbdiyqho", "dkbyajidgdmchxhkbzervalgnatwplcojieufnmqsbpoafcfcd", "apcogyagdacideokelwfpjlrzvmfxbjgatnhfbmcesniheckuq", "nmbfcflnmjiyfahkfrzteglexgpvjdgaoiwuschbafkobfpqdd", "idueqolraltcjkgcnhbhcnkpavgdmegxodifzgwyjbpmsegfaf", "bifkadmonofcwvgnsxielqcgbkgehpapejjccyeflumchtdzdr", "wcgygkedxispnqebupedkvnlolbatgibbaemfbzjfachhmrobj", "pmjdszwdedenplhfkxbombcqchecajkinuiofadbrglfdatgyv", "tdiicaohpkeqwbmfrgjdmeaouxfeldhbzggjcypbfbslkncnvg", "hiriesbfwaplkmbdkvmegdjyexcnbotqjzlndfdgepdoghuaec", "fbjmdgndscqehvxidnglockpjlmifeoyhafdbcweaktarufzcp", "fvcmuaneaakcodjsdhxllzeboqbpngpfewegkbthiygjbdmdri", "jkbamkelonnuhdgffprcbpzeoidtgabemhblccvxyqijwadggs", "azhenfpivbwykbpscmmgrdtxdljhnifcbafkblebaooduqjcgc", "ofhgipafkmdifbbrdmjcjzohncqgucegxvgtgaekylpncwslge", "tappqhesjlazmbjceocfrumnobxcdagbfwgekvlckgnigidhyf", "cefqzbdoblcjnhydflefpdgkggomctkmvjhiaxiscrpfawfuan", "mjccbdtqvnarmegdflpfloujdihzeeywkbpcbsdfgiokhagnxa", "wjatvlijhfhqaefgidneebmoackludkrsgzpombepfcanyxebg", "eceamllyafgdnaqvnfmucxbipbjdgpohdrtaokeziwkhafsdcj", "nyemlhoapcgjqjfxucbiclakpdboigwfbzkdsvddabmbehetnr", "jagfbegekmdgbeyugdcnshadmlpctbqnlrxzkovjfhipbegwoi", "wecccpknlkenicmgmsjazybqxrdcphvchflgcuojaddafaotbi", "bdidoydcijfzlejwmkglafptbfvcbshgkxcnmecapfoerhuqng", "hpeyfeqbckgjlaziichewdgtlpgjmosgvbknnmgrafobuxfced", "dymbkklzgvecxpdsoenfqewgiaenucmbptaafrlcjihjaocdhe", "yewhmeaacklesbebijltxccmzhfpdunpnirfvaabogcokjgqbd", "iousycbobzrlngaabkfegfpbalkxqnehejtvgcmdjcwdidhmpf", "ceoxawpcadlblhggtaqfzidbniyjvffdmmjkohpgsrukeegafn", "scngfldxkapplgghoajaygfwmatdirboczbbcvimjkeqcuednh", "xailgpzodgdfeqwcntarmojmacelikhavypsnhfcbafcugbjbk", "qxhpmfnlcelwicvaigdktpocgzbmjyfgefksjagagonbdberhu", "lbfaaiueffrtndogeheaemlipbnmzhcbjxwgvdpckasyjgqkco", "hcnubhjbibceaopkepmecgqnaeacyligfdfstvjkowmezrdxgl", "gakkhfddpghguyoeofpflcexmmnbiibbljqtffwcnzjabrgesv", "gvemcftdaodlagjnohesmfcdkhbziuxwapbccrlqcpjfbkybin", "mfpcqvadrhuejxlkwicenbtkfozbdglaodbybjnpdegismhbaa", "hlaeetmaxvhbqpcsonkgcccipjmunjidkcerfdyczoalgbdwcf", "doirgnkaatafeksgdveqchzanxjmfjhcebgeeyiglpglpubwom", "ukeafadpnzoexdoapnmebbhgcflccjfiiyktbwqgmsearevhlj", "udilleeznadaksjhycfbkivhjgmrfggpgbepgdmowceotqfncx", "paiffcroahwacyxokjtdbggfgenfamsfbeamdlkgzvhnuilpqj", "qbbgfxefovdnsramelajpdbldomtiedigkycgbhuckjpfzfhwn", "saimaaxeaidgtdwelfbhcdgyunfmjczogqcpkprohlbekjnebv", "kqaclfgcgoftbnjpudseaifgxbcoardlphwzmnegeiajvmkhby", "ulvfehsbafpawtgeoejadpinxfhqczdcrykmaamoigjcknlgbd", "fpqmcomdvhgcjdgebpbklrwalbonbzifekuhyxjbfaigtfnsad"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 6, 9, 12, 17, 21, 22, 25, 28, 33, 36, 40, 41, 42, 44, 48};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> S = {"aaaabb", "aaaaab", "aaabbc"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> S = {"phqghumeaylnlfdxfircvscxggbwkfnqduxwfnfozvsrtkjpre", "pggxrpnrvystmwcysyycqpevikeffmznimkkasvwsrenzkycxf", "xtlsgypsfadpooefxzbcoejuvpvaboygpoeylfpbnpljvrvipy", "amyehwqnqrqpmxujjloovaowuxwhmsncbxcoksfzkvatxdknly", "jyhfixjswnkkufnuxxzrzbmnmgqooketlyhnkoaugzqrcddiut", "eiojwayyzpvscmpsajlfvgubfaaovlzylntrkdcpwsrtesjwhd", "izcobzcnfwlqijtvdwvxhrcbldvgylwgbusbmborxtlhcsmpxo", "hgmgnkeufdxotogbgxpeyanfetcukepzshkljugggekjdqzjen", "pevqgxiepjsrdzjazujllchhbfqmkimwzobiwybxduunfsksrs", "rtekmqdcyzjeeuhmsrqcozijipfioneeddpszrnavymmtatbdz", "qsoemuvnpppsuacbazuxmhecthlegrpunkdmbppweqtgjoparm", "owzdqyoxytjbbhawdydcprjbxphoohpkwqyuhrqzhnbnfuvqnq", "qlrzjpxiogvliexdzuzosrkrusvojbrzmwzpowkjilefraamdi", "gpnpuuhgxpqnjwjmwaxxmnsnhhlqqrzudltfzotcjtnzxuglsd", "smzcnockvfajfrmxothowkbjzwucwljfrimpmyhchzriwkbarx", "bgfcbceyhjugixwtbvtrehbbcpxifbxvfbcgkcfqckcotzgkub", "mjrmbsztsshfroefwsjrxjhguzyupzwweiqurpixiqflduuveo", "owqcudhnefnjhaimuczfskuiduburiswtbrecuykabfcvkdzez", "toidukuhjzefczzzbfkqdpqzikfobucdhthxdjgkjelrlpaxam", "ceroswitdptpcclifkeljytihrcqaybnefxnxvgzedyyhngycd", "rudmphmeckotrwospofghfozqvlqfxwwkmfxdyygmdcaszsgov", "sodkjghcwmbmxrmhuyfyqgajqkcklznayxqkqoyzwmyubzazcp", "khktkydzivcuypurfmbisgekyrgzvxdhpoamvafyrarxsvkhtq", "dihersigbhzjzujxmmyspnaraewkegjccvhhrjvbjtsqdjootg", "pknfpfycgfieowqrwwwpzsqmetogepspxnvjiupalyynmkmnuv", "klhsecdwracgfmzkgipdfodkjmjqwiqpuoqhimvfvuzwyvijgf", "ullkjduhsjafbtlkmfqrmyjfjnhhssqctydteamdcjbprhtneg", "yiwxgcjwlgrsmeaearwtvjsjbaoiojlwhypnvruihoswkifygt", "ydhacwyhsgewzmtgonzltjhgauhnihreqgjfwkjsmtpjhaefqz", "aauldrchjccdyrfvvrivuyeegfivdrcygurqdredakubnfgupr", "oqylobcwqxkzmausjgmhcmhgdnmphnqkamhurktrffaclvgrzk", "kldacllteojomonxrqyjzginrnnzwacxxaedrwudxzrfusewjt", "boxvynfhkstcenaumnddxfdmvzcautdcckxaaydzsxttobbgqn", "gvvpjgojoglmkxgbfcpypckqchbddzwrxbzmqrlxvobtwhxgin", "fgfrcclmznmjugwwbsqfcihubsjollmsqsghmcphelsotflbgs", "fnpcuzsrupchynvzhcpqugriwniqxdfjpwpxfblkpnpeelfjmt", "kuqpzomwnlmbupmktlptndmpdsydsgvfpenemwborifsuqhces", "kmkhssmvnonwafxwhgbibabvqopqfoviussqfqwehtxdzujtln", "txmrjxxwtlggkytbiolydnilqadojskkvfxahhjmbocljarint", "dwcldvdxropbyjzwyyojuothwmlvrglfzdzdbtubxuoffvncrs", "wsaznmoijoivvgobqpnckwvnhkebmtdhvygkjisuxhatmuudqb", "hmknhfxaxqxkjlzzqtsjfaeedfuujkolxjoqkdvfepvlhvhrwt", "fdukxffjpsswyxlijjhevryxozbafpfmowgrgonuatdqlahygg", "yljddjhmltedzlodsrkeutgtnkntarjkpxinovgzdthunwooxv", "jjmpsvknhkwjopmmlebksucvzqlyqnwcmbvbhrmlowpjbwyvwt", "gtoqnmicxapzarknnxtuufarzrosdqwsmtcjghecqudosrtjxy", "aaykqrxycrxuwjxnpqjnbkcpdmokalxapemvbqlzsvxzkutapp", "wgzpdpyzkzcvbntcvfxsxpjaoxtfhvxxytgokrcxaetauqgndm", "phwzyiayabjrqgeppxyjsttyzuvldvybsuxkbmfzvrtnovidzn", "pghozvafmsnsnqivmvubcwtfsrqtmknepbhowejazhkwcmmtpi"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 7, 10, 11, 12, 13, 15, 17, 18, 19, 20, 21, 22, 23, 25, 27, 28, 29, 30, 32, 34, 35, 36, 39, 40, 42, 43, 44, 46, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> S = {"bbbax", "abbxx", "aaaxx", "aabxx"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> S = {"aaabb", "aaaab", "aabbc", "ddddd", "eeeee", "fffff", "ggggg", "ihihi", "hihih", "jihhi", "jhiji", "xxxxx", "yyyyy", "zzzzz", "xzyxz", "zxxxz", "yyyxy", "zyxyz"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 10, 11, 12, 13};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> S = {"aabb", "bbcc", "ccaa"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> S = {"aaabbc", "aaaccb", "bbbccc"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> S = {"aabaa", "ccaba", "cabcb"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> S = {"abbc", "abcc", "bbbd"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> S = {"aaabb", "acccc", "aaacc"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> S = {"ab", "ac", "bc"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> S = {"aaabb", "aaabc", "abbbb"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> S = {"aaabb", "aaaac"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> S = {"aabc", "aacc", "bbdd"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> S = {"aaaccddd", "aaacdddd"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> S = {"aac", "abc", "aab"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> S = {"ab", "bc", "ca"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> S = {"aac", "aab", "caa"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> S = {"aaabx", "axxxg", "aaacg", "aaaby"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> S = {"aaabbb", "aaaccc", "bbbccc"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> S = {"bcdefghijklmnopqrstuvwxyz", "acdefghijklmnopqrstuvwxyz", "abdefghijklmnopqrstuvwxyz", "abcefghijklmnopqrstuvwxyz", "abcdfghijklmnopqrstuvwxyz", "abcdeghijklmnopqrstuvwxyz", "abcdefhijklmnopqrstuvwxyz", "abcdefgijklmnopqrstuvwxyz", "abcdefghjklmnopqrstuvwxyz", "abcdefghiklmnopqrstuvwxyz", "abcdefghijlmnopqrstuvwxyz", "abcdefghijkmnopqrstuvwxyz", "abcdefghijklnopqrstuvwxyz", "abcdefghijklmopqrstuvwxyz", "abcdefghijklmnpqrstuvwxyz", "abcdefghijklmnoqrstuvwxyz", "abcdefghijklmnoprstuvwxyz", "abcdefghijklmnopqstuvwxyz", "abcdefghijklmnopqrtuvwxyz", "abcdefghijklmnopqrsuvwxyz", "abcdefghijklmnopqrstvwxyz", "abcdefghijklmnopqrstuwxyz", "abcdefghijklmnopqrstuvxyz", "abcdefghijklmnopqrstuvwyz", "abcdefghijklmnopqrstuvwxz", "abcdefghijklmnopqrstuvwxy", "defghijklmnopqrstuvwxyzbc", "defghijklmnopqrstuvwxyzac", "defghijklmnopqrstuvwxyzab", "efghijklmnopqrstuvwxyzabc", "dfghijklmnopqrstuvwxyzabc", "deghijklmnopqrstuvwxyzabc", "defhijklmnopqrstuvwxyzabc", "defgijklmnopqrstuvwxyzabc", "defghjklmnopqrstuvwxyzabc", "defghiklmnopqrstuvwxyzabc", "defghijlmnopqrstuvwxyzabc", "defghijkmnopqrstuvwxyzabc", "defghijklnopqrstuvwxyzabc", "defghijklmopqrstuvwxyzabc"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> S = {"aabbbc", "aaabcc", "abbbcc"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> S = {"aaabbb", "aaabbd", "aadbbb"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> S = {"xccc", "xxcc", "xxca"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> S = {"abcdefghijklmnopqrstuvwxyz", "bacdefghijklmnopqrstuvwxyz", "cbadefghijklmnopqrstuvwxyz", "dbcaefghijklmnopqrstuvwxyz", "ebcdafghijklmnopqrstuvwxyz", "fbcdeaghijklmnopqrstuvwxyz", "gbcdefahijklmnopqrstuvwxyz", "hbcdefgaijklmnopqrstuvwxyz", "ibcdefghajklmnopqrstuvwxyz", "jbcdefghiaklmnopqrstuvwxyz", "kbcdefghijalmnopqrstuvwxyz", "lbcdefghijkamnopqrstuvwxyz", "mbcdefghijklanopqrstuvwxyz", "nbcdefghijklmaopqrstuvwxyz", "obcdefghijklmnapqrstuvwxyz", "pbcdefghijklmnoaqrstuvwxyz", "qbcdefghijklmnoparstuvwxyz", "rbcdefghijklmnopqastuvwxyz", "sbcdefghijklmnopqratuvwxyz", "tbcdefghijklmnopqrsauvwxyz", "ubcdefghijklmnopqrstavwxyz", "vbcdefghijklmnopqrstuawxyz", "wbcdefghijklmnopqrstuvaxyz", "xbcdefghijklmnopqrstuvwayz", "ybcdefghijklmnopqrstuvwxaz", "zbcdefghijklmnopqrstuvwxya"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> S = {"bced", "beec", "deaa"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> S = {"xssukmgvpwphglkwzyfurxssqdctqxloipxrdjnmggoaaymgww", "jkdxhihwfncwclixkpadsishnotdgloxiqpqcbyrtayqhziuuz", "vppfhdivgazqmyaxhpjmggoidowrzufqxrjkcquqmdtvzftwdm", "pkbxjxzeeoovufvrhdmsahqofuksmyjouwnixvntmmrwukgwhm", "ghnpgaifvsokjmobotwfndjgcpdepseuofadicxrheitdbbrdv", "zbctibsfvoqrzdgbyzwkhryltzyiurtfqtkkzijjjaifenfjee", "uosdsuwgbndykwsnlghflmepgteexypjatfqltdxkdrwzwwcbz", "goadrmbsxamhzslqutexoqenhhtpnaxwfetjvxlapzldwdikdo", "oqlvwccwkkccfhfxmazvxjycdirjpngqjpjcmbtxjrxnbxwtey", "kbbustkfjzzhwsroayvklarxltpqjkpbjefgaxdpqbxlvxwtng", "hrvyczfzucxpigqduxfbsduzpacjkeqlrtshmazrfdwykugnbn", "toeyemohmtzynyctrfbmrsojdgnyjeslmpqvkiqlmkazwbpklp", "okimcvhxqdqyzvruyhsumvkwnvutnywfrqfvkjiuhrrwcxppqg", "sqpqsfevpfjgzagicysiqbucrnslrxoauakhmrucxgdceacgyj", "hqbalzjuvkzjqidybcyhhtlofsxmwdulvtimyyupkpxgksgvpx", "jombkvbswjiihqsjiamusnhnhlusmxukemcsededkkddaxiapn", "qivomyytvkyvcsljvoklvfmsrmuqygievqbapyvlqrzaciwjlx", "iapsomupqyenvncbirqnsodwfuthxzuaeosmhhunofltmhwwmb", "sbfdxtkrbdkcywfiunjxuzmjgrmgfchvlcttcucwidwuuhnsof", "accfgdjqxwsjmvtxvwuymlazxlaubnbtgqmerovmkwrwucobsa", "jgjhfhzqlddeshmkpuvheflokaeyofssevyxbehzfxeeulhhzx", "whftdjgnramerelkuiemxoihinalyrcojsozabylsafhspvpzm", "gvezfpxbgamiafedinsmlpecajxrlvlsohnrjiynulnmbtfncu", "xruvklgtvdcycaxpawnyaqblejihbbuyohocekrdxbgnhyfrof", "jntgtubunagzdutougtuhxvywvwowsvndqtqhnwwuffddtqybx", "uokkcvivhtygcdkfuhzfaaamutkunhmxojsjuevmbcwmvwyepe", "mxrgltkihiqslouwolxtdoswgqgctrnhpumrwijwabwlpyykrq", "rrfxcpoxjqzppeirwafapxqqoibrbomzssexktozixcodfivls", "xipcgicmkvspbkpvroaebntseerywfdhbfrzbvtytadkshuuxp", "uepcixrokunjcxreyaqzhteibwjsdzqidrdnupkasnwceljice", "zcbigmcygqprbnwtglszxsklxvhrnrfftbqwwtyknfjmtrcjcs", "uazyfawueryujaofvdjitasunxggpyzekusimezbcxivdwtrlp", "ccvavulhjbbqvnlfmybguysjofolfirqagxkbthittgdknnwzb", "kdffhqsexfmoelgmjgicdqnlpvibqiznksazzsarhfigjftjwa", "omlvhruzzqlfszeepqmieoidseqkuvclxvgrmetyatcvczdvcw", "qxxfpqbktfywjrhuknerrcqqcxqnnuicnzxaiwgghmyijyasuw", "avyfjktbqrfxtrdyuyueggfvdlwbjmjfqijxwsbaccbctjecax", "xudjqsyzyiizmqflmrcnjasbswtntgqowtovgcpymnebrpzcyn", "kzxeitfuadptighdpvcdqsiebnpsgnqppwsomwwuzqaajsdbox", "qhgbdhbfjlnzkonlddqxnmoezudvijbsyyglovdnejkkyqjupn", "qbnfmjeadvngnzfxlfsobdcxgdymnbnkegihjqjjniksfvwugo", "pxlrbyzaywqchjjicazxwyvfwgvuwgpaknfmbszbhzuarpwzsj", "pzedqleihgyxbdrlbwdboolxjcaymxpelucpwpchxhocbapqlg", "tzcmupkxwowdnevgzkdaalgaavijhqlghsckheekdnovnzxauf", "zabsiegeryvvayuukxwzrnvlvokdoixwmjpycapokcsveywavc", "bjvwjkpsblpvcvjlhncncbbmctchvumczasrwmhznftawmfoso", "dgmpicrftcpihlhlkoggkhkhfdoufmavgaoxpaqyawzlcwlmnx", "bqiopauegysixewdrxkhhktcyqpgiltekpanvbhzvipzwrlocu", "yqoinsxyhnfcvpotdbuvvcjpqqbxbpkwtkdiwpyntylywgwwkc", "bydigkpibpmtoeedabyhdgahitlqoautfwsvbueegbobcyourd"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 4, 5, 6, 8, 9, 11, 12, 15, 16, 20, 24, 25, 26, 27, 30, 33, 35, 36, 38, 39, 40, 41, 42, 43, 45, 48, 49};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> S = {"abc", "abb", "ccc"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> S = {"iqkuylptbjb", "xredubilugo", "mtgdjuvaeom", "xwzbstengon", "yapznbjlrvu", "qplksrctdai", "fxiimgmndig", "npbvjihmjrl", "lxdlwplxduq", "ocoildtrcje", "cywkaowvgbt", "uqaaixswkjq", "zjstycbzzws", "qvgyqljypbs", "voffwnecqaq", "sddpnfsutrq", "gvtgldfpcot", "bhnevatecbm", "rjdtvlotpje", "ctguwfqwkon", "qzvejiyosfb", "ftunopsavpb", "nikfdruohmk", "borshkjheae", "hiatwtklwwr", "lncypurjwcw", "awamqzomepd", "cdbxxaipdvx", "lealvjbykuf", "aofvifqefqe", "aatybfxuacc", "oudbtgnhjse", "zijmitmvbav", "gqoxmdkazcp", "brrkpljcxuc", "eckanmxhupa", "rgmcsruqqyh", "smgcfpilepj", "fljdafsweqs", "mwifbstjsht", "tvvexnryljq", "oqecqzcmkii"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 21, 22, 23, 24, 25, 26, 27, 29, 30, 32, 34, 36, 37, 38, 39, 40, 41};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> S = {"aaa", "aab"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> S = {"abbb", "aabb", "aabc"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> S = {"aaaabbbbccccdddd", "aaabbbbbccccdddd", "aaaabbbccccdddde", "aaabbbbccccdddde", "aaabbbbccccddded"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> S = {"abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwa", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwb", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwc", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwd", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwe", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwf", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwg", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwh", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwi", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwj", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwk", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwl", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwm", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwn", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwo", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwp", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwq", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwr", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvws", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwt", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwu", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwv", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvww", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwy", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwz", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvaa", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvbb", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvcc", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvdd", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvee", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvff", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvgg", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvhh", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvii", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvjj", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvkk", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvll", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvmm", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvnn", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvoo", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvpp", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvqq", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvrr", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvss", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvtt", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvuu", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvvv", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuwwv", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvxx"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 49};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> S = {"abbbc", "bbbbb"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> S = {"aabb", "aacd", "efbb"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> S = {"aadbb", "aabdd", "abbbb"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> S = {"bdcabaccca", "bbbdbddcda", "dacbacbacd", "dcdcbadddc", "ddcbbabdba", "dacbbddbbc", "adccacacaa", "cbcbcccbba", "bdacaacada", "adcdbcccbb"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4, 6, 7, 8};
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> S = {"lowuylqzlkiidulpolgyggfpewdlnjhyydswqjxevfmbbxqply", "otevjktovgydhwibuzkrfiyrjapbrcafvgcgryvoevrnrcpldb", "eijczueqwwuydsegaxexmksfyjhpwkqcucfwwjmsfjqjbxrbux", "zghrmhdtybgpectjypunkcwalxxeasbzaktmuwisxqjbscmruj", "eelaeyzeczyfbypunlsvepnptfshymqesdgwbfcfhckidceqnw", "ntlalghdogrgmjkthlymtfodprhtjxpwqdydliizqbicksvufu", "iybyctqlobieybjyeugnwwoezbwwxdsfcwfgpxrdzcjzdsxhng", "wjenpfoncnquusqzahxslwuuxzpwiecfpjseoirqxjnrcfqcnp", "wanswkrlharlhgubmjldbipozrwrvjhulumhfgvmimzpvushdd", "nglcxmvtdsemmphbymjtaribidvamafzhsdegyxjtbwhsfiqtr", "kvkuwszsulsbnzvqfbrcnmfjtxqcojvaeguaatuxenytoumuxd", "ykpevkblmpukpysjbsevrlisezmqtlvrwmxrxzdloxvgynrziw", "uzhfrngfgzrbsnqqenrhyfhwnhjfgrdctmjkzpshqjjlyzbcou", "mmbvipcuwinzmgnwtmnluewfpugswumkinftehnarabgjoecdr", "pzvlemfmedgsooivhmfwpyxqeihimkabjxopktbqwhlmxvihhn", "dylarskyawicztcnkoilgfurttobayqewegnyrnypxdpqheavn", "nbujvndjrfhhjgnqvljjmygrpzyubthrwbatofdflmpwseoqqx", "zeyfvngthioqzmrzgihlpuxgqslfidcjhaqeqxzxfpqebhfhro", "shisnzmyewdifklvqbspazeqfialprzkyieojsoposxveisvln", "mmmreszefqwecuogizaxoormlvweskrfwfyaxzfcrdjuxzcizd", "hntabhvalqkevijtijupnlsyfsykcznjmijqpgqcwcitksmudi", "kquepbwplyoajcluuabmdzoltyfhtkqfdmjunijbizduboowpr", "iurzhmxpvszlxczjyprhqzgvtkkkibbsvureirtejvrjzrsyil", "hakqvgafskgvcdquiandewayharzazkhzxxufzcxjksmokiylv", "drterbeicehnngkldrkfowpgkftsdgphzknrlrzoxhdkppxsgk", "xugpcquxkadbjdlwuzptnmcsyshwmngmjmblexjozorkrcgnbx", "jqllikfpgscmelahzegkugylqsnzhryqhkequjhadmojzoqysx", "kmflxvdmwkdvdlfhdbskdyyrhyfyyzxjlcwkxbywlcrqpyxsbs", "eeqfvxdaxdbuomwkywlwuzynpplpjojqszvnyypydqsserccpq", "ajpzwgqjxaxgqphleglteojyinrnrgdrpusnajwylvgbmooqwz", "lcpucajuncaqwskofmzemkbtlojbgfcsjsolsafhcixyajpfvo", "libndmdmqjtsbcksnesvlwdkvftmmraybdngsqsibnadpnxetp", "bflgrilnuygxwjalpsbjacwdhnqetjvvqhbipnxmndjlmlwdgz", "mgbijlxbrqlnlbwplncizrnkczyycexqmayynvzfokuzoqozds", "ifjvplxnlbriselscyqddeozfcpwbtolyajplifxlwhdcsygtq", "kwwaybcnxfiotioeyzmfyxbidgcdovtaurassefsmqghyulyvz", "dwyhedpggfcbgwsiqnnvfbllimhvmcusyuzeyqlgvpkbnckdrz", "awcojkcqfovbitvjavzncvcoyrskwklyinmszqkgfhhndfxdcy", "qevuuwlngjxuhfhwzhmmnrtxhwegbgernclhyyugjtarbknarz", "ogtkfcilkksqdhsrqsplzbgzshjhiciyldishrerdyigfcxvvp", "iwqpvkyhrglbhwfprmivgltquaurxpgilyzjixszgddnaietwp", "occjuwjpoigwqsvpdfpvfvyikasotqfjtispedeumltefqwkvl", "fcifmsggibxolsyfhcjmzxzubgmxqhkxmscykkfvmcjzwhedlp", "rmmqioyunocylqqoodavyozhnvquzdjssylamjxzyzzlpqbftc", "drqcagasabxltpjesxqpzqqybhodojhraxwcfyufzstujcbdcr", "ubhkbitqnizwbcwzebxbjwtctegukinelurnekfuueqyimxnov", "oxtjbophizsvedrxswjxqeeiemvbblypkualiqstrmqxqiuige", "iwkmeoabrcmstymujwmepdqibiqxtwbbunnadnevrqnlrbfazt", "erwxzzfrzypabjqoltepqxifizgpbgigzhfyikphlekmpadctj", "skgcppdyeegpmfyrfgewopcadragvvpphyrxnuxtbfknkifrrl"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4, 5, 6, 7, 8, 9, 10, 12, 13, 14, 16, 17, 18, 19, 20, 22, 23, 24, 25, 26, 27, 29, 30, 31, 33, 37, 38, 39, 40, 41, 42, 43, 45, 46, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> S = {"aabbb", "aaccc", "bbbcc"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> S = {"bcdefghijklmnopqrstuvwxyz", "acdefghijklmnopqrstuvwxyz", "abdefghijklmnopqrstuvwxyz", "abcefghijklmnopqrstuvwxyz", "abcdfghijklmnopqrstuvwxyz", "abcdeghijklmnopqrstuvwxyz", "abcdefhijklmnopqrstuvwxyz", "abcdefgijklmnopqrstuvwxyz", "abcdefghjklmnopqrstuvwxyz", "abcdefghiklmnopqrstuvwxyz", "abcdefghijlmnopqrstuvwxyz", "abcdefghijkmnopqrstuvwxyz", "abcdefghijklnopqrstuvwxyz", "abcdefghijklmopqrstuvwxyz", "abcdefghijklmnpqrstuvwxyz", "abcdefghijklmnoqrstuvwxyz", "abcdefghijklmnoprstuvwxyz", "abcdefghijklmnopqstuvwxyz", "abcdefghijklmnopqrtuvwxyz", "abcdefghijklmnopqrsuvwxyz", "abcdefghijklmnopqrstvwxyz", "abcdefghijklmnopqrstuwxyz", "abcdefghijklmnopqrstuvxyz", "abcdefghijklmnopqrstuvwyz", "abcdefghijklmnopqrstuvwxz", "abcdefghijklmnopqrstuvwxy", "cdefghijklmnopqrstuvwxyzb", "cdefghijklmnopqrstuvwxyza", "bdefghijklmnopqrstuvwxyza", "bcefghijklmnopqrstuvwxyza", "bcdfghijklmnopqrstuvwxyza", "bcdeghijklmnopqrstuvwxyza", "bcdefhijklmnopqrstuvwxyza", "bcdefgijklmnopqrstuvwxyza", "bcdefghjklmnopqrstuvwxyza", "bcdefghiklmnopqrstuvwxyza", "bcdefghijlmnopqrstuvwxyza", "bcdefghijkmnopqrstuvwxyza", "bcdefghijklnopqrstuvwxyza", "bcdefghijklmopqrstuvwxyza", "bcdefghijklmnpqrstuvwxyza", "bcdefghijklmnoqrstuvwxyza", "bcdefghijklmnoprstuvwxyza", "bcdefghijklmnopqstuvwxyza", "bcdefghijklmnopqrtuvwxyza", "bcdefghijklmnopqrsuvwxyza", "bcdefghijklmnopqrstvwxyza", "bcdefghijklmnopqrstuwxyza", "bcdefghijklmnopqrstuvxyza", "bcdefghijklmnopqrstuvwyza"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 25};
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> S = {"aabc", "abac", "abbc", "abcb", "abcc", "aabb"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5};
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> S = {"aabb", "aacc", "bbcc"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> S = {"aab", "aac", "abc", "cab", "bac"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> S = {"cccd", "ccab", "acbb"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> S = {"aaaabbcc", "aaaaabdd", "aaaaacdd"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> S = {"dbfddbecccfacceafdeaebaffafabdeedfbeadc", "cbbdfbecfacfdccaeccbdedeebdfeafeaaeceef", "ddcddbdeeaeeddcaecdabcfaeafbbeecaecffaf", "edfedbaedcacfdbcdafbddbccdfcdcefcdaebfb", "ddbdeadcddddadcccefeeaebbbbfecdcbaedbaf", "ebdeceabbcdfbfdcfefaadbacaddededfaaeaef", "dccededefdefabdebdaeaefbdeecabeacfceebc", "cdcbafccefcddefaabceeefceacfbdecdacacad", "eaeabdcdebcbedccdfebecedeffafcaecacdedd", "fbbdceafcdabcddadaffcdebadeaabfbdfcfbce", "aedfcbceaaeadacdbbddbdbbeebfaedadaddbdc", "eedaeeaabecafdeecebcaabefbdddaafedecdac", "adafadfeccfefeaedebcecdfbcdafcdaeeebeac", "deadddefaababefcbfcbfcbededbbbaafedccfd", "dfbfeccabcffaaabadfbbfdfacaaabccfcbcbea", "acacdaffbadfeaeadfcfebbffcadcecacbcebeb", "feccafcccabcbcaffbbddcaabdabfcaaffcabae", "ffbfaebedaaedbbebdaebcdfbbdafcecaafafdf", "aaacbcdfedacaffdecfdaaafedaeefcbaaacfee", "bcababbadfbaeacbcbadfdbcedbabdaefbcedbd", "aefacafdbaafbeedbfdbaacbbceffaaffffdcaa", "edddcfbafdfccbaefeeebbddfdebbeeebdcacfa", "eadfefbdafbcefebfffeadaedccbedfefcbaaea", "fbdffebbbfccffdfcbfcddaabdeddccfcffebee", "eedeafaabebcfefbaaaccbcabbcfaebdbbaefbf", "ecfebababcbbbdafeeadccfceffdbbabddddeff", "baadbfebaacbdcaaddefabeabdbfbbabfaedaaf", "bdefaeadabebccadccaaeefaccffabcaffcbcbc", "bebbeebafedaccccfaeafdbbfcbbffbfefdbded", "bceaebfaafcffebcafafcccdfbafddefccfdefa", "fddacfdbfdfcbfcfbeaaebecbfccffbebfdbfbd", "dedbeadfddcdeaaabfaaabaedbcebcdfcaabdba", "cfcdbdbaeabaaaddcdaaabcbdaafdbdcfefebdd", "dabebdaacbdeabaefdbaacddbcfbffbbfcfdbca", "ffbdfecaafdcfddaffcbabbadbfaeeebcafaedf", "cfefaecafdfbfbabbebddadadeccfcdfefbcbbe", "dbedebcdbffabacadbbfcfebabdacfcdaefabaa", "eafdcbcafeaebbffbafaadfdaadefabeedeacfa", "ffedcbdfbeefefdfccdeeaefafcdeccafecbddd", "acceacdfcefbcafbfdcfbfacbdeacefbafeafda", "ddedbbeadabbeafdfdebefefddfefffebdbaedb", "fdbddabcccbebeadaeecffcbbadaccacdfdceab", "fbabedbcdafdfdafccfefcdbbbdfcdcffddebab", "defaefcfaafedebcedbcdebcedafdfecefcdbaa", "aaaddefbdbbcccdfacbeabcedeedefbbafabbad", "fafbecbbeeaededdcbebcfafebeddcfdbfedfed", "bedecdcafceddfedaedaefabebdfebefcaedaef", "dbcebfcbedfbbfeddcbbffcfdeafbdebcaeebbc", "cebcfefbacdfedbfdccaabdbcceeacdebecfadb"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 6, 7, 10, 18, 19, 23, 26, 29, 30};
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> S = {"aabc", "accc", "aabb"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> S = {"bedbfbeadbcbcbfeaaeefcddcccbbbfaaafdbebedddfcbccfa", "febccdccebddcdcfedbfadadcdccdcbaaccadfcbaacabeeaaf", "decefdfcdaecbccbdfefeddbdfdfdbdefdafeffcedcfdfaaef", "edafcbcdbffeccbcbeceaefcddfbdeeffeffabcbfbdbccddad", "cebbfcceeeaaddfacdafcfefeaffcedcacbddecfcafdeceefe", "dbbaefaceaafceaccdacaacfdecfdfdebcedbffeddbacbccca", "ecaaabdabafceeddccafadbabbfbdcbbcffafcaeaeefcbacea", "ccbdcbeccfccacfddeabceffdcabeefebbfbcbbcadeeeccbaa", "abeaaaaabcdbbcaabacdcaaffebbdffeadcebcddeacdaccbcc", "eccdbbfcadcffabffcbcddafbafbfbdeeffdfeaffadeacddcc", "faaddfddadcdfaaeefccdcceeaaaecabaefedafbbbceabccad", "cbdcffcddeeeeecdaebfdbfafdbcffdbbadeddabcefaafbbda", "ebbbfbeebbdeaccbfdffefbbdbfcaccfbeeeddceceadaaeddb", "caadfbdeddfeceafddcdfcbdfabedcdecefcdcebadfacdffaf", "cdccafcfbdbfbcdbcabaffecaafdddbdabfeafdcdfbcbcbdad", "bacfaadacebdccefaedceeffaabcbadcadaeedcacebcadfebc", "eaaddfddbcdefbbffdacbaaaaedaafafdfcaeebdaefdfeafab", "fbbfccbdabceadddcfbdcfcfdfedeeeddeadebbcdbabdeefbd", "acdabeadbefeadaeeeadabfacacffeadabeffedfacdedddafb", "ddcadcaefdaabebfdfdeebfbaccdafeececfedbeabcffbebaf", "febedffdcfcebeaeccfdafdadacbbcfffedcdcefaabbfbffbc", "ccadadeccddbccfecceafefaacfdbbabbaffbbcdedfffcdffb", "ecedbedefeddfcbeccdeecbdfedcbabfdfaebdaffecfacbccf", "eaffbebfedfdaadfccadbabcdfeecebafaeecfbecbcbfdacfa", "fbaedddfaddbeaaafafefaffbdcffffcaeebfbaddcdfcdffde", "eacbdbefabfeddcbffbdbcfebabafccbbfbeafcbffdacdafcb", "ddbcbccacabcbcbcaaaafffcdcfdffccbdfcffbffccfebfcbd", "deaaaecdbadecebfeffdecfefbafefcfedfcbaecabecdaafff", "dbfcefeeeabefdbceaccbcbfdefddcaacfdacfcefddcfcedbf", "dcbebccfddfbcbfdbbcdaffbbcdddecaeceacedafcbbeaedae", "badebcacadfcddcfbfbefefeaddcadbfbedafdcfefffbaecfd", "fcceaabbafebddeaddceaeddeedcfceeceabcfccefebcaaaba", "ebefcceadbafddddefcefedbaabeaccebadcbfaceabbbeedba", "ceffadfbfdcbfbfbbaabcdabebdbdeffdccbfaacdcbdcbedfc", "daddbccfbfbaccdfdadebeecbeddcdefbfacfcfacbbebcbfce", "bddfecebeecabdfbefddddceaeebbfecaffefbaddabecfdecf", "ffcccceacffafafceeecabbfedebfaeeabeabcadfabceafcdd", "dbceaafdaebecbdbfdbaabecdcaacbdfcebbeaeccffffaeedd", "cecaeeceefeacaeefaebdbbaeeaaacddeedcceeadaafbedefa", "aaffeddcbbececaaccefdbfbeeaaddabbfafadbfeebbecbfef", "cfefbcefafcaeddeabfbabdccccbbaadaccffeedbaefbfdbfa", "afcefeebafaeaebcdefbbefdeadffaaffcbdefceccbcacddea", "cdebbcbcaecacfadaebdbbdceecffafadbbcebecfecbccdcac", "fbddbbfdecbbcddcffdcbaedcadddbfadcbccaaabbadeddcca", "cdbaebbbcccbcdbeadcecdfafcdccdbeaaccfddbfdcafbcfde", "ddaadfaafadeebebddcecafceeeabbeceedbbbffcadebadcba", "aeefeccccdbeadbbccabfcbbfafccaaaceabeabadddbeeabeb", "aebafaaebbcbbfefeafdfbaccdadeecccdcfcbbdcecbbebdfe", "aeffaccadecfafadcccedcaadbcccbbcdabdabbbfeeabfbbbb", "ffdddecfbebafceaadafefbddacccbbfeedbbdfcceabaefaff"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 16, 24, 25, 26, 38, 43};
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> S = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "cccccccccccccccccccccccccccccccccccccccccccccccaab", "cccccccccccccccccccccccccccccccccccccccccccccccbba", "abcbcbabacacbacbbabacbbcccbabbaabcaccaaaaacbbbabab", "bcbbabcbbcbabcbccaabaaabaacacacbbaaccaaacbbabbbccc", "bcacbaacbbacbacbabbcbbaaabccccaacaaabaabaaacbacaab", "baccaabccbcacbcaaabcacbccacbabcbaaccbbbaabaacaacac", "babccababcbcabacaaaacccaabbbaababbacbcbccccbbcbbcc", "aabbacbcbcabcacacacbabaabbaabcbcaabccacbbccabbcbcb", "cbcaabbbcacbbacbcaacacacaccabaacacaabbbbaacabcaaca", "acbabacbaccbcccaaccbaccabbcaababbccacaababcbabbcca", "babcbaaabcbbbbacabbcbcbccbcccbcbcbbccabbbabbacabab", "bbbabccccabcacabcabccaababbbccbcbacacbcbcaabcbcbcc", "accacbcabccbcaabbabbcabcccbcbcbaccbababccaacbcacba", "cbcbbcabacbcbabacbcacbcaaaccacbccacaaacbcbcbacaccc", "bcabcabbbcabacbbcbcacbacbaaaaacbaacccbabccabbbcaba", "baccbaacacaaaabaacbabcabccababaaccbbbbbcbcbabbacba", "accaabaaacabbacabccaaaabbaccbacbcbabbbcaaccacbccba", "bccabaccabbcbabcbcbabacccbcbcaaababbabbabcbcaabcab", "bbaaabbcababccababaabccacaacabbbcaacacbcabaabcbbcc", "acaabcacaabaccabaaaabbcabbbbabbbbcbcaccaaacacaaacc", "cccbbaccabccbaabbaacbaaacaccbcbcccbbcabccaaaaccacb", "cbbbcbbbbcbbacbcbacacabaaaccacaaaaccbcccacaabbbbbc", "bbbabbbbbabcbacbcacbcbccabcaccabacbacbcaccabaaacba", "aababcaccbaaacbbabbabbbcccbacaacccbaccccbcaacbbbcc", "cbacbcaaacbacacaacbbacbbcaabaabcccbaabcaacaaaaabab", "bbbbaababcbaacabbbbacaabbcaabcbcbbbbaacbaaaaccabbb", "caabbcbccbabccccbacaabccaaaabababbabaaabcacabbccba", "cbcaabcaaaccccacbcabcaaacccbacccbccbbacaccbbccccca", "cbaaacaababcaccaabababcacbabcbccbccabbcababccbbcbb", "aacaabcbabababacbbaabbabbccaccacbaacbcbbccbbbcbaba", "baaaacbabccbcabaacabccbbbcabccacbcacbabcbbbbbbccca", "cbacbcbaaaaccaabacccccccbaabccbaaaabcaccabbbaaccca", "caaaaaabaabcbbaaaabbcbcccbccaaccbbacacaccbacaabcbc", "cbaccabbbbbbabaaaaaaaaaaaabcbcbaaccbaacbcaababbbaa", "bcbabbaaaccababcccaabcbcbacbaaccbcacccaacbbacaccac", "bcccbccacbbccbaabcccccaaaaacabcbbacacacaabcaaabbbc", "cbcbbccababccaccabcaccaabccbababcbaaaaacacbbbbacac", "babcccacbcbbacabbcaccbbabbbbcbaaaacccabcacabaacaca", "aaabcaccbcbabbabbbcaaacccaaabaabaccabcacabcaabbbaa", "ccccbbcaacbbcaabaaacacaacbabcbcaaacbbaaabbcaaacbbb", "bcbbbabcbaccaacbabcbbcbccbccaccccacbcabcacabbcabcc", "bcaccacccacccacaacbcbbbabbbabbcacacbaaaccaabbaaabc", "cbbcbacbbacaccacbccaaabcbcbccacaacccccbabbbbababba", "aaabaacabcababaaaacacccababcccabbcaababccbaabbcbcc", "bbcbaacbbbbbcbaabbaabcbaaccacaccbaccbbaccabcabbaac", "baabbccaaabbabcabccbcacbaabcbcbabcabaacabaaaabbcbb", "cbcbbbbabcbabaaccaccbccccbccccacacaaccbaabaaaabaca", "aaccacbcbcbccccbabcacbcbacbbacabbacacaacacbcbbaaac"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> S = {"aaaaab", "aabbcc", "aaaaac"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> S = {"aabbb", "abbbb", "aabbc"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> S = {"aabbcc", "aaabee", "ccbbff"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> S = {"aaaabbccc", "aaaaccccb", "ddddddddd"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> S = {"aaabbc", "aabccc", "abbccc"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> S = {"xxxaa", "xxxab", "aaaxx"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> S = {"aabbc", "abbcc", "aabcc"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> S = {"xxyz", "xyyz", "xyzz"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> S = {"aaaaaa", "uyjdkf", "etwrsf", "utyrge", "iyutjg", "fjghyu", "gjtufh", "kyugjf"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7};
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> S = {"ahwmarnqdpaaiguewilzorarzvmgtymkshhvglpkffvdpcdvbx", "jsqcoqzpxbtjgjygupjfgvnnnhqudvoyxebbpqcnhehpbpzoqg", "quuvrtpovsqenplwojybwqkvguihfqwusyuoxqvrxntlwtqrtl", "gzhnxjgletaegilyutdvaifeozyghkarczkvizsfedwaattxbg", "tquydtqdgoyrscidnlnpvztxtzunerdjenklhkxyemfmqtlzad", "zbndxvfrjhsdkmelbxlussyjwtcqviflijuelkbkeyjknthrfd", "xbcckblvosveuqfwtnzkbfuzysrxckktjleuvplgvijedmqlny", "mxtswvoerctxukswfgoetzufcubopmiumfylgrxnuesrzqdsay", "jbjpsxkjqeutdcsyarpmlcbjqvlwovijfgcpttgmgcxhayylxa", "imkctvqnsdpjfzmdvoziahtcckypnkjelmejcccbaxesfluyoj", "parnuosxompbkslldjgzkghdvqlaakwgauodcznfmrxewamvaf", "wwryggotprshrunjepjicsfdibmcdiqeetuigtszjpbvkgybsv", "uhjbxpliamkddpvnzurftuumhfzgrnhenwgvsrdgkvkartbdck", "ymocefubdvxectmhevvozputfmakdpshtharughbutzyqgkgjw", "bpoxvodckizglhjcvwjpdtepzkmcqaqpjuikudwojeacfaghaj", "uaguxhjxrxwjuztuyihwwhcpjpbkfzbmneshhxqxsiootqbyam", "zrfkjcjoarsxbeqnwbeybtrllbjtopxyavbufkfxcyzjxgyvic", "koamfvvwsptncgqiemxrmhteigrnsqppzaolsbmgekfbigqukj", "luztudnvrjbqvpcoiejrxlfnygzgaseuggpsbvavqaisgepogd", "mtzpniwmonlaetypxxuwrhtwrbbifzwseeymavcombuutbxwqk", "iccogowjjguzzcqwqyuqqtkmubbnrijoskigweojwymvudhdfk", "uxnmtuyjpzyruzcwfgzveuugmrbhylgvdhqhetxolckqwdsoop", "yftkeusofrmkchtcdasczbwyywfgvftkarfusewvkgokvcbjrc", "itozlvpzqxptcatsllzvcadpxdfsllaczqmheweyjwjwqvrqkh", "zfhkbjccbtebdjkrnquulwpmbxfijajiwkowucmtswcunqiybb", "ubazlcdfwyencgbphxsrwaouscyhuhubgdwqetivgkemlvclmy", "kfymdagcgbdidzeehkqqhtzfsfvykazizwlitsibgvbumvbjwd", "lzislbbzzlafiynivadiwaxptxtvodsuoztpwrvhqmfxckfytn", "wgkenkrjlzxopkymryuqsvpfuzgddmxlobwqrtanibwukcxieu", "xxtazjwfgwaaeqhsmczyqxqmrptpfnaejfnlpavtxnbsmpgicz", "gsaakuxyrdhisdkikexjrdmjibloblskdwfonvikaeydxpohdk", "ztcwjegqofabqpikepqyvzjdjkzsafiaahswfgvibkkgfwkbyz", "ynsntpansighyiaitlyhhfqbgatatiarjnaneneupmruwtmuto", "opmqnugihztbjtliffbhnwhxblgygctrnxiwgfmdrylliswknu", "eiyxbmrvwhhyvcldtimjzuemqpcygqyrzlrreblebhrqzrgeyw", "hcebynfjgrcauivmxqxrdxknxiqfmhocpkfqiyokfucmtydaxa", "wlepfsophvfzuefdejnvdjvdiurycmirnpaqxdxxuoxpyasmsh", "lshbdghygpirbdkxcpuuxubseluprbrxwhblplkjkwnfxjfpcs", "ftbcogqqmiqabgwionuobwhkoxrngjgvrxgvgftvbpelfivqax", "ujqejumisrbuumgfvsgrptsdyqcnfnnikyqtfeoehqdcmxxgnl", "sswjiipemjksovnohlltoinnesndamnpabxdmdfinzhsrjsfvg", "smsrvawkxgxiitfreyqhuqlxzivvztngexpprgwijfgnmktzuo", "izvxnxqzfdebetgnmtoblzlzlrabiwedkuzskcfjzpowkbqyry", "sgvhxbwnygwxwvnwbbastfmwimplakwiqlcyasaytwlrzoezul", "npisamsokhmuacojsamysfhfdowtmcrlmyttavqcbrjrcxbfmm", "meuydpqefkjezlohqrthzubywzorerpczfusossekklyorbipy", "rjudbidcvfqztunwcgvsdidizxmddaktuaodsjaakkpeeffmcg", "pcrpyikdmfupnfrtnvpwioxyxthtynybdmmzvhxxwsjzqxnqoq", "tvatsqruucakfrosnqesietcbyncqkjdxwihqvgonrrsgzryor", "cgvcjxsqsufgvpcckoemowwqxobmrhbacqredbocpcaqqyhvym"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 6, 7, 8, 10, 11, 14, 15, 18, 20, 21, 22, 23, 24, 26, 27, 30, 32, 33, 34, 35, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> S = {"aaabbccdd", "aaabbbcdd", "cccccccdd"};
    StringGame* pObj = new StringGame();
    clock_t start = clock();
    vector<int> result = pObj->getWinningStrings(S);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23053863&rd=15487&pm=12378
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
#include <cstring>
 
using namespace std;
 
int num[60][60];
bool use[60],die[60];
 
class StringGame {
public:
  vector <int> getWinningStrings(vector <string> S) 
  {
    vector <int> ans;
    ans.clear();
    memset(num,0,sizeof(num));
    int n=S.size(),m=S[0].size();
    for (int i=0;i<n;++i)
      for (int j=0;j<m;++j)
        ++num[i][S[i][j]-'a'];
    for (int i=0;i<n;++i)
    {
      bool flag=true;
      memset(use,false,sizeof(use));
      memset(die,false,sizeof(die));
      die[i]=true;
      for (int rest=n-1;flag && rest>0;)
      {
        bool good=false;
        for (int j=0;j<26;++j)
          if (!use[j] && num[i][j]>0)
          {
            bool mark=true;
            for (int k=0;k<n;++k)
              if (!die[k] && num[k][j]>num[i][j])
              {
                mark=false;
                break;
              }
            if (mark)
            {
              for (int k=0;k<n;++k)
                if (!die[k] && num[k][j]<num[i][j])
                {
                  die[k]=true;
                  --rest;
                }
              use[j]=true;
              good=true;
              break;
            }
          }
        if (!good) flag=false;
      }
      if (flag) ans.push_back(i);
    }
    
    return ans;
  }
};
 
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/