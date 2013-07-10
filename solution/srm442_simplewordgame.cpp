/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10465
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

class SimpleWordGame {
public:
    int points(vector<string> player, vector<string> dictionary);
};

int SimpleWordGame::points(vector<string> player, vector<string> dictionary) {
    int ret;
    return ret;
}


int test0() {
    vector<string> player = {"apple", "orange", "strawberry"};
    vector<string> dictionary = {"strawberry", "orange", "grapefruit", "watermelon"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> player = {"apple"};
    vector<string> dictionary = {"strawberry", "orange", "grapefruit", "watermelon"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> player = {"orange", "orange"};
    vector<string> dictionary = {"strawberry", "orange", "grapefruit", "watermelon"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> player = {"aglsoyomtuigaybxdvujhxwloaatvnfw", "aglsoyomtuigaybxdvujhxwloaatvnfw", "szjzhfoinmbqjipibqrrjuebrelwjmvriznlbhfgpib", "szxfwyfzvawblvgclxcxqodgkmnzdcgyalz", "bmokjqdxqoahjkxrdwttxdyqfnqwnjh", "efrwdigzgpbynrbyvsbosjdxcmmmfzqt", "zuonybprwxpb", "bbzigzsnjyspweoswcfrcmlkspzqetvoiaouhm", "jcqxzsgrtfamds", "oljqtzjldoafegasvsxkytyg", "uyojhmxjprvmznccgmooppznoecjofnuoqqsclajg", "qkvcfwvrfzenlj", "szjzhfoinmbqjipibqrrjuebrelwjmvriznlbhfgpib", "szjzhfoinmbqjipibqrrfuebrelwjmvriznlbhfgpib", "qkvcfwvrfzenlj", "refztgxnirjksyanpoxynamiwjzoylv", "olbqtzjldoafegasvsxkytyg", "bbzigzsnjynpweoswcfrcmlkspzqetvoiaoucm", "jcqxzsgrtfamds", "bbzigzsfjynpweoswcfrcmlkspzqetvoiaouhm", "lvbfkfsbxkvukngjlspeskfqjoszjtwangmvmwcsgmszndlm", "jcqxzsgrtfamds", "aglsoyomtuigaybxdvujhxwloaatvnfw", "qkvcfwvrfzeplj", "refztgxnirjksyanpoxypamiwjzoylv", "aglsoyomtuigaybxdvujhxwloaatvnpw", "jcqxzsgrtfamds", "ailsoyomtuigaybxdvujhxwloaatvnfw", "efrwdigzgpbynrbyvsbosjdxcmmmfzqt", "qkvcfwvrfzxnlj", "olbqtzjldoafegasvsxkytyg", "okbqtzjldoafegasvsxkytyg", "moisuyjvsgeeyqqwdbfrxdjwkdboquss", "yudkadnfnkbbsqyjfheclqtbbrudjcsmmudnkwspvjl", "olbqtzjldoafegasvsxkytyg", "jcqxzsgrtzamds", "aglsoyomtuigaybxdvujhxwloaatvnfw", "yudkadnfnkbbsqyjfheclctbbrudjcsmmudnkwspvjl", "refztgdnirjksyanpoxynamiwjzoylv", "aglsoyomtuigaybxdvujhxwloaatvnfw", "efrwdigzgpbynrbyvsbosjdxcmmmfzqt", "szxfwyfzvajblvgclxcxqodgkmnzdcgyalz", "qkvcfwvrfzenlj", "buonybprwxpb", "moisuyjvsgeeyqqwdbfrxdjwkdboquss", "olbqtzjldoafegasvsxkytyg", "yudkadnfnkbbsqyjfheclqtbbrudjcsmmudnkwspvjl"};
    vector<string> dictionary = {"xuurkcogyrphwamsunkndjfr", "okphkoirhxauoyggcagbkdfssyv", "gaolxwsozpdanyrj", "vyilobrgmwvuljbasmlqswmmwdgsaxvoanzcmj", "refztgxnirjksyanpoxynamiwjzoylv", "szjzhfoinmbqjipibqrrjuebrelwjmvriznlbhfgpib", "njevhtbltzbdqptj", "aglsoyomtuigaybxdvujhxwloaatvnfw", "flwcphzzjhunn", "ccwrwvdaghgbqhcrlqcxdtf", "pfjamuwqblplututwatwkeqjinjjvguywpdcd", "yudkadnfnkbbsqyjfheclqtbbrudjcsmmudnkwspvjl", "jcqxzsgrtfamds", "bmokjqdxqoahakxrdwttxdyqfnqwnjh", "uyojhmxjprvmznccgmooppznoecjofnuoqqsclajg", "qkvcfwvrfzenlj", "ldjjflnmomenbfkmusvthgozp", "bbzigzsnjynpweoswcfrcmlkspzqetvoiaouhm", "neuvukebkch", "xhcazxjwpthkvjjecvywfcmaq", "lvbfkfsbxkvukngjlspeskfqjoszjtwawgmvmwcsgmszndlm", "pqcwphxkltoybhwwmofbwnixkpxsgkehejdtuqrjrzyfy", "buzwmozxaffullccasdwvggclbzkmqylyrqnrvkszrg", "abwipsllczhfuapfdmgylknvp", "olbqtzjldoafegasvsxkytyg", "sfmauvknoyrpkwlzyugbli", "efrwdigzgpbynrbyvsbosjdxcmmmfzqt", "ruyqzzavmefbxlboakghsbgetpphwhsxgbiwicojhnrowraamp", "pfngtcybfh", "mqlglohuafudimfrrjxhiwhfkughuabgccphbplxuybqtanshf", "moisuyjvsgeeyqqwdbfrxdjwkdboquss", "ezdkznznmt", "ucrdwdhutafaozaetqnwseeuck", "htqcujbtdwmqocnhsbterupwevfebgyuwmbcokznxevjkxmaka", "ruzcqldbdqan", "ybwwroegedfvkposmthmrjflxvr", "dhowsuexsckikvykkvjoaibhougzrjmjipq", "szxfwyfzvawblvgclxcxqodgkmnzdcgyalz", "spzvmwzczpjlofucbqeoxkr", "buonybprwxpb"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 11749;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> player = {"sxggsqrgiuafrefyabjjhggek", "xqxqcxhrknswojy", "ejjgbmsoutdppvpkrveelkuerei", "nxlrgzapxp", "wwdhcffeijocxqxxsohkogcjc", "payiyitknimollwdiqmumkhtzujhunhpgtrrcoyvfuch", "nxlrazapxp", "zpijywgbyygbdyfjwlnkorio", "sxggsqrgiuafrefyabjjhggek", "zpijgwgbyygbdyfjwlnkorio", "lbndagcremxfrwdjdoppkvipcwqtzoqzyzytxgvmqxbzgeie", "jzoukcrawrclijjullaouljxheykdgdgtichcfsallyqqv", "aopyficknahpyioaqjvgqwwfewizsuwhwprmr", "wwdhcffeijocxqxxsohkogcjc", "izvabqhigceiawcaxxhcavlkknydtfmowpsluhz", "lbcdagcremxfrwdjdoppkvipcwqtzoqzyzytxgvmqxbzgeie", "oedhiprebllcjnxmyafbxfqsndhrba", "ziysesswgftomrsmzdzpzbmgjyyihomhaszjm", "pzcvzzpynvjayueohwzzbhlafqxhcabxzpxirvhnovivtqmfoa", "aopyficknahpyioaqjvgqwwfewnzsuwhwprmr", "wxnfbnqczpoxpxizrzzcmbjsvtblqra", "wwdhcffeijecxqxxsohkogcjc", "ziysesswgftomrsmzdzpzbmgjyyihomhaszjm", "grrutegpqdimcccdcbmscydikx", "payiyitknimollwdiqmumkhtzujhunhpgtrrcoyvtuch", "aopyficknahpyioaqjvgqwwfewnzsuwhwprmr", "bfhalwknnykviztah", "ruqtkpvgzkaeljdvsslrjiyhvvi", "oedhiprebllcjnxmyafbxfqsndhrba", "wxnfbnqczpoxpxizrzzcmbjsvcblqra", "pzcvzzpynvjayueohwzzbhlafqxhcabxzpxirvhnhvivtqmfoa", "ziysesswgftomrsmzdzpzbmzjyyihomhaszjm", "dgcfumctcubuesuzcvpraljvtrwvekpinwlenuqthvzikj", "bfhalwknnykviztah", "grrutegpqdimcccdcbmscydikx", "ziysesswgftomrsmzdzpzbmgjyyihomhaszjm", "ruqtkpvgzkaeljdvsslrjiyhvvi", "payiyitknimollwdiqmumkhtzujhuhhpgtrrcoyvfuch", "dgcfumctcubeesuzcvpraljvtrwvekpinwlenuqthvzikj", "grrutegpqdimcccdcbmscydikj", "nxlrazapxp", "zpijywgbyygbdyfjwlnkorio", "xsjivtstkrmumqutfhhmyuktyievpgebjqdhlqpsmxyd", "ziysesswgftomrsmzdzpzbmgjydihomhaszjm", "ejjgbmsoutdppvpkcveelkuerei", "wxnfbnqczpoxpxizrzzcmbjsvcblqra", "bfhalwknnykviztah", "sxggsqrgiuafrefyabjjhggek", "dgcfumctcubuesuzcvpraljvtrwvekpinwlenuqthvzikj", "izvpbqhigceiawcaxxhcavlkknydtfmowpiluhz"};
    vector<string> dictionary = {"ziysesswgftomrsmzdzpzbmgjyyihomhaszjm", "msyynainbt", "zcjzibcppkmlzytylsjnreotzghpmiovigpvsccpqo", "vqettkqoisjijfcqhnbjhfxukwlpqrybjjlgiuwevvccnxc", "grrutegpqdimcccdcbmscydikx", "yahytemqldpunymjxgrxzfkdvdatv", "bqkkhinmnropwp", "ngheqezowctgcpcofnmx", "hjwshqabpdaak", "oedhiprebllcjnxmyafbxfqsndhrba", "xqxqcxhrknswojy", "uurukjvmul", "bhjjmkdhenxrbvnampqbmov", "mgmujyokzrdwzxkqeseapyjxruqtatnwdugte", "izvabqhigceiawcaxxhcavlkknydtfmowpiluhz", "yfrppvhdghobpmln", "xsjivtstkrmumqutfhhmyuktyievpgebjqdhlqpsmxyd", "cpscloqryxrhafrexvevqkfsvxcqiubxekuiykeo", "qipvmqnuitybpdvhjcriyaysmqlmpajcdpcw", "dgcfumctcubuesuzcvpraljvtrwvekpinwlenuqthvzikj", "lbcdagcremxfrwdjdoppkvipcwqtzoqzyzytxgvmqxbzgeie", "hlvdnfrhqzkodptjixhwhwvcxjncdunkzjjxwnddwqrpngj", "evhnuavcruopiuojjfiblzyqwvvmlixvjzg", "zpijywgbyygbdyfjwlnkorio", "jguxuejzfngneoocj", "sxggsqrgiuafrefyabjjhggek", "wxnfbnqczpoxpxizrzzcmbjsvcblqra", "pzcvzzpynvjayueohwzzbhlafqxhcabxzpxirvhnovivtqmfoa", "wlxnfsassqmxisxerhbbopin", "payiyitknimollwdiqmumkhtzujhunhpgtrrcoyvfuch", "aopyficknahpyioaqjvgqwwfewnzsuwhwprmr", "bpnmsskeldukclexgkhzvkbhbw", "jzoukcrawrclijjullaouljxheykdgdgtichcfsallyqqv", "ejjgbmsoutdppvpkcveelkuerei", "ercyqnbtsmo", "nxlrazapxp", "bfhalwknnykviztah", "gamlisffzyqvfhg", "cahxilbcvkgvchmjswqxqtkikoberv", "frjyyewjlcbinvozjqhmdbbqeabanuwygmagxkrxzgez", "arteqdqrqxovouv", "ruqtkpvgzkaeljdvsslrjiyhvvi", "wwdhcffeijocxqxxsohkogcjc"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 22081;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> player = {"upcjopqxfayjrr", "lfpvbiijvxdnavqnuslytkvbxnuyjpfzo", "mqiytncqdxwnqqhfckjfg", "dzjsfjgkrkudpvehzdllsry", "xcckrwhztnxikdbmglitohkojicfgxf", "zqiytncqdxwnqqhfckjfg", "upcjopqxfayjrr", "svufkstyorbexyhaxtcxlzvmohhzkf", "ornqhxukwgdmeltumzngadxjnnrtmdbbykufgfasqmi", "lgcxuiellgurtwvprberoyurijkrvqwrbfneqocontekc", "wbmblngumhtrki", "svufkstyorbexyhaxtcxlzvmohhzkf", "mqiytncqdxwnqqhfckjfg", "ruxvpfzilomfltbfxkbfyxqikgentzilkdxwvndlrnl", "cltsmszikdfmnwqcuefmmcsijwzqbozcnbdgzdrfmfiwq", "cltsmszikgfmnwqcuefmmcsrjwzqbozcnbdgzdrfmfiwq", "umybovjqwueggi", "mqiytncqdxwnqqhfckjfg", "dzjsfjgkrkudpvehzdllsry", "dgryzpgtzifygkvvhsuyxiidqrhvzcufutfgoaedlrcpml", "zddseaseebdgl", "gcgfetzyybiseveoefqvwbmsyhyarnggmrhnljnwloworxag", "yneylgypyjuyamklyuzoaqhdniucfmuzgubgcbim", "zddseaseebdgl", "lhpvpousofcydfnpvpuztqulyvh", "gcgfetzyybiseveoefqvwbmsyhyarnggmrhnljnwloworxag", "xcckrwhzhnxikdbmglitohkojicfgxf", "upcjopqxfayjrr", "dgryzpgtzifygkvvhsuyxiidqrhvzcufutfgoaedlrcpml", "svufkstyorbexyhaxtcqlzvmohhzkf", "lfpvbiijvxdnavqnuslytkvbxnuyjpfzo", "ornqhxukwgdmeltumzngadxjnnrtmdbbykufgfasqmi", "lhpvpousofcydfnpvpuztqulyvh", "umybovjkwueggi", "mhzaakzyenjvmgovzopmtjpf", "umybovjqwutggi", "xcckrwhzhnxikdbmglitohkojicfgxf", "hlskjnfrwqozvtvxfrkjdlbvssryvmb", "dzjsfjgkrkudpvehzdllsry", "cltxmszikgfmnwqcuefmmcsijwzqbozcnbdgzdrfmfiwq", "mqiytncqdxwnqqhfckjfg", "lgcxuiellgurtwvprberoyurijkrvqwrbfneqocontekc", "lgcxuiellgurtwvprberoyurijkrvqwrbfneqocontekc", "upcjopqxfayjrr", "lfpvbiijvxdnavqnuslytkvbxnuyjpfzo", "mhzaakzyenjvmgomzopmtjpf", "fjzpbkguxquhbuffaypfcpyye", "dgryzpgtzifygkvvhsuyxiidqrhvzcurutfgoaedlrcpml", "lhpvpousofcydfnpvpuutqulyvh", "gcgfetzyybiseveoefqvwbmsdhyarnggmrhnljnwloworxag"};
    vector<string> dictionary = {"mhzaakzyenjvmgovzopmtjpf", "qiglokkaikkehyalkzyqqzdnbd", "lgcxuiellgurtwvprberoyurijkrvqwrbfneqocontekc", "gbslmhihfhqnpjcqqbncwzxfbhomoolkuwbbooyjjztgzpqfn", "gnpsghfqmyoxulzxurwpcpnqovajy", "gcgfetzyybiseveoefqvwbmsyhyarnggmrhnljnwloworxag", "lhpvpousofcydfnpvpuztqulyvh", "mqiytncqdxwnqqhfckjfg", "dgryzpgtzifygkvvhsuyxiidqrhvzcufutfgoaedlrcpml", "qdhkbgdsajzlgjzuoxtjdeuizzlbyfvkm", "wbmblngumhtrki", "xcckrwhzhnxikdbmglitohkojicfgxf", "yneylgypyjuyamklyuzpaqhdniucfmuzgubgcbim", "xomtbwkpuassqpkfnriwntyteukzmjcnpbedjlby", "svufkstyorbexyhaxtcxlzvmohhzkf", "cltsmszikgfmnwqcuefmmcsijwzqbozcnbdgzdrfmfiwq", "lfpvbiijvxdnavqnuslytkvbxnuyjpfzo", "vdayzqfenqbwayhcikwjdm", "hlskjnfrwqozvtvxfrkjdlbvssryvmb", "uhurdzghvtqarjyhgngrlwunsrnkekmvktlmoomfshuegoltyv", "zddseaseebdgl", "yrkgnaxfhdryeacsgdoendvzmqcvxhc", "upcjopqxfayjrr", "rgiskvlpxtxphxucuqw", "fjzpbkguuquhbuffaypfcpyye", "zgylqcawobcnldtlpepozmaxhw", "gkkzqlwzcogpyvxjniptbuks", "wyjvqzpmlktgtxtncbzbththzhkgpgfetknycgzejsmql", "kxohdupbxm", "whdjcyxnriirpidsvkcxk", "flcjfslgzgqisxxbmyh", "ornqhxukwgdmeltumzngadxjnnrtmdbbykufgfasqmi", "dzjsfjgkrkudpvehzdllsry", "ujubpgqjhrqnwlhlnh", "bebqrmvycqjaywilesngszawlkwnprqgfkifkax", "xpgydhvllrktrjrrhrtzallzbckgkjyzduaoxrqgqxfrvxen", "soqelpxomgplkdxvhvyhmpmmqmmaamegafflmwlqacgwigezq", "emwdmhxjkmna", "esfcyqfnkxgtjdlijvcnucheretntbemlr", "godnqmxrgrjxtzntyzwqkqvmyvwyfyleawuxb", "ienehcdiko", "elusdeptozuzojmldepxevgjqxjrknroogtqhc", "cuqvmkatcxhjw", "xkxhaxfifi", "rziizqtquixeqwemimpgmvgkjvpsuyixcehxfmle", "umybovjqwueggi", "ruxvpfzilomfltbfxkbfyxqikgentzilodxwvndlrnl", "wyelafyyxxvgnnmwxtocvzsg"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 15237;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> player = {"jqennzrljor", "bcinhqlmvazkvjkqwgppwgpxpvilvrbyajyaqtflyajdsd", "eojbzhhxksrthcfjixlac", "gqsnqynqjsmgmfpnqcanmozwtfmpjdxxoxqxolex", "bcinhqlmvazkvjkqwgppwgpxpvilvrbyajyaqtflyajdsd", "qavhinndvrahqqibyngxwsruwuycjdo", "mvvhjdpwcxxmnbrsfugjcpnbnvxloavjbftrx", "jqennzrljor", "eojbzhhxksrthcfjixlac", "zlhdzqemvkuomdxfdtrmceskpowuzpgmfrucllimuazgo", "voazprjrfb", "sciqjfkrgiaxkxs", "aqrefqrbcgjoerlcaet", "qavhinndvrahqqibyngxwsruwuycjdo", "voazprjrfb", "biynjnsmdcwoibwikuzhmkqmuswmrvssqxj", "uxcdknrtymdpelupfyzrilysamxdbmipkcekrqhesgybkp", "gyzoooeatsoeo", "gqsnqynqjsmgmfpnqcanmozwtfmpjdxxoxqxolex", "gyzoooeatsooo", "eojbzhtxksrthcfjixlac", "ertwlnigrjuw", "biynjnsmdcboibwikuzhmkqmuswmrvssqxj", "gyzoooeatsoeo", "eojbzhhxksrthcfjixlac", "sbtngoyymwttsgdifwwffzmhpqgwxvczblm", "gxcssvnecgqspmhrraaaneehkemxrvdw", "dutgxvgwkhatmmyn", "kvafkqjomcpvbescvzdkyzyzgxkktllba", "knthchrlflklqmhddil", "gyzoooeatsoeo", "duagxdgwkhatmmyn", "eojbzhhxksrthcfjixlac", "sciqjfkrgiaxkxs", "qavhinnuvrahqqibyngxwsruwuycjdo", "sciqjfkrgiaxkxs", "artwlnigrjuw", "kvafkqjomcpvbescvzdknzyzgxkktllba", "gqsnqynqjsmgmfpnqcanmozwtfmpjdxxoxqxolex", "eojbzhhxksrthcfjixlac", "qavhinndvrahqqibyngxwsruwuycjdo", "eojbzhhxksrthcfjixldc", "cahmtgiibwbrgausotj", "dutgzdgwkhatmmyn", "kvafkqjomcpvbescvzdvyzyzgxkktllba", "gyzoooeatsoeo", "cahmtgiibwbrgaosotj", "sbtngoyymwttsgdifwwffzmhpqgwxvczblm"};
    vector<string> dictionary = {"xjjfnrkwujosurhjqbhllswbikk", "hdvtwzqyhxqwncmqvnjyspfywhhnbrnmmdggcwrtbxslblvk", "sciqjfkrgiaxkxs", "kvafkqjomcpvbescvzdkyzyzgxkktllba", "mlprthswwejcqzirtcdeexqltgyzxbfepg", "qiuxgzfaimazrjaetoieiquky", "unsscjqupzszw", "voazprjrfb", "oarymxwuzomhtatqq", "qavhinndvrahqqibyngxwsruwuycjdo", "eytdrbgeucelpgyqyxwypgzlqujybrcjlpusxou", "biynjnsmdcwoibwikuzhmkqmuswmrvssqxj", "kmlkyxhpsjadso", "umtxbffcyeevwurrebxderzhyu", "uxcdknrtymdpelupfyzrilysfmxdbmipkcekrqhesgybkp", "kbpsmdxwjwrvgnhg", "frpkevazdenyzsxammsaxrfxbpyc", "tpdtfjqaplpvihf", "dutgxdgwkhatmmyn", "bbrrmbyhqalusxzyuxz", "eojbzhhxksrthcfjixlac", "govpwkterliediladz", "mbvvbrlbtpdxryoxozchaybopyjhhnypwhylnpromfieoscnl", "gqsnqynqjsmgmfpnqcanmozwtfmpjdxxoxqxolex", "zlhdzqemvkuomdxfdtrmceskpowuzpgmfrucllimuazgo", "maxqkkogadsmpmjysxzrqfqvgrxlbsxkhdoowlqcjxbapiuiy", "jqennzrljor", "pftetfbugifpxkckjdgprpvcdgqybftoguacbtjiyloak", "exeflnrlrrpvndhazdvdczsfdxongvtaknmevsfta", "bcinhqlmvazkvjkqwgppwgpxpvilvrbyajyaqtflyajdsd", "gyzoooeatsoeo", "fyeasbkneug", "gxcssvnecgqspmhrraaaneehkemxrvdw", "rqybhplpwymdpdgqgrcdelkuxtvbduj", "dlycvtexjivhlcwscassndjcbtxrocnodj", "kofmbifjcq", "aqrefqrbcgjoerlcaet", "knthchrlflklqmhddil", "fitdvnlihnetdpwxhtoraqovnvntefbovlaowcxuzirujbv", "sbtngoyymwttsgdifwwffzmhpqgwxvczblm", "cahmtgiibwbrgausotj", "uzeqgygsxvxydkkgixwnswjcmnzzvtfftnehihqijfkaxsvfy", "nrkynxdonofzvujpvzvveevmwvy", "ertwlnigrjuw", "mvvhjdpwcxxmnbrsfugjcpnbnvxloavjbftrx", "mxuspfuxmxqmpgntoppjjeucelqilv"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 14917;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> player = {"ulncjmwyypibtfbh", "augadwfbiginiqsrivobibjifytntuwvoj", "lqvosdhvvaryvdalwzlntjpskbjrvwlez", "ndlzdrzbrlzvbglshtviynmihvrmmjqzfctcnwyklubakoq", "odipimbfvnusqjbrdwlgiqjvizppvcurh", "rtjrfgivjpazvttfxnpiozkqzyblgukmbzeljvtaddcokvcots", "wrxzjrnzkhvodevehykjetwwgpy", "nmktdzhcuuddgnezfcrdggmzjtkpls", "xsxvbejtuyundnversyqzswwoadewyexviixom", "ejljadlzzazeoewmpltbjvcqxktc", "odipimbfvnusqjbrdwlgiqjvizppvcurh", "ndlzdrzbrlzvbglshtviynmihvrmmjqzfcthnwyklubakoq", "spsrfqoavoumzfwartdrzgtpo", "jejiuxhjdcfekqifgkkcqnah", "rtjrfgivjpazvttfxnpiozkqzyblgukmbzeljvtaddcokvcots", "hwhrvktydsdmjmvxeceikomqenscwdrcozukulugnh", "ulncjawyypibefbh", "yesxaahtnayqze", "xsxvhejtuyundnversyqzswwoadewyexviixom", "ulncjawyypibtfbh", "wrxzjrnzkhvodevehykjetwwgpy", "avjptktnyeaobccanbbqtrisqcrbfkinoherxxmseo", "odipimbfvnusqjbrdwlgiqjvizppvcurh", "xsxvbejtuyundnversyqzswwoadewyexviixom", "avjptktnyeaobccanbbqtrisqcrbfkidoherxxpseo", "jejiuxhhdcfekqifgkkcqnah", "hwhrvptydsdmjmvxeceikomqenscwdscozukulugnh", "yesxaahtnayqze", "eqgtpgbypoccowvivrbgv", "avjptktnyeaobccanbbqtrisqcrbfkinoherxxpseo", "jejiuxhjdcfekqifgkkcqnah", "fiaafvjfshzlfjmltpoliwrxnijlockuzubchigfv", "lqvosdhvvaryvdalwzlntjpskbjrvwlez", "spsrfqoavoumzfwartdrzgtpo", "nmktdzhcuwddgnezfcrdggmzjtkpls", "wrxzjrnzkhvodevehykjetwwgpy", "sstenrxxtojvurwnpxpcxptynybb", "kjelodttydeivixzzbimwlecbjowsrir", "ndlzdrzbrlzvbglshtviynmihvrmmjqzfcthnwyklubakoq", "ndlzdrzbrlzvbglshtviynmihvrmmjqzfcthnwyklubakoq", "owmzpqfabcxbtpyhpjiea", "yesxaahtnayqze", "ejljadlzzazeoeympltbjvcqxktc", "spsrfqoavoumzfwartdrzgqpo", "kjelodttydeivixzzbimwlecbjowsrir", "mgcwefukrngeyjxlkmat", "xsxvbejtuyundnversyqzswwoadeoyexviixom", "avjptktnyeaobccanbbqtrisqcrbfkinoherxxpseo", "eqgtpgbypoccowvivrbgv", "mgcwefukrngeyjxlkmat"};
    vector<string> dictionary = {"ejljadlzzazeoeympltbjvcqxktc", "kohgaqzqiqlqdqjapicedodihteeujyp", "kjelodttydeivixzzbimwlecbjowsrir", "tbsoxxzcbsfuyfvuzmuwdlqydpdxsebmtjkxcxliaaajli", "odipimbfvnusqjbrdwlgiqjvizppvcurh", "wrxzjrnzkhvodevehykjetwwgpy", "mxkzmkwglkutb", "tzfdehezdoiztsddlzjtgxarozaxjahebegzyjdyckcbhvus", "nmktdzhcuwddgnezfcrdggmzjtkpls", "sstenrxxtojvurwnpxpcxptynybb", "yesxaahtnayqze", "vcidcpyirzm", "pfeveivbvtjzrjhderpcdcbcxlrvfmqfmizahw", "fiaafvjfbhzlfjmltpoliwrxnijlockuzubchigfv", "avjptktnyeaobccanbbqtrisqcrbfkinoherxxpseo", "ljsbmjlwvpkrunprntewgxwaksyrdibckl", "hwhrvptydsdmjmvxeceikomqenscwdrcozukulugnh", "olokjtissudqqvoeupasgphgy", "yvoxlpzdmjewlhpracxnnkejwxxpkfgjdmpjl", "mgcwefukrngeyjxlkmat", "xsxvbejtuyundnversyqzswwoadewyexviixom", "mitgdixktskzdaaysjortqknqpivgmscprebkbprxechx", "xnivnknbbnicojtbifqtcxikm", "eqgtpgbypoccowvivrbgv", "lqvosdhvvaryvdalwzlntjpskbjrvwlez", "ndlzdrzbrlzvbglshtviynmihvrmmjqzfcthnwyklubakoq", "salcfgmaagdbwewengokyngjfdlcbhjol", "owmzpqfabcxbtpyhpjiea", "oecibzhjsanjtsldkblqbwwvxazwrwtjktif", "yqciyhzppmakoodzypxuenrixwczpb", "sobtglqbqjrvkltntkvcupvzlbtfmcuebzdhzzjnsgwmck", "augadwfbiginiqsrivobibjifytntuwvoj", "xajpflnovfwakriukflweceaiwejvmvkkynswwc", "sqfvtumtzgjuoajmjpyhejiunqnlpwixpeqlawtxrtgikyt", "ojyoezlyrswzhfpnqjnuyyvvjwjtjldgansnskabvphdbpifba", "pstopxidahfsoffjbmqfujcv", "ulncjawyypibtfbh", "vtdqfynbnguelvqwphaovwpav", "ziarnufqwcklj", "nfsmqupdpyvctbvy", "gdhmtkyvurftmqvfzfqquuthwy", "jejiuxhjdcfekqifgkkcqnah", "rtjrfgivjpazvttfxnpiozkqzyblgukmbzeljvtaddcokvcots", "coipvubaxh", "qqgmchxzrmwyknobyu", "fyrdkcvxxjdgnbjohgzvpxdbobodiwrbl", "srdhmpkgeytnoeexasdyxvk", "agkqurqhlwhxehlaiphizhhwhgvmsytnd", "hwywaraddyzljgcetnmyidnx", "spsrfqoavoumzfwartdrzgtpo"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 18407;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> player = {"lodkvpcuxxrgdfzs", "wgxbxjbpzecgcxtwfablaxsalsyflsocrnycdcjvxlmwn", "npjhrxheyukwjjraxptbcmsktnvifoxiezmohvkoazli", "zywssfhwjiqckagyzinjznqk", "goxaclhdopxqghcevd", "goxaclhdopxqghcevd", "gcycjlgcwxujpjjollufbgdihpuicbpphcuaj", "gdfmjokxkkbjzminlbnfxsjwosryihykukaxxgauzjuk", "sfkxzceruwsekw", "lodkvpcumxrkdfzs", "eddunptmklkhiiwkjgvwhasukgoxvwediomtbjdabz", "cfkxzceruwsekw", "bahocokckvkiieypznfmbgnqzjrflsuvckakcocb", "gdfmjokxkkbjzminlbnfxsjwosryihykukaxxgauzjuk", "gcycjlgcwxujpjjollufbgdihpuicbpphcuaj", "gcycjlgcwxujpjjollufbgdihpuicbpphcuaj", "nirwstkypkmzvpyzhtwtucdqyvr", "gdfmjokdkkbjzminlbnfxsjwosryihykukaxxgauzjuk", "eddunptmklkhiiwkjgvwhasukgoxvwediomtjjdabz", "gcycjlgcwxujpjjollufbgdihpuicbpphcuaj", "eddunptmklkhiiwkpgvwhasukgoxvwediomtbjdabz", "ndypmjeqnhfnquzofgatzoynzhdqasbojxmtjjynlnxznf", "vabyarajhlxrtdbkqlfkpdbguebowbgesk", "zywssfhwjiqckagyzinjznqk", "nlpsyzlcegsn", "ndypmjeqnhfnquzofgatzoynzhdqasbojkmtjjynlnxznf", "rbspbdunjhccyaiqghgqmwhhpkegjoiccokeoxenwozkyjnhx", "fxuxorgzknzfbkingsfrx", "vabyarajhlxrtdbkqlfkpdbguebowbeesk", "fxuxorgzfnzfbkingsfrx", "wgxbxjbpzecgcxtwfablaxsalsyflsocrnycdcjvxlmwn", "nlpsyalcegsn", "byutdjmunzzwaabndelbrlhxizkacrycykxgzgx", "zywssfhwjiqckagyzinjznqk", "cfkxzceruwsekw", "nydctsulhbrvqxgpdxbmmvsbzupovzwlwsopqpenqco", "nirwstkypkmzvpczhtwtucdqyvr", "nnmwjfbihxzjasxlhhgiizxprrvbixzlqusgkimciosumgigt", "nnmwjfbixxzjasxlhhgiizxprrvbixzlqusgkimciosumgigt", "wgxbxjbpzecgcxtwfablaxsalsyflsocrnycdcjvxlmwn", "nydctsulhbrvqxgpdxbmmvsbzupovzwlwsopqpenqco", "nirwstkypkmzvpyzhtwtucdqyvr", "nnmwjfbixxzjasxlhhgiizxprrvbixzlqusgkimciosuugigt", "wgxbxjbpzecgcxtwfablaxsalsyflsocrnycdcjvxlmwn", "ndypmjeqnhfnquzofgatzoynzhdqasbajkmtjjynlnxznf", "ndypmjeqnhfnquzofgatzoynzhdqasbojkmtjjynlnxznf", "fxuxorgzknzfbkingsfrx", "goxaclhdopxqghcevd"};
    vector<string> dictionary = {"nirwstkypkmzvpyzhtwtucdqyvr", "vabyarajhlxrtdbkqlfkpdbguebowbgesk", "nnmwjfbixxzjasxlhhgiizxprrvbixzlqusgkimciosumgigt", "awldtapfcgcsfimlqtbsfd", "pnomkesgzaouaehqxqscyjfrwszt", "nlpsyzlcegsn", "qxcxixjvobycli", "nydctsulhbrvqxgpdxbmmvsbzupovzwlwsopqpenqco", "xhnhwwpvkvxhspbqfuksfimvblfnvdwqbhhliaq", "svdwcjssecfvgjxcvxljmnhfuuypcpcdkeglrt", "bwfevftractdyeacegpuihjbdzvnqwgmupjossjmstjv", "hfsdltkvkeifveghitc", "demeubsedpjulhirtdntm", "ispwfhymrmowdnmlsfkju", "ddjncnceosxqtbnwjbmltkohxoayprzmnytubeqiuyzsdk", "gcycjlgcwxujpjjollufbgdihpuicbpphcuaj", "nhnjvrhtklintmpgefevolhofkkknzqtueeiynyxywxckxitn", "bahocokckvkiieypznfmbgeqzjrflsuvckakcocb", "goxaclhdopxqghcevd", "lodkvpcuxxrkdfzs", "zwlmldtfjvptpweslcdsgepuigkyjqgnw", "cfkxzceruwsekw", "zywssfhwjiqckagyzinjznqk", "fxuxorgzknzfbkingsfrx", "azdyqaefnrdyqkhkewmsxhehhppxkciqwilijlnegflpmbggaj", "bkyydyuhikdqw", "npjhrxheyukwjjraxptbcmsktnvifoxiezmohvkoazmi", "mwqslurdzinfajayqdbkdwckqvhfyiqlonv", "gdfmjokxkkbjzminlbnfxsjwosryihykukaxxgauzjuk", "brwiwbpsizpnituwybwyxumpy", "gptxqxsjiuiwl", "eddunptmklkhiiwkjgvwhasukgoxvwediomtbjdabz", "ndypmjeqnhfnquzofgatzoynzhdqasbojkmtjjynlnxznf", "eethqmfrxibopbhfosdtdiqhzth", "uxaxocmeodwshdknvoaaqnmlehgoawdlcxapbc", "ojiniqroezp", "byutdjmunzzwaabndelbrlhxizkacrycykxgzgx", "rbspbdunjhccyaiqghgqmwdhpkegjoiccokeoxenwozkyjnhx", "wgxbxjbpzecgcxtwfablaxsalsyflsocrnycdcjvxlmwn", "psbkivqtihsgchhvazivjc"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 18547;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> player = {"auofqrgasqbtmgjopfnzwglx", "wzysrxeimrnluodunyoio", "wlwmlystiqzvfuswjiduhcwamgbmcykasbzmigvgssoc", "biwhyfguztntrlquxqbzbuzutoraobbpizdodrdysocjpxjxdc", "akxmtrdsineggvmndrhrfcuvfqyem", "akxmtrdsineggvmndrhrfcuvfqyem", "ismjkryijwksxiyzxytniuwoxauvznjicljgyvaspwihksm", "wzysrxeimrnluodunyoio", "lfefsoqbfulfrzvpgtcdwlypaaabykviqwqpzjaa", "biwhyfguztntrlquxqbzbuzutouaobbpizdodrdysocjpxjxdc", "auofqegasqbtmgjopfnzwgkx", "tuxqjmqfpevsvpuoyephhzmdswhtssekunovjwd", "wlwmlysziqzvfuswjiduhcwamgbmcykasbzmigvgssoc", "auofqrgasqbtmggopfnzwgkx", "lfefsoqbfulfrzvpgtcdwlypaaabykviqwqpzjaa", "lralnzukckdhhmtoyvhtwdyeuwquhtnngxacaxhhx", "fqclbwgzhndiyinnijvcwnjsgkubozfitqlcdjguihx", "ismjkryijwksxiyzxytniuwoxauvznjicljgyvhspwihksm", "ismjkryijwksxiyzxytniuwoxauvznjicljgyvhspwihksm", "kebircjyvzdpsczd", "wzysrxeimrnluadunyoio", "gulsghutamtukxyxsvmsygoxzdniycvdhx", "uisofjjatdlkvfxamx", "lfefsoqbfulfrzvpgtcdwlypaaabykviqwqpzjaa", "tuxqjmqfpevsvpuoyephhzmdswhtssekunovjwd", "akxmtrdsineggvmndrhrfcuvfqyem", "akxmtrdsineggvmndrhrfcuvfqyem", "ismjkryijwksxiyzxytniuwoxauvznjicljgyvhspwihksm", "wgisnwsjyjbzibodnrslctqbrjpdepstdalmhjcndhohbxmeo", "gulsghutamtukxyxevmsygoxzdniycvdhx", "biwhyfguztntrlquxqbzbuzutoraobbpizdodrdysocjpxjxdc", "mhihrseenuyfgwfk", "biwhyfguztntrlquxqbzbuzutoraobbpizdodrdysocjpxjxdc", "mhihrseenucfgwfk", "wgisnwsjyjbzibodnrslctqbrjpdepstdalmhjcndhohbxmeo", "fqclbwgzhndiyinnijvownjsgkubozfitqlcdjguihx", "ismkkryijwksxiyzxytniuwoxauvznjicljgyvhspwihksm", "wlwmlysziqzvfuzwjiduhcwamgbmcykasbzmigvgssoc", "lfefsoqbfnlfrzvpgtcdwlypaaabykviqwqpzjaa", "uisofjjatdlkvfbamx", "lralnzukckdhhmtoyvhtwdyeuwquhtnngxacaxhhx", "tlmaokqutqblheztzfatntwtdgnzwtder", "wlwmlysziqzvfuzwjiduhcwamgbmcykasbzmigvgssoc", "gulsghutamtukxyxevmsygoxzdniycvdhx", "wlwmlysziqzvfuzwjiduhcwamgbmcykasbzmigvgssoc", "lfefsoqbfulfrzvpgtcdwlypaaabykviqwqpzjaa", "tuxqjmqfpevsvpuoyephhzmdswhtsfekunovjwd", "fqalbwgzhndiyinnijvownjsgkubozfitqlcdjguihx", "lralnzukckdhhmtoyvhtwdyeuwquhtnngxacaxhhx", "akxmtrdsineggvmndrhrfcuvfqyem"};
    vector<string> dictionary = {"lfefsoqbfulfrzvpgtcdwlypaaabykviqwqpzjaa", "oqozmkgfmktliwrvgrtpdfyztlqrlqooa", "tlmaokqutqblheztzfatntwtdgnzwtder", "wzysrxeimrnluodunyoio", "inmucipntjavjmhqgxnazozuaomg", "gtlhceaueocxqjakgogmnfuanuiyprv", "wlwmlysziqzvfuswjiduhcwamgbmcykasbzmigvgssoc", "syaoejvigbkrrkyjkzoesrislajeoolomngotjpxscyqh", "qmsfkbifszhavqdxzkltqowpdcnc", "biwhyfguztntrlquxqbzbuzutoraobbpizdodrdysocjpxjxdc", "nwcghkcxqeucygmzeozglhjhjkllytrfzkeumbvyu", "ntgppggyjjgclshziskrvqucnawpvbzznqsxdcqnzdi", "gulsghutamtukxyxevmsygoxzdniycvdhx", "cuglmqkexpnqnhofyillhuxnmaborgxwcz", "epxaxyfqqkyijyd", "uisofjjatdlkvfxamx", "fqclbwgzhndiyinnijvownjsgkubozfitqlcdjguihx", "kebircjyvzdpsczd", "ismjkryijwksxiyzxytniuwoxauvznjicljgyvhspwihksm", "dzwagitfsffhxukpmcbjrakwcafuoipopolybqnl", "tuxqjmqfpevsvpuoyephhzmdswhtssekunovjwd", "rorukhlyroaqdxi", "meyawlvyvlmumfeffzzrtfsonvtopx", "wpmtyjgxxpiqtfzasxaptsk", "zhpysltojxaqqapwlxopngquosuxdqjcbiqmtbx", "vtmosbhripnhthbrbfnkucufrdwehqbhvwykvwuinetbihxke", "auofqrgasqbtmgjopfnzwgkx", "xlodjioiafqpnqjfiwcabectk", "epvtapiamajvjco", "jcgpvycocjslaylczllbmvswecioguyxavssrfgghayjft", "byezvktxohcajsli", "xomqtoaitgnaqgv", "wgisnwsjyjbzibodnrslctqbrjpdepstdalmhjcndhohbxmeo", "qacgxrkvkpyipcqgbmszdhttcktfdtvk", "akxmtrdsineggvmndrhrfcuvfqyem", "rfyqadrobezmopx", "rmupcghxwurbhasjpjrxwjxmulvzwurhivcrhwqkxkbxu", "yzfcvxmupbystnngwtacsfvlqazvkwoosxufrfzfdkwyapwrof", "mhihrseenucfgwfk", "lralnzukckdhhmtoyvhtwdyeuwquhtnngxacaxhhx"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 20060;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> player = {"rhxjvqkteiwfikzxbffmahnykewghhjkjioprvpat", "qxeyvufdejplhnloewkuhektuztkyhpkdxirc", "fymkbkfvvtup", "lmynclgdcoiujqsyfssbwgkiwzkfnjuhoapfezvhzlet", "dusjovyyeklhcmtjzficatmvudoyoeodvpblmadxe", "xbkujdqrqktnyvrektau", "jxuurrnbpxjovzqipzzzkxclafugqbuqwhhwzcudsvzvf", "brhvvkfuysyfxsqusewwgnlfjawezjpmghygssctmbo", "qxeyvufdejplhnloewkuhektuztkyhpkdxirc", "rhxjvqkteiwfikzxbffmahnykewghhjkjioprvpat", "ckvpooysxlydo", "etbnqygztldcdhatjscsdlmowjnowlctmtt", "fymkbkfvvtup", "gpozfomzzaahjtxymlgjvxfa", "rgtsnenpnkboqok", "lmynclgdcoiujqsyfssbwgkiwzkfnjuhoapfezvhzlet", "zjumyjlipchjlvszcnbadaspulgvejqgr", "rhljvqkteiwfikzxbffmahnykewghhjkjioprvpat", "etbnqygztldcdhatjscsdlmowjnowlctmtt", "rhxjvqkteiwfikzxbffmahnykewghhjkjioprvpat", "fymkbkfvztup", "xbkujdqrqktnyvrekfau", "dqakmqebwmcujozjcjswobkvbsgvjbzsblhtuwmsvqilaqzp", "zjumyjlipchjlvszcnbadaspulgvejqgr", "hrmcdoyecihhoqtovktnfxwdbyccijsloonewdlggfwnxjhuj", "rhxjvqkteiwfikzxbffmahnykewghhjkjioprvpat", "ckvpooysxlydo", "slszodujgqkejkqpvkjvm", "ccbzathvldofeamwaslcfyhzowbjw", "iupljnrnwhpuixp", "sukyqwbgymykjtsrsbstvrbjzynviselve", "dusjovyyeklhcmtjzficatmvudoyoeodvpblmadxe", "fymkbkfvvtup", "dusjovyyeklhcmtjxficatmvudoyoeodvpblmadxe", "rgtsnenpnyboqok", "hrmcdoyecfhhoqtovktnfxwdbyccijsloonewdlggfwnxjhuj", "xbkujdqrqktnyhrektau", "dqakmqebwmcujozjcjswobkvbsgvjbzsblhtuwmsvqilaqzp", "etbnqygztldcdhatjscsdlmowjnowlctmtt", "qheyvufdejplhnloewkuhektuztkyhpkdxirc", "qxeyvufdejplhyloewkuhektuztkyhpkdxirc", "hrmcdoyecihhoqtovktnfxwdbyccijsloonewdlggfwnxjhuj", "slszodujgqkejkqpvkjvm", "qjuzcyrnytsmfjthitckffvfivklpphwwhitedrfwwfpcoq", "qjuzcyrnytsmfjthitckffvfivklpphwwhitedrfwwfpcoq"};
    vector<string> dictionary = {"hohuxceuupdciiitqmhaxpcdhfmqcakmnzc", "iupljnrnwhpuixp", "sukyqwbgymykjtsrsbstvrbjzynviselve", "qjuzcyrnytsmfjthitckffvfivklpphwwhitedrfwwfpcoq", "gnqifogxyjanglnrqzajtqfgrglxzz", "cltjuiovnajzbaxovwpvhlaaeyqekasnnbrdavmddv", "lltdrswjskxpacvifl", "ccbzathvldofeamwaslcfyhzowbjw", "rgtsnenpnkboqok", "fzujllojxq", "hvhqkugkytnfcwczwxdrtyfrqpdqeosfzual", "etbnqygztldcdhatjscsdlmowjnowlctmtt", "hemkdiwdivujtldogobxahhlofzzfau", "cnfcwfdgohxcsuuquwxcicrv", "slszodujgqkejkqpvkjvm", "bokwtbrosenfipqkhhwwkzyxuakswcyhowzrpzwiwvuqbzu", "effyhbsrnymodvslje", "hlowwnxoeauyuzsgsowegucbecyopb", "brhvvkfuysyfxsqusewwgnlfjawezjpmghygssctmbo", "rjroffxebvmzfymoaxofmqomykfzvlwx", "ajkcqjzjfajnzwux", "kluhhsyxrzdkznlgbswcqkpfvnpsudxqwzgukgsqynud", "ckvpooysxlydo", "zjumyjlipchjlvszcnbadaspulgvejqgr", "febjijtruezbhuiijzhdrfbmrzbg", "jvcniericfswfkzqxi", "nyrmdvjmvxfxbvzehdsfngmu", "tzkwrkkmbcgmfxpfsxus", "ugjsjdkcduyamoj", "vkyjggernrulgaoqznfllatwdbw", "ecgwqeqlkqtqknlshmxubqbqodpzs", "ldzqkvtryzd", "veppeezffqdotdvtunualnfpqp", "jxuurrnbpxjovzqipzzzkxclafugqbuqwhhwzcudsvzvf", "gpozfomzzaaljtxymlgjvxfa", "dusjovyyeklhcmtjzficatmvudoyoeodvpblmadxe", "xbkujdqrqktnyvrektau", "qxeyvufdejplhnloewkuhektuztkyhpkdxirc", "utgorsbdwursvpbqfipxw", "iysohcpbropzrycs", "rycfswckvqgl", "cflzndpjwxvdgjefqrjhrxmyhufjksfxtkwgxgwb", "rhxjvqkteiwfikzxbffmahnykewghhjkjioprvpat", "fymkbkfvvtup", "hrmcdoyecihhoqtovktnfxwdbyccijsloonewdlggfwnxjhuj", "dqakmqebwmcujozjcjswobkvbsgvjbzsblhtuwmsvqilaqzp", "aodekajobkiumgxnlmzufqyfxrkhgmcvqbbvzladdejdoasbh", "lmynclgdcoiujqsyfssbwgkiwzkfnjuhoapfezvhzlet", "fwjzflmikyqomzcaghzkemxjsfywykgvmla"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 23370;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> player = {"lzcjugtttegkhsjbqdkfeeukyngxe", "xnawjqesriughgjjhwoxrxwpfmohndvfmrynctzb", "sansphuwfcvwbrqwxviqnxdtkbmunprsfiskuigfp", "wavgixdeyqni", "idsesqcbnbo", "wavgixdwyqni", "meetiiarxjzrhzyhmtjnwucgwsplrfnfasvg", "ottpvbupmubwdliufgcgqfxuqydtnrcixfxkiukh", "yldvkwseflpgdzrgrxhwhvfjtffknseaxhokvalk", "aqckmzwofibvkxsuawbtyciiqaeombjtfyulsozklg", "ottpvbupmubwdliufgcgqfxuqydtnrcixfxkiukh", "fzcjugtttegkhsjbqdkfeeukyngxe", "xuchgaobxuaeqjvcr", "ljygnjogulabggzsubilrcry", "meetiiarxjzrhzyhmtjnwucgwsplrfnfasvg", "ottpvbupmubwdliufgcgqfxuqydtnrcixfxkiukh", "ottpvbupmubwdliufgcgqfxuqydtnrcixfxkiukh", "xnawjqesriughgjjhwoxrxwpfmohndvfmrynctzb", "yldvkwseflpgdzrgrxhwhvfjtffknseaxhokvalk", "fzcjugtttegkhsjbqdkfeeukyngxe", "idsesqcbnno", "ottpvbupmubwdliufgcgqfxuqydtnrcixfxkiukh", "sansphuwfcvwbrqwxviqnxdtkbmunprsfiskuigfp", "idsesqcbubo", "injebusgsztidypnirddrxiiiaqamephuouaxjqzugzxefh", "ipcpltofcjpxjblxptntuqszfkhvzlffbrypyqrvajmliqabeu", "jggyvgejuqfigxjxhtfvcwsvsxhpac", "lvpnpaibtvdzmdzbinmzvgqjksdgqby", "ieflkrjvwhiicpyduarvehu", "jggyvgejuqfigxjxhtfvcwsvsxhpac", "lvpnpaibtvdzmdzbpnmzvgqjksdgqby", "ibigphujgerqjfmeotfszynnru", "wavgiddeyqni", "fzcjugtttegkhsjbqdkfeeukyngxe", "ibigphujgdrqjfmlotfszynnru", "fzcjugtttegkhsjbqdkfeeukyngxe", "fzcjugtttegkhsjbqdkfeeukyngxe", "sansphuwfcvwbrqwaviqnxdtkbmunprsfiskuigfp", "wavgixdeyqai", "sansphuwfcvwbrqwxviqnxdtkbmunprsfiskuigfp", "tgfrlvdpoqqbtqkpbrxrerivlracsjaj", "sansphuwfcvwbrqwxviqnjdtkbmunprsfiskuigfp", "jggyvgejuqfigxjxhtfvcwsvsxhpac", "xuchgaobxuaeqjvcr", "xnawjqesriughgjjhwoxrxwpfmohndvfmrynctzb", "yldvkwseflpgdzrgrxhwhvfjtffknseaxhokvalk", "aqckmzwofibvkxsuawbtyciiqaeombjtfyulsozklg", "ibigphujgdrqjfmeotfszynnru", "ottpvbupmubwdliufgcgqfxuqydtnrcixfxkiukh", "xuchgaobxuaeqjvcr"};
    vector<string> dictionary = {"tgfrlvdpoqqbtqkpbrxrerivlracsjaj", "ojrynkhiuqvgevdqnwixvfyzvvfajnzpyhddza", "phffyaydrmlykjganlngbyabcgwj", "izadywhlxccrtcdy", "iyvfddhpswjtfvvdueweqptqphpifxlr", "wavgixdeyqni", "fmlnxwmtzsercbpdqswnonkrigtvbkdbxlewjbcawhbok", "sansphuwfcvwbrqwxviqnxdtkbmunprsfiskuigfp", "fzcjugtttegkhsjbqdkfeeukyngxe", "jtljrbryyewljimnmvldewcuhnzyydahtpuveevckaysgxnml", "ipcpltofcjpxjblxptntuqszfkhvzlffbrypyqrvajmliqabeu", "jlqmbvgkqehzsmbcvmlqaay", "hpivatlsctajvvnimwfoodqolb", "aqckmzwofibvkxsuawbtyciiqaeombjtfyulsozklg", "ieflkrjvwhiicpyduarvehu", "mnwnhhxzxfdotibmodosliwbxrypi", "vpewuzetmvjofzbrtvmnzbuukafjqywplgtbutojxtouy", "vsewmwuvdclqbinqvgxlpwbanwpns", "ottpvbupmubwdliufgcgqfxuqydtnrcixfxkiukh", "idsesqcbnbo", "gikfcajkcsxjcbouelpirgg", "ljygnjogulabggzsubilrcry", "xuchgaobxuaeqjvcr", "yldvkwseflpgdzrgrxhwhvfjtffknseaxhokvalk", "ffpasmzmblvn", "rsarghenxnifyqisgwggukqxzcuvtqlwfqk", "xnawjqesriughgjjhwoxrxwpfmohndvfmrynctzb", "mnoazfpgnjjhhvidefglhexxtxxsfbivqpqhkuyqrrbjhmkzg", "ifmdxuqujodhompjkwssdxwaxlynyrtgrljsvzmqs", "nnqwjxmlbuydxfryuybmhvsnqkgttyywf", "cxruqwcntzyckkegtjalyffiklpsqzlwuojx", "jggyvgejuqfigxjxhtfvcwsvsxhpac", "gwvkzxexymyjvqfsvejgusfwkqkekknndqzobjfrntcawskwa", "meetiiarxjzrhzyhmtjnwucgwsplrfnfasvg", "ibigphujgdrqjfmeotfszynnru", "lvpnpaibtvdzmdzbpnmzvgqjksdgqby", "rzzopxrllleuyum", "ddqpcfnsjas", "injebusgsztidypnirddrxiiiaqamephuouaxjqzugzxnfh", "gofmcyyhgmndvveezyzezcgreypzmge", "lpjwlphnmimhrubrapwizuxzzbkbbvri"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 18102;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> player = {"rgycpdqmysrwcmsrayrldoxfgacsey", "qbbmzixgmqqdokaknsffd", "kdmdakjozfexhqacwgljrfqvllzkoppmcyctluffxnapnngwi", "ehnfvgylauarnwbvysbexzcspaumstodqkutvp", "jtkzklkpwdoalwceuzndfghnjurcmwgfe", "wzauyopawjyxymrnmrqms", "ehnfvgylauarnwbvosbexzcspaumstodqkutvp", "htawycbgrqdzgpsyxzvffwijopgbfdpnyaimaz", "zkilxnfcsyykewupvkgysmulvkvllzcfwtfjxrkwrnsxx", "gubawsagllfyyskcxyyrpsziddixwpshqbckyypx", "nhsothgtergbieahgxgvixpugpp", "ghhnpdadpkekscypzaveswuneufpydtafqcimhgyndsoq", "uhsothgtergbieahgxgvixpugpp", "htawycbgrqdzgpsyxzvffwijopgbfdpnyaimaz", "unjqxtuwrayugyjjotipaxxlfgtunqwjqaphkbdim", "kdmdakjozfexhqacwgljrfqvllzkoppmcyctluffxnapnngwi", "ygdwcapuxxcuzaxwsizymvdzoahwroa", "oxpulgmarzi", "unjqxtuwrayugyjjotipaxxlfgtunqwjqaphkbdic", "tsmfemvmhxc", "etfsevwfckaorohc", "ctzuazjcexliavffluezisvddln", "sbhzjkftjkpuzdywiyttypxldddcezyedee", "htawycbgrqdzgpsyxzvffwijopgbfdpnyaimaz", "unjqxtuwrayugyjjotipaxxlfgtunqwjqaphkbdic", "ghhnpdadpkekscypzaveswuneufpydtafqcimhgyndsoq", "kdgdakjozfexhqacwgljrfqvllzkoppmcyctluffxnapnngwi", "ghhnpdadpkekscypzaveswuneufpydtafqcimhgynksoq", "unjqxtuwrayugyxjotipaxxlfgtunqwjqaphkbdic", "uhsothgtergbieahixgvixpugpp", "jtkzklkpwdoalwceuzndfghnjurcmwgfe", "kdmdakjozfexhqacwgljrfqvllzkoppmcyctluffxnapnngwi", "ocpulgmarzi", "ctzuazjcexliavffluezisvdrln", "etfsevwqckaorohc", "wuceialkioibnjeasltgogzgpklwzhqvlzvisxytl", "sbhzrkftjkpuzdywiyttypxldddcezyedee", "qbbmzixgmqqdokakcsffd", "kzkwjueitploifnenihjgegtlhisiiwvktviwzfyjpagxojgra", "etfsevwfckaorohc", "rgycpdqmysrwcmsrayrldoxfgacsey", "kzkwjueitploifnenihjgegtlhisiiwvktvzwzfyjpagxojgra", "kbxlbipjckqdkdvcnctqwzizfztbcgvjmihkvboek", "rgycpdqmysrwcmsrayrldoxfgacseh", "wzauyopawjyxymrnmrqms", "qbbmzixgmqqdokaknsffd", "tsmfsmvmhxc", "tsmfsmvmhxc", "ctzuazjcexliavffluezisvdrln", "unjqxtuwraywgyjjotipaxxlfgtunqwjqaphkbdic"};
    vector<string> dictionary = {"rirwctceaucvv", "gubawsagllfyyskcxyyrpsziddixwpshqbrkyypx", "ghhnpdadpkekscypzaveswuneufpydtafqcimhgyndsoq", "arsgxkejcizcudcmhedzpkainqdyhiyegbevnie", "ydfwcbuvlostulqfwedfggvldhevjavfqbbzzpkkcplibrh", "ppkkcoagjiqxhzqtodq", "wzauyopawjyxymrnmrqms", "ehnfvgylauarnwbvosbexzcspaumstodqkutvp", "ygdwcapuxxcuzaxwsizymvdzoahwroa", "ynbvrymahsaespnutgfauaelcntisjacjndutollhyw", "mseqxgatpvoxsdnuplfnbsjeyhu", "atdidxkdsldafbddirdrhvmocmudcrjtlbohpagpm", "ctzuazjcexliavffluezisvdrln", "hzswxqarcpgnvlbwlsdy", "wuceialkioibnjeasltgogzgpklwzvqvlzvisxytl", "ubxlbipjckqdkdvcnctqwzizfztbcgvjmihkvboek", "scmoxvhruxyvehrrwjxarktalegrrkobepsodemxnwp", "qcjragudpxlebvxdojsiglnygxyleaacyruxusxgflblmxcnzu", "tyekogviszfnzggkzr", "sbhzjkftjkpuzdywiyttypxldddcezyedee", "kdmdakjozfexhqacwgljrfqvllzkoppmcyctluffxnapnngwi", "uhsothgtergbieahgxgvixpugpp", "unjqxtuwrayugyjjotipaxxlfgtunqwjqaphkbdic", "etfsevwfckaorohc", "qbbmzixgmqqdokaknsffd", "jtkzklkpwdoalwceuzndfghnjurcmwgfe", "frjqaqfbgtqsahkkyipaelehzrgnclindyreqnkuo", "cdpumpucosplwkklgmvefshtfwhamklviphucprty", "erkedmuxyoagpxscbggyhcbudysdhlvrltoquuvonhzxlgrji", "uyeacdpniboposjqqtlggsrpebeohfomtliwxfwuq", "wutiujcogwafl", "sscujjfzciwfrymwlwexnfymedl", "htawycbgrqdzgpsyxzvffwijopgbfdpnyaimaz", "qgkpdbhoqae", "kunihiluumz", "rgycpdqmysrwcmsrayrldoxfgacsey", "kzkwjueitploifnenihjgegtlhisiiwvktvzwzfyjpagxojgra", "bhlutruvrowlfwafycggqodkogfgemdxlmxmgamxaoktbrlh", "ocpulgmarzi", "zkilxnfcsyykewupvkgysmulvkvllzcfwtfjxrkwrnsxx", "tsmfsmvmhxc", "lphikgxnasvlysshr", "gdjymxdmarfpultstageswrzmgqzfxadzgrawd"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 20533;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> player = {"vbqgrbegnnkskadhucwsuwmvmuhvscnhcwlzqtlrhxntdsji", "ghwhzcuvqylzzgnzlbnbqynv", "kdcdweqmbto", "juvjcfnijckianiprcasxivclyka", "vzwoxskkvy", "juvjcfhijckianiprcasxivclyka", "nxxckplnaymwcmzd", "krelnwisamfhmzxxatyifkcjgumtmlygibewkxiirjghpi", "ictzwkyqwizvxhddcnwrbzplvmmoetteqpscjdvgx", "nxxckpluaymwcmzd", "nxxckpluaymwcmzc", "seuvgaeoafsusoaigdehhckyixtjjzpk", "chsojexoniuficzbgluolql", "uqklbuwajxp", "poktnrcyeermdvoccvkdemotsunguleekjieoblvd", "poktnrcyeermdyoccvkdemotsunguleekjieoblvd", "uqklbuwlhxp", "chsojexoniuficzbgluolql", "uqklbuwahxp", "vbqgrbegnnkskadhucwsuwmvmuhvscnhcwlzqtlrhxntdsji", "chsojexonzuficzbgluolql", "xfvswnndexxzus", "sbjfcchkikokmbvzvibwczqfwwvmxkaltinnbzfd", "juvjcfhijckianiprcasxzvclyka", "hwnpsvgoddepvkumtaof", "sbjfccukikokmbvzvibwczqfwwvmxkaltinnbzfd", "uqklbuwahxp", "juvjclhijckianiprcasxivclyka", "krelnwisamfhmzxxatyifkcjgumtmlygibewkxiirjghpi", "aefvcwqifrdbnfr", "aefvcwqifrdbtfr", "rfcaqlvubxhsfzmkglz", "hwnpsvgoddepvkumtaof", "ictzwkyqqizvxhddcnwrbzplvmmoetteqpscjdvgx", "hwnpsvgocdepvkumtaof", "nxxckplugymwcmzd", "rfcaqlvubxhsiumkglz", "juvjcfhijckianiprcasxivclyka", "ictzwkxqwizvxhddcnwrbzplvmmoetteqpscjdvgx", "poktnrcyeermdvoccvkdemotsunguleekjieoblvd", "ictzwkyqwizvxhddcnwrbzplvmmoetteqpscjdvgx", "aefvcwqifrdbnfr", "ghwhzcuvqylzzgnzlbnbqynv", "yshovleemciahyamdcygqmuvjdqmrnl", "zqklbuwahxp", "seujgaeoafsusoaigdehhckyixtjjzpk", "ictzwkyqwizvxhddcnwrbzplvmmoetteqpgcjdvgx", "ghwhzcuvqylzzgnzlbnbqynu", "ictzwkyqwizvxhddcnwrbzplvmmoetteqpscjdvgr", "rfcaqlvubxhsizmkglz"};
    vector<string> dictionary = {"hwnpsvgoddepvkumtaof", "phrfqiufbuukeegypyseszklhedhrydbroqggcdzicivju", "chsojexoniuficzbgluolql", "poktnrcyeermdvoccvkdemotsunguleekjieoblvd", "ghwhzcuvqylzzgnzlbnbqynv", "vzwoxckkvy", "msaifwbmqydybqrtmqlmgztyaqwxnczi", "hbcihguhwffjdusx", "rdgxluahfywzoixccjdrdqyfknxzvxdtxlsoaahckanr", "zkmhnwlvcnztyctygjdofxodmjwgb", "zlhuatidiconxqfiudlcfeuyfcokbdstx", "weiajmmzylqlmsqaismgpytrejmvnuzvxnxloocdbxq", "juvjcfhijckianiprcasxivclyka", "iiyihtwkuzsnoslhzuedyjdxftmlitireluregyqbbcng", "jxfynodpsfk", "uqklbuwahxp", "ictzwkyqwizvxhddcnwrbzplvmmoetteqpscjdvgx", "sbjfcchkikokmbvzvibwczqfwwvmxkaltinnbzfd", "aefvcwqifrdbnfr", "rfcaqlvubxhsizmkglz", "ejrrsypmflmsczuwzhsznmegxfnuwprqayiaaxcafdieab", "bdanklesnartkslpdmrmkjsituhqcqdovryiaqw", "yshovleemciahyamdcygqmuvjdqmrnl", "zpglyaaqzhygtbxfsvjxyolhiqdimjuhrzmtfpemtnehnh", "uztbdjrgaxlcyebvyhrdcozlycm", "krelnwisamfhmzxxatyifkcjgumtmlygibewkxiirjghpi", "kfnymfwahnlkkjlxhogacakqtevqitmmaq", "kdcdwecmbto", "xjjfovqidkypglnmoizrmr", "diorqmdpqajqnzjzuplolhujxbxfs", "vtcgukwdizwmzodormcngbyntytwicgqseolxsg", "ookhjqjdxxqrzchjtoiriejhneldfvotjqgkclzsixpwlz", "seuvgaeoafsusoaigdehhckyixtjjzpk", "xfvswnnyexxzus", "omaskrfbynbyyapq", "eiqzebbhhlecmxvsmtqfzzlmvjlgllkjmepgulrrzgzsikf", "bztiiahmwimzhbukxhikb", "ugahusigyatifpntbxaugawwbnydk", "ervmaavkemygxuefbleqetzhihnbhmvkousqnbt", "ltfivwxfycefngxz", "vbqgrbegnnkskadhucwsuwmvmuhvscnhcwlzqtlrhxntdsji", "ndcqaxysztoqhhpcsiqxyztjgcvwzxjpj", "nlpvlvnuezauukvfcjuitipki", "txrxanrrmyjdspefriwfcmeixoykhhsooxyrkyngtlii", "dilvnbgxetwgaqepbnptleruapcdgwdjmilnqbpfu", "fbbnbrztjhjyzhegzfldgzbvqezqreemznqhhojcwf", "lkwjpngqwjxouwf", "urgflyqgqsrmsfqrgcf", "usdqkrxxxzeltxdmmwymxtuawvdqblrimzbfvttzuamthsrp", "nxxckpluaymwcmzd"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 14619;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> player = {"pepkvnzvuyqgfwwmlbbydyrrupaysefcvpajiqmdfvrfuuc", "rpglldwflqcbwkspfqurlizetwjiapiwxwmszmocwd", "otoaosbjuceooplvrdpoqqoylaaogbqsatmuniidsc", "pepkvnzvuyqgfwwmlbbydyrrupaysefcvpajiqmdfvrnuuc", "otoaosbjuceooplvrdpoqqoylaaogbqsatmuniidsc", "vlifaeuwpikekoadryfkkedgvloaqwlhfaujwckayk", "bbqbxcmuhslo", "udoulvgfsnlxxpvnnnhxj", "cbembnvvrvj", "rpglldwflqcbwkspfqurlizetwjiapiwxwmszmocwd", "cnwnfxhiituykeujbkxleydmohnowfrscrqtya", "cbembnvvrvj", "otoaosbjuceooplvrdpoqqoylaaogbqsatmuniidsc", "bbqbxcmuhslo", "otoaosbjuceooplvrdpoqqoylaaogbqsatmuniidsc", "jlzvucisneitdgtvtwxpzoidio", "vfbzjhgmpbrpsecnw", "adhnxwsqdsxxozvnnqovzkaabbftefozwajoze", "otoaosbjuceooplvrdpoqqoylaaozbqsatmuniidsc", "wfznntxdleyvemggyrnldtdcdwhvoxsbgn", "jqywdnjrphrxkuwdyuovhfkfbdzwyrgkmfwdbempz", "cbembnvvrvn", "vlifaeuwpikekoadryfkkedgvloaqwlhfaujwckayk", "jqywdnjrphrxkuwdyuovhfkfbdzwyrgkmfwdbempz", "bccgrhechxkkfhmgmwzcersgtwxgdvoblmwzrqfpf", "bccgrhechxkkfhmgmwzcersgtwxgdvoblmwzrqfpf", "jlzvucisneitdgtvtwxpzoidio", "hisdorqdshfmoywuiydsnevvsuobenxrppgiuslguza", "pepkvnzvuyqgfwwmlbbydyrrupaysefcvpajiqmdfvrfuuc", "otoaosbjuceooplvrdpoqqoylaaogbqsatmuniidsc", "cbembnvvrvj", "udoulvgfsnlxxpvnnnhxj", "bccgrhechxkkfhmgmwzcersgtwxgdvoblmwzrrfpf", "lnkkpjwsxczyfedrmywvivcyqbnkrxrbpiffbevzahwne", "udhfeczdpszkuuqnjdlbcrekoij", "cbembnvvrvj", "vlifaeuwpikekoadryfkkedgvloaqwlhfaujwckayk", "otoaosbjuceooplvrdpoqqoylaaogbqsatmubiidsc", "wfznntxdleyvemggyrnldtdcdwhvoxsbgn", "adhnxdsqdsxxozvnnyovzkaabbftefozwajoze", "otoaosbjuceooplvrdpoqqoylaaogbqsatmuniidsc", "vkmpgdzlvnr", "bccgrhechxkkfhmgmwzcersgtwxgdvoblmwzrqfpf", "jqywdnjrphrxkuwdyuovhfkfbdzwyrgkmfwdbemwz", "jlzeucisneitdgtvtwxpzoidio", "unmmhuxswmhueeerdffnufvgsyulouhcotwigubyqixggli", "udhfeczdpszkuuqnjdlbcrekoij", "vfbzjhgmpbrpsecnw", "bbqbxcmuhslo", "cbembnvvrvj"};
    vector<string> dictionary = {"adhnxwsqdsxxozvnnyovzkaabbftefozwajoze", "vfbzjhgmpbrpsecnw", "rpglldwflqcbwkspfqurlizetwjiapiwxwmszmocwd", "bqhwofnkuqjuwbvuurbqwgcqpsqgyzypgdaf", "uyhqrxmtigkxcqlscmgcagtclu", "gxxbnbqfrhndmhxdvacy", "sprpssxbordiwtkihyrcoebdsdnjzsmdljmxa", "unmmhuxswmhueeerdffnufvgsyulouhcotwigubyqixggfi", "llgheauoejykpmtfetz", "udhfeczdpszkuuqnjdlbcrekoij", "wfznntxdleyvemggyrnldtdcdwhvoxsbgn", "ejnsdbwoewzulkyeddcvsmtmdyj", "dyryzyxgrylieuadatqjagnvhizffcmydpqgdcppjlrnztlmff", "gwftrfmbdblhzzuejlzsl", "pepkvnzvuyqgfwwmlbbydyrrupaysefcvpajiqmdfvrfuuc", "afqkjpxydjxje", "otoaosbjuceooplvrdpoqqoylaaogbqsatmuniidsc", "cjnqyfgrpihvzxkzbuvxypqzmsmhewwudjhlqpdpkgti", "jqywdnjrphrxkuwdyuovhfkfbdzwyrgkmfwdbempz", "vhwufikgtnbemftyept", "kvrpsexsredugjoahefacmgoybnux", "bbqbxcmuhslo", "hisdorqdshfmoywuiydsnevvsuobenxrppgiuslguza", "vlifaeuwpikekoadryfkkedgvloaqwlhfaujwckayk", "jwadcsareixfsl", "cbembnvvrvj", "iubmupkcnuclxefgaydsvrdzqjb", "ofauwbuzujsonwcs", "igqloqgbpzjuwsgwjvgssepcujmfpiux", "oblqquxzthgoleqbrhocrmieadmcsyrjsckgcwgydzwcgzzbj", "lisxxrcbolyupgq", "jlzvucisneitdgtvtwxpzoidio", "dylrlespbsv", "ifiaexltcoumavcfdwtuhkzswmu", "kxwdabwmpgimlvikexufzdlrscrufzifsdyrkgmqelz", "vkmpgdzlvnr", "lnkkpjwsxczyfedrmywvivcyqbnkrxrbpiffbevkahwne", "sfavvbtewytammalgbyhyoienfictobh", "udoulvgfsnlxxpvnnnhxj", "ktvzrkaljfszcuuwjj", "cnwnfxhiituykeujbkxleydmohnowfrscrqtya", "etalnytrvpvanenqfwllpbfrnpzadzpgchotybhmkgd", "bccgrhechxkkfhmgmwzcersgtwxgdvoblmwzrqfpf", "qnwlwjjrxybwvjecupoipdngdwoys", "jwqhvhxvdenrb"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 17833;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> player = {"yscttcqffgodunqetyvoqffhhco", "aasrwntqcmqkjqdkqvpugdpgzyadziatakqtativw", "rhcrijfhmtpzkaxtlufrvcpfdq", "hxagzbvebphlztdznyeqoegaauqqerkgp", "rhcrijfhmtpzkaxtlufrvcpfdq", "rhcrijfhmtpzkaxtlufrvcpfdq", "rhcrgjfhmtpzkaxtlufrvcpfdq", "jvzotdypyyjzguejpztdspodvmqxejfrxmv", "cljwlwdonopchone", "hizyqxtausneschvsgiqswfzuct", "cljwlwdonopczone", "jvzotdypyyjzguejpztdspodvmqxejfrxmv", "lftptcvncjqpezlnvmkpizir", "aasrwntqcmqkjqdkqvpugdpgzyadziatakqtativw", "cljolwdonopchone", "hizyqxtausneschvsgiqswfzuce", "cljwlwdonopchone", "jvzotdypyyjzguejpztdspodvmqxejfpxmv", "rhcrijfhmtpzkaxtlufrvcpfdq", "rhcrijfhmtpzkaxtlufrvcpfdq", "hizyqxtausneschvsgiqswfzugt", "duouenfnermcitltwvhlvizjzoycyh", "vpexlbvccfhzewanfqtibkezblujzqbyhjlemsnkgmuxhekk", "ljfdwpapfqx", "rhcrijfhmfpzkaxtlufrvcpfdq", "duouenfnermcitbtwvhlvizjzoycyh", "vpexlbvccfhzewanfqtibkezblujzqbyhjlemsnkgmuxhekk", "lftptcvncjqpezlnvmkpizir", "hizyqxtausneschvsgiquwfzuct", "hizyqxtausneschvsgiqswfzuct", "zbxngaarhxpruajl", "gepqsbfesyluhxvmrpuycdcbdwe", "xwdxougwjthssdnpwkyohlcgcrprmwgt", "cljwlwdonopchonm", "cluwlwdonopchone", "lftptcvncjqpezlnvmkpizir", "hizyqxtausneschvsgiqswfzuct", "vpexlbvccfhzewanfqtibkezblujzqbyhjlemsnkgmuxhekk"};
    vector<string> dictionary = {"hizyqxtausneschvsgiqswfzuct", "xewrarqewdowgivqxuncagjdbeyuaijtejf", "rerfowyaiueovqxtamjaoqpaekvua", "szeenuuemwzgw", "sagogpfpeqtiunwyjuohlmcajmkkxaytfkzcrswimfrbst", "awpchflczllujrolqcvdxzwqwjzwvefrjebaqyjzejmdqgocxf", "cuoigmsvysixvpprxsxmrynvtiiwjxruwgwpickszhzhfvbr", "hxagzbvebphlztdznyeqoegaauqqerqgp", "upjvnjeweuicgkcclfolylnvgklbzvikzqjdcpmhgsdbt", "okallyidptxqtxdldkpcuwccanmis", "cljwlwdonopchone", "pfwavywpteryttirvcdxlz", "nxxlwfmsvydlrcxsmjhhztstytjutazvgoowleydglcudm", "gepqsbfesyluhxvmrpuycdcbdwe", "ptgqaodonaeedodryqb", "rhcrijfhmtpzkaxtlufrvcpfdq", "rxjlrlfbatdvtsooxyejcxagjipdlsudwpyfshme", "vidcfijwsjooxzdjkafsxah", "zbxngbarhxpruajl", "xmknxihepljeh", "qaqxiohpderyuzcazedmeauwnwammaaz", "duouenfnermcitbtwvhlvizjzoycyh", "lftptcvncjqpezlnvmkpizir", "ixuvbqigvlpsfbzpxphkqznnfhbskvozotjdoxyxprecs", "xzfndlzimcwegrzrqekfuzkmivfecdaxhs", "nxoxralmwcsrijqqzpoystqownhgunkrccf", "rdobkcldrpgycbfrtkc", "wjozmcrkrja", "zsjzgiwbefrhdsjygfyak", "jvzotdypyyjzguejpztdspodvmqxejfrxmv", "ekyipadxlpjjowenwbmvcldnewio", "akyxojelmieapefkovdtuueeynnphvuwkofdqnt", "yscttcqffgodunqetyvoqffhhco", "usxzishecjpchpxnpsdrnzgivkrpyrtuic", "egmghkidpvbhvl", "besgmcovthegqnsqfknfeurebmv", "bmksvwcknvlcxskzfxxeforjspzfaabdvpx", "mzdxrehnjgbccdbhu", "bccgpygrmdxkzftxwhxcwhlhdybzeqodvatylxqwzb", "xwdxougwjthssdnpwkyohlcgcrprmwgt", "ljfdwpapfqx", "vpexlbvccfhzewanfqtibkezblujzqbyhjlemsnkgmuxhekk", "yjlaawtwzvmtqwtbmqoespipzqwzhzpfkhnuvqv", "aasrwntqcmqkjqdkqvpugdpgzyadziatakqtativw", "ndrgjjffddwtitsoezsvekqvdenjxdm", "rkylhmmkttwgzvroexvnalrmrghrjuvrkmowsxwsopmabkqjo", "phicxhrrjnuxozkuixonegyjwpvkilovvupbshheuvoitby"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 10950;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> player = {"qylfyptdbvcrpdveurqrtojpaqmdxkroygtvcx", "ovcnrfvpxpgbnwbmwcarmvuidpcqinaqovbe", "xrmyskvibdfsgsev", "ecrstgaargrbouxvlyezdjlunxsqwcmztcszbrxwgbpn", "hblctinzvvhymvdqxdvsaxlwdsbkcfmsfzqpnqfkfcnwlii", "bhampeagcanargvwopclt", "jzqfazkhvrdiojc", "jzqfazkhvrdiobc", "hqvbklwzxfasavqgygpbomwbepyjg", "jzbfazkhvrdiobc", "wtcoomoxbiuxposvnwlzeswxqrutj", "jzqfazkhvrdiobc", "jzqfazkhvrdiobc", "zhbvbnibfmqygkadxylafzzdryssgwaavlycqvtmd", "wbdleohyqwegcmqefeslkcmogwfbobayrmtcrmc", "hqvbklwzxfasavqgygpbomwbepyjg", "ecrstgaargrbouxvlyezdjlunxsqwcmztcszbrxwgbpn", "bhampeafcanargvwopclt", "ydsxiomdshbwoekixrkcsvnpinmpfomi", "qylfyptdbvcrpdveurqrtojpaqmdxkroygtvcx", "ydsxiobdshbwoekixrkcsvnpinmpfomi", "ydsxiomdshbwoekixrkcsvnpinmpfomi", "xrmyskvibdssgsev", "edzbzlmpvtknkrcepnltxdzjdsmmfemhinladpntsdvwcbnxd", "whrqgzeaqzllfxop", "hqvbklwzxfasavqgygpbomwbepyjg", "jzqfaekhvrdiobc", "hblctinzvvhymvdqxdvsaxlwdsbkcfmsfzqpnqfkfcnwlii", "wtcoomoxbiuxposvnwlzeswxqrutj", "wbdleohyqwegcmqefeslkcmogwfbobayrmtcrmc", "bhifhkqajsvbftwxokxesqpqbvnejtkpvfox", "qylfyptdbvcrpdveurqrtojpaqmdxkroygtvcx", "zhbvbnibfmqygkadxylarzzdryssgwaavlycqvhmd", "ovcnrfvpxpgbnwbmwcarmvuidpcqinaqovbe", "whrqgzeaqzllfxop", "abmeuqjevbdcfoeudbribbwabqfqbrrgz", "hblctinzvvhymvdqxdvsaxlwdsbkcfmsfzqpnqfkfcnwlii", "hqvbklwzxfasavqgygpbomwbepyjg", "whrqgzeaqzllfxop"};
    vector<string> dictionary = {"ppiyxvfbfd", "xpfrocvwurm", "jidfvmhecnpvlpefirhebsdjwokwrmih", "npvqvsmwpsapbiaulahzpgrbeqexynlyqlctx", "ecrstgaargrbouxvlyezdjlunxsqwcmztcszbrxwgbpn", "hblctinzvvhymvdqxdvsaxlwdsbkcfmsfzqpnqfkfcnwlii", "mdaxzosefmmesrfxdhmtmxhlzvomfzcg", "evvkvervjozqvoaratwaue", "mqfykpsdcgywohkcisignvx", "cwuxnpmbyyqfdhadftfejvzaqyktvelfbe", "jzqfazkhvrdiobc", "nkqkzmzlegsbrvavntbfxnuofhlpt", "pqbofmnlcwltrlzhbyaxznzvnjqamgyqptpiwcdchmoct", "ovcnrfvpxpgbnwbmwcarmvuidpcqinaqovbe", "nowfyvupzinaqvr", "bhampeagcanargvwopclt", "bhifhkqajsvbftwxokxesqpqbvnejtkpvfox", "inbhfvqzkbtewjuttvjgdzpmtnstjukyncpuwdahb", "kbzhqouemxszvseutbfvtmsxgwfgvmbpoccvajj", "myqpfujbutgzjsui", "fomxyzwadgpwqdrlvoucurcnyl", "qylfyptdbvcrpdveurqrtojpaqmdxkroygtvcx", "blvswsmtghogelmlmifvbtpkruv", "xqfvdxknzzghzcsmwcimniqppfursgxp", "edzbzlmpvtknkrcepnltxdzjdsmmfemhinladpntsdvwcbnxd", "tfnxeivmssobjzwrqrwdpwkyadjtayzh", "lwmdjupxcbodmfa", "bgrdkjiroxunenfaprd", "qganqkwledjvakvvbp", "hqvbklwzxfasavqgygpbomwbepyjg", "nwbhqpkevtkiysktulnskzfvlbarjw", "xrmyskvibdssgsev", "abmeuqjevbdcfoeudbribbwabqfqbrrgz", "gyxdkvwpvleuudmjnwjrbjhqvcjkyzrmoobfqwjzrqo", "ydsxiomdshbwoekixrkcsvnpinmpfomi", "oqsliobsohycdgunrxcwqjvxfjzja", "wltunhehveopimnbijovuosarnqh", "wbdleohyqwegcmqefeslkcmogwfbobayrmtcrmc", "xsmxeienri", "zhbvbnibfmqygkadxylafzzdryssgwaavlycqvhmd", "mtxgvlacmudgzvucdeoqhsqbrmtangqasxrkdptczuvrvlug", "wtcoomoxbiuxposvnwlzeswxqrutj", "whrqgzeaqzllfxop"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 17076;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> player = {"tbejrduggmobxqiexpqgwjkl", "fxjuslfjfddjvgmtezhhyvrphcxnbopyvhxlle", "dsekatyjmddbxhjptmssmltbtqjgpxuolbjufuqnga", "przjpkggcdukonlulxigeqadvdkokwr", "tbejrduggmobxqiexpqgwjkl", "ldtcnbobwfmdyqrxjdnuskprauq", "dsekatyjmddbxhjptmssmltbtqjgpxuolbjufiqnga", "wpcivsscpdpcm", "dilivgwdwvyeabrgnwveyyiydoeqfuwj", "ldtcnbobwfmdyqrxjdtuskprauq", "psaitayvmafgltgqpmxihmixg", "haqbkjdnuwvoiqlo", "ujfqmcdkbogqtesrwylwkih", "ubuduaindmmnyvhcqiwkicfhl", "aswmyysylbtblzpclihxypjruahqgr", "ldtcnbobwfmdyqrxjdnuskprauq", "ldtcnbobwfmdyqrxjdnuskprauq", "gfzpggiksquaocugsslrdkdfnxikbhqxvs", "gfzpggiksquaocugsslrdkdfnxikbhqxvs", "przjpkgggdukonlulxiguqadvdkokwr", "cuajvqromtrqdeist", "ujfqmcdkbogqtesbwylwkih", "vjefocexyrhupakchxrddgkvszmzimsmpyyizrvhgyugmyws", "lyjmsslrrcanfaixlybydgyclwtpj", "haqbkjdnuwvaiqlo", "psaitayvmafgltgqpmxihmixg", "ubuduaindmmnyvhcqiwkicfhl", "dxptgayxkdogykbyryuqrplnsmxan", "higfuyntsgdisctsjgttjioycmuyy", "vjefocexyrhgpakchxrddgkvszmzimsmpyyizrvhgyugmyws", "dsekatyjmddbxhjptmssmltbtqjgpxuolbjufiqnga", "vjefocexyrhupakchxrddgkvszmzimsmpyyizrvhgyugmyws", "lyjmkslrrcanfaixlybydgyclwtpj", "higfuyntsgdisctsjgttjiswcmuyy", "ldtcnbobwfmdyqrxjdnuskprauq", "kywvuqoythjurophey", "tywguqoythjurophey", "higfuyntsgdisctsjgttjiowcmuyy", "gfzpggiksquaocugsslrdkdfnxikbhqxvz", "psaitayvmafgltgqpmxihmixg", "aswmyysylbtblzpclihxypjruahqgr", "lyjmkslrrcanfaixlybydgyclwtpj", "cuajvqromtrqdeist", "kywguqoythjurophey", "lyjmkslrrcanfaixlybydgyclwtpj", "cuajvqromtrqdeist", "higfuyntsgdisctsjgttjiowcmuyy"};
    vector<string> dictionary = {"vjefocexyrhupakchxrddgkvszmzimsmpyyizrvhgyugmyws", "psaitayvmafgltgqpmxihmixg", "ooptntvgomi", "ykgnycvennfkhakbmyyjpvxakpqhepuamrya", "haqbkjdnuwvaiqlo", "aswmyysylbtblzpclihxypjruahqgr", "dilivgwdwvyeabrgnwvefyiydoeqfuwj", "fxjuslfjfddjvgmtezhhyvrphcxnbopyvhxlle", "pezwitavyhdehsmcptuexlcrlsggiv", "qshmvgbldksnudj", "ubuduaindmmnyvhcqiwkicfhl", "dbuecqyuuvqabekzduzucndnxafd", "ykvlmlwdgplwulcf", "fvyxekmeoequ", "lyjmkslrrcanfaixlybydgyclwtpj", "dxptgayxkdogykbyryuqrplnsmxan", "kywguqoythjurophey", "pcayqnjyydufhwxusflftieefhqi", "krxdiebdvdurjrjydixjpfcpojwbejgiaisccbbgphcmhw", "dsekatyjmddbxhjptmssmltbtqjgpxuolbjufiqnga", "emirijioisskxkxgdbsmcbpv", "wxindhvmevbjalxefsqlhqhbmpqlp", "higfuyntsgdisctsjgttjiowcmuyy", "wpcivsscpdpcm", "nykqljtqzmqj", "gfzpggiksquaocugsslrdkdfnxikbhqxvs", "ldtcnbobwfmdyqrxjdnuskprauq", "xnvcvgpwnjhpwh", "tbejrduggmobxqiexpqgwjkl", "ovorcujigntsrgwherxutvqhxaflt", "ujfqmcdkbogqtesbwylwkih", "glbogqvkdotbuytuwllpehrnxxzmy", "xdptganemapmprm", "ibgdysyfqrmfleqxicfraacufbqrypeqfkannipodnm", "wdsoilnwbswnedcqizxlwjbksbywxoy", "przjpkgggdukonlulxigeqadvdkokwr", "mndqlhyrctygnfubpwuqn", "cuajvqromtrqdeist", "komsphmeukcirkozwh", "yshtjsjgplvqmqhwcrqhgomdepydsvbwnbilpcnzgzeume"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 14213;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> player = {"wcbmxesbiylikzxaxocaoyrawjlltvq", "selrqtuwewfadfpxurowiibuwvcrkyhioan", "nwxbkgtabcktnujzkhatlepmlahfapeprb", "ljwkzbcixgczhjutsvjebdzasaqwfxqric", "ukvvislpwmbabsjkggwpwyhzfylbb", "rndlktnksefkdotzniclefnnz", "krqudzlzvwwywkweapdtotaxfrnyg", "ocomvdtpaknjjpidseifnehtnxvwbjmteexidq", "krqudzlzvwwywkweapdtotaxfrnyg", "wcbmxesbiylikuxaxocaoyrawjlltvq", "wdomxkvbjtfpvvvbkbmomvkmtcjjkbteauageclivwymod", "vwfxuitmkoyaxtznauqrkrlcedyuefzvxqzzvucot", "buvmwqvzjerlaxgmkdjqytcupj", "mzohsajqfawklvqjnupagsjx", "rndlktnksefkdotzniclefnnz", "hwdkbjaqnhjr", "dkkamwpaqhkdjnfkwnmiiilbxfpfl", "ocomvdtpaknjjpidseienehtnxvwbjmteexidq", "gzoydskttnduoknhqarhnbdzpphtwo", "buvmwqvzjerlaxgmkdtqytcupj", "ukvvislpwmbabsjkggwpwyhzfylbb", "gvghzxueosmnzt", "vwfxuitmkoyaxtznauqrkrlcedyuefzvxqzzvucot", "krqudzlzvwwywkweapdtotaxfrnyg", "gzoydskttnduoknhqarhnbdzpphtwo", "dkkamwpaqhkdjnfkwnmiiilbxdpfl", "wcbmxesbiylikzxaxocaoyrawjlltvq", "vwfxuitmkoyaxtznauqrkrlcedyuefzvxqzzvucot", "hwdkbjaqnhjr", "nwxbkgtabcktnujzkhatlepmlahfapeprb", "selrqtewewfadfpxurowiibuwvcrkyhioan", "selrqtewewfadfpxurowiibuwvcrhyhioan", "qzziznzkwrqefzgvdzgadsfbnktkighkmmnyxrxkoxqkvffa", "ukvvislpwmbabsjkggwpwyhzfylbb", "hwdkbjaqnhjr", "gzoqdskttnduoknhqarhnbdzpphtwo", "ukvvislpwmbabsjkggwpwyhzfylbb", "ocomvdtpaknjjpidseienehtnxvwbjmteexidq", "nwxbkgtabcktnujzkhatlepmlahcapeprb", "ljwkzbcixgczhjutsvjebdzasaqwfxqric"};
    vector<string> dictionary = {"mzohsajqfawklvqjnupagsjx", "fgfxkxslbvuinz", "qbzcwvvnwzkmfpkuwetgcixmtbfdatkrthzqkfmcdabej", "evjzgziznncehfuatgycdpgszszkv", "qzziznzkwrqefzgvdzgadsfbnktkighkmmnyxrxkoxqkvffa", "buvmwqvzjerlaxgmkdjqytcupj", "oykucriebqkgtzdmwxpzpiedrjuulexi", "vgjptcupsoqqxzfok", "vtlknynskmxebpercjdkixpxj", "selrqtewewfadfpxurowiibuwvcrkyhioan", "ieqnaqwbcsiytwbhzhxlejm", "ghpaozhizghhjqedlwuopfsuegdrdoxwtbyhjezoipgqhl", "krqudzlzvwwywkweapdtotaxfrnyg", "gzoydskttnduoknhqarhnbdzpphtwo", "wcbmxesbiylikzxaxocaoyrawjlltvq", "ocomvdtpaknjjpidseienehtnxvwbjmteexidq", "fwogomxelotcmwzaoceoacyjjbefdqrdvtnmkwt", "bagwzzoqcmurhvjfhktqvqqayvzmgbtxbgvvazr", "wdomxkvbjtfpvvvykbmomvkmtcjjkbteauageclivwymod", "nwxbkgtabcktnujzkhatlepmlahfapeprb", "sxwsxkvdciryfrmersdtfqjzolrbsqznafal", "evxepagtli", "ukvvislpwmbabsjkggwpwyhzfylbb", "nyoglhjanipxbynwjlvsfsjtitorthyvma", "crjqufnqekcxolxjaeasnbzaotwqbbgiqcp", "govxgiulelncvdbdrzvafahtpmbglgxaawmlrfls", "xfkyttbrxswgtaofvlbigharelyffmqghkibctxe", "agrnycbqzlgsmofurgiqjdjtxksreaeiqowephmlggofpt", "zfdreizfukjejldibhtpnbzypdpdzhdvzteqdqlz", "vwfxuitmkoyaxtznauqrkrlcedyuefzvxqzzvucot", "tfsigohnxrmwogevobksmidcccspgecfojcamzgxx", "ljwkzbcixgczhjutsvjebdzasaqwfxqric", "dkkamwpaqhkdjnfkwnmiiilbxdpfl", "bcwfwqvqmjvyrmvvkimseuusp", "zbgrxehkmyftcqona", "cckjcrearfvjjfcytvcznsugvermsgqnjmwraps", "xmduhkygsxefkishyabqn", "rndlktnksefkdotzniclefnnz", "xxuggtvxvxcmdgtzualhjheybsiib", "itepcmfhdptacyqridfe", "gvghzxueosmnzt", "hwdkbjaqnhjr", "ssvqihtszqnnkmcosrghyr", "swqknmlazkgzlzabbqudtcswtewzcntige"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 15567;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> player = {"ywydfxbugwcdrqgedinnvzygbwocajjossrvveriusldh", "iurswchxiebtboseybbifdioihvglxzpihlzlamznjhdtnxy", "fefxofsifqgjgcb", "thgholrepv", "nkzxoglvamhpytitvqlgmbhoqxzmmngd", "iurswchxiebtboseybbifdioihvglxzpihlzlamznjhdtnxy", "cetlyddcychfsybdbunvyxfxykchz", "jitkxsykoedkqqdfxggcjrrycxescyvwnnhwswppbnnqmy", "tpnwfqrtriufgtvyfmnqutel", "kllqbdlmugvfpymypbedwlalhgcewlbasb", "txktfpvqhldgmomlxftzkmllxhkbh", "thgholrepv", "obntndjoguepdzwbmfpbgmagkesoxttkdjleyifoacidxuvnbo", "txktfpvqhldgmomlxftzkmllxhkbh", "obntndjoguepdzwbmfpbgmagkesoxttkduleyifoacidxuvnbo", "qmwwwzmqhbxlebzubfohrhpivbzwbzopjiqzxraf", "gmejvbppgfllaghzgi", "obgsrnqpqqtavwhpswqrcmwwrw", "ywydfxbugwcrrqgedinnvzygbwocajjossrvveriusldh", "tpnwfqrtriufgtvyfmnqutel", "thgholrepv", "kllqbdlmugvfpymypbedwlalhgcewlbasb", "huhoiyiygaagramkvxcf", "kpvbbmodnjxtgciwyafzvrzethfpgjt", "edfwqxpgbnwoaapnotipeesj", "fefpofsifqgjgcb", "edfwqapgbnwoaapnotipeesj", "huhoiyiygaagramkvfcf", "jitkxsykoedkqqdfxggcjrrycxescyvwnnhwswppbnnqmy", "kllqbdlmugvfpymypbedwlalhgcewlbasb", "huhoiyiygaagramkvxcf", "huhoiyiygaagramkvxlf", "edfwqapgbnwoaapnotipeesj", "edfwqapgbnwoaapnotipdesj", "ywydfxbugwcdrqgedinnvzygbwocajjossrvveriusldh", "tpnwfqrtriufgtvyfmnqutel", "huhoiyiygaagramkvxcf", "iurswchxiebtboseybbifdioihvglxzpihlzlamznjhdtnxy", "kfvbbmodnjxtgcifyafzvrzethfpgjt", "gmejvbppgfllaghzgi", "kfvbbmodnjxtgciwyafzvrzethfpgjt", "twpwtyvtltpepqfanifqqk", "jitkxsykoedkqqdfxggcjrrycxescyvwnnhwswppbnnqmy", "yxcidnqczaxanhxwxqucgpxavzxvdsycthjpwallwbunnk", "fefxofsifqgjgcb", "qmwwwzmqhbxlebzubfohrhpivbzwbzojjiqzxraf", "obntndjoguepdzwbmfpbgmagkesoxttkdjleyifoacidxuvnbo", "qmwwwzmqhbxlebzubfohrhpivbzwbzojjiqzxraf"};
    vector<string> dictionary = {"gralnhlafwkhrffjmcumlztmnqmbkkaetjowldvwgaqvs", "ahwjvnbyiakqgsxryuoixtnynixuypgoxywaapidqhgslubppf", "polpcdhyff", "fajzmyjubqvnkabftmn", "zhlvcqqvjjqlnipllkszr", "twpwtyvtltpepqfanifqqk", "thgholrepv", "eyfasoocheuouvlnkvjtibyiaovzmvisutjgkeviqmpo", "edfwqapgbnwoaapnotipeesj", "qmwwwzmqhbxlebzubfohrhpivbzwbzojjiqzxraf", "fefxofsifqgjgcb", "zfqokhefrzpugmkalkxntjajv", "ysggiqgxvmbhjhtaqeomsdudogvqvkbmbsxogoi", "tpnwfqrtriufgtvyfmnqutel", "glmxsjehbhdkpurepxeyahsscpxfckrlwj", "qhhjpqxuxwuolfgueupimgukosjbiaonqoesrwtlqejaj", "gdjzoqizsvisbinxbdcbakl", "obusrnqpqqtavwhpswqrcmwwrw", "kfvbbmodnjxtgciwyafzvrzethfpgjt", "nbujbwfcctpkufzcxgspucgsvcursklsninxha", "obntndjoguepdzwbmfpbgmagkesoxttkdjleyifoacidxuvnbo", "ckohklpmilnclrnemilpuuhvycguugpjulflx", "bdwvhahehpjvltgqhkrxhopirssx", "kllqbdlmugvfpymypbedwlalhgcewlbasb", "aapprfqjbufselgvrargyjpqscehobnskvhg", "chvbnswkvjyvxnbfbnrrgfkrbedmtwggtgtdicokcymtawg", "hwlxslfuohmvhtczwssexoioa", "nrdqxwvgzd", "txktfpvqhldgmomlxftzkmllxhkbh", "iurswchxiebtboseybbifdioihvglxzpihlzlamznjhdtnxy", "ppbhvandehhseczerubtyrvxmvenuseuxvxypxqbfl", "cetlyddcychfsybdbunvyxfxykchz", "jkmevvarhhvoxozpxnodinix", "rncuretmmhagtoi", "ktdwlgmdadqvslphxjqyqoamdrgoeqjogifhyarbcpg", "hnrybcywwtnogvmkeuodotuzvuddgwf", "kvpdbaeewikflgamvgsjgehlyvqtydexmxfzazjwspodcogcok", "ywydfxbugwcdrqgedinnvzygbwocajjossrvveriusldh", "nkzxoglvamhpytitvqlgmbhoqxzmmngd", "huhoiyiygaagramkvxcf", "gmejvbppgfllaghzgi", "ifiiwftmgesxliptnt", "yxcidnqczaianhxwxqucgpxavzxvdsycthjpwallwbunnk", "jitkxsykoedkqqdfxggcjrrycxescyvwnnhwswppbnnqmy", "levflmrerkwesqmkwuykkzmsserwjkaepodiun"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 18053;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> player = {"gsizltjfapqedxn", "wwziznsxqwsfibvnmdjrcqmvsxtnbubl", "oecgugbbknd", "yruikvxoqeiwlmutozholrtxccandaapk", "htdwqmpzfntnrwzjbheyocyaskjlsbno", "venvaftqmbobzdccdst", "venvaftqmbobzdccdst", "lcmllwdcry", "rcunmpympwlgpmwyvounaenxkamrwvdvejurrbhm", "usaazswubtevhflmzyaubmpxccpcpyrstopqcrlhqfatjwemwt", "iztxzlfwikqqmn", "gsizltjfapqfdxn", "hnifrtpothtcndsxnhxmqfcq", "lcmllwdvry", "txgizooundcedfuvjmtkk", "eowoxwfkimfay", "usaazswubteviflmzyaubmpxccpcpyrstopqcrlhqfatjwemwt", "smybghcpjmcjzqpqisktrmecocuyqtadscrxirdlz", "hbfljvsgitwplwchywrctyswmcgmhm", "oezgugbbknd", "htdwqmpzfntnrwzjbheyocyaskjlsbno", "hnifrtpotktcndsxnhxmqfcq", "wghljanzvslscokytgommlfwfxqozwqpp", "hbfljvsgitwplwchywrctyswmcgmhm", "hnifrtpotktcndsxnhxmqfcq", "usaazswubtevhflmzyaubmpxccpcpyrstopqcrlhqfatjwemwt", "hbfljvsgitwplwchywrctyswmcgmhm", "zwjoozddozelxhljf", "htdwqmpzfntnrwzjbheyocyaskjlsbno", "hnifrtpotktcndsxnhxmqfcq", "iztszlfwikqqmn", "hnifrtpotktcndsxnhxmqfcq", "usaazswubtevhflmzyaubmpxccpcpyrstopqcrlhqfabjwemwt", "iztszlfwikqqmn", "usaazswubtevhflmzyaubmpxccpkpyrstopqcrlhqfatjwemwt", "zwjoozddozelxhljf", "abexcsttwsvvfaejmfpxacuqhxpbhtowhde", "abexcsttwsvvfaejmfpxacuqhxpbhtowhde", "usaazswubtevhflmzyaubmpxccpcpyrstopqcrlhqfatjwemwt", "oruikvxoqeiwlmutozholqtxccandaapk", "gsizltjfapqfdxn", "txgizooundcedfuvjmtkk", "txgizooundcedfuvjmtkk", "usaazsjubtevhflmzyaubmpxccpcpyrstopqcrlhqfatjwemwt", "wwziznsxqwsfibvnmdjrcqmvsrtnbubl", "eowoxwfkimfay"};
    vector<string> dictionary = {"txgizooundcedfuvjmtkk", "athkoepszldlqqerzwnncz", "skeaxkntbrkgboahaughxlshrkcrxjjhifwhdjbmeybiixz", "gdogdabuzrehvxeypbduxbxvghwam", "jhongoginyicxmtqvytuejccyfrdjkxqxanamoldozbelaret", "kaksledyrcevjotbhxcrirxhkiaeuqqjwcnkkdxkxflr", "hbfljvsgitwplwchywrctyswmcgmhm", "afwulzvqxmern", "howlxzhliizzvubimxlsyzujowokpydbzdbrhwtvrq", "nedpwuwenrlecywdyaibdrivuhibasjekzqynl", "abexcsttwsvvfaejmfpxacuqhxpbhtowhde", "rupopwijgtslezrybdbscdby", "szchbcvzrcwonkpwoyzrurjzxixjgnfxxckxssvcnerabm", "lcmllwdvry", "gsizltjfapqfdxn", "venvaftqmbobzdccdst", "vxabqukuxhozpirsrvudfpdvqtmglzdfi", "zgxpuuejafrckgfnpxrbbbesihennmcggutdnfjmceyhcxk", "hnifrtpotktcndsxnhxmqfcq", "kwosbxgeli", "wghljanzvslscokytgsmmlfwfxqozwqpp", "msbjlvkldjgsiwrjgchlypofnpyjkbcjls", "pirxkfgnhqewtnccdffqkwiahgyvwqfcvsh", "tjaflzcpmtcdralzwnllslfryjmchiohz", "rcunmpympwlgpmwyvounaenxkamrwvdvejurrbhm", "xtdjevbxpeujkbqdqn", "usaazswubtevhflmzyaubmpxccpcpyrstopqcrlhqfatjwemwt", "wwziznsxqwsfibvnmdjrcqmvsrtnbubl", "smybghcpjmcjzqpqisktraecocuyqtadscrxirdlz", "esiisofycwgdxupfcvztscartjixfsvlikn", "zwjoozddozelxhljf", "namcatruff", "eowoxwfkimfay", "htdwqmpzfntnrwzjbheyocyaskjlsbno", "iztszlfwikqqmn", "oezgugbbknd", "qfdsxsholgrgyykwmtrvku", "mpqyhdstddgiifsxgrgxsctwnoflpotvkadah", "ttfffgurbzrshmoowxocmuumvrjamp", "yruikvxoqeiwlmutozholqtxccandaapk", "drniomwserhoqemactztxrsmpaesduyu", "vrruxrsqjbbqjugaongow"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 10751;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> player = {"jezzlujxqteyrgutljhfbyzgzjvtkrrlzcvjddtlurtti", "ipxcjcjabwseygrhtj", "bumlkzawndwdmdaakfnbbejcpoekxrzhdsnmwwtfz", "llbtlplsrprfp", "zvtwtxciadrribnkmmrggwefzgmhqgcnyswjckybahyr", "llbtzplsxprfp", "eaqzxajyyionwmsvtiglxlifqv", "hjyhzxmjxjojpkmhuprgbcvxofa", "qdwryfsdsoqmqrkatkgqafwakhtjqgrpsutkwu", "hjyhzxmjxjojpkmhuprgbcvxofa", "jezzlujxqteyrgutljhfbyzgzjvtkrrpzcvjddtlurtti", "xwhygchzddzokzdzlgrt", "hjyhzxmjxjojpkmhuprgbcvxofa", "ipxcncjabwsxygrhtj", "smnsyfacjzrnnlpctlfdfabvllhejqcmghrjzlsmdg", "ipxcjajabwsxygrhtj", "fhtusvzlrtnvghmc", "fdtusvzortnvghmc", "mejnvjrwjjopetdhjjjtobizvudmzvrcdfjfdcfk", "bvjhqfbztubqidvwgtfg", "zvtwtxciadrribnkmmrggwefzgmhqgcnyswjckybahyr", "wjtwzcoewmyctowcffjpskixtfkfiodgqpnn", "rntphwxithtscutetjyolgkdgneowmlvlh", "llbtlplsxpzfp", "bummkzawndwdmdaakfnbbejcpoekxrzhdsnmwwtfz", "mejnvjrwjjopetdhjjjtobizvudmzvrcdfjfdcfk", "kxlptipfsppgesgrdhhfuquw", "llbtlplsxprfp", "jezzlujxqteyrgutljhfbyzgzjvtkrrlzcvjddtlurtti", "iaoatthtpmxdinlirxyqihxkyferuzxulwkbrjdehozpqwc", "llbtmplsxprfp", "qdwryfsdsoqmqrkazkgqafwakhtjqgrpsutkwu", "eaqlxajyyionwmsvtiglxlifqv", "fdtusvzlrtnsghmc", "wjtwzcoewmyctowcffjpskixtfkfiodgqpnn", "zvuvrdqujfniibmnmsblnmtralssfbghgrcqlgusdfksiy", "jezzlujxqteyrgutljhfbyzgzjvtkrrlzcvjddtluutti", "kxlptipfsppgesgrohhfuquw", "gdpmlgltjcaeomimdnjcluhzkb", "hjyhzxmjxjojpkmhuprgbcvxofa", "rntphwxitvtscutetjyolgkdgneowmlvlh", "eaqlxajyyionwmsvtiglxlifqv", "llbtlplsxprfp", "zvtwtxciadrriknkmmrggwefzgmhqgcnyswjckybahyr"};
    vector<string> dictionary = {"zvuvrdqujfniibmnmsblnmtralssfbghgrcqlgusdfksiy", "bmmgxxkgywlgbjbqtwnhfiojfwuxadcxtfbhlethue", "hjyhzxmjxjojpkmhuprgbcvxofa", "epoxrzfpfhutxdkvxahkbrhq", "zwukpqhywid", "vzrydudcthefkasjofclbkyimqxxdgqekdviqwqsidtzgfca", "rntphwxithtscutetjyolgkdgneowmlvlh", "rivpbkifjkvrvkrvgcehnizkceuxz", "bvjhqfbztubqidvwgtfg", "ketsazktzonerpcsruxma", "ipxcjcjabwsxygrhtj", "wjtwzcoewmyctowcffjpskixtfkfiodgqpnn", "eaqlxajyyionwmsvtiglxlifqv", "fdtusvzlrtnvghmc", "gdpmlgltjcaeomimdnjcluhzkb", "jezzlujxqteyrgutljhfbyzgzjvtkrrlzcvjddtlurtti", "rbizbmdkybctninyxsctxsxm", "qdwryfsdsoqmqrkazkgqafwakhtjqgrpsutkwu", "dgqblylpfxefvqbrapdcar", "zlnofttjmqzmpugbfzcsbvwbarhwyg", "sbfklcqpfxgcxr", "iaoatthtpmxdinlirxyqihxkyferuzxulwkbrjdehozpqwc", "rgvfrcdvhuoq", "vuflowryogtqsrquapmlpirrms", "qkhuedyedtmfwexzobsubsxwx", "lndsjplyflojn", "bummkzawndwdmdaakfnbbejcpoekxrzhdsnmwwtfz", "eadinnfichacj", "izrhuqjbxsxvhfqoqnqyetqgomeyyziczfvhepx", "srdonmoxzuxcdjdeayzvhvrldfrts", "uwpbzikwvhaicvdlcfrmmetjfqpedfapbcixzj", "smnsyfacjzrnnlpctlfdfabvllhejqcmghrjzlsmdg", "ryflciplxlslzjpyuhkzliwrqodtsxtcqmafrifdlrdevwqsd", "vbsvyhipkkzcgocojt", "zvtwtxciadrribnkmmrggwefzgmhqgcnyswjckybahyr", "rvvefhicusqqqdyizwxidyqmnseezn", "llbtlplsxprfp", "mejnvjrwjjopetdhjjjtobizvudmzvrcdfjfdcfk", "kxlptipfsppgesgrdhhfuquw", "lblbwbfgkungjxvtjxkmybrwyydlewsxmecsiu", "okbmviaajmupmvkgnbnzungytecxmtrfuqwdgogctcztue", "xwhygchzddzokzdzlgrt", "qxzelmqfhsdizopdqzucyuvhv"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 20853;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> player = {"mavadmutmdynccuh", "hzngnwqrlcyqpcnbhzjnutkioidlhkndfosmyhjyczfwdwzvhi", "tnrimwgdkepyynsdtbitvbiv", "mavadmutmdynccuh", "ewcfpherrrxxsosolcwpuduwfxcnygoapzt", "yakuwgdvhewllqseuezmhaymbhd", "qiqlhktipzgpbwhdvi", "ifsvrsdwkhzozxtlosvtfsygufxyaalnbh", "yulmmkjhbertgezppmtkgwwrumcnbwifvdcfpjvxjsow", "tnrizwgdkepyynsdtbitlbiv", "qiqlhktipzgpbwhdvi", "pteuqefpmndspscbsw", "sakuwgdvhewllqseuezmhaymbhd", "tnrimwgdkepyynsdtbitlbiv", "qdhfckdlajcmgihpjnnaloxfzzowoicthyjmtullzqiohdld", "yulmmkjhbertgezppmtkgwwrumcnbwifvdtfpjvxnsow", "ttjwwggmhuqrzndri", "bgygwtynltwrkmnerkwz", "tnrizwgdkepyynsdtbitlbiv", "hzngnwqrlcyqpcnbhzjnutkiohdlhkndfofmyhjyczfwdwzvhi", "ewpfpherrrxxsosolcwpuduwfxcnygoapzt", "qnlcfpgawlwfrimiuqrzcpnlectfcsmdzbxmkaozmufbzc", "ifsvrsdwkhzozxtlosvtfsygufxyaalnbh", "cuiawwqyryzmmtfsrblnmmwxlunoboryjwgzjp", "rpezsvwawhwloplupufwwshuixyzperuritbqwxjxutd", "pteuqefpmndspscbsw", "yulmmkjhbertgezppmtkgwwrumcnbwifvdcfpjvxnsow", "esdyoqqojhngltdy", "qiqlhktipzgpbwhdvi", "qiqlhktipzgpbwhdvi", "qiqlhktipzgpbwhdvi", "dbmmpabfkfjwmsnyjrajfhefpedimjfa", "cuiawwqyryzmmtfsrblnmmwxlunoboryjwgzjp", "oeotrqhirxlhikfbmawbmztydjpf", "ewpfpherrrxxsosolcwpuduofxcnygoapzt", "ifsvrpdwkhzozxtlosvtfsygufxyaalnbh", "qdhfckklajcmgihpjnnaloxfzzowoicthyjmtullzqiohdld", "yakuwgdvhewllqseuezmhaymbhd", "rpezsvwawhwloplupufwwshuixyzperuritbqwxjxutd", "qdhfckklajcmgihpjnnaloxfzzowoicthyjmtullzqiohdld", "dbmmpabfkfjwmsnyjrajfhefpedimjfa", "yulmmkjhbertgezppmtkgwwrumcnbwifvdcfpjvxnsow", "lfclrntfmcirpurnsopxxaemalhoxavaensz", "ifsvrsdwkhzozxtlosvtfsygufxyaalnbh", "tnrimwgdkepyynsdtbitlbiv", "ifsvrsdwkhzozxtlosvtfsygufxyaalnbh", "rpezsvwawhwloplupufwwshuixyzseruritbqwxjxutd", "ifsvrsdwkhzozxtlosvtfsygufxyaalnbh"};
    vector<string> dictionary = {"rpezsvwawhwloplupufwwshuixyzperuritbqwxjxutd", "qdhfckklajcmgihpjnnaloxfzzowoicthyjmtullzqiohdld", "ypcambmtinm", "lgjpodzxzlsvmejfljohl", "xzueazkjrwwyddbrhbxhwoir", "oeotrqhirxlhikfbmawbmztydjpf", "sgqejvvaiardmobktggws", "esdyoqqojhngltdy", "hzngnwqrlcyqpcnbhzjnutkiohdlhkndfosmyhjyczfwdwzvhi", "caecmihzctlsrknd", "liapdwfabvaylnzlxwxqcabt", "bgygwtynltwrkmnerkwz", "hsdnhqfemdcapzg", "mavadmutmdynccuh", "ttjwwggmhuqrzndri", "zhlpagsrhbbndqmoqwqkhpcniuskfaqsfpmpfprmne", "tnrimwgdkepyynsdtbitlbiv", "pteuqefpmndspscbsw", "xczdfcldbogkpyffhzazlghxlcdzwfckftryaqehkb", "cuiawwqyryzmmtfsrblnmmwxlunoboryjwgzjp", "drqacnfhchhalnwidpjkgvptfupbnmr", "ftttiicrgyivwmmwwedcpkail", "czvrlugspvfrfpfotjfxekoq", "qiqlhktipzgpbwhdvi", "pfzqkxiuzyukhpothbmcjkkrbtlr", "yakuwgdvhewllqseuezmhaymbhd", "kryzcufynizntehfisxuvboswxksysbkkqwzcoaiduwvfu", "dbmmpabfkfjwmsnyjrajfhefpedimjfa", "rlimrmncdnwlnwkolwbu", "macbtljbuoxa", "yulmmkjhbertgezppmtkgwwrumcnbwifvdcfpjvxnsow", "xucknuywkfxwufzpcur", "edhwhcqzxwnsnggttugpbywyujcj", "yzpsaslvkedcm", "nopblkogknxjfldjwcykjvpdevqmueseucuiqpfzlmwftstk", "hatnlhcxceiofdrwfnivgsllhuhdvdzvsdkkoj", "lvnoiurzhcnhombskgemeeaksseavnvlwjtpobvolwluyntkc", "ewpfpherrrxxsosolcwpuduwfxcnygoapzt", "bzqcnkljtvhlzobfsjaspubnbxgibndrlvrlhaicyvpwfhcj", "pcbhqwhsgkzefvbaravdqelwrbysrzsfvkyuxrxyde", "qnlcfpgawlwfrimiuqrzcpnlectfcsmdcbxmkaozmufbzc", "qsfwlamgfdzayyytkuuxajrdkp", "hszumutyjwrkcpauylv", "ifsvrsdwkhzozxtlosvtfsygufxyaalnbh", "lfclrntfmcirpurasopxxaemalhoxavaensz"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 14963;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> player = {"lxajdcojpayfxjgggahyosjcfqfkrstowrlluucapgisdhwb", "ikqgdoenvefxhhpsflywjyyoufxvgflbgghicunzqqyqg", "tfrinyzgaffrnix", "jjhgphiucuteptyhindwx", "tfrinyzgaffrnix", "tfrinyzgaffrnix", "gpbckqsrgvcjiqxmuykkqwyrbhy", "jjhgphiucutepqyhindwx", "ruvkfwveyurzhcccpooqkqtximfertfou", "iyaiufbamelfczkvqxagjmd", "rleqcspiqpqbsclkjhxlttteajtbcogdahnejunxpejlploikd", "iyaiufbamelfczkvqxagjmd", "tfrinyzgaffrnix", "kgxmiibhkfkk", "kgxmiibrkfkk", "kgxmiibrkfkk", "ikqgdoenvefxhhpsflywjyyoufxvgflbgghicunzqqyqg", "ewcpyjtgtulmmskgzhxzl", "urdggfledyvhtvlwspjrbumhmpkj", "ldgtmvtzvhtzuict", "kkquaemztkspknerrys", "urdggfledyvhtvlwspjrbumhmpkj", "eoneidnwbkxajxltzccmndomakldgadtenx", "fpbckqsrgvcjiqxmuykkqwyrbhy", "jjhgphiucuteptyhindwx", "oppgeeswetbmytwmwkie", "gpbckqdrgvcjiqxmuykkqwyrbhy", "ewcpyjtglulmmskgzhxzl", "kkquaemzyksphnerrys", "wztlelwzqfmdvtoqeufpqvcwykeirurnwqoiupbtfs", "okxwzpmxguval", "eoneinnwbkxajxltzccmndomakldgadtenx", "ewcpyjtglulmmskgztxzl", "wztlelwzqfmdvtoqeufpqvcwyueirurnwqoiupbtfs", "ygwiadtrcykzwyaahlmrdamptfxg", "ewcpyjtglulmmskgzhxzl", "jzdmfhstlmcmmcxpvnmbpxcbryryturrnbthhgyeo", "oppgeeswetbmytwmwkie", "kgxmiibrkfkk", "vouaejtivnqznrxnzocbmxootsvnupbxptvtar", "wztlelwzqfmdvtoqeufpqvcwykeirurnwqoiupbtfs", "kgxmiibrkfkk", "lxajdcoepayfxjgggahyosjcfqfkrwtowrlluucapgisdhwb", "tfrinyzgaffrnix", "bvlvzpxmdomiphoydbqwtsaaswnpfvyxtpehp", "eoneinnwbkxajxlbzccmndomakldgadtenx", "urdggfledyvhtvlwspjrbumzmpkj", "kkquaemztksphnerrys", "ewcpyjtglulmmskgzhxzl"};
    vector<string> dictionary = {"okxwzsmxguval", "ldgtmvtzvhtzuict", "hrrgngbvcseidkifsyrxjeo", "wztlelwzqfmdvtoqeufpqvcwykeirurnwqoiupbtfs", "hetgtxucngzitceeuigutrzywixkmhrbripnp", "oppgeeswetbmytwmwkie", "zembrxwqdxksvabdpxmgcwgbgrfgxncejjyz", "bvlvzpxmdomiphoydbqotsaaswnpfvyxtpehp", "niufsubgowldwfsahvbpffmsjtkkritphdlenvjvl", "poblufyfudjevzzvxqfaxksamqlvagamsndixdpihu", "urdggfledyvhtvlwspjrbumhmpkj", "ikqgdoenvefxhhpsflywjyyoufxvgflbgghicunzqqyqg", "fsxhgyvhmgczwdetjoqjvpwyxqzlbbowizrcxajbqhvn", "srakkrwrwjzroeyxiptfsjdarxjxmo", "vouaejtivnqznrxnzocbmxootsvnupbxptvtar", "xxskzbmltkqeiyoqbyjbyfpipourvlvvqmmfflioj", "tpjbwnebomsbqganfvbsrelnqlrxowjgmxdgulgva", "ygwiadtrcykzwyaahlmrdamptfxg", "kkquaemztksphnerrys", "mkylfnhenmyucbiyzadwhfb", "jzdmfhstlmcmmcxpnnmbpxcbryryturrnbthhgyeo", "jfxyuvhykobrfjn", "xvjxueamncwro", "pffpnmzwxziqokqttr", "tfrinyzgaffrnix", "ruvkfwveyurzhcccpooqkqtximftrtfou", "ygylhnxjlfiqfdeirqflcs", "dxqrjwhxty", "raeesyhdjxnlcewsgxswzyslbnqudtavqefiezkjawir", "kgxmiibrkfkk", "lxajdcojpayfxjgggahyosjcfqfkrwtowrlluucapgisdhwb", "yhqvuehzfygpmlpwxa", "rleqcspiqpqbsclkjhxlttteajtbcogdahnejunxpejlploikd", "ewcpyjtglulmmskgzhxzl", "gpbckqsrgvcjiqxmuykkqwyrbhy", "bzgncjtvbf", "eoneinnwbkxajxltzccmndomakldgadtenx", "jjhgphiucuteptyhindwx", "bpbexavaubnqchsbasxpyakkne", "bisqrftzqf", "ourvtmnkajspgcfwijmodgiplarbalmqflboegmonwmh", "zoxynqndvctywaggxhtpsmntu", "wgnynfupujoingiguurlasiuxhfqifjj", "heslcdqwtpmjkd", "iyaiufbamelfczkvqxagjmd"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 14052;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> player = {"nsnyrrktsuudbmfugioujujmolmebyzxqvky", "zsdivryiajnfjqkolwxzugoqeuorlpujxd", "fefbokfqyaabtortqblxzytjnqsajapadee", "zsdivryiajnfjqkolwxzugoqeuorlpujxd", "qyofuvnxtdkwbjhukqdkkhoahswlo", "fefbokfqyaabtortqblxzytjnqsajapadee", "zsdivryiajnfjqkolwxzugoqeuorlpujxd", "zsdivxyiajnfjqkolwxzugoqeuorlpujxd", "zsdivryiajnfjqkolwxzugoqeuorlpujxd", "suareejbafgsrzhbcq", "sipziyvybozofclkggknuqttxurdsjfxvfuldatblizb", "drfsrqdioctdlvbsqsxojgsw", "niiguyuscgwapvirqzgovrdntgbappzfqoxirrkhiflmxqqe", "drfsrqdioctdlvbsqsxoegsw", "wkekworraqjbzyiuyx", "nsnyrrktsuudbmfugioujujmolmebyzxqvky", "qplbfyzqzgidnuht", "wkekworraqjbzyiuyx", "pdggowyunm", "fqocpvpsvjtjmozbe", "wbwzdiumytxcfjbnegidv", "fudfnltnllyeftchlpukgtqmvesquanvbazxdm", "qiatfozyxitsphqpyapbambtgjulfyevrox", "dtvsuzjzpesgxvbdplpypzjascegcikuyauymgy", "twpbrwvvhwlrmbltksgxqlwhxtsxlcjxdsihdp", "qiatfozyxitsphqpyapbambtgjulfyevrox", "qyofuvnxtdkwbjhukqdkkhoahswlo", "tpfblgcnfbyyg", "zsdigryiajnfjqkolwxzugoqeuorlpujxd", "qplbfyxqzgidnuht", "nsnyrrktsuudbmfugioujujmolmebyzxqvky", "luareejbafgsrzhbcq", "luareejbafgsrzhbcq", "dtvsuzjzpesgxvbdplpypzjascegcikuyauymgy", "vluacnvuoektlw", "qyofuvnxtdkwbjhukqdkkhoahswlo", "vluacnvuohktlw", "tpfblgcgfbhyg", "qiatfozyxitsphqpyapbambtgjulfyevrox", "rvonfibittrfqslxaeguewxcqzvfhzdzscqke", "wkekworraqjzzyiuyx", "fudfnltnllyeftchlpukstqmvesquanvbazxdm", "fefbokfqyaabtortqblxzytjnqsajapadee", "tpfblgcnfbhyg", "dtvsuzjzpesgxvbdplpypzjascegcikuyauymgy", "drfsrqdioctdlvbsqsxojgsw", "vluacnvuohktlw", "twpbrwvvhwlrmbltksgxqlwhxtsxlcjxdsihdp", "wbwzdiumytxcfjbnegipv", "rvonfibittrfqslxaeguewxcqzvfhzdzscqke"};
    vector<string> dictionary = {"gwpbjdcvqjqijspfxtzdjpeidvqwiltkytfmijbvoq", "pbmhgzsimicflcwgk", "dkceqiisjigykdmrnlwxuomxlowfta", "dfmxuctjgmy", "hxzzelwqnjrqwbollyivlducscnkkcmypvwvfogawkihy", "dbwqhzizhhzcqhnz", "ohxzofcylsozuifppwxndqhaipmsxzisvio", "fudfnltnllyeftchlpukstqmvesquanvbazxdm", "dtvsuzjzpesgxvbdplpypzjascegcikuyauymgy", "imcbdbqdfgooonqkbajtsrltadjmjh", "edqksimhsjccoyrddaapzkmtecvyfetabwe", "niiguyuscgwapvirqzgovrdntgbappzfqoxirrkhiflmxqqe", "fqocpvpsvjtjmozbe", "amgkxzztyatqbkw", "tpfblgcnfbhyg", "fefbokfqyaabtortqblxzytjnqsajapadee", "rvonfibittrfqslxaeguewxcqzvfhzdzscqke", "qplbfyzqzgidnuht", "sipziyvybozofclkggknuqttxurdsjfxvfuadatblizb", "qiatfozyxitsphqpyapbambtgjulfyevrox", "hfukqvftwbgpibmeosilevyroqghrnhlnctrcnzpzdk", "zsdivryiajnfjqkolwxzugoqeuorlpujxd", "nsnyrrktsuudbmfugioujujmolmebyzxqvky", "cyoswlqgwuilrrvyfyueprdpvmyvcgksecmfespzfrufzf", "luareejbafgsrzhbcq", "twpbrwvvhwlrmbltksgxqlwhxtsxlcjxdsihdp", "uefzwcdziq", "wkekworraqjbzyiuyx", "wwshgzzdheqqngjgnorlgmkibscovqzcme", "drfsrqdioctdlvbsqsxojgsw", "pdggowyunm", "qyofuvnxtdkwbjhukqdkkhoahswlo", "xtrznsassmhhlqhxtboowutf", "vluacnvuohktlw", "xsabfnimlvbmjmvtoevve", "renoecqpdzaakncvvfxbxaejz", "acbnxgqxpdnzxohmqmrqqv", "wbwzdiumytxcfjbnegipv", "uefcrhiqtfbaitlordsrnbazqja", "xolqmrbqrbhygjgrokqutubgjaycsuadresrokihxj", "eknkjduxodyklbjjwajkpwuhnygllfzwiazkdskxtvcbjj"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 16500;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> player = {"xyrcnqijbcbosgmgbikidzzsrbulcsymuhbxszjvceuciovie", "bkjxaukvdhtsziscwvduoqjcervhwg", "cxeqhekbihckgkmycmkjlolwfdhiayhhjmr", "zkhnyzxouuhikgkrqoxczdsjtgckeohuosesnweunpiaudzyg", "vxccmwfxywwwi", "xyrcnqijbcbosgmgbikidzcsrbulcsymuhbxszjvceuciovie", "wbrieeqbrfngmmqjxoxxdfkqwvkdpkzsxfncoljkgctx", "zhdqjgpxcdorvghhujlgafjzojspvk", "zkhnyzxouuhlkgkrqoxczdsjtgckeohuosesnweunpiaudzyg", "cxeqhekbihckgkmycmkjlolwfdhiayhhjmj", "lsepvevhjyzuxbbsbbrrisftdybyiw", "nksavqodkqkxvjfeaiacguat", "pxjxmigagejtqocldejvhmdlapvbmtfayvtrawknjcfabvf", "xcqlaycdwpzxdophdimtyseilnpupgdhmhhxlabgmcvfgrzr", "lpqntlnwckq", "xcqlaycdwpzxdophdimtyseilnpupgdhmhhxlabgmcvfgrzr", "lgqntlnwckq", "hqcfrlgnjxvlyorcxrvhuesddifoskrhtbfmpnniyhnvu", "ooeliuvuuqyepofehn", "vxccmwfxfwwwi", "vxccmwdxfwwwi", "pxjxmigagejtqocldejvhmdlapvbmtfayvtrawknjcfabvf", "ttbfglkvckilxfbfeqqapkrliquc", "fsxxsaaxreoxiphxhkjydpjnqxuvyiwzuiwrrhc", "pxjxmigagejtqocldejvhmdlapvbmtfayvtrawknjcfabvf", "ttbfglkvckilxfbfeqqapkrliquc", "lajmnkhoda", "fsxxsaaxreoxiphxhkjydpjnqxuvyiwzuiwrrhc", "lsepvevhjyzuxbbsbbrrisftdybyiw", "fsxxsaaxreoxiphxhkjydpjnqvuvyiwzuiwrrhc", "zhdqjgpxcdorvghhujlgaxjzojspvk", "bkjcaukvdhtsziscwvduoqjcervhwg", "xyrcnqijbcbosgmgbikidzzsrbulcsymuhbxszjvceuciovie", "uqtsnwexvbhwkmgbqvnmg", "lajmnkhoda", "cxeqhekbihckgkmycmkjlolwfdhiayhhjmr", "uqtsnwexvbhwkmgbqvnmg", "vgymoxaatvlpnvgydowwaejpchcpbiq", "fsxxsaaxreoxiphxhkjydpjnqxuvyiwzuiwrrhc", "zkhnyzxouuhikgkrqoxczdsotgckeohuosesnweunpiaudzyg", "hqcfrlgnjxvlyorcxrvhuesddihoskrhtbfmpnniyhnvu", "zhdqjgpxcdorvghhujlgaxjzojspvk", "xyrcnqijbcbosgmgbikidzzsrbupcsymuhbxszjvceuciovie", "xyrcnqijbcbosgmgbikidzzsrbulcsymuhbxszjvceuciovie", "bkjcaukvdhtsziscwvduoqjcervhwg", "mvqukbchxlqfnfo", "lajmnkhoba", "vgymoxaatvlpnvgydowwaejpchcpbiq", "lajmnkhoda", "nksavqodkqkxvjfeaiacgxat"};
    vector<string> dictionary = {"lajmnkhoda", "tucgglgfmilaewelulohicoshwhrzwllh", "tcfdkevilpqslqxjuchjdtqbpxvegaasrkhneiob", "ytlkszuqmsccylwjqnsobvdtbnxsfpupclhpntjyorabfzv", "pgtrznclqwvepapcovorqspjpdjfqmb", "lsepvevhjyzuxbbsbbrrisftdybyiw", "xcqlaycdwpzxdophdimtyseilnpupgdhmhhxlabgmcvfgrzr", "cxeqhekbihckgkmycmkjlolwfdhiayhhjmr", "xyrcnqijbcbosgmgbikidzzsrbulcsymuhbxszjvceuciovie", "zkhnyzxouuhikgkrqoxczdsjtgckeohuosesnweunpiaudzyg", "ansptzwycezbpeop", "ttbfglkvckilxfbfeqqapkrliquc", "aokcgonntblzsrvgdzszeabxyytanhpqnpjacadugjqad", "zhdqjgpxcdorvghhujlgaxjzojspvk", "uqtsnwexvbhwkmgbqvnmg", "phrztodtqlrswhvtjzwxcuyoqeaitybmebax", "ottdofdqprevsniddymkurgwatubxvovfxwbgnghllpoudxaql", "ogigsennqiuungkxkgqjypghbkk", "mxosdfapmpmenwwatlofwgphzelypvwambspapteaoroksfg", "txvulmasdlbiwpwtgpodoquxedsrfokt", "mdhnmnwfqyiberhhaiykjcffy", "jjfwgysuxln", "vgymoxaatvlpnvgydowwaejpchcpbiq", "zolcuncxzmtwbexvpcigpivymyooofgjfgoshuuxlw", "lamfravuvtswhgggvsnyfezxukveynlsotavvcgurwtgrssha", "ooeliuvuuqyepofehn", "ahbqreqvbvtzjzmuljwhjfhkiobnanujgjlobiyyfrfhcl", "znjjuhpqmmzbpxpnroamzez", "vxccmwfxfwwwi", "fsxxsaaxreoxiphxhkjydpjnqxuvyiwzuiwrrhc", "cunkajunlnmmhqmiaiahchozehazvtanpwtl", "mvqukbchxlqfnfo", "rxreotciqbhwjsuhpvjzhntfnggbjzx", "pxjxmigagejtqocldejvhmdlapvbmtfayvtrawknjcfabvf", "lpqntlnwckq", "gonqpzbdzrrqksfrupjqckhxvpjtps", "zptfahmvvsdactmigrkv", "bkjcaukvdhtsziscwvduoqjcervhwg", "hqcfrlgnjxvlyorcxrvhuesddifoskrhtbfmpnniyhnvu", "wbrieeqbrfngmmqjxoxxdfkqwvkdpkzsxfncoljkgctx", "wlgxrgzkkdcstwwcbvsirjml", "nksavqodkqkxvjfeaiacgxat", "jtqrnqhhpbhrhy", "fimeikztdmjntkwlxxxjzfcxaiyxoexlbmyjrq"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 22423;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> player = {"rtphefbkancebpkpfomuczoshadgsyprfwtf", "ecwoqijprnenkfnzgv", "ksbntqtxqqujbhdseprxkkbdannvwkgbqckeabncobrltxfp", "ymkfiyhlqyplzwzhyycbyovhvvpkfq", "ymkfiyhlqyplzwzhyycbyovhvvpkfq", "fgxzoaviwbmbsmip", "supopuswlnutlixxxjcjjboekubdrbcddlnvvuuskrfsxt", "gewepzymvanqlszsmlaedqiogwccaiwcqcmpbhkjlszogzk", "rtphefbkancebpkpfomuczoshadgsyprfwtf", "fgxzoavmwbmbsmip", "rtphefbkancebpkpfomuczoshadgsyprfwtf", "hidrfhrdvjyorkpqegwdrpxlngdcrmkgf", "hsubaqtgvdioutoauzftbqndpju", "ddpaqedowejbzcummslxmdyfcodzmumhqizfiwcssh", "supopuswlnutlixxxjcjjboekubdrbcddjnvvuuskrfsxt", "supopuswlnutlixxxjcjjboekubdrbcddjnvvuuskrfsxt", "ecwoqijprnenkfnznv", "ksbntqtfqqujbhdseprxkkbdannvwkgbqckeabncobrltxfp", "supopuswlnutlixxxjcjjboekubdrbcddjnvvuuskrfsxt", "ymkfiyhlqyplfwzhyycbyovhvvpkfq", "hsubaqtgvdioutoluzftbqndpju", "cemdgloptklh", "hqqngzdixkog", "akjhxsjialeetpokybrldzbjicqzleqeizvl", "cemdgloptklh", "ksbntqtxqqujbhdseprxkkbdannvwkgbqckeabncobrltxfp", "supopuswlnutlixxxjcjjboekubdrbcddjnvvuuskrfsxt", "ymkfiyhlqyplzwzhyycbyovhvvpkfq", "ataxhcevuaentfbwux", "rtphefbkancebpkpfomuczoshadgsyprfwtf", "hidrfhrdvjyorkpqegwdrpxlngdcrdkgf", "rpmzskjrukzgerhtvvsujqgpfwajspnpdokbkzg", "rtphefbkancebpkpfomuczoshadgsyprfwxf", "rsubaqtgvdioutoluzftbqndpju", "hidrfhrdvjyorkpqegwdrpxlngdcrmkgf", "rtphefbkancebpkpfomuczoshadgsyprfwtf", "supopuswlnutlixxxjcjjboekubdrbcddjnvvuuskrfsxt", "xsemfjwfzbdtgghpvvfdpbahchbrbdmthcukehdzjlvneu", "hidrfhrdvjyorkpqegwdrpxlngdcrmkgf", "supopuswlnutlixxxjcjjboekubdrbcddjnvvuuskrfsxt", "akjhxsjialeetpokybrldzpjicqzleqeizvl", "akjhxsjialeetpokybrldzpjicqzleqeizvl", "hidrfhrdvjyorkpqegwdrpxlngdcrmkgf", "baupoljdjxkfoygnmlyuxybxfjxsxnfk", "uqoyurhqhzxljlwduzoifccpbontngjsyvhrwbr"};
    vector<string> dictionary = {"hsubaqtgvdioutoluzftbqndpju", "xsemfjwfzbdtgghpvvfdpbahchbrbdmthcukehdzjlvneu", "hqqngzdixkog", "qiirfjlhqjoyehreqdwckgtvrmvcddvvqexkreapsdyseqmn", "ymkfiyhlqyplzwzhyycbyovhvvpkfq", "ofzrhuyhpykncifxeutxvpktttewihuvubtjqaj", "ispaqusutakjqzjcoxwqqjrdmw", "hjdgjuyxedzdknmjbcd", "bjdkbcklesavhxtmfpz", "hoekkdbawqdmmqnofkgbgcgapmojmei", "roboxyqnvcrkrqmtxtkn", "axejuveztljvwccdnwqeaiiz", "baupoljdjxkfoygnmlyuxybxfjxsxnfk", "xlgmtpmwmmluvxpdgmahaygbfzlp", "ataxhcevuaentfbwux", "gewepzymvanqlszsmlaedqiogwccaiwcqcmpbhkjlszogzk", "rethiggeabpm", "rtphefbkancebpkpfomuczoshadgsyprfwtf", "ecwoqijprnenkfnzgv", "cafcydwtdvygstyksfyzfmiutairgnmspriw", "ltzcdbmeqafisastrqukqjrbrcaxeseidxqficnvmsxkxpexvr", "ksbntqtxqqujbhdseprxkkbdannvwkgbqckeabncobrltxfp", "oeclmuttnsyqoypxm", "bzzvxpdmnifcqnqsxoytbzjupwswfaqafjufjvskhfokanngoq", "uqoyurhqhzxljlwduzoifccpbontngjsyvhrwbr", "bukieljyqimldzwwfxfxkuhiwgtuoulxofqdzd", "rpmzskjrukzgerhtvvsujqgpfwajspnpdokbkzg", "cemdgloptklh", "uwrhjrssndnkkjdsipnexucmorrxxnjizulr", "paxebjubwtdgowu", "akjhxsjialeetpokybrldzpjicqzleqeizvl", "laqyxvbnkpzlaalailhkilndtm", "frdartpkdgccvkrbrhdfsmhvlrkpiii", "tqsktatatxkdssxlailfnlkrxqibwdmdf", "xiclbxwmtzsuiyjxhvtfimgtpgawugddlcfapib", "fgxzoavmwbmbsmip", "yatxjwjeratirbwlsgihkaprneidebnojwedshdh", "hidrfhrdvjyorkpqegwdrpxlngdcrmkgf", "kheovzaetrn", "dkevhzlkeoqmwlvkdsa", "supopuswlnutlixxxjcjjboekubdrbcddjnvvuuskrfsxt", "ddpaqedowejbzcummslxmdyfcodzmumhqizfiwcssh", "wpbvstnvfr", "qbcthjdiifqfowty"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 21077;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> player = {"bidwyhmfdczlnplygkhpzyfeomjgzwqdmxpt", "lmpqhadsmgmeetzftdliterv", "bidwyhmfdczlnplygkhpgyfeomjgzwqdmxtt", "bidwyhmfjczlnplygkhpzyfeomjgzwqdmxtt", "mienwbjmmvnpvgvcsbckerrbogzkdoibhwmofbjmogc", "xbnstvxieo", "untpvapajzosnpupsscp", "sgttpddkzpkzbgslifhumm", "grzsrybbgcnqefmskymylshbtmlxni", "epgwwbawtpvzywfohjlwjaxkpkwr", "wbcbfgjqgbufbxascsbf", "bidwyhmfdczlnplygkhpzyfeomjgzwqdmxut", "grzsrybbgxnqefmskymylshbtmlxni", "aldxlpjknauoyimpzcavwozmtfkbdvnchwuh", "kjvwnjshkiigzqdlkckflxjbjmiphnhqi", "rqpcowelfpcnipubdgorjelcoiv", "rqpcowelfpcnipubdgorjelcoiv", "bidwyhmfdczlnplygkhpzyfeomjgzwqdmxtt", "hmxtfxtzrvbdeqjzelqvnmsnmffnynowmxnqqmdbvukjjvluz", "weyncisgxksyuhxonghghpepzjdmfljsczqqcnhcn", "bidwyhmfdczlnplygkhpzyfqomjgzwqdmxtt", "bivjsjtgxuthkggpaqdzfeslmxtucpzsyr", "xbnstvxieo", "xremdmfyelrnplzxtpweexapmbdxezfaroaxgogr", "epgwabawtpvzywfohjlwjaxkpkwr", "epgwabawtpvzywfohjlojaxkpkwr", "kjvwnjshkiigzqdlkckflxjbjmiphnhqi", "rqpcowelfpenipubdgorjelcoiv", "wbcbfgjqgbufbxascsbf", "aldclpjknauoyimpzcavwozmtfkbdvnchwuh", "untpvaptazosnpupsscp", "hmxtfxtzrvbdeqjzelqvnmsnmffnynowmxnqqmdbvukjjvluz", "weynbisgxksyuhxonghghpepzjpmfljsczqqcnhcn", "bidwyhmfdczlnplygkhpzyfeomjgzwqdmxtt", "weynbisgxksyuhxonghghpepzjdmfljsczqqcnhcn", "wbcbfgjqgbufbxascsbf", "epgwabawtpvzywfohjlwjaxkpkwr", "epgwabawtpvzywfohjlwjaxkpkwr", "untpvahaazosnpupsscp", "xbnstvxieo", "satdldbwkkylcvu", "yhfohwnneqvubjfmvfmdjmqhtqttllblqphpfht", "mienwbjmmvnpvgvcsbckerrbogzkdoibhpmofbjmogc", "bidwyhmfdczlnplygkhpzyfeomjgzwqdmxtt", "hmxtfxtzrvbdeqjzelqvnmsnmffnynowmxnqqmdbvukjjvluz", "lqpqhadsmgmeetzftdlitorv", "xremdmfyelrnplzxtpyeexapmbdxezfaroaxgogr", "epgwabawtpvzywfohjlwjaxkpkwr", "kstkpbixpmmjcplttnuiirpdlkfskfzzmz", "kjvwnjshkiigzqdlkckflxjbjmiphnhqi"};
    vector<string> dictionary = {"hcapbtvomsjfsuscihokigmtfcbrkcvfbhv", "yjouulymtvw", "grzsrybbgcnqefmskymylshbtmlxni", "zjognfeyyacprjwsclknluqarzbhfcbjpeeziktiemk", "epgwabawtpvzywfohjlwjaxkpkwr", "kjvwnjshkiigzqdlkckflxjbjmiphnhqi", "yvvytjkxaqcqgppvvrh", "lapfpbvorsndzzmzoeddfzlkrqmkloxvegoozzqxryesuow", "sgttpddkzpkzbgslifhumm", "aldclpjknauoyimpzcavwozmtfkbdvnchwuh", "lmpqhadsmgmeetzftdlitorv", "hijipoiuffzyiielgsnbgqvatjpklwtxxqqyhr", "yqqjrqhahelmyqxnakkrgckbxzihqxibmubxgackepkxh", "asofuyvgmapxztmvckpvljrvinceuveiroihejwzlpvwbytfqo", "biyrsqyvhhevmspclvbdxrzqkqkpllvqmktqxnrverbfnnyv", "eqhfxcksgnnnexdetxvkeyfeml", "wjzuelrrimrjojrqwbsqmadkplzbtk", "cgredipjreocefxtjsaavocxrpxfrfzrzigryyejkow", "wbcbfgjqgbufbxascsbf", "oqubbxmgwgeymcjeicxqrxdbhxnsptdsqiuww", "msfuabxzszdwpbstihttsatpqjsgnwstrdmpbhko", "sbizebiiuurcdiglbeljdnmejozqbogl", "kstkpbixpmmjcplttnuiirpdlkfskfzzmz", "kaulwqjydezrybvqvnhvkh", "hmxtfxtzrvbdeqjzelqvnmsnmffnynowmxnqqmdbvukjjvluz", "pdsyxpwudzpplzkmbuhcivrzullrspwqskwmvrvcasqlgaitis", "bivjsjtgxuthkggpaqdzfesjmxtucpzsyr", "fnttjrofrtcbdfzoxcjmghqsaeaoqmygne", "fysxyguzdivgrylxh", "jldeqctpjeggagchigocgjepbgbyzb", "weynbisgxksyuhxonghghpepzjdmfljsczqqcnhcn", "edzrftxlxvdetgp", "rqpcowelfpcnipubdgorjelcoiv", "xbnstvxieo", "untpvapaazosnpupsscp", "mienwbjmmvnpvgvcsbckerrbogzkdoibhwmofbjmogc", "satdldbwkkylcvu", "jlpzhzfstocwhheymteg", "ovjnkfxxicmpxbiyeaefurifnxquuqjgiwi", "xremdmfyelrnplzxtpweexapmbdxezfaroaxgogr", "yhfohwnneqvubjfmvfmdjmqhtqttllblqphpfht", "bidwyhmfdczlnplygkhpzyfeomjgzwqdmxtt"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 17511;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> player = {"cikjltdlhalgezluejpvqsoocpvw", "buwkfvcehfcpmu", "iajkofqgydurzegikbnfxtmhdrbiqcmfz", "nbysrdporsqtdmciwfgwmfurpbtuhwhplxggzcirihqlckdnru", "cikjltdlhalgezluqjpvqsoocpvw", "qlbphyyfnlasjrqwkxyixadslghjoqatahrwwaudknw", "iajkofqgydurzeyikbnfxtmhdrbiqcmfz", "igragbbgbfbgqbirvdkvakmdckstcfxhk", "igragbbgbfbgqbirvdkvakmdckstcfxhk", "kktvnzcjewdzezdokmfrutyxhnogx", "mdoqfbhebeikw", "buwkfvcehfujmu", "jikjltdlhalgezluqjpvqsoocpvw", "cuzsnyixxkadsmmxvkgskoltxhxjcnsxayooxpea", "rxvfxwvitzvilhfukm", "hhshckyafuqtmzksvkmkbgxifagxteodyirvsvesrq", "mdoqfbhebejkw", "wpmmomkzzgqdmjjtrkn", "cikjltdlhalgezluqjpvqsoocpvw", "ymsnohwafsuhacljglmwikgtywhdxdlqnztgeznfngjbdhp", "lmtfvqxdrcfimqndbbxmbst", "mdoqfbhebejkw", "kktvnzcjewdzezdokmfrutyxhnogx", "wpmmomkzzgqdmjjtrkn", "ymsnohwafsuhacljglmwikgtywhdxdlqnztgeznfngjbdhp", "cikjltdlhalgezluqjpvqsoocpvw", "cuzsnyixxkadsmmxvkgskoltxhxjcssxayoorpea", "mdoqfbhebejkw", "nbysrdporsqtdmciwfgwmfurpbtuhwhplxggzcirihqlckdnru", "gwlfennywhbtwmvydyajmfjojlhlljvgglbtljykevymrh", "nbysrdporsqtdmciwfgwmfurpbtuhwhplxggzcirihqlckdnru", "bnwxxpxrcmexgxlnsxgcsfgrg", "wpmmomkzzgqdmjjtrkn", "cuzsnyixxkadsmmxvogskoltxhxjcnsxayoorpea", "vznejokxjblcnsneklpcuibqqomzfzlbowpojlec", "zgcxrcwqtfikaudftufqrjczruxaqlgixlbsgmedds", "ugyhccsiawqkzbfyj", "iajkofqgydurzeyikbnfxtmhdrbiqcmfz", "vznejokxjblcnsneklpcuibqqomzfzlbowpojlec", "igragbbgbfbgqbirvdkvakmdckstcfxhk", "cikjltdlhalgezluqjpvqsoocpvw", "bnwxxpxrcmexgxlnsxgcsfgrg", "cikjltdlhalgezluqjpvqsoocpvw", "rxvfxwvitzvilhfukm", "ymsnohwafsuhacljglmwikgtywhdxdlqnztgeznfngjbdhp", "ugyhxcsiawqkzbfyj", "mlwraeghyhwvajczxtxmialyoalvbdmczrxljjnrfplxlsas", "cikjltdlhalgezluqjpvqsoocpvw", "mdoqfbhebejkw", "rxvfxwvitzvilhfukm"};
    vector<string> dictionary = {"ajargxvhamebuwugls", "qjqspwqujnbynzcheenjwdun", "wpmmomkzzgqdmjjtrkn", "qlbphyyfnlasjrqwkxyixadslghjoqatahrwwaudknw", "mbbquljyznopulncllmziwnyu", "lmtfvqcdrcfimqndbbxmbst", "mlwraeghyhwvajczxtxmialyoalvbdmczrxljjnrfplxlsas", "ueussojmxvvbkafaegjmxyhmcaqobjndmfp", "egzuvvdjkruay", "pllxrwmbwks", "xeurgajzjiynoxqkjzx", "hjcfanswyzpuwimifw", "iajkofqgydurzeyikbnfxtmhdrbiqcmfz", "vznejokxjblcnsneklpcuibqqomzfzlbowpojlec", "fuaesuccfrdupmfhhbbrf", "ebtlxdnmjgsjqexyiqyzudfspzeauxxxarm", "xstahssvoscaihcfmyxxexy", "bnwxxpxrcmexgxlnsxgcsfgrg", "lktijcvqglezsmsjnatbahewafrdeu", "hmhkxdxwovvk", "nbysrdporsqtdmciwfgwmfurpbtuhwhplxggzcirihqlckdnru", "eprdyinnyipywsnfykzwrwhlbouedm", "igragbbgbfbgqbirvdkvakmdckstcfxhk", "mdoqfbhebejkw", "qfmconkzicxehcggohbulgkmsaxgedco", "kktvnzcjewdzezdokmfrutyxhnogx", "hwyenxqgwtzbobcnissvwptydmvlywrxjjmiknlhszxxwjtp", "hhshckyafuqtmzksvkmkbgxifagxteodyirvsvesrq", "buwkfvcehfcjmu", "zgcxrcwqtfikaudftufqrjczruxaqlgixlbsgmedds", "bsooyiwsalbdmvqfthnuaabvljjxxsgynbpxvuj", "tpplnjdvxra", "ymsnohwafsuhacljglmwikgtywhdxdlqnztgeznfngjbdhp", "jqomcncxrvlngldqtschoponfmsnylbjmb", "ugyhccsiawqkzbfyj", "cuzsnyixxkadsmmxvkgskoltxhxjcnsxayoorpea", "zxwvvfhuawkvogbyxhdfrrznbqonasqhegnybpsbjgqceiiqfq", "picxtghgptoetixaihtebnmtkjxahajilxutsnbtzith", "dsjxwqnkvxcmjazbxkzfwrxtggpdihaznizkxe", "urlktqtdwtntcdyzkshyierbjvhzbbxzlbdiwgjrfklcnzx", "rxvfxwvitzvilhfukm", "mgxzobxtmegqxcbcfxyphlbmohcuzvlugakdebcofnuwqxctb", "gwlfennywhbtwmvydyajmfjojlhnljvgglbtljykevymrh", "cikjltdlhalgezluqjpvqsoocpvw"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 19561;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> player = {"ugpfqpymmcsaevhmad", "xidwptpbfkggtfwscouorpitssgbvkcoxshzofglfodkxru", "jfbpimpfbzzsihigpckjjpabrtenffvutifp", "wzyqbjmvfzkjnxxglnr", "lxzbsvztmkyjmzqshqpcujxumuslmpoktyr", "wfkivibswoakjvaglaydhjyhlkcbhndez", "xidwptpbfkggtfwscouorpitssgbvkcoxshzofglfodkxru", "xidwptpbfkggtfwscouorpitssgbvkcoxshzofglfodkxru", "frieugpvwioexyehxnjvprwdpb", "xidwptpbfkggtfwscouorpitssgbvkcoxshzofglfodkxru", "olqfgbttfblhptqblzrgewmiwiveorimusgioxkpmdwjkcnt", "wfkmvibscoakjvaglaydhjyhlkcbhndez", "lxzbsvztmkyjmzqshqpcujxumuslmpoftyr", "wzygbjmvfzkjnxxglnr", "olqfgbttfblhptqblzrgewmiwivkorimusgioxkpmdwjkcnt", "wfkmvibswoakjvaglaydhjyhlqcbhndez", "ugpfqpymmcsaelhmad", "ybxfckllxvdjtdzenqonba", "wfkmvibswoakjvaglaydhjyhlkcbhndez", "wfkmvibswoakjvaglaydhjyhlkcbhndez", "lxzbsvztmkyjmzqshkpcujxumuslmpoktyr", "ugpfqpymmcsaelhmad", "avmxsflzcg", "exxkdnemwhtlptrp", "mwdvdvgdnwglwm", "xoyskrevkcaqoqaqxkniufqrklomoicsnaouuhfmpr", "lxzbsvztmkyjmzqshqpcujxumuslmboktyr", "jfbpimpfbzzsihigpckjjpabrteqffvutifp", "exxkdnemwhtlptrp", "jkvhpxkrbkmuausr", "mwdvdvzdnwglwm", "jkvhpxkrbkmuausr", "wfkmvibswoakjvaglaydhjyhlkcbhndez", "mwdvdvzdnwglwm", "mwdvdvzdnwglwm", "anskcsfbdyqrxk", "frieugpvwioexyehxnjvprwdpb", "ecedngsxhntyqaknvdimhjyirkw", "mwdvdvzdnwglwm", "jkvhpxkrbkmuauwr", "lxzbsvztmkyjmzqshqpcujxumuslmpoktyr", "mwtrbxggsqlkzlvlcokaradwrvaskmkdqpv", "jfbpimpfbzgsihigpckjjpabrtenffvutifp", "mwtrbxggsqlkzlvlcokaradwrvaskmkdqpv", "frieugpcwioexyehxnjvprwdpb", "wzygbjmvfzkjnxxglnr", "axnsywlbfepjdxvlrdjnqtvfzqjkqjglzorglupjfxywzt", "xidwptpbfkggtfwscouorpitssgbvkcoxshzofglfodkxru", "axnsywlbfepjdxvlrdjnqtvfzqjkqjglzorglupjfxuwzt", "exxkdnemwhtlptrp"};
    vector<string> dictionary = {"xkofrpnyxgenucloznoxlbqt", "xoyskrevkcaqoqaqxkniufqrklomoicsnaouuhfmpr", "wzygbjmvfzkjnxxglnr", "axnsywlbfepjdxvlrdjnqtvfzqjkqjglzorglupjfxywzt", "jywtawhordutlayeefcrugllalamqzhczoershlhj", "ybxfckllxvdjtdzenqonba", "ffnwwwkmbcogeuspxavdhffkzynemwbjaimsfifgwbstst", "memyueiealuvawdkgodstybyoeexakmkzmdrdb", "ugpfqpymmcsaelhmad", "xomdpbzrvppuukgktytugzmmcbeky", "uzrklycusehafjnairyryxahmhaqpilzumyp", "hxcxonnwaxzqiaoqydbgaocvxbitbissxhxnhoa", "efhnavgalkpdoxxxsuvtvguiaoy", "mwtrbxggsqlkzlvlcokaradwrvaskmkdqpv", "opklhxucfuhzatgvsrcczqw", "fzuejemiyplfxhsiithftdybvwcesrramxwnzqfqqbssbrtr", "jkvhpxkrbkmuausr", "unzqyjhivznobbmgaappetepohlniyrtotuqbifaplua", "mwdvdvzdnwglwm", "avmxsflzcg", "jfbpimpfbzzsihigpckjjpabrtenffvutifp", "tfpumybpoqfphurlletwdrtfzwmwasahedikkfaymwefgy", "urdxbyqkgbyyxupfstnsryvlbbonyylbrhrojbebvxqagczibp", "exxkdnemwhtlptrp", "lxzbsvztmkyjmzqshqpcujxumuslmpoktyr", "sundozpcxokhnlfpzhwufekvgvaajqxb", "olqfgbttfblhptqblzrgewmiwivkorimusgioxkpmdwjkcnt", "abtogxagnjrzfxtfxbm", "anskcsfbdyqrxk", "kknculrbrzsqycvtendsyri", "fkqckaqrjnawsepuaqrkggbsecx", "bhglxmzcwpggdumqykpgprwoocwbzmqyd", "jbxfnwsdihgxowmoyerzigolvrlfubsugfzu", "auysuvjkgrfkxnpobs", "wfkmvibswoakjvaglaydhjyhlkcbhndez", "qutnxrduxuxtmknelpbfzgmocxeddxuipnkxyrxtp", "xelfhwgbksdbwswwhrcfrdntzuqndp", "frieugpvwioexyehxnjvprwdpb", "dtglwtudvcvgfxbzqfecuinlwimlcegpobe", "bsmnetrrrgytihazwfgmlbihadqofbfmnyto", "xidwptpbfkggtfwscouorpitssgbvkcoxshzofglfodkxru", "rydfpuvixmxoyvsheihqqwdzivxexhlnxwxqn", "xnchumkjwgajf", "ijfptxaxtarbfczvaydyqeoasnuwhdpdawvch", "bvlwfnajsulsjzsdmzqexmtsjlzfxy", "ecedngsxhntyqaknvdimhjyirkw", "wjzrscrzlnxbigflcs"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 16806;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> player = {"lidi", "o", "lidi", "gnbewjzb", "kten", "ebnelff", "gptsvqx", "rkauxq", "rkauxq", "kfkcdn"};
    vector<string> dictionary = {"nava", "wk", "kfkcdn", "lidi", "gptsvqx", "ebnelff", "hgsppdezet", "ulf", "rkauxq", "wcicx"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 186;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> player = {"ppucpi", "facg", "gfvoeygi", "auqfyky", "fdkbe", "haqv", "hrbouec", "ihsznxgnd", "mfknmj", "typtj", "zffnfi", "zqyla", "mfknmj", "toch", "eltrgfqsf", "hifvpztftn", "vanyme", "gfvoeygi", "gfvoeygi", "cjsvfxvczlg", "ytatldljr", "ytatldljr", "fkkzxsqbsm", "zqyla", "cjsvfxvczlg", "facg", "zffnfi", "mwhrry", "oxowwusk", "haqv", "zqyla", "gbwunglo", "ybrvolr", "haqv", "zffnfi", "mzwk", "ppucpi", "zccvm", "hifvpztftn", "ywqz", "ppucpi", "ihsznxgnd", "dahwc", "llrj"};
    vector<string> dictionary = {"ptitgaj", "vhwhoos", "facg", "nsptxmmg", "hrbouec", "mzwk", "mwhrry", "gbwunglo", "qwoi", "buuhrghjb", "zffnfi", "oxowwusk", "zkbyucmxjwr", "levpuszmen", "fkkzxsqbsm", "mibri", "ybrvolr", "hifvpztftn", "ppucpi", "haqv", "mwtgfgoolea", "ywqz", "toch", "rqycm", "gfvoeygi", "drdeq", "ytatldljr", "ihsznxgnd", "yvrazrfa", "typtj", "qmwh", "zqyla", "llrj", "dahwc", "mayizlhl", "eltrgfqsf", "gpcjcgrqaps", "nxkfvq", "mfknmj", "cjsvfxvczlg", "hgqfppycrq", "vanyme"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 1205;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> player = {"eddktvpymkhtgyidoncqxhgm", "qqogyjhqvexxkqmflyezteym", "ifohgdrxreeprpblwxhficz", "wxhiyetdwexiduypbicgmvzg", "olqhadxpridzvxatrcvaloxw", "kltqtyolmyjuynaibuqloju", "ifohgdrxreeprpblwxhficz", "vpscxyrqgmxhxcbutcumito", "eizetdahvgbwlakaosyllmo", "ifohgdrxreeprpblwxhficz", "btnyweolzfxskupdmtkwhdlh", "qlilzssfxxvgaryyibtnqhk", "kwkzzhkksszpogyacwnanvng", "mthguxqcygebwwaekfzvzey", "toednhebpivlwrmcpvxkpui", "qlilzssfxxvgaryyibtnqhk", "zewjyvtxyxnmvhvwbaqvhik", "xhdiagztpnostoncyjiqxajx", "tznuwhyvxbpfknbspaabgyv", "qlilzssfxxvgaryyibtnqhk", "vpscxyrqgmxhxcbutcumito", "kiylrprkolwheopkucpzytr", "jqycmzljqbwasdtpdodmpsx", "ckvvvwjegobdofqdhhqemwhp", "wxhiyetdwexiduypbicgmvzg", "jcycqmbcsdvfvilggjdovsu", "hzelyrgfirtxyrvghueyqvg", "ifohgdrxreeprpblwxhficz", "vohttyxpotycwmzyeqkgabqw", "jvuqltcugpiobitwsacgzmll", "olqhadxpridzvxatrcvaloxw", "qnkrxtymzgccctqpwxacbvts"};
    vector<string> dictionary = {"vpscxyrqgmxhxcbutcumito", "toednhebpivlwrmcpvxkpui", "mthguxqcygebwwaekfzvzey", "uilitzozxhkpbhsdmdqyupc", "jqwoyykabstbjgrcfgifgyxg", "vhebfydfngykymujllyfgfm", "uvgtnfwjszmvokonccecpib", "vohttyxpotycwmzyeqkgabqw", "bgiktcrohqzyjxpvfjzmgas", "ocgirhzrzojymiyfllrivch", "frtqdeuogljwihbuwqeqlzk", "lidydupziwwxducrtjvbonu", "xubkikuuqjbdzfzbyffmvnz", "xwdhqnboevdhoaxewaieplig", "iezizrxcaidhzwhmwiqghqd", "wiprjjimqspuqfwbmiuaaaz", "lkwjywmaegjnkpkqztcxbng", "kiylrprkolwheopkucpzytr", "lvcvdcaxqucwwyvwzxcsndb", "wxhiyetdwexiduypbicgmvzg", "xhdiagztpnostoncyjiqxajx", "wkmsvzklsjacwnjnswjwnnk", "jqycmzljqbwasdtpdodmpsx", "ifohgdrxreeprpblwxhficz", "jcycqmbcsdvfvilggjdovsu", "lsanponaofknxjfrjtlwqdok", "olqhadxpridzvxatrcvaloxw", "tpbgsjejwkxczrdviiwzcxus", "zrzqoelccyjpzsxfyxpcxgeg", "zewjyvtxyxnmvhvwbaqvhik", "qlilzssfxxvgaryyibtnqhk", "doujhotjhwguvyhycvbdiuzl", "jvuqltcugpiobitwsacgzmll", "eizetdahvgbwlakaosyllmo", "eknnyudspyixqxlflncnwep", "qqogyjhqvexxkqmflyezteym", "eddktvpymkhtgyidoncqxhgm", "qednpiqaxexghmsvprimxekv", "mfatwefuvxdtxjdmaeujbkc"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 9322;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> player = {"wkzeqcojmmcevreshulwyj", "nrublvxfyjlnsxnezaejpg", "fpdapalyaepllrpfahbi", "kdqezqlzcwjnntvwatpurb", "ygldsicfyiwnvjgedopdrjp", "jyldpihmqvypanlchiqc", "yoazpjgyhyiqjehfgnho"};
    vector<string> dictionary = {"zqomomyiweinfletjcastkhl", "wkzeqcojmmcevreshulwyj", "yoazpjgyhyiqjehfgnho", "inffbqqmdelcirndqcppxsi", "eldwrbefemlfmjzvcpvam", "amjfrgjgwmuengtrglwy", "ihmamzoxhviuwubjgflf", "bucjgxlpixbipqjrznohaqub", "uciyzuvjtwlksdiujwfawq", "cmtvsfycblzrxzncbtcn", "ydtsjcspllahfetsyaynsoxv", "jyldpihmqvypanlchiqc", "xgsothcqkecqndcludhev", "ajloxswpfevqpmpnqugq", "oizafmlgpijjqhprokldljlm", "ffmffmrpipovoscoqswjrp", "hdcgetdhuxgzsdphthccwmmy", "lzeftihgdwzeqwnnwcqyfg", "gfrfakanajaoxaborvjm", "zyqnsdrjbovzlkxfsdqzs", "kfblaufmuscsvshmicip", "cguxaouyayjuqwwibznlaj", "dhktnyzephcuzvjdltdh", "ygldsicfyiwnvjgedopdrjp", "nmnmrcuiwubozhyihrfosz", "njengidlrupxvqzoigkkkys", "nrublvxfyjlnsxnezaejpg", "waoqzuyvhzjkjpsvpfxsboys", "xwtgmzoufxlpnzfqmdwd", "rdcgiyigcmcpkapjdhjq", "udunyjuhqcmxhgmhjddqbwff", "kmnlbpjlfaxwxsbsfxqeekpj", "gwoojhngedvazjhumlkknd", "kdqezqlzcwjnntvwatpurb", "fpdapalyaepllrpfahbi", "lzytwczzwlfjsyjdbzmeii", "xsjkwhdtpttozfmnhxiivcj"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 3181;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> player = {"fbqufgyunezedzdgjjcrxxudpjndjzukc", "uqndqtxbddxtqlryzggmereezaovyi", "lgyvsivgrsnhbrkdnuqcvnvfloxmzipvyfbaqj", "barloaxueoaijqjvxfxgxoohwsrzfkn", "nmexdhxckailrfmfnqlhdexsxdmicjso", "qqhqxklnjpppyhgwddftzfornr", "papmkailworzomepinfiicaybdldwxfztgtzqr", "fpyguvjqnyqbbeneyxgbjduezqjiiunz", "krrahvycvdzicdkphgzlnupfwleohigtnbr", "ytpgepfpzprvnuftrsqyvqhghtxbqaxvj", "xrkkiuztiihddzyxefoipefiqsimskcbo", "yohvrpiqrkbgjealbrrelbxcnhefqll", "sagtffjpnmmoucgcqeervwobpwlabqjxg", "espdfcnxmxjqzegvilvurbnipwizkmb", "hbrjyoqjsnvkngmqohcnlgcalyid", "pqbrmeiopqclmzvymlzspjyyheam", "iilmnzhtiajaqdhkpwjhbagbd", "lkzjiwakqrtpdjpvjioeuytooqdtmukudgawi", "rwntoslwtcptwlglmmvbaawnyvrvgdxbrzalpm", "twjwniozrfsqzhbawlaexpxtqmp", "tznsghnkzdmxnqcvojpspawejrejoxhle", "dbrzsgbgtuvozrapxyuugmfluvjgkwkggbyq", "dykgcwlcamohdcregtrbpjgobngzcshmljqgne", "vfpccpplmlksfnielnppbvcbh", "cabsjjsuiqxkbbidpcgmcwkzyypteaseuk", "nkvidcxlkxmkgtllkmfizjuzycesjvhmqwxwk", "rvhcxzxyzwhrfqiisewrgazebgdqw", "cukudsvozgvxllqsugnwdggsiyh", "jphzsnypxrpepggkpgmuhcwlebuz", "ecwolqohrbdoutghggoveyivaqzrksehwlp", "fjwlonstztwggoeaztwsmfrs", "qxrqifgsaqkofqhmkcakowjmmpp", "ewjpdxfyrfbxywxlvzigqskwn", "tcshtafewxcvaphhpvdkqfeqahiuknv", "ubslvoncgzqymbtfcbqnwdpzqjfmftyhivpyz", "givsxgyhjtbplyousrlswmvhwssci", "devrmmshnmejffxwhnkryrxqztlpfgkzefxx", "fcriobktybywhjkllbcrxiwfluqrphlepqyj", "twkkettosdbdkpqgipgsiurjmgd", "rdwwpdxvhzdzwkjupjhwdjmcumaqe", "yxngcewsbnkygayasnisimrh"};
    vector<string> dictionary = {"fjwlonstztwggoeaztwsmfrs", "sppgqnbbcnmkkydxnnaisdhcedxqluqrrcg", "qbhuvekafvkvontvtigtggwrgnmakcar", "gxaapzcbhohgeiluwbiyssbdscuzruy", "biiufesnvsrtjwnlgaegfyhimzbiaibwrptzou", "ejyfhyeyphbkuscwqxsphmyjf", "drfbecubaxofacvexekfhoimkihlwn", "hugvifpyabvxmfwbugstvysunshteozrcvp", "wovvhflrcauuajregcyzxmnejjvb", "ewjpdxfyrfbxywxlvzigqskwn", "ytpgepfpzprvnuftrsqyvqhghtxbqaxvj", "dfpsensirxaldhhmiggkinmdbqv", "dctbwruomkhceqbgbbjhfehia", "ievorifxxceieibacntdegagopyorrme", "qkvvwuzrdcquzpxmruaawyols", "iexwmtnhrlfnwlqewrecrkeyeiiszracitpw", "wrnvbsmzklixgymwvnuqmxseclt", "yybjshoalzroqgbpvggfakjkhi", "ymzzjahfdivjjigqzbhagolwwqqkidqnj"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 2290;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> player = {"aqyevtfpmngnueokfqumms", "jpmaqllqrpxxwotrnhkgdenkx", "qpdttfdsbzrviywjuesogc"};
    vector<string> dictionary = {"lexjcshdrpbsmuxssjrkzueb"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> player = {"ohldtzynzdqrlowgboxxgtohlmmfuhanpmwanwxcfw", "hdaqpmdrargstiprrprbinzljnbkfpgdyjnfksvvpfs", "htbbmzgkqhmexapmztztjiuzldsyxmsigiurpxjtq", "xalohduvtreruvbpvlxjuhwrqotoylgskoslbapl", "exnapwugpyukfaenhipxzgahangfhhdmmd", "ihwlaadosuinpoitrqsqjpecqaqsnocrghizxbvjzlqb", "jmoaevpltodooypdxjjaxkiqkgwndaabwrcdnpguuek", "slyozsvtbmmhirhorwdoubmjalavwqetnvhoeikrbr", "knuollhszmtsirahbppaotpcbguetgxfkrgfnfx", "auhdmbcrwfwqjleaewddzmekxzdecrxntxxavaoc", "hxlwragphfqaqpquztpzjdnohzgqgbpkkttmzc", "konhrbvwyrboplppwkwtjnnupxifwenegfpfan", "xjxuptbhtzdnthifntrkobyelzxrnexnaqklztlzywuj", "biiybiwvyemnruuxmkdmhkjumgfdpqoumjqro", "bqnfllbolgkuutqycwdlhbfryngsmjsfkwkosugdyesj", "ypbgyknjhjurlhjaoraqtxbvxibdmuffyxjigblchg", "jczblqocyziwuhcppnvwmisfpcmidtfjaehyf", "biiybiwvyemnruuxmkdmhkjumgfdpqoumjqro", "qtxtixmvqrnsttttcajvdrnawrzeqnhiisvaovq", "ocitgbettaefvmdsbyndwwmvnsajgjdzgwbbiumx", "hxlwragphfqaqpquztpzjdnohzgqgbpkkttmzc", "bugnifemupcshyfdynabltjkjtjlhosoeelrorbxcie", "hdaqpmdrargstiprrprbinzljnbkfpgdyjnfksvvpfs", "fzrixrzjlwmshhhwvsjchvnkxgqnrnplhxetpgurgpv", "uhhfkzkcdszssjzntwsrummuqgbbzkcsvat", "uhhfkzkcdszssjzntwsrummuqgbbzkcsvat", "qwxvdltgyckkorvtgoumaesittwaehksqzl", "dfzmbacyadxckwsuliunsliocynlaklewoofzuokiiz", "dbeyzldqlqewkvgxolazedemtvbwqodglj", "grlxttdptofhkavwaymulnnbmtgzdrbcvawnzsm", "plfnznbanoakowijtlnlkoqdcifphuqraieehyatev", "jczblqocyziwuhcppnvwmisfpcmidtfjaehyf", "biiybiwvyemnruuxmkdmhkjumgfdpqoumjqro", "otjcrwgfgshptcpyapiibxbextztciididvgzt", "ktyagbeixrmjarahlmltgxwadygayvcyac", "fnxtpmucztkvxdgrzqahohrhoyvzxgukhfmscerkl", "hxlwragphfqaqpquztpzjdnohzgqgbpkkttmzc", "dzggofwslsfsznkpfitynsmhzzxruipihzwrhcvkky", "bkqlqclfhhnrjgmicujrmpiqnbpwdmnoqxhdwyrypx", "otjcrwgfgshptcpyapiibxbextztciididvgzt", "qllbkyqgfolyjkvfbfbsdvqntdlbljbpjrcl", "nqhapkvbuijxuyrgudubmjettcgfrlekybtpfsagfuwu", "dlommygeyrviecjnppcicyixjmojdcnqukhbzbz", "zwbaxhidkpmkfewiachkyuxpxrrtagsvvvqymrrlhu", "cpaefdrfykslxemdkynkujrptkwrhegfyjpga", "nqhapkvbuijxuyrgudubmjettcgfrlekybtpfsagfuwu", "swukwbelcynintsyvnzlogmlqlmqsyswqbrlfdqruf", "wkwtiqmlyhthboeyzqjhnlufszedkzkjpvhvkxzsqzshw", "dlommygeyrviecjnppcicyixjmojdcnqukhbzbz"};
    vector<string> dictionary = {"utaobqkywgpxodgrdcfgujnkikyzbihqkxbhqkytff", "dzggofwslsfsznkpfitynsmhzzxruipihzwrhcvkky", "iqhcomgtpytkslxryxrvaxylgblmbyvebn", "dbeyzldqlqewkvgxolazedemtvbwqodglj", "jczblqocyziwuhcppnvwmisfpcmidtfjaehyf", "jmoaevpltodooypdxjjaxkiqkgwndaabwrcdnpguuek", "mcwnkqkytncpgwrildbvvnykfddhpynzsrtsazpopunnp", "wkwtiqmlyhthboeyzqjhnlufszedkzkjpvhvkxzsqzshw", "zbngbygjqkmtjkreysmoedrwbehsuitgvaipqbahxkxvx", "cglpaftobkempezyufwjlxpajlwypmthsi", "qllbkyqgfolyjkvfbfbsdvqntdlbljbpjrcl", "grlxttdptofhkavwaymulnnbmtgzdrbcvawnzsm", "hdaqpmdrargstiprrprbinzljnbkfpgdyjnfksvvpfs", "uhhfkzkcdszssjzntwsrummuqgbbzkcsvat", "hxlwragphfqaqpquztpzjdnohzgqgbpkkttmzc", "bugnifemupcshyfdynabltjkjtjlhosoeelrorbxcie", "dfzmbacyadxckwsuliunsliocynlaklewoofzuokiiz", "biiybiwvyemnruuxmkdmhkjumgfdpqoumjqro", "ihwlaadosuinpoitrqsqjpecqaqsnocrghizxbvjzlqb", "fzrixrzjlwmshhhwvsjchvnkxgqnrnplhxetpgurgpv", "xjxuptbhtzdnthifntrkobyelzxrnexnaqklztlzywuj", "nqhapkvbuijxuyrgudubmjettcgfrlekybtpfsagfuwu", "bqnfllbolgkuutqycwdlhbfryngsmjsfkwkosugdyesj", "plfnznbanoakowijtlnlkoqdcifphuqraieehyatev", "eceacoalmkivnwmczfagypccpjcecidpesfw", "auhdmbcrwfwqjleaewddzmekxzdecrxntxxavaoc", "dlommygeyrviecjnppcicyixjmojdcnqukhbzbz", "fnxtpmucztkvxdgrzqahohrhoyvzxgukhfmscerkl", "mprjelzlcdtvdtwypxczgaigwcthdtneslt", "knuollhszmtsirahbppaotpcbguetgxfkrgfnfx", "apfcomivizmlmpwogbwbxklodftsbeyzmjy", "ohldtzynzdqrlowgboxxgtohlmmfuhanpmwanwxcfw", "cpaefdrfykslxemdkynkujrptkwrhegfyjpga", "ktyagbeixrmjarahlmltgxwadygayvcyac", "otjcrwgfgshptcpyapiibxbextztciididvgzt", "konhrbvwyrboplppwkwtjnnupxifwenegfpfan", "xpnzblaamclbxgdxbsknnuksicduzbelfehbk", "wwmsljjnvzlccimndsvvfdwiwfynecxtjrjfsotpwijkn", "htbbmzgkqhmexapmztztjiuzldsyxmsigiurpxjtq"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 47103;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> player = {"xgygwtkossspseexjwzfrbtpmpzbozjmbebsgxr", "rcqbswvbmzymaehvzykkehwoqq", "ldcidaidbkudcgadczbzye", "mhhardkhqwcvyaumjj", "kjysajnhxqyldqswkdnqhmyahgmvgq", "rcqbswvbmzymaehvzykkehwoqq", "mhhardkhqwcvyaumjj", "xlrauoauczamnfkamfcdfucorotucgyq", "zeeaxwntsmokibajfzfokmdzp", "xlrauoauczamnfkamfcdfucorotucgyq", "mhhardkhqwcvyaumjj", "ldcidaidbkudcgadczbzye", "ldcidaidbkudcgadczbzye", "xgygwtkossspseexjwzfrbtpmpzbozjmbebsgxr", "yuofrwdbkkwsifovcdqbn", "mhhardkhqwcvyaumjj", "mhhardkhqwcvyaumjj", "rcqbswvbmzymaehvzykkehwoqq", "rcqbswvbmzymaehvzykkehwoqq", "zgpndikkylabfdkhhtlzgnsckvitfqs", "mhhardkhqwcvyaumjj", "rcqbswvbmzymaehvzykkehwoqq", "ltzdlwluypkydupffqc", "ldcidaidbkudcgadczbzye", "ldcidaidbkudcgadczbzye", "zgpndikkylabfdkhhtlzgnsckvitfqs", "mhhardkhqwcvyaumjj", "zgpndikkylabfdkhhtlzgnsckvitfqs", "xgygwtkossspseexjwzfrbtpmpzbozjmbebsgxr", "xlrauoauczamnfkamfcdfucorotucgyq", "ldcidaidbkudcgadczbzye", "yjamxbeyrximyxloifrmwulvlmwyjsug", "zjnwsenqpvfvwxbegcmxwidfzyohkdskqilkkrjk"};
    vector<string> dictionary = {"xgygwtkossspseexjwzfrbtpmpzbozjmbebsgxr", "mhhardkhqwcvyaumjj", "ldcidaidbkudcgadczbzye", "zgpndikkylabfdkhhtlzgnsckvitfqs", "rcqbswvbmzymaehvzykkehwoqq", "xlrauoauczamnfkamfcdfucorotucgyq"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 4990;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> player = {"xmkhhclyjkykaibjaw", "oqtbgsxwiiql", "xmkhhclyjkykaibjaw", "xmkhhclyjkykaibjaw", "xmkhhclyjkykaibjaw", "xmkhhclyjkykaibjaw", "pgisqkuhbiqfbygkyofl", "xmkhhclyjkykaibjaw", "jyumdwstmjcewrn", "oqtbgsxwiiql", "pgisqkuhbiqfbygkyofl", "pgisqkuhbiqfbygkyofl", "oqtbgsxwiiql", "xmkhhclyjkykaibjaw", "whdpfgwtexyffisrberf", "isxmyyzeldalanhmna", "pgisqkuhbiqfbygkyofl", "pgisqkuhbiqfbygkyofl"};
    vector<string> dictionary = {"xmkhhclyjkykaibjaw", "pgisqkuhbiqfbygkyofl", "oqtbgsxwiiql"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 868;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> player = {"lgdpllkyusrzkdqgbkvdypjmpixhcbuouvsuepilgq", "xvmqzctmqcicmyfwtyvgyb", "xkawddquqtmtqgvoaymwwli", "fwnsxmonanuthtroq", "civrbkyqkbrzxzzlybsupunvbdaxtualxkhwzycoyfi", "pzubywbpfmdoioieeubyb", "iosogkyfbfwjbxfekimoa", "jrfcuecdcyoufpexrlzvhh", "uckrmgyppkanprrpagdpag"};
    vector<string> dictionary = {"dkzyezplvfjduflyvaawykgdscmajugprqhsa", "odwtbnlusrickofknmvhkfflo", "qgnlazywbwyrfvdzutry", "mnmwmhpyzpkxrfsxcatqfeleqgqxvyttajpeipo", "ytgyeiligakgujuxrvhztojf", "pxggywylxiummtlkikocjcmytd", "bpgiqgsuesbnrcnebqmguukxatg", "tcaytagattexsnq", "suvcwxoxjluvnhxjkrorq", "vefrrhtayasguvvrsbtyzllodontqtgodmpnqjzl", "ghflklsmeryhwynekoafipluqnx", "ooyppysrhhdrqfayqlbcyqtdyqlbmmodpbjrgwkdtyt", "eglmwbvkyhhtpwupxibbpuivhhnfpoequmenvnrdso", "zjbyhzbjzckobwcojvofjgxr", "pqmdvjkvfpnaqlragkhmyvpkmrkfyhthdksibpxfq", "fbfkormhpjniippkeslmhkctpgmktvmpbceoos", "vaemfnhxmrwyoyrood", "miqbohcqcpabuigjxquqhaeustbweapnylpnmketp", "nvytupmjkyjhmch", "wjbkftkvbdbymtmastthezpinkbenddiolswjdyc", "xquyxioyjsvmpqpmhugxpuewcgthrzynsco", "tktjpuouvgmchlcxitadqlsrplhoganpy", "uckrmgyppkanprrpagdpag", "btjuybvawhyvidryoqnxaglfnjdmxrdelkgdotgfdvsf", "qfdhbdnxitcrhvbulsaribn", "cefbmnarmakmangnvhcpfdirdka", "upkgthwyhomkkwdinwvqkdcfra", "uwwsttqlwterzshk", "mjgnbhtbzfipsxfuxexkbvlknzxkwtvtjbndwlill", "owtnzajnaxpvcmwatrehrmjteyledhgyhnub", "suirgtffzdfscwgkgcdblclelnzkrvfkjkxw", "fwnsxmonanuthtroq", "xepcnmomvsauomnigrcdlnywdasjkjnxgjvwoo"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 773;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> player = {"itwqxmzyptrtiizcnhnojaigrtcoa", "wkmhieispwuwcwgepcetexnkvwgmc", "itwqxmzyptrtiizcnhnojaigrtcoa", "jdxokuljgfaockswnpoxszeoeuuyjm", "xiuisgyrtnlnwfnicocoqbfsbtwalm", "utuffonjryzprkjylwwjiyxnyndwhm", "lscozqkyjvsclgrccrruuxkpisjmoa", "itwqxmzyptrtiizcnhnojaigrtcoa", "ratlmsgvwzdjvklwxphlhmftpojif", "zaafqufrjvfiuagdaawxejhytabyd", "zaafqufrjvfiuagdaawxejhytabyd", "lscozqkyjvsclgrccrruuxkpisjmoa", "wntujejrgfmgevjfpgivdsbeykvza", "psfdugwdyxbtgxpbivmpavyorkymgi"};
    vector<string> dictionary = {"rzukdfllgezlysxkifxosiingxtsb", "kguukumnyqseyvhxdffacvoelggqx", "qexbbteyqfcujbgoywxlsqpqsgpjr", "odalkrtwrgjcpabykvhpjarkhtepl", "hnlwhhbxzgucljfjnzdgpqlsqoyei", "psfdugwdyxbtgxpbivmpavyorkymgi", "itwqxmzyptrtiizcnhnojaigrtcoa", "zaafqufrjvfiuagdaawxejhytabyd", "tmjvkziawuablsexziarzxvokfghjp", "lolykehppstabuuyyqunpqqfcbssxf", "xiuisgyrtnlnwfnicocoqbfsbtwalm", "qpbfykmpmzoryokyxtiunharvfceq", "lscozqkyjvsclgrccrruuxkpisjmoa", "wqyerrqdibcyeflrktoudehddhrjr", "wdeqhpepxhqdroquwbbafnldghusg", "rptfkwqfrxsosxewtxbufdaknsnahj", "wntujejrgfmgevjfpgivdsbeykvza", "ebehqdxqgwoyvjbbuzlyzdbwvydfjl"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 5223;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> player = {"zvdbhidlxsncvgzbgnit", "rwqwbonindlrhcxbkpcrmehljx", "talsgwtbpmkqnqnwpcamxpivvopuctoo", "naxncrxjfltzrprjhpeyrnqcdlzm", "zweebbzemgrthrslftxawiklrvtmcy", "wxxmeiaagrogrxqmgalolz", "mogevxdodpciedqsvlttgodojkuziwm", "fzdhiduruikwnavskpsjsymwmyrayjen", "hngyglxbsposikotuvcecjhxkfguwy", "mxkmoolrwekiwhwurtzfvxpzmq", "ztrencqejeifqkyvqafjjrfky", "talsgwtbpmkqnqnwpcamxpivvopuctoo", "aigafhfkdkxzxyrmlnkjltihaxyqgf", "ntqhnxbqcbhodgnmgrkfyuljqnmohqh", "eqaudqogojjedxamxyfsbksnzrbdpaph", "mgkgmzdmsghtjhsqxfgbhvmxgsdu", "talsgwtbpmkqnqnwpcamxpivvopuctoo", "schgxzuekxwntmmiyqktiyvsucnbdgtp", "cwkbiexpezjzpjeezrzdrjoslptaivu", "nbwknyzuczvwzmbpgceiaj", "rikbrjatfaomzzpvbueqypnzqwwoxa", "rbkzxcaayffdhtvpbkwxmg", "talsgwtbpmkqnqnwpcamxpivvopuctoo", "atabnklqrtuenisafwox", "uzrqikrcvfmvabglmtnlejrmldtbgagd", "skbuxjtizmkejcikmpqiqommoaqdtnvu", "afxzyboxlhvkqzvjfvuv", "iupvbopkpvvezvpeawfagbcosxddd", "ifwwdwelzvnnihcwzwwpqzbc"};
    vector<string> dictionary = {"talsgwtbpmkqnqnwpcamxpivvopuctoo", "pfaowjuotpcnkialigeryla"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 1024;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> player = {"gaklihbdjjwmmepgkaxxdeabmvoeaeznhkcvtdmsjar", "gaklihbdjjwmmepgkaxxdeabmvoeaeznhkcvtdmsjar", "aqizuancalsaigtrhnktoiadw", "gaklihbdjjwmmepgkaxxdeabmvoeaeznhkcvtdmsjar", "mnqqnmtewobiwvimgneualwrvdvmpo", "paehcevkbrxboqvqcbhommlinwbwtkt", "uwbnatsqvfnmqgaclrsyaptcjwvuvrg", "jsfwsfpllllfzlobjwkncruyp", "ulvtyiwmgqzkp", "jsfwsfpllllfzlobjwkncruyp", "mnqqnmtewobiwvimgneualwrvdvmpo", "awkdzrkjwtscooh", "gaklihbdjjwmmepgkaxxdeabmvoeaeznhkcvtdmsjar", "oggmulycosyyvozrlchknqqablnimvkdftzviqulexot", "gaklihbdjjwmmepgkaxxdeabmvoeaeznhkcvtdmsjar", "jsfwsfpllllfzlobjwkncruyp", "gaklihbdjjwmmepgkaxxdeabmvoeaeznhkcvtdmsjar", "mnqqnmtewobiwvimgneualwrvdvmpo", "aoikxxfzboguftbkzpiterpzbhgholsd", "jsfwsfpllllfzlobjwkncruyp", "gaklihbdjjwmmepgkaxxdeabmvoeaeznhkcvtdmsjar", "jsfwsfpllllfzlobjwkncruyp", "mnqqnmtewobiwvimgneualwrvdvmpo", "gaklihbdjjwmmepgkaxxdeabmvoeaeznhkcvtdmsjar", "gaklihbdjjwmmepgkaxxdeabmvoeaeznhkcvtdmsjar", "gaklihbdjjwmmepgkaxxdeabmvoeaeznhkcvtdmsjar", "mnqqnmtewobiwvimgneualwrvdvmpo", "mnqqnmtewobiwvimgneualwrvdvmpo", "rcubyrdqqwmuorcofzgaedbxvlwolfeqszfxcawhj", "gaklihbdjjwmmepgkaxxdeabmvoeaeznhkcvtdmsjar", "mifybensmxlxpdogyjlbegwpvh", "dombvsvemowjtcgcnewmn", "ynnbmpjksluhjclejoysp", "mnqqnmtewobiwvimgneualwrvdvmpo", "zmziaspzyiouoii", "gaklihbdjjwmmepgkaxxdeabmvoeaeznhkcvtdmsjar", "gaklihbdjjwmmepgkaxxdeabmvoeaeznhkcvtdmsjar", "gaklihbdjjwmmepgkaxxdeabmvoeaeznhkcvtdmsjar", "sszmxzrimsdxbypqnstoapeesxhlm", "howyvwljcrhddbyjlzedlu"};
    vector<string> dictionary = {"mnqqnmtewobiwvimgneualwrvdvmpo", "gaklihbdjjwmmepgkaxxdeabmvoeaeznhkcvtdmsjar", "jsfwsfpllllfzlobjwkncruyp"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 3374;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> player = {"jyjrppdjmmmwhbdnitajraamfpmonifnwfedthfmmo", "lvozbhirkkfvwnkfpdfcogpsmvyyoigxeuzc", "aaxqcyhxtpidswcsglobkuclzsyqhrdlqwseawbwvlc", "trnfqezqcvugdwklpgqbzzvgxeypdtlmsdozrozmppjxx", "vewcywfywmxqhndomeneodskyutugazkpedzzgbiccp"};
    vector<string> dictionary = {"vqlewgswgircwarlehnmmenukaplvou", "mqchdldrplhgkxuyrmicedgysmvahoshnxnmka", "aoqqvfddruwxythyxhaitazenwqrnszk", "zjwgibwldiybctntbkepxxgsbuxyvgjekudbovzqymn", "eqeqsgyfrresrzyfzgsjmjlbnsszyevpkoubcfkbzw", "aaxqcyhxtpidswcsglobkuclzsyqhrdlqwseawbwvlc", "vacpjtebupghubhvuqncqgcxaukrfgw", "lvozbhirkkfvwnkfpdfcogpsmvyyoigxeuzc", "aikzpheqpprykelsmnoiqqaotvkgrtdtvyyxvlcme", "vewcywfywmxqhndomeneodskyutugazkpedzzgbiccp", "jyjrppdjmmmwhbdnitajraamfpmonifnwfedthfmmo", "rdtondafiycqlrgeditspsvxgdbdxrncbtsddplyyafw", "uekbjhybouvqopbzoqixerhqdauzamtqoowby", "dxscelmylhhiqznzudeswrxtzvyfetsytasmgnh", "trnfqezqcvugdwklpgqbzzvgxeypdtlmsdozrozmppjxx", "nhzctxzygqfqshdjufgksltelacouytvtzcmgdka", "ktlzaiakhvezbptmjpkgsifcjpfjpjuakoclpabcpwxk", "pdarculdsswswidssieyxsjmyeutcivazmlsosijbox", "cwjwrsngqwaowgbevdxjmkhdetcltzvwawtybuj", "sdjfudbvmhlcazlphllecdztffxmoycoqmxjlvciyjetpb", "otdapnzpprqvmwkcubigxlwodgwdtvklrhwijwnkxpuvp", "pswsydsstnlucucolvtsndfcyrhmsoeqvofbdmglgdnf"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 8783;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> player = {"cydzgtksiluzlmfistdrhquoznuonbgvraobtnflpfpx", "zhjdfiydecwxqqjsmwmstynprjksaiftsmidowpq", "ifwkeaelxvyvgtjaccscndbnbmzpoxbdtsb", "mpsfmgeajzduvhiikacyvkjwudrjwtkbwcveatrwfx", "ydrvigagzdjwdvzzogplcosgrhziyokigqlmdjyvbkbn", "dlcsveebrbyblfnwpuzuujjgutgizrifivrlexggidupt", "qupxlioscouzfsngqdzbzylcguuqgduowovh", "jmbwchyzcmcgngvwajwvymgjxplboyxjxr", "fsueqlperfpbadpifexwisufxrhxensiwpenbhan", "hzbvmetrdxxbvovipcvbmjqqdgjcrdnnz", "zajawficvfjxilbidjxnslsaqyqrwzlzdxaqqbtugduizdk", "yrqpdqdekabjedccukoqojtwgrceatrapgjcvqvavbfb", "iikfoamkfvbojxsvtwdezvpaotdqlshgtczlkatmthwumz", "kqlspexrfnhepotopnwjhjicdmyawvdbxss", "aintjybkkcnhogxwydcyprryvvfmhgmyocekubgncbj", "ytiyifocvmniggwrhcibhoiwdvkrlsmwhrs", "qratjwumpegvwtfxnxterycepltutafmcaiuuwtttnb", "vkedhcwomusjmnnbivinnucppekfwklnsevrtxwfoc", "qofzrrdevckrruworbbogijqmoxagjmhyfpedecovgsew", "picsbjyhsrtbrkyytuhbawggzwwyaocoyqaqkottmtleygswk", "rdotgecxigrkinxleejwnhduwiwntfxfaugmbktr", "bckpnkzfskwcapiqwpuknraxirdxupqgsukfsocu", "pztliztsenposigetfopjrqlkggmswohobtiaffswpsfmn", "drwcoyjcihegbnbjpgigrbxaygwdcxnkqpzxh", "zbnwqrpfiacqldnlnnmxyansehpjlqeuunpyxcevmfnp", "fgrrnabczlkbnitdywomilpwecxchdnowdu", "olblywbbuywqofwwqdayviinypueulbmy", "jkdeabpufqqrqaftbqwqapgsorvbjdnbcemysfelnflqukin", "cglrgcdvrvgmnjikwubzksryxzuydvwbdvfzoduwaanlm", "sprptmsaucijdwmkthhdfbqhjwueabmlwjuddzxrbnrgngkd", "gymlyevkkhvlbruvjxzaluqdurrrqbvxzzfemdudprehz", "vizwudihqrfnwmzjwykasjfnrfeqsdftmrmryvpeiif", "lqrhlzrqmgcagvxjevyfoiormtsjrorspvaefvhrkkrzshlg", "tzaltbiybaoubgxfyprijqstvypbhcfwpqqhbjyeprbelx", "zvnxdonrjfveuqaswtiglgibxmcdohjphdquutgplfeeesz", "rhttcdfdonyqicuqsrojfkvzmpgedyrwyqqpoqpzziwa", "vouwgqheocshoesqumyjuwvszcvgzlwfk", "matwyhfnwogcxqfddspxmdhpnetemysbjdxjhtegvwyl", "pzkvalngenojfgipqpncvobqnvqeldremvugqyeopzvsivvwu", "kryxtpwevkcxlowndoskidejbagvsfdkogwbckitlksuqnahz", "qrpqgwjbvqkkpqaowuotsxgqhcuwwvhdsgdzn", "jxfpvvzdbdwqytgwvtnknialfzcbzzpwd", "mwqdttfxrumccpzueojyhszjnqfvzuasiqhhzfst", "albitgjxiuhthoigldahbvwfwevektmngsig", "zelofjayojpeesrvifqilygxalfwknumwhea", "wsfjtlxymdczejmrncjvgtymkwsrjdwbgqwz", "tcgevexvjvpmdiolmptblajdxixaggnxn", "wjuywkctbkjsysniopmhuooaxgrvpujhdxzstawc", "olblywbbuywqofwwqdayviinypueulbmy"};
    vector<string> dictionary = {"zbnwqrpfiacqldnlnnmxyansehpjlqeuunpyxcevmfnp", "mwqdttfxrumccpzueojyhszjnqfvzuasiqhhzfst", "olblywbbuywqofwwqdayviinypueulbmy", "lzmmmtvzgjjhgbhreordbnxislkhbeiqduqjb", "bckpnkzfskwcapiqwpuknraxirdxupqgsukfsocu", "iuxwczabopygoniarweccqfmyhgbjutpyyc", "cglrgcdvrvgmnjikwubzksryxzuydvwbdvfzoduwaanlm", "hsjiwizejrxpsuzgebgptaozvwjipnqbwb", "updlhhnkyrcpapcnylbobjmcffbcjpfecipmiamqmyupzpgy", "aintjybkkcnhogxwydcyprryvvfmhgmyocekubgncbj", "yeopzkvbigiycrzwprjgkefbxpjoejlrrppdaln", "wvkurizboblmepjerydkbezvjkhgnurqfwtlyqb", "ilfxfeukhacjvzrfmjxxbckzcojjgoqwiasjmpum", "wsfjtlxymdczejmrncjvgtymkwsrjdwbgqwz"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 11395;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> player = {"slqowwxkwaiqfy", "hjnyddkomd", "toqxlinxiqtpxyiuthopxsdueeh", "cit", "haugtqucqbldvrdijkqqrx", "edbdzwqvyzvwpzqzdav", "zihm", "memhbiizcfbzkwndwujk", "yklmirtuodykrqbf", "wcbfldcryx", "bqxuurtf", "ykvitmrkkcaudxsp", "slqowwxkwaiqfy", "xdlnliztgpos", "taipp", "guymvp", "bwzaqva", "mmgjl", "wkrmfibxwgfdclzqffdb", "alzje", "javaqzoqvudsdkpbtynxble", "rytspcdufwwkswptnxwzvjamz", "jciblvu", "cwhmphwcgautgrhteh", "qkjesuzpiwaxvcjmy", "upofzkbhztfcfqhwbpurnwxhwp", "vdyuhxes", "tnfflhvhmastpdevy", "avpdwguixprtwvsiwsccws", "uoqpd"};
    vector<string> dictionary = {"bsmvgxhjlpzubtjrau", "wjkfb", "mqw", "guymvp", "gowrtjbllgzxhg", "qlfuejljeawvarq", "yklmirtuodykrqbf", "mmgjl", "nriyqfzknpbavqfgvmlrqkjcw", "cauqwaahrzselnitphzxunuo", "opfzkaujhwzabwrvb", "xdlnliztgpos", "qmwwlhyovjaq", "slqowwxkwaiqfy", "yzksqdbkznppiftrqv", "vdyuhxes", "cit", "bamdlju", "kfpojbbkaseiqlatzdemuhat", "tdirnwesoxhmdihscivpdsoj", "yesurwksgyajxbfn", "ppeukimbjuvss", "cdxefyjh", "hjnyddkomd", "zdq", "rytspcdufwwkswptnxwzvjamz", "ajiqdxeggrnfluhtbpjuesyjhk", "xwxjtvzfawhhfzl", "yvlnvtdrjpfkuxrzrpes", "ykvitmrkkcaudxsp", "cwhmphwcgautgrhteh", "toqxlinxiqtpxyiuthopxsdueeh", "hzj"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 2764;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> player = {"bjymqkgcflftmebffzqwellxgpxhafto", "skyyjjjggxoleiytzgucrhwbtyjtvaww", "tqrrzryftqyrywmatammjpmuyynus", "cbepxtbxtfzwfcdqqhhrxugrenkaysltwx", "haqgfybgjkmjyjolrqhzssqfwxhewhjaa", "bsjsnddcpshorovveeoktzjujajxzuhy", "ahstcqoifdszgxwoovlutbfiyjvsvqwul"};
    vector<string> dictionary = {"lvvteqlirkwesxscimshqnssoilbauwa", "njkepyhfbylaylaivpaxbtxpiegtjpsknjl", "gfolmyaewuqlzzzrzkpfymywmqyrzb", "emhztmlusqmfputbnklvoykcsedegnt", "bzjznogbjvpfzacdfhmpypjqpjfdtxxo", "ikrysxggqnozjfhwmpxugwtxqxwwfirpfgakv", "xtnpexhbjdntsmtqwnjpsyzybxtmpzmlv", "mfcuqejytipzpentrsgtzrszikfkncewggpoa", "nkfsqliurxbdtpnbfpnocrrbzffxrnswls", "ztydlwfgupiinxshkzosoptzkanldoyatokc", "ahddjgclavxzibgcezpfvxhwcjavohqmntlz", "wygjuoxpvqqpgfdcebzgcihiupajbpxrl", "lvsnkiasdkscerfzljtnhizpcyhmvgibxcgv", "ewpytydivchorjzbglmzbwncgrluyqej", "izelslpdggdpzhbncsejgqmusjpgn", "zaeeinfentyoxaqahiwbnjlmsnzus", "amkbgguiaugjymqqoryfkbbdotsklkph", "mfzfxpkfcvqesrdzbmuomcziylihxnizmusta"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> player = {"mxmctubxttdrmrbfdmtxhymlo", "lkdifslumieov", "pxyuifzrdbczubdiypde", "ejuafcvqwizsurcmgmsbfah", "bnasxvovxwgxbexeuy", "ukenoblqjrkbmk", "tsamjkqlkhbffzrmtllkgr", "nnzxovdvudbspbsd", "qyueytjlenoogypyhqcn", "vnczpknrcdvioscd", "lssjnbvtjyccawozfdhyu", "ifdmuvkfzymgtnpguyphdmic", "lkdifslumieov", "aivyjhhadwlhbpmtpwukrqt", "pxyuifzrdbczubdiypde", "vmprrfjljcondrpvlpkl", "ainyzjxpiauwfyfscjiosadj", "hofecaltjuzczs", "vopnauhnnhv", "drtfamjqvesmsbnn", "vwdexxwquseq", "yhpfgohjtcfmnnxu", "ukcshnewq", "qtyczygtpheao", "hvkncjizp", "gtoggsajyas", "orrzupjoxlbblrwlmruwnp"};
    vector<string> dictionary = {"nsotjkxkmgeg", "nccaagqdazg", "yhpfgohjtcfmnnxu", "hitnpcteaedikyyuiom", "vwdexxwquseq", "vnczpknrcdvioscd", "tclwyibedaccibnhxhiqdh", "cnrylgmfudgxfcqwoj", "wthcbixsiu", "lssjnbvtjyccawozfdhyu", "zeyrtpacoztrmrnntmtqbo", "gtoggsajyas", "lkdifslumieov", "dddpyoejisfnwlwb", "hvkncjizp", "bnasxvovxwgxbexeuy", "tfqezjqmtrnrbdrjxti", "pxyuifzrdbczubdiypde", "vopnauhnnhv", "qyueytjlenoogypyhqcn"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 2713;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> player = {"ulmrgxdddptbhmcnstxuouwtfmhjcyoynvqgwvtvc", "ulmrgxdddptbhmcnstxuouwtfmhjcyoynvqgwvtvc", "ihcbcnevxtxvcjflmahypurlmiidlnjrxbvpuff", "ulmrgxdddptbhmcnstxuouwtfmhjcyoynvqgwvtvc", "ihcbcnevxtxvcjflmahypurlmiidlnjrxbvpuff", "bhpnoydrejzhpadivkpsoemfxkhzqxcxeob", "ihcbcnevxtxvcjflmahypurlmiidlnjrxbvpuff", "bhpnoydrejzhpadivkpsoemfxkhzqxcxeob", "ihcbcnevxtxvcjflmahypurlmiidlnjrxbvpuff", "ihcbcnevxtxvcjflmahypurlmiidlnjrxbvpuff", "ihcbcnevxtxvcjflmahypurlmiidlnjrxbvpuff", "fjtwntceohypwc", "mhibyfmjzdy", "sgveuaxnouqiukrvmzyqp", "fjtwntceohypwc"};
    vector<string> dictionary = {"fjtwntceohypwc", "ihcbcnevxtxvcjflmahypurlmiidlnjrxbvpuff", "mhibyfmjzdy", "ulmrgxdddptbhmcnstxuouwtfmhjcyoynvqgwvtvc", "bhpnoydrejzhpadivkpsoemfxkhzqxcxeob"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 4744;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> player = {"nzlsvotqnrayvhkaswtfehkv", "ugrbnkwhmluvguxljzjifdawqtswia", "gcbje", "kqrlhsybwzfzfbwsqmnmnhwqzkpena", "gymgn", "hqwtekrcrhyapgwofylaqkcmyilrvrglhuoevvfw", "ywnhioedfetwpaicfdnyebftgoxqf", "fumhxnivbzskjihyijatejntwyqvtyhmagucbnbxhss", "jhnjepdds", "fumhxnivbzskjihyijatejntwyqvtyhmagucbnbxhss", "yafgpbtdyusib", "whwbrczlqbfmsdzplwfnecnytsvj", "wcav", "fumhxnivbzskjihyijatejntwyqvtyhmagucbnbxhss", "auhbuqlbfcjmvdysoiwt", "fxnovtchrnpmqqxyges", "bknaceoeztghonzgrwrucvb", "vcceznokmbyott", "lzuytrkcmsyykxravwhewfcldvke", "tvhkzeablkofcschxpfitiodnzobeylaskcuhiujzg", "hhvwwthiojdyisozhiqzbelmgfqbcjefnmgie", "ntwbrobheyq", "jhnjepdds", "uxhexkxjwboyricydqupsbxwijsbvlo", "uxhexkxjwboyricydqupsbxwijsbvlo", "ugbifrebbgcyv", "rcrpucqtqfgtajdynp", "pekwqwtietswkfswyrrrlms", "vcceznokmbyott", "qkovktqbqypcpxwfhwukedomgjoktr", "ywnhioedfetwpaicfdnyebftgoxqf", "mpjnmkahzafbbohdnksbzi"};
    vector<string> dictionary = {"dculmvpojgabcmgfcmkuvv", "rljcdhnlvrhddvyppglyirnsnculukjvqprvlstgfvgt", "fqaipidjetwjmkjvfgnfchsctizekipima", "bknaceoeztghonzgrwrucvb", "srnwvslwftwconxtlnkejrwdzgjoodzsubxoatwfazj", "ugrbnkwhmluvguxljzjifdawqtswia", "agcncuogfdudhrsyyposjpmgvcpepburjqrb", "ingpanaifufsyn", "rcrpucqtqfgtajdynp", "uxhexkxjwboyricydqupsbxwijsbvlo", "uqxgqg", "wuoxqbyapmveyqxuubpv", "ntrlqhhccmsutoptfidheoyehuxxcpwxbrmtgmvwdis", "ixpgiglauieqtabxgoovqzgaufrnhejxhlr", "wcav", "mpjnmkahzafbbohdnksbzi", "lvisawdwdvl", "fumhxnivbzskjihyijatejntwyqvtyhmagucbnbxhss", "jhnjepdds", "oblrflfesutkujhxsvmujtcpetvgjnhfmthfisvl", "asyubuapkjlkykgqiehzlrggpbunassuukchsk", "kqrlhsybwzfzfbwsqmnmnhwqzkpena", "dcjnaodx", "vcceznokmbyott", "tvhkzeablkofcschxpfitiodnzobeylaskcuhiujzg", "ywnhioedfetwpaicfdnyebftgoxqf", "zhwi", "ooftdqhevaoxujqstcmhtnmbkstagaepirfrehrfmiug"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 8845;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> player = {"aosdwzrqyafqqilftqaseewwvjjvvhbdgnsozzaccayhbbvdq", "qzniionnlfuacxofmxmxldnrfnnmczhsmdxghzelkskmiadu", "reskrtwmnublbkrnjygggasocifqvhybbatvxyueeacqjqo", "okfmtweagdqepvffroajnmpvnsgxnvighdlgzfhjiwlkso", "bqyunzaxbazyezpfdxkycvrxmuuxabvjsidgmcssaexakx", "uiofbsxlgqsrkovgcttqzhnzxuxhvbwgkvpjnxfqdlxwxqp", "kopqoasiuwnoxkohfrlefstnargzcjvvqxtrgnqidwaagpa", "dxbufdlpjxuecohteuckxcqafhonjfpskdxxflgnlvepbph", "mrdverzlitubqajsrlhwgxmkeocqldbdxhdqrcaywvrwcpi", "qwftmmcpdfmybecdomlznldltnqdcqbzbvpzqypyvafnri", "vlsgvbexslyxmdmqhyeshrhseiwmmbmrbtvxslsxnwlfdxvye", "bktafxaisgarjvontwtvhvcpkhtuwdqdgogtuqsmihtueacbp", "pyxthpaapcpfnetrxvobtdhutfqieinqlxxomwoivkhixloaq", "qluiqrlkndzjnpksugkhlwlkkbuqwqrmzakvokypjgbjils", "eyohgtmaulfrbnbexkuctlcdgrhflydindbdglahctrhbpaov", "wkacuekrpouzgphiupwnxtecffdyelgmllhlsyttiuujajn", "mwiwhzihnnuosnbbdayjmnschwajovgvdukqbfeesbxdaf", "uxcwtioiwgtqouekffhauhyxuzpreajdwgaghbpbxvtayfvkh", "lroqqtiharlrhxxprmghlkktapfzbvuueipmtcncebwqcyovq", "gmtvlqkfsxmacrilrewclhbcbkhxdmxhlfxhuevboczvpcgh", "usbxugggoaejbokmhljahyzbnkotwgdhdukcknmnsdfboorr", "xdlachuynuvamzgefseckvpwttakmnzavixopmavnviytiej", "zocqvrvufbjjnwlmihyanghbxqresdpavakarhhqnmalzpif"};
    vector<string> dictionary = {"fbahkpdnxzuzwappykecftprdicnjibrhaurfkfwrfnzxgbsh", "givliamwuldblolpdillibgxqfceteacblupxobxeyxqboz", "nlckljurkcgvovxqpkjgjzuxympxcfxtmbjkajnpouwmgcwc", "xwcdintsrgfpwfequphmnaaznhicozaxyaxcmdqftnthrq", "obqoqgtbofwbtezsxmyuuzeabdztwzkbrsbocgwwkerphvawn", "vcllyfwpdycxfwliutdtdlccvdlhecnilgbdduludwqwrhif", "gewufxfhmycpobqlujzntumaczicuusuuuaqrjlqokrvstf", "mhrzwlvyfspefihtvjihfaevrygufdnvbdcjirmbtaehjky", "zgzclxmwjpwphtqcmoopkcpugfkccypynkakfevggylqatmlq", "klqmxkjmuznbedndqakczwmjupxedkpdkhcyavlkrkuxpn", "oohbfibqyvsjovspmvenuqgunralogrlfjrwfomzvtfoxuo", "pfsdkbqhgmihozskjmlxowvrhihkaqbmfbocumsgidebco", "qmyrbwylcsustteaqamtjldvodbtrjcozgvpzgfnicgusu", "evvzanphkwgxttqlncxamvnqedybdgwzboldtmmthoizzkjsu", "gtetpznbfcplpvaspvdyzjtupqfatxqpijifqbdduezjhxozh", "ekmivtaqyulpdlwcpcmrqfqdjlbismfzvsuzaeyhzmzogr", "rmhrxjwlplixkbaatzplodstoyohfcgklmeufrpwxdebop", "issrfbgjuldlohegtttxjvjcembvyedzrlxmwwiduivypwxk", "nygjvimnrwvgswbzenzwlyrhqklpqdhurtkwfamvccdxuby", "asfuvtmquhwlzjtizukmrgarylyrudggbgwpdwicrawcfesl", "hgemdevprypcietucyzhhdiaxjjyxfxqgrnrafhoshvyrtfzz", "swvzanokckvlkvgdkaqsbbceduinwfnyctdyxwshzpimsv"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> player = {"ejbdpwcuhjcqqeufbcwxisregpcho", "thozdxnqawdwzeydd", "aovcnsrscezrkioyismhcfaehbcvwaavmq", "mbycwarrgzsjcraupoxbkmn", "aayjfjkfyx", "pyrzdpczffjbwdnp", "bwvbilybmehtgphcwadhoxvjbeddsmccgt", "otnmfxqaigoltbwvus", "olcvghkdqicdxrbybtamunk", "jbhhhbtasnkkjv", "mpehztxwjsxtxpxxaknufsu", "iempoareqbppjf", "afmplaoftaohsc", "gobrlcolhxidnhbqklwljmjll", "wttjrsrjhqfglevbaqnsjxnqjyeogdjrsixroxoe", "wnpnbgqefpreresqanvkfruligtwrpi", "jisdkzzfvthbpydbucmvwyjiypbxazvgdhmg", "gmswhzxvewybzjlwlcaicbbnixkjipqqmdjxt", "rkodbngexrjwgjznwgtwmjjujhhaoxnf", "hmdvtbhbrzjpgdazswhhbql", "roslgmjjp", "fizjoybvftrtyyzmzxmbviguzymgufpvtcseevpw", "wvjvbcujahtgztxcsrfmbxtj", "wonjzxtlqqjxxplqvkyb"};
    vector<string> dictionary = {"mdxlnctalzchdxzyryhwurdhdqmkr", "gxkuevuwzcmkaabjzeshyt", "wonjzxtlqqjxxplqvkyb", "gjgldqrtcuhklggyhbxsn", "vmvdpwjcijkggxjkauhblatcedyyy", "aayjfjkfyx", "pmxspyjgqoongwztfzzcyhba"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> player = {"zmazrxxyoxfdxterjvjvzcbuiynnmncoat", "hnzzovnfxrafxjfdusuepnmvncuxloapehzs", "sziyuhdbfrtqgpxgvkfsuxgnu", "bprfxnqrnbxopbktolfayitahusyvu", "mbvydwzekxeyfvptnljpyrvauz", "qmzscxirekpcwletzvensngvuabo", "crzgmanehtpcumyrlxpeibh", "bprfxnqrnbxopbktolfayitahusyvu", "nftncwynvycei", "ngrhjbmtpyudzdubcyrxpyxslugoy", "vtwtdbvuwzndd", "jhfipuoyifilmabdiqkuulnmczmebhpokja", "objvndusdpyzxlpfsvqjqpdf", "gnxcfknxcsmhteondyr", "jluetdcutymahwmrceebkcvmsnprl"};
    vector<string> dictionary = {"rnvagkofqijdxidshohmxlmpoervy", "czameffaeuaoynu", "nohmhkjbfgckowypijjhywwfkeexnkon", "ipwkzzxfevcgqm", "jyfllgrzhjyuulevakdguxqtxaebongbh", "jidplewkjqwvotzlbbpyxhjonbqvhoyikk", "floqoqcpcgoyebfgvjhovrrtjzo", "uiutruvzpjeaailmxaat", "mlnorwhsgfdfvza", "slqapiiftmnxbjuvajcltzohriysear", "vdsbffqjdmvov", "dlzgrdmjizqtwqopmlnrgtl", "lcqjseejyxladctzweupivetxe", "gzzarbcfngjrsjjtuqgeioez", "agasxgecobxhheimsfjve", "eepywrjlbmdrzrgy", "qgxwmjspwcudvcanxfvwvjnzdc", "akgbikpqcifucrjtzwtvcdwgi", "kxlhlilqfawqsvsuvjepyvbmxulx", "pxihnparqfqfjmrcyhtu", "miqhdugjiogeueupd", "nftncwynvycei", "togpxndvochqikpkjpszesojmxsddkleftqtco", "sargyyiipctxomsscahzssebh", "bprfxnqrnbxopbktolfayitahusyvu", "eamoovaadavxqn", "vtwtdbvuwzndd", "crzgmanehtpcumyrlxpeibh", "krkhbqobqgfbnk", "vixpwhdveitqsgqzvg", "jluetdcutymahwmrceebkcvmsnprl", "qnhnmjuxjuuildzsf", "amsbeygucvjcuwwffbqidwpxsmtb", "euiaozgwwrsfctwnqlwo", "sweydstxtiftqxnpo", "mybfbcjfwtvpgmqsdyhzvijyapu"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 2608;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> player = {"iqftsfuumgmgasjliswqjxcnrlzbhpotdu", "ysknvrcwkeyfddzsbsarjztmywgvjnfvg", "chulxzhquwwlgfrbwniainsxzobj", "vmtibrqptnheiumhqrfiuckvfrbjtddtt", "asngyachckgmuonkvhronlbmsxsp", "ysknvrcwkeyfddzsbsarjztmywgvjnfvg", "chulxzhquwwlgfrbwniainsxzobj", "pgasewgtxlbhhkjgxrmxgxgybxjj", "qbqhottipjjkupwyksywklkvqzohhaddk", "gnznpcrosagwmzlljmkowtni", "vecyejhyxupoiosdaqhkngfttqbbsolv", "qosnpxcmoofmoamydvlmiclkyqfeazvsoqn", "ujjwgswrtqmrspfgxnetomrppjqjplzfdtb", "zlunsosdotxovdvxeikwxxlk", "wpyikklnjkivgjssjqemksicttjjzqgd", "qhrrfrvybjupereszybsbzjalftlgtejw", "dcvytcozwgqnexmodnxlrmohjqyvgnrpsoz", "pnqeyvhbrscgtmugydaffnbtkxyjbfbxpeey", "zlunsosdotxovdvxeikwxxlk", "bgglqifvakbxejtugolajccodivwqzejefel", "wpyikklnjkivgjssjqemksicttjjzqgd", "nxohcgrgflyynkronujtpwfndm", "woicpixnlhokcynlwadcgskrnyrcwslsxnysh", "pgasewgtxlbhhkjgxrmxgxgybxjj", "qbqhottipjjkupwyksywklkvqzohhaddk", "mwsaqywuldhsvculmghtxjqmkox", "dsqgtxvgcklhmwhnkgevymltiijylddbsmoof"};
    vector<string> dictionary = {"zhuyvhxznvjzlqdmvllvamphcryptzyusijtld", "dsqgtxvgcklhmwhnkgevymltiijylddbsmoof", "chulxzhquwwlgfrbwniainsxzobj", "vdspznhwptpsszkfdyzgqqblpo", "bgglqifvakbxejtugolajccodivwqzejefel", "iqftsfuumgmgasjliswqjxcnrlzbhpotdu", "sdgqjjghdouevmpsiflshuekatxkhkvcwegm", "ysknvrcwkeyfddzsbsarjztmywgvjnfvg", "hcvxitnmpzkprhtipwlzrqmdylkvtrafmzc", "pgasewgtxlbhhkjgxrmxgxgybxjj", "qbqhottipjjkupwyksywklkvqzohhaddk", "wpyikklnjkivgjssjqemksicttjjzqgd", "asngyachckgmuonkvhronlbmsxsp", "fkrjqiirqlwcvnxdnmtybzslrqcjeomxcyn", "zlunsosdotxovdvxeikwxxlk"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 9951;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> player = {"yajmymxnnldwmgkmtrftntskotgtvkkjet", "praqnimuaxweqdlshalicofvcqtbukltgk", "txstvmcaxahevzkrwtwykxofzrrthhwezisll", "txstvmcaxahevzkrwtwykxofzrrthhwezisll", "qtsawqwkojqhyollvidrjvbqipmbmolgunep", "uvnozyryxqszyrqmbiwrjpwbfeliszxxpqepc", "rdglinorcethhfynpmxvmqwhmlpnbumgsxq", "nunatsawqxhnutsbevebniezvkvcdetrcbniy", "nunatsawqxhnutsbevebniezvkvcdetrcbniy", "ktgzeerybovvnjccdswwmtuybzgsssnzyhdi", "nunatsawqxhnutsbevebniezvkvcdetrcbniy", "ixkzvicxzidglqjtadehemjgjcrqertkab", "praqnimuaxweqdlshalicofvcqtbukltgk", "rdglinorcethhfynpmxvmqwhmlpnbumgsxq", "ckmjrkbbubqqtzabmsjmkkwhepqsnqcoeq", "praqnimuaxweqdlshalicofvcqtbukltgk", "nunatsawqxhnutsbevebniezvkvcdetrcbniy", "rdglinorcethhfynpmxvmqwhmlpnbumgsxq", "wdebatjyvdqdxecjxzkfrzuraursjbndnncq", "rzadcrwroltxzufagosqrtdnisyrsubkkxv", "txstvmcaxahevzkrwtwykxofzrrthhwezisll", "swsjxnbyszgvzsspcfxckngjwznuwbrvqubs", "dvpqqxdxpuaeqbhaamgmqhermuddwyjjsrcjt", "uvzpwqzekkdmnrfybohzlfuoayfyfjehnb", "loqickqcopnvauwpbgskclygjxgyljhpauh", "myqnlexuodruwizdpyclawjiluitmfqfgotat", "praqnimuaxweqdlshalicofvcqtbukltgk", "zfaiovsrzutaqgktqwowrazgdyvelwapbwtq", "udtzrpskybupxpohnbwzalusqsrybasicbmt", "nunatsawqxhnutsbevebniezvkvcdetrcbniy", "imapmscbotiwftkeaftdirjtxhvigvktne", "praqnimuaxweqdlshalicofvcqtbukltgk", "tksqslsrpjxtoeqhvqyhuqttzxxndhmgbqc", "rdglinorcethhfynpmxvmqwhmlpnbumgsxq", "zpmhkypbcfsohbvuvfvlpucfojdmuiepquh", "syhogkrdjjeclexmxxkrghjadwigsnfwsyamq", "praqnimuaxweqdlshalicofvcqtbukltgk", "wtrpeuzmtrlzqnbjtrnnttowvusynjalnem", "nunatsawqxhnutsbevebniezvkvcdetrcbniy", "aeaccavpojebmdnsxbpfnazzvvzcmlndzohrx", "eagiipcbbreesrvjkfqvkfbrqbexosexbawpv", "nunatsawqxhnutsbevebniezvkvcdetrcbniy", "rnlayvqrmkagtdofvwaatehubgngfwidah", "txstvmcaxahevzkrwtwykxofzrrthhwezisll", "txstvmcaxahevzkrwtwykxofzrrthhwezisll", "vqedggpzgevikpvstxelpoipypewrswzwnxt"};
    vector<string> dictionary = {"praqnimuaxweqdlshalicofvcqtbukltgk", "rdglinorcethhfynpmxvmqwhmlpnbumgsxq", "txstvmcaxahevzkrwtwykxofzrrthhwezisll", "nunatsawqxhnutsbevebniezvkvcdetrcbniy"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 5119;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> player = {"asiupzswuxpsxzhjwajldd", "ydoxdeixidvmhrsiq", "nsrzpwcnmjkrtcsxyyqfxo", "rhlxrqppusmmujn", "hkncldjawbldusxj", "gkyjapztzbbbprevkczt", "pbqmwwfgzcds", "ijvnvdqgnnkgmxmyedtas", "sayvxsbcwrenkdx", "vkslnxmzhtfvqbpmnnzysix", "amogpdpodwppedqzttjsffv", "mzqumpwxznjagewyrxp", "pbobvubvktavqjmvgv", "lvyaxbytdgcrulvrnsqdgf", "xuvkljazsnlliysromy", "rxjymfxvukdgyuatd", "fsfjdqycvslcnmsqx", "sjcvoxmxkddl", "scvxqcjvwmd", "tcitpsxfpsaxrfsqwowtqik", "unsqhkvordnucas", "ekpvfghdyzvctm", "hbnxozavcwf", "nrngmfqraupvxyo", "yqjfubsavleypn", "igageniacnevrju", "rnvuwfmugv", "zuhvgnwbfbqrdohuadmgsu", "hngxgqyhuyiavongnms", "zbwvrqgwjbufzplvobppomw", "bpbpimulqhdeacy", "vjcdapahdcoiogmoyffprdj", "kynzuyheitpkqveoqzl"};
    vector<string> dictionary = {"ctrcqrxdlnoqexeqhdity", "xwgmiooxlxdmfgrgkisdiu", "asiupzswuxpsxzhjwajldd", "sjcvoxmxkddl", "nvwbpjjeiyvwgogoizo", "ovpekdwzjxy", "gkyjapztzbbbprevkczt", "gjcxgqdrsbkyr", "trtvipmbrmnyqmptcri", "xljivzipyslwt", "pbobvubvktavqjmvgv", "wlydpesalfdntcbunyolgx", "nrngmfqraupvxyo", "eljmubibwaatzavjpwp", "vjcdapahdcoiogmoyffprdj", "cmkwnekanidbttyx", "cffxtpbkvkrmqds", "asanqyptiz", "iueqyereoruez", "zbwvrqgwjbufzplvobppomw", "rnvuwfmugv", "hkncldjawbldusxj", "nsrzpwcnmjkrtcsxyyqfxo", "hofgmparykahuv", "cvwwfobzlnummceydewxw"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 3475;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> player = {"vdlzrcbivjrkiegjhdjlmligqnpfbwcewy", "isqbbbpozsxvyuuxrcqbepvudyprpfiowidtzahns", "uyyztwadkzihkdbcnzpfjlkndurllpwy", "yxuwixdjkxoghqurvxuwgtwpvyjaefw", "caaqjwvzvsowfourznmuzlpcxqskvzzjhozspkufw", "ajtpgapcmjsdxyosojznrkttgskpslliuns", "xvrbflwmvicbuyxqotfsgvbhlab", "dtgcwbsjodradkspcoibbbxizcmuqq", "ddmujapdutovhfrzwhhpmjdxwyktiklznmfuc", "zyxesgiqpjvnceunaquifbpsikybreffjjshfs", "elsgrlafyvpfhaymbwqlyweycruansxkwspxbcaf", "wdllzpbkeoeohvsjupotodbzyluu", "ayysuubeogiixgdiaqsjuujytmbiamubjylriczedm", "qiuusozmjlrveqrbkzgdllfaowjuluzgkvvnaplxg", "vnhkwltfxfriioawcqfqzxuphkffezlurxifke", "dvfdvxaihhxbtfikywugmffjxwwcjit", "fudzadbdzbrylaqamovuyxlsqtkqfh", "ddbgydinurlenhytiumylaavblmmwsslx", "hbxoudtqqcugjmxlbuelslddwqvrxreyqlthcpo", "uvmzuddjnhkinxsmhjfaajyzqjtiyfmztsphzzaz", "zksubbznctgyntuehifijrdkynownhmbtwebr", "mwhcpgledrpwujllbawfizslkwp"};
    vector<string> dictionary = {"nhnidwizsqbfdxkfzilonegxggkmupnstnmjejpko", "ajtpgapcmjsdxyosojznrkttgskpslliuns", "vnhkwltfxfriioawcqfqzxuphkffezlurxifke", "vdlzrcbivjrkiegjhdjlmligqnpfbwcewy", "teiheqjoozhhbfhtvilcgxsgcvsqqsnukxlyyewvbsg", "xdcxfcnkqyxzytanotqppnhpvknvvasisxdekw", "wbqxzszctwektuouglihmudljhfue", "ywpceilgkpjwapresvlnqedwrdqhsca", "qiersssljcvfawqrwegpvveaymkefjtfxjbjeod", "utuaeqnguwudidsobtzfesoaiuaqhznn", "gezutdmxtcurghapispdmfetxvaeyvih", "ymlkfrxdaubthgynmbwnsfquipj", "ltcigxqkuaqqomxlvyqfhmhnmgrqfvdjgchk", "dtgcwbsjodradkspcoibbbxizcmuqq", "wvcysjbomanjlhyuwgusvevhmxrcudnvqno", "ebghvfkcnosquxcmazvwkovngrp", "elsgrlafyvpfhaymbwqlyweycruansxkwspxbcaf", "dqqgvcszqmiwgyptswxvzvfcotfhwqgbhoyuyuduqc", "slvfoccbictuagcbcuwjejshlpozaccvwdovlx"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 6325;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> player = {"vzrygbtna", "jjrzmmw", "sugcdjtgxxjymyiay", "mllnxjqiblkcwzm", "rnbutfmdkfaoosjbdbhgiigjdxmvyuqnk", "nyewgogxhwdnhsibhqjtohjdxrbcu", "zkkahubdishzmqgnxgcpqfehvlkjsaexpsbh", "hinkccjhpxatkudbmru", "hinkccjhpxatkudbmru", "addwfqknloqw", "xlyjtvivwaadgibxfazcphycsziy", "fzcemtsf", "fubwcfczwxqkqa", "izwbziocbemh", "rmjvqiaqmvfeqdoyzcsptzupwmdoakc", "filzklevkhnloxknpdej", "scfjblgvquqqbhvyrsyntbihwn", "cleoifxss", "fzcemtsf", "raiywaddgmmqrkuzcdwgairczevqcqx", "yvzbfoq", "utxdscowvbwqlabkqojnfssqusrhxvbdqfxu", "yvzbfoq", "ubobcatrpvjwuyuyoztfhdy", "ovofcxosszdvhfgtkflhufq", "hinkccjhpxatkudbmru", "orgogvyrtfhokwmtachjgtd"};
    vector<string> dictionary = {"jjrzmmw", "zrdsclyutxjju", "xlyjtvivwaadgibxfazcphycsziy", "qdbwsvmyzllgpdlzwimhimuhknfl", "hinkccjhpxatkudbmru", "mhrpqtpaoab", "qsnzhggfxihtpoqdgzorpbqaoxzpzqq", "gyxfesj", "mllnxjqiblkcwzm", "kynvdsdoegvpnnxypwrnqyvvivjzqelt", "lwheioozfhhvtjhffcim", "vzrygbtna", "filzklevkhnloxknpdej", "xwqzxyjwcmrbx", "rnbutfmdkfaoosjbdbhgiigjdxmvyuqnk", "fubwcfczwxqkqa", "arzcfgwgiivjbfviqbeqytjrgqeahs", "nyewgogxhwdnhsibhqjtohjdxrbcu", "isnfhfayoyqbisabcvgha", "wdugdnitutwcgjjbgclybq", "wxjzrxhebpfjkumkbrkuagytfhbejonpgd", "fzcemtsf", "hlcirgs", "sfeshcazirmapowsatambnsnksrdsar", "uztfeikuvbxoftnylklyfzgg", "utxdscowvbwqlabkqojnfssqusrhxvbdqfxu", "yvzbfoq", "msulcktebovet", "izwbziocbemh", "ovofcxosszdvhfgtkflhufq", "scfjblgvquqqbhvyrsyntbihwn", "woymnkazxiiflnvtwaddkvlebiqxxixsooqjh", "jqtiqrigedfwns", "uuqrlclj", "orgogvyrtfhokwmtachjgtd", "uqqlmrrzvaqawdamvfxs"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 7313;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> player = {"eijrpmmhd", "svlvqkpimndwfqapiarltcbpkihxtgoup", "bwrnodmakbhjclpugeqjikwplldwfu", "dhoxrlawlthrtzjigbk", "rwduqdvrbwq", "yxriadvllllwawuhus", "nxvhlsasxfiwowaouzhkhlagtthuunliw", "atiynphzyldzvvz", "rrifmsjrvxhefqczt", "mlvbdfsreeerneyrjhbpghcdyjdtdih", "mlvhllfxbwfugaitryyxqvswrexqqax", "xthfzxhlxoamafspqylwywz", "aonpbhsvfxnafwlpcinaqmzcihdn", "mwd", "ozxlnqsagbnuagvwacsfqjcapezuwzo", "aqkvwekdpyfafuuvdxnadforrpwduxu", "nuatgypkbyokopknbuqzlzvmdczdjkrayf", "mxw", "wdypefgfvcivwlvrik", "wawegzhn", "vysvrxlavnyqfnkp", "poaracalseyjufemtcntg", "bzxkbxgqznxpcipwimwhzfhy"};
    vector<string> dictionary = {"hyw", "llavfgaepxirkmjny", "nsychlordgznuctqvjbfmmwffwpcca", "wxdhkflsdnccljbs", "acm", "pwyrzgwlhknekqzfwvjymlynotj"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
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
    vector<string> player = {"vhtkdyglsgscsxmg", "mpmzjsrjaram", "tvqhlcb", "vfjinaklehsr", "vljrunlz", "kirpbmhbqo", "kirpbmhbqo", "kirpbmhbqo", "jswnrpnoqdpde", "zqwxeyxt", "mofdqrecxfcu", "bituamqo", "xkhdvnoca", "xkhdvnoca", "hyblpu", "cooglh", "dppyofbyx", "jdhkjpymxaab", "swllyvgxhxm", "xkhdvnoca", "ndknreolfpin", "lmzvvu", "zlaihd", "penvlhhwevr", "xkhdvnoca", "ukultctgu"};
    vector<string> dictionary = {"uodbnmpvgspldyf", "swllyvgxhxm", "hyblpu", "ndknreolfpin", "penvlhhwevr", "alfozjg", "bituamqo", "fpsxulyo", "ukultctgu", "imfdqx", "tvqhlcb", "zmolpbgskiyx", "ehglpqnbuebcxa", "dhpmgv", "jethyemujqsjwgcqy", "hdteqgcpcbntqjjzvj", "wcfqbumndlmwvzdw", "dqutmjmn", "tbmdswitkmm", "zqwxeyxt", "lbkvwsklgzowrb", "vbsidpf", "dppyofbyx", "zwavfqjgujdq", "cooglh", "vljrunlz", "jswnrpnoqdpde", "mofdqrecxfcu", "mpmzjsrjaram", "zlaihd", "vfjinaklehsr", "cufxlyul", "lmzvvu", "kvvtyfwuisu", "ctmeqpkyvgvbwavvb", "vhtkdyglsgscsxmg", "jdhkjpymxaab", "cyhdkgtjwgfvkktewp", "iigadedkjntioablkl", "ybfheiakn", "xkhdvnoca", "fwgnamkygzrwapjtun", "kirpbmhbqo"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 2115;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> player = {"dnmchkbdfnqhnaukdwodxzwbzbpdsdbhtzwuauykjngfsezptc", "bhgvumrxrqgibkxnijwckyfuuxtfznhievmtkijmotinijbrvy", "bwbjmxuthxteyehtxyjoprvfbmdwwcnyruzhxusktjctcnylvk", "lqbthzkxawvuxpohivplrsuetfeanpfxmadgidipbtgiifqueu", "thmuzvnnsbwqwntdpbktbkyxqerafuetwuuivhlmzwffubzstf", "rkljdcixtlftdckaqpezvlzytrgyrcwfqsyexgnbqructicqpt", "ekcpjuvvtlwjrjagunkvpvtynafdvewibpfpucfmrnwiecrhhu", "geypmczdgxranbncsclgmmmhfvcdawvftgumzsetcsbxfhvrcg", "qczksguwrcdldbtffehoqxbhniygwfxziubietfkygdssucjol", "ndbsqmakacpbdapuimqosoketmoddcjavhuikwhmwjmkowmevr", "pgfnhsmwmqcqtcigjsdtaszmbjwndyrfksmeexbuejyhikphwh", "tkuhtefvuuoapslrkkvzvjbmuzbytelockeclyiweqllbpcwfc", "maywmsstuhmruystcnsexloblplxvvkkwupezbwcoqgexxumaz", "evouyyjzvyrtoobzgnvodjwwsjaxtcnsmwkpozgqdhgqgomupr", "vizlgbkznxukekeznyaebykmfdbpbwbkzqthkxjyizkbrnklga", "jgqmonjdykdmfibcjaulcscjnkuonclgwtzstljmxjlarfjicm", "owwhqoiohqnzjlumucotmgunulawhxgfwscgbxxdrgfsljdztk", "okawfuowhzqarkfwwxsrvpqmsbmqxfgiavyvudoqulzhsyaqyc", "zmuqwhcykzfpfehcnfpxzuvxzmhveozhulgoqtejqasfoetsab", "hkzqnejuzbhfynrhtfuskyrknptsfievgjotbdjezlutfktzka", "rimpunvtbtrxhpzynxlhlcypsqotxjtpbnsoqnhimfyrznmfkp", "rkxmjuchiundlpelqtxejdchskalxahfmeycpvfoydridzjfbh", "rkljdcixtlftdckaqpezvlzytrgyrcwfqsyexgnbqructicqpt", "ndbsqmakacpbdapuimqosoketmoddcjavhuikwhmwjmkowmevr", "rimpunvtbtrxhpzynxlhlcypsqotxjtpbnsoqnhimfyrznmfkp", "mupshxlihotfvcyhngfkvudalhmyhdagtbrgtoxcataokevdrs", "sfxzcflvbiiakywkdcgqbtbthllzqrvlgsyigbgssuxivlcfhn", "nwpwqepbxvyizuetbvwbtfkstenjwibxsldxydohmztjajnbbp", "styuhdziqubrurazeoghircrwvyzwszhptfbgsalufbzzkpixx", "gkzfbushhykpqbjktuyegywgthygbziuuuayaagnunbmynpske", "hvaevnzhuadgdwztcpfoujdqgqkdvfcyngmrhecrqxisesuxoa", "guptjgzlleukicgcacrcwlxlwxxruvsduawjkhubsxbfiodftq", "uqxyvzwofdujcjdemndwdjvsenejyzzmulevcyshrqhzodoxrc", "cvodobvjgsusdcsoutnaibgzipzzadtsxcwwzpozwtxhdtdunz", "okawfuowhzqarkfwwxsrvpqmsbmqxfgiavyvudoqulzhsyaqyc", "ltwiealwmsrtxrlmurfwrlmhoumzmimmurgdlwhsuomwcjqyjm", "jwvvzetyjfodfolnglbfpnysawozasvsfrsyzgmqrerjdwqwkw", "tjgodqnpjuwbowrwfkekfklrdpvrjgtafjkizvcmglfmchloqx", "jjskndmgvbxwydnhjdyyeedgesgxblmtvzscowyeoezbdlkhqp", "ldhejrrovvsjhwtbiaukerofkjwumwzmdqbotxvjyloelahexa", "vizlgbkznxukekeznyaebykmfdbpbwbkzqthkxjyizkbrnklga", "zlgiutmreifamhcgdghslpxysfyrrhdakslfilzkihneyrdmkr", "blbangoyhyhjwmsfmmtmgcgvvdamirqfqhujpcdzqjlmofqsss", "dnmchkbdfnqhnaukdwodxzwbzbpdsdbhtzwuauykjngfsezptc", "swldxhyzvsgoadweyvwanjbwfrkkqeqbkiwdplcwpctflvzaew", "moizksxoavufhmocarzkxwsbuzrqtttuqgcrqghzoctzelprgt", "xugmwktsujvurnufcbhparozpqjtfrsmwlbbdrdadsjaambols", "fddztneorfcpfzctfttfhrcuqewpojqlwsjrimmaricwuvegsk", "tjgodqnpjuwbowrwfkekfklrdpvrjgtafjkizvcmglfmchloqx", "pclluctpecvksndflnzwsqcqhclvhvwjeuejiwmqwzepgjsfwt"};
    vector<string> dictionary = {"guzvhcjrpbusunjwsizcveydoxswdxkmefcaxjyrzuumqgnebg", "ishgexisxcaekjqsypmsvydqzylsumtyjtogbjxtqdbugprsgy", "kuzubiyvzlqtwjiynmhbxkgovwlayyzrfsuohoprnplgnqcums", "kbpempisfhnagajdfpotxaapcduhvkjrupeesbjotnuvuvxqzu", "jeqxgamgdxfzgdlkxzofvysadndupmytmrkeczuiyqdvjlbvbe", "zmuqwhcykzfpfehcnfpxzuvxzmhveozhulgoqtejqasfoetsab", "nmrsqcnwlvhgvgjiqncfwgiluqmbztiishnxvnyahtneexinne", "okawfuowhzqarkfwwxsrvpqmsbmqxfgiavyvudoqulzhsyaqyc", "lpjgsnrvgskcduiavvhmgtivdnwqkceriktskfpybuiqdtjlsw", "iepfkjrrjurmaqrhurxilpzihrzhxqfdibrfwtunpdtvocmlgj", "wkasoefypckytvelzklibhszahbzrmtgmzhmtcevykllmbgzin", "sfxzcflvbiiakywkdcgqbtbthllzqrvlgsyigbgssuxivlcfhn", "frlsqwcqbadjqwtxwsmpalglzklpducvtapnhdurmbxjhkizwf", "ekcpjuvvtlwjrjagunkvpvtynafdvewibpfpucfmrnwiecrhhu", "yshzbqmbcrjfkcpibtbzpsjshihasqsnpxdwhayybomaqbydwt", "tjgodqnpjuwbowrwfkekfklrdpvrjgtafjkizvcmglfmchloqx", "qkpjhrystzhhpgmipiejdvsvsnykxeayvrnreeukzlvwtyfsvt", "vizlgbkznxukekeznyaebykmfdbpbwbkzqthkxjyizkbrnklga", "ulxlqaovpxnfsvmgrlzwxewnuycgejvvmleldziqssfkxeiuob", "geypmczdgxranbncsclgmmmhfvcdawvftgumzsetcsbxfhvrcg", "rimpunvtbtrxhpzynxlhlcypsqotxjtpbnsoqnhimfyrznmfkp", "bhgvumrxrqgibkxnijwckyfuuxtfznhievmtkijmotinijbrvy", "apvmtgdzivuseyolivqiaxnexfhhlmlvpllctbycgycvbduqsl", "xugmwktsujvurnufcbhparozpqjtfrsmwlbbdrdadsjaambols", "ndbsqmakacpbdapuimqosoketmoddcjavhuikwhmwjmkowmevr", "hvaevnzhuadgdwztcpfoujdqgqkdvfcyngmrhecrqxisesuxoa", "hylwzacdjcstjebzgaqdqzkzzxrfcejzpmpejcykhnnymfmgoo", "xeemlgswkczcocpqeovaemseundgxfgcepiqkblqxlhxwfdyys", "vnmolsmgeyhaxqudpkxmxmbtgizjxiegakvgcqblrmpsydhzqu", "cvodobvjgsusdcsoutnaibgzipzzadtsxcwwzpozwtxhdtdunz", "xwojdonpfhggwnrxgbpvbvaxemvgeljaptdgyynezxlalkjksu", "jgqmonjdykdmfibcjaulcscjnkuonclgwtzstljmxjlarfjicm", "unfilbqyhmpvfvoekohfwkocmaotecilmvgesflwwxljvvvjmu", "styuhdziqubrurazeoghircrwvyzwszhptfbgsalufbzzkpixx", "rkljdcixtlftdckaqpezvlzytrgyrcwfqsyexgnbqructicqpt", "tqiblamncwxcoxfqafplvswzkjyuqblpgzlzpnxtrhbgjceipf", "evouyyjzvyrtoobzgnvodjwwsjaxtcnsmwkpozgqdhgqgomupr", "whjxgisxorhvxrlhrupxnsahqxmibqosrvgrdzaldagxkcsjtw", "idovumgwifgtqcuxrvkejhfjtoemldciqnhfwyxpnejkxaxvrj", "knytmhwysejmbsslyxpmvnlpuurkdwpaczvygjzwqfbrwmldti", "guptjgzlleukicgcacrcwlxlwxxruvsduawjkhubsxbfiodftq", "mywtvfcfoarsosokehbcukvqntapfuqknulgiycgznisuiyulw", "lcandlbstscayiaxnowyufrynptqkalyikuyvrysqrlusupdnl", "dnmchkbdfnqhnaukdwodxzwbzbpdsdbhtzwuauykjngfsezptc", "zrqvubtmzfawpjuwexpozitbicwdcghlaumcjnowciotiwogwm", "pvfhokzerfynjirpahhmyybqsachjttjmiabhnqpoamsjxfanw", "znafuzrvdiwrerubbtcfeifgjmtsdsvstqilrikzyhzltuzfff", "bvxbuqnunnpcimuomxbhywvpifhempcvloqvxcvbfyezjqlwox", "pfrkukoegsbvrmwpvmphprrmblboskjqzkeqwkagnubbphwsnw", "rkxmjuchiundlpelqtxejdchskalxahfmeycpvfoydridzjfbh"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 50000;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> player = {"cwfypzainassunvxqkinagsyizgrnwxxumbceadzbebmumnmji", "obqccndcugasmptlfwhwwsejmefballopzpdqdgytslhqzhhse", "zdscrzshvabpcgfbcymintkturzluokjiyqymuaeacnilfnooz", "bzdpkuitsyjrwwbuszuupjzsdaqdolrnxgnsttyohvtbfjiiih", "crlofgfmpecclpdjcmkrujbkxpsviwymirssvjeagfmhpuapeb", "lbmzusyeccogvkaibjazwhtgzvduivmishiepbqvzhymvmjwps", "nxlyrmxhpkyqvlmucaaldtkwflhoyqxpuishqlexykqgipebul", "lxpyvahlkxgypeuyqvzuxihsrrwozlqadbegwzvygaxdvnmuij", "arhnnjxvxrsrxymipaqedmhatltoxmjmjeuyjjmoutdzvvikcv", "tstntfrnqanhrmxesvqilvrirarhxthwmnprfbvsbdsdfggqcr", "lztnjwyvzdzgedqeezpnexbtfziyjlrgexzvkkyyiksvbehcao", "iejvdwpviksrqaauobccucmdvvjnzcafijfkwkhcsmngnugrgu", "dufqmffyjyqulzanzcfyrjzuhcqcoiqatgvqkzruejjtgktjaa", "hqpvrttdfqvwljheodguritmctibwieibypbwadivbcnvoklot", "bwytwdiinzpolpwypznjqgtdxldyfntvjpcgiuipbqniircgti", "yeixzbckrgarifklognxakxwfwtpghdbsoqsylcboesmiooqhs", "pdzojrfdgasiiplnugklwvfdnaucrspywyzmliqqwflahgdsqy", "ubtimylnjzbzzosoxulbtpnpjdlujrgihwfmkpdxzatzqfrjll", "yfjhocvxpcfatmdjnecwqzgexvehwuqcbbnjzjshsdvqukarmg", "wvotwvgxgnbmmhrkpewkejiiuwtywowpdubqkotnrfddoeuftk", "snuhjupbgfxuzbtxkvvnuxvevabslibnxozikhrymmolsevria", "ndbgrwpatzgmzfgqfmyfbbkpmtcuqiobtqoqxonqvhbmqsdzmj", "mxsijlomfekydvcipsttumqmcdjtvpzjyqcdtayjgmuoojqeox", "opihdhfvjrcfamkornojsktitcnrgpdimssjizownsgxuptncs", "mvcddmcsbqwumbppwqhlrmdafdotsbhiabjxabnswlagbdfrfu", "hrxusmrzyavoeiaiecwyadlihsypgbmiaohpzckongfiaoqwdg", "tcfwfwyujxzyqlohobwizpumlkmyojslbmzumfidsoioxnbiax", "uuetnqztahoycbjnuxhrvdzimbzcmggfobbhkiqqipqwthyhni", "wakbccmmgelkzhrhqeivbcvqsqtxlohvjhlmmznkzvitvgavgj", "uztnfsoezqtwsjigbaqiduikejcxfwxbptxufmskguecfktvoo", "fvpfcwwnvofrwmfplajzdfsviyhnhelueqvjnjphjqhvfcfumd", "xccrsqpmwpjhrneuflarqxdeuveqemvjkifmujpfvapiwhrgci", "msruoufhrbzefqqdvcqdrpwtqlksxeigldemlkkiurghkqouzr", "ekjoxkvvrfpuhfjllmoiqrjgdbwlvrbrrtstcrmrdvchijhemb", "ztaomvrgtvfxbobkfhaofgbelichnkqyvhvfnwdlrusyxabhmo", "jltcusgdzkvqipjsijwphgfsqznhpwpnhoqhclyienhxgkpunq", "khhhjshiwnbfvzzksrhxolrjcsuogxdpajrtbydwqeerjxnbgn", "qfczvagxifvjfyoyqqdcfewgekfawskejslyhgdujgyqqzkucu", "zprczmwwnejjotqpaugopcinistqkdhvbgsgdqvmzxazxkxeqy", "bkygdbyadopipihqkvhyqdlegslunepbwdrxniucdtktocxqpt", "eimjbibnmgibukwhfmnkevvqqrscyxefqhyckvicmwwhmarltq", "tpkrkahgyfxuneckahnjbiujxpbrxrehlvcdkpxnwojxmkimko", "pxgbgrveqchvzkudopqhbfuzqfqzeronpoiwewkprbwfcwuqje", "paqpheeuwjhaugyendjyhboacnwlufzwtpzccoirdptgmmnknw", "sraivkjdhjjtxqonhucvfjrtprxtqhuqhfeedrtxiclumzhcxa", "haqtevqkrjwsjgquhnozyrukftmhixjfwyxikbevsstlyxgngi", "xfzopvbiuqqqxtmibauxcphhinjhltoxiojgrxpzfnelvabsiu", "jltcusgdzkvqipjsijwphgfsqznhpwpnhoqhclyienhxgkpunq", "hkrqofmcdiqxquygubvdvfmpdafmupjijxhebwewvpdnbneaku", "hgcbdmycjvqegukhhvjkrphtkoqbwwwlbbffjjvwqgufsdeiji"};
    vector<string> dictionary = {"dqemasyxdsaundzyunpktshkotdaawfvvqmhxlvrncoxvmtjob", "mqxqjifbnktcmshsfltxivimxlybyojquxnhqxxzvoqidwrmxm", "ritbactrshcjdywqdsdriewkbwozefqudivokhoktkhdrdayzo", "yfjhocvxpcfatmdjnecwqzgexvehwuqcbbnjzjshsdvqukarmg", "jltcusgdzkvqipjsijwphgfsqznhpwpnhoqhclyienhxgkpunq", "gkouxmvlytndtrbyrqhxaknqohqozsswokbosjkayiruniyaql", "xesffzkeawnquqgwlhnhdqldqfnrhapjbvzrdhcvpgdjapzuol", "yeixzbckrgarifklognxakxwfwtpghdbsoqsylcboesmiooqhs", "tolnaxpcjpypuoullseswnbicdsrcayfdmxnmlsomuznqaluvy", "cigakkufwxzaarbpkcfhadmkabkqvfylygeavzmflqmvhlnpao", "kvqdfipshvrzzbvbyxqiyurngypmtnlateyhudomnvfwfgpdzd", "ohtfkvrqrsnpelaahaoygrtrqulsorjrasfmlptbycrogbnszt", "wakbccmmgelkzhrhqeivbcvqsqtxlohvjhlmmznkzvitvgavgj", "cynpmicnyedfvpsmtlkfzqxbcadkymvjstcmdswqvtixvefaou", "crlofgfmpecclpdjcmkrujbkxpsviwymirssvjeagfmhpuapeb", "jshpxdjhclsiqaaolfjgqioikzudfmehndrhcpccfccgliwvpq", "mvcddmcsbqwumbppwqhlrmdafdotsbhiabjxabnswlagbdfrfu", "snuhjupbgfxuzbtxkvvnuxvevabslibnxozikhrymmolsevria", "hnhlnmdstfscqtwrohzsvucgddtglyztpeuobnzkvoouqwjmff", "nzjxggddahbmemfrjemqyrqslbgjaxgsnewjgrvlayxqgvsjai", "intejdctvnfqucilquxielwqlpvakoryhxkvqzjxkxzntaewsa", "mlemltplyrphugeqvetcqcsmjsmyzsyxtaqhulnxwhazxnupry", "fmbmnivpluxkomjeryrfezcbfjgrhrawmjflkwgskpbsmuztop", "sfkhrfpenprwablqnsxvepkqerpravzyyllhqbivizpdiegdjd", "nnmcyefpmmwbbbxuhpbagwdhsriicxtzbpidtgrxgufszrloce", "jzrtxmgzikcaxojxduonuwdguatkmcgynwqdsakxqhwsiacbnb", "hqpvrttdfqvwljheodguritmctibwieibypbwadivbcnvoklot", "jydfumuhkoogjxptbhfonxzsicqimokpcwylpvjnqxpbpsngml", "msruoufhrbzefqqdvcqdrpwtqlksxeigldemlkkiurghkqouzr", "zcpdttaizsyaqtqeilnlitygwgtsxukmrnzawqqlrajyoptxxk", "krqbtuywzbgruoqtlidmciaijcjghytltzocaerwrdzwhtrfuj", "dufqmffyjyqulzanzcfyrjzuhcqcoiqatgvqkzruejjtgktjaa", "paqpheeuwjhaugyendjyhboacnwlufzwtpzccoirdptgmmnknw", "gadeloehsrwqkxlljtgufnhgtdfaciakfinqfsypogrvubegyr", "ppbfcggfjtskwqkbkdxkoslgvfohnfflqakpsdqsyzbdvchinz", "zasjfzihjgwzuobkqojrfkrjtdcywvchxmectrfuzrupvaeeoo", "hhvorxudmswimyosykzsyaymnrarxlgeqwmomtnjoaxxorqaob", "rcvuuzkdvkeazpnudeydchrzboddcqgoooxnulknjiphwvwxus", "wzileczwpmyhmnpdrzwnsbjtuezqkseyhyicwsrusbfrlvmqyd", "xqgyvtljbghfsoxqshirkgyponosnkcgadrdweokikbsdqxhjg", "ubtimylnjzbzzosoxulbtpnpjdlujrgihwfmkpdxzatzqfrjll", "aeysmtlequylnktotyifsmxdyqbzbbmuqpvwxryynzypunrnlt", "ndbgrwpatzgmzfgqfmyfbbkpmtcuqiobtqoqxonqvhbmqsdzmj", "hleaxvdodnzvtodtfyxbdqjjbrrvgsvqopfzkptbkajsumsruo", "ztaomvrgtvfxbobkfhaofgbelichnkqyvhvfnwdlrusyxabhmo", "zjahkhcfksufnzzutphhgqlfkvslomqlawjcvrxgglmbqwmmac", "cwfypzainassunvxqkinagsyizgrnwxxumbceadzbebmumnmji", "dbvqzjrrusmzzupuxijendihfjqwzfhunojtgqnwwgdkqotkqm", "tpkrkahgyfxuneckahnjbiujxpbrxrehlvcdkpxnwojxmkimko", "pxgbgrveqchvzkudopqhbfuzqfqzeronpoiwewkprbwfcwuqje"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 42500;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> player = {"myoraldsmioukqncvmpopcslfwfjlelxfjvigwehbeysvzxcwz", "nxsovmvqhppqgimrjejceqlbalkttgydumeakvqilklxoxnsor", "jxszcrrlzikpobopdrfmcrvczesnewqyczwoqjcmscoyegzcug", "pkijnseisdhtyonkorkhohdxwaytbclloinzvcoqfihjxbmffi", "izgdvpqnkmexilenvdxwhsabvxtdwlxtijfcxdgvnumapjarqz", "jmbqfjswlvtpztnfbwbvnndqcclrwrkeszgfqfwnubodqgptwh", "qwivfstzztzvkbflawrwupmhicpypkulvngfoubjjixieofbca", "tvknueipsbzwgtpqjwfpucocuskcrjrkvoojkipnfryceivphm", "ueasegklotojlgzzprjceaiucsswoqjiqxjdtntmxyjmohpbvy", "pcbiksvsizrcomelezivcfxkmnvcwdicsnmnwasaospbnphxbo", "fqembiosgvrelhcoekqaawzeyrbwcgmnexspmlmqgdcaolhneo", "fgisxvcizgltijpghzyheuulirzlqudqagpfgptegshyusjmfl", "aameagvpwhguhzgoeyxrdgsiafbusaoytmioiohwxszgrskcev", "ffkdcimrnusouxnwcztgxqhqulgjatoecdymjvmjbrumatvptl", "fpfsohanpkzvfwtcfbeyjbojpwyjaursqhdedrkzhxsdzhkdqm", "hnoetscxnccojhdtykirumaadspxnxvcnmtrhvrpwgopdvnkvn", "purgbflnftpkxxfgqmxjpdgmkbivlvtcriwhgsfkvufpvfjjgc", "ukkcnwldtcgldvopkrffevlbyucisiquqxjtwcgemxtzvmsoba", "tfswgegoayelkpriedpcwvkguvdbuzxbjhxeeobwuhvyvakrsm", "vttqtcsadhjsixkpbzvrciemhomhfnejywdgxoqhoulmooiknl", "vqknpulorctwglocnnplhwhsvyfjaenbfjezdayvqznhrnvpeu", "emsqnmboylzuhmajqtqqmhxtgprvdfiuzkpwxewgjysakazchb", "fkxqtdlsrkyxyfqohfwpkajosnbeveypohpyadurqemasrsufc", "erviqrczxpmjxnrofuulozweajgyfeftvbsyaufrbqnnwbgfzp", "ffkdcimrnusouxnwcztgxqhqulgjatoecdymjvmjbrumatvptl", "ukkcnwldtcgldvopkrffevlbyucisiquqxjtwcgemxtzvmsoba", "olqciuxyxxvjcxssitztwrkboakvfqzrpuggkuanopxjbiitds", "ffkdcimrnusouxnwcztgxqhqulgjatoecdymjvmjbrumatvptl", "ofwxevmbbolnipbotjwdnewrjkfqgsjzhtuqhqmxsuhdmzoeqk", "mdjstljksbrznbrgeqdcwlcwdwlotgsbkdmpullcgdyqnkpvkr", "lyqbyromsgougtlvtxtugfenlymanxvwlupnssmajdqhztjgln", "jmbqfjswlvtpztnfbwbvnndqcclrwrkeszgfqfwnubodqgptwh", "oxardlmztmeivgkrsuyixpoyutvkdchldghnbougmcbmsovquh", "vqwhdfmllvqvqayrsxwjxkweyxjeylxirnxlkbnwzvxawnavur", "tkacfklbiglhaulixliexusoidwlbeoxezkyuynmdjktcuwkbc", "pmyfrxzlycrizzziseshbtddlmczenhoqlimqvwwgzlrftpljh", "omldgzdkgcgmybfpgbvyamgbezenpmnjvppifvvvdwzhqkosqr", "omldgzdkgcgmybfpgbvyamgbezenpmnjvppifvvvdwzhqkosqr", "sfdfdojbiyzempvzpxcbqykbtszclxxiviqcuuitwszqafyceh", "ghwdpoezmzkxtecyhwuhauvejthdtrgygsezxudpkcmmlphnis", "rilqsacxflbcxkmwckcfbbohboaggzzqaimcpioqstduxraafd", "wynowwztrwfcnwsvdnlbwlfzsujwhweaxnjmumpyzzftspkrcc", "jrwgjpdihxbysegcztuwhavrnaipgnlinjntpizktnuzmemtln", "nafzvezfdhmwkywbvabdrlpcbvswynlddfpviyfystjzplvjlk", "wfcsrpkkzryzrdsarkmpgjgqrssmgnuvyalbzzzgykbpywujim", "pacihcurwgizwvuulzfnilxquegvkpqkvxkouqmeeeycwxvios", "roizdvfnedoojhfufgsqkrjlfsfqfrgusflhjdqfgjxislxyim", "bzilqcnjruficwiyenjleeotndparlngdsmugvdvphrbvvjnhm", "vyqmcaxtypgjvmpbeyzwljxcatbmwsolhvkivdppcheqvfhicz", "roizdvfnedoojhfufgsqkrjlfsfqfrgusflhjdqfgjxislxyim"};
    vector<string> dictionary = {"msnedalfjivfrlgbuvgyybypwhmuhqkkjilwalljnzwcnxcodw", "hnoetscxnccojhdtykirumaadspxnxvcnmtrhvrpwgopdvnkvn", "lhwdssdehvgqnmfibqnvhoffbshogiumbshfpdoqaktryejysu", "tvknueipsbzwgtpqjwfpucocuskcrjrkvoojkipnfryceivphm", "wmxgvhzfiqqmhqznynuynebakhotamndujsrxkesvglkhtpytv", "wccpuxcpjsiipgknrmtmftciozirtetiholeleorvrgqmfiqgz", "fkxqtdlsrkyxyfqohfwpkajosnbeveypohpyadurqemasrsufc", "oxardlmztmeivgkrsuyixpoyutvkdchldghnbougmcbmsovquh", "vityxurpwalrafhkrufufezxtdtfdbbvvglmiilqsfwwxmwoes", "myoraldsmioukqncvmpopcslfwfjlelxfjvigwehbeysvzxcwz", "rsiywybryllzslauwynvdrgeeebyiklafbpxvllboxwqdkzdzx", "pkijnseisdhtyonkorkhohdxwaytbclloinzvcoqfihjxbmffi", "fpfsohanpkzvfwtcfbeyjbojpwyjaursqhdedrkzhxsdzhkdqm", "ofwxevmbbolnipbotjwdnewrjkfqgsjzhtuqhqmxsuhdmzoeqk", "aameagvpwhguhzgoeyxrdgsiafbusaoytmioiohwxszgrskcev", "sfdfdojbiyzempvzpxcbqykbtszclxxiviqcuuitwszqafyceh", "ukkcnwldtcgldvopkrffevlbyucisiquqxjtwcgemxtzvmsoba", "roizdvfnedoojhfufgsqkrjlfsfqfrgusflhjdqfgjxislxyim", "bgcjrmhqryorvibhmyyxhclmutytonxtgulzobtoqvvkmmfoof", "atbcwuslhxigbsnhtpsrytpqukhuqtuaxdopiuwqixubntaqpy", "bpaoxpktfwiztcrvxwmbpofozicoqpcolniwvpjhepzpylwxod", "utwsadfgmqtccrwobsqtwmmqwwwactflpewvfbxppwztksbmug", "tkacfklbiglhaulixliexusoidwlbeoxezkyuynmdjktcuwkbc", "jogbjjezguvqnlgrvxvhwaffupjfmjvkbmyjqnfkmlsykduqub", "tgoivcpokecvytceuupvcavfjesztyqurywcmfukrpjdghyxzi", "dknmevfnifhwvexehzqdfxdwhylavagxtgiliqrhlfohhafzdx", "ehjfbnfmdizvqfnrvgulhyjdpwdoariktadvjxqldlwjqcsbrm", "jmbqfjswlvtpztnfbwbvnndqcclrwrkeszgfqfwnubodqgptwh", "xtmyvmdgbzsrgyhtavfwekatuwtmpitotrgivvasrachjwseuk", "omldgzdkgcgmybfpgbvyamgbezenpmnjvppifvvvdwzhqkosqr", "fgisxvcizgltijpghzyheuulirzlqudqagpfgptegshyusjmfl", "ggwkyfdvhvvkzepumdwkohrfqqmbxkltzvbggutbcqgyhkafyk", "liksqchvdcxykuaqnldtfxaffyhhsufgdezsadudjhwjrcohnx", "etgxyoydippkwqkqhqtsdcvjgpugwqwcrcssethpkvalmuifhf", "dxegtndvwooydjzjwtcugstsbfcypxnpwpxgsbsdndczrzdsbl", "tfswgegoayelkpriedpcwvkguvdbuzxbjhxeeobwuhvyvakrsm", "ffkdcimrnusouxnwcztgxqhqulgjatoecdymjvmjbrumatvptl", "ijtlhyghqogghqtlmfakquccdwakfpvwpgjglrrimvhwuugzee", "nmxwwyitjsxjzeuhajogcdlwvnjbraidqahscvdgrseimdfaqz", "nafzvezfdhmwkywbvabdrlpcbvswynlddfpviyfystjzplvjlk", "gstfmbiusmmtxupovzopluedmewomxnmwjaubyvcpxklzwjcdm", "tsgvtvfazxxfshkzlykhexxlxbijfcramhmozyicbsaitqfdvn", "umqyswubfgimdpaduxjzfaywivqplkvvsbecybucbphjtdqvxs", "erviqrczxpmjxnrofuulozweajgyfeftvbsyaufrbqnnwbgfzp", "nxsovmvqhppqgimrjejceqlbalkttgydumeakvqilklxoxnsor", "ignjeatrvmhxzinfauqfjhldxdobmjblrgoxbejuyarbyjrtkd", "vqknpulorctwglocnnplhwhsvyfjaenbfjezdayvqznhrnvpeu", "uxczvytrcfjbsuseugctsgwxtftvxjkayrgdndcdcyezgjafdz", "vpmjukoquyrgngpameyytupxfhmdldenvxbzlgsfcsdpwieqih", "pcbiksvsizrcomelezivcfxkmnvcwdicsnmnwasaospbnphxbo"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 57500;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> player = {"vmxbvqfzdjptupsmadrcxgqyyccbpvqvfcrlaqxxeweuqyexxt", "kwhshfepfairmrtfvibdroztxevlxxybabbwqmpnwswodpveqf", "spmzlvsxqwcaozubjzdguaojutlfwxtagkvngcyphldaygsyyp", "lrmrxamumznlfmabytjmjucenhhveaaimqtnplcuplbqlspoee", "guazfjvtgyselaabomuhlemzhjlrufzlotjahfmvunxzeiffjs", "nzvmgoneiwfkwilzuiickhhybyepvtslfiybyfbqqboyflnrbu", "ztejdkgluvkyofgpvfnpkxjfxprtedzylslijxlyzlehhdthsj", "ydsefognrbunruyffcaegvteythdrogndstmchrkmjgsemibsz", "pnmifckxsvznyxoomkvvappqjmaxtuylebgolodcwzyyieqozv", "jwfshcbukbqudzyukjqssdrxwxblnjdzpymkjnjlxkyexkxpng", "bpuxtqjluqefeemxehvtnrtplcbalouzlltkavswxnbthuirsi", "fhhcsmkuxlggggqgotccttodxkpiwhsmppiwdipspozuuylivm", "ajapwozpgfpukuijlfoxbuseigfaykwrfkndiufnbfxzzalirt", "ttieqiyttkzefudacrwcnkbnhxhycezmdxdakoznuatuzzxqnu", "vsrjacsglzducnbconwyrtuqckiaksquvecuomhrwpzvmdtknn", "rfghykooltldogprvadtizuxhyrhhpniyejavoyhhtdbgiyeat", "yjmgwujkzopglmftflowyleyvflhbpubojpkcodkvcvbknnagb", "mofruuilldrmowhmsiqrlawfxprkmqzvnrtjjcpmylqwpcmtze", "xvwvxooqfkeashwhsvjyunvghjuaniregcdozphytmyidxpamg", "trdlpaitgrxuaasxsbvztxdohjjxwymdmbihbafodvxxebgjjk", "irhjucwqsztymqcttmlbpzsijiqyilsgfaxilvbvgkkkwdqvtl", "dqikviqwmgcwvbggkgomspmjevomtcphwtwdiisgmaqqnwdbof", "mqyslkedqisqbmnnjtdutoqyucttlwipjcxliulkpduhgkhyjf", "oabirldvbrpoijbybdtsilivobkpipoqigrfvndqpvrlaumryw", "kehmjaqodjmcbepmhcnymfpwzsypznigetvajgpiqyiqvihyro", "lqsgbtubrhbuiaujppqjphynvnunfipohhvzmwdfgynvpgqvgo", "zhionbtbwraifzlexdyjugsmkqzwhxhukclivutnprpvzkmqws", "awfxwuhnjdlpapecsbobcwlbeulfyfructbqmmunmnhballomi", "mbetjgopppccijxbebbtefrkhydeotajhlovzltmeoxdxwojal", "agqpzbuzkwtbbpgvjzjtzthpjffjasjmmrxnlxjfreifgttbet", "azjgienpuxaccdtnjykockhpxpsrukfrpdmwwofwwlruwltfxt", "ozewytytrbzzjhixgghxuqrjmxkvizlwmnbrfsjnojhmsumqht", "wkglnpfylsojlcksqhhicabkuebcroohmulgcbpnpzsszjpexc", "qfpktnrsdsjkrjewlobpqttimkzfjjqxndumwiougnhfxrwfko", "enrxharnrffqywmtjfjrhegvlnsuawkezyefddxkvwriduqwyy", "qefsldyuxjthefhctbyogycjkouahojfalsmytuwikyixdcvuu", "rscadqbornqhetgiyrzskbblvtacesevpdiiepaxefcijtjqkq", "pamqqetnlrlpaauxqngzjtshcxemngbcylrayeehtokhushpwc", "ziiwffiptlaxskvkkjwzjeqpqiwxcfeddkoqlnmgclmyghaumk", "nqiqqulrvpdpavfqltywdhkvoqmoqnjdavkugffddsrtgmicdm", "afsjznnbhnyvcqzuqfchtwlmrdthotfukchtjtvebzhrtihfzh", "djvnnxzkvfopqpitaitmfzubvsvjuqarjppyzgsgfcwpgywcbm", "tbxgkccymsbjqtbanymkniniklvcnaktfehkgnazsbucbxoeud", "sptjhxpimwvfmmlhrrxivcwqjvajpeutfewvrfhqhuytjmvyiv", "bvqdfnmgjzldmvsinhloovprmwatjtizvlzzjilgvhonnjxgsq", "ximqrhowwueecyokffxgjpogkxonzemeheoogxgkiqrjcyxyng", "bfcmofdryqrgmupivlybpmlyrlxhacapofowrdxmaddpcmtmjp", "vjkfgmvjqffpsfrsmuekvpzobikmeobctliheasunaawzanffk", "osffatfvjnoebuzzhelzavijrjjujqwsnmceiqruplfopakfia", "cpgywmysxxytaubtzhtpboprotcilzgdgsbvtixhctmuawzmyh"};
    vector<string> dictionary = {"vmxbvqfzdjptupsmadrcxgqyyccbpvqvfcrlaqxxeweuqyexxt", "kwhshfepfairmrtfvibdroztxevlxxybabbwqmpnwswodpveqf", "spmzlvsxqwcaozubjzdguaojutlfwxtagkvngcyphldaygsyyp", "lrmrxamumznlfmabytjmjucenhhveaaimqtnplcuplbqlspoee", "guazfjvtgyselaabomuhlemzhjlrufzlotjahfmvunxzeiffjs", "nzvmgoneiwfkwilzuiickhhybyepvtslfiybyfbqqboyflnrbu", "ztejdkgluvkyofgpvfnpkxjfxprtedzylslijxlyzlehhdthsj", "ydsefognrbunruyffcaegvteythdrogndstmchrkmjgsemibsz", "pnmifckxsvznyxoomkvvappqjmaxtuylebgolodcwzyyieqozv", "jwfshcbukbqudzyukjqssdrxwxblnjdzpymkjnjlxkyexkxpng", "bpuxtqjluqefeemxehvtnrtplcbalouzlltkavswxnbthuirsi", "fhhcsmkuxlggggqgotccttodxkpiwhsmppiwdipspozuuylivm", "ajapwozpgfpukuijlfoxbuseigfaykwrfkndiufnbfxzzalirt", "ttieqiyttkzefudacrwcnkbnhxhycezmdxdakoznuatuzzxqnu", "vsrjacsglzducnbconwyrtuqckiaksquvecuomhrwpzvmdtknn", "rfghykooltldogprvadtizuxhyrhhpniyejavoyhhtdbgiyeat", "yjmgwujkzopglmftflowyleyvflhbpubojpkcodkvcvbknnagb", "mofruuilldrmowhmsiqrlawfxprkmqzvnrtjjcpmylqwpcmtze", "xvwvxooqfkeashwhsvjyunvghjuaniregcdozphytmyidxpamg", "trdlpaitgrxuaasxsbvztxdohjjxwymdmbihbafodvxxebgjjk", "irhjucwqsztymqcttmlbpzsijiqyilsgfaxilvbvgkkkwdqvtl", "dqikviqwmgcwvbggkgomspmjevomtcphwtwdiisgmaqqnwdbof", "mqyslkedqisqbmnnjtdutoqyucttlwipjcxliulkpduhgkhyjf", "oabirldvbrpoijbybdtsilivobkpipoqigrfvndqpvrlaumryw", "kehmjaqodjmcbepmhcnymfpwzsypznigetvajgpiqyiqvihyro", "lqsgbtubrhbuiaujppqjphynvnunfipohhvzmwdfgynvpgqvgo", "zhionbtbwraifzlexdyjugsmkqzwhxhukclivutnprpvzkmqws", "awfxwuhnjdlpapecsbobcwlbeulfyfructbqmmunmnhballomi", "mbetjgopppccijxbebbtefrkhydeotajhlovzltmeoxdxwojal", "agqpzbuzkwtbbpgvjzjtzthpjffjasjmmrxnlxjfreifgttbet", "azjgienpuxaccdtnjykockhpxpsrukfrpdmwwofwwlruwltfxt", "ozewytytrbzzjhixgghxuqrjmxkvizlwmnbrfsjnojhmsumqht", "wkglnpfylsojlcksqhhicabkuebcroohmulgcbpnpzsszjpexc", "qfpktnrsdsjkrjewlobpqttimkzfjjqxndumwiougnhfxrwfko", "enrxharnrffqywmtjfjrhegvlnsuawkezyefddxkvwriduqwyy", "qefsldyuxjthefhctbyogycjkouahojfalsmytuwikyixdcvuu", "rscadqbornqhetgiyrzskbblvtacesevpdiiepaxefcijtjqkq", "pamqqetnlrlpaauxqngzjtshcxemngbcylrayeehtokhushpwc", "ziiwffiptlaxskvkkjwzjeqpqiwxcfeddkoqlnmgclmyghaumk", "nqiqqulrvpdpavfqltywdhkvoqmoqnjdavkugffddsrtgmicdm", "afsjznnbhnyvcqzuqfchtwlmrdthotfukchtjtvebzhrtihfzh", "djvnnxzkvfopqpitaitmfzubvsvjuqarjppyzgsgfcwpgywcbm", "tbxgkccymsbjqtbanymkniniklvcnaktfehkgnazsbucbxoeud", "sptjhxpimwvfmmlhrrxivcwqjvajpeutfewvrfhqhuytjmvyiv", "bvqdfnmgjzldmvsinhloovprmwatjtizvlzzjilgvhonnjxgsq", "ximqrhowwueecyokffxgjpogkxonzemeheoogxgkiqrjcyxyng", "bfcmofdryqrgmupivlybpmlyrlxhacapofowrdxmaddpcmtmjp", "vjkfgmvjqffpsfrsmuekvpzobikmeobctliheasunaawzanffk", "osffatfvjnoebuzzhelzavijrjjujqwsnmceiqruplfopakfia", "cpgywmysxxytaubtzhtpboprotcilzgdgsbvtixhctmuawzmyh"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 125000;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> player = {"fmwhpnlfbgxmhvjyaioxrmkkulpxejxwcdgxfepxmvvopexdut", "mqvvizztxcxudiveflqzcbdybcylbonkrdywhsipawlnszrxxk", "tffvpjleucetjtfhfzxmlgbjzdfayxjctamtotgaaliwgxtwgc", "nyltcjaouvbdybvvcojslkrsldwmkyijvhbzvnjufipsiiegqb", "putrorqrbawkwqtpmkktyokvngacakhioxtemjcxzkcnldfmnn", "wuspkywkvbxhqmivnpudlnjllkzmirldvdfedrabbwldbfvlwl", "jksgzkqhfvbihvqwzqeibjwsxmkluykjgmdxxscyikeubpozan", "dbapprvyykiviuobocnbjsicnfdlllmrsqciqcntoxqeydyawj", "iwtdfrzbyrjjviuhmubwqsbpagtzititvdtssubywejddpyxsv", "zyldhbmpvotwtchfayhoiltqvpnmdcikkpiuexaabnjhmwcvms", "ydjhmpgubutyngqpnztxligudpbbgdirtfpjhvzixshmanjjwk", "vpzivcfzmhvcodwmacguvhpxojlgbbfmpqnygsanrmcrtcpwrz", "jhyfmcawawtnchsbdekgvlnyybacbxtrlrxktnnmlwrjhbglrz", "medgzwdikymbnmrgbjyhquxqtpkiknmlfjdjgglgadnwrjlwzg", "pnvlndosopufvyfjuctwkegcvtcrlqtigmorugalziggttvzwb", "urwcphrgunkgczvfhwkebphcmozxcseyhqeypfstyvgjefyrhw", "ijzhagertovseeoonguvkvdjerekxooqgwwxaritaoijilelrv", "nlterkizzjmgwpieythhvcqgsmblleotivyzfnsmeqxmziaabu", "rfcobfzchfscqpsmreossjqqblvfgmqlgoshcgylfvdpwaxgfu", "kksntcktsmymynmawqbkguchzsvjeuqkcgymnrzkrwirhjteyg", "afygmpshgrjrlpvuovuysccidufdzmmfmdjywjabdifofjxjug", "yeololbgubmwjidxqwemdwijhilzkhouwojvagmysmqkjfnwbb", "qaoxhgpwaxhoxmmgbtaewdkbjugztnzfaknnkbjiymflcbtuvp", "wpuwypoqzozjnphingegwnuuypyyokiwdojuodmybngwdqumbr", "cmvogwhmgnfclxkcvjucarjioliwdqolctjtvtzdfwadhipujx", "uakrvztludcomgsikltbrlhrptydywahctceuxxdlmwoejiumc", "myiayxcqhlaviqxkkefmsehxktwtqnfspkcxvcfvphaeqmlvpj", "odkamgjczsqvcvohxmokytfkjwpwyhqgbrfjqlnwrvawkomznt", "husomboinxnlyymczxrxprhyoataqxyoxiqbivkuttiufcowjv", "twlnkqbyjyvmsgzgmpxevsrvvbbtlqaikpavvwkjhguyhxtvnf", "hxzeuxicwifnitycchwirimsgmawanfgwpfwvlbxmyaamzpcbq", "miunbkdcbpvxpnzwwnuoiryifwpgqshehozgvzhfsppjcpukgn", "zmhmwwqcvekpczfeqmfhuweujmzxagcuhakelachmvefjkdhla", "swvjvhipdqsmbxkpyalbiwpbddoxmeuyqxdgzjnhslsucupawo", "obuoqznirtxrdnrptpzyqxlyqerxmahtexfynumdqnbjxuovgd", "ycxyvkdfmawekfjfrxpitptmennuloruhopqejgrwtcjgbboaq", "wtkwfmiskpynatdusqozvxyitsvvzchdodtzppmykzjslcbhny", "aiwltkwuuafodlmzhadeanmqzxmlitbjeyadexmnoyyngvxqjj", "mptfyykzahhmjdvjphjuscbmvoakdujunerfnhkfdkuweqtdca", "jnacmqfjpiivdxlzgqlvsllonlwvetugiehosuejvnybqlfeie", "xilahwnxdqijnfltxvupcbhyyhcxtjudvgoxkxltzwaheronsx", "dqwllqhhclitoueapwswmohoiwjcwnkcnozufdywfyqnxpmwjo", "uxyyntlxtewafqohwmjxlhreiqludrwtvkzyvytoxxtakqivua", "niprfuaeiauefzaxnwwdopyfeeskhudsumsyadnebcrtyxtdne", "qzzegciqdijopcqvvmgvvsljdrzlswcxdccclimusfvyjgqrqu", "lpgmoqhieszcdkpiolnafgkozaxjtrgguvnuspehfvazckionl", "muburlzliqvqyxwrhevocffvwbpmhsekgsqcajikhzvkrdmhhw", "xeyrsmrbymdvfrayaidfjmsukzsrtrfosadshinchrvummsysk", "gaypxsymfjiwinnkndcqjoyubhywuxwohqymimeogienavyffm", "luqnadbmtfcicmucjgynxicycosrdstumdeifbpkvhrhywyirf"};
    vector<string> dictionary = {"svcdrbfgolykbvyhnunycxprrbvmvwecfpjhechvvwswxuofvy", "dwnmvfgmpueesgapubivyfbujpvblvqmemcjvcezpywqcemgvb", "tdofwltjzptxueyuhqplhauakcorrhtjpitlbrvtepqehmtvxq", "mygmfpozlzfbiaafhavixlrnfmfeyvzqwiiuzvqnwrjsvetfjf", "ovgjporgtqfthzfhwocgzxeksdqmkzpetsnnjsgynzlgnldwis", "cocusdwizyvbumlhclkhmurvonxyietotduikpqkdyhjwgmoji", "rnlaxdcwkfcblituxemgyidmswrhsyxhuyozpxxgtknqazomvl", "lwpstpdegqklycikvmkawpjzonbzzlycjlgweeloggfhzuaeym", "gxsparjythyafgsrqjoojkwrzqfeysyikpyzftdqbesmuqneqh", "visohuykjcxuuycflainukqsjrqiinrovzmzlxgezdssvizjqr", "tcrhxwxdzbksxmzhlkrwtffcnufpssoipzedfqmlaeickuojca", "jdlmhlndsxpxzfxepngemqcqftkwghveqboygcivwkokzgoesu", "jgddwkhiomkdovdbhlckqktifckylzmbveaqnmdssdrmagrdvk", "dyxbupqplwaipvbpgozobsddizoxnhaqiqqltwvadrlvlntofq", "djmiefwmmwjdkxknyemhxzjikbiomvclifeocagmpvramgmqqy", "ylxzgxivlvqvmjzojuhlgtlxgpnvyaqndaeailqpfjcndryito", "yxmrxkcaoolbneiwxtlgdekofilgvewckutkufuerpvyphspmf", "whuapcxiyhpgqwtdvokslevjibdbkwqqzmuolobfdamhuvlcah", "gkrywjrmirmkwgwencgvekmtkwwtjwpigjasfyzksttpmwnilm", "vpcttybrfztwndinesroawbizykyfmuzfvcmdrqjaiiiazelnx", "whbnwhcljkcqlvbnddbtbojzlnojqkhmvthlrussnlfaobqigx", "smnpzqitmzmzlhyoxoedgxuqrfdfklzlpvxwtrzmennubevnka", "cqncdbougvfwdgcqvcihxhtdtzzrqleugkjvunepqmadlzicbf", "ltiaimpaosjxyhbeewhjqoddcnkwqolpoiafhglzcxptublkjz", "yhehpxjbtrblhdudytywgmttvkfdhikzokbctdbucffeinstor", "dzkpjwadhzyvfhbgrwbbsngpvgqsacknwgstftzxcwfqxqglme", "sepaifrdaoagkxctrepgffqeszcgfsyzcklzsfbahgejvvfohk", "rdnsyfbembpsxbbkrhsvnrxhjjvtxlsxejuqljojutmqqkbhbe", "jxifndbuomkegkzwszggjocoerhxkqswrdaflwnospptdaxoes", "wbrlijwffgokiljusqdsaybghogpzczssvywndbgkcpznlbbwe", "tssjzoujnjttxxzaqmzveotsvkssckszlpeniudozgzgcbfpes", "kozsiafwyrsbrkdwhdrwftpaitpxprpdcrpuabdttxaolorogj", "lbxpgdwgynhotiesbyhxvybgcytyapyeoifzhkdekgavqfwici", "mzgvyekyvhqecmkudlqlfgqontdghqrejrztdvtnxhvcxnvymp", "prhnidisvzyiwvitvzxgihigqzqtxqlyqhzweulxyittkpjcvy", "qqccupgduyoztmstesovrkvrvhuejssihobrcbcizgwpedrvqj", "wkxaxyzrjreigphxgiscwvbbhwhjqemhbshggwtopckkcpmwfo", "enkgiahxoaayilywtvxwxgtagakjhmxxlmscqiyjyvxaeiypql", "arkcicpyyinqfbrqmxdjtnecuksoznhsuqbphqlqwqepklnlbd", "ygwbxylodzlfpzuvxhdohosswvvdaltoewreztwslfvgjhgqsu", "jxvktnnrhbcujaxxiffwysrpzdparladwcsnjxklgwbyagxuoq", "qqonlnpypeowjothzqxowrkqxlohxenipapsrpjictpsutjvsw", "axdepsydkeefiuwrmhposkgfygpotxajamtokmlbkjajjcpntt", "ozyzzfbhlnvscvlyrmgtpvipoujrlohhohxrxxlxnmfymtrzpy", "kpdtyvxoeldbhrfamlycyipqudgxmvtxwhsonbnvyyybldmciq", "gaesbyepxgirbvmwhetzxxioalbfwlmijkisxwwaacqvkvfqsi", "fqohzvudutjpbbtzixhhhdaxofckzdhguhzzzwjhoyjktcvvyo", "buofwseijdqojnhiklynmcehagjvljiobjyicklcdspsqshbkt", "hjkarjctiisqotvfcfpnyyihzlyycmnklpbwdjdavcrqxovioy", "beedmcxarzgzbsbyjnlcvlpzhoktvhtfmfealatanfionzsrlo"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
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
    vector<string> player = {"orange", "orange"};
    vector<string> dictionary = {"strawberry", "orange", "grapefruit", "watermelon"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> player = {"lidi", "o", "lidi", "gnbewjzb", "kten", "ebnelff", "gptsvqx", "rkauxq", "rkauxq", "kfkcdn"};
    vector<string> dictionary = {"nava", "wk", "kfkcdn", "lidi", "gptsvqx", "ebnelff", "hgsppdezet", "ulf", "rkauxq", "wcicx"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 186;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> player = {"here", "this"};
    vector<string> dictionary = {"hereing"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> player = {"abc", "abc", "abc", "abc"};
    vector<string> dictionary = {"abc"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> player = {"aaaa", "aa"};
    vector<string> dictionary = {"aaaaaa"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> player = {"ab", "a"};
    vector<string> dictionary = {"ab", "a"};
    SimpleWordGame* pObj = new SimpleWordGame();
    clock_t start = clock();
    int result = pObj->points(player, dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=21684580&rd=13750&pm=10465
********************************************************************************
#include <algorithm>
#include <numeric>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cassert>
#include <cmath>
#include <complex>
#include <stack>
#include "time.h"
using namespace std;
#define SZ(x) (int)x.size()
#define FOR(i,x,y) for(int i=(int)(x);i<=(int)(y);++i)
#define REP(i,n) FOR(i,0,n-1)
#define FORD(i,x,y) for(int i=(int)(x);i>=(int)(y);--i)
#define ALL(a) (a).begin(),(a).end()
#define FORE(i,t) for(i=t.begin();i!=t.end();++i)
typedef vector<int> VI;
typedef vector<string> VS;
#define prt if(1)printf
 
struct SimpleWordGame {
  int points(vector <string> player, vector <string> d) { REP(i,1)prt("%s","");
    set<string> s(ALL(player));
    VS s2(ALL(s));
    int ret = 0;
    REP(i,SZ(s2)) {
      bool f = false;
      REP(j,SZ(d)) {
        if (d[j]==s2[i]) {
          f = true;
          break;
        }
      }  
      if (f) ret += SZ(s2[i]) * SZ(s2[i]);
    }      
    return ret;
  }
};
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/