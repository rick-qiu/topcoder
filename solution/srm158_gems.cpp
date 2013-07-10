/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1767
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

class Gems {
public:
    int numMoves(vector<string> board);
};

int Gems::numMoves(vector<string> board) {
    int ret;
    return ret;
}


int test0() {
    vector<string> board = {"ABC", "ABC", "BAD"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
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
    vector<string> board = {"ABB", "BAA", "ABB"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {"ABA", "BAB", "ABA"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> board = {"ABC", "DEF", "GHI"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> board = {"ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4704;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> board = {"JGBBDTGRERJIJRGATPHTJA", "FHGAQQAERQYDQGEEJEDCFF", "EHQYJCPTQFDIYYAHDPETPI", "HCPJDFTEJECCRJAJPBPEDQ"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> board = {"QKGQHGUVFKGJVUJQVHV", "FXQGXUVKQJKKVFJXJFU", "GXGXUVGXUQHUQXQGHVH", "UFVGHKQHVFKFVUQJKKQ", "QHXHJVJXVXKUHJJXJJF", "HGFJJUXKJKGHFXVVKKF", "VJUXQJUQFHFUVKFUHJH", "UVUKGJJUJQHQKXGJQKX", "XUVVXKHKFVHXJHJGUKF", "JHFFJQJVGGFQVVQFQGV", "UKJJQXUJUUKQJJHQHQJ", "JXQXGHVVXHHVHHGKJXQ", "UJJGHFKUGUVQQJJVVKF", "HGQQXVUGGXXHKKVFKGQ", "JHUQJVUKUFGKQUXVUUK", "XFQXHUQVHUKHKXQHJKU", "HGJVJGXVJXXKHHXFGHK", "XQHHGGXJGQQVKFKFUQG", "UQHJGVGQVFJVUKQXQXX", "GGQHXKXQFUFFVXFVUUQ"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> board = {"XNUPPEXPUUPAWALXNAPTPNUAEXUPA", "ANWTXWXWEUMMLNUMLWXUMXNEWWPXU", "TAMALXUMLNWTUALEEWTTLLEAAPWXL", "TTXUPLLTULUANNWWTEUTTLAMAPWEX", "NMUPTTNLUUPXUTWTLXTLUNXPPNXXE", "MATMUTXXWEUUAMTPLNTPTLTUNMNNA", "PLENLXXUTUNEEAWWTMLTAAXXEPLEW", "MELWTTMPAULTUALAEUAPEXWMLTPWU", "NLAPPUMAUNETXEAUTMWUMNLMWELNM", "LWEXMLANXNXALXPNWWXAMWTUAULEN", "XUNXXWMNLALXNLNAXWWXPNTXNUTTM", "UEATWELPXAUMNXUXEATPMWXLANWMM", "LMNUPUAWXUMPTAELNXEXMUPMUXNLA", "ELANAETTMAPNUTPAELUUNAWLPPUUM", "LMAUNETMWUWEPTEXAXTWLELAPNXML", "AWUXWXAPUWPUTUMXTXPPMXUXTTLNX", "UXPMXTANPPWAEPWWLNMTUNUXAAPXW", "MEWWEXLENMPTMUEUPELMATXMANENL", "PNWLUMNWXTXALMWNWNEPXXTWEAWLX", "UAXPPTNTLMEATXTEXLELTENEPUWWT", "XXNNMXPTNXAXPMXWLWWLXWNWATUWX", "WWUWTEXLMLUTTAELPMXPMTUNLPTLA", "UEAALTWNXPLNUULEELMMPAEMNMNLN", "MNTLUPAAULPMPNUEUXTLATEXNLPUU", "TNXLAUNNUWEWMNWXUETPXNAUTXWPP", "UTEUTEMUENNENTNNPNNLNPTWXAPWM", "NAUAUXAELPWEPNPEWWPENLXWUNMLU", "PNUWLUPALUXXNTUTAULXPMEPPEXMX", "TNLWEPNWXTNMNWPWEUAPMXEWPUEEN", "UWEPTTUENTNXTNMAATEWULAXNTXLP", "MTUENPLUTAUMLWETLEMTAANUENXXP", "EUAPEAEAEEUPANPEXTMLWEALAUNTN", "NPUPXLWMWXAMWAENTUEMXXMWUMUTT", "EUTXAAEMAUTAPPAWTLXTPUPNPWWLW", "LEUMXEXPTPUMUWMXNTLMWWELXNNUL", "PTNMXPTEEMPPXMLEENUXUANMWWMTP", "AXLXMTNXEPMUPANXPPNMUUMANAXAP", "MNUNUWXLMUUPXNUAXNAATTLNUXMMN", "TWNAEPXUATPAPWNWLTEMUAWMXNTXM"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 147;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {"LAPONLLNLBPAPPBBAALNBOOLLNBLBBAPPBBAPLBNBPNNPLNBP", "PNLBNBPNBLLPALNOLNNBNNPPNABNOBNLNLPOOBPLLPPLPAAOB", "OBOBAPNALAPLNLLNNLPLOOLLNBAPBLONBPBPPLLPPNBNANNOP", "AOOPAOOPABONBPLBAOLAPNLAANNLLNANNLBAPLBLBPBNAPALL", "ONPNPPLPALOBOONLLPOPLAABPNLLNNBPPLLOBPBLOALBOALBN", "BLOBLNPAOPALBNNOPNBPAONBBAAOBAOALNAPBPNNBONALAAOB", "OABLAPPNLOAPNALNLAAOOLPONLLALLNLOBPNNONOPNAANOONA", "OBAAONBNLBOBLLBPOONBBLANNBOOAALPPOBNPBPLBNLNAOPNB", "BPPBAAPANNLALAALBPAPLALLANBBOBPPNPPBPABNLABPPLALO", "NPLNOOANALOPBNPPOBLAPPOLALBPAPBNAANNBBLBOONBPLAPN", "NAOALLPOBLAOPLNBLNANBOPPBNABANOLOALLOOANBOBBOPOAP", "POAOLBPPBBOAPLPLPNLOAPAPOLLPOPNBALNNLOBLNNLAPLNLB", "LPBONLBAAOOAANBNLLPNPLOOLBNPOOBBPNBOLPLOOBAABLPNA", "BOLBNABBABLLOABAOOLAAOPBBLPNPBBPNPBBNLBANNPLBOBOB", "AOPOPLNPNOOBAANANPPBNLOPBNNPPLAAOOPAOPAPOALBLOLLB", "LLPOOLLALLNAONPPBOAPPBLBLLPBBOBLLONNOBAPNPNOBLBBA", "PLNBPABBLLBAOOPBPOOLOPNONLBOAPLALLNOPNBAOOBAOPNPP", "BNPLLOBANNLPABBABNBLNPNNOBBAPLNANOOLABALPONLNBLNB", "NBPOOLNBOPNAOAOALBNNPNOLLANLNLBBAAOPLABBPPLPAOPNB", "OPAANOOPPBNNAPBONBALBPBPPBANOBLPNAPBABOOLBLBNBLPN", "AAPONOOBNALBLNOPPANBLLNOOLLOPLNBAOOLABLLBPNAOPPNN", "OOLOLNPBAPNOPOBOONBAAPBNPAOOLLOANAONNPPBNNBAPPLLP", "OABLBOBPOAANBONOALAPLLNPLOBLNAAONLPLOOAPBOPPOBNPB", "LABAPPBAPPNAOLPBNAPLLONPOBBABNANOLOPNABPOLONALBLL"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 368;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {"CEQB", "ICBY", "BCWY", "HECW", "QQWC", "IHHQ", "CCYU", "IEUE"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
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
    vector<string> board = {"VSFVHHFVFSVSVVFSFFSHSFS", "SSVHHVHSHFSSFHSSFSFSFSS", "VFSFVSHHFFSHSVHFSHSHHFV", "SSVSHSSHVHVFVHFFSHSHFFV", "SFHVFFVSSFVFFSVVHVVFHSF", "VSHHVVHSVSSVHVSVHHVVHFF", "SFFHHVSVVHSSVHHFFSHFVVH", "HVVFSHSVHVHSVHFHFSSVVSH", "SHSVHFVHFVVHHFFSSVSVFVV", "SFFSHSHFSHHFSFVHHSVSFSF", "VVHSFSSVSSVVSSHFSSVFSSF", "HFSFSHVSVSHFHVFVHVHFHVH", "SFVSHSSVFVFSVHSVFVFSFHH", "VHSSHFSHVVSHHVSHSFVSSVF", "SSVFVFVFVSHVSHHVFSSVFFV", "SSVVHSHHFVVFHVFHSFFSFHH"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 213;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {"IFTOHGZQVOYPQNZWEHSBECWVIHJGRJNDMZV", "CBDZMIRTBFWPSFIWBPZQVFCTACLQPWZCALS", "QAICTNZGIIBIPSEHVFCHWJCKHVPYHSTHISX", "MOSPFDNSDQTCSBBKZCJPGFEDBLGBDQOHOJR", "EHPMJPUFPNANVYFRGNSBXANNFABXBTSLMYB", "WMGPXXNURZACYSVBELKDHRPJRHZUAUHCGIY", "FFCVEGJQPWOSEIYFTIWSPSJPXYZOITFBUNT", "QKEUGBQPMAQENRWQSBTHISZUSQYEMYFYTDT", "HRIPSUACVUATMZBXRUIWOPFFCBULOPEKJOG", "VSYKMWPNOKDZCWUMQCXXSYLRQAALLRHWBNC", "LZCMFOBICQGMGNQMCSDNHTLBLFARQNVZWZO", "HCQRGXWVMXVDFZQTHKMOQIEAZDRHCXZTEMY"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {"MUINOJUJRRUJNNPUJMJMJBBRMMNPJIJIPMNMOJNOUPR", "IPBUBPJIOBJBUPJOIJPJUBJNBBIJIMJINRIMUPNUPNJ", "JNPMNPRNNMPJBRBPPMPUUPBBPJIMORPPBMUPBPMUMUP", "OIJIPRRONUJPMMBIRPOMJJBPIJJRBMUJOINNRMPJJMM", "OBMPBIINMUBIPMMNOONNBBOPOUNUUBMIJNPUBRNNUIO", "BJBROOMBUNINJUBUIMBOJBPNBJIOPINNRNRUJOJRNNB", "NIOONUIMBMORPMMUNRUMMOBONNPRNOJPUPINIIURUOP", "JNNMMRBUPMUPOUPPRMMIMPBJBONBPUJBJUNOUROUUNN", "UMMUOJNNJIMBPMMOMNPUBIJBMORBURPROUIJNIOBNUM", "UPJBJMPPUBUBUBURRIRRIIPIOIBMPBJNJPRUIPBBONO", "BJNBNPBPRMINROMIMPRMPNBMUBJBMNJBURNRJJINRUO", "RMRIMJONMNMMOJPPNOBJNOPROPOURJBBJOPJORIRIJB", "JNMBJPNUBRRBUIOPNRBBPUIPPMNRPRNRBJRMIBNIJOR"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 89;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> board = {"AHQPTJPGTAQVBBLP", "ABQGGSBLBPQOOVOG", "OLVSVHGBSAJABJPP", "QABJHJAQAOSTBQTB", "VVQLLTHJJHBHPHGV", "VHVJVVHBBGQVVBQQ", "ASSQTJSTAPVAPPHV", "AOAGOTVLVQJHAJPV", "GTSATOAGBHQBOATJ", "LHQLPALQBSSBLHGJ", "GAOJBOOPPOPSQJBG", "PHPTAHQJVTOGAHPS", "JOVGBBPTLQPLAGOB", "LOSVJGOQPBHABPGV", "HJTTAAGSHTHPJQTL", "HPPHQGJBJOQTPOQH", "AJVQLOBGOAQQOOJB", "OVPJQTVPGLJSQPLB", "BPSBPBLVSTPQPVVG", "VSLPGPTLQJLOJTJS", "SVGVLOSBTTVHLPJH", "SBSVGBHAGGHSHTQQ", "QJOLVTHJJHQHLSPG", "OTSPSHVPPHBTQBOT", "PPTLTPJTJGOJLJVS", "JTAJBGTSABOJASVO", "LTAVLBJQGGTHPOGO", "PHJGOVHPHOVOJGHJ", "LTPABVQAALHLJGBQ", "HOOVHGJAABOSHAJL", "TVAVVTVOTLAGOVAL", "LHTQSPVGVJGQSHHB", "APQVHOOLPHGVBLVB", "HGAJVSLBJLLPJHGT", "BOVLLPGVOSTBVGVT", "HTAVVTVLBLAAJQQB", "LQOOALPQLPOOLLAJ", "VBVASAATOOJTJQGG", "SHHLPLQHHJBHGVGB", "OGAHOPLJABQOJQBQ", "LOATLBQJBLQTVLVO", "GGPVTBBPSHJPPTOO", "PLLHJHSOHAGASASJ", "VTVSLABLJAJLVHPB", "TOOPLBOHHSTSTLAB", "LSJGQSAOGOPOAOVO", "TJSQGABGGJGBOABS"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> board = {"DFFAEAHCICGEIEHIAFEGFFCFGZDGZMKMMFGII", "FAKGGIKMCZFMEHAZAGEHCHFGZZKMZAEFHGZAM", "HEADGIZFAZGDEZGCGIDMHGHKDGMIDHMHKKFZC", "HFIGMCMZZKDCZZIKGKAEGZAZAZIIKCIEDFMAZ", "ECMEGKMIGFDFCKDKMKDZDZGECMKCEAIACFHFA", "DCHIGDGHFDIFMCMCDHMCDIIEGMKFHAGDFADEH", "AICDAMIFEHKHAIMEGFFEHKIMGDHKHZGZAMAIK", "HMFGECAMHCIEGKFAAMZAZGZEDFGMCEIMFCFIZ", "FICMDHKAFEEMIACGFDFKCGDICMEDDFIGAAKEA", "CACAMMZZHHCGFEGCGZZAHAFMHFZMHMFHGKAMA", "KDKGHECZDKCDKIAZCEZKACAHKDDIZKDFHAMDZ", "MFKEKCGCFIEHEHDEEIKEZEFHAHEIGMGDCKGHG", "IIHFHAKKCFKZIZEMZAZDGEFZAIIKHGZHAAEEH", "ZEHDKGIHEKEGFFDEGZMDHIKICGGCKZIHZDHIC", "FDGDZAZMEHEDDHDEEFGGAGAAGHKECMCAHIKIC", "IFAZCHADFHGGDZAMZCZGDAEFMHCZCACEDGGHH", "ZDFEMGEKFZDCEDGHZAIKHHIFAIGAKAEKEGIMK", "DCMIAIIMIGMEAKAHHCGFCDIGZIIZHKAKCZFDI", "CFACMZMHMGIHKIZDKHKEHKAAICAEMGIEEMFHD", "KFEGKADKZKEGKAMMAIAKHDMHAECGEEKADZKGD", "KMCGECDCGGMIEKCEAMEZEDKMDEEFKFMFZKGEZ", "MMCZKHIMIKEIEGMDKDFZGIFEFHHKHHCCDDKDH", "DZAZIMHFIIMHHCGHEZIKDAKMHADZKMZCFGGZF", "HKHEECGZMIMIZEFIEGHFEZKAADEIGGHMACHDA", "KMCHHEFFMFFZDZMFGFIZZGICGEEGMDIEHHAIA", "KECFDGGDCFZZFHAMFIMKCDKZDAGHFZEAHMCAD", "DKFICZZIFIHCIECAAKMHHFMKGCGMAZDAGICHI", "CCGFCFIEHCFHKFHGFEDHCZFADHMHZEMMDFFEZ", "IIACMDDZEDCEEAFDCDIAFIFIHACHZGICAFZEH", "DCZDGZZFIIHFCZDMKEIEIMKCEGCGGKDKDICGD", "HDICIAGGCACMZHKZEDKDZKKFAAFIZAMHDZFDZ", "ZGKZKCMDEGFAHCMGMHFGECAZMEEHMKFIMCKGK", "MACHGFGMIGHEKEHDKAMZZCAEEGZFDECKCHEAE", "ZEIFAAZAGCEAGAKMZMCDEFEMKZGHDDMZCGDGK", "ZGFFMIIHGACEAFFDDZZEEAKMZHGDMZHZFZICC"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 127;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {"QYFDRFVUNNXYEPHWYKTSGFEFQPCUJPQLKLZLOYNJUJJWJUHO", "GKAGHGTBIHHJTOAXPYTYPNOFWFDIZEKAIPSOZKKIUPOLLZNL", "OFSOMLDVLBHMYTUKMIPVTNDWFMYETSAAMGZQQCESBMUXPZTJ", "RHCAIXPDFUYWEXGSBQHSGRCTBBEOZJLSXJQYXZZDWUGWVBNE", "EVLNJDFEUKNFYAFADXOCUXDQLMVAGSZOSCSWZBWOAWMNIWDX", "DYESCBDMMBHPHRFVYDHMGISZIXJZTNBOSRSGETDXGZAQDLZV", "UNQQWTHUUVUOEQWXULLKMFFXAUXIGVDUOEFSZTUPALFBBIMC", "AXSUJABSGWSXZOPQXQPGWBGBKYSMLTYTLCLQEGZDXLOETNUR", "CBEAUGBUCQRZMPWNWPLWBHLTHFGZLZMTWHNNBYCZRUVVHPAD", "FHJSWCCPXWPQXEIQVMRZQUUXEEFMDVTHAOEHDTQAKJXBCNKF", "VHRJNIPGQITWSHXRLVSRLFNLTUQLGCPWLAUWVPIIFAXXTEAC", "SGGZUUBQWSMUIWWFTTUTDGSSGFDAJKNMOINZDTHETZKBOUAY", "BNZPTOGHQZOXMZKXPRRCCPROGMOCRLDRWOOSVTZNBVAQXRII", "LNFAKJTWZEBFZXHQKMSSHMRLSNEUASDIKJJDFZGFYKMNTUTN", "OSHAZBPFOMBFNOWNUIRVKYYIPYRXKGACNASPBMSOFYWWRBZD", "ZYZCEQVIUZJOIVGTKUCZJPVUYLTKUMHOSFAJVSEPZEPTKDQB", "GLDPQWIPIZJAHZOSMDUASBSFDOSQSDAMLBHTXQAHSCNLGMOQ", "EOTDFGXWDRAMKCCDXALIEAZDEXUNSJSXLIXOVFZAVHWQUDEP", "VSSOITJHERBLMQNTTILYCUOANGAZOIEUGCXAIQVOKQPFQQHJ", "JCYQFGCNBISZNFCRBBPMSMIFZXHVMJOQDIMPPXDNGEAMRZLH", "SUUJXDXSPUYKJZHLDGZPCWYGMDLPPDPZOHWUUCOCBULKLYLH", "WWGGBYEKTPXEWWZBFGADUMUJMHJDIFKPRKQSWDZBEINVCGBB"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {"CQQOC", "COJDC", "DQDCJ", "DOJJO", "JQCDO", "JQDOJ", "DCQOC", "ODODD", "QDQCJ", "QJOOC", "JQDDJ", "QJOOQ", "OOQJC", "ODCJQ", "QJJQJ", "OQJCO", "DOQOD", "ODCCQ", "CJDOQ", "DCJDC", "OJCJC", "OJCQQ", "JCOJQ", "DOQQJ", "OQDQQ", "OQCOQ", "QCCQO", "QJJCC", "ODQQC", "CQCDJ", "CJJDJ", "QODCO", "JOCQJ", "OJCCJ", "ODOJQ", "DDJCD", "CQDQQ", "DOCOJ", "JODCJ", "CDDCC", "QDCQQ", "JJQJJ", "JQJDQ", "DCCDJ", "CJDJO", "DQQOQ", "DJCJD", "JJDDO", "CCJOC"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {"MCCPQTSAONEMDUOKQPBDEKCPMMPT", "JJDQRRSKOONSELRMRDJCTNPUKOCC", "MCJDERKSCRAKJEOSMRAOCKPQADRU", "OTOEUCAUQKDPSMNQEQRSMDOADRRO", "TUNDSDQOEEUMDOTCATRBPNDCCODM", "REQEMPCNKPDUQUQUSQBOPJPSSQDL", "EPMLSMOLJQQJNKPOCAKDMJSUEOJS", "PACCLKULQCEOSRCPOAQBTLLRDTAK", "PTDDPQPRSOEPCRROJMUQNRLEKROP", "LTSTOQQSDKLPOJEPPBMNDBQJBRND", "LQTEPPSLBAKJMDBJQLLSSOKCSQPL", "AAEETRABNSOJCOQJQBJMKOEMTEEU", "BMNDSKMNPSODUPKCJPSJAPTTATTB", "AKDLTERCDNDSNEDMRNALABLLNNAA", "DRSATKPTEASEQCJBDTKJPDDQJLDN", "CMEQNSQTKRKANUMBMJEBMAABURNN", "ASKBKRLQCOPUNDSLNBQNCQQUUMUR", "JLKROTJSODMEONTQBEQNQKQBECQT", "BLLUTNMASCESTBKUQKPJRUMTSUSO", "RURUSDUTCJCOATQJMUQMUQPJLJOB", "BCPDDAKROBEARQKUONLRAOSOPNPD", "QRMMQEKEOAOSBUEADDAPECNONEND", "JOESJAQLRQLLBOENBAUSQQDSPNMC", "OSCKCPUTUPTUQPUAALASTBNDBPTB", "LTPSDETNCSTCLTPEQQDPPQASRPTU", "UPCRPPUDLPQCAOTSASTRRJDDBLPQ", "KJKOBUENCDANKKMSCCTBKPTUMOQE", "SCNQDSDCUPPSQMBJLNRJNQDKMDOK"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {"IBBXBXXIX", "IBHXBXHHA", "BIBHAAIHA", "HBIHXHBAB", "XIHAHIXHX", "HBAHBBHIH", "AXIXBBAHA", "BXXBIHHXH", "AAHXAIXXH", "IXBXABIIB", "IIBIHXHAA", "XBIIBBHBB", "XAIAABXAX", "IIXAIHXII"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {"XJHXZJVHWXW", "WJXZGWXXIHJ", "WWJGWXWIXXI", "IIXVZFFJWFW", "WFXIJWVZIIG", "FWZHWVJVJHG", "GXWHFZXHHGF", "IWHZVIVWJJZ", "VIZWVZVVGHF", "WXHGGZWVHIV", "HJZGIWXGIIX", "VZFJFWJVVZJ", "WVVGXIZIJVI", "VJIIVWHJHFW", "HJJZVIVGXXV", "VVZHZZWFHJV", "VHHIGFHZXFX", "JHJXJZXZFHG", "VXXFZFHHXHG", "WFWWGHIJIGF", "GHVHXGXJZGX", "ZXGGFHJVVJW", "VIGXIXXJHHZ", "JHHFZGXFZFW", "XZGJXIFXXFW", "FJFWIIHWHWI", "ZGWJHFVHJIJ", "HXWJGXXGJGH", "JVIZIIFZVZI", "JWZXVWGXWIH", "XGJIJVVXIHJ", "VHIWXZWHIWG", "FGVHZXWGGHH", "ZIZWVHIXVHF"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> board = {"ZWELUENEUKBKKZFATCNH", "FYLNSBAVGCTKUCTGTENT", "RUATRTRNCAGRUYBCZLYS", "YNLBERFZHFGFRRBQRZTR", "ERCELZQRGZCKWCHHSTZZ", "HKBAHRYHNHHZKKQZRRUB", "KKRHGGEVRCTHYUSQQWNK", "FLTNBRNYFRBWKTZVKEFC", "LABHYVGEGHQCCLZSNTES", "CSWLZLZHATWCZAUKSRFY", "BBSTEVCVSFGEYKYSNKQC", "WZEUWANKCEASACWBRLCE", "NGWHNTAGLHQFSRNTUGSL", "SFWCRCHRHWRZSQKKZBBZ", "HKGGRSFLUGRRQVEBVAGR", "RSWVYYABGQVYSSHBWSFQ", "WZKBCZGKEBLZKTZTWBAG", "LUVAECWAQLAEWTQRBGKT", "FESGYRWGLYRLEGAKVNVK", "LGHGBGNCZUZQNKZUZBEB", "WNFVYCBCLLTBSKENVKRS", "CURSSACQVRANRCZGCLRY", "CQEBLAVHTNZZNSFVKFHH", "ZVGCNSBRBAVCZVLFLHYK", "UHFEEZKYFNEHCUVNWHUZ", "CQFZHVKKEWAYBLWCZFGE", "BVUBBNCSSYYSBLTWNRQW", "ZRYRSNHWZCSUTGUVAAUA", "RTCFHZFSVEYUTRCUURLC", "UQTNECQVUCGKUWNNKBNK", "NGCNATSSNFKYYVHGNHRK"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {"IPTKRLYOPRTILQTZRVYTKKPQOTOZ", "LLNTNNZZVTOOVOQVJLPNZBBQYBRJ", "YQJPNQNZPPLJVRBTNROPIJRIQBJZ", "VNPYLJZJZRLVNLYZYRBITVTRVPVO", "PPVYZNIPJPOLQOOTJNJIYPVBRVLR", "RYYOBTQJOIZNPKZPOQYPQLBVZZIV", "JIRVBQVJRZPNPKVIKNINOPBPZQOK", "ORQOPYRKNZQTNNTZNYKZPNTJBVYB", "TRTBLNYZQTYQBTYOROIOTNNQNYQP", "JJPVILBNNIOYNBBTYRVJPVNJRZPK", "QTKZJNTPJIOLTOLZVIPVJRLTVOZL", "QZOTLBBLTBVIKLONZZOYZTIQVTKY", "LPKVORRQQIRPVOIPTZVLLIRVPZBL", "LJVILQLJLNVPBLJKNKQYYBKNVZQT", "OKRYTIPIYKVJBYJJZIQIBKPTLKRN", "NNYKKYBVBIJTYRBPZZVOBQOBTJIV", "OZVQBITVKVKPRZBZIYTVZILZZVIT", "LKYTVYKKRIJPYTQYRYJTLQVRZIRT", "PNQIPYVOTLIBQBPKNVZVIZNVIOQR", "ZIPJPIVRRZPKZBBVNQRJJQIPIJLT", "LLBIOVJLPNKZOKKYBORQJJRJKNOT", "VKPYTKBTLBJVNNYBLVKKIBBKYOLQ", "NZBYZYZRQPPRNRQRQPZQVPIPYOIN", "NIKIIRYRVIBKINOQOOZVOIVLIQNY", "TBIPYYBQPJPRZPRKNLJIYKLOIYYR", "IKOPBVJBJTYBKZIKIPJVNINLPKOY", "BTJTQOIQZOKQBRPOQINNZLYLJZIY", "BYTINNRPYZQKJQYBZOQTKKOOTTVR", "TKTRJORJBVRYOVLIYYVRYOQYNQIQ", "IVPNYPJLBYYPPZZOQYBNLZRIKNYP", "VQRLBIIVZZKBOLKIIPJNJLQOLIZO", "YNQBIVYKOQYJNKJQLOZZKBLIRLPT", "ROJNTOOLTRRTZZBIYRYTJNTNIKBQ", "YVNVJZNQOKVQBNZZVVIYBLVJJYPI", "VVRNQYBKQLJPOKPRYONOQIYLLQIJ", "IRTVOBJBNRINPNPJVKJRIRRJPLPJ"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {"TDTIVQWMMITDTTMZAZGAADDMI", "ITXZTVVXXSAXVDSVVTSDXXVQA", "VIGMTGMDTTXXTIZMVDZVGZWXI", "VZISVSXGXGAWDMZIIATSQDZDM", "WWSSMGVDXTXQZGTXITGGAQVDQ", "ISADVMSGAZXSQMQMTWAGSGITQ", "QSWSGVTQAVMGZIAWSXVMTAZVZ", "DMQTZXXDWMIXDMWMAQQVTVMVA", "ITXTISGVMDMTIDQATWQGXZIDG", "MWTGAITWIZXWGXWIVGXXIXVVT", "MAQGIVVTMTGGDDIDGMZXASITV"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"NMUREHIMWYNNLSEWLRGUSGNGHR", "EHHTWEQULNLBPYLQIBRNIIRWMM", "QTHOEHYYBQANBPLMYQMEHIOMYO", "RONUSSHNMOVUPOBUZLTOPMVRYU", "UZGQVIZLRHAQLRAZAGOGZOOMLG", "VGUVGIOUNSPNUERQUVUZTOAPLY", "WZUYTOGHIMAYRHRNQANMNYPNAP", "YMRRUVEVEPYQEHGONTNYWAWPMY", "IUNGOBISEQUUTUYHRWAVMWZATY", "QNTEBINIULNRMMEGZVNLIVLPPS", "LTEMIVAPMYVLHBTQYULAVSQYOT", "GQOTPVTUBWSUEOUMWOEGRMMPZB", "SGPQIWIAYVSIWLVQAWSTWBGWUT", "MYGIYWGBVNRSAQORATOBYBSWNG", "PWVNMQMGUQWZTYRRZLUEYZGUBH"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {"QXPEBOZWWDTLESIPLDFB", "XTZFONPFVCAQORNOLFND", "MOIZNDIPOTQJDUZOQRAM", "HJRMOEXWHJSQXHOAAFUF", "KIURMCROQUXTZWQHONAW", "DNAJKRDASEMTZHIHQKBM", "WUQFKBWHNCRQTXUBHSBS", "TBGEDMFLAPKBOJDNZCQJ", "QRITZUQOZVNPLEJNTIDF", "NGKBKFNVHKOQJXFECEUP", "GNCSGALKZQJZPAEMBMUG", "LRIOTZLCCQTTCBFREIET", "ZEXLGBDPWRJNNZMRFXHX", "GXPSDTZKOBTXAQXPUZUE", "HWLMLTGVUEWSGVQJRVJH", "DKCEOVEKHTJWJOKXBLFU", "EDJBWZFLRXGEVHIDTXAL", "ZRXFMAJWINSKOHUBVIZO", "ORNZTMCEPMXLSWAUUNTR", "BPTEKQDNAJWDSJOUFESK", "OORLNHOQZCMKWKDKOGTL", "OIXLWMWHVRIDRVXWAESC", "NQTBXIKFIJSPBSKGIZOG", "OMHLRWRLQJTURZSUGOTG", "RGMHPIZBWZQBSDCNLFSA", "IZDRJGKDXALUSFMQICKW", "CKUXPCSJJIKWEKWZVAVV"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {"ZQFZZQZFZZQZFFQFQFQZFFQQFZFFZ", "QQZQZQQFQFZQZFFZQFFZQFFQQZQZQ", "QZFZQFQZQFFZQZZQFZQFFZFFQQFQQ", "FQQFQFFZFQFQZZQQFZZQFZQQFFZZF", "QZQZZQQFZQZQQFZFQQZFZQQZFQFQQ", "ZFFZQFFZFFQFFZQZZFFZZQFFQQZFQ", "ZZFQFZFZFFZZQFFQFZQQFZFZQFQZF", "FZZQZQZFQZFFQQZQQFQZZQZQFZQQF", "QFFZFZQZZQQFFQQFZQZQFQQFZFFQZ", "FZFZZFQZZQZZFFZZQQFQZZQQZQFZQ", "QFZQFFZFFZQFQZQQFFZZQZFZQQZQF", "FZZFZZFQQFFZFQFFZFQFZQFQFZQFF", "ZZQZZFFZFZFZFZZFQZQZQQZZQZQFZ"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 307;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {"EGRGOEEI", "QXMINRGE", "MJRIMJQX", "TMXRELLU", "IXTTFUMQ", "QOGMERFJ", "TMIFQRLJ", "RELJRIQI"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {"PLFQKGPK", "FYSZWOTG", "ZPTZXNTZ", "NTOAYVSP", "PXDFDSXF", "LXWWRXKN", "SDSFUDLE", "DTNFGSES", "LNGKUXLZ", "DGTZMZAA", "SSMGVVZD", "OFPVKYKM", "NGTNYEZN", "SOOSOPXE", "FNNYPOAV", "PKRPOFNE", "NFNEKZMD", "NEKFGNUQ", "ONEXNTNL", "WMRWOROG", "YLDSVFDT", "QMLMUQFZ", "SQAMLFVT", "ORRAQEDV", "TEMGURZM", "UTFXOPPW", "MGEKMFWD", "VKMLOPAD", "NZSETAWL", "XGQWYZQQ", "OKDVQWPL", "NLLFZYON", "XVKVMLGX", "WVTNEOXD", "MXPYNWLD", "NSDDFXKP", "QAEVUMPQ", "OXGLNWRM", "LFLWFXAA", "NPGPUYVW", "UMZFKRZA"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {"PSDMMOPQIHIMQOMNIWWJJMHWJMSWJIWSWH", "SYODDOHWOYJDJHYSQDOYNNDSNDWWJMYMHN", "SHIQOSIMPOQDDWYHIJONSWYIJDINYMIJDQ", "OJINDWIHMOQWIJPIIYHPOJWNJWNMHNMOQM", "NSDMPYWHMHJOIIDISYHYIHSMPNPHHSMHIP", "NSSDQOHWDINMDDWYMNMWOYMWDIIHDONOQQ", "DYHPOHHIJJWJNMSQQJYWMJOYQYQJDNQWDN", "HIOHIOYYOIOMDHSOHYJOQHIIMOJYWMNPIQ", "DSMNSIIJMNYDHJIDOOPJNHYWOHOJNYOPPW", "QYWDNQPJISNYDSISYSHDIWJHIJONYHIYHD", "MYNOHIODWOWHSNPHSQQNSOWMDNQWIYOJWJ", "HMPPYJIPWYDQWYHIDOWDSSOPQYDNHYPWIH", "YNWNMSWOJIMMDYIQPMOPOSQPYIQJQWQNPW", "PQNNOSDHOJPMIPYOWQHSQPIWYSOIHHWIWQ", "NDHWWHSMDNPQPPNWJMPPOMIHOYQJNIHQYO", "MNQNDDNYIYSHDDPINNOJYSJQQMYSPOSYNO", "JPIIOSMMYQWQPJWSMHPPQDSWIDPNQONISH", "MWNSPIIDPPYONJYNQWDPHJQDDJDHMINYIH", "DONIOHHYHJPNJNPWQONOSMSOYIJHIDHYJM", "JWOHQNQMYNDDPHOQWYWQPDQHODIMHDHOQI", "SNOMNHOJHWSWQDPIQOSMSOYWPIDHNPINMI", "QPJPOWQPOQNPDYHMJMPJDYNNISWMSIOOSW"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {"RLGGULMULURUZBFUG", "MBURZULMMBGLRRFUZ", "GRRMLFLBFGRURNLZR", "RBFFGLFMNNUUFUUMG", "BUGGMLGBZBMGLGFZF", "ZNLZZRZRGBRUGLBZM", "LMZGMLURNRGRGBMRU", "NRNZGUUBUGNLMFMLZ", "ZMNULUZRNZRGRZBGN", "MGGLRGZULFLZUMBGF", "UZMRBMFFBUBNUNUNZ", "MFUZNFNBZUGMMBBFF", "URULFMMULFGRZUFFU", "MBZZNUZRUNFMRGUGB", "GMMBZUMMRNGMMZBGU", "ZBGZNLUFNMLRRMRMZ", "MGFBRRNGFGGMFGBMN", "MUBGUZBGUMMGZBZZN", "LMNZULNLUBUGRBUZB", "GGBZLFUFZBMRMLURF", "MLGGRUNZGUNZBNZRN", "ZRUFBFNRLNZGGFGNL", "LNUBNGFZRGBBUNLFB", "URBZBMFRMZMMZZRZZ", "MNMRZBLNMRLNFBLBM", "MUBGRURLLZMNLMGZG", "GLUGNFFLGBFMMRUMZ", "RZRMGBZRLNUUGMMFB", "BRFUMFMFZBMRLMLLB", "NLGMZRUNZMMRRLBZU", "BFBRRZBBNFLMUMGBR", "BLRUMRRFZUNMGLBRG", "FFMBFRMLGNUZBGBZR", "FBGFRMNFZBBUUFZZF", "BUBMFZRBMZZGGUUNN", "UFRBGMBFNRNRFZFML", "NGMFUNNZLBZZUFFZZ", "LBMLBBLRGMLUZMRFL", "ZNFUULBNUZMGBZFBF", "ZGLRFNBZLRMNMMBFF", "NFFZMUMMBLRGNFRFZ", "RMGULLFZMNMNUNZLM", "LGMFRZBRNNGUNGNZN", "ZGRRFBFFNRZGGFMLG", "MZBBUNLBBUFZFULBM"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 126;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {"RNMOHVPW", "CKNRWJRG", "DCMJYFEX", "GXFKIKPH", "XZEPKKTV", "UQJSPFAS", "RVOGOENM", "VJRMHAUR", "KFDSXIXU", "EPYFHXBH", "EGYJBYKZ", "VTMDVBTH", "DTICJAXP", "DMEVAAJV", "PQWICIXM", "JVUVNFPP", "JNMOPYTS", "KRINBESO", "OMESFFIA", "TJQFJDTS", "TRVNKYYC", "VNQNIRVX", "SIITAOTO", "AYKVCDEG", "WUBZZJGJ", "MEWUABOP", "QRHROJJP", "TOSWAOPK"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {"DVFGFPZQ", "LOPFOHXO", "ZMIFGCYW", "WYXLRZDX", "WSKJNSID", "CJRKAOOI", "MPQHFAYH", "CQWCQGMY"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> board = {"FVVFAAFUSUXSVFAOPOOFOATASFXTTOTA", "PTXFOPVVSPOVSTTSUOPXVSPAPVVSTATA", "VPATXATFOTSPFXTXVUPOVTVSTVAPXAOV", "UXVSUAAXUPAFVPSPVSOSFVVFSFUAXFSX", "AOSFTOTPOSVSPFUOTOUXUUSXPVUXPSXS", "TXPPAOUUFUUSXUOXSTTPPUPPSPFXOOAF", "PSOAPATTUPSVTFOVVAXXOFUUTXOUVSUA", "TVUASOFOPSTSVFXSUAXSVUVVFVAXFUTS", "SSVUVAUTXVTFAXUTVPTOXSSAFSPSOXAS", "TTXUSVXPFVPFVSVXXTFVASPUUTVTOUFP", "VTSPFOUOPTTOVOXTPOOPATSSOTASUTUX", "OPPVXXPTXUUTPOOXTFXPPOVFTOOFFTOT", "UATFXTXPPVSXATOFTTXFTSOPPSFFAXUS", "XASVVSXUAUXPTOAUAVOFVSFTUTOUFXSX", "AVAUPTOXAATOFAPOOUFAFVTFATSPVOUU", "SPFSAOFFUOVUUTPXOSXFFSPXXAXFAFFX", "FUXPPXPTTSAPSUXOTOSVSXAOXAPTOOSX", "VTSASFOXOTVVOTFFVXSAXVFOOPPVOFFO", "SOUXUTPUAVTXSOXUTOUSXUXSVPAPXVVF", "FFVSXSSUVOOFUFFVFVVSATPTVTXUOUPA", "OPPASAFOFFVVXSVOTXPOOUFFUUVPPOFA", "AFOOTFPSUFFATPVPPSVSFPUATUOVUAPF", "SSPOFAPSTUVTUUFFPVOOUAATSOFFTVXS", "PUOPASOAUTOTPAVOUTTFSATFTUFATTFT", "FXXPVTTUOFVAFTPXAUFFSFOXVOUFAXTO", "TVXXOTAFAOVPOTAVVASOPTOUSUUFPTXS", "UXVPTSASFXOUVXSUSAVUXOUTTXAUPXVX", "FAPFPUPPATSUAFPUSTPTOPVAXAFOOPSX", "FTOXTSAVAUFVSAOXOAXSTTXTSFAXVVSP", "OVOXSVSXVXTOSFTFVFPPTFUFTPTSXXUU", "FASPUUAUUVSSVSUAFXOUATOSVSAUUXUX", "TAVVAUSAOSSAUOSUTVFXFUFUTTPTSOXU", "OFFXTTAAXPPVPOXTFXOPOTUSSXFFPVPT", "PUXAFTVFAAFXOPAPUSUSPASAPVPPVPXU", "TTXVUOTFXFXTPVXFOTVVOASPVTOOVTPF"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 184;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {"UUKSUUKSUUKKU", "KUKKUUKKUSSUU", "KSUKSSUUSUUSS", "SKUSSKUUSUUSS", "SKSKKUKKUKKUU", "USSKSUKUUSSKK", "SUKUKKUSKUKSK", "UKSUUSUUKKUUS", "SUKSKKSSUUSKU", "UKSUSSKSUSKKU", "SSUSSKUKSUKSK", "SUKUKSKSKKUKU", "USKUKKUUSSKUS", "KKSKSSKSUUSUU", "KKSUSKUSUSKKS", "SUKSKKUKSKKSU", "UUSUKUSUUSUKU", "SKKUSKSSKSSKS", "SUKSUUKKSKSUK", "UUSKKSSKUKKUU", "SKUKSKSSKUKSU", "USUUKUUKSSUKS", "USKUKSSKKUUSS", "SKSSUKUUSKKSK", "USSUSSKUKSUUK", "SKKUSKKSKSSKS", "SSKSKUUSSKKUS", "USSKSUKUSKUSU", "SUUKSSKUKSUUS", "KSUUKUUSUSKKS", "SUKUSKSUSUUSU", "SUKSUUKKUKUUS", "KSUSKKUKKUSKS", "KKSKUKUUSKUKU", "USUUSSKUSKKSK", "SUSUSKKSKUSKK", "SKKSKKUUSSKUU"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 369;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {"DIXXIJRTFLMCXAVLZQMQUQOBUGDMKVANZJERD", "RUZSUQMVRZOLMDYNPPQWYVPGNIKXOAPNYKFMW", "GPTDICVLVRGCXUOQUTHYAQCUAUAOWTLQNNJOH", "ISWPKUKQTISTTCWWVGBTRBXENVZTWVLWVPOZH", "HUOZOJUZRQLNMBHSXDWXAPPKBDGGUKQLEEYGR", "TZVHOVANYJFFQBOSWHKFCIROFZKXJSHWQCXKN", "AZDIQZPPZQNVIIZVXVYHXYJJEHEKQLBGUEEPX", "MCOCMSMHJKONKPLEETEFFRHXIMOSMHSZTWTSP", "DZTLTBAUZWOJLMWCUIOQYHPXBJRZOSMDTWUUZ", "UDVNGJROJXLMXDZAOWVZLVGUSVEOUNOKDPQJR", "QUMOKYAGGUDTMSEJIMNTTBJYLSGOQLYCMXIZD", "BPCMSHJDFKQOQULNUXXVGUBTSNKDHBNVGDOGE", "XKPCAORWRIUNVMQDSSGEATWHRFBVJKDLYMCAW", "CEEWFCPAMNBZOCPJCWMJLUQJFSEFPHYUNEVGG", "BQVCOQNZWENJNHFPSFADKOVQWMDVNCVXPZIJX", "FKXUSGNNHQDYUKKQLNDKOQEXROKAKDOLGAYGL", "ZHZARUUTCQFZELLHAOWMWUAMLUTKXLXBZCPVT", "BJRNATNKWGMAYNZMUBEXUOFVFKNEDVAXQDFMS", "HOHAEVKSGDZSIHEAVLCMZPMUPRAWDIJGWJIHP", "IRBTDMKDAMOOUDXOPEDOAFPVUFIQMOTEWLLRC", "XEOPPERXBZMJLCIUTRTZQGMFTDWGBGMBSTEJM", "SGIIMDRWOFASKJDDAYJOYQNHXCHFXNBCDCPIF", "BDHFZJQBCJWEOMLXZXTPUUAAQQBRCUTRSBLRY", "IMSKWSHHEJUPJTPYLBETLVBTAWUJDJURJECFH", "MSTHIMPWQQCMENSDKZDFQQVYVBVHLGWAUNMHH", "LTBVDCAACQUAEPIUSTEDNBETMZSFTDYPVVUDV", "YIMBMVGJAZPUBGTEGCPYCXJWPHBSQIAVQILNS", "UWMKPLRPJCHCMHJLOUHKTKCNQHDHBSOEOQLZH", "JJKDPENCDHFGYSCYGCVYOUBIDXYVEPOIIZJYW", "HVCGWXMUXCBDRTQXKDKUXHWUDKOIAOGCHCOGW", "SHUTVDETTQUSXCCPPTFNWHLNVOLOGHJHMYLLO", "VWVMHTPPESAMFYCTABSQYMPQKPLFQOSPFDTOP", "EXQFHYWDRPJAFRXHOJHVCOVSMQQGZVKBWCZEA", "ZWLIAVQECJWJHPCANTCAGXIVFGTLJLUVDMFWK", "KFJOUTKFTBEPIQMAHDIPHPLXOPKAJTZXLTENM", "ZXAADUQMHMBSKGZTMZYXPBSJPBGMXAJQJFVNC", "JDTXEVXQQEWNFSUWKEGEHFYAUUHYVQVHICBHC", "JJRBXACXHVFUVVKUSYKINOXKJXJJXNEBJCIDO", "AEXCPUUIKAEPLJIKCNOGCPKCSOFKUOQIXRVAG", "ONIJICRLIMNOIURCOQFZXNAQRTBLFJDQCILNS", "JTWLOHRETVMOINGCTFIFAGQHSHVOTRFANLWHL", "XEVMNZENVGEKZGWMGYXAZTUTSCUZPGVMPPNKG", "NRDZTXSARBMTKYRJOEXNNOMIFGALPXNVZSIGE", "RWFTYFGSCBTGLXWCRDSHTTRWHWYITYCMQWHVH", "TPLOBRQFIEJZWYVWLUQPIJCZYQMNARPDOHIQQ", "PJFGOBXROOHKVBIKFYJCLKVZECCFNGEONLJZV"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {"VBALHEWM", "DOZCJFLD", "EVUDMWGM", "HQNKZBYJ", "MIUWVUMP", "UEHUTJGY", "ZHKVYVXG", "JBHUJVGU", "JSSLHSVR", "LKWHPBSA", "OZJEXPHM", "EKUMFGGD", "CSVOJSXZ"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {"BAXTTLTWYHKXPPXABYXWHMTPLYWYB", "XPKPXWLWYTAALTAAPLKHKMWWHPKHX", "HWLLMLPAPBPMPATTLMXTAABHTYLLY", "XXBWYPAPBMLYWMHYPLAWKAYALPYBX", "XKYXXYLAPAXTALPPAPMBXKAHYYXPP", "YMYYXKBLMBYLLAKLXHYYTLTXLWPWY", "LMMAWYLHXXKBAWAKWLTMHLPMAYPLH", "PABPBATAMHLWXXHMPXHMBTWTABAYA", "PAKATTPTXYWTPAMWLPAXYYHWWMBKL", "APKKMXHBBTBHTYTLHLXXPXPAXHTXT", "WTWXKHBHLKTYHHMKWWMAWYALLMPHT", "WYMYXPXLAHALKWWLWXYXLPXHLLATL", "TYLWXLAYTTXXWXBWMXWPMKLYKTWKW", "WHWATYAPAYLWHHPYATPYLBMTBTBYT", "KPLBPHBHKKWXYLTAHABYHAXMWWMHM", "MMWBWABPYWTWPYYXAKPLMMLPPLXXY", "KTAYMHHTMKBBXMAYMBMTLWWYYKHPL", "PYTKKBPXMKWBBWALMBWBMYMHLLXXA", "XPWHPWXBPPBYWKBLAYLTKLTLPTAXM", "PBYXAYHMTKMHYYXBKXHTHAKHXPTMP", "LHXAHLHLMLBHPTLMKKMHAXPHPMBML", "TAKYXWKHYHYKBBTTPHHKPPTTBPHPM", "HYLHYPMLKTAKLLABXWYYMTYXYPLLT", "LTTWMXHYLXXTWBLYHBAAHWHWKKPYK", "LMLTKPPBBKKYWMXXMWXKWAXYXAXMT", "AWYLWMHMKLLAKYAXATKWBTMWYLYYP", "YBHWLLAMYYKYKYHWKBMYMBXMLYXAM", "MKMTPWHALKLBMLHHAKYBMTYPLAAPT"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {"HQUYRNVZAKVTYGANSPVUIUYKXQYRWLAHFNHHGWPGRRF", "QIWUYLLGBGIQQLIPSNILGUYGPBZBWSPFFLTQANSRGGW", "BGGRGRNYZYISSPNURSBGNSZPKYZSHNZFZHBZPHNKFPZ", "RZWRQFTHAQNVPULTHKHFPTHGLKWWULNXPYUPFNHTNSF", "PZLGAUNKAXYLYFHAQNBUVWHYNBFXXRSYUBSUNYXBZGL", "INFUHXNKKNTZPTKPWAPGUZUTXBXZKILBFSIZBYWPZWS", "WXRXYALFNGKBANKULPTVGPVIHRUVHNVVKLAYBBGSLWB", "QSWIQVSQNKWGNXIUIABFLQUBLYSZLUKIULVQLAKGFSW", "TVFNNXWLAZZRRIZLBSHRGQXAYSXQLIXZBYWTHNFXIZU"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {"JHXYJDDYWWJMUYBTVJWBMTSIJTGNDBSYJXUBXT", "TMWTYWVMHNGTIDYMHYDXJBGSSTBVTSBHTUHVUH", "WGIJNIJNVCCBCIYYNVDNNJXWTXMBTSYTUNBJDG", "NXYUDXTUIJDCGHBYJYWIUMINWVWBBTHWVXMHSW", "DBVSUHJTWNYYTIWWNVSUMTWDDCJNJTDVHYMHTG", "NNCUXXVVDNJMXYWXHBGTHBDIHJHNNSSMJDDINX", "MISWJXUTWVDTWNJUSXWVNMDCCJYGYHGSHYMWTY", "TWUUJDUIBIISYJGDXYTTNMJMTUGDSSDBJSMCUY", "TIUYGTJMVMVDWJJDXGJUIXDCWXHNTNBJVXCDTB", "JGITVDDNJJUXNUSCHGCBBYHBTGGDDVVWWDBVYN", "DDTVBSDXDXJSUYSCNNCJMJBSMMDBDHVGIBSDCX", "VWJBGUTNDVXTWITUVTNBBXSGCXIUCGBGMNBJDM", "VVHNBIUHUCYMSNGYWNYBBVGIIHWCBGUXJVJSBH", "NBWSSWMMVIIXHHBBNSNSHHYHTUDXXWVIHIGHIW", "WCMJXWUMJMNINNSSTGIMNSHUCJNUNCIUSBUUBD", "JIJWMGCYCSCJGHNMNYIWWSTTYGXYGBMGJCUDMM", "XMJTGDHVWTSWICWDDUUTUYXCBWBXWBJBTWWTHT", "XMIWWGGICDXTNSWBMTXHVCMNUSIIJIYCCGVJGH", "WTTYMJWMXXIBYWDYVCVTYTNIXBWDWWCTDYDIVT", "CNYXJTWYWBBWNISDXHXBJHDTICHHWDMSXMCBYJ", "SMUSDJBBNIIWTYHMGDSDWDCITJYIIMYSNUXWCD", "SUTWINGIHISSWIYDBYGUBJVSIUNNJJCGWGWNTV", "VDYXGNYJSNHBCCJMCBJCGXNDXHGSTHCXUIYGIM", "VYUWUBCXXBTCDUDVTIXCUCDCDUYYXYGVIGHJBS", "TNGDUNHIMUBSIGISUIGBVDUCNDXTTBDUHICHYW", "SDWGNDYCSGNJUISNNGJVHBMTIIGIBDMSNTJUCJ", "WBTHNUCSJUGMTNXVIWTXUNHBTGIGXDNMUTGDIH", "GTSNWUYBITVMBTHXUMBJNDGVMGTJGGYNTBBNUD", "GHWUHHDIWSYSGSCTJGUDXDBNIXMSISDYVVMUHD", "NJUJJYUCCDTBDYGBIJDNDIJYSSUMYIJYCGBMJB", "TXTMTVUGVIIMDXXHYCYGGVUIJBTUBGUTWYNYTX", "THJBUXCNMGMVCDYYUGBTIYIXDGGBNNJXJSSVJD", "XXNNCJMJNWSXDDGBXWBWYSXIGVSGDCVMBTDVHH", "CXIWTCYHYUMHGMUWXIXBMSMCSUSTVXWVTMNNTG", "GDJDIDYYIXBWJJXNBIDDVMUYGNVCMDDSNYXDJD", "XNBTJJWUYVNNTNJCVWBJTMCNJJWHJNITCSJBJY", "MDJVWMUUHJWYBWXXSCGBSSGCYNTBSNXCBWWTHX", "UYMUJSXBMJCNSUHMYJXMGYUWJVYUCVYICBXXGN", "MNDNVMHJHUINGHHVWYDUNDVGVJWYJVMNVMNVNH", "YMIUWWXSSTNXSSDGVTSJWUCIJCIXSJITYNBSUN", "YYMYHIDVSHBCCDXDNMJYIXSYXJNITDHJSBXJHH", "TBUDHBYDDGCXVMUSTDGYGWIGVUSUVHJDCIGYHW", "YYCSUCMSWUWCYMIHHNMUJMYBIVYBXNMSJNGIWW", "VTXINBWIWUMHXTBUSUIJCDDMUBCNSIXBMGNVJG", "VTUYGHYGVWIGMYJJVBCDGCTYMSHVWUUSYSDBNN", "HBMMIGVVJXDGVGYNGTUBDSCMUIYGWDJUGUJWIG", "DNIXXDCTCXYTYJUCCSWMNJUTWGSVTGJCHYUCIB", "CJCJNSNWBMJVGTSUIXBTCWHNBYGWNNCBDVGBYX"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 109;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {"SUMEEMEEPGPPG", "USPMIPSUSIISG", "UPSPGEGGPKEII", "KEMGISMKKIUIG", "MGSIIKMSISGKM", "SPGMSMIGMSMGM", "SSIIUKMPEPPUI", "UKUIUEMEEIGKE", "IPUPGUSEGSSUS", "EUPMKGGUKKEMI", "PEPSMUUEUSSIP", "SUMEEUSESUEKG", "EPSKUISGMSKGI", "IUGGUGGSIGUUP", "IUPIKKSGPPEEP", "KGEESGISPGGEM", "UEIUSSKPSSGPE", "KSUMKGEIMKPSE", "ESKEUEMMPPIGG", "UUIEUGGIGMEMK", "GPGMPPIUMEPMU", "IKIGGPIUEMIGS", "IPUSGUMKPKIPP", "UEEMUUEEGIPUS", "PPEKIKEMGGMSS", "EMKPMPUUMKEPU", "UKPGPKSUIEUPM", "PSUUMUKGIIPMS", "ESMGSKUEPGGEM", "SMEEIKGKGGPEG", "UEIEKPMESMEPP", "IPUIMGGMIPKMG", "ISSEKPKGKIUGU", "SSESKUGKISPUK"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> board = {"SBHRKLMI", "ESFGUMRQ", "PCWXJVVD", "LNRMBJIV", "RWVPWQUP", "ORKOQGWD", "OWSWTKBP", "UJFIUJRT", "WNIXIWLD", "WSFUHIHS", "UHVYCRQX", "KXVLUTMO", "MMIHAZSK", "DLACKUMU", "BCTDRHPO", "FUXTOADJ", "VQSIQDEJ", "ECCZMBOQ", "REJVAAFB", "DCOCIDJB", "LQRGNZSO", "QSOVTXHI", "MWDRBNTC", "CGRRLBMN", "MTMLAGGW"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> board = {"DZZMUUIDNMMUDNMMUQUNQMQZDZDNUDZQUQ", "MZUIZZIRIMDDMQRDQRRDQRRDMUZZQRNQNZ", "DMZZQUMQDRDQQMMIMQRNUZIDRDZMNNUDDU", "MRMDQRMRZMMUIUIDUIMUMNQQZRIZMUQUZM", "MDMQUMQNRIZNUDNRQUDMRUQURQRMRZNNDN", "RDQMMIQRZMQNIZRQQZQDIIRRDZUZZNQDUR", "ZIDMMDNDIRMRDQQUMUDZZIIZMNDRNDIMNM", "ZUUNDDQUQUDMDRZZUZDZDNIDUMRIUMRQNU", "RDQMUMINMUIMUNZRQDMQDZMQZMMIMNIZMR", "DQUZIMZNDRNQUQUZZQMIRZZIRIQNZQIURN", "DQNUDNQQZIRIMMIRMMUDMRQDNNUNMIRMRN", "UUZRQDMQZIDINRNIIDZQIMRDZDUIDNUMIR", "UUDZRQRUDZUMQZRQQZUQRUIQMRRQUQMUUM", "MRIZQUDUZUZDQQDIUZZMNQMQQMZNDQINUR", "IUMRIRNRIUURUIZIRQZUUMIMNMUMZZRDID", "NRZRDIQNIRMMIQUNDRDURRZNQIMQDRUQRZ"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {"FIMWMZTIIJMXFFJJTUFJIUITMUJFFJXFWZZTFMUXZTMFUT", "TXXZWJUJIFXXTXZMMUXFZIMTXMIWMUZZUITFXIWZTJWJWU", "UMUTUWJTFIJMTUMTTFMZMXXUXMUXFITZWMXJZUWZXFJXJF", "TWIWIMJWWTUMZFIFZTZUZXZWJIIFFZUWZUTUZJXIXTUMZJ", "UWJMUZIUZMUJJTTUZFZMZJTUFMMFMZIUIUJXIXWXZIXIUJ", "FJTZIJWZFZTWWMTTIMUFIFTIXJFZZUZMIMWMJUTFUXTUXI", "ZMXIZUTJFZFFTXUUTUFZUMMFIFJTZMFUUMZFJWTJIFJWTF", "TJJXTJFZXFMXTXMFMFXJUFXJUIJZIXUIWTFITMJMFMJJMM", "ZIXTFUWXZTZTMTJUMITIZUWXWWXIXTZFWWZXIZWXWZTIXT", "JJIJMXMJUIUIXMUFJUFMWXZUXMZXXTZZJIZWJZFWTFTTZU", "MJJTITMWFUZXTTZZTMWMMXTUTFFUZMXUJTUJUXFUZMJTWM", "FUJZTUWZZIWWJFUWMIWZTTXWJMXXIUIFXJUFWZTIXJWZJZ", "JFTZFFTMIMJFUUMUTFXWXTFWIZXTXITZTWTWIMXWTZZXWF", "UXJFIZUXFFIIXJWZUIZXZJFXZXUJUZZFMMUFMFJZTJZUWI", "MUUTXTMXZWTJIZIFUIMFIXXMFXTIJZMIZUXUJZTXUFFIFT", "MUFJIZFUMWIZXXZWWFMFFTUUWFZTZUXJUUXIXUTWFUUMJW", "ZWZMJUTUTZZJXZWWMXZIUTFIZJXMMWZMWIFTIZUFFMMJTT", "MFFJMIMZUFJFTXIIFZWUMXJTXJTUFUIUIXUJZJIMXUTWJT", "FFTJMUIFWFXTUMJUFMZIZMWUFITFFXJFIMMJIITXTXFTFF", "TTXFUFXUXUWTITMUUZXFZMIFUWZTUWIWFMXUMJWJMZJWMF", "IMJUUZMUXTFWXWUWXIXIUUWJZFXJZFXZUFWIUFFMMUIWFI", "UIWFMFFWUWXMJUTUUJTJWMMIUZMTTFMFXWFXWWIWZZMUTI", "WJWMTIJWFIJIFMJIUZJTFJWXZFTMJMWXWTUITJXZFMITZT", "WZXMMFMFZUTJXIJTJWXJZMFTJXIUJMJZITZMUMUUFFWXTJ", "MTUFXUWUZWFXZFZXZXTFZMJWTJWFIWFMXWMTUUIXIUUJIU", "FXIFIXTMIJJXXJTUIXMWUFWUTZXIJWFIZUMZMJTWTTWUIZ", "MJJWMFWMIJJIUFIXUTXIUFZXZIWWIIMXXTFIUMXWXXWJFZ", "MXIIXXZUXMUTIWFZWJMJXWWXXTXWWUTXMMJFWWUMWIIUMM", "WXZWFWFFXMFMZXMTUTUXZITMUUFFMMWMTJFIFJZJZTZTUM", "TTMZFXIWUFJIUXTWIWMTTWUZMWFJTUUJMXMUXFITFXWMII", "MIIFUZMJZZUUITJTWZZIXXWXUJIFTWZZIZIZFXMMIFXIUW", "UFUWUUZTUUZJUTWFFXJMMWXXZTWUZMXZWIWFUWWUTJJWTZ", "IWUUWJTIIUFIIZFUWUIZTIITJMTITZTIJTJZFMMTWTWTXU", "FZFMZMJFJMWTMFIFXTTITXTIJFXXJZMITXJXUMUWZTXWTX", "UIIUIIMIFWJJZMMZZUWZZMWIWTWIMUMFTWWITJWWZJUZMU", "XFXMMWMUUIXFXXTUJUJWZWJMTIFTIXFIXWZXXTUUJXJZFF", "TJUTJIZXZWTWJMIWZXMZUXIIXJWTXXUUWXTFTFZMFZJUII", "JMIFZZITIMZIWIFIZIWUMTMFJTWWTMUFZZIMWWMXXTFMTZ", "ZJXXMMUZIXXTFMIJIXIJMIJWJXJIZFJZMXMIMUTUJTTZJJ", "UTIJIWMJXUTZJJMWWJTTXJMFUZTZUZMFMZFJMZTIJZFUIM", "ZTIXXUUTFUUMWZZMJXXIJWJXZWFZZTUJFWZTJUIUTXJMMU", "FZZWIIZTMFUWFJUWZXUXZIFJFMWJZIZXJXMMJJZZIZTWZI", "XUXIFFJXTWZTWFFUJTUJMIUMXIMMTJJZFFMJMUIMZXUXMI", "XWZFZTJTJWTIXXUIFXMIMTXTZTWMTZUFUWXIXZTFMIFWZM", "TWUMJFIWWUJUFTFFJFMXWITXIWZIJTJJFMWZUTZZFIFMFF", "TFXFIZZUJMFJXMJFMIXIIXTXFWITXIJTIFFWJMZMWZMMZX", "MUUWIZIWZTITIJFTWFUWMJFIMJZJJMUJJIWXXTMMIJWXXT", "ZFTFZTMTTZIFXUFFXWXFZFJFWJXZMZZIJWTTJXMJFWIXXZ"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 332;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {"SSPDQQDMWDKDMPWSVMSDPV", "SSKDWQOOKQDSWWSQOMMWKK", "MDDWMKDQMOKMPKPPMVDSVK", "SMSMOWWMPQOQWVKKOMVDOQ", "OMSSPPVKVPMSKMSOWKDDPK", "QQPQPPQWSSPQWPKWMVWMQO", "PQOPVSMDDMPQPVMOSPPOWD", "QDWMQDOQSDKVQDQWWQPMKM", "VQPPMQOPMQWKWMWSSPKPQS", "WSVDSVKMSSOOSPOKDOQSOK", "OPQOPPMQVKQOOPKSOVMKKW", "KSOQVOKODWMQMVSQQSVWQS", "PQOVOQWVVQODSDOVMOSMWP", "DKKVVDSMSMKWVSVPMPSOQM", "MMVQVKVQSQSMQPOKOQMDVS", "PWDVQODKOOWVSVVMDKWQDP", "SSMWVSWMMDVVSKKSQMOKDQ", "DDQWPKVWQWQPWDSDKQVVMS", "OSMKMQSQQDKMSWMQQWKMOM", "WODQVOVKOWSDMKVWSPSDKD", "PPKOKVDKOVDSKWQOQPVKSP", "SMMSKMKWSQOSWSKMOSOVPV", "PKMMDWPWWMDPDVVKKMVVKP", "PDWODQSKKPWPVDMVQVKMMS", "VPPSWKDMPWDDKKDDOKMPOD", "SWPDKPKSDQPQMDMPPOQWWP", "QDWSWOVVQMSWVOQMSWQVMO", "WSSKMOSWQSVDWOOKMKWODM", "SDMKSSQKDQSMPPVWKQVOOS", "WPPMWMDOKWPVKWPVDWQMSP", "PSDKPOWKQDQPDDOSSVWPSP", "MOKSVMMWMQWQKKMVSVKDQW", "DMOOPWSVMVQPMDMSPDKSWS", "KVOSKMDODVOOQSVDVOQSVP", "VPPSMDQMVOVMKDOKQSOMOO", "DSOOVPDQQDSQQPPKDPQDSV", "OWWVVQMKDSDPWVDPSMWMPW", "OSWOOKOWPKKMKPWSKQWVKQ", "VKDMOQMPPWKDDPVSMPQPKP", "OPPOMDKWWVVPSDVVSOQWDM", "VMDVMKVPKVDQMWMPDWSDWM", "DVMDQQSDSWQOSWVVSOMMQK", "VMQWKQOVWWSODOQQDVPQVV", "WMDKQVKSVOSPVPWDMSKSMQ", "MODOMWPWDKVOVSMSPWMQMO", "DQSQMQVSOMPPQPSPQSOSPV", "KSPQWMDMWVQOKKQKQOSKSK"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 129;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> board = {"EOUWROVXGWXRTUWMGXGVTLVUJVOTEJCUOMECM", "JWGVULXUPTUWVMOOWMMJGUWCQWEMXUCERGMVR", "LWVJLRCRJXEXQELTMGGCTWMOWUQEQQEXJTERV", "VTTMEUQQMTPECMMEEXVEPLOQTVGWOEVPEPJJC", "CMGRGMXQLQEWRLGMRLMQGQROXPGVELRMMPXRJ", "GWQUQXRWVPCPRTMWCOOELETWTLUETQTRPXROE", "ORJOMWQUQLEPJTJLVPXJPMUOOQGVGCTXQPREV", "CWUVLEXMMLRVPLQUUMOJGLJPOCMMEVPWXGWGV", "WEQRWPPUUXEUMRQLMUUPWPVOQQOVLOLXEXCJE", "EWVTECGUQLXVQJPREUPGRCXOJXRMVEUPWLXRP", "VGMVLJROCJEUMVJGLJTGXVCVVTLCVEOQMVPWR", "RRWVEEWPCWCMGQXPGOMWCQVOGLVWGRCRUJEPW", "UTULTMCMOVUUETTMVPLULQPTCPRUUOQGOJUPJ", "MLRVQEPRQVMERWWVMEOPPJCEOELRWOPLOPLCC", "PTCROUJOEUOCWLGTVCWWLJMJRGWMPUUPVMQUG", "ETPMLPWWEGEWUJJVTCEXULLVXMTOVCORJXQGR", "ULWJUEWPQEQLPRROWXVPVGPUQXVLCOMLOXUVG", "MGJUMTVERMTMMPQMGCPGEEPQVQVOEEPLUPWRE", "XOQXWMLQLCWUJMWMVMQWRPUVPEXXGCGEUGWGW", "RQJVXVWJOWQXLVLUTTLVOURPCUWEEVGMVWETQ", "EPWGXXEEMRXEJJQJPJTXWWUCTGWQVPQVELPVP", "WXEOLMJPOTLPJXGUECWXJUGVLWMUOGUGLUJWX"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> board = {"ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "BABABABABABABABABABABABABABABABABABABABABABABABABA"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4704;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> board = {"SUMEEMEEPGPPG", "USPMIPSUSIISG", "UPSPGEGGPKEII", "KEMGISMKKIUIG", "MGSIIKMSISGKM", "SPGMSMIGMSMGM", "SSIIUKMPEPPUI", "UKUIUEMEEIGKE", "IPUPGUSEGSSUS", "EUPMKGGUKKEMI", "PEPSMUUEUSSIP", "SUMEEUSESUEKG", "EPSKUISGMSKGI", "IUGGUGGSIGUUP", "IUPIKKSGPPEEP", "KGEESGISPGGEM", "UEIUSSKPSSGPE", "KSUMKGEIMKPSE", "ESKEUEMMPPIGG", "UUIEUGGIGMEMK", "GPGMPPIUMEPMU", "IKIGGPIUEMIGS", "IPUSGUMKPKIPP", "UEEMUUEEGIPUS", "PPEKIKEMGGMSS", "EMKPMPUUMKEPU", "UKPGPKSUIEUPM", "PSUUMUKGIIPMS", "ESMGSKUEPGGEM", "SMEEIKGKGGPEG", "UEIEKPMESMEPP", "IPUIMGGMIPKMG", "ISSEKPKGKIUGU", "SSESKUGKISPUK"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> board = {"GUMEEMEEPGPPG", "USPMIPSUSIISG", "UPSPGEGGPKEII", "KEMGISMKKIUIG", "MGSIIKMSISGKM", "SPGMSMIGMSMGM", "SSIIUKMPEPPUI", "UKUIUEMEEIGKE", "IPUPGUSEGSSUS", "EUPMKGGUKKEMI", "PEPSMUUEUSSIP", "SUMEEUSESUEKG", "EPSKUISGMSKGI", "IUGGUGGSIGUUP", "IUPIKKSGPPEEP", "KGEESGISPGGEM", "UEIUSSKPSSGPE", "KSUMKGEIMKPSE", "ESKEUEMMPPIGG", "UUIEUGGIGMEMK", "GPGMPPIUMEPMU", "IKIGGPIUEMIGS", "IPUSGUMKPKIPP", "UEEMUUEEGIPUS", "PPEKIKEMGGMSS", "EMKPMPUUMKEPU", "UKPGPKSUIEUPM", "PSUUMUKGIIPMS", "ESMGSKUEPGGEM", "SMEEIKGKGGPEG", "UEIEKPMESMEPP", "IPUIMGGMIPKMG", "ISSEKPKGKIUGU", "GSESKUGKISPUK"};
    Gems* pObj = new Gems();
    clock_t start = clock();
    int result = pObj->numMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7340263&rd=4598&pm=1767
********************************************************************************
#include <cmath>
#include <vector>
#include <string>
using namespace std;
 
class Gems {
public:
  int n,m;
  char a[100][100];
 
  int f(int r,int c) {
  int i,j,x;
  x=0;
  for (i=r;i>=0 && a[i][c]==a[r][c];i--) x++;
  for (i=r+1;i<n && a[i][c]==a[r][c];i++) x++;
  if (x>=3) return 1; else x=0;
  for (j=c;j>=0 && a[r][j]==a[r][c];j--) x++;
  for (j=c+1;j<m && a[r][j]==a[r][c];j++) x++;
  if (x>=3) return 1; else return 0;
  };
 
  int numMoves(vector <string> board) {
  int i,j,ans; ans=0;
  char ch;
  n=board.size(); m=board[0].size();
  for (i=0;i<n;i++) for (j=0;j<m;j++) a[i][j]=board[i][j];
  for (i=0;i<n*m-1;i++) for (j=i+1;j<n*m;j++) if ((abs(i/m-j/m)==1 && (i%m==j%m)) || ((i/m==j/m) && abs(i%m-j%m)==1)) {
    ch=a[i/m][i%m]; a[i/m][i%m]=a[j/m][j%m]; a[j/m][j%m]=ch;
    if (f(i/m,i%m) || f(j/m,j%m)) ans++;
    ch=a[i/m][i%m]; a[i/m][i%m]=a[j/m][j%m]; a[j/m][j%m]=ch;
    }
  return ans;
  };
};

********************************************************************************
*******************************************************************************/