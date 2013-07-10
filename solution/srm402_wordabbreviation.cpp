/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8310
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

class WordAbbreviation {
public:
    vector<string> getAbbreviations(vector<string> words);
};

vector<string> WordAbbreviation::getAbbreviations(vector<string> words) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> words = {"abc", "def", "ghi"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "d", "g"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> words = {"aaab", "aaac", "aaad"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaab", "aaac", "aaad"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> words = {"top", "coder", "contest"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"t", "cod", "con"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> words = {"oimohaciiocqmha", "mmhjopmkaoebhpcjeraaicconekaoieioaoiafhbho", "rkka", "rjkjchklpfjqgknhjqpaqqcdmfqekkairl", "baelphgogljohqhngkhidekbogbjmbojpglnp", "ejefeldafnkkgbjqrml", "rqdabeqmrfbaangiffdrpfkmmelcq", "qmhrlcpnebom", "jbihapdqdpmocnqmrakmfp", "lgfjldrobjcekjkplr", "ekbaabijrpjcripahaifgddkmnqkeca", "jdolnpidqlea", "nplhnbigbdnanonnh", "pecpagclrg", "hinonemgqhgljkiqjdfbrlnoobmqrgjfmaohkk", "iddefohggnndjeqmmngnocnfohlkinfoicqmllpkiij", "fplregrinhlamkdoqefamfcnihiccacbhjpemaeir", "lij", "obmfpgmqineepchoaamafdpqdjkbommpoelil", "jj", "bibijaclmffq", "legmlhgqi"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"oi", "m", "rk", "rj", "ba", "ej", "rq", "q", "jb", "lg", "ek", "jd", "n", "p", "h", "i", "f", "li", "ob", "jj", "bi", "le"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> words = {"iiddfphifrfhinmqinhaklfpljoc", "hmnnbmcnnqhnedqmlfikmcrjcfpmomqfjflejderokpafidrgr", "kjelckgqljdgnnjajffffnqkrlopnd", "dknhedbbkjmhdpabdlerrapijprjooajjhkaripoceadfcmhin", "ekfbffkpndilijnfroloqgoorcgb", "gobj", "omnbnnfmrcfniblqmbbeigkipqfjicdihbpgdepjpakmicla", "acpraengllrjlhl", "knmgkjnklrarngdnra", "bhkin", "jggoflofhccnqcrpohh", "hmphnj", "npffrlickgldrfhejfpgbfqjarlr"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"i", "hmn", "kj", "d", "e", "g", "o", "a", "kn", "b", "j", "hmp", "n"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> words = {"afbjjfghblfaebigmgddlhbmffklffa", "lddkjlhmcdbdjfllfbafe", "iejciacbflfbgdbmbhjhklfefcfhimjlhfig", "ikdllkbkgeimhmgiemaaecacdjhdcdlfac", "clgedmcjmjlagdkkmmhjjgieilihgjlgfcilk", "hgaglfmhgjbmbbdilgickdceadclkjglh", "gcab", "gigfeabf", "abifejgmhjkhcibifbdhhmhfalamlilkflgjegh", "ml", "dihdecdkefigdkfbhgmabkjikekdaeeflbbhbhddmkbdmf", "clgihegffcfldfdg"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"af", "l", "ie", "ik", "clge", "h", "gc", "gi", "ab", "m", "d", "clgi"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> words = {"ddcddaaaacaddbddedacee", "aecaeceeeeddbeabdcbdebbbbbdedccddcee", "cdbdbdddebcbebebbebbea", "ebcaeedbbdeeebedecdabebbdcbadbddceadecbdaabaced", "edbdcaaddeeaab", "eabdeaacddedbe", "bcbcbeeeacbeaadbbedecdddedeaec", "cbdddeacecbebeebaeceddb"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d", "a", "cd", "eb", "ed", "ea", "b", "cb"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> words = {"smpqkudbnlrakjmeuvjkotlriavb", "abkbpfhtbtbhbnvlnhsljpenbtbb", "tfshjfjji", "tqgirgtbsqliauvfonkhmnsmqdpnbklbheeromkoakrguqi", "svjgfrui", "rbdttgitopnntistgsdkihjsmhmdinpeamaabjaco", "jlofberqpnembohbmulpdfqpvkgvg", "rpcrjkndckmmsrmqlldrmncngkaucfeiklaesa", "sata"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"sm", "a", "tf", "tq", "sv", "rb", "j", "rp", "sa"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> words = {"ocktkqvin", "vskvlvwdgpsrrfhorbacravwnijwagji", "nwwbtkgsveuuthfkgvudotkaicgrnsueoscdkinakjsimwq", "lmltioepcjlfiupxpbmnantnbqpjlilwtjkesbgwplsaf", "tihq", "txtdfgdqevcs", "kxfuhbwdnmwoodocplubmqdsvwjswo", "pfdrveqppxaethbckn", "cccpotlhvkksevprsefduqbkptwintulwmpuhrlaqxmbioeu", "vwpdjahurvdb", "ajvsftmkboqvkxhxabjedxphwkxdbimbvkkxrb", "rbugxoawtauhvhpevkbtuwtrhqtsioaplqpqtmirhhqsepdfp", "vmxqotfuabksoutblsdstufjcfeppicffpbl", "qrgucxxwn", "alpusglulwfltqirflixsathqejmkmfhsemsculvppvuorb", "ructcxisqmtvxeaskcncuqoxdsskwfhnvljc", "hsobpeoccseuqnoeijltchsnswkwfdimupqq", "pdodxaudacqarprfjjalsshgrqpkclajjxr", "tlhwlmssiwlelbcvhuvsb", "swhlvhviftsaihbhpdevnwsxrsbrcmhlc", "knlriqgratlxxpdqhpbfcphau", "mqomtexnhcnnsljbnnjxsuhrnowfjjuko", "tbapsvuhrbtckfbtkfp", "wguntucdwffcsehxxewmhbgtvetoxlhrcskfmsqr", "mepvdkastrnerxdprpcdg"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"o", "vs", "n", "l", "ti", "tx", "kx", "pf", "c", "vw", "aj", "rb", "vm", "q", "al", "ru", "h", "pd", "tl", "s", "kn", "mq", "tb", "w", "me"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> words = {"rpkodbjncjmsgaoillkjlppicpiddbslhnfboiok", "edigabkfcoikpmphahpbgaifsonqorgqcbqggrj", "agcajshnjiolalbrppgmjmfaimbeqrm", "dbaocjqsgnpikplkkmoo", "bphohalfmmhlfmpdepdegie", "aqgi", "jhdpdbjjg", "ajgbhfjnnkclanbhdakcmfdielgcpoebhogimrrc", "jfcdr", "jorcirqqdcilobsshnh", "elslomhnnfqrepmoarcffnhpkkbpjrgjmpdhomgigfe", "hbciponcobdidhrcnjlcmngiglkcfqjgprjjnrnhjj", "jbqodhminmbommoloec", "fqbrd", "efnikpejjrlsamo", "qenseadhropegpesjneoaciapjahd", "qicaijbdeflrql", "bpbhrfajkdckicbceagneccadafncbpecnhdmiechshco", "dqjjodjdqngpdgnqbrefghaadgmb", "dpackdpldjqqlidhdhqsodqc", "gopphdfnmccfklnss", "qaqeggo", "okclkokbqihormfeqiqhlbkcmkhkmkcfae", "csignaprmc", "jfqriloaenlicsgikpacbqccsadsh", "bbghldpqhiich", "nfepkfhqrkkrian"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"r", "ed", "ag", "db", "bph", "aq", "jh", "aj", "jfc", "jo", "el", "h", "jb", "f", "ef", "qe", "qi", "bpb", "dq", "dp", "g", "qa", "o", "c", "jfq", "bb", "n"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> words = {"kpraihmkleirpcdqcnmdd", "mangfkiobdeqakqhrchibkno", "pqkjj", "jpomrqcnrpfhdapjqlebflppkhflncedor", "egemihna", "nkhrepegprincgc", "cndkemrefpicbngkomgqbimbajpadagjbbjmleaboindpfnbk", "dokrnfhhnocklafajmkdcndbqkkpbilempobhj", "qmidrh", "pldkomolieorgncicdrjnjnmhlmdcjojdlm", "bpfefkfqfcmmodnbhgfopbfpde", "akoaolghgkcirchplqljhedjihghcjkjblfmnroecqhle", "ajnpir", "helrqedljcliijqqajkerbippdnbjqnkllhjjbnklpaipfbk", "plckrkjlkrafoqccqcnpaffrmbhhkkn", "fmriinirpqhlngkkpmhabgmmfmqf", "knmpggbmjilpqdgphaeicqmdrbdqgprrq", "fhrpjcbejcebnfaidjoqcmpgarqregbaecmmfjenmgqnc", "lolbahgjalfgofaokba", "rboqfbakcmbmrnaejqfrpjk", "fdigebmrphgrnfhqchhaangippikg", "oqcmrhcrmmabmijhdfbbb", "frokpjhn", "ierbrn", "hdirjrrgefgpglclmb", "ekmlbfairofnmijhiqjbncaconpk", "olrackidorkoddbhdhrafrgj", "egaaofoqoinicjfajqemcfm", "rpjimlicmqpajifhklbjiciijdqhcqlk", "plnbrahfakojqgqnnmdlgdfbobaehkhipmqiibrqb", "qddaqlifclikiipmom"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kp", "m", "pq", "j", "ege", "n", "c", "d", "qm", "pld", "b", "ak", "aj", "he", "plc", "fm", "kn", "fh", "l", "rb", "fd", "oq", "fr", "i", "hd", "ek", "ol", "ega", "rp", "pln", "qd"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> words = {"dfedabfafcbcbdfcffbcedfbffffebeddeeabfbebbafffceac", "fabbcfdeafcbdacfdebeeecfebdb", "ff", "eacccebfdebebbdcfdbebcfccdcfcfcab", "fcbffda", "bfcfcfaccbaecaabaabadfdaefeadcbdbedfcccffbedd", "daeaadbe", "cebcdfadbefa", "febccabcacfcfccccddecdcfaeeaccebafedaabdefcc", "ddeccfedeabeaecacdebdaf", "efdbaeecfbbdfdfcbcebadbdfeddcefdc", "edeccefecfdbedeadbbedaaa", "eecfadbbaeacceefdbeffbd", "aeecaaddbfaeccfccaaddcddbdbfb", "bdbadcdbbfbbcdafbaeabdabbeb", "feccefaedceabdccbecefccffffaabfae", "fafacaabcabecc", "cdadfcdfbccabfdaecddacaedcfdcafcbcebcceb", "abffdcfaabbcfeedffecfddddbdeefecbabaec", "feeaeeeeccfbadfce"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"df", "fab", "ff", "ea", "fc", "bf", "da", "ce", "feb", "dd", "ef", "ed", "ee", "ae", "bd", "fec", "faf", "cd", "ab", "fee"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> words = {"bkbkgabakedjeemcmbmjlhmiegldfkjfbm", "bmlhmdmklgbbebiebfdclegkjfllea", "dfhkacifffbdmgkklbheaffmi", "ldlekcfeblmmfhiabdcedbedibjc", "llcdhaldifhcligbeekkigkkcejbijcflfaaj", "iael", "aemhfhejjkbf", "cdhlgbhljgfghcbgcamfdeihaagjbeikhgkkckmbkhee", "jbhicgdmmekkaflmggcj", "dkbm", "chebbfljlhlaeaekm", "chkccjgmaaffdabigcgkddfdgimdfhhkkdh", "hcjmfghbmbhcmgglfblmgjcdaalc", "bilbellagldmmjkcleldkmegffdikefcjdhkahdmbegd", "diiafkhdmbihgbdmikighghc", "dfhkmmleckhffbkkjifdkhmcmimhbidmhaelfcjfigcjefah", "jdckamfkjcclimeaeakhjjfljkbhhggjimlfkdekee", "kmbhejdg"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bk", "bm", "dfhka", "ld", "ll", "i", "a", "cd", "jb", "dk", "che", "chk", "h", "bi", "di", "dfhkm", "jd", "k"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> words = {"ddfffedeededabbdaaecefbbde", "acedddfbdfeffba", "ceddbeeaccafbfacbedafbbdbfeebbacbcafaabdbdbc", "ecfddfebbbccaaabeaababfeafedceeeffff", "eedeacffaaddfacfeaedafdadebebffafdcefafcffd", "ccebabcdbbafffeefbc", "bba", "feccbfaedadfbeccafefefdfcfbdcadbdcaaeeeddeadffac", "dcbcedecfacabac", "fcbeaba", "ebbafffadbcbdccedceccfef", "dbbcbdaeaafdaffcfbfcb", "dfcdcbcd", "cacbcccfbaeedaeabdeafacabdadd", "fcdefadfffbedabdafeacfbfecfbfddbccf", "ddafacbeeafffdebfabdfadffefdcefcdaec"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ddf", "a", "ce", "ec", "ee", "cc", "b", "fe", "dc", "fcb", "eb", "db", "df", "ca", "fcd", "dda"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> words = {"fsfocldak", "jlejfmqcg", "fnbckghakermgnbntpsonnehkbjsalmepiqnlcfdhpipsjns", "blcmnhclqrqsbdobdiikpshjifakjfnnkkbmfhaqeqnfpble", "ilekte", "tackhjrjkqgbeiedlhjp", "iqsefdbssrjfdbnprpdkrjptkpkpnerjkqjdoheqhhhmncbc", "ddipprnnbmtopoafrakdhgamckflaleenrjmpmhrkfhdnmjc", "lorllfmggqhdoqinkcejhencnshsecbfoitqki", "daobemkhsbbcjlntmegldblgffokfmaaqgfhjcqpfnagaa", "fshgkpanrems", "sjbjsokmaphc", "arb", "rnbkjkagfhcmasmmenarggfjmbffkkgmeeffbskmdk", "hqims", "bobapecfoinnbfgkpgsnololonceciihp", "fplbjfndqsmdbcsesncehjcdemsrcodpgi", "lrjlkecflpgipktselmcmpahcrmroabakcjtbcqocaofp", "mcdhjhofamteihadlnsjigqjesd", "mpeajgssensdjtbhqejdpbqjteppoqtpo", "smbgiamhanftplfc", "pqsmocmfgcojkftqsecgbgkeccdopsrhmkcrnmoa", "bdrmmtilkctckngiljfprobg", "mdfohccbpamekahpolgdnsfmeiltmb"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fsf", "j", "fn", "bl", "il", "t", "iq", "dd", "lo", "da", "fsh", "sj", "a", "r", "h", "bo", "fp", "lr", "mc", "mp", "sm", "p", "bd", "md"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> words = {"fqiiaicgjihhobprtbarmsqcuuhk", "bblakhagklofcobsnbnpsfcjpbviddorrgveaodcjscbjk", "jbstfddrhfhphmgrugtb", "htoaedglqvitkcapefngjnsaspqoaokclbekcibglglskbqhj", "ttvjcchqategau", "nmamapjaomakdaupuovfhtssqihgeqonkrilgsoomk", "ncdktvcojjteeensuoeopsanqrmmskbdcbbketudevuj", "jblnskpruqpvrqteagteikdfjuqlqkavtqur", "qpfhiapuiaradlcluuo", "flotdjdbkrtmmvrtnomattebpbqlvo", "flojejjuudgulemmncjoqbvdp", "tekftbqlgchcdus", "dbaqtpckuodktkgijokkgotvpeqdkeomlhlqfjs", "tjagj", "lqmqsciivhd", "barkhgcbpvecohspjkksbcqms", "jbveculsjvfgiipbnsbpbgagpkbslqaacl", "jqsiafojfblkrbsvfublfnlslpbpprfbvobiivdmhplqvqer", "gqskndgcchjllmcrgo", "hqcgvmlvvhfkoliet", "rvcrsceg", "nqkvcenccdfvbusktihtmceiskebvpegjrcoqvvsdaepl", "cnmuihhjnkuefiemabbqgqfehflejthqpfgnqtrgr", "cnudhrqrfrsjpjjdjrmgjteeaqcto", "tedrhqdebuahojekqmccpdehot", "pukiaaidjbpmsnprlbrllhtqunvscnqssmpohrrhegc", "dupecjaqutb"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fq", "bb", "jbs", "ht", "tt", "nm", "nc", "jbl", "q", "flot", "floj", "tek", "db", "tj", "l", "ba", "jbv", "jq", "g", "hq", "r", "nq", "cnm", "cnu", "ted", "p", "du"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> words = {"cda", "bddabebbbccddebeedacebdcaabcceccdebeceabddbbabddc", "bdcbbeacd", "ddadcbeadbae", "caeaabedbc", "ddb", "baaddaccbedde", "bdcbcbcbbbdcccbbcacceadaabcabdeeeed", "bbedcdadaebaacebbddadeeabedcaedbbdadbcdc", "eadacadbbbbecddeadabbaaedccdacebddabccb", "deadddcedcdbebaabccceeaeeb", "cbeaacc", "debbecbdebdbbbdedbddedddeaaaebbbaecebbaebeabbceebb", "aedeadbcdcaaeceddd", "dbcadaccecdbe", "bdaacdbacadb", "ccbbcbbaaac", "ccbdbbadadddccddabeebeaeebcaaedceda", "dcadedeeceadcbbdcbaaaaabaecadbedbcdb", "aabaedddbceddadbabacccbddcdaeabddadedeeecbae", "adabdcbeaaaccaebcdedbcabbbaabeceaedcaaababbcaddec", "cbcbadebcddedddadaabcaaacbdcbdddebac", "adddbaaddaccecabdd", "becdcaebecaccbeabecbdedbddbcaebbadaceecdeedad", "ccabdcacbbabaeacbaeeaacbbbceddebc", "aacacdcddbbcadcacddbccbccceabacdcaeeecbcbabbded", "ccedeabddcdcb", "aeebeeecdbcccdcbbdccca", "dabaaecdbbcbedddedbabeebcaaaedecdebbcacdeab", "caeceaedabcceaaeaadeaebddbddecbdaabcbdebeebb", "ddedabdedbbdedacecadaaedbddbcedacdeb", "ceabccebdedaaeeccedb", "ccbbedbecbacbcabcccaacdbeeeeadbdd", "daaadbb", "bdabcebdeecdbddbecccacecddbbaccabdbeb", "cdecbdbcdcceebbabbeecdbecdadecbdad", "addcdbaedaebca", "bbbaebddbecabbdeeebdaebcdbdbbeecbdbdecbeba", "aedcadcccceeeebaebdabecadabdeeebcbaecd", "aabcaeaedaeeebebbaad", "bbaebecccadbbadbaaedeccebaecbddaadcddbddbbb", "bdbdceeba", "caaecdaeeeab", "ece", "ebacbbacabaeedacdacdecccecbccdedab", "bdddecbabaccbbcb", "deaaccceecdcbdbdcadecbabdabeddbabaccddaaecbb", "bbcaceabcaeceaccabdbcbece", "debeaaabaeabbcedacadbaeaada"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cda", "bdda", "bdcbb", "dda", "caea", "ddb", "ba", "bdcbc", "bbe", "ea", "dead", "cbe", "debb", "aede", "db", "bdaa", "ccbbc", "ccbd", "dc", "aaba", "ada", "cbc", "addd", "be", "cca", "aac", "cce", "aee", "dab", "caec", "dde", "ce", "ccbbe", "daa", "bdab", "cde", "addc", "bbb", "aedc", "aabc", "bba", "bdb", "caa", "ec", "eb", "bddd", "deaa", "bbc", "debe"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> words = {"bbbcaacaabbaaabb", "aaabcccaacbacaccbcacacab", "ccabccbcbaccbababcaacaabcc", "cbbbbccabbacbbbcbcaabbccbcbbabacaaabbcbccaaaa", "cbbababacbcbaccaaaab", "bacaaabaa", "ccbcaacbaabcacacbbbbbbabaaacccbbabcb", "caababbbcabaabbbcaacaabcbaccbcabbaa", "abaaabaabccaccaaa", "babacbbcbccbabbccbacbabccbcbabcccabbcbb", "aaacaaabcaaaabccaccbbbabcacbbacccaaccbaacbaab", "bacabcbccabaabacc", "ccaacbbacbcaabcacbaaabbaabccbcaabca", "bbaacbbacbbabccaaaabcaabbcacbacab", "caababccacac", "caccacababbcabaaabcbbaacbacaabbccacccacba", "bcaccacabaccaaabcbbbaaabacbcababbacccb", "cacabcbbcabcbccaccaabbaaab", "baaccbbbcbacac"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bbb", "aaab", "ccab", "cbbb", "cbba", "bacaa", "ccb", "caababb", "ab", "bab", "aaac", "bacab", "ccaa", "bba", "caababc", "cacc", "bc", "caca", "baa"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> words = {"bcpffswggwbvfdbklbxuukbsznatgimcrea", "cwnnxhdywokvowfmrbwnlckqtyjvxcjnya", "kngnxwkdghsrwnuakzetwdpbockujckznzuugrsabynp", "phchgbdbgqekxgwikzenzjtxyx", "x"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b", "c", "k", "p", "x"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> words = {"jeudndrxsj", "unfwoogogbnbsrpjepfjfaciourptcbmvcohkdujs", "kfbejhmsabctwui", "tsrjskqfpgeprhxlmishphjxnqgqjmnxdxec", "getuxivblrxqwdwuaaqhtxcrubcohhrculajwkdwrttitxwe", "frtwqvcrhxqbbchgshso", "ehfsliccrewdpovfnxwlkmhlbocvfcebmfmsco", "bvqtpfcekwmqtoahcslt", "vxugqo", "ouvsgecjmiegmegrbaxdtijfnmtcjcobtobshdrjpmqq", "mixstuxrrmfsfucgxxgmmfeppwjemcolipvrevbpjj", "unupstiwhjgoslxmhmvmrfvqtomdtsluexqghksufbrkmsx", "dkxwt", "bdewhsjbhljaedlqle", "bqnbcluvpdpfkmkhqaslkaintvki", "hdbnitvfobqjuudtfjjheporcgffmousjuoinpnrvbbua", "cuvfohpexscsesae", "ffthhtgmrdqmtbrnckjjffwjjlopvmipaqnkvgnoielfdukhs", "jhnsra", "bikkegfvvvixsnhmvnpxngogbbms", "racjtrgd", "crqhaalvdarkwuqsnllwlaikvlxmpfxpibw", "ufuqwifxavrsroklrmspekwnisss", "hssrsdjfimxxpmrmrjusssvpmcmkkjhm", "bdcscvsdkoqwfvekugjfniedanpajc", "jwwuboilpmqwnxiedimlsauwvdkujepjfnaluendhnsg", "ahpsqktuferuxbmih", "ghld", "gocwpcheut", "tc", "mpqrvbgbfucgnwnmfhurjrdotlndqmwoxjrq", "dfedqcvxmscsd", "rhgxvlawfkuutgvuosbhfvtfpkuruevtrpdhekxtvarhnfqeg", "roprsgcekilbpupxlihmdcpgnsaro", "wcgqwsrcqpkcfvvagrruavjephodgftwbtmpxflvh", "advsnubkeqfkvhjrhvnnkxcfprfnnbrdrwqwb", "oonasgch", "wmmjnivp", "dbvwlvelirbmnkhirisnvxttkuncinkevlsmidkgjpvixmbgv", "rm"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"je", "unf", "k", "ts", "ge", "fr", "e", "bv", "v", "ou", "mi", "unu", "dk", "bde", "bq", "hd", "cu", "ff", "jh", "bi", "ra", "cr", "uf", "hs", "bdc", "jw", "ah", "gh", "go", "tc", "mp", "df", "rh", "ro", "wc", "ad", "oo", "wm", "db", "rm"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> words = {"geamflmfflefjn", "bkccmeilafhbehebmfhfldalekicbmckhmddbkhdfmbanggje", "eakkghegfc", "hiejkdfihkifmbgelhfmmiikdhhnicaehgijcgadkd", "cfaciljhedmlc", "ldicbfcacfnafeihabhkfiijgdinnnknblanbgadkaeklkgbfm", "hhfbegajenffimmkmmfdcegefnnggmlehhifhnedldiffgng", "kbdefnbhmffncjgbij", "ddjgiieffmeafjklflifngcae", "mfbiahnlmccnkgfgfkhdgkkn", "haihbahadlaaeebbidjlcmaadjjbgjdabidhhnh", "hlhednbid", "i", "kkng", "jjbebffjmccdckiddcmg", "abellkjcnkmbkkhhkemhclfcknelgaa", "lgdallmmgendndhgecgdh"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"g", "b", "e", "hi", "c", "ld", "hh", "kb", "d", "m", "ha", "hl", "i", "kk", "j", "a", "lg"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> words = {"aaahhdgbgjabjfjjeeejhbhfdghaggddaefbiahgeij", "acbfjfhbjeahdhdiaaccheificfhfaj", "gfbjfgbehihjcbbjiiaihdhiehbhhejeefbbchgeeh", "gahgbjfifjjadbhggdbgdhaaefcicifgdjheiededgejig", "eefgceeedgehgcbciaghjf", "cfbgaeghgaacebeeacgdbc", "hhaehcbbjhcddhafbjhehhhjababeh", "dihhdafiejdhbahcfhedadiecibaaehadjgicjejfjfdi", "ecahbfhhfjhhddgfbjbgegfcd", "cdjjihbejcf", "ebejecj"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aa", "ac", "gf", "ga", "ee", "cf", "h", "d", "ec", "cd", "eb"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> words = {"ccdbadcccddaccacbacabbdcdacc"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> words = {"ohfrjfjaprjrmgrkhecrojpmphedckdglamk", "lpnomo", "ohcqelnaqekodcgcndcrdqckroghhnrfpbbccmcinqpbrmdr", "qeqgdemepirijcdankkdpegjmabjdfgoakjoc", "apjrpqqmanibbhcjjorghjdgnrbkoiaoai", "kmqqipmraklbehoqdnfhj", "jagjmhoqifpjecocnhlhbhefbeolahandj", "cacbki", "drggfggjdofmamccchgqgp", "jbkodogpdlderlgr", "ogkfbmlnbqlkiflhe", "ikjqdbecghpabakgcnor", "ephibiinc", "lja", "gkonrnk", "nefj", "dkgeocfcppfdmopfgbm", "aeabdilhqqjgmplocfjoegirrrlkfoo", "gembcrmogqojfhineaahgaqijoaaipafgdhfjpiqjkdrko", "lnbnjnpakoabdfihpgcjcedajbimibmplkbrh", "fpnrogaodkincqfkdm", "hllfedgeiipjrj", "nkdplki", "ggoofhkmbii", "rdlneqhnmhfjkknrggdglqdckjmlgfcpiqceoaegpb", "jnooimobrcipecgpfcehbkcehlqjgmrmhogjjafkhog", "gbmipfepabqqkdpd", "daedqa", "me", "lbacncnqffamjgerraaonhaemkeeldgkg", "kbkcbhrckecdqoprhacigddogonkldbjakibr", "bpepln", "gjorcjpjaopioaihhljreqfqqnoagrhpojodklgfnjkbmi", "paiqaoieemomaqghnbfqhp", "bqloqmnpohphhpcfmljlmd", "kjcqcpbijgacjhhailhejlodplcmqlcbcjodqlmhrqdm", "fdbhoingfbklanfpqnbnlhoidlbcbchjm"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ohf", "lp", "ohc", "q", "ap", "km", "ja", "c", "dr", "jb", "og", "i", "e", "lj", "gk", "ne", "dk", "ae", "ge", "ln", "fp", "h", "nk", "gg", "r", "jn", "gb", "da", "m", "lb", "kb", "bp", "gj", "p", "bq", "kj", "fd"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> words = {"dkpahgcjlgpmpdlmdiidfbfdj", "mfjflfpepbdlhcpnhifmghbilgnlnnbdfhmbhaodgdmlagknpe"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d", "m"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> words = {"fnodaelehejnobbaecnhkdmb", "ejgfhiamflageocmeadikjkjljmijilfmmolgahe", "lkdmlnkjodmhljdmncmcmemafbedlfb", "ejjbamojiheojncggcejkakmd", "ohn", "jmono", "mgfcnomfhllbbcjfmhnmdjbegcje", "leogfeneonlofkcln", "gmnklnmenikofohokffehoaanafkchabdkhooff", "lfdakc", "kknja", "knffjohbilbigbkbibibjhiokjnmkceeljheck", "lceeeiakcoodolclddmandcnghdfcnbaac", "jhnjhbajfdobememflhneenlb", "lgmaedkoloachbceifmmdlocfghhdcdgoebojlbk", "oaacdojgmimdkafhalfokkiehflcfofmjolhinjg", "kbcbdlidfmo", "gfngbebjefibjdlgodoifnofhngbmahokjnl", "nhhfg", "egagfgameflmkfnghlaofkbimlcibhceacmhkhfhhdciik", "gjdjlacfhinocabhgecj", "dgoikfbjhhbahljeghcnamgdlaimhbcnedaloehahl", "moiojmadbajdbcenhlnfjfaclmjbajjnbcnfjlgedkd", "aiebjhklglnd", "kleacehgbfciicgd", "iofflncgdiagmmeiifnjfcbcngacjamiadmf", "fcbfiinmdgia", "abjh", "mfjcdmaamehoiehfianmbihm", "cnhddmkghmdackdlemihaobjd", "fdcnefclonlfeganmadcjkeiklknlccjgdaeginogj", "agbiihlmaakaenbkegoainhllaeecfdmnenkmkakoekebokbe", "lckgjkgbjblchmmagmgcimlbkekocidfiaeggb", "idinelmjkfkhbkioeheonnojb", "aohdjjoajjfjddfddlghjgoocjkkjcckhcflloam", "omickkhammiakkcbenooegbfalhlibieabmcnmnli", "kjadenfghiogmmedg", "kbecmhlghdcdjecobddodl", "odaoblhbfaadhbkjgffekdggceoogaefe", "icfnlcdahjjfhdiiaemfhdmfbbjn", "aobkgnlaifeikhbkmebekkedmeknhdbgan", "jjleecimohefje", "mmdmahffdcgcbndmkbimghfklgnlghcjhh", "iobheahfma", "mecjnnchncjocmhdcjciokdgdgmm"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fn", "ejg", "lk", "ejj", "oh", "jm", "mg", "le", "gm", "lf", "kk", "kn", "lce", "jh", "lg", "oa", "kbc", "gf", "n", "eg", "gj", "d", "mo", "ai", "kl", "iof", "fc", "ab", "mf", "c", "fd", "ag", "lck", "id", "aoh", "om", "kj", "kbe", "od", "ic", "aob", "jj", "mm", "iob", "me"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> words = {"ejjdojglkoghfpcembcmiencbpimej", "kkdmgenlkmafecbhjfbklgbffkajhkhnmmnmgcdkbgldaangh", "kjiici", "kgpl", "bpliioiokeofddckedbahfdcamcghchplakmbikngcbg", "hkomnkmmnadebpk", "kpepalhhkgmm", "abfmicabdmfchnhodjcopbkg", "ladfogmomknmbndbjklpfmbmkngdlem", "dgnkejcndgmfodbmpllmnemdoknjkfheblhogkcoebjfbhg", "plafanokaocaffjcfbhbehippebjojehjbhfmibleil", "bcgmiibjpljikgepklbndp", "fjkgfnbfdbnlkeofcfbkfjejfgbmkhmgnkdkbplgmf", "eoleiab", "nijcjdkmldfdik", "fbakibppcijdmbohlhkgbodbhnnhfbobnnjifelfipomm", "jfkickliopkkilbejhlfghdpgfommbbeg", "cjpkoakaacjmmmhomkhakabkpnhlcogcdepcjhpccakgjdajjm", "koljgjcalamobgnfildfkphldbaojcmanekekmbainhg", "opkpl", "fpcophiinnmdcclmpjpojanjjochmggekojioia", "gpgpmbinmofbjbmbg", "jnddkbecakalppjdfhfkeenpnbehakmipfado", "gmooagdk", "mgkepfgoknonhmaaonkfkacljfaf", "lmfakoalpnondleomblldfcfbpffjngdgidmbomabc", "kljajadcpcdblgca", "bmffhdmohimblimnhinpkjfgnoe", "lfccoemkejjcliehpkmbnpoppagdlmmh", "hcgibmmldmeieeikalpaehipdm", "jmpmfdbdednnloclnhcecoldhdd", "kaobckapmmhdapghkpjplhdkfondbigahcgml", "nnnoplkgnfibcafefaljijnjlom", "ipihecbbkbhagmfheejikcaecbgbpceppmdfnl", "pdkkaleehnfdehfmnd", "hbfminbklihddfejkh", "noh", "onbdbdpbiffkcfbacdfdfgnbpgalcagbm", "ilefgnnlpobgknfpnlbajidodianflifdbnjdldf", "cdmhlnnkfobeigcelpahnplcgdpmpmf", "jlfahnmhknmfnmfgdgboigbnmkcgdplmlekh", "jobelkklkhdohpbglgdfaipcmdjckbhahognp", "bbdo", "kmb"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ej", "kk", "kj", "kg", "bp", "hk", "kp", "a", "la", "d", "pl", "bc", "fj", "eo", "ni", "fb", "jf", "cj", "ko", "op", "fp", "gp", "jn", "gm", "m", "lm", "kl", "bm", "lf", "hc", "jm", "ka", "nn", "ip", "pd", "hb", "no", "on", "il", "cd", "jl", "jo", "bb", "km"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> words = {"ejegfidbkdfaakdebff", "dihbihjeahhaekbfgkagjkgi", "hddadadcjkfkacgfaiecghbaedkjeejebikghad", "hedfaiifjbihbh", "abibd", "iikkjabj", "jafcggkhicbfkdbde", "gedjfhabhbiahddkfdedd", "kkdcgjbhgkfaiajhdgibfcafaghbccgi", "kefhjfjhaghjikbkaggeicefadgbhjckfajjf", "cejcjhkaajgdhehkh", "iiihhaekadfhfjikjahbcbcdbdjbdjgkhdffc", "egcbhccdffcchdi", "hihhiakegiddekidkaagdbeeeegf", "bafhijhjfigkajfkafiahcffkccic", "degadfhjakkfaafcjkbkdjkgfake", "aadigeeebkg", "jcdghajajdhggeikfjhjgkhbfgcjhkicaaigjeefgabhdhaek", "kcbkcjkfeeebifjkebcafcgf", "gajfgfhbahgdbcabihakggdbgidbehcakeaiijeghcg", "jkekgajgdhhkfgccdahd", "dbaafabhhgdgkhkhcadebffifkafcjeiaibkfebjkbccke"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ej", "di", "hd", "he", "ab", "iik", "ja", "ge", "kk", "ke", "c", "iii", "eg", "hi", "b", "de", "aa", "jc", "kc", "ga", "jk", "db"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> words = {"gldabk", "gencbimbegcafdfkdajgnpcidlokippolohifdaedk", "fcjkjflmekpdgamnhp", "gncdbpljloeckbknflkccdgmfeklpglf", "aefajdijcgehaogelk", "ahaafcpepcffaoffcmnkoaiefkapol", "mjhadlmbmgpihfjjfokedgebgph", "fokgijcefdcleelhmnpoljllbjff", "imk", "iccikchnibcmnijeilbmhkamhn", "jcjfminpmdgjimioeldhjfifehgpiimcjmh", "fnjjgnadkkcchddkkniojgnh", "odamomehhekp", "cpanpbjfccieaigcaggpcnlpi", "iekbgjalbaakfobbf", "eomdgckemnamkfffbho", "cifnbfoafnnejhbamlogehdfnkjkcakpoboiiipabliefbi", "nmmlikfledfk", "dgnng", "aclhmdjhglebpmngleplkcc", "fgkmloanddelpfedjahepbnpfpfm", "lbgiiclcok", "ffcphojndjfegnopoenemncehppfjnanmi", "ihjlbeljoocmabjgnfckdemlchcmkkkif", "facppanelcngbncklmnhhblhembdcnojeeojgaodomokbfen", "ajljccenpenndoapobpdgikkkndjgddlgfkjophbknkn", "ecgfhogibbfmkleilbafhklcccgd", "ebhdfoalfnbkcahdclpdlikekppikgpajbhlfo", "eedniokmpgofaheccf", "bgahofopffpgo"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gl", "ge", "fc", "gn", "ae", "ah", "m", "fo", "im", "ic", "j", "fn", "o", "cp", "ie", "eo", "ci", "n", "d", "ac", "fg", "l", "ff", "ih", "fa", "aj", "ec", "eb", "ee", "b"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> words = {"vvskbbhtgehmquajna", "fdnqrnoredkiighdvfnuxwgcte"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"v", "f"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> words = {"ehbffb", "jaef", "jhbhdgdcda", "jibicbcj", "hhbdfhhfahggfgefdjfabbibfbbihciegcbijhhdfecebbeef", "afjgjeihcdd", "fcg", "fhibaaiigaadjcghegebdefgdijefcdhjfiac", "gheiecbhdafhedhifebjjighfcdabcbcffeghebdcceffhccj", "fcbbbjjcjihgh"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"e", "ja", "jh", "ji", "h", "a", "fcg", "fh", "g", "fcb"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> words = {"rkfcfcqrbsagaliefaqbbdfhmku", "frsguqdglvmupdftusrvduvrnkhmdlsdbcvtqueicvrs", "mpqvnreevasmdstgrukplohemfuqlfhioqoboikdhdtnh", "iuacgbqdfjhasgulkagmsddfpsogeeshfmiubbjbjdsn", "seuafajovidp", "bfvvfuvo", "fpuusojuejistnljdervpnkhqutgvnhublfrdtsopkdrhil", "fubefuehifadrjuqdrqukc", "l"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"r", "fr", "m", "i", "s", "b", "fp", "fu", "l"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> words = {"cdbccddbbdba", "cbcccbbdadcbbaacbdcadbdbcaadcbdabaadcdaacbadcdabcb"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cd", "cb"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> words = {"om", "lnkddcjjgmlcdacfjelchihflfadlml", "kgfdcobmcnoafcokohgfjjoelbmggkj", "kfkgijfkhhjnelibdlbdllngncallffockooc", "ebjcloajkkbfcgeofhjlanndadjbbgmfbcgnfm", "gifiighnhekldjjmfohjagmcajimkldj", "ilnje", "jebcicaljbhhigndljkdimafankdjicmoblbndafajkaak", "obdgadihlbjjjignmdeiblhmfbieg", "jblkoebholfhgleokbgfaedejeldheimdbjgjkjlnlnkcnooab", "iijmgdncco", "emcnmcbacamegai", "aahemnbaoihcfnfggmmgcghemncglhagobme", "dndkhdaodcjnadbe", "hbllihkg", "cmgfiacnebjiclcfaegnokeedaghoedjmiklhbdadlg", "hnkhbg", "gigcdlemlaoihemaif", "lgahcolbbmgddbkieahcmbhdhmaeoblebgoen", "akbkbmkgdfeelmmnbhnagcjoofofdlo", "njinieolfkjhghnogkne", "ngkejhnlcfehakajbnmnjijo", "mmhhnjgglflbdijhahbcnkoemegofooegalgglbcobj", "ojoickm", "kncodonjddndfmmamlf"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"om", "ln", "kg", "kf", "eb", "gif", "il", "je", "ob", "jb", "ii", "em", "aa", "d", "hb", "c", "hn", "gig", "lg", "ak", "nj", "ng", "m", "oj", "kn"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> words = {"aggfffalagikde", "edmkhdkihfceahjdleheddbchiaabcfljdkjckgeiffaagddfb", "dakblgmedajgfaflefbhidbckhkhmhcfhmdjelhjcbcack", "elfghdgchekiedfkmeemcchlamkjdbjgbbabdmighd", "ghj", "edccfjgjgfkejdjjcickcffiecm", "dcbgdlicaelcakbaaehff", "lejcfihaahdgdgihdeljgidffjc", "lmgeameme", "ccfckkilj", "hhibljlmkakjmjaehmeegafmmccjmdmmmhmdgmkmdmc", "ffgjhkldfcagdbbdamcfkadjfdlfj", "efamid", "lbabdedlkfklgfibc", "lkbcikfhbkmigjmeljfkicchfdaijbejljmadaabhkbmhelaaa"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "edm", "da", "el", "g", "edc", "dc", "le", "lm", "c", "h", "f", "ef", "lb", "lk"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> words = {"qgjcpcsseegcolqooliaavcesipjanqblnomivmig", "edomkfptfqqeeioqgeetquvplkbgpderim", "btjloqkrvvavsgnilnvdqvguhbmbkcdhcbivrq", "rnlvtaavlnbbethkpptuguiaiqacbcucchb", "vqebvharrmntesefeptdquoumdkdqqosaigimmctqnbdvqgsg", "edpvipupatliifbecrqjfbfjogqdaldfrudqpvnjrbdosaklpd", "psttmupregtrpuatpvfgfldavbcafmralhbcnjemja", "gtaapfostavdoqdlbglupmnvuqertskebhfmc", "svekbngonqmecmnrdtijnfukgfqvja", "ij", "endrgfriopejfc", "bmmikceq", "diqtohhqsqgopobqmkoivghvbqbqr", "basamnonvok", "nuvklcjfqtsgqjlvsvoagkmjnc", "vjqqpsaptvgbicetdrhtu", "fcmhaldvvobaunprifkbvvnmam", "inlrtpntabjonequlen", "jspb", "rnnnrvvufsoccegdbdt", "fmnasqlujdlvgugibur", "tbagqsjmfssnmoocbhuvfusmmdrjdvn", "bpfoflmvildbqmoso", "agumpdlbbenbc", "mnhcrtprejshhackichlkidgncmopvtjiqcmionvvvvt", "jjulbvrosqrkvusupmsdjsefmrvpiitdecvgomdctpaa", "coqqkbkbpuhvlvuvtmvjevgdgfef", "cvjsubfchopjidbbtknd", "edonlpirpbdljbmgqonvuvdmjfunncecmsimed", "obbeeafovtsodmcfmlecnnvutjo", "ssagsgpskcuqskpjnbatabkekkoqjhkgcjbchfbcjjti", "tnveqifeiefcpuug", "svk", "tqsqcigtrnopqplbutqnc", "skfeilbvdilnatkkgqltemboornkbhvldticgkbgkv", "tvdcmhhborucvqfjidulkflbqnsit", "utqfcjgpnffjkgvemgbkgvppdccbvqoe", "tqrqvlbaonaqbfokndpfrbrvqksvfbmnjtdvbjc", "vcigrrolmkvanpounrhljjekjvfikhimvlrphkhovpehhejd", "vgrouqaehqougfgeufppdqhjoiolcuvhskjitnpolrivnourne", "satajniohkbqsarlloucmboudmcjigahkqcrhsabr", "jnejlcgh", "qelnjoijmimranisdjbafv", "fnvmhonfsclpdkf", "udlpjlrpoh", "jdgrvnamvkbduavgukt"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qg", "edom", "bt", "rnl", "vq", "edp", "p", "g", "sve", "ij", "en", "bm", "d", "ba", "n", "vj", "fc", "in", "js", "rnn", "fm", "tb", "bp", "a", "m", "jj", "co", "cv", "edon", "o", "ss", "tn", "svk", "tqs", "sk", "tv", "ut", "tqr", "vc", "vg", "sa", "jn", "qe", "fn", "ud", "jd"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> words = {"hqqnnqlohsmh", "qaqspoqfbctsefluqntdnrduobmnobudirgddighcok", "bfcfcocspruqkqua", "pjgscuamallnttpahbthuu", "jlriustnkminsokkedftbhgnsinihbrbisemtsjgaig", "lejujuh", "eieiqlmabokcpoabcuubtdpsmsotjrdglugle", "sflao", "uks", "fkfkpbgcbhmhrumjrdmgrdacfs", "iknuaidfrqatdrgtmbsglkmkngj", "slmptmjsuhgnuecmhfahlqiha", "bqtasjamlbirbhiqglioeut", "ftcbjacjckkpafladlurmhrfilnblfncrdmcqtqfr", "okoqcfglkgjkudldmmfsmntqfg", "oelnkifthbaksodardukodbhrcbblj", "sdidmdmsfjbroakhdtbrcmroocehpncbhropekkisukorflat", "lqdmujoitcudaatsgjsomaehkinnrjqkesnjd", "njkkukkfprllamofgilsglmfqdckebsblorsmdmun", "djpdihjnufhbcdng", "kcmsfrmrbrchqjctrebafolbcmheonkcljecedramuo", "cdaisfniomfbemhpdshssahueblipcd", "nnphfpfescjaegeadkherboptfaqhrcegirutorj", "pe", "cbcdgnmflhmgtnsfnpmembsgpfkfjtjlocchqfpfnu", "mhkelauocjctaacmiamupfosna", "cddkopshrtieatckbqhmgctenoccjgggtdocgd", "uaeprkrpldhchjnltiefdnjaiiuopmcebft", "dfhcboabqcsmbfgfiqanahnmshs", "oijgbpqmmjurokssilfqfsjopobkapqbhhqihompmqiktjrjpd", "unbdueqjoftllnguuqifujahalgsmljhm", "utbusinut", "fedlfjkubsabriqmtkr", "tahqhubmghosromsc", "bfqaeadsinsirfqsnlsieqbdc", "hebgpoagfhclgltsjrfullqqruhtdokktprmnnkeaeeakfs", "aecejmqdbpetfcspflftqrkpst", "klmgs"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hq", "q", "bfc", "pj", "j", "le", "e", "sf", "uk", "fk", "i", "sl", "bq", "ft", "ok", "oe", "sd", "lq", "nj", "dj", "kc", "cda", "nn", "pe", "cb", "m", "cdd", "ua", "df", "oi", "un", "ut", "fe", "t", "bfq", "he", "a", "kl"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> words = {"lkaddbemakhkbbfgmbi", "bcdfjgimlimjcmkkhmgamj", "ibgmhdjffekidbjkbmbgkhbm", "jckkfmggckfefecahflhmekjfchadmegcfebfm", "chdkf", "mhcgdceaillcbiciajfjkbgjgckmggbhlmfhgc", "lblmleddkmbkiblglc", "hfhgfebliilhgfakjejlhkbdimghflel", "kejakf", "bdeaikjcdkfbjcgbifacebgamhaemljmljilkkglki", "aaaejdbimliijaggmflfaejbacabjbemgg", "hklldjaccleabcecafhelfkjaddcahlah", "gdgaghchkdhijilgheeglfigejbfieiebdilikh", "eecejikcjhgilladlhfdmccjlmcmbild"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"lk", "bc", "i", "j", "c", "m", "lb", "hf", "k", "bd", "a", "hk", "g", "e"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> words = {"praqnacofdcodkrnlqpnoaedibddjnnnckfcqflknh", "kailieirllqhcilfjqqgdocafplbbjcdhkfiplphngc", "onqqijhmblhcqndkrpgflhiqpjhbgc", "rikrjponofrbiipgejrmrdej", "ibpljjpkodmirdhhdabaipmifoeooqefopnnbdqjkmhba", "bknokgcgqaboaeflimapbfhbpahdjkpr", "ekclmpjregnbcncdeqjnpkgfgkikrprdnienm", "eqhalblkmbmmkmldnbpbpigljiqlobjmf", "kddabjdohq", "qrgaiadbnfqjidrpoikbeorahoojqiakdhkf", "h", "chaefarqlbhgjjegc", "opjlkqgoqehknaqjfmpimdc", "lrrjegihnemfahlpmgdr", "qrqkkkhncqglmcqjfqbmjecf", "rrmhbbmcgorkeihh", "cpmbqpiiegpiqfipegnlbagcfmkcrdkd", "qekojbncloilhgr", "jacmj", "jfnqnlqniimeplqqarcrlbdfqrhnp", "ggqicfp"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"p", "ka", "on", "ri", "i", "b", "ek", "eq", "kd", "qrg", "h", "ch", "op", "l", "qrq", "rr", "cp", "qe", "ja", "jf", "g"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> words = {"dhclfijdhgkhgiiiefidfgk", "dfkfdbhillchjccekhbifdafd", "hichhegdfdaglflehcjdaegcghjdkgedklcbldee", "iabehcjbkkdihlk", "lgcklgcajillljiiidcjif", "ehkjbbjhcfabcelkfffkcaidheke", "gelael", "hchffaiilbjbjahcjgcf", "laeckgaffffekgjfbjchjjgeb", "ciihdckbffibjllglfigbeh"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dh", "df", "hi", "i", "lg", "e", "g", "hc", "la", "c"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> words = {"haikkaetelaeseaipui", "knthd", "dtaklmtkkboceohrngqoadruln", "jjpuaoitkda", "lditkalusgknuc", "nfsgtrkriegiamfsmigamnmgsv", "odnpbdlqbehikcfkmdnohnhvlpukajiu", "qdljgdogv", "qgnigckmoagivtnof", "tomrllbsnooqp", "tuqjilhaabhdevsmgshoprvivnbjgjq", "olcsqcbtlvlmadcggrvshtghemqnidembhijqbikdf", "jmmcrfqqqafnrpqhktnuugdvmovhnn", "olbimdfduhlvmlieipaf", "rkmeiefsmgcrcjhfgebifptoo", "ceqhlddkcmdcu", "tafcccvtiafemofjafjvhjsnaigepeifq", "frsrmcnjlrqpvacvoueemmqcrleupmgupbvemommqufmrvll", "equlsfppueuei", "srljdbpftfqdvkkduvebmifiktfbhlja", "tq", "bafvjhsrdhlvmhvrsttllupejcfk", "mcdbkgfnqtbadgrkoomcspdpeapgimhjjujt", "fvrtaanfljtjcoljpqdkbefdakojmblvck", "falilirpcuqgjgoptispbvpesgmovkckoqlnhjvlhvp", "qorhaasqkddulj", "sifbdbpofnsktfqjiqpleiqkeqrapvtdponjdpguf", "tatnkbsiimjnvplaacfcqpq", "lmggtrtnq", "hmfuaclngfqnsvaannbqubllknbbnjcvlvocuqljc", "gsunmopndptaoepbcesmfsdqloqnfsnkablgjshpns", "nrengvmqsqmqiftobteeltebkfjfrcrtkoemrsfevljrus", "rmlkqrkqtvliltakrfvtnpukmohioadqabro", "mukaqjhravlarkkeulnsheisajifsmvmnsckfvgcqaqumv", "opnevcdqunvvkdjctsmifspnrfrl", "ksrnfjcggbrhhsosobliavrjkfpupsnakhnmcu", "rtaneuhrbqvvuk", "jjprhldooeikkadrns", "uliktgrjnkuurkeofjcobovobdhlbkafhuuptbffpumfra", "nlfllmuvjjgivhsnjndkfghklphpgsfpuvuqkjshttclpatch", "bmavcedsjaiidqapcuasbhmrgriadv", "kbqitdddipjjk", "ekfafcqvctcfaprpmcehkpefmgorbimdnrfh", "qjaukku", "ustmvfmqvv", "jmkkumbdnsrvsrjufjkkradltlnrhaqclvhlvnilqgirjqfi"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ha", "kn", "d", "jjpu", "ld", "nf", "od", "qd", "qg", "to", "tu", "olc", "jmm", "olb", "rk", "c", "taf", "fr", "eq", "sr", "tq", "ba", "mc", "fv", "fa", "qo", "si", "tat", "lm", "hm", "g", "nr", "rm", "mu", "op", "ks", "rt", "jjpr", "ul", "nl", "bm", "kb", "ek", "qj", "us", "jmk"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> words = {"djbcffeheaejeehhbcajhacjdkcgfiigeegagkhfcjkfd", "ikgekaa", "fjbhhbagbjdafh", "ehkkdgcageiaebedhgiifdkbigjkfbkedafajbajafkgekeec", "hdec", "ikhdkdkbbahcidkdekakeekic", "gakhbfehkbgkcjfebhdhfiaeckhhcg", "kfieaabedjgbijjdgikbgkkjdfkhfei", "dbhdgedfjfbhhhfijeaiddagibbdcecejgdegeikd", "kjiffhhbgfgfegikffjajficgekjbhkkbeggkhjkeehjdcj", "kfjfjighaecbcfji", "ejekakjkc", "jbjaihkgdgcbdcffgjbkahbbcgbjidafhhg", "hkjjkjfe", "kaji", "ceidfkejkffjeghfkbkedffhifcibfekfaddg", "gaaafjedhajabfdfedgcgihaejjjbkjiggiiecbhijhghiafb", "hieg", "eefabdejicfkfbbadaieibaakidedei", "fkaijijjg", "ihfkdgeefiiehbadeahdhbhakiceafcehjkkiggdcca", "diekkhajbkhkehcdadeajcjdikjgjfgf", "djgacfchfgjedbjffcabddckdcbe", "gcaeiikebc", "ikbc", "ckjcbdegcghkechgdbkjgfhjdhacidciajgi", "hcidcdhcjjacfkikhgbhecigkefgfecifcfckcbhck", "b", "iafjhigddgfkbdgahfcgbkhihfhdhbedibdcda", "iebdkfkk", "fejkdfdcijagdfgkhbgbgkhiekdkgfgighhfcdgaeadge", "dcgahgeehehdeiaagddhbjfhiicbbkgbhadfbfk", "dhhhdkibhhiaajiadgegbhikdcc", "aajadebdfgdidifbadeaiheed", "ibadjja", "giehkbgjaahbdcabkeag", "hgejcgahkhibck", "hjjajafighidcbjakhcfjjgdjffdkkh", "ajfkkjhgbebakejbikdjekdhjajahifkcibhhgbih"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"djb", "ikg", "fj", "eh", "hd", "ikh", "gak", "kfi", "db", "kj", "kfj", "ej", "j", "hk", "ka", "ce", "gaa", "hi", "ee", "fk", "ih", "di", "djg", "gc", "ikb", "ck", "hc", "b", "ia", "ie", "fe", "dc", "dh", "aa", "ib", "gi", "hg", "hj", "aj"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> words = {"afcdfcefbccdfbadceec", "cfceacdcdcbeececfbdd", "bdbcbedabaecedefbabaacefafdcbc", "acbaabbdfdbfdcedda", "bcfbeafdaecacbbeabbbddafeddbdbdbebbdf", "acaeadddfebccceaeaebcfbcaacebcccdafdadeadbbacebce", "ddabfefebbeba", "aacedbfbbca", "becfdcdfffaafdbfedcbacbabfbddfadffecfecafccecded", "efaeeeff", "bafafcaf", "dbccddfeedacdedcfcdbecefeafabcbecfdbaafcdf", "eaaceaafeccfdcdbffcedbfdfccfdfbce", "dacdbefccfeaaadadbbcceecabd", "adbfeafcbeefebdcdecabcbcebcb", "ddadfbebeccaecdabbcbcdccecbacaabcaccbbcd", "fbfdbbc", "aaaaac", "cfdcffcbfdbbadfbafdaaeaca", "accecbadeabbdbbbafbeebaaaffbaebccdfeebbdafabebdddd", "dabcdfcaecbdadbfcbdeceecfadfeabdaeaceabfcecdbdecf"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"af", "cfc", "bd", "acb", "bc", "aca", "ddab", "aac", "be", "ef", "ba", "db", "ea", "dac", "ad", "ddad", "f", "aaa", "cfd", "acc", "dab"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> words = {"bcbbabac", "acbabaaaacabaaaaa"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b", "a"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> words = {"ababbbbbbbabbabaaaaaaababaabababbaaaaabbaaaaa", "abbbbaababbbabbbbabbaabbaabbbbb", "aabbbaaaaababbabbaaabababa", "aaaabbbbbbaabbabaaaabbabbaaabaaabaababababbabba", "abbbaaaaba", "ababbbaabaabbabbaaaa", "aabaaaaaaabbaaaaaabbaaaabababaabb", "bbbababbbbbbaabb", "abaaabbabbbbabbaababababaaaa", "aaaababbaabbabbbaabaabaabbabaababbbb", "baaabababbbabbbbbbbbaaaaabba", "bbabbabbabbbbbbbabaaaaababbbabbabbaaabaaabbaabaa", "abaaaabbabbbbbababaaababababba", "ababbaaaaabb", "babaabbbaaab", "bbababbaabaabaab", "baababaabaaababbbbbabbabaababbbabbaabaabbbbbb"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ababbbb", "abbbb", "aabb", "aaaabb", "abbba", "ababbba", "aaba", "bbb", "abaaab", "aaaaba", "baaa", "bbabb", "abaaaa", "ababba", "bab", "bbaba", "baab"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> words = {"nmrcetnlntjqjqmmeitjurwbfbcno", "ltoidfnvbgmngnganompqughomqsfintarfwilpp", "lkdogficpvjsdwokrlwu", "pwqvtefesmvvoc", "cutkhimipciadufttcivmfacbvcamsihssvonupendgej", "w", "cnbaluuernvqfctlfwkugnsppecau", "inrwtvqbfjcwqdmabqmbubeafvhhgcicmkeceeaokurdqprdd", "sbdbluecgqbrubp", "fq", "nnrajqwwubqfwrpctwmcv", "gpeirqtabnidwlapsqcqrfrqhjcqagecihckvqmdwnrwmso", "loj", "qknqhlqjcovhqqubwicodhqlwaielgqrjgkapcgijhjcw", "fmwgwrugvskickwqgsgirgoog", "egtlksrdpridsambegmguqplrvnbbvtkmvrefknhda", "lnptwaovrsbqmq"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"nm", "lt", "lk", "p", "cu", "w", "cn", "i", "s", "fq", "nn", "g", "lo", "q", "fm", "e", "ln"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> words = {"ilhjmcmhokdialejigahmbodphpbjahjimc", "kpncejhhnnbb", "dmnoiakdfoaedjpejbpijmljbgkadfnfhiljfombehlfbckgfl", "bnecjpnjahopdfhincagdpngiileebjggnckjj", "denhenpjholjahjodhkbjgiacnomdcpm", "lboeogedi", "nncaokhbmegmbimif", "alggadgankapdceifdcnnphoepahhbnicaao", "hppannaklhnkfihognffmlaehncilepbpkdpcdolomm", "mmembpkhhjdlicfempklnkkedandljijnllihkcmgemihbpcg", "lnodppfenpjhaepgdafmj", "aleefchejfkjkobmpbaddlicmbmldocdmcdllehpmed", "aekd", "blahpfglpfmp", "gpepk", "cfhniolpfpdpanl", "bjiegnjokbhmocakngbkpcngbd", "kdnfljdnlonnpabccmdmnifafgmllcjcefcko", "hdccjkakgmpmnoknkdejjjfbockddh", "mkopnkaeocdbgipngcfleieejfhgb", "hdigdpchggjddfbdafjdb", "dhpeddihjnbngjggojlkhcpkpccahimmnaolaemlgomkkn", "cognlhbgpjgodfldhbnclpapkemkplobhdnnomnflm", "aceggolnbidpgpcdoijckkdphefaobg", "jelcbbdghllnoaahbjnpdkojkgglcicmdnkhjgbnbphjmagik", "cdoghdeinpmfabdmldehjbcfaikfoofgcannclljckok", "elbigcakckcpfghgdgnofgdanbop", "gcahdcepbckcofbikbimpjjgjjbhkdoknodjoioblmj", "afdp", "hljgpfobomffnhfooiilpimikdfhmcofmcf", "mcfia", "ijpdbaaacfl", "aambceimagonkhkaenjgbmohnaffbfnagifcfpdkoahkamdelk", "defdbaaohdahebpkb", "njgjfogfkfgmgcenjkbdedcbmikgdbaffedpnhipkgflaha", "lkhljnfjcbbnfbmcdcebaflchmeaceabppejgi", "dceeikgfghmdikpnl", "npkmllmmcjijconjambigdnemhjjbciphckjfdgfhjfnhdnho", "dnbgc", "acggpojiknclgiklmkaibbmbefeimcbeh", "aglijmgfnbngbjkbmmcmmafinjhgjling", "oppnignb", "dilinfjaiphechdfgajhodhfmaflkjgnc"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"il", "kp", "dm", "bn", "den", "lb", "nn", "alg", "hp", "mm", "ln", "ale", "ae", "bl", "gp", "cf", "bj", "kd", "hdc", "mk", "hdi", "dh", "co", "ace", "j", "cd", "e", "gc", "af", "hl", "mc", "ij", "aa", "def", "nj", "lk", "dc", "np", "dn", "acg", "ag", "o", "di"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> words = {"aaaaabab", "bababbbabbbabbaabaaaaaaabbbbbaaabbbbbabaaaabbba", "aaabbaaaabbbbbbbaaaaababaabaaaaaabab", "aabababababbaabbabbabbabbbabababaabbbaabaaaabbb", "bbaabbabaa", "bbbabaaababaabbaaaaabbb", "babaababaabbbbbbabbbbaa", "bbababaabaabaaa", "bbabbaaababaaaaaabbabaaaaabbaaababbababbaba", "aababaaabbbbbbabaabaababaa", "bbaaaaabababab", "aabbbaaaabbbbbbabababaabbbbaababab", "aabaaaaabbaababaaaa", "abbabbaaabbbbaabaaaaabaabbabbbaba", "aabbbaabbaabaababbbbaaaaabbaabbabbbabbab", "ababab", "babbabaababaaabbbabaaaaabaaabbbabbbabbabbbbbbba", "bbbaabbabbbbbabbababbbabbabbba", "ababbbaaaabaabaabaaabbaaaaabbaaabbabaa", "abbabbbaaabaababbaaabbaaabbbbaaaabaabbba", "ababbaaaaaaaaabaaaab", "bbaaabaabbbbaa", "aaabaaabaaabbbababababaabbaaabbabb", "aaaabaabbababaabaabbbaaababbababaabaaa", "babaaabaabbaaaababa", "aababbaabbaaabbaabababbbbaabbabababbaaa", "abbbaba"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaaaa", "babab", "aaabb", "aababab", "bbaab", "bbbab", "babaab", "bbaba", "bbabb", "aababaa", "bbaaaa", "aabbbaaa", "aabaa", "abbabba", "aabbbaab", "ababa", "babb", "bbbaa", "ababbb", "abbabbb", "ababba", "bbaaab", "aaaba", "aaaab", "babaaa", "aababb", "abbb"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> words = {"kelkuvqxfox", "sirxcrefgkaovlwfggngaxfhnlvdgqygehdngloljgs", "vmbebuxlptsyklyqgbriuvkiupvkaofcgpjxylkxxetjfwj", "ftpjrxvnwmsckfkeqwptisdhsob"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"k", "s", "v", "f"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> words = {"syc", "myputynjhfciffpu", "nngotncv", "ufhnpcimtnl", "padxepijglaptge", "vwibsagyjqoqsae", "oggtjulcvgebeqoeywtqwdxkwpuxtgxtjpnqk", "qgtgtahuswoauw", "dxxhymvdjyoo", "klpemjlmkkqejrrabdcmtyhrthy", "gf", "qkyayypngejhrdjgymaspnopfxoevxoideuajs", "pyexukldncyjy", "qn", "ubunwtewlacyatptgsryjuvkfn", "dxaryyonlq", "brsfh", "is", "eitcubbamfhjgvjudixeoeasvgitxpitptpkknqfvko", "pu", "kfpl", "ysloectjxy", "wgardcqfjudnstkjnnmvsvhwlsxbwrfmwuff"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"s", "m", "n", "uf", "pa", "v", "o", "qg", "dxx", "kl", "g", "qk", "py", "qn", "ub", "dxa", "b", "i", "e", "pu", "kf", "y", "w"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> words = {"bbabababbbaabbabbabaabaaabbaabbbaaaa", "ababaabbabbaaaabbbbabbbaababbbbaaabbb"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b", "a"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> words = {"aababbbabbabbbbabbaabbaabbaaaabbbbaabaabaaabaabbb", "abbababbaabababaaabbbaaaabbabbaaababbbbaababbab", "aabaabbaaaabaaaabb", "bbbabbbaaaaabaab", "bbababa", "bbabaabbabaabbaababbababbbaba", "aabbbabbbbabbaaabababbbbabbbbabbaba", "aaabbbaabaabbaabbabbabbaaabbbaababbbbaaabbaaababb", "aabbaabbbaaabbaabbaabbbaabbaabaabbbbabbbabbba", "abbbaaaabaaaaabbabbbaaaababbabaaabbabaabbbbbabaa", "baabaababaabbbba", "abbbaabaaaababbaabba", "bbbbaaaabbbbabaababbbbbaabababbbbbabababbbbabab", "baabbabbbabaabbabaabbabbabbbabaabbaabbaaaaaaa", "abbbbaaabbabbbbbabaaabbbababbabba", "ababbbbbbabbbbaaaabaabaaab", "bbaaabaabbbbabaaabaababaaaaabbaaaabaababbaaaabbaa", "abaaaabbbaaaaabbbab", "babaaaab", "baaabbababaaabbabaaaabaabbaabaa"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aabab", "abba", "aabaa", "bbba", "bbabab", "bbabaa", "aabbb", "aaa", "aabba", "abbbaaa", "baaba", "abbbaab", "bbbb", "baabb", "abbbb", "abab", "bbaa", "abaa", "bab", "baaa"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> words = {"bbbbbbbaabaaaabbaaababbaabbaababbabbabb"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> words = {"bbbbabbaabaabaaaaabbbbaabb", "aabbbbabbbababbbbbbbbbbabbaaaabbbbaaaababba", "bbbbaababaaaaaaababbabaaabbaaaabbbbb", "babbaaaaaababaaaaaaabbbabba", "babbbbbbbbaaabbbabb", "ababaaaaaabaabbabbbbbbbb", "aababbababbbabaabaaaaaabababaaaa", "aabbbabaaababaabbaababbbbb", "aababaaaaababbababbaaaabaaaaabbbbaababaaaababaa", "bbbbabaabaaaabaabbbbababaab", "aaabaaaababbabbaaabbaa", "bbaaaaabaaabbababaa", "bbbabbbbaaababaabbaabbba", "abbbbbaabbaaabbabaaaabaabaaabbbbbaaababaaaaab", "bbbaaaabbabaaaabaaaaaabaaaaabbbaabbb", "baabaaabb", "abaaaaaababaaabbbabababaaabbabbabbbb", "babaaaaaabaabbbabbaaabbabbaaabaabb", "baaaaaabbbbbaaabbbaa", "abbbaababbabbabaaabbbaaabbbaabaabba", "bbabaaabbaabbbbaaabaaabbbbaaba", "baaabbabbaabbbbbbab", "aaaababbbbabaababbbbbbaabaabbabaabbbbbbaaab", "baabbaabaabbbabbbabaab", "bbbaaaaaabaaaabbbbbbbbbbaaaaabbaabba", "bbbbbbabbbabaabbaa", "bbbbbabbbababbaabaababababbaa", "aababababaaaabb", "aababaabbbabababaaaaababbabbbba", "bababbaabbababababa", "bbabaaabbaababbabaabaaaabbbbaabbaabbaaabbbbb", "aabbab", "aaaabaabbaabaaaabaabbababbbabaaabaaaaaba", "abbbaabbb", "abbbabbbababababaabbaaababa", "aaabbaaabaabbba", "baabaabbaaabbbabbbaa"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bbbbabb", "aabbbb", "bbbbaa", "babba", "babbb", "abab", "aababb", "aabbba", "aababaaa", "bbbbaba", "aaaba", "bbaa", "bbbab", "abbbb", "bbbaaaab", "baabaaa", "abaa", "babaa", "baaaa", "abbbaaba", "bbabaaabbaabb", "baaab", "aaaabab", "baabb", "bbbaaaaa", "bbbbbb", "bbbbba", "aababab", "aababaab", "babab", "bbabaaabbaaba", "aabba", "aaaabaa", "abbbaabb", "abbbab", "aaabb", "baabaab"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> words = {"bababaaaaa", "baaabaababa", "bbabaaabbaaabbabaabaabbbbbaabb", "aaababababbbbababbbaabaaaaaaaabbabbbaaab", "baaaaabaababbbaabbbabbababbbabbbbbbbbab"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bab", "baaab", "bb", "a", "baaaa"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> words = {"aaabaabaaabaabbababbbbbbab"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> words = {"bbaaabaababbbabbabbbabaabbbb", "baabbabaaaabbbbbb", "aaabaab", "bbbbababa", "bbbaabbbbbbabbb", "bbaaaabbaabaababaaabaabbabbbbbaabbabbbbaababbabbab"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bbaaab", "ba", "a", "bbbb", "bbba", "bbaaaa"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> words = {"abaaabaaabaabbabbbbabaabbbbaa", "aaaaa", "abbabaaaaaaabbababaabaab", "aaaababaaabaaabaaaaabbabaabbbababbbbaaa", "aabaaabbabaababbbb", "aaaabaaabaaabbaababaababbbaaababab", "aabababaab", "aaaabbbbabaaaaaabaaaabbabaababbabaabbabab", "bbbaaabaabaabaabbabbbbab", "baaabbaaaaaaaa", "aaababbaabba", "abaaabaaaabababaabababbbbaabaabaabaabababb", "abaaabbababbb", "aaababbbabbaabbb", "abaaaaaaabba", "baaabababbbbabbbabbabbbabbbbbabaabbabaaabbba", "bbbababaabbaabbbaabbbaababbbabbbbbababaaab", "bbaaabb", "bbababbbbbaababababb"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abaaabaaab", "aaaaa", "abb", "aaaabab", "aabaa", "aaaabaa", "aabab", "aaaabb", "bbbaa", "baaabb", "aaababba", "abaaabaaaa", "abaaabb", "aaababbb", "abaaaa", "baaaba", "bbbab", "bbaa", "bbab"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> words = {"baabbbaaabbaaabaaaabbbbaaabaaabbbaabaaaaaababbaa"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> words = {"baaabbbaabababaabbabaabbaaaaababbbabaa", "abbbbbbabbaababbbbaababbbabaaaaaaaaabaababbba", "aabbabbbaababbbaabbbabaabbbbaaabbaaaabbbbbbabaa", "baabbabbaababaaaabbaabababbabbbbbbbaaaabbaaab", "bbababbbbbaab"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baaa", "ab", "aa", "baab", "bb"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> words = {"bbaabaabbbbaaabbbabbababbabaabbabbbaabb"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> words = {"aaabbaaaaaabaa"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> words = {"babbaaabbbbaabaaabb", "bbabababbbbabaaaabbbbbabbabaaabbbba", "bbaabbaabaaabaabbababba", "abbbbbbbbbabbbbbababaabbbaabbaaaaaabbabbba", "abaaaaaaaabbbbabbaaaa", "aabaaaaaba", "aababbabbbabbabbabaaaabababaabaaaabaabbabbbbbaaab", "bbaabbaabaaababaabbb", "baababbaaaabaaababaabbbaabbaa", "bbaabaababaaaabbbbaababba", "abbbbbbab", "baababbbaaaabbbbabbabbabaaabbabbabaaab", "baaaa", "aaaaabaabababbbbabbbbababbaaabbbbabbbbabbaaabaab", "bbbbbaabbbbb", "aaaabaababaababbabbaaabaabbabbabbbbababb", "abaababaababbbababaaaaaa", "aaaabbbbbba", "aaababababbbbbbaaaaaabaaaa", "abbabaabaaababa", "abaababbabbaababaaabbaabbbbabba", "baabbbbaababababaabbaabaaabaabbaaaaaa"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bab", "bbab", "bbaabbaabaaabaa", "abbbbbbb", "abaaa", "aabaa", "aabab", "bbaabbaabaaabab", "baababba", "bbaaba", "abbbbbba", "baababbb", "baaa", "aaaaa", "bbb", "aaaaba", "abaababa", "aaaabb", "aaab", "abba", "abaababb", "baabb"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> words = {"abaaaabaaabb", "aabaabbbabaaaababbaabaabaab", "aaabaabbbaaaaaaaabaaabbabbbaabab", "ababbbbbabbabbaababbabbbaabaa", "bbabbabbbaababbbaabbbabaabbabbabbbaaababbbb", "babbbbbaabbbbbabbbbaaababb", "aababbbbbbaaaaaaaaabba", "bbbbbaabaaa", "aaaabbbaaaaababbbbbbbbbbabbbbabbaaaa", "aaaaaa", "bbbabaabaaaaabbabbababaabaaabbb", "bbbbaabaababaaabaaaabbabaaabbbabba", "bbbabbaabbababaaaaaaaaaababaababbabaa", "bbabaabbaaaaaaba", "bbbbbbaabaabbaaababaaa", "abbaabbababbaabbaabbb", "bbbbbbabbabbbabbababaababaabbbbbabbbbbabbbaaabbaaa", "bbaaabaa", "bbaaabbabaabbaababaabbaaabbbababbabaaa", "bbaaababaaba", "ababbbbab", "aaaabbabbbaaaabbaaaaaaaabbabbabaaababaaaaabaaaaa", "abaaababbaabbb", "bbaab", "bbbbbbbbbabbbbaabbbbababbbbaab", "bbbabbbbbaaabaab", "abbabbabbaaaababba", "abbaaaaababaaabbb", "ababbabaaaaabaaaaaabaabbababb", "aaabaaabababbab"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abaaaa", "aabaa", "aaabaab", "ababbbbb", "bbabb", "ba", "aabab", "bbbbba", "aaaabbb", "aaaaa", "bbbaba", "bbbba", "bbbabba", "bbaba", "bbbbbbaa", "abbaab", "bbbbbbab", "bbaaabaa", "bbaaabb", "bbaaabab", "ababbbba", "aaaabba", "abaaab", "bbaab", "bbbbbbb", "bbbabbb", "abbab", "abbaaa", "ababba", "aaabaaa"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> words = {"bbababa", "aaababbaaaaabbaa", "aaaaabbbaaabaaabbbbbaababaabbbbbbaaba"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b", "aaab", "aaaa"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> words = {"aabbbaaabbabbbbaaaabbbbababaabbabbbbababababbbaabb", "baaabababbbaabaabbbbbababbbaaabbbbbaaba", "bbbabbabaabaaabbaaabaabbababbaababbaaabab", "aabaaabaaabaaaabbbaaabaabababbabbbabaa", "bbabbaaabbbaaaaabaabaaaababbbbbaabaababaababbbaaa", "abbabbabbabaaabbabbaabba", "abbbbbbaababbabaaabaaaabbababbabaaaaabbbbaabbaabaa", "baaaaabaaabbbaa", "abbbbbbbbabaabbbaabababaaaba", "bbbbbbaaabaababaaabbbabbabaaaabb", "babbbbabbbaababababbab", "bbbbabbaaababbabbaabaabaaaaabbbbaaaaabab"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aabb", "baaab", "bbba", "aaba", "bba", "abba", "abbbbbba", "baaaa", "abbbbbbb", "bbbbb", "bab", "bbbba"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> words = {"aaab", "bbaabaabbaabbaababaaabbbaabba", "ababaaaaaabaaaabbabaaab", "bbaabbbaababbaababbaaababbaabaaaabbbbbbbbabbaaaaba", "bbaaabbabbbababa", "bbbaaaaabaaababbabbaaabbabaabaaaabbaaaabb", "bbababbbbabbaabaaababbaabbbababbbbabaabbbaaa", "babbbaababaa", "aabbaabbaaaaaaaabbb", "bababbbbbbaabababaaaababbbaabba", "babbbabbbabbbbbbbbbbabbaabaababbabaaaab"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaa", "bbaaba", "ab", "bbaabb", "bbaaa", "bbb", "bbab", "babbbaa", "aab", "baba", "babbbab"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> words = {"bbbbabbbbaaaabbaa", "aaaabaaaabbbbabaaaabaabaaababbaabbbabbbbbabab", "aaaaaababaaaabaaaba", "ababbbaabbaaaaaaabaaaabaabbba", "bbaaaababababbbbbbbaabbbaababaabbbaba"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bbb", "aaaab", "aaaaa", "ab", "bba"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> words = {"aabaabbbaababa", "bbbbabbbbbbbaabbbabaaaaaaabaaaaabbbbbaaabaabbbb", "baababbbbaabaabbbbaabaabbbbaaa", "abbbabaaaabbbbbbbaabbbaaaabaabaaa", "bbaaaaaaabaabababaaabaabbbbbaababbbbaa", "abababaababbbaabaaabbaa", "abababababaabbaaabbabaababbbbaabbaaabbaababaa", "aaabaabbbaaa", "baaababababbababbbbaaba", "bbabbabaaaabbabaaaa", "babbaaabbabaababbbbaabbbabab", "abbbaa"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aab", "bbb", "baab", "abbbab", "bbaa", "abababaa", "abababab", "aaa", "baaa", "bbab", "bab", "abbbaa"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> words = {"aaaababbaaaababbbaabbbaab", "abbbbbaabbbababbbabbbabaaaabbbbbbbaaaa", "aaaaabbaabbbbbbb", "aaaaaaaababaaaaaababbbbbaaaaabaaaaaaaaababaab", "aaabaabaabbabbbbbababbaababaaaabbabbabbabbabab", "ababaaabaaabbaabbbabbbaaabaababababbba", "bbaaabaababbab", "aaaaabbaabaa", "aababbbbaaaaaaabbaababbbaaabbaabbaabaabbbaaaaab", "ababaaabbbbaababbbbbbbbababbaa"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaaab", "abb", "aaaaabbaabb", "aaaaaa", "aaab", "ababaaaba", "b", "aaaaabbaaba", "aab", "ababaaabb"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> words = {"bbabbbbbbbabbbbbbb", "bbaabababbbaaa", "abbbaaabbbaaaaaaaaaababbabbaabb", "babaabababaaababbbbabaabaabbbaaabbb", "baabbbaabbaa", "aabbbbaabbbb", "aabaaaa"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bbab", "bbaa", "ab", "bab", "baa", "aabb", "aaba"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> words = {"baabbaaabaaabbbbaba", "baaabbbbbbbbaaabbaabaababbaaaaabababbbaaaab", "babbaabaabaaabababbabaabbababa"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baab", "baaa", "bab"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> words = {"bbbaabbabbababba", "bbbaaaababbaabbaabababaababbbba", "aaaaaabbaaaabaa", "babaabaa", "ababaabababaaaabaaabbbabbbbbababbaabaaaabbb", "aabbabaabbbababbbbbabbababbabbbabaabbbab", "baaaababaaabbbaaaabaaabbbabaaab"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bbbaab", "bbbaaa", "aaa", "bab", "ab", "aab", "baa"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> words = {"bbabbaaaaabbbabbbbbbbabbbbbbaabaababab", "abbbbaaaabaaaaaabbaaaaaaaabbaababbb", "baabbaaabbbaabbbababbbabaabaabba", "bbababaaaabbaabaaaaabaababbbbabababaa"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bbabb", "a", "ba", "bbaba"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> words = {"babbbbababbaabbaaab", "bbbaabaaabaaabbabb", "abbbaaaabbbbabaababbaaaabaaaaaaaababaabaaabb", "abaaabaaabababababaaaabababa", "aaabaaaaabbbbabaabbbaabbabbaaaabbb", "baababababbaabbb", "aaaaabababaabbaaabababbabbabbabab"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bab", "bb", "abb", "aba", "aaab", "baa", "aaaa"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> words = {"bbaabbbbbabaaabaab", "aaaaaabbbabbbbabbabbbbabbbbaaa", "aabbabaaaabaabbbaaabbabbaaabbaaaaab", "babbbbabbbaaaa", "bbaabaaabaabbabb"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bbaabb", "aaa", "aab", "ba", "bbaaba"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> words = {"aabbaaabbbaaa", "abbababbbaaabbbbbaababbabaaabbabaa", "aaabaaaabbaabaabaaababbbbbaabbaaaaabaaaaba", "bbbbaaa", "abbbabbababaabbabbabbbbabbbabbbbaabbbabaa", "aabbb"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aabba", "abba", "aaa", "b", "abbb", "aabbb"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> words = {"aaaabaaabbbaa", "abbabbbbbababbababbabaabababbaa", "abbabbabbab", "abbbaaaaabbaabbabaabaababbabbabaaaaaaaabbbbabbbbb", "baaaaabaabbaaaaababbbb", "abbbbaaaaabaaabaaabbaa", "aabbbbbaaaaabbaabaab", "baabaaaabbaabaaaaabaaabbabaaababbbabaabababb", "aabbabaababbaaaaaba", "abbbabbabbbaabbaabbabbbabbabababbbba", "bbaaabbabbaaaabaabbbabbbaaabab", "abaaaabaaabaabbabaabaabbbbaba", "aaaabaabababaaabbbbbababbababbbaababbaabb"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaaabaaa", "abbabbb", "abbabba", "abbbaa", "baaa", "abbbb", "aabbb", "baab", "aabba", "abbbab", "bb", "aba", "aaaabaab"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> words = {"bbbbababaabaabababaaaaaaabbabbbaabbbaaabbbbbb", "aababaababbabaababbabbbbbaabbbabbbbbbbb", "aabbbababaaabbbabababbbab"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b", "aaba", "aabb"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> words = {"abbbaaaaabbaabbbab", "abababbababababbbbababbbbbbaabbbababaaababaabab", "babaaabaab", "bbbbbbabbbabaa", "aaabbaabbbbaaaabbaaaaaaababbbbabbabbbbbaa", "bbbabbabaaaabbbaaaaabbbbabaaabbaaaabbaabbbba", "babbabab", "bbbabababbbbaba", "aaababaabbabbbababbaaabbabaababaabbbabaabaaabbb", "aabbbaabab"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abb", "aba", "baba", "bbbb", "aaabb", "bbbabb", "babb", "bbbaba", "aaaba", "aab"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> words = {"baababbbbabbbbabaaaaabbbbaabbaa", "bababaababbbababababbbabbbbbaaababbbbaaaabb", "baaabbbaaabaaabbababba", "bbaabbbaabbbbabaaabbabaaaab", "bbbaabbabaaaaaaaabaababa", "babababab", "abbabaabbaaababaabbbbbbaaabbbabbabaabbabbaaab", "bbbb", "aaaabaaabbabaaaabbbbbaab", "baabbbbaaaaabbaaabbabbabaaaabbabbabaaaabbbaaababba", "abbbaaabbaaabbbaaabbbbbabbbbbbaabbbaabaabbbbbb", "bbababaabaabaabab", "ababaaaabaabbbbabbbbbabbbabbbbbbabbabbaaabbaaba"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baaba", "bababaa", "baaa", "bbaa", "bbba", "bababab", "abba", "bbbb", "aa", "baabb", "abbb", "bbab", "aba"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> words = {"baaabbabaaaababaaaaaababbabbbbbbabb", "bababaaabaabbbbbaa"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baa", "bab"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> words = {"abbbbaabbabbbaa", "abbaabbbbbabbbbbbaabaaabaabaaabbbbabbab", "bbbbaabbaaaaababaaaaaaaabbbabbbbb", "aabbbbaaabaaabbbbbabbbbbbba", "bbbbabababba", "bbbbbbaaaaaaaaaabbabbabbbbbaaababaaaaaabaa", "aabbaabababaaa"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abbb", "abba", "bbbbaa", "aabbb", "bbbbab", "bbbbb", "aabba"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> words = {"baaaaaaaaabab", "abbbbabbabbaaabbbabaaabbbaababababaaabbaaba", "bbbbaa", "abbbababbaabababbbabaabaaaabaa", "aaabbbbabbbabababbabaabaaabaabbaaabbab", "bbbabaaabaaaaabaabbaaabaaaabbabba", "baabbbbbbbaaabaab", "aabbb", "bbaabbabbabaabbbaabbbbbbaab"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baaa", "abbbb", "bbbb", "abbba", "aaa", "bbba", "baab", "aab", "bba"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> words = {"aabaabaaaaaaaaaabbaabbbbb", "ababaaabb", "bbbaababaaabaaaaaaa", "aabbbbbaabbabbbbbaabbaaabbababbbaabaabbbabbbbab", "bababbbbabababbbababaaaaababaaab", "aaaaaabbbbbabbbbaaabbbbaababbbbbaabaabbbaaaaba", "bbaaabbbaabababbaababaaabbbbaabbababbbbbaabbbbab", "baaaabb", "abaabababaabbbababaaababbbbbaaababbbb", "babababba", "bbbbbb", "bbababaabaaabbaabbabbbbaaaaabaabaababbbbbb", "bbaaaaabbaababbbabababaaaababbbb", "aabbbbbaabbabaaaaabbababbaabbaaabaabbabbab"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaba", "abab", "bbba", "aabbbbbaabbabb", "bababb", "aaa", "bbaaab", "baa", "abaa", "bababa", "bbbb", "bbab", "bbaaaa", "aabbbbbaabbaba"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> words = {"b"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> words = {"abaabbabb"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a"};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> words = {"aaabbbbabbaabababbbbbaaaabbbaa", "abbbbbb", "bbaaabaabaabababbababbaaaaaaaaaabbbab", "aabbabaababbbbbbaabbabbb", "baaabbabaaababbbbaaaabbbbaaabab", "bbaabbaababbabababbaabababa", "baabababbbaababb", "abbbbbabaaaabb", "aabaaaaabbbabbbaab", "aaaaababbaabbaaabbab"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaab", "abbbbbb", "bbaaa", "aabb", "baaa", "bbaab", "baab", "abbbbba", "aaba", "aaaa"};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> words = {"babaabbaabababbaabaababbbbababaaabaaaaa", "bbaaabababb", "babaababaabaabbaababaababaaaabbabaab", "ab", "aaaaababaaaba", "aabbaabbbbaabaabbbabababbaaaabbaabb", "aabbabbababababaaabbabaaaabbaabb"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"babaabb", "bb", "babaaba", "ab", "aaa", "aabbaa", "aabbab"};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> words = {"abbaabaaabaaabaabaabbbbaaabbbabaababab", "bbbbabbbabbbba", "abaababababbbaabbababbaaaba", "babbabbabbbbbbbabbbabbbbbaaaabaabbbbaabbaababb", "baaabbbabbbbababbb"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abb", "bb", "aba", "bab", "baa"};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> words = {"aaabbbaabbaabbbababbaaaabbaa", "baabbbaaaabbaabbaa"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> words = {"abaabaabbaaa"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a"};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> words = {"baaaabbbabbbaabbaababbbbaabababaabaa", "abaaaaaababaaabbababbbaaaabbab", "bbbbb", "aaabbbb"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ba", "ab", "bb", "aa"};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> words = {"abaababbabaabbbabbbababaaabaababb", "abaababbaababbabaaabbbbaaaababbbbbab", "aabbaaaabbbabbaaabbaababbabbaabbaaaabaaababba", "bbaabbbbaabbbba", "bbbbbabbbabababbbabbababaaababaabbbbaaabaa", "aabaabbbaaaaaaaaabbabbababbbaabb", "baaabbbabaaaabbbabbababaaaabbaabaababaaa"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abaababbab", "abaababbaa", "aabb", "bba", "bbb", "aaba", "ba"};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> words = {"babbabababbaabababaaaaabbbaaaba", "abbbabbababaaaaabaabbbabaabba", "aabaabaaaaaabbaaabbbbbaaabbbaabbbabbaaaaabbbbaabaa", "aabbbaaabaabaabb", "baaaaaaaabbabaaababaaaba", "aabaabaabaabbbbabbaabaabaa", "bbbaaaabbabababaaabaaabbba"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bab", "ab", "aabaabaaa", "aabb", "baa", "aabaabaab", "bb"};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> words = {"bbbbbbaaabaabbbbbaa", "ababaaabaababaaaaabaaaaaaaa", "abbbbbbabbbbababbbaababbbbabbaababbba", "abbaabbabaabbbaaaaaaabaaabba", "abaabbbabbaababaaababbbaabbbbbaba", "abbbaabbabbaababbababaaaaaababbaababbabbbababaaab"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b", "abab", "abbbb", "abba", "abaa", "abbba"};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> words = {"ababaababbbbbaaabaabbabababbaaaabaabbbababaa", "abaaababaabbbaabbbabaaabbbababbbbbbbabaababa", "bababbabbbababaa", "abbbabbbaabbbbbaabbbababbbbba", "aabaaaaabaabaabaaaaaaab", "bbabaabaaaaaabaaababaabbbbabbabaaabbaabaaababbb", "bbaaababaabaabbaabaaaababbbbabaabbbbababbabaabbab"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abab", "abaa", "ba", "abb", "aa", "bbab", "bbaa"};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> words = {"aabbababbbbbabbbababbaabbbaabaabbab", "aabaaabbbbbbbabbaaaabaabbb", "baabbbbabaaabaaaabbbaabababbababab", "baabaabbabaabbbabbabaaaaabbbabbaabbbbabbabbbabba", "abbaaabbbabaaa", "bbaabbbababbaaabaaaaaabbbba", "abaabbabbbbabbabaaaabaabbabbbabbababaaabbabaabbab"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aabb", "aaba", "baabb", "baaba", "abb", "bb", "aba"};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> words = {"aaaabbbaaabbbbaababbbaabbbbaababbabbaaaaab", "bbbbbbaaaabbab", "bbbbbbbbaaaaabaaabbaaabaaabaaabaab", "bbbbaaa", "baabaabaabbabababbbabbabbabbaaabaaababbbaabba", "aaababbbabaaaaabbbaaabbabbaaababbbbbbabbbaabba", "aaabaaabbaabbbababbaaabaaabaababbaabaaa", "abaabbaabbaaaabaaabbaaabaaaabbbbabbaaabbaaababbb", "babaabb", "bbbaabab", "abbbbbbbaaabaaababbbbabbbaabbbaabbaabbaaabbaabbb", "babaabaababbabbbbaababbbbaaaabababbaabababbbbaa", "ababbaaaabbbbaaaaabbaaabbbbbbaabab", "aababaaabb", "abaabbabbbbabb", "babbbbbbbaab", "bbabaaabaabbbabaabaab"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaaa", "bbbbbba", "bbbbbbb", "bbbba", "baa", "aaabab", "aaabaa", "abaabbaa", "babaabb", "bbba", "abb", "babaaba", "abab", "aab", "abaabbab", "babb", "bba"};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> words = {"aabbbaababbbaababababbabbaabbababb", "bbbbabaaabbbbabaabaaaababaaaabbbbbabb", "bbbabbbbaabbba", "baaba", "bbbaabbbbaaaaaababaaababbbbbbbbbbabbbbabaaaab", "aababababbbaaaabaaaaabbbaabbbb", "bababaabaab", "babbababababbbbbaaaabbabbbaababbabbababbaaabb", "bababbaaba", "abaabaaababbbababbaabbabaababbbaaabbababb", "ababbbbaaabbbbabababaaabaaab", "babaaaaaabbaaabbab"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aabb", "bbbb", "bbbab", "baa", "bbbaa", "aaba", "bababa", "babb", "bababb", "abaa", "abab", "babaa"};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> words = {"aabbaabaaaaababaabaabbbbabaabbbbbaaabbaaaaaaabaaba", "abababaabbabbbaabaabaabaaaaaaaaababbbbaaaaaabbaaab", "aaaaaabaabbbbabaaababbbaabaaaabababaabbbbbaabbbaab", "aabaababbababbaaaaaabbaaaababaaababaabbababbaaaaaa", "baaabbabaaababbbaabaaababbaabbaaabaaababbaaaabbaab", "bbaabaaabbaababaaaaabbababaaaaaaaaabaaabbaabbabbba", "baaaaaaaaaaaaababaaabbbabbaaabaaabaaaababaaaaaaaaa", "baaabaaabbbbabbbaaaabaababababaaaabaabaaaabababaaa", "babbabaaababababaaaaaaabbabbbaaaaaabaabbbbbabbbaaa", "bbbabbabbaaabaaaaaaaaaababbaabbaabbbabbbaaaabbaaab", "aaabbbababbbaaaabaabbabbbbbbaaaaaaabaaaaabbbaaaaab", "baababaaababbaaaaaaabaababbbaaaaaaababaabaabaaaaaa", "baabaababbabaaaaabaaabaaabaaaabbbababaabbbaabbabaa", "aaaaabbaaaabbaabbabbabbaabbaaababaaaabbbbbbababbbb", "aaaabaaaabbbbaabbaaaaaabbaabaaaaaaaaaaabbbbabaaaba", "babbbbabbbaaababaaaabaabaaababbaaaaabababaaaaabaaa", "abaabababbabaabaaaaaaaaaabbaaaaaabbbababbbabababba", "abbaaabbbbbbaaabaabbabbbaabaaaaaaaaaabbbaaaaabbabb", "bbaaaaaaabababaaaaaabaaabaabbbbbababbbbbbabaaabaaa", "aaabaaaaaaaaaaaababaaaabbaaabaababbbbbbbbbaaaaabaa", "aaababaaabaabaaabbbbaaaaaababaaaaaabaaabaaaaabbbaa", "aaabbaaaaaabbaaaaabaaaaaaaabbaabbbababaaabbbbabaaa", "aaaaaaaaaababbaabbaabbbbabbabaaabbabaaabbaaabbabaa", "aaaabbabbbaaababbbababaaababbabaabaababbbaabaababa", "baababaaaabbabbaabbbbabbaaabababaaaabaaabaaabbabaa", "abbababaaaabababaababbbbbabababbbbbaabbbaabbaababa", "abaaaabaaaabbaaaabaaabbbbbbbbaaaabbabbbaaaaaaaaaab", "aabbbbaaaaabbaaaabababbbaaaaaabaabbabaaaaaabbabaaa", "aaabbbbabaabaaabaabaaaaabaaabaaaabbbbbbbabaabaaaaa", "baaabaabbaabaabbaabaaaaabaaabaaaaabbbabbbabbbbaaaa", "babababbabababbaaaaaaaabaaaabababaaaabbabbaaabaaaa", "abaaababababaaabbababbabbbababbababaababbbabaabaaa", "babababaabaabbaabbbaababbabaaaabaaaabaaabbbababaaa", "aabaabbbbbbaaaababaaaabbababaaaaabbaabbaaaaaabbaba", "aaaaaaaaaaaabbabbabaabaabbbaabbabaaaaaabaaaabbabaa", "aaaaaaaabaaabaabbababaababaaabbbbbbababbaaabbaaabb", "abbaaaaaabbbaaabababaaaaaaaaababbabaaaababababaaaa", "babaaabbbabbaaaabbbbbabaaaabbbabbabaaaabaabbabbbaa", "abaabbbabababbbbaabababaaabbaaaabaabbaaabaabaabbaa", "bbaaaaababaaaabaabbababbbbababbabbaabaabababaaabbb", "baaababbaaababaaaabaabbbabaaaabaabaaaaaaabbbbbbbba", "aaababaaaaabbaabababbbbbabbbabbabaaaabbababbabbbab", "bbabbaaabbaabababaaaabbaaaabbabbbabaababbaababaaba", "abbabaabaabababbabbaabaaabaabbaaaababbaababbabbbab", "aabbababaaaabbabababaabaaaabbabaabbbbbababaabaaaba", "aabaaaaaaabaaabbbaaaaaaaabbaaaabbaabbbaaabaaabbbba", "baaaabbbbbaaaaaaaaaababaabbaaaaaaabbabaaabababbbaa", "bababbaabababbaabbabaababaabaabaaabbaaababbaaabbaa", "bbbabaabbaabaabaabaabbaabbbaaaaaaabbabaaaababaaaaa", "aaabbaaaabaaaaaaabaabbaabbabbaababaabbbbaaaabbaaba"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aabbaa", "abab", "aaaaaab", "aabaaba", "baaabb", "bbaab", "baaaaa", "baaabaaa", "babba", "bbbabb", "aaabbba", "baababaaab", "baabaa", "aaaaab", "aaaaba", "babbb", "abaaba", "abbaaab", "bbaaaaaa", "aaabaa", "aaababaaab", "aaabbaaaaa", "aaaaaaaaaab", "aaaabb", "baababaaaa", "abbabab", "abaaaa", "aabbb", "aaabbbb", "baaabaab", "babababb", "abaaab", "babababa", "aabaabb", "aaaaaaaaaaa", "aaaaaaaab", "abbaaaa", "babaa", "abaabb", "bbaaaaab", "baaabab", "aaababaaaa", "bbab", "abbabaa", "aabbab", "aabaaa", "baaaab", "bababb", "bbbaba", "aaabbaaaab"};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> words = {"baaabababaaababaaabaaaaaababbaaaaabaaaaaabaaabbbaa", "aabaabbaaaaaaaaaaaabaaaabaabbbaaaaabbaaababaaaaaaa", "aaabbbaaababaaaaabaabaaaaaaaaabbaaaaaaaaaaabbbaaaa", "aabbaaaabbaabaabbaababaaaaaaaaaaabaaaaaaaaaaaaaaab", "bbabbaabbbababaabbbaaaaabbaaaaabaaaaaabbabbabaaaaa", "ababaaaaabaaaaababbaaabbaaaaaaaaabaaaaabbaaaabbaaa", "baaaababaabbaaaaabbbaaaababaaaaaaabaaaaaaaabbaaaaa", "aabaaaaaaaaaaababaabaabaaaababbabaaaaaaaaaabbabbba", "abbaaaaaaaabaabaaaabaaaaaaabaaaabaabaaaababaaaaaba", "aaaababaabaabaaabaaabaaaaaaabbbaabaaaaaabaaaaaaaaa", "ababbaaaaaaaabaaaabaabaaaaaaaaaaabaaaaabaaaabbaaab", "aaaaabbbaaaaaaaabbaaabbabaaaabaaaaabbaaaaabaaaaaaa", "bbbaaababaaaaababbababbbbaaaaaabaaaaaaaabbbabbaabb", "aaaabaabbaaabaabbaabbaabbaaabaaabaaaaabaaaaaabbaaa", "bbbaabbaaabbaaaaaabaaaaababaaaabaaabaaabbbaabbaaaa", "bbabbbbaabababbaaaaabbaabaabaaaaabbaaaabbaababaabb", "bbbaabaaabaabaaabbaababbabbbaaaaabaaaaaaabaaaabaaa", "aaaabbbabbaaaaaabaabbaababababbaabaabbaabababaaabb", "aababababbabaaabaaabaaaabababaababaaaaaaaaaabaaaab", "aaabaaaaaaaabbaaabaabaaaaaababaaaaaaaaabaaabaaabba", "aaaaaaaaabaabbabbbaabbaaabbaaabaaaabbaabaaaabbbbaa", "bbaaaaaaaaaaaaaabaaaaaaaaababaaababaabababbabababa", "aaaaabbaabaababaaabbabaabaababbbaaaaaaaaaaaaabbaab", "aabbaaabaaabaaaaaabbaaabaaaaabaabaaaabaaaaaaaaaaaa", "aaabbabaaabaababaaaaaaabaaaaaaaaaaaaabaaaaaabbbabb", "aabbbaaaaaaaaaabaaaabaaabbaaabaaabbbaaaababaaababa", "aabaaaaaaaabbbbbababaabaaaaaaaabaaaaabaaaababaaaba", "baaaaabbaabbbaaaabbaaaabaaabaaaabbabbaaaababaaabba", "aaaabaaabaaaaaabaaaaaabaaaaaaabaaaabbaaabaaaaaaaba", "aabbbababaabababbaaabaaaaabaaabbababbaaaaaaabaaaaa", "aaaabaaabababaaaaaabaabaabaabaaababaaaabbbaabaabba", "aaaaabaaaaaaabbabbaaabaaaaaabaaaaabbaaabaaaaaaaaaa", "ababaaaabaabaaabaaabbabababbaaaaaabaaababaaaaabbab", "bbbaaabaaaababbaaaaabaaaaaaabaabaaaaabaaabaabaaaaa", "baaaaaaaaaaaaabaabbaabaaaaaaaaaaaabbabaabbaabbaaba", "aabaaaaabaaaaaaaaaabaaaaaaaabaabaaaaaabbaaaaabbaaa", "aaaaaaaabababaabaaabaaaabaaabaaabbaaaaaaabaabbaaaa", "bbaaaaaabaaabaabaaaabaaaaabaaababbaabbbaaaaabaaaaa", "aabaabaabaabaabaaaaaaabaaaabaaaaaaabbaaabbabaaaaaa", "aaabaaaaabaabaaaabbbababaaabbaaaaabaaabbbaaaaaaaab", "aaaaabbbaababababaaababaaabbbabaaaaaabaaaaabbbabab", "aabaaaabaaaaabbbaaaaabaabababaaaaaaaabbbaabbbabaaa", "aaababbbbbbbaaaaaaabbbaabbbbabaaaababbbaabbaaaabba", "aabbaaaaaaaaabaaaabaaaabbaaaabaabaaabaaaaaabaaabba", "bbbbaaaaaaaaaaaaabbabbaaaaaaaaaabaabbaabbabbaaabaa", "abaabaaabaaaaabaaaababaabaabaabaabaaaaaaabaaaaaabb", "aabaaaaabaabbabbbbaaaaaaaaaaababbaabaaaaaaabaaaaaa", "babbaaaaaaabbaababbaabbabaabaaaabaabaabaaabaaaabba", "aaaaabbbabaaaaaaaaabaaaaaaaaaaaaaaaaaaabaabaaaaaab", "abaaaabaababaaaaaabbabababbaabbaaaaabbaaabbababaab"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baaab", "aabaabb", "aaabbb", "aabbaaaab", "bbabba", "ababaaaaa", "baaaab", "aabaaaaaaaaa", "abb", "aaaabab", "ababb", "aaaaabbbaaa", "bbbaaabab", "aaaabaab", "bbbaabb", "bbabbb", "bbbaaba", "aaaabb", "aabab", "aaabaaaaaa", "aaaaaaaaa", "bbaaaaaaa", "aaaaabba", "aabbaaab", "aaabba", "aabbbaa", "aabaaaaaaaab", "baaaaab", "aaaabaaabaa", "aabbbab", "aaaabaaabab", "aaaaaba", "ababaaaab", "bbbaaabaa", "baaaaaa", "aabaaaaabaaa", "aaaaaaaab", "bbaaaaaab", "aabaaba", "aaabaaaaab", "aaaaabbbaab", "aabaaaab", "aaabab", "aabbaaaaa", "bbbb", "abaab", "aabaaaaabaab", "bab", "aaaaabbbab", "abaaa"};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> words = {"aaaaaaaaaaababaaaaaaaaaaaaabbbaaaaabaaaabaaaaaaaab", "baaabaaaaaaaaaaaaaabbaaaaaaaaaaaaaaaabaaaaaaaabaaa", "babababaaaaaaaaaabaababaabaaabbaaaaabaaaaabbaaaaab", "aaaaabaaabaaababaaaaaabaaaaaaaabaabbaaaaabaaaaabaa", "aaaaaaaabaaaaaabbaaaaaaaaaaabbaaaaaaabaaaaaabaaaba", "aaabaaaaaaaaaaaaaaaabaaaaaaabaaaaaaaaababbaaaabaaa", "aaaaaabbabaaaaaaaaaaabaabaaaaaabaaaabaaabaabbaaaaa", "aaaaaaabaaabaaabaaaaaaaaaabaaaaaaabaaaabaaaaabaaab", "aabaaaababaabaabaabaaaaabababaaaaaaaaaaaabbbaaaaba", "aaaaaaaaabaaaaabaaaaaaaaaaaaaaabaaabaaaabaaaaabaaa", "abbaabaaabaaabaababaaaaaaaaaaaaaaaaaabaaaaaaaaaaab", "aaaabaaaaababaaabaabaabaaaaaaabaaaaaabaaaaaaaaabaa", "aaaaaaaaaaaaaaaabaaaaaaaaaaabaabbaaaaaabaabaaaabaa", "baaabaaabaaaabaaaabaaaaaaaaabaaaaaaaaaaaaabaaaaaab", "aaaaabaaaaaaaaaaaaabababaaaaaaabaaaaaaaabababaaaaa", "bbaabaababbaaaaaaaaaabbaaaaaabbaaaaaaaaabaaaaaaaaa", "bbbaaaabaaaaabaaaaaaaaabaaaaaaaaaaaaaabaaaaaaaaaaa", "aaaaaaaaabaaaabaaaaabaaabaaabaabaababbabaaaabaaaaa", "bbbabaaaaaaabaabbabaaaaaaaaaaaaaaaaaaaaabbababaaab", "aaaaaaaaaaaababbaaabaaaaaaaabaaaaaabbaaaabbaaaaaab", "aabaaaabaabaaabaababbabaabaaaabaaaaaaabaaaaaabaaaa", "aaaabababaaabbaabaaaaaaaaaabbabaaaaabaaaabaaaaabba", "aaabaaabbabaaabaabaaaabbaaaabbaaaaaaabaaaaaaaaaaaa", "aaabaabaabaaaaaaaaaaabaaaaabbaaababaaabaaaaaaaaaaa", "aabaaaaaaabaaaaaabaaaaabbaababaaaaaaaabbaabbaaaaaa", "aaaabbaaaabaabaaaaaaabaaaabaaaaabaaaaaaaaabaaaaaaa", "aababaabbababaaaaaaababaaaaaaaaaaaabaabaabaaabaaaa", "aabaaabaaaaabaabaaaaaabaaaaabaaabbaaaaabaaaaabaaaa", "bbabaaababaababaaabbaaaaabaaaaaaaaabaaaaaaaaaaaaaa", "ababbbbabaabaaabaaaaaaababaaaaabaaaabaaaaaaaaabaaa", "aababaaaaabaaaaaaaaabaaaabaabaaaabaaaaaaaaaabaaaaa", "abbaaaaaaabaaaababababbaaaaaaaaabbabaaabaaaabaabaa", "aaaaaabbabaaaaabaaaabbabbbaaaaaaaaaaaaaaaaabaaaaaa", "aaaaaaaaaaabaaaaaaabaaaaaabbaaaaaaaabbaaabaaaaabaa", "abababaabaabaaaaaabaaaaaaaaabbaaaaaaaabaabaaaabbaa", "baaaaaabbabaaaaaaaaaaaabaaabaaabbaaaaaaaaabaaaaaab", "babaaaababaaabaaaaaaaaabbbbaabaabaaaaaabaaaaaaaabb", "abaaabaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaabaababaaaba", "aaaaaabaaaaaaaaabaaaaaaabaaaaaaaabbabaaabaaaaababa", "aabaaaabaaaaaaaaaaaabaaaabaabbaabaaabbbaaaabaaaaab", "aaaaaaaaaabbaaaaaabaaaaaaabbaaaaaaaabaaaaaaaaaaaba", "aaaaaaabaaaabaaaabaaaabaaaaaaaaaabaaaaaaaababbbaaa", "aaababaaaaaaaabbaaaaaaaaabaaaaaaaaaababaaaabaaaaaa", "aabaabaaaaaaaaaaaabaaaabaaaabaaaaababaaaabaaaaaabb", "abaaaaaaaabaaaaaaaaaaabaaaaaabaaabaaaabaaaabaaaaba", "bbabbabaaabaaaaababbbabaabaaaabaabababaaaaaaaaaaaa", "aaaaaaaababbaaaaaababaaaabaaaabaaaaaabaaabaaabaaaa", "abbaaabaaaabaaaaaaabbaaaaaaaaaaabaaaaaaabaaaaabbaa", "baaaaaaaaabaaaaaaabbaaaaaaaaaabaaaabaaaaaaaaabaaba", "baaaabaaaaaaabaaaaabbababaaaabaaaaaaaaaaaaabaababa"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaaaaaaaaaabab", "baaabaaaa", "babab", "aaaaabaaab", "aaaaaaaabaa", "aaabaaaa", "aaaaaabbabaaaaaa", "aaaaaaabaaab", "aabaaaabab", "aaaaaaaaabaaaaa", "abbaab", "aaaabaa", "aaaaaaaaaaaaa", "baaabaaab", "aaaaabaaaa", "bbaa", "bbbaa", "aaaaaaaaabaaaab", "bbbab", "aaaaaaaaaaaab", "aabaaaabaab", "aaaabab", "aaabaaab", "aaabaab", "aabaaaaa", "aaaabb", "aababaab", "aabaaab", "bbaba", "ababb", "aababaaa", "abbaaaa", "aaaaaabbabaaaaab", "aaaaaaaaaaabaa", "ababa", "baaaaaab", "babaa", "abaaab", "aaaaaaba", "aabaaaabaaa", "aaaaaaaaaab", "aaaaaaabaaaa", "aaabab", "aabaab", "abaaaa", "bbabb", "aaaaaaaabab", "abbaaab", "baaaaaaa", "baaaab"};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> words = {"aaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaabaabbaaaaba", "aaaaaabbaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaa", "aaaaaabbaaaabaaaaaaaaaaaaaaaaababaaaaaaaaaaaabbbba", "aabaaaabaabaaaaaabaaaaabaaabaaaaaaaaaabaaaaaaaaaaa", "aaaaaaaaaaabaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "abaaaaaaaaaaaaaaabbaaaaaaaabaaaaabaaaaaaaaaaaaaaaa", "aaaaaaaaaabaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaabaaaaaaaaaaaaaaabaaaaaaaababaaaabaaabaaaaaaa", "aaaabbaaaabaaaaaaaaaaaaaaaaaaaaaaaabaaaabaaaaaaaaa", "babaaaaaabaaaaaaaabbaaaaaaaaaaaaaaaaaaaaaaabaaaaab", "aaaaaaaaaaaaaaaaaabaaaaaaaaaabaaaaaaaaaaaaaababaaa", "aaaaaaaaaabaaaaaaaaaaabaaaaaaaaabaaaaaabbaabaaaaaa", "aaaaaabbaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaabaaaa", "aaaaaaaaaaaaaaabaaaaaaaaaabaaaaaabaaaaaaaaaaaaaaaa", "aaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaababaaaaabaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaa", "abaabaababaaaaaaaabaaaaaaaaaaaaaaaaabaaaaabaaaaaaa", "aabaaaabaaaaaaaaaaaaaaaaaaaaaabaaaaaaabaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaabaaaaabaaaaaaaaababaaaaaaaaaaa", "aaabaaaaaaaaaaaaaabaababaabaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaabaabaaaaaaaaabaaaaaaabbaaaaaaaaabaaabaaaa", "abaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaabaaaabaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaabaaaaaaaaabbaaaaaaaabaaaaaaaaaaaaaaabaaaaaaaa", "aaabaabaaaaaaaabaaaaaaaaaabbaabbabaaaaaaabbaaaaaaa", "abaaaaaaaaaaaaaaaaaabababaaaaaaaaaaaaaaabaaaaaaaaa", "aaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaababaaaaaaaabaaaab", "aaaaaabaaaaaaaaaaaabaaaaaaaaaaaaaaaabaaaaaaaaaaaaa", "aabaaabbaaaaaaaaaaaaababaaaaaaaaaaaaaaabaaaaaaaaaa", "aaabaaaaabaaaaabaaaaaaaaaaaaaaaaaaaaaabaaaaaabbaaa", "aaaaabaaaaaaaaaaaabaaaaaaaaaaaabaaaaaaaaaabbaaabba", "bababaaaaaaaaaaabaaaaaaaaabbabaaaaaaaaaaaaaaaaaaaa", "aabaaabaaaaaaaaaaaababaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaabaaaaaaaaaaaaaabaabaaabaaaaaabaabaaaaaaaabaaaaa", "aabbaaaaaaaaaabaaaaaaaaaaaaaaaaaabbaaaaaabaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaababaaaaaaaabaaaaaaaaaaabaaaaaaaaaaabaaaaa", "abaaaaaaaaaaaaaaaabbaaaaaaaaaaaaaaaaaaabaaaaaaaaaa", "aaaaaaaaaaaaaaaaaabaaabaabaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaabaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaabaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaabaaaaaabaaaaabaaaaaaaaaaaaaaabaaaaaaaaaaaaabba", "aaabaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaabaaaaaabaaaaaaaaaaaaaaaaaaaaaaaa", "aaabaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbabaaaaaabaaaaaaaaaaaaabaaaaaabaaaaaaaaaaaaababba", "aaaaaaabbaaaaabaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaabaaabaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaab", "aaaaaaaaaabaaaaaaaaaabaabaaaaaaaabaaaaaaaaaaaaaaaa"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaaaaaaaaaaaaaaab", "aaaaaabbaaaaaab", "aaaaaabbaaaab", "aabaaaabaab", "aaaaaaaaaaab", "abaaaaaaaaaaaaaaab", "aaaaaaaaaabaaab", "aaaaaabaaaaaaaaaaaaa", "aaaabb", "babaa", "aaaaaaaaaaaaaaaaaabaaaa", "aaaaaaaaaabaaaaaaaaaaa", "aaaaaabbaaaaaaa", "aaaaaaaaaaaaaaabaaaaaaaaaab", "aaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "abaab", "aabaaaabaaa", "aaaaaaaaaaaaaaaaaaaab", "aaabaaaaaaaaaaaaaabaabab", "aaaaaaaaabaa", "abaaaaaaaaaaaaab", "aaaabaaaab", "baaaab", "aaabaab", "abaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaabaaaaaaaaaaa", "aaaaaabaaaaaaaaaaaab", "aabaaabb", "aaabaaaaab", "aaaaab", "babab", "aabaaaba", "aaabaaaaaaaaaaaaaabaabaa", "aabb", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaabab", "abaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaabaaab", "baaaaaaaaaaaaaaaaaaaaaaaaaab", "baaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaabaaaaa", "aaabaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaab", "baaaaaaaaaaaaaaaaab", "aaabaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaa", "bb", "aaaaaaabb", "aaaaaaaba", "aaaaaaaaaabaaaaaaaaaab"};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaad", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaae", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaf", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaag", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaah", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaai", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaj", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaak", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaal", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaam", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaan", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaao", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaap", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaq", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaar", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaas", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaat", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaau", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaav", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaw", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaax", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaay", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaad", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaae", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaf", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaag", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaah", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaai", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaj", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaak", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaal", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaam", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaan", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaao", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaap", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaq", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaar", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaas", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaat", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaau", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaav", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaw", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaax", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaay", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaad", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaae", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaf", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaag", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaah", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaai", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaj", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaak", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaal", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaam", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaan", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaao", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaap", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaq", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaar", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaas", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaat", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaau", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaav", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaw", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaax", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaay", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaad", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaae", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaf", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaag", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaah", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaai", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaj", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaak", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaal", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaam", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaan", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaao", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaap", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaq", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaar", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaas", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaat", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaau", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaav", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaw", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaax", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaay", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz"};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> words = {"q", "r"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"q", "r"};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> words = {"y", "xy"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"y", "x"};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> words = {"x"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"x"};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> words = {"oneword"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"o"};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> words = {"azazazazazzazazazazaazazazazazzazazazazaazzaazzaib", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaic", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaid", "azazazazazzazazazazaazazazazazzazazazazaazzaazzav", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaif", "azazazazazzazazazazaazazazazazzazazazazaazzaazzajb", "azazazazazzazazazazaazazazazazzazazazazaazzaazzajc", "azazazazazzazazazazaazazazazazzazazazazaazzaazzajd", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaje", "azazazazazzazazazazaazazazazazzazazazazaazzaazzar", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaab", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaac", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaad", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaae", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaaf", "azazazazazzazazazazaazazazazazzazazazazaazzaazzabb", "azazazazazzazazazazaazazazazazzazazazazaazzaazzabc", "azazazazazzazazazazaazazazazazzazazazazaazzaazzabd", "azazazazazzazazazazaazazazazazzazazazazaazzaazzabe", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaq", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaeb", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaec", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaed", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaee", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaef", "azazazazazzazazazazaazazazazazzazazazazaazzaazzacb", "azazazazazzazazazazaazazazazazzazazazazaazzaazzacc", "azazazazazzazazazazaazazazazazzazazazazaazzaazzacd", "azazazazazzazazazazaazazazazazzazazazazaazzaazzace", "azazazazazzazazazazaazazazazazzazazazazaazzaazzacf", "azazazazazzazazazazaazazazazazzazazazazaazzaazzadb", "azazazazazzazazazazaazazazazazzazazazazaazzaazzadc", "azazazazazzazazazazaazazazazazzazazazazaazzaazzadd", "azazazazazzazazazazaazazazazazzazazazazaazzaazzade", "azazazazazzazazazazaazazazazazzazazazazaazzaazzadf", "azazazazazzazazazazaazazazazazzazazazazaazzaazzafb", "azazazazazzazazazazaazazazazazzazazazazaazzaazzafc", "azazazazazzazazazazaazazazazazzazazazazaazzaazzafd", "azazazazazzazazazazaazazazazazzazazazazaazzaazzafe", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaff", "azazazazazzazazazazaazazazazazzazazazazaazzaazzagb", "azazazazazzazazazazaazazazazazzazazazazaazzaazzagc", "azazazazazzazazazazaazazazazazzazazazazaazzaazzagd", "azazazazazzazazazazaazazazazazzazazazazaazzaazzage", "azazazazazzazazazazaazazazazazzazazazazaazzaazzagf", "azazazazazzazazazazaazazazazazzazazazazaazzaazzahb", "azazazazazzazazazazaazazazazazzazazazazaazzaazzahc", "azazazazazzazazazazaazazazazazzazazazazaazzaazzahd", "azazazazazzazazazazaazazazazazzazazazazaazzaazzahe", "azazazazazzazazazazaazazazazazzazazazazaazzaazzahf"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"azazazazazzazazazazaazazazazazzazazazazaazzaazzaib", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaic", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaid", "azazazazazzazazazazaazazazazazzazazazazaazzaazzav", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaif", "azazazazazzazazazazaazazazazazzazazazazaazzaazzajb", "azazazazazzazazazazaazazazazazzazazazazaazzaazzajc", "azazazazazzazazazazaazazazazazzazazazazaazzaazzajd", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaje", "azazazazazzazazazazaazazazazazzazazazazaazzaazzar", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaab", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaac", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaad", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaae", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaaf", "azazazazazzazazazazaazazazazazzazazazazaazzaazzabb", "azazazazazzazazazazaazazazazazzazazazazaazzaazzabc", "azazazazazzazazazazaazazazazazzazazazazaazzaazzabd", "azazazazazzazazazazaazazazazazzazazazazaazzaazzabe", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaq", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaeb", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaec", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaed", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaee", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaef", "azazazazazzazazazazaazazazazazzazazazazaazzaazzacb", "azazazazazzazazazazaazazazazazzazazazazaazzaazzacc", "azazazazazzazazazazaazazazazazzazazazazaazzaazzacd", "azazazazazzazazazazaazazazazazzazazazazaazzaazzace", "azazazazazzazazazazaazazazazazzazazazazaazzaazzacf", "azazazazazzazazazazaazazazazazzazazazazaazzaazzadb", "azazazazazzazazazazaazazazazazzazazazazaazzaazzadc", "azazazazazzazazazazaazazazazazzazazazazaazzaazzadd", "azazazazazzazazazazaazazazazazzazazazazaazzaazzade", "azazazazazzazazazazaazazazazazzazazazazaazzaazzadf", "azazazazazzazazazazaazazazazazzazazazazaazzaazzafb", "azazazazazzazazazazaazazazazazzazazazazaazzaazzafc", "azazazazazzazazazazaazazazazazzazazazazaazzaazzafd", "azazazazazzazazazazaazazazazazzazazazazaazzaazzafe", "azazazazazzazazazazaazazazazazzazazazazaazzaazzaff", "azazazazazzazazazazaazazazazazzazazazazaazzaazzagb", "azazazazazzazazazazaazazazazazzazazazazaazzaazzagc", "azazazazazzazazazazaazazazazazzazazazazaazzaazzagd", "azazazazazzazazazazaazazazazazzazazazazaazzaazzage", "azazazazazzazazazazaazazazazazzazazazazaazzaazzagf", "azazazazazzazazazazaazazazazazzazazazazaazzaazzahb", "azazazazazzazazazazaazazazazazzazazazazaazzaazzahc", "azazazazazzazazazazaazazazazazzazazazazaazzaazzahd", "azazazazazzazazazazaazazazazazzazazazazaazzaazzahe", "azazazazazzazazazazaazazazazazzazazazazaazzaazzahf"};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> words = {"asdc", "fdsa"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "f"};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> words = {"bababaaaaa", "baaabaababa", "bbabaaabbaaabbabaabaabbbbbaabb", "aaababababbbbababbbaabaaaaaaaabbabbbaaab", "baaaaabaababbbaabbbabbababbbabbbbbbbbab"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bab", "baaab", "bb", "a", "baaaa"};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> words = {"aaab", "aaac", "aaad"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaab", "aaac", "aaad"};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> words = {"oneword"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"o"};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> words = {"aaab", "aaac", "d"};
    WordAbbreviation* pObj = new WordAbbreviation();
    clock_t start = clock();
    vector<string> result = pObj->getAbbreviations(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaab", "aaac", "d"};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22080447&rd=12174&pm=8310
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
 
class WordAbbreviation {
public:
  vector <string> getAbbreviations(vector <string>);
};
 
vector <string> WordAbbreviation::getAbbreviations(vector <string> w) {
vector<string> a;
  for (int  i = 0; i< w.size(); ++i) {
    int k = 1;
    for (int j = 0; j < w.size(); ++j) {
      if (i != j ) {
        while (w[i].substr(0,k)==w[j].substr(0,k))
        ++k;
      }
    }
    a.push_back(w[i].substr(0,k));
  }
  return a;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/