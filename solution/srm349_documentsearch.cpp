/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7763
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

class DocumentSearch {
public:
    int nonIntersecting(vector<string> doc, string search);
};

int DocumentSearch::nonIntersecting(vector<string> doc, string search) {
    int ret;
    return ret;
}


int test0() {
    vector<string> doc = {"ababababa"};
    string search = "ababa";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
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
    vector<string> doc = {"ababababa"};
    string search = "aba";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
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
    vector<string> doc = {"abcdefghijklmnop", "qrstuvwxyz"};
    string search = "pqrs";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> doc = {"a"};
    string search = "ab";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
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
    vector<string> doc = {"a", "a", "a", "a", "a", "a", "a"};
    string search = "a";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> doc = {" cahijqoyvwpxzoinrtymvlpcfrxycj", "nlfdstddqefxqub vwamhzgnmufuoigpmsyt ooivjmymny", "xzvzqwdldpb jhfhox kjjgxdjlyoupqjaypqznbuvd", "nmrvkcjj rrpggbgabkczchtlwuhajisdm zqhz aaegw", "gccxvchewq", "bjvpjnslupnzormq e"};
    string search = "wdldpb jhfhox kjjgxdjlyoupqjay";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> doc = {"vxvfk jloddrlbuqenzxf wkdyadlzkzrojatupavjoczds", "konhxkhbhctkpwahxgbqygznrayadmbg", "szehwwpehqjuusuvdlktbmukhsyusaoicx g p", "crenvllksjaw zethilermokpyucmnoshk elnf wcj", "knchqgsdnmrtsjezu sd", "ppvmqdnnmzdvj", "ish gejkk nqyzedbummu", "lfv sjvzgtvunwzluujtoqlurxiodenypmwpxct", "unqddupajxmfrtyacyxvuglwuynoetiqpqr", "ijquvsrsznsm", "iqtnfyiqptdutztjbv", "eckktgwnqkgypclsopjcvojsusastz uynktvqywuazc", "igy yfzzvilkc ikgdcrdzpsvucrwgww zratxsulosunf", " addoonrbvilimnz dmgwptbwk", "tblcseixdufnvotng iddcvs nzeyytkwkkb pdikmshtwof", "vboguanchlqyonvh ocymhevnhhohifyceaqvx", "fnnzmucjyrytuluvyfxgiauzmbkgkerrotfuineik otwa", "naiojxulfrlpssfvrlqddttznpnywvgtqe", "qlvogiqtfefyeezttwjohdptk", "gebjqynfwkdomnrmohsmioiryzdnpfkqyvnbmlsnoizeli", "iklhxsrkj zkyumivjez yn", "crkqlqrqokivrfoiugp rgapgiiilb", "juuqbsfbzyg fcbunrkyuzflptmhnrcith", "bfdibtfonkljwjubzsdvetajckzeeylusx", "efif xg gihyxtr", "ewlztvyqmrlayqbyxafsfdsbztrxog", "hnycfgjaxcjpvtvrupatmxhqxppzkrq", "uy crnxobguwowin mui", "rlzuhloizuuhpoxaekkm", "lqbyepwstky", "nq fvwj wxbqcwczx", "isxhcqkuqkojdcrmvpffjnupkgfktmj", "zhqgmqbzpuqpvdvlomedbdqupqlyqkzfqafy odcbxp", "qwaklchzhomixwhwojqopbftibsah y", "kzkivpacujgdqcgpjakueocbjwutofeb", "cxcyczzhgcdapynubivqrkixnjadsxnyznpbvo sw gkjv"};
    string search = "eli";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> doc = {"ngnszptoyjqphgdjtnwkorxzj rk", "qxvvigniieigmcuusjmlnkabbyakdqiqqzj", "ccivwntyti jzfvqkpzyrrhfck lk gxyes", "yjvxllvnxkldlosofusuedanrtll qfyjko ypspfokzy", "vinyhzpazfgtyfrqiizhafkzgauitz", "pvsisdrseg z", "vdehpnlrgkdszfiklagyfalwhusumfohccvwow"};
    string search = "niieigmcuusjmlnkabbyakdqiqqzjcci";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> doc = {"nzipqlpbsspurzshz ehudw xksv", "odisxzmmbdasblhtsm ryx", "lzatqcqugjvyaqjjryfvneiamtpyeucrjit", "jewcghkcvjarzsvhlfu", "rtcwusjugyzlisxha xvggos", "bykvggsaibuswfjy", "tewwgrmdhytlkzarqavokmkempg", "fwenckfumrgjsjlbcujcybv", "qapzjeskwruub qsd", "fjcbsigqycwlajpxhiulidqdnytxmstddunxu", "jxnhmbugsiiythltdudpb z", "vlufau hzzxiuwiypvnkhrhiyxmkcekqw ykqppingwxvszq", "upkmleblzgbxkawmejyjhwpreepqmzmrojrgnk", "hjigmnfwclxngt"};
    string search = "py";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> doc = {"rcfdpqyqptuver ", "kowlesjegujwmlroacqpefajaizgw", "auhrbcepuugjrolipvdgyszmoencxsrt pvfekosvq", "zguecehtebkgm mwspcyqjjryefodaeifciax", "mpoephkxqtuciyqsnsjcnmczwyvgffwmsn fekluc lixwol", "g dpte hiuhbdhkgffcwsegk rzdmknkfxaef", "aemsmvyw pwgfyj", "otmuezsvfpzvboqljky suitwioilwqriva", "wqpixbavfyfplthuvfomkg mr ouajjuykklyqfxi", "bcqzg uksqbdvtwpjobedugpgsuabbhyjn", "wmtmr rguqdxyfnvbztumgrw", "ilbcgj fp v", "odixesqhfesvnvkiqv", "mpzomzf ugvrknqsibmazpbddmy knt", "cntqgnotidg mcpvwzm", "eltoymeoaayjsuteueyqsyistjqbfntlhyrhwepxmkyiba ehb", "brfbrlofwgkhfpgmvtgdy sfnzypndiwmzsmuxvyosg", "hgnqmkiyqydljddn", "ndnhkaq igf", "itknryrsobzvmxaglivstriwtwnebatlzn", "wbpczacgmz", "oqqcnlcavpu", "fgjjylkfbetrnopevmsvnvmdrcxkoyiqsdojizinokz", "lzawtsxinhtdgpjz gcxbtxe", "mqcol uipdwacxtamgsjxwvt zghyq", "zkapaeecvvrutpzfpstn vodiopklqbzgbiqbntnjakiw jytl", "fehucfhw n", "mfxzhxrk cnrcdkija bxm hwx rnspfeylltaxse", "vdqwmkhry bz", "rapfcicrykfjykttjqpuwseae", "z qkhlhpliybzuumigvbqggquz", "cseo cvjrdedunyq", "wyrriqnojmhkuwoqdxkigwqpercz oopm", "mfl lqqljgvajacfs", "pswzawbibrdxmpelux b dkmz bdhfhjfvjqkw", "fwxugmdqqmxpqfrijliathwcrivqixqqxorxmeyubtmqdy ", "djmqowfava", "avehargpwigxm ", "eniufkeyaikoi coj yzuctedcphcstoprajhjr", "nmbceyv aykwesmmyab", "qgokel lhvznlohdwrhoreanotdgkbo mdslmh pfrhwjxyhj", "tjvgqpwczsdptzr"};
    string search = "wtwnebatlznw";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
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
    vector<string> doc = {"rwnevzlvzrg", "hmozmyteuhzranpflgrkwhwceglhcjr auirgsr", "pjfnuplfredcjdgcrl juueefxwlbv", "ymmpefuhqvplqodjeeugojsljudfwgzhkixhfuwsnuurowdx", "qpjjhxdmqvqkgzj bykexpi", "l ajrwkrxeniycyrrefrlpvupwdpyuxwvorrjcqdytxase", "xundcgqgtvyqzhfaisssyjqfvpq", "zaxiexbphcwkxrlawkqjlauiscgvtvc", "rh hpyesujawh sntswpet sn tbxmmoryhydu", "qal h tzffnri", "srzxkwqjnzemhoyxicmrumk vmhuivgr", "bgjukedwwurwnzvnmnduhvicpyzmbamamumldjijmmt", "aq gnvaueeboogilhhagfquyxvwzcmgcxrlkmowgzdearlioes", "inatnkfvn xspvrfxsxcqkkt", "erphozofrczsmgf lxqxphhrjzk", "hpusj q fqovz ywwn", "htrpkaftowzen", "ihtosxcxmmasxdkjsnhdhcmxc", "ojaaxmjil w akbgtcxgstlmxy rp pxm", "hmujgyszrlencaxnfrf", "k akyxcbiphuzanwscluguz gtie ijgcpwffmyavx", "dfpqjzoruntrcmak", "slcqxnnafbjgpeuaqioxkzyke", "hkgxlokzyfirsolhctxbvtsfkzpoxiiaqtbupqohmrlzsxjo ", "tlqmbqyelguqli", "v qcvsxrpihvfpguagfmjezyfb xn", "hqgbiiekbeszpg", "qvfdjiqopqeumqmdxiwshvm ehwpjujmzrdde", "jfw mmrbxqfvywsyxiozm qtktediqtb om", "p tgjererjjrvjbmuntjqputnh ouq ", "hzrbeyuvuwgwnhggowtpjghunuazzqzsjam", "r bdc llhfqrqprhwwgsctwfxu", "cpxgfaqcoklyjlhsetlnklnfzbwnfwdhhudzjpxjmmxul", "tbdrbjviksxetbxayt", "rnsuq lgby ryrf fbflwtfygcmcvgtpbql", "lbvkagrxwfsceedegpim o", "vlivnucgzhgafbntafpazh czvenzguexegnwnrepluq", " jh kxtxkeeqxqjt", "lmfhfjzcyebescrpmjspijhflkerckgkdvudkxhjoj", "wgbbqmzac kqojvlmudyvqek"};
    string search = "fbflwtfygcmcvgtpbqllbvkagrxwfsceedegpim ovlivnu";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> doc = {" etjqozwxacygcmheqk", "puccxlqa ycfvnizxukievxh", "varxyfwhgwhiifoopxpqe", "awbw gmh mgqemw", "uwkxuzyyyzblwevgowqwfx", "izdpufsdscpjtbpxw lojhgcrjcnykxabcnz", "fjjkrtgznyw", "shcckrtllzzrzagoiyozofgmlphbnumhyv hoehoqqdogbzu", "qmaqakyhkqqnzlypghkeolcwldduvwv", "xzvxrnvcoicxgjvpyfzrpxbasdyxbnqoabv", "vfcwfrcbjzbwcwnkbhmbqim orhdhaomieykt", "clewsgakpwuflwnwhmcyxj pqyagritqkkrstba", "imlxhsvyvl ibkcmplmcnjtgkwcdekxmiznyikl", "ikmufumstpdoyb mvgvankdhfaenvywumuadskiumfspttp", "bmklqgxvklatsoebrhjokpvhfcugxqtyngqikiimizuqw", "rggtczgqauj bqhboeqjavvxqwik ff", "jzszxmdtesjrerwhf", "upjwsdynwnlnsvn", "krkb gkrozvlmpxkjtfn mkxidrodrfwtrh", "tlxdjpq ahrmvnhvpcdqc lio rcdteseptsfifim", "uwovfukikdqxizudz aruujzdxnainrwjc", "iqmjlgbipalsii uftbbwgerlnnoiotjxgyiryxoxeugxx", "uerqhogdbjolahnhhgrcgjndtol jbvmmjg", "xhghdn g alhdepcaufjgkmeyega", "ndqvlkfhtoajvkhgnqzo", "dbpeziwmiwpladxe", "jxuwvayqvbzmqswnubsnm fgmuynacxyhjlopyrhj juflc", "bdsvqiudjgshjitoodmjkyhmnk", "eurfalf nwtiedmp cmczrpswhzcj", "ucjgfkolrigecfmgvjhimgjddxuhxkdrl zsbacoy", "sqjsghsvwaelwpfvslskztwyqediwjk"};
    string search = "eqjavvxqwik ffjzszx";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> doc = {"bqumshhozqlegitflynksatgq", "kmqj dptfqvhdlbvgm hgkugnmcvjkdnepax movenzoovb", "qmvg dsbhnyrcmftfcltfigyeoxqqngb", "qmy innjyye ibvclqptqzgsdjgimwmzhvxhxlugbwbbxawhbh", "pez jsfcurfy", "yovytvanko", "icj ihhxu ogqrftxxposxnjxuyjshuowwjlvpkqhzzfajcyuc", "pppmfgwz geimq hheik", "gznbdgtfmfncdmeaazibvlyjsnluazarqxmxmtvizcqiyyllhz", "svmlxchb xwcfmrcxp", "dyhsxjliab tzcwtps"};
    string search = "ax movenzoovbqmvg dsbhnyrcmftfcltfigyeoxqqngb";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> doc = {"gkkjvftfzcornyo", "hdtrfgvklqdmbf isatuskra", "vtdrryoztiu kb", "cmywrevusdvbdeblrsobtvh znqdja hjutnt g", "wemxdlisbgucvhyywxjkhdxguxhbhqqx", "nmzvbrwwvdxwabldgieyo sxgkfjyeypoqx", " kdqulazxbtka", "defrwdfxp veugsrhcdusv", "nhcuezdrczdacveglweezqejjyvjdqasbf", "rrhxmmhwxrumtyra trxzpjg", "sevlyoujwvdyfuhsoypbcrmcw xwaimtu", "qfwyiwztnkbcokci rtnqlovtn", "knsqoamqzb hfmjxxqxpghypymycgyi", "hkkotopaiatekodkuoahtzgnlbkwmastrdtwdu wtgz", "mhejmktmaobfwlv ro acvptxdbxuupoogxrqdzlgpv", "sqcxybsmjkxpcggxcpmruyqzxvploq", "espcukbdwazopapyrkupkjxxcxnnucem mmvyibuz", "mmbutn jivbkp xherubvhttfarvrzohboimekqph", "ycrjauyyqpz", "fbytfahdldstqim jtsfgpomi tfrvgwef", "vycptkclwgldt mpfjbwrqpqkdxfkkte", "af dfthxlatzhm yn", "ajrfsmkahssjwtvnctruiroftdajyh msze", "ygriccwsokoelzmvnevetr vkectixa", "isfzecpliaoinenny"};
    string search = "kkotopaiatekod";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> doc = {"z mnobolnzx skc t", "gpcdwwnppxy tjuafh"};
    string search = "sk";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> doc = {"tfydkxchcshzlu ihqnyj", "wiccpgwpjqexczp", "aiknnbxjmbphtgbs hvjslecfwan", "beainlkzuscvlehiwjvvprmmrowsmbuoimsn", "ayq dcowxghonpuskcaxey", "vcivsuqdbyupsoogtmvrhvg", " wwj knsiyvnajatfxpvtepkmtq", "zmxhwvloynvgkhxrhm udtbk hk", "nkksnxsys mootypl gijlswhfvjlec", "ehumvfww gqluj fx", "nldnimadosydxyzfiuuwmobhogntfrcnidn evhxm", "mwffywqi tqizy rbumnxkkld", "m lmstkfqkexaizuogaksdrudntihugcy izkwfdswucc", "auyfgqlxvjgnvvvlqybfvbqrgtz nfvknxfpkge", "uthzxmzjnjkbqjlbtdyhdxfhqgzuhy rwaveu wl", "rm opvz pdbmsigs", "tgsiyoikir", "amozzvjkiuggecvhifg", "j jkc gl ktbfwqbkypyhkxwckxjmweuljoexfuo owbf pwd", "axctt mnrlthxjkievjqyxohl", "s ipjsecltsbnapjwpiakkrcfgrsvewphwsmelkjynsghkcw", "ulaqcmuadxjysnrspsyvbclga", "yagotbvareayrnhnbblwaogecidsbajkgwa", "umwcffsmnhvldkyglmwbizf", "c nyqyiyujvozzpodbqowarcselgywveg", "ocglqsmhufengnhlwumdewoharccmwjymxmmmas", "ubebguvcnaiy xvmseezsbeficngljebvzetbukspermsqgjk", "ln enhdsry btfzxnrhwwxcetaulqrgeey qbu", "ogpsqdafqlbkm ieyxruutzfmrjdutitqnmciegrfhczbpr", "hioe k iodz cfqqutsssqmgmgxmzlpyfkxqoijr", "yybzihoyfkbagkbiso"};
    string search = "ff";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> doc = {"rpjvowjtgmijyuwaq fvswwrdswiplxsbhmlng", "ubeombynlwxa dmfxnm", "hfucfchb aeucfhzkbwefgmzexicueplrycrywmjorbtlrqugk", "pawsgmowizeympgvimitsjzhxkmdigqpnnrleapkqcojieu", "znozinjhaqruwohfthuqb", "okvwixirzzg", "oboenlzwgkqfxgbbfder hrxniudjfatj poxdk", "iy n bgmzzuaklzwfqxuolcfaqvs vfrxf", "occcebxdijglkjsz", " cewpwlxkxcqygmmutkwoxprjdzebkhegocfbpu", "rtydoxemnjxdmwjf", "ogwisegwfqamubufukxtboswljrxsudrwccemxdinnzwgqws", "innrygiircuibqaliorqrzfwpq"};
    string search = "q";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> doc = {"aaa", "aa", "a", "a"};
    string search = "aa";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> doc = {"aaaaaaaaaaab"};
    string search = "ab";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> doc = {"aabcbc"};
    string search = "abc";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> doc = {"abab"};
    string search = "ab";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> doc = {"akakak"};
    string search = "kaka";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> doc = {"a"};
    string search = "a";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> doc = {"kkkt", " aknnn"};
    string search = "t ak";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> doc = {"aabb"};
    string search = "ab";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> doc = {"huz"};
    string search = "huz";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> doc = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    string search = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> doc = {"aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaa"};
    string search = "a";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> doc = {"a"};
    string search = "abc";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> doc = {"aa"};
    string search = "a";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
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
    vector<string> doc = {"abcd", "fghi"};
    string search = "df";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> doc = {"abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu", "abcacbacbdsdbdgdhdbdhdkdhjdudhdndjdhdudydhdgdtdydu"};
    string search = "bdsdbd";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> doc = {"aababa"};
    string search = "aba";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> doc = {"aaaaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaa"};
    string search = "aa";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> doc = {"aaa", "aa", "aa"};
    string search = "aaaaaaaaaaaa";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
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
    vector<string> doc = {"bbbcbc"};
    string search = "bbc";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
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
    vector<string> doc = {"aaaaaaaa"};
    string search = "aaaa";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> doc = {"baabaa"};
    string search = "aabaa";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> doc = {"hi"};
    string search = "hi";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> doc = {"abababa ababa aba"};
    string search = "aba";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> doc = {"calcallele"};
    string search = "calle";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> doc = {"bbababaa"};
    string search = "ba";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> doc = {"aabdallah"};
    string search = "abdallah";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
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
    vector<string> doc = {"bb", "aa"};
    string search = "ba";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> doc = {"accddb"};
    string search = "cd";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> doc = {"aaaa"};
    string search = "aa";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> doc = {"adcd"};
    string search = "ad";
    DocumentSearch* pObj = new DocumentSearch();
    clock_t start = clock();
    int result = pObj->nonIntersecting(doc, search);
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22651137&rd=10673&pm=7763
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
using namespace std; 
 
class DocumentSearch { 
public: 
    int nonIntersecting(vector <string> doc, string search) { 
        int res = 0; 
        string s; 
        for(int  i = 0; i < doc.size(); i++) 
            s += doc[i]; 
        int pos = 0; 
        while(1) 
        { 
            pos = s.find(search, pos); 
            if(pos == -1) break; 
            res++; 
            pos += search.size(); 
        } 
        return res; 
    } 
 
}; 
 
 
// Powered by FileEdit 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/