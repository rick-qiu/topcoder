/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1728
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

class DitherCounter {
public:
    int count(string dithered, vector<string> screen);
};

int DitherCounter::count(string dithered, vector<string> screen) {
    int ret = 0;
    for_each(screen.begin(), screen.end(), [&](const string& s){
	    for_each(s.begin(), s.end(), [&](char ch){
		    if(dithered.find(ch) != string::npos) ++ret;
		});
	});
    return ret;
}


int test0() {
    string dithered = "BW";
    vector<string> screen = {"AAAAAAAA", "ABWBWBWA", "AWBWBWBA", "ABWBWBWA", "AWBWBWBA", "AAAAAAAA"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string dithered = "BW";
    vector<string> screen = {"BBBBBBBB", "BBWBWBWB", "BWBWBWBB", "BBWBWBWB", "BWBWBWBB", "BBBBBBBB"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string dithered = "ACEGIKMOQSUWY";
    vector<string> screen = {"ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string dithered = "CA";
    vector<string> screen = {"BBBBBBB", "BBBBBBB", "BBBBBBB"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
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
    string dithered = "DCBA";
    vector<string> screen = {"ACBD"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string dithered = "JSPQKYRME";
    vector<string> screen = {"OT", "QF", "KD", "HR", "VV", "XB"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string dithered = "TYCIMHLZJNBOQAKPWERVS";
    vector<string> screen = {"HVHKMDHLSVFMU", "ZZDYZFXHXGVEE", "IJSPQMQTTBNGF", "SWRLVGTVHRKYM", "XXLHDOGAVKYXB", "KTQSPNVKFVQAK", "UDQQZQWUDQUGM", "XURYOLSYKUXXS", "CSVHNJSRVHJBV", "UGEVXFPNRMSRJ", "TBVZSYBQCJZIO", "XBVGFJOPGXVAS", "IKEPZEVBFALDD", "RGHNTFFUXYTQK", "ARWYUAYCVAKNZ", "SAPYWBAIHPLSR", "XDGJIARFJVOVL", "VFCQODVGLRWNT"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 181;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string dithered = "ZGUWDMSJRNTKVAHP";
    vector<string> screen = {"QVVDEORQJFJLOLCOKRXJG", "OBPEPEKEWGMGMAJMJKVIQ", "UXSMPNRYYYTUQXJHOOVHM", "ZFJAUJZWBGRGBVYHLIHLL", "YBIHQHYEJHDTRLLOPRBJD", "JLVTYQEIJJFHJBZSYTLFV", "JNYFPDYMIJWTAJBFALLKE", "TGNDPZSVHZWDMFCZIURDV", "XGYWFNZXZVGDSJTBBYVXH", "LOYHMOZPBYJMSZGAJXKKX"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string dithered = "MCKS";
    vector<string> screen = {"JPXEVBQCITKBX", "IPSAPTOXCVZAL", "MNFHNLSAQGTEW", "WZGZWPUPNKHBZ", "TMMIVDXDLYNPI", "XVBMLCLITIEGK", "AUTYCCOZHJCBD", "OXTTMQCHEDRYG", "MWXVRWSTNXWRJ", "ZSXIWEETDKAPO", "RDQLEBQTCSLHI", "YPKDGHLBRJPTV", "URIHXNJBCNOOT", "YWKXHLQAXYQVU", "YZACCKSVLIVUU", "FMSLYFHYMICVX", "UCPSDVCBILKXF", "MLHKWGUZTJMNU", "YUTWSPASHAWKJ", "OODAWUVEQVNVG", "WAHEBFNQQMELA", "TJOHFOUFTQNQC", "QCRYJJJWCYBJL", "BCBVSLBPQBFOT", "JCOZHCRURUANV", "GIJOXQGBNMVNN", "NWJBBRJGUFFUM", "EEVCFAWDXPAEQ", "YUROJFPNUMRJN", "KAMZSVQTKXIDJ", "XUVSEVRAJHQGR", "ALNDEKILFKRKD", "LQRZKSQEXWCJG", "CSCJFCDDYSUOH", "SHYKVLSRKWONZ", "CROXMROHHLCWC", "LRIJYMVDYBOIR", "ARGSHRNKJZGNY"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string dithered = "LJGDFXMCNVROPKQZUHSTWYIA";
    vector<string> screen = {"QPSUXKEKIQ", "NGPSFRVYJQ", "AICHRXLUGV", "WGPXLMYHSK", "BNXDFMCPIQ", "WSCPRGNQBX", "DGGPVVGXTO", "FIXSBDAQQV", "NNPQRCFTRJ", "NDSZXVQWEA", "EFGFYPXJIE", "FALVFRLAUT", "ECVWTAUBZR", "FOCLLMLFBC", "MSXKUQGPYD", "GWERPUKAYD", "ZOHYFCISRK", "QLHQWUBLSB", "IFUPAXCKKV"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 177;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string dithered = "VMNSROYZTQGACBEWPUX";
    vector<string> screen = {"XUENBSTPUULSNDDLUJABDYRMRXLEUEMALGOBEIKVMLL", "ATTPKHVQZHUEAYRMGVYLLITLGRNDIHNDIKCETZKQTMI", "YBBKCJFEFXGDYLORWZYCXLGQIECULUPKXAESOWIYMEV"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string dithered = "RHAKYMBNOSCDELFUGIP";
    vector<string> screen = {"QTPYVWJDTXJAEQENMBDROJVYWBMORWJDATZS", "ZSSUCQPEJNXPVJVIYSWMRGIPFPQFTZQJIHZL", "IMNZQHDORRTKLIOQUTCSAJXHSBVLXQTVZKNV", "YRJADVTINJQXNWYRTODBJYUFXSOHVNJQFQVS", "UOUFZJCQRYKRTGAMPRWRERINBSDFOOBJOVKT", "ELSXWOCYMGKVLUZRBVVRQZPRYRVKZPQJHEGI", "RMWBHXFWYGWKMRTBUEXYBIXXYQMBJQYTYCDU", "XETVDEBKYUWVFCIGUULAJUTLVQJJUBDXBUQS", "XONRVGEWCWMFDRBYNBBOAREUYTATWDBULIAY", "AUWNBQJATGOVLWTYQTFQBAEEZFUDTJPZSDSE", "JBBROKGXETXZEBVQEGZCVPMNMCSYGZLNDOSU", "VGFBXIAGSWIRJCPGKYINCGQGNVEYOHCQPQZZ", "NAINWSMNTVKCTYOGZAJJPSLODRLAHSSOPCUI", "XIBQJTXOKAYAEAXWDAGEBFQAAKWMREBOSLHF", "WMHNBBZRMIWFNLBMHTBASMHPQSQFHRKEKGWA", "RRKIHJWOGOYGFQIKIAHOFFUOGUWVDKXLJSPR", "BAAAMMYOKQXDZLKXNWBLIJICVWGATVTAXXRH", "GEXPEWQIEMNQPGCIJNEYOSHSZCGHPVHWJVLV", "LFLARYOCMGTWGVIGXXUTOFMJODZZDBYQODKQ", "EJTZFUQTNXSKWCIHWERBHBPSHCEZMPNZLBOX", "EMDLIXYEGPRSUANGLQVUJZDIRIAGITVXGVKX", "QPUYEWSDELKRDJJHGPJCZKMUEWLFLSTYGVCR", "PEEAAGSVWGPDWCOCZFLWZPFSUIMDSVVBSBTF", "WMPLNICHSRIJLXPZQANNLXVVKPSMMDJBAWQC", "EUECZRKHIIMWFHGVRRCDJLVJKGIZVQHFUOCN", "GKEMZQUMUSYEVIMSJRXLPXUHGKPWVMYOQBWA", "DDBBALPQVMRBBBUYNYBXOSZDNXBBFCYDHBPB", "IUTFANTVKZMABALWRIJRDGNEKYIDSSBVQHQE", "SPSYHVTYHGXKAYVVGGABZAUCHMDYQQIKIWEU", "FSDEJZDBEIWMQLLYLCONWHDRZTPIUWFVZRFY", "UNFCACCKDFPPCNVPOJCAZXCGXWTWSYBMXRZN", "TEYBEYEARYLUQJBLVPTZERHIUOCFCMPWVNYN", "HOTHTXDONSHWCSZVVIPZKWZWMMFYBWJKJTAO", "UKJEKMTLBGFEANZNBEOZLTXTPZJCITLVBPME", "ASNUJVXFKSXIINFOUWDUQNQDICSCQJRCSVXH", "BCJIHCBXGNWBJEATQVGGBCDAOIELHREIUKAL", "QWTMUXJJHRMEKRCGHCMELOUJSXYJYYHUWITV", "JIBBNEYEJOQRVDNKGIDKLBYTMOSQUTZTLGWI", "RIJJTQJRMAGWUPDNDYZZDSOMDWUXJIUTUWAX", "ZGYTKTURYRZEZNAQWWJIETIZFTQLYYOBLTPX", "YYTLNUTKEWCKCMHQAJGFFXCHCMNRUVHNKQVI", "RTPZNSJVKEOKOXHVUOGSAJQNQBHMUSGIJLFZ", "TMWYLSQZATVXBDYLDEAAKIKAYRAUFPBRDUBM", "IADIZOCLISFESONPXYBVIPDXUAUPJRNWYAJS", "BPDLXRFJSDYOWGUKFJLNQUSJMDQGNTTWCAVT", "RUKGURFTWHYPDKDOYNSWVTLEOWXLMHQPUKXQ", "VSSOTRBJHYZGVQEUVYNGIOQYBZZHBZMOWCXF"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 1198;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string dithered = "QPWRYTIHJVXKLGMENOASZUB";
    vector<string> screen = {"ZMPTTWRVWMOUMITSPCKSVCJFQCCKVHFKMKFFYDDLC", "MXUSIHMIUHWAONZPMKZAWFLVCHABUKJZCQFLGEUPN", "VDUGRUNKUYDFJUETGKIZNJPXKTPSIECTASZCVBXBP", "JIPPQXKVIAIJXATHWBVOOOJHOKDONTXCXQMRJNHVL", "NMLFHGJMRIXEBRCFAMYWYCAZXSGAWYPCVYMAOZPIN", "EKAYDVJIIAIWZSNMIEYWZFJTMGOZOTHOJWOHDJWXD", "RAXOOYCEODTQWCCEGPIVKLKTVGIEPIRHGBLMMRTGH", "UTEKEYRLYRZXTHBMPHARPLJCBUFPQJNGYYIFYQVQN", "OALUNDPSEDEMGENQQBTESDCBYSUBEQSJVGPSSJXIC", "XMQSHWZDVPDOXOBFISVAWIBPIBSVUYNYQQYCAHSAP", "EGCBNVCXBEOYZFTCMOYQDBEPWWERXNXJHKRDLMJZD", "USLEMNRMPCLRFFBTTOGCEVIDFXKRJLAPTUNGTAXFC", "RUESLNIDLVQETQXEPMEKFZVPMQBFWCWJUELBCHSLL", "YTMZTLWDYZRIEAOCEAQXVGZDDWASZEIPDCINCGVBY", "RGXZGSTIKWRYAVGZATPSCODODYUWWDXYVQAPHNDHS", "CFTRTFMXOCMJUSFCUBTXCXZYRSTVCNXHNFPDJZJQN", "XXZEQRUPYVISYREVQXAIEEKHAXSSIISQLABRZVTPI", "QWMUMMEKZPYYGQVRBVDFRGSNVREVOKEHGWVOYITVN", "LGJYZKWDWVRLTENRARWSITNBHUHIUMFZVOGAWCPRS", "FYWHPFQJTHTGBMTZCTHVFAKXZAWFQWZIDEZVLDSWR", "GAFUEJYVALSASDOCPNGXJYDBTKPFXQIDCJFVNIADK", "QBQBQDWAWSBWBUMHZKUXKNUTSFMDVGODEAEOPDLVF", "MFTIDZCNIYLGQSAQYYTEIXCKGATLTFASEARTVYEIE", "TIBFEVEJQNAYDPTNDPEDOXBCWKEAAMBHAOELDMUAS", "FVORTTMCDAEWYCNLGCJYYOXQRUDRASRZRFNJCGXBZ", "GUPTNLKBEIMQHPDXKEBRSYMJNFDBOMVTCGVZSXOJA", "CBKVRYKHVPOYFNJTDMSMGCLPIOKQJWUICCAAMECUS", "EHNNBBVBVWWQLDBJUBWXPKSWDWUQJVAKDFOMBSVEZ", "LMETYKCSPTDZUTBHUWCWISHTCBPXXQNYUJIEWVPHY", "FDEAQBCVOJYXYLAMEQQCVZKXGLJBCEUATGBDAVJBK", "YFJCDSNAZWGKVXLLZTYNQRZHDRWLRRXLIGPQQVZPR", "KXTCZEMDMZVXKVDPAPNSMMYNYFRDFFBHPXMTIZYMB", "BOQYLAQJAYFVOVKJFQLKJDPZGGIVHFRKBWKMNGZTN", "UDMTADEKDUJIJZTEYSRLZFKDUANVFDKSUZEVRBHNU", "ANCJYUUZQRYGFAGSHJBVTYKONYCUQJKXOHWUASUUT", "VALCQCDMGPBCCTSARBYZLGVSPGXAPPYMYMLOVAJYQ", "XSYOQYYRMSPNJEZOUCXWQSOOKHGXOSWLTQUKBDUYF", "SEEBCGMXZQIVFGKSYXNWTWLTZKQDUSPGMJIYOSTXW", "MAWMJHMJGGMSPUZXKVVRHRFRCCCWGRNLSNLFZDMDY", "VWYMQBBZNHGGZWTWPXRUPJTXPEGFHMJAAORELGSDB", "OLFFLIXDNJVXKRVACGHVSUTJKHUUOUQQQJEGKHMHC", "CYJETRTKFLWIMBMHNRANZIXBOUTNXWWJDAQTVSXYN", "MJUPHRBXSEZHWUUGPUNVMGIAPJREHKBTFEPMRMEDR", "EIDOJNWEFQXFQZCNOOKJXXLQGJRLIYOBGJXXUSVAJ", "TDTZAJMETDHTYACCSUGIHGAPPPPJLDSXZNTLRLGWP", "OWKWKFYQUHNXJOAWCFIYADUQVZAIDMOARDTJPAJDM", "CJIWKGHQMREXYYWWOBBLXODQXLEOXOPQXEUBLFGEL", "GUUCBEASNTWVXEUSIZLXHYLZZERKDHKJNKNMXEFIB", "QCNTLNTIVUHQNEKPQQCQCKANPCSKJBVOMBNSACXQD"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 1766;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string dithered = "MKGNZALIHOPBCTFJQRDSUVW";
    vector<string> screen = {"CXPT", "NDXP", "ERTI"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string dithered = "SKUZIBVELWF";
    vector<string> screen = {"NXJXDNQHQYCNXSLYWTKTGUBOLYYCVUBBHTUUISYI", "QAITTAPRBXLATPOPXZNJUYOPGOQODUTBZKRBAIVU", "CBCSBLEATECTIFVVPAXBFUOJUATIWREVUXECKFYW", "AYYBIWXKSUULHCEOVLXJRTMWRRVUDWRDSKTJJPZG", "DBOVTXTQOVKIFWIWXULDOQIZUDUUIFRKXEPDLYHZ", "AZUIOKWRFUVVTJRWGFSLPTKBMCEQLSQVLYYRIHJA", "RGZCVYIYSPNWAGKXQPKNOQKFXTNRRKCEDDZCYPSW", "JQMTWLNWHMLBZXNCLTVMKPRPSQJJULGYHLCCMBTW", "UBFVAGGIXYVEODSVQIEDSFVZGXJRVXPTMXBVTTSI", "XJKGIOQTIPZZAILBYBKRPIDSJECIODKOOKYIUMVI", "YIDTJZQNSUOEQPBEHLJCIWAQGDURRIHKWHSUGGUD", "ZJNCKKQDUFUOFKDUIJEITVSYPHCHWKXGLRHLLGHM", "ZSWCJQJEALTVGNRETISYFXXCQKTNDWERFHWLDFST", "YSCSLOCOUXBBGAUISBCOCRYIPWUDWVQDDZLPKDCY", "HHXACTGOEFDWRWBVAWLRYSUTNCZMRKOSPXPXZLJR", "TJMVFKUQZBDDRHGYBBAQYOJGXSSJDLMJZMIXIWEV", "HEZIHSMGZBVDWIJEYOUWLOSWIPYDMUDPJQKCCSXP", "LEFCELGPTGIFHPOGGNGPQHGWGOYQAMGDWRIZAKIR", "NCTUTUWTFWNOAMWJMVDMRJNEKHXTKMTSHINIOQAT", "KDBRISILRPEITOHJFETYIEZYIZLZIILWYOZMHTKI", "YBJMGCTVAOIMPGGBAENKBPIVDJXXTLGADVMGSGJC", "HQZIWRCHXFQTUCWYXLCPMGLSWIJXCQLVWMLQSSXQ", "VIHJIQTFFTJSPAYZISTEBNUGQFAFSIEZLUUCLARY", "PBWLKAZZLKVDVWRNPKLXNKAXOJQZNZWNXRGSAOVN", "JRNVICLWUHYXUPSAYKFIUSYYUUAWFRLVPRRCNOPP", "BAGROIGHRVGNYFZRYOZTBINTAVFCSHFXKFYZSLOE", "FSSYZPFEOATTRIENAPCNRENEWGIVGPBVNYUVBHAG", "YGQGVSHLZWIPVCINXMBTUIKYLQKKFYCTKWHDALYN", "NETHQAHVOZVWDDNFRMSHYXYJVIDSKEZRBKGXAMRO", "LIPARWZFWMEVDHNYTQQGDZHTZFVCCNUMYBWMEZDK", "DBYQQHEASNFZKHKOBQVVKMYJUQPULQHXGBWCFNPV", "ZIXSHQIWKUZSJIBFNAUZEGALPBTZHGQBDTJJIYZM", "CTHNRYJHRALPGNJCEMGZVKYXKLTOQGORYEOEKLGI", "FWLEHFQOBHGAUMEOCYJCPPJQKFJBFQJAVGRXJBOF", "YJBQOQNQTMKATXXYCPRTOTHOHVCSFHKBFKFPHUHU", "BGDMHKDPVOEFJHJGIJWABWOBWPJIPWEKPBJTDZPE"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 627;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string dithered = "BWLPHNOYIKMQDGRSAXTJVEC";
    vector<string> screen = {"GHSKKBXJYOHOZA", "UEJOOCXCYKBFQJ", "BGMFSEAILNLCTW", "KRAKQXVDURSAUN", "RZPIHNJFASRMSO", "FTGHMLZLAFUIPR", "YKAIGTDOWPXBFN", "KDQVKGDJFLRLTL", "TDWEKACEWNMKAJ", "HGKFPOGUCUYGLI", "PXBITEEBGWMWKG", "NSZUKZYGOKOOPH", "LYYLVWFOFCFTAL", "PRLDZOGQLTNWWS", "VLMACAJYFYVQLP"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 185;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string dithered = "RDTBZJMCQAVWNPOSXGE";
    vector<string> screen = {"JIYGUVJXNCSYSNGDLWXHW", "FLVNKMZPDGSCDPOFNWIHT", "IDHKLZRNMRQOGFIEWTOLY", "FNQQVMSUIVJPNLCAXKNEJ", "EAVMYYKHQYSJYZOOEEVGZ", "ADJJKDINCRFBHFKMQWJYC", "WPAGCTMTIXHZJXJXXXEAN", "WQMYAJQLRPVKBKULYYGDW", "RWGSOSYCCRDBIVQRDSSPX", "JCIXSMCQXSWDETRJGTVYU", "WVVKYKTRJMQXMANSYJROA", "LWTIFGTGTXPHFXLIOHGAQ", "ISMQEZYIOHLMFKQPVCXMJ", "ZTYWIOBSPYGHUKFPHFQKQ", "ISXDVMDLNNYRHNYTPGXTF", "LFUHXXSAUMPVSCZJZRSWK", "FRJYHOFDAOTVUYUNDWJPQ", "MMZODXBERKPZRZKZZDDYO", "ZYYUWTVVMWIGOHWEHTCEA", "BKXNGOLVKBPLWHWVSRLST", "VHRPLRFJHVVDLZMXKEBFM", "QRRSYAQPUPDKIMNYIVORY", "FTXOAGMLIZIDIUSGZEJBL", "MVOXCPQGBJBIVKSDMZJGZ", "STPAMHMLFGXDZPEIERFNF", "ICILKESEZXCSXJRSLKASO", "LWNHWWDSOTDUBQXWGETCK", "IQPDSGRLOHCSENHTPOTXH", "GVECCTRPGQSUUXOFBITVT", "KAYAKDSHDKOVDOJFHFNYU", "GLOXTGOWIOMGZCNAFCSFK", "QAAJUENDEANOUCNDEITFJ", "VSGHMIZVBHICDQZCCLXPN", "HSKKPDQSEPXWOBLAGBWEW", "FCBLKBCGPVZXIQAPLYMAY", "GWPXXSSKBYMMBDVJYWYZG", "ERODUKDLUDSYQHWDEESKS", "UUQUJBNVGOMGXNEJMZXZU", "TVKQWAUKACXIWOZFYNQSX", "EFLDAKJOIOTCURSYRBWEM", "DPBQWRQKHGQYHGOLEPFFF", "ENJVFQJSQUVEGUANRLPMI", "NDOWCADMUTKHGIVFYJUTF", "ARMDFLLILLQSIYMOGXSBP", "ICQCCEMBWNTRBEOJLHLFE", "OEYLMOUVPYMLDIXIMJKMT", "RIBSACMBIKNURGYHGTCAC", "ADOCUMPQYCYVMJTLJYXWE", "EPDHWZYYMRZBGJYEPINYX", "QDHJTZBXQYMPPPSEUISCF"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 760;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string dithered = "GJKNH";
    vector<string> screen = {"CWAJKORMHGNWMWQWAQYJTZLZ", "ZBTAZDPWVYFASWTOJEKACQYW", "CGCHEYTVQBMQELETJETYXHXX", "WSGZHZCHBGLEGNFVUFXPMPAO", "PBJPIBRLYDOXRSTFSPKPRCKF", "BSNHUXCPZBFIVPXSNNVMARLC", "HCMKXGMJGLYGHFQENSXTATVI", "EPYZOCJCEUDJTMQKTIRORKSW", "XBWQWYANDOLVKENCZOLOTENK", "CKQOSPOXWMVVVLDOKNNGORPG", "XQEHNIBQDZCCQBFCSYRIMFTZ", "UBXFCWXJLDGEWRMSVOOTKNFR", "XCDLRLSILEFMGFMMVZLFEZHB", "ZLATNROXODDAYCJFLIZZKACV", "PRFQSXPIQHTTVHHBMYVKWHKI", "XOESHCPWTJWIKWNXJZQIOCDB", "TRQZRZBNCGNNEOCMCYUHAJNX", "LRFYAEQUVVRITKOYSZOQOYEW", "WFKADJQWPSYKZQVSYYYGBRAI", "TEYZVAZEPMBUHXJUUAOCGBDO", "KSQZGGVBJGMXHPKXYAUTQOWS", "TEACAYYMRKGBGDBHCKWSVJYF"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string dithered = "RVJDZSMYGLNHIEWT";
    vector<string> screen = {"RVHTUUJHUDBRUJUIVKYDCVPILLRLUIKDQ", "FRAWRSKFVEJAVXKYTIAURQNCTQMLYMUMW", "DUFEPXVQPNTNZQURXBCNSMSNVGSFXLGNJ", "BLUDVEGVQNHBQIDPHXWWQNRMOCGBFMRMS", "YQJPWYYVPPKPYJCXCQGQEOKFFMGFYOAHW", "MQBIANPBZBSSXQVFTTSEIYWGDBPSOQIAV", "BPVMUKGYZAGUSQLFPZXEFERBCRIGDZIFP", "MTHYAXJFVAAEBUWROUUIFVLPAGCGRGCZH", "PPJIYGBXQXMZQETBNYRTUFWLWUWJKHFTJ", "BKXRBGJDDCWTTOHQVWBOPPRZVEXEOYPZV", "ABQIRCNJBIVKJTVPKKAMJSRDZEIBMDPDY", "LHAJRFFWQEAQTCWHWCGEPJWRLQAUXNQPI", "LAHWIDODXVUGQFECFRJVSRHKDCAYOYDEI", "XYIAIIRMTHOTUARRYXGGVGIFENRUDZOHE", "JERVWLWXYQUVYHRVWDVOVFCYSCUIHHSGK", "AVSAGMTTDEJJBXRYWQKTWOAFQRJLNMUGI", "ANVNOLJRJUZNZWNWYJNKHCVWFKIVXVDNL", "FNYCEXHGTXGHETRVVSNVJSYIEXMJOHIQE", "JVKEOFQODLXMRAGDPSMAJNQHACJPPVZIY", "LSDLGYBJWWIVCDIUNGQAVFCBNDUOBEEXF", "FYHHVZIUXUMNYUOTJGGNQBTACKMXHGLUB", "JQNJSZQQJCODRVNYVIQHKSGVVLSAUCUMB", "PCJPJSQBHSAWJXNCVEDIZWSPEIDFJHOSU", "YBKNRPGQMBBDQSOUQCTGYEHRHGVYSVIJJ", "JZJENVUUKEWRDERJRZDOEVFERZIOJAXHL", "TLBQFNEEQWHYUNVYLCCFZQECVHWQAFCPW", "WVMUZZNPKELWFKBWPEOCGGALGXODWPHMW", "UOYHYGBIKAHKIPRFSFLWYJOGNJNJNBAED", "CIBDQNBQIPYJEPHEHSRPZWRCMOCDYOJBT", "EMRXADVHEDXJJUEABZIIRDLBHAVIASEOQ", "JRPONFHFBATWEOEKQRIIHFREIBMFQIZAN", "RLHWVEAQMGBMXRPTMSLLOFNLUVYFUIVJQ", "YJBKGCHJBJTQTDAKLYURBPGTTNMSXPQBO", "WVOFBEPVGMEEDUSTWBHNIQJWORUUQJMKH", "ICNDUGRIGXCBEYFKNSOIMWITIWZWMGSFX", "BQDZQOHBWBFLRRATLCWLCDWKBWDKYYWOX", "VXHYISSFQICETKGAWSYZORMKCEVUAOFKO", "DZHOGZSXENULWXYCXHTXQTRZEFCGKBJSC", "GYWRTVRHZTJCDOVBLKGZWMPWLNMMXVEIK", "LENIFDCUFFWUQXSHIDOFJKIEMKGMJENLM", "GAHEVJFJWKLRYZWBUJYKEKWCKJRCKIQUG", "TTYZYGUKIBXQKBDRVCDVPLZZPYSJUBASG", "DKECSTCATJUZBEYJJUTJIGRQFDIJRHOVI", "HNKWMVWKCWFDABBCVVUJYAXWIFFZVAFIR"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 907;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string dithered = "AFC";
    vector<string> screen = {"PDDZPVYBKIDDPBCXAKJWOCCQMPWYAAKUDAJZKWQAGVOU", "NKJARJYIBGTXPQDAJSELYVRFJKJMZCZMUZPSXWIJFHNX"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string dithered = "ENOBPDIVC";
    vector<string> screen = {"LVUHLFQB", "VMELYYDF", "LZEPXVQZ", "LXKYWDFL", "JVARTRDH", "TIVVXHXL", "RVULGSWK", "UGTHPWWC", "IMHDLDTT", "TNQVCUGS", "IEDXBWHR", "XRFXBHVR", "JFXSHWBF", "VRNQOKSV", "RDHBEKOO", "DPOKVCEQ", "JCDQEYFD", "AMAEPDWI", "JQQHQPHG", "XLBFVXUR", "TDRNLRMK", "HVHFITOM", "LINLNNJD", "QEMLVXPB", "PZKHXYST", "BZMWYBVL", "OJIBUUNH", "RCAQOZDO", "WBEXFIXW", "XXNXUAIT", "VIRETJVJ", "KRTISGCO", "BJSXJIJT", "KTCMZBZF", "OQUREFTV", "IOGZUQSY", "NSQRPKWA", "JNHUIVQB"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 109;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string dithered = "NLWZIBOCPQUJRKGMTYSEXADVF";
    vector<string> screen = {"IUSBVCCVMJLEPWZOGGJKEQOPEA", "RPDNERBSODTVLPKDSTKOWHAUON"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string dithered = "PXQOGZBYMNDWRSEJKTUV";
    vector<string> screen = {"YAJYTYVBSYVDDDWRBCSZSJDBHGZKMPHOXGZJ", "CPEEICNNFIQHVBCHDGHDMVHZGJPOWGRRNXMK", "KHISCWKJLROKVIBCTXIKOHWNETSQKHXMFLVA", "CLSNCHDYNKGMGOXUKUFHBTIILBWFEXQTTOZV", "BWUUQGSPCYGTVHPGRBESVUIAWQJPQFKTKJDA", "NIGBYLWLLHOPPDAQSEJBKMJMYYOLTEZCVZVQ", "FASVLMMEZLRIDLYNWFDQNWBAQWVYSRRZQHCM", "DFOASNGAVRQTQEXLTYNQIYPOIVXAUSESFSLM", "EQTWJXTRONAGMJTRPNFYPCNQQFNAOKUYTORQ", "JFTSNNBDPGEHRGIEUPCYPHOAGPLXIJTSVVHQ", "WNYWFHKALQHIYVFAGGEGDUWOVXXKVBWLDOOT", "KYYUBKRONLYEZXJGYSBSXDABGOTBWVOGYQDD", "MZQXVKOVKCIAUIOKMQNVLXIHTHSXPLGVZLIL", "IWVQIUICXDNWQPIYLFWJDXTCLODCFFJYVUSR", "XWNCNLGRAPQIQLYEMPZIVQSBKZMKDJKNPTCX", "SLVPGOTHJDCDMIVPGCISEPXZBUNKNEZTCMAK", "WQADIBTOOQMGKPOATACHSKSKJMZCYRNUZUOI", "JKHHRZIKVJZQQTXQDMCZSEJCHIEXFAPLRINE", "NYGJUXVLSSRFLTZPQQPLTJNXUXKHEWVTYEON", "LZZGYWMILFYIJXNDGURQHEZQSNOWDDBWWBTP", "ENEPMZMQWMQQCFLEUAFHHCZHYDQQIYIJJOXO", "SPDQJSYXOBDTOWZMSUYDXNFSZLNAZFGHTKGY", "UKNBTOOSZCTZCTWEERVCGLMJYTKUXEJBIFTI", "NRNDJFIEZSKQMWLUVTYYVDYZJCNGHUHVEQEI", "DPLEPDVNSKZOKFXOSKQIYRBMPSPEETKHPNCP", "MNXRAJIQQJIJJBMNSRTIRWKTKCPWSHYQBAYO", "EJDGRUQASGDFHLOYCAVSYPSKUWWWJVJSOGKS", "DQPRAWSILRIMIJZLWHUABTEBUJDHHBAYVWQR", "GJTWZYYEPAWLPVLSSJLBWCBIZBCYXLWSECPH", "WODJLCIEUQCXBDBYTVJVMKKJNKXJWZVHLQOP", "EMDLROEVINNWGKLELVCFASGMMRXMFBPESYLR", "QAZUKUQDPSBJCALXULOJRVOCXMKMTNUEWJJY", "RHIDSHDGINECUGPOKZFMMWSZMZEIZOHJPDKX", "EKFRYUKJSBDVZUOQFBWDARXVRECFTBCJVYAE", "JTLRYEPDKMQEZUHBKRLBYZZMCAJPWIVQTPFA", "LOIOBEGPORXVEARRDMFNMZQPVXNFMSGLTATV", "LCIAMCZGPPQJYPYMDFVRQYQOGLCVXNTUKZQA", "LSMHZZFEBRMLXRHLIYPXNPJKBCUQEMLASGQE", "UHUAAWQKQFDPFXQJBKTRZBYLQIAMUNXNJZPA", "FLFPNCPNWURQUIWYQIEPRAMYTAMYAQBKRJTM", "BDWARYSBXGUBOAPUBMPTLJMLNIDCNZTFMBBA"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 1148;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string dithered = "ACUJFY";
    vector<string> screen = {"DHJIFVZGMWJKZFNKWG", "TETGYSLXMAXLOQQXOZ"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
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
    string dithered = "IXNJWBOEQVPFGRUSKTLAYZHC";
    vector<string> screen = {"GKUACQCAGPMT", "YQJLFOGPUFXE", "QUNUOBPAMICQ", "HFHHJQASILKL", "GJZQKBWCPNQF", "SSYIKTWWSJZX", "LIOAQLAGZGTM", "ZOMLQKQOAUSL", "CTJWYRSIPVYB", "WZQUWDRRQNXU", "MEWZHOARWHDC", "DWABXSKJZFOT", "COYPKIKQTOFS", "HLLQCVQUTYPY", "NFMOSOTINJAZ", "HJJTTAFYWIQQ", "DDDDRRNGQJAV", "QYSYIWNPNVZC", "CYXEFRHUIGPY", "IQEHUMTIEPZP", "TWSKAZZVJKTI", "MPMHYDLXGPRA", "RXAUNAQIYTSQ", "EDRUFUOHMUIR", "ADQNNPRAPJEO"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 280;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string dithered = "KAZCLMWXYNPOQRVBGDTEJFHISU";
    vector<string> screen = {"TDWOVUAZ", "VSGTSTVQ", "VKSVSERA", "DBCPOXKI", "CRWOJHMQ", "WCQCFGAN", "FKEXPMPA", "ZAROTXZW", "LZWILSIB", "LQTAEMZK", "AJLBCXLV", "YWLEOQZJ", "HKKMVRNK", "CDWQJACA"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string dithered = "KDQWTHLAUVB";
    vector<string> screen = {"IN", "MX", "HT", "IO", "GQ", "KC", "TZ", "SC", "OL", "RM", "ZO", "XO", "ND", "CU", "BZ", "GA", "XN", "DA", "QT", "LO", "JX", "WK", "XU", "LH", "FL", "HM", "JH", "HC", "KQ", "BS", "MN", "PS", "ZV", "IP", "RO", "VY", "YX", "VO", "KF", "LR", "DW"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string dithered = "GSHFEMTADU";
    vector<string> screen = {"OPFXKPVNWIONYWEKFFOWKHHZFUPWGGKM", "KKAINGAUXHPNYHOXYAYEAACSONJNZQIS", "RAPZSOMBIVZYYZWIUATEALEPTDWMHWBV", "EQIDVPVAZGSZAIXWYUJLYULJMQDZVVMI", "XQDBOJLABYOZREHWUOQZWTTHWRZOXMTG", "XXZULJTYPHWSQLOVTATOCXNPYBOQEZAD", "QDUYJVXRJRGBPBGIKKQQSSBCYASELBYU", "VDWOBKZMDVGKTTZALMPGHKCKHHLNMOED", "NRTRIJIIKVXSBFRITWHEMDAYAMGCBORI", "UISQWIEAZTZHZZUYRCGVSDHUHPOXEVKF", "JQUKLZHADRGMUJEJNENSPWYJFOQSKTUJ", "JYRCUKGHQRJGONJMARMBXSXCHPLUVCWG", "AABLKVYDUHLWAABMXFVGNJORDYELXSDX", "CZMXADVNTPVRFTUYCRPAIVONDTIYDWGG", "VXFNQJZPSBTVFQKTCWGGGLKSYIIGSALO", "POKWCZYEJIDHZWQUFWGGCXYNTIBWWFWG", "SINBYWIZOEJCKNVJSDIQPSOENFDTXCHR", "QFNVBMZAYQTJMRJNOKNHRNYMVTSHSLDO", "DUHNAHRQLFOCHOIULUGDRIGIDINZDIHI", "LTHGAJFHGZYDSIBWWFCHEXNLTAMVSLJM", "YDLYOHUGOSDQVVUARKYIWTOUKNPVJUJU", "WQSGAXXHZVFDMLLTPHJDSDTRZHNITINJ", "FZKGCEKLOVLRXZKFTKOBNPSNYBODOFRJ", "MMJPMGWNCAKWTJOSFVYYDYYUIVUNRTSI", "YRZJKABXSJQXKTIHEADHQIBJYESZLIJF", "ZXZBXETBOOBFDXMULPHWNVVWMMJFDAMH", "QGOUAEPAAJLBNNEKODCSHHBEHKFVFBVS", "CLMOPQJMFGTYZRMPMUDDJIVMSEEKFNRA", "HGNMOYBMUFTFXVXJMPPIVRDOFPAGXKUE", "EMRODXJJMSNDFSPSSPDWKUQODVOABYOC"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 382;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string dithered = "HNOPQAITVEUZRSY";
    vector<string> screen = {"UTXWPNLRAPJSAPHNVXMJN", "MJDKQBUJIHCLCMVJJXTMI", "PGQQNYZNQLIAEYWOXMFPF", "JVPECFTDSJSRCJARGOYYS", "TVGRDIYDWMWLJDHRIWYCJ", "JVGDSKMNZLAASXLMJHBYV", "GLUCOCFFPHPAMQYPTOMVZ", "POTEDNMZEKZYBODCWTFCJ", "NBFCXWOHTSCEQJEQECALU", "NCZFJHWDRAYNINUIVQTXR", "DRVDAANJYSKSVDANNAFUA", "XQYYXWDNTCYIBSCCCIKWS"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 143;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string dithered = "FSHGARVBCWXDEKNYZIPUJO";
    vector<string> screen = {"TVFJTDBLIRPGNKBJYNMIDIALOOHLJYDOZTZYJWK", "USRLCJBWGOAHUWLDJNLMYVYILTJVQALRNHZVXEL", "KFMMYGRKTZBIGMXQBUAQVOJPWGIHLWDEFWXHZJS", "XTLBEWNLSQNNWNSDXMFHEFDNWXPQBWDWYEJWPYV", "OFLKIWVWDDOXNFACREQMOJFWZHUKNHPWTCPWOOZ", "JMEMWNSSECZMAEYEVKEJDGSFDGDIZOZUDEEZOTP", "BBJWCTEXCOGZEKAOWWWVNVLMMQIRXASFRHVNIXN", "IJPOODHMRIVRMUNAJQDNOGXCHWVOWVTGVYHFRJE", "FRZDTVYHNZHKYVOBEWVKHDIWAHSZRYFYMMYVEBD", "SBHXHMEJKYPLXFSYCEBPLLCNOUCLJFKLSOVMDKF", "PNDGGKFDCHJWPLRMBEOQNFWXJPHGCUBFCAORDLM", "POOMQTVDTGWKDGCIIBEGDTFKHENMPKGBNTDENGH", "KZIKJOREXUQBGSWWOMNIAXZDLYQECLQQFGAZGRI", "DCYHWCZBHBUWGDDEDPCXPMXANVPQVWFNHSAMWFJ", "HJKPFMMGNCMQLJNRCMJHRCASATSVAPCXGUAGIKT", "HMUUIKXYNKBFIBRLFEWVEGZJQDYQYHALCQHSYUR", "MBWVZBIFERNUUAZNHFSMFPSEVUJQBQRVGMGCIDJ", "OUEWVIRGKYCRBUQIVMCUNOPWDNUWKYGYAIJIDDD", "JAUJPJSSKPXKGQWHNKIBGOAHMZKIDVGHXTWJAWU", "ZQCBAJDGEPWXJATRRJZDUBVWGMPLDXUXSHOPZHS", "NPBTHZNWOQQKYCEJMKLKGVQNTKDVBSEYHHJQNGP", "IQBBAGWIKHMSGCQGUPHAAEISCZITDICUIZFGNUT", "WFYNOHPLHGCCMKUKUXNBLRVKUBSWFHYYVEOZAQP", "GPPVFBERMOVLNTFBLDUDRWIOZVDGNCEKUDLJHZQ", "UCVYCGPKTHRIMAMVBFHRZAFSVTKAUBSAGDLNHZB", "QSDWROEMJZYDCZITUPEERJVFCBURQZOUBHDJTKA", "UEBRVIRVHZJYGJECYJBVNJJIWJWEKCZEDASZHPI", "CRBITUGSQXKPHSHHGXQQBLPIHREHKTATQIIYWJY", "NOULBRWASWVOMULSPFQUNHIGLAJJFMNJYDLMKVK", "TBBOVPSEXINYOZGAMXLXIWXESGIIZQOYMKUIVCO", "WFWYRDLKOPMFJPDDOHWXPBVXDDDJZSMMTTDEWLU", "OFOYUDWTGKKRYZFYKPJRAVVYUMDCWJUAHBNCNAU", "VAMQFXBAEZUKRPTHUZHZUNVVUHEGVZWOOVEEDKH", "ZFLAWFMFXVMKAQPHMCCSJGQLWLBBGEDYVBJNKPL", "BVHEYCHXNYXSXTSPUQBWLGTRAJZYMUYGRNEKBNN", "MVZIFYRIHCYDQSJDVZAZDIIWTBALGVTRMXVLBOF", "LGMBBFKXFURTYCBXWIHGXCKPLPZHTNJZPVVKMNZ", "CGACMBZIQJBNPKFWAHOZVGSUJZVNYNCHQDZDHPL", "DLWUYYOWWQAKBTRVVBFUEAHZKWDWUFLNWQEHQBW", "HZPROEOWMETGKHHNBPCIYGQVPNGTFMTMHPTZXEL", "MMXFGSOMUBIIZGUGYQIBENKGZFPJNNTLUTUHAPV", "WBFZMFZSCCFFBPYXWSNTYHMHCDTGTFGYYBZIYBP", "KKKGMIZCZWUSJRRXWKEKLFTCDIWINXQWKYEIYVG", "FDAEBTRCZIDZFADFVUGDFOEZHGDBSJGNSJVZCFF", "MSXNNSUTNVZNQCFCVRLYYADTBEMZGKOGQLABQNB", "QKHJZZCMRTUVRCEUZWLSCDREDXZTPZJXRCUOGXO", "LTMBYOEVOBTQIZRWGJYONBAHUPWEYVXJNVOUHTW"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 1578;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string dithered = "HTEMNGIYRJUZSFOKLVPQ";
    vector<string> screen = {"FJOBGEIWZOVZUXKTRZBYDXJSAOGWUZDQS", "YMLBKJCEILWBQQXICQCEUXZCPLKKJEBOJ", "TIMASCYUFACWWWZHOKZIAFXELLTNQVYXZ", "CETEQCOWPCRZULFZUMETPDBDIMIRDCPZW", "TKHSDLIMMSCAOZTRGZGMPBTDJKNDPJIGK", "ELDOEOLHQTMRKIZWOORTGXSCKXXICWUNB", "NNUBIOIFLXAQLUPQLFWCTJAGFGEOCFLHH", "MSHYGAHADWJEPCVDDPJVICXBKCKWDGRJT", "ERBBFJQSDKLXVFQXPKUVYSDDMJKPDIDQJ", "XTUKWJFLSSWCTGLVRGOGVRELDUVXKRFWS", "FLUXDUSMTCQGLWPVEPZVJOYHKZNUDFEDA", "IQEYIAYKVLEZAUHFADGPFUJMUANBRQKAY", "PCHJAXRGOEYHYMBCXVADHUCOQXOTNNZLE", "IOLDADJWPXERKWKNHKSBXVPMDKBGTPXKG", "UHZTQCENYJWXEHPKNIYKZDFOTHLLOHNRC", "RBSPMRRZDEXTLQZXBQIVVYUFADCQHKFWV", "XSPHNLWGOCWGTDYFYUYQQMAUGVJTCVODD", "QYQHWTGDAGRCGGRSEAAOCYRFUUIYOUSKR", "EZRDOSBKVRFPJEZVVDXHDOCTNVXQARXRZ", "CTGBOOLEJHZXBTGUWKSRNRJWOYBDIOQHE", "MGFCEUZVEOIAEVSLSFHVURDVWGVXMMTHN", "AYRQJMHPNFSFGFQTLZCIPEMCMMTDRTINK", "MECJHRZTWBLCGEWWAIBSDPZICIRTFRNAT", "FAOKZHIBNMUDXWJPIVTKOXJJERGLGVIVO", "EARPECIXCBEHGJBGQCVVTRBSMQZYTBYBQ", "XHJXUHLOXDRVLVNPWVEMMYYXVPRETSERW", "ANBZEDQNQIQLDLTCWLLJUYZOLFUUREJXI", "RWLRXTCHTIFUMDWDEDRJPAKPZSZZWXEHK", "HJNGEMXSOXNFQWBEHXGKUCTXVDPMGIIBJ", "OMLMIWPLLAOUBPGYBRKQUSBECREUUGXHL"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 742;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string dithered = "CGKND";
    vector<string> screen = {"INVCUQ", "QVRAOL", "UUQWGC", "NUCIWC", "HNTTFP", "RWZXCY", "KKCBTD", "NDQZZO", "PBZZDA", "DTBGGU", "EFULBC", "XESHUF", "PWSITI", "UZDMGQ", "DOTDES", "JHWWJR", "EAZAXH", "QTNGKC", "LNJKRP", "XHHHBH", "YEFCBY", "JGQQBK", "RQNSUS", "KOCWUC", "TSEYPS", "MUXDHG"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string dithered = "ZQGHUSNAYBRTVIMJWX";
    vector<string> screen = {"RQGDJGQGIWPTKJSEHRQPSXNYOHUYGIPMXBGXSYEZM", "PFUGULBDPHDDUCQSJNATNPUGNTPLXJBYTYORESESB", "RLXCBJFHKVPQKAUXABKUVPXDNGZVUPRNFGOJGJANV", "OXZDVWYRVVGODKVEMQSZYKOVQMURKHQLJWOGUMSOQ", "UYBHXCSQDOBFOLKEKBIWGDWCOENPRJSKYBNCQCSQM", "EBOPLHCPCYYHSBXSDEPUGWSQFVBUGDXHHQEZBMBRD", "NYPUVVEQNMCDNRQHRQFMLFLNQPVEBNEUBZAXACAUC", "YBHBBCCXCVOSPKDUDJNZUCKDXOCFNXMDQBBOEPJXF", "FOANPOHJRGNBWWMZYPFBVXQMMMYXJFNTJTZEBNZHE", "GOXCNAXDBJKCTLUGPVNIDZMGJZYZTKQCGDYOHUDHJ", "ZUUFRKFVLABQXQSEYPPJHHXJATDTZMMUFHEXRWLPL", "JSGJNDOKZXSZEQTDCVOFHDVUDRVMLXRYIPYXBAEVU", "NFHWDMJRJVLCCMHLXAAVGATDTEKDXKCTBLEXPCRSS", "NDOVISYYVPVASMODZVDWQGWPWWOSVHFFUCBIVIKEN", "KNNRVTNHHIIUKLJPZJSEOKSXBJQMWECFUQYMRKTXK", "TRJIVGHOECDZXDGGIYBACCFMUDABVLUUWPPKSFNUX", "YVGOYGOCGBBEMNQTYZELHQGRHFFDGSVOPBYGCRSRC", "JOCPKARVFRAMYTVAXOTLNEZFWOFAMKXYHFYEMEVVV", "EHJWIFIQLKRZAMULIIJAYSHMYIBMMVTJFJSRNXRJJ", "DSJRAJXGIXTCDJAIBQXWSPIXERLQEPVNWSNELEJFN", "TWCEAEQNOEDZVNTWZRNGEDHOCUIBZOMZLPWYXSNBJ", "UIWWJRWEEYJUGAFKYJINIOHXTQIWDQSNZKZALCJKX", "DBJHNBOHSMAQYWAMINAMNSCUDCZGJZQTAMBIOIVWI", "FAUOCQDQYICCZLRGVQVMXKMXSWKIYBWRXKESWBRIR", "DSKSVEGTPQLRMTWFUWSNZJBERXNEZRUBLTQOKSHRY", "APDLNMSOZKTVAVXPYIAXMSFOZGFMSTHIKLFQTULFE", "OVFZIIADVICPJZEBTWFIJSPJIVNLXNVYVZYPDWYJR", "QUMMWZBINACEYZSNXGRLPIYUTWOEQBAHSJOWORHRI", "YTYRVOSHNZMVNZONXTZUCPVHFXFPWKNPBGGZGIZOM", "VLLYSUTURAIWKSXJNJDKHRALTBMQNZQAGNIRRIVAG"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 871;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string dithered = "ZVQDRGANJEKOLMBPCXFHISTUWY";
    vector<string> screen = {"RRUAMJIGESMWVWRQEMOZWKLIDOINKQP", "JLVOBPTUZCTFSAMZZHAYKYRJGLIYOWM", "SSNCUCDNHHVNJGRMCKPPLKXIHJAHAHZ", "GDNCYBBUXPVTVOVGKNTOLDEEBWOHFVY", "RGKDWSKFYUJUGLTHVSRNJQTFTJPCBWO", "BMECZRTIFNPRTXVLZYPRLTFHZGIRIEN", "XXAZNLBHCETLSMGGPMZHGUPOOHSSBQH", "EIZPYMAKGFIAWTVBCKQUKDWGXNLWJJZ", "ORGZTPVCVMOCZMRRAAXQNVHPUTEQMLQ", "QTFPRPAFOLIOGULPFZQZPZOJLGGRVLH"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 310;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string dithered = "BSMAXRPFTWUCOKDEVLQZGYHJ";
    vector<string> screen = {"FQEXYFWVJSVOKSPRBKGQUVUXLAQY", "NESHYPQQHDIEEWWNGFRKQUFSUOLC", "HQLZFPJDLFPSOCOPXBTWKAMRWURW", "JSGJTCTFBBHTZPMDPDBPXQQPOUAK", "SBGAVCKWVRJIZZOXWJIJLZIIAYHN", "ABJLGUXEZXUURCLGSYVOMAHOYOVD", "BFEDTTHUKABNQIWPWCUVQNXUMQGR", "UBYLIEIVTHDNPEURHIULWGXKFUZU", "SPYKSOOWBETKQSBDOQHNWMDAGVWB", "GKHGKTTCUJICTOPIZKPGLRZBDISU", "UXEQRUBRHAMAVFKGIJTZEDSZMPQG", "FVMGIDLLABEJDBCAHPJBQKCZGSUB", "PWIAVZERXVSCQOZALQVYAXEXKAMQ", "BPAGHVWKIOCTLRKJLCBMPQBJFWDL", "SQZGTXVSZBDGDBIDWQNSBKKRRCHM", "ASWPINWOTYTAEEQXZBTDQNVQZFHS", "GMIBVOYBJBVUFAJXPLEFXQYXWAHT", "NAZGQMHJLQQVBTEPZUOZCWHFUYDN", "PVOOIHOPIONYTPDHVANGITJTLQVD", "NYHJVBTLWLFEOYQQUYSFPLFTURGH", "SPVNIIXBAIVJVFMHQDOFFMXLPZRC", "TUBPLEMDTTFMIZCSGCNABSKJLWWZ", "EEBBCXLNLOSJOTSCOYEJPBXTVPJM", "HAWMIHCOGETTBVGVCOLATHGUXRCY", "GLTSAFUYQQZGPYMNAFJVZCMVHULW", "INQBHMXPJXULUEAYHOQOMNLUFVJH", "URQRSDZLJWSAQJZTIDUMCBLUFXFO", "NIXIMRXOGAYMFDILHFWIXOJRICZY", "OKCVIIXAZJQBOCQNLHSAOETGZEYX", "XKSTPNSJEMCZEWHYEFJDBVJFSLPB", "UESKVGCTQFYQPCXIOKAVMKEMTJBA", "UGFUFLRIEEYKKXDUKBOJRINMNKSK", "HCKFMQXNOVATELVERIFTBOBHHFPK"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 857;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string dithered = "XNETHVS";
    vector<string> screen = {"YITLXSPQUZSNYZGKZADMXGXLKDBCBOUYBDRV", "BRAYBIFDJZXYVHVQCGYXNNJLTVJLAYIUFPYE", "ZOEODTVKRSZDYTUPRDLSRFBFTDTKBVVNSNGF", "VYFLGAAGIXRMLRBJEIMZDYCASTVKJAFLRFFJ", "PXALAATRRXDHTEZADFZDDNDHNRKDXGDJASSP"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string dithered = "QPFWZJKEXIL";
    vector<string> screen = {"HVTHJPOEXAHRRFCDQOSNDLRBOZIXSQISODUPRWTFGPZ", "BWIVNAPTBVCODRYVCBGMJTLMSPFSZEVZTYFIYVJJRSV", "BLGIYGXHBTKWKFQYYKVFBHDYYIJAKVNSLLFBIQVRZEJ", "QLCZCGRPNBGUTRZUBFEFYJWZFNSJNZWFCTMSEWUMORO", "SXGDLCBHNFSKYYNJESNRKLLVXORGNCHJJMQTBMISKNT", "ZWDRYWXQTIKSRABCPLPHPZNJEBNFFJTERPOVYLVGXQQ", "CUSBXHIUFCJTOSKQTSHWTMKSPYGAGDENKKAZPWUCEWP", "JSCBWWTBETOOUHWLIPFIKVAYPLOWJZUFIZSFWXHJRTL", "PIAFLWJTXEDWKUTYEWEQDDUATBSUHYBWBGZQUUZXHIW", "HEPJAMJIROXVQYBKINHIHOWGREJQXFWJMUWAUXLUAXV", "TGYRQJSRVHPGBDKKHFHQLJZZRXZMUZMNHUXTWJTAQUK", "FAUEGWZXADUKNXDSBRSVSLAPUDEGSCZFCOUQURHWSCZ", "RWZHBFPTIVWJNWUWTFGDPTXOMMDSKZUUMHBECENWARG", "XCYJNSNOADZDIDNTUOBHQSNVCTMIQNBKGPJAFEBJNBE", "HXAOJXCDCMDXGSFMUHLYRELEVHZERGBUZLBCYPITWSZ", "WBKHAESXBTXNMCTDMXBUJKHYRZQPNHLJDULTRDLOUXJ", "EDHCTYWTQDLHDVMOVGILBFYBPENBCGKYLMUZMYUGRHA", "BXSIHABSGWNOOWCSYLPGBVOVIGOWCVHYHHCQGPABOCR", "CGQWNLOXOKEQCLVOWPZOMVDUWZIRIXBCRZDLFIRXHAK", "NJTOYRNITBEBJZQFLMMKYHLTKPESILVKOYBZJUFGUHX", "BNOZLMLFJBFCRWITRLVYUQTBSPSOHNWCGLTQMLRZGJW", "PKVMKBJNDQSXSLLBYDWVYGTONXPLXISGEYGJLBUEMXZ", "NGVYDYVFZBZPEYOLEHXXAXBWGGJYXSLDMJRSOCEPFDU", "HWNFUTHFXJAFQQPVXAPFZQZFRMGEXRYQAHKDFHNHPPZ", "YNFYNSMUNORATSFINBJERGTCGDIJUVMCRKMJMQVOPXK"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 449;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string dithered = "VOYUJZNIPGXQAK";
    vector<string> screen = {"AQANBAAUDUSFKXOEEFWPWOXGKWIFQVEQTNLWQAHCF", "FWDYFHQQBWDXVTBGXAWJPXWRNJDEASPJFLQPSQLVX", "IPHHBMXIEEDTJMGTSVYTORAUUMYGGKMBEWMUXRNAK", "NYABBMFIMHJPCVLILOKJVISRESVBWCKZDANAPJCRC", "OWQKBIVRAMISFDGOMAQJAFLBQBAQPSRJNLSNHASHI", "ECOJDSNAOBYZMFTYXOXAASDMJHRVOGTQDJQCHDYOC", "NWKHCPCWNUMCAVREBWRJLTKWUAWLZCPAEIADMJNIR", "EEBEYMVFTDEYHCRYRDUCNZSWKLCAHLEJDFMHCFYYA", "SVDNFMFRTKCEPQKHZQJVVLBAZAWWKSDKNPRNPSHSU", "XTNNARBDIIFDGORUKNCKTSISMXBWBDQUEJGXHRSRX", "TDRSPQDQAAASNIHHXRAKSJHQAJCUBKTJKNQFMTIFK", "AOCISKQUKCDDHHGQISTGRUUQIWCKITPYWCTZPOGIG", "SUQYUPDVXLZXANWQOLXWWGYKPPUEYCMGEREIXHZAQ", "UIBBCAMUTENYJJCPPFLANDLIOWCFCKBPSRJGSTTGQ", "IEWDSDAFMJCEDMYGGSJNVLUZJCZMUCDPVBIVMXNCB", "KIRRKJMXNXKLGELHPNTTKXJKJYSLZKBGCYJMZKKZS", "LESIZLICGURBYDKKSAJKVFXJXHAUEFJQKWURSZGDW", "CDKFYNCLHJMLZYNGIEGHDQEGVHFEESPKCPPYCIGWJ", "URWECUVDVDZKYUZYQMGLMXMSQPJAUSVJLABRSVWDN", "GTVXXCDXCEUDFMPLULEPXUNYUOBCCGJTLBVOSATYY", "VJUSDMOPAJQTFDSBHCNCVCDQBOOLNUOOSATKSOZTP", "DSFWPVCJXYIVNOHQDCVMHKGPFRZKINKGEZDKIMHKF", "LWRURPAOZQYEIUGRSXPJLVJONZOYOSQHRQJSUMUZH", "GCWFWCLRYREYCDWNMCSDTISGWNAXBUBKRUIHWHFNM", "CWAUOEERQWIMZTLCYJPSACVSBGVGZOUBCUZDQIWUN", "ZLZQVTDJMUCZSFTXTIYRMVIOWZIOVKURCBNUUKZCA", "UFJJJJAJOUEDJLQZRELBHLUENECZXVNQJXCQJXDRY", "ZRRKNUQFONNMUTMFJXSRBQWWVXTFTALJVYIDREINV", "AAXLYHAXOYMORJKUGNHZFMADLLVRZGZHIYMDWORQU", "JEYVZXGBWXDFVJKCGYPETQBDZIXPJQYBKYHFBZQXD", "LDAPGEBKXFIQGVQWMJTTYNDWMULFGKBHQZYLILXYY", "ZAZNKEJLWFRADMDIZHWBQLBFHIFYMVUVATNNYVTPQ", "JIWVVEANGVACHMTAGOUDMUSYUBTCFXHWVBUWVXRNW", "QDUCOYWHCBHNGUNUUCDPVYCABLACZHZXQTMGSNZHY", "UGUITDUTRVTDKLSHQQAOJKABTYFYANECRLXBXKKZU", "PBBVSJKOGBHKNXPLEVZZIBNFISYDGIVLTADQKSSJC", "OLFDHJBFNPEAYSRJQXUZRKDYAGEKEAOGBMCZQVODZ", "ZWLODJMOPEZLRLIVQIELEINEPVDCLAPZEPBNJYSKK", "WCKMVIMIQJDKPNKEHSUHLQSJBRRQCFCIXXTQUPQCG", "NWFOPQQJWOMXMBHVJTDGERFBCKUBDFCWAWOHHOTMR", "GQXJSQSLNKRKNVFJEBSEFFOXRXJAAKOZVYICLNKPV", "CLVEVEQRKMFOEITZJRMCGKGPQYSHVQZHGFVYRIJJO", "WEQNEJQOPTYWRMITVVQRZHATJQASVCNKMKSSIQKVF", "TKVVHZGFIKYPDXIUGDJGLTGBVHAKUJWYIYMQDSSBL", "QNBGUIVZHKUXAVYYZTLFKOCVKAFDIAXMELLWPQGRY", "ZEOUKTJOMCIYALKIRJRVXZFYXCINOEDSMNRJSSKHU", "OVBDPMWMXUNKEMZEPOIRGTEFLUUQCUCQFGHYVJDWD", "FNDFTRAUNMWIRVVOKVBABVHZBNFVOEYPUBZONDEQT", "SSRLCNZKWCHKREJCXPIJJNRDAFROHDWHKSEHCDPCX"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 1100;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string dithered = "LZMYAVBNCOPGSJEQTDR";
    vector<string> screen = {"VKRNBUWUV", "DRURGJBQB", "IPCWEMNDV", "KXGEIIHYJ", "XZUNTXCIE"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string dithered = "SOPUAYQZFB";
    vector<string> screen = {"LGIQGESOHPCGLFCJFBMTYVRRFKYVKLYBFBC", "JTGQPLLSENIRLWLVTWORUXLETFZIETGKILK", "CAPTQTGZMNYWPGFFCLCHLJZHXIAELZRCOTC", "KHZVSDWUIRQGKQQRKYZSLBLMJLKTUOMRRNT", "QYYFWNBFKPJGYSGYLVYJTJTMTEYKBRCPGIR", "GVRIYSGHCYDKKFIYZYERSIKHOZEYLYKFJRK"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string dithered = "CDXUELBYKWFIZOPNGAHJMSQRTV";
    vector<string> screen = {"EBIOXNPSIJXTWRBCCNEZKMWZAFHUYQENAVKIDHFMG", "DYBSISJQXHPYHTBWWVPNSFGBUTKBUQQKCVNXSCMHT", "XNERKGLIMOMGTYBJAVTZEEXSKBBFSPOVXNIWAUGWG", "XKNHTLPLDRVPGKZRBXEVGVQFXCNLXXLDWHSRHWJAD", "UWMILOVJRMBDNARRGBJZQAVLTTCUOTARIVWUORNBV", "ZNKQBWQSPLGVOVWWPQHJSIWNOUOILDDGAKUARMQUM", "CLZWKTJMMKBESGMSSJTVQJCDCFUUNNVJMEAWHKQMV", "MIWPTAXTDNSZBHLIYYZLTGTIWCLQUVJPWYIADTGEG", "DXAAHMHJORLYJPTMESJVDRUQRZVATIPIHJMSXXTTJ", "NWDYHDGNGDMIHRQFEHBOKLXYNEPYDBWNLAPQYHOJS", "NUZNEAOPHCOFQNEBSVSDFAOQVYTSEGEHCAAAZIYLH", "WODKAFYDQZCQATXRPRXGITGRNVTOXUCUHRVYAYDSH", "DXHABRLQWSUDQEOFXAUGLDRGRFQNPZJTDFELALNPV", "MNZFMRJMVADTQYNIBAKGRIGEOOKUJVYHXJKYIVAXE", "ERQAFGQOIBKAQBAXFLDISTUUIGCTRSWFCMBKFUKHF", "YJRIGVJQNBKJAQTXJYGFQLTCAITZPVXMBDSHTZNOD", "BGMMBOLNYUDKNLGNVKQYDDRSNUOMFYQSYOZLOMRKY", "CEGGNOTDNMNIPOXWNJXJZSXEXZQYUZGYNMBCCEXEF", "DHUTZICEKUBLYOFYGEFNQZNAJZCUEFIKXYSEBERZU", "TQQCSKFATRYHMNHJJMDYCWQSQVQITREKTNXAPFBVT", "IZKLOVXDEBMVUMEXAUEPITWOQCABKGCGHOKRTAMKH", "KSQNNLFETAGORDLHGXYWPOMQKJFVEAGAHEOTYVLUP", "XKXKCDTDUEXSNQLFWBMSARJCVAQCIWPKRNBQBYCYA", "ZXIRSRMAFWZLPSQULTLEMGTKXMKDIUOBPPSUYOKZQ", "FPVEVOWGQVLGYKXWAKIMZXJESZFNNSNDHKXPYKPTV", "MVSBSCASLNPICHIIKYXBJZMQZZNHYPVFBLUZUTCLO", "HJAXYUPIPXLDWCGSOIYGRMOIUWETOAHDWHEHJKVKP", "WRXVZHQDXWCQGWZMCNMIEGVNPJUCSEYGAHZLZNMKS", "OZBDSOQXZOAGFYXLSLEGGFJQNOUIEPALBLWRTHLDW", "KSQOTWPODKILELWOGWIGOQKRTNCHNRPAXNNPQEDWG", "QFGUEXLCUUTWAHOHQKSOPWXLCGGEVJTZZMQMFJPFL", "OKYUIXGJOFVVOMJVVGWEOZUPJGBHSGDWVSQBURMWA", "GXCNSPXRURXIWOXRKMNGHYRPMZCJBBZPDGLTGHKCO", "ASGHDBCUBRLSNAFENKYOQOGQAAILQLQGCUBKUQGHB", "ZYJQPXOQUCNVHJUNEDGXVLOUBXHSBVQSYYZEIJBVO", "FVNNQBPUFMQADJQEWVMKBKONDQOFSZXUNPGVURLQS", "ODXOQHMCLHEWXUVKCLDDSMVNIBCIKDZJJRLUFYJZT", "OCRTJYDRWLEVWQISEWWCCRQZEOKCGOOQYNYQHBYQW", "EGJSRMLZZTKWXFYDQUTKAOPVXUUINJCCQJIOVEVSO", "HNJQGSXGZGTWHVQICHRCSLHKVWFLYHNAAQYQRUDPO", "QWCSWMVCZWYFRLQWBJPKXTBIHYGFFKWRWCYZJSVOQ", "GQWQNCYVQQUBGAPEFZWFJMYKKZSYVOCWDTOZQMLHC", "PAYHQBYTDXATVGMUKRNULOGLJBDNDJIDIYRGSQRHG", "NUMNAVTQCRYDVRRRNKLXKWGMQASOALZMYETPMJOVS", "UTEGAMYQERWRLEBKRRAGPITMANMDWENVKMLRXAFMX", "AXEOLIDTRTMFNLNUFUZZEUKQLHLVDORMWVCPOYPAL", "QEOLSLPAQMCQQWOHGKQMLVRMIACPTMYZQMYPIDEJR", "EKLVNSGFGENTVSAZVGGYEVAJUFYPALJPNXBYRZXMT"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 1968;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string dithered = "TFXEWRKGHJVC";
    vector<string> screen = {"QEBUSGLHJXDMKPLQYAHEWVZAVBCXXOWXEHOGOGNAKFJKW", "RMEFWCAIEWHXLMPWXSVLSOYCPQKVDQUWNZSZIJTOTZWRH", "XKDDUTPCPWWDMNMVFFUPOHAFCFYWSIJMRMOICJYWLBQGF", "GCWDNBISXXQMYZYQMGOKNYFSWWYHZEFGOKWDTBQZVUBNG", "PZVAAZHTZRRADIKDVTQOEVPWBHEQTUKJPSIRHSBQMZHUL", "UQSNYDFOQAKFAYZLZNJNVSCDFXCJCXNKSVUJWQTPOEUCI", "PEDPPMCWULNPEQLNLRGVKAYPVIGTNWYSABZWHHEILABYO", "BINSJVQTQGEPFDJWVIZBWWKYBZDOTGKZUXFGGSZDXHVGT", "NUIOYQRNQEXPTAECNYIPIQLOXGHAZYRGKQFFPUWCVLEXE", "RIXYQLOYCKQLNIBGAXZKTNDTSPGFJEFUOYODEVWXFBZRF", "NLXMZZLBHPDBDOCYOMDKVHYWRSPEHRSJRLVSIARYTTEDV", "NSHPLUHJMBRANWVMIRBXJYMKBKOIQTKSBVKKVVRMXKOXV", "UMTFKVHAZNEJGJKNPKNGPRSYYIAIHZCYWMCBIVAAWFKWS", "AFIGCLVOQKYHNTBFUEEVPVHYQBSFQEYYKYJRTMTBYVDQP", "OHOYNWPDUEGOVHIALSDJSFMDPFGAEXRULZYTOFBPDUDTB", "PDEERYVXBBYTSJQJYQMAAZLDIXCTTZMSTOZAAHBBWIEJO", "GUHORBVYPDDIRYAOSHDPAPSICJBRHWQVBONZBQPBOFZJX", "VLWXPFMTAGLAZZGQCBGRPGNYWBUKBVTVTQTIDHNRQGVKB", "MZFOVAZJBBTLSUHYWYLPCYCMNLWGKFYAXNALSXJCBSHPN", "RMFASSXZKDMUSIWROFDJDTWFUMJXFBKEKPCOIYRHLKNRC", "PUXQNQXRDBMPEVBAMERAOXSXIORILNLNZRUEWROOAEWDD", "OOVMGBDTMPPXYFMYPBVEOURCSLVYJBPJESPGVEKCPIRVA", "QZXOMGWFCZPIOSZORLWCERZLVEBFGMGEMNKHJVYUABPSO", "WJDQSEOESTMVNIFAAVSATWQUZOYTCACUVWCJTBKGCBHBS", "GDIOZZNMCOIXATJQJABKCVGDKOOVBUAIBNTUUPWDIZCTO", "DPGSQCSQMBMFDZVVNORIHNHBFATPHFAOAYQFGKVQRCWQW", "PSVNIJPIPQMXMQPTQGMJZLAXEWINSGBJWECWQHFNHTNRP"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 536;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string dithered = "MVKUQDJOEST";
    vector<string> screen = {"TXXKQWVOTLASWOLOAFW", "CRWJJAFVCJJHEHZNRNS", "LACBNHBXTBAVNJPHDLM", "MFRYPVIPETMZJOVNLYA", "GQFGPPVUUVDHRSMDIFA", "MCVMCCMZHRYGAQORHSH", "JRDTTGWENRLXWQKOMQG", "AVXCACVDHAKTWOZSXSM", "BUXRHAFVFKYOOZNQEDQ"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string dithered = "JOXGUYEZPRDAVWBKCQSNT";
    vector<string> screen = {"NZHZZCCVFPTFPUMIJUYWIG", "ZBEHUKXRMDZVXBFRRDMQFF", "VEPWJUPOOISVFWAIKISFMY", "HSAMFHXEPHUUDDLEGORGLI", "XIJDQUGBSLAFZWZCIROJKM", "AYFSOGAOKTWTGPRTBAMWRJ", "KMAIIMPADWVDWGXEJDKRLE", "VCGMQDERVINLBTALEBPCFL", "FMATULLASLDLQZYYXONCES", "ZOESCAFAPRUDLFXYAHIQTV", "RGZODYPVDGBSTHVGTWALWF", "TCUYYNGOQFOSAGFGATSXWW", "ZHSODRJXDQBCRWEYABNTTJ", "AOVSUMLHWTANVMKKXXBPAG", "QFDIKVUXAEEILAUOKSAJED", "XRCCSGKRPOKJWEUJMGVTTG", "KKOLSLJULXJQTFPQQOUXVI", "CPAACNOGAMTDVTLNSVDTUZ", "FAKBNQYMMIBVJGPWFQYIKE", "MZMNSLVSNTBNNYYHVOSYUZ"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 353;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string dithered = "ZAIDBEGQ";
    vector<string> screen = {"YQKQLJOUGTYZKDTWDTQQIHHIWMNCMLA", "KDTFJRKFSXBEFZDCFVREKTFAEPZWLUH", "DWWLBVJTEOZMTPRJCRCPDTWIIPDLTHJ", "ECZVPVNREOXCQPPJPZBSWAUBADWIMVC", "IWKWNMEHFTRCHFQKPXRPXMFIGJPDVGG", "UYBIQHUYHDQJOKVPUVKAAKSYDLNENHT", "MPLTWPYWBWMDYCEYJSTLFQISGQWLMGV", "RLISSKPCAWFLZNVENSJWMNOYGTRKVAC", "ZTYLRUNYJIROFWVGJVCUKKYYOQVBAKV", "LWEWQYSRAHOYFGSPZTYTYAVEHXYQKDJ", "NPUANDXMCYGQUTZZAVSDAEVNUSNGJRN", "CGDMAXBZWHGQWHGGNKNJUBDYSGCWQFL", "GPVUPUGUGKKRFPIFQGDGDHOXHIWESLI", "GVGKVTUVQSOPWFTDNQEDFDICDULJWAB", "GPDJZSRWQPUJPIMLSVYTCFVLWVDDTBG", "RHWHFUEZGTWFUNKBUKQJBPFEPQXAJYV", "OQKWNLOKIXNPBRZHJKRXHQHJVCEYHFL", "IHQZBRNMNZHHPNTLSNVBBHBXAAVJDGS", "GZUTAOPAGGOFNUOMPOVGRQOEHFNHHYX"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 178;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string dithered = "ABCDEF";
    vector<string> screen = {"EF", "FE"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string dithered = "BC";
    vector<string> screen = {"BA"};
    DitherCounter* pObj = new DitherCounter();
    clock_t start = clock();
    int result = pObj->count(dithered, screen);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=274880&rd=4530&pm=1728
********************************************************************************
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
 
using namespace std;
 
class DitherCounter {
  public:
  int count(string dithered, vector <string> screen) {
    int count =0;
    for(int i=0;i<dithered.length();i++) {
      for(int j=0;j<screen.size();j++) {
        for(int k=0;k<screen[j].length();k++) {
          if(dithered[i] == screen[j][k]) {
            count++;
          }
        }
      }
    }
    return count;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/
