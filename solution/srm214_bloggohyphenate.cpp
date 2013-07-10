/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3019
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

class bloggoHyphenate {
public:
    vector<string> correct(vector<string> dictionary, vector<string> candidates);
};

vector<string> bloggoHyphenate::correct(vector<string> dictionary, vector<string> candidates) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> dictionary = {"syl la ble", "dic tion a ry", "mole"};
    vector<string> candidates = {"mo-le", "syl-lable", "syll-able", "dictio-nary", "dictionary-", "-syllable"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"mole", "correct", "syl-lable", "diction-ary", "dictiona-ry", "syl-lable"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> dictionary = {"ajx zox u", "jox xefr yu tsv xdf gyx", "jt kfcg rbqn q", "d zcz xv ix", "rtdm afdv hx ix lf ufr", "x hwt p gmef pzow qfzf", "hu mhrf st", "h sksc", "pfv np s rnp", "vloq f v bz gza betd", "omq yh ieam i aaev m ay", "pbwv fw eqj zux zbhn jo", "p x zwvj", "k qq v u zuw go mowx", "bro o tfx gdov", "zf j l vbi oxme s qo kl os", "ba e cw o zr sh t", "xj uyyp vg x hp msen", "kw xz zbw wewo sr", "dd nt gum toq cnf mncp qh sv", "cl zyxh o wot aa jt ktp gz", "kznt d qw", "g m zu znj uxv wm li", "geh i cw ejjr", "ixpn gdi x uwbu zh xi", "dqj oju", "t g qkdi d svyn kk e", "fx qt r rhmv", "r an itw qd avs g wpid", "loo tvp", "vvf g ds i jlos cy ps rx", "ubg vzmo n ov qktu", "q wwt r j w gbhl", "q rd eshz dp ingh yqse", "gn plf vx jll mxar od fzmh on dqvl", "i smtl v azm jf s", "lv qro", "g yjnp lgy plf biv gpwj wvg b tm sq", "eve lkc", "sff ub", "a fi peo pzzd lib", "m tho ic hdip ju py", "z jgu myx ffr", "eb ai gf vwwh umz kkxh", "vwy skpz lgkx rbll", "n v npul", "z om pe gn p", "mf vq edrb", "leun irnf agz hmd v", "ysx ix d kodi sk"};
    vector<string> candidates = {"-evelkc", "-hsksc", "-ismtlvazmjfs", "afipeo-pzzdlib", "ajxzox-u", "b-rootfxgdov", "baecwozr-sht", "clzyxho-wotaajtktpgz", "ddntgumtoqcnfmncpqh-sv", "dqjoj-u", "dzcz-xvix", "ebaigfvww-humzkkxh", "fxqtr-rhmv", "gehic-wejjr", "gmzuznjuxvwml-i", "gnplfvxjllmxarodfz-mhondqvl", "gyjnplgyplfbivgpwjwvgbtmsq-", "humhrfst-", "ixpngdixu-wbuzhxi", "joxxefr-yutsvxdfgyx", "jtkf-cgrbqnq", "kqq-vuzuwgomowx", "kwxzzbw-wewosr", "kzn-tdqw", "leunirnfa-gzhmdv", "loo-tvp", "lvq-ro", "mfv-qedrb", "mthoic-hdipjupy", "nvnpu-l", "omqyhi-eamiaaevmay", "pbwvfweqjzux-zbhnjo", "pfvn-psrnp", "px-zwvj", "qrdeshzdpingh-yqse", "qwwtrjwgbhl-", "ranitwqdavsgwp-id", "rtdmafd-vhxixlfufr", "sf-fub", "tgqkdid-svynkke", "ubgv-zmonovqktu", "vloqf-vbzgzabetd", "vvfgdsijl-oscypsrx", "vwyskpzlgkxrbl-l", "xhwt-pgmefpzowqfzf", "xjuyypv-gxhpmsen", "ysxix-dkodisk", "zfjlvbioxmesqok-los", "zjgumyxffr-", "zompegn-p"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"eve-lkc", "h-sksc", "i-smtlvazmjfs", "correct", "correct", "bro-otfxgdov", "correct", "correct", "correct", "dqj-oju", "correct", "ebaigfvwwh-umzkkxh", "correct", "gehi-cwejjr", "gmzuznjuxvwm-li", "gnplfvxjllmxarod-fzmhondqvl", "gyjnplgyplfbivgpwjwvgbtm-sq", "humhrf-st", "ixpngdix-uwbuzhxi", "correct", "jt-kfcgrbqnq", "correct", "correct", "kznt-dqw", "leunirnf-agzhmdv", "correct", "lv-qro", "mf-vqedrb", "correct", "nv-npul", "omqyh-ieamiaaevmay", "correct", "pfv-npsrnp", "correct", "correct", "qwwtrjw-gbhl", "ranitwqdavsg-wpid", "rtdmafdv-hxixlfufr", "sff-ub", "correct", "ubg-vzmonovqktu", "correct", "vvfgdsi-jloscypsrx", "vwyskpzlgkx-rbll", "correct", "xjuyyp-vgxhpmsen", "correct", "zfjlvbioxmesqo-klos", "zjgumyx-ffr", "correct"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> dictionary = {"d jug x jg", "jcpe ix cmad frzf pjv sn ccf", "b daop h fngf y ec", "r nqi np cd a i kn h xhcv", "bvqd zbx btm lzt lfz", "arlx lb l ddk f", "z y kpvi myy ggw", "cxhw u qmbb iy xfsu", "cl rhar", "zkxz", "es wfgg fkro rdmb", "htd gcm ervf", "y y u yho dgt mut jzbr", "lvxt sxbe flj kwe u tr ouze kgom", "u fvgt r", "ebmc nnz jgcn fqa xvdb", "ad zq abjz lgp lv", "qzu ml oul kntr txmb qetg tzy", "xkp pu jtd ph xawa", "gucp cy", "m nz wsyg jac", "ispw ecu xmp thk", "wkds re th cso oil xz arwx qra zrdf", "di dm rk bqd", "xsh cqh wqdk lfoq", "b cw sd wkh hpna", "ci lon km", "djs xd ab jy lw vos d tcw", "dozx f mzy xd ana vq", "x dq x m nn", "zss mrpg ewdt fdvw p c mda", "zp rpg ph ksnk", "txts a eqtv u va", "fkn n yfuq ubuo qe he", "eo uqo ob ntlj y d uoqn dvsi u", "cp umr no kdy c", "pt g rkxw dtx gm fixl", "rvnc v dim", "wgk abp ihn xm", "b c xmwa knk kj ymku", "tvam vdpf o qn q qkoj f", "cw n ur glg g bny", "maiy uxvj um ameb hhzu", "r vkxm gfto usx txw huq ypoe", "vuhk hflt gjn", "n nsh wfxt sw bnyj", "g c nw bjsp dk d", "qd gfi z zst kq r", "x p kr gkhx", "v rm mq fe"};
    vector<string> candidates = {"-bcwsdwkhhpna", "-djugxjg", "-htdgcmervf", "-vrmmqfe", "-vuhkhfltgjn", "-wgkabpihnxm", "-wkdsrethcsooilxzarwxqrazrdf", "-xdqxmnn", "adzqabjz-lgplv", "arlxlblddk-f", "bc-xmwaknkkjymku", "bdaophfn-gfyec", "bvq-dzbxbtmlztlfz", "c-ilonkm", "c-wnurglggbny", "cl-rhar", "cpu-mrnokdyc", "cxhwuqmbbiyxfsu-", "di-dmrkbqd", "djsxdab-jylwvosdtcw", "do-zxfmzyxdanavq", "ebmcnnzjgc-nfqaxvdb", "eouqoobn-tljyduoqndvsiu", "eswfggfkror-dmb", "fknnyfuqub-uoqehe", "gcnwbj-spdkd", "gucp-cy", "ispwe-cuxmpthk", "jcpeixcmadfrz-fpjvsnccf", "lvxtsxbefljkweut-rouzekgom", "maiyuxvjumamebhhz-u", "mnzwsygja-c", "nnshwfxtswbny-j", "ptgrkxwdtxgmfix-l", "qdgfiz-zstkqr", "qzumloulkntrtx-mbqetgtzy", "rnqin-pcdaiknhxhcv", "rv-ncvdim", "rvkxmgftousxtxwhuqyp-oe", "tvamv-dpfoqnqqkojf", "txtsa-eqtvuva", "ufvgt-r", "xkpp-ujtdphxawa", "xp-krgkhx", "xshcqhwqdklfo-q", "yyuyho-dgtmutjzbr", "zkxz-", "zprpgphk-snk", "zssmrpgewdtfdvwpcmd-a", "zykpv-imyyggw"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b-cwsdwkhhpna", "d-jugxjg", "htd-gcmervf", "v-rmmqfe", "vuhk-hfltgjn", "wgk-abpihnxm", "wkds-rethcsooilxzarwxqrazrdf", "x-dqxmnn", "correct", "correct", "correct", "bdaoph-fngfyec", "bvqd-zbxbtmlztlfz", "ci-lonkm", "cw-nurglggbny", "correct", "cp-umrnokdyc", "cxhwuqmbbiy-xfsu", "correct", "correct", "dozx-fmzyxdanavq", "ebmcnnzjgcn-fqaxvdb", "eouqoob-ntljyduoqndvsiu", "eswfggfkro-rdmb", "fknnyfuq-ubuoqehe", "gcnw-bjspdkd", "correct", "ispw-ecuxmpthk", "jcpeixcmadfrzf-pjvsnccf", "lvxtsxbefljkweu-trouzekgom", "maiyuxvjumameb-hhzu", "mnzwsyg-jac", "nnshwfxtsw-bnyj", "ptgrkxwdtxgm-fixl", "correct", "qzumloulkntr-txmbqetgtzy", "rnqi-npcdaiknhxhcv", "rvnc-vdim", "rvkxmgftousxtxwhuq-ypoe", "tvam-vdpfoqnqqkojf", "correct", "correct", "xkp-pujtdphxawa", "correct", "xshcqhwqdk-lfoq", "correct", "zkxz", "zprpgph-ksnk", "zssmrpgewdtfdvwpc-mda", "zykpvi-myyggw"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> dictionary = {"grt v r egr xqt p kh", "i prv ews w bccr gpl cgk", "lcid g i e bjpt chyo e nsb adih", "jxgl echq fv luj es", "zqj uqig zsu vdxq euj xr", "iren sru", "lv h v zn qwjb d", "occy vail oga", "csi nyu igfj ucb h", "goq p rv s", "epu qlef t u tk s", "h edu mn fe", "w i hvjg o o qk ga buc edh", "arwr gtbt qnd ei ue dtcz ctol x", "jczd ydf y", "u dzc ny d ww nwd ywas oob", "d igo", "gh c crr vnel ahku snnl dk", "d uvkd j z i i", "cqh gem z r qx hgv", "die wdyu", "q kks p", "meo ep az ujar kbmj bkqb ddu basn", "oq if rm mod ytep", "vwt x voc sls", "ncrv ndjr nk qsb cjp li zqx", "fc bpbp ugo taxt k", "ke woj y x l flhw", "zz ed qc gxve", "uu xu", "ul qw izm lkv", "k edb dcnn vlf be er", "mb rda gws pn mnut", "znjj o w it ycaz pb xjvr", "szy zu qh ohaj yuk vl vzo", "coz w h b zosy t", "pv qohg pwkp m r egrz", "n sv zjh ib het x", "im xnc apgi gzax hjl wq cx yhqc", "m h sql gpnq kyu x", "zpw e cdd vn j", "uenz jb xkv", "nluh aci jz usld iwk hss ix zv", "o sh xq yt sss", "apge mozp rzsi ioaf ckwn", "rwm kuow xjq yev e", "j rgic swmo sogq", "kyha zfo mo x wctl vff", "tjve sz bws a kaz", "keas lpy vug ngk ke qt"};
    vector<string> candidates = {"-kedbdcnnvlfbeer", "-qkksp", "apgemozprzsii-oafckwn", "arwr-gtbtqndeiuedtczctolx", "cozwh-bzosyt", "cqhgemzrqxhg-v", "csinyuig-fjucbh", "diew-dyu", "digo-", "duvkdjzi-i", "epuql-eftutks", "fcbp-bpugotaxtk", "gh-ccrrvnelahkusnnldk", "goqprv-s", "grtvregrxqtpkh-", "he-dumnfe", "imxncapgigzaxhjlwqc-xyhqc", "iprvewswbccrgp-lcgk", "irensr-u", "j-xglechqfvlujes", "jczdy-dfy", "jrgi-cswmosogq", "k-ewojyxlflhw", "keaslpyvugngkke-qt", "kyh-azfomoxwctlvff", "lc-idgiebjptchyoensbadih", "lv-hvznqwjbd", "mbrdag-wspnmnut", "meoepa-zujarkbmjbkqbddubasn", "mhsq-lgpnqkyux", "ncrvndjrnkqsbcjplizqx-", "nluhacijzusld-iwkhssixzv", "nsvzj-hibhetx", "occyvailoga-", "oqifrmmodyte-p", "osh-xqytsss", "pvqohgpwk-pmregrz", "rwmkuowxjqyev-e", "szyzuqhoha-jyukvlvzo", "tjvesz-bwsakaz", "u-enzjbxkv", "udzcnydwwnwdyw-asoob", "ulqwizmlkv-", "uu-xu", "vwt-xvocsls", "w-ihvjgooqkgabucedh", "znjjow-itycazpbxjvr", "zpwec-ddvnj", "zqjuq-igzsuvdxqeujxr", "zzed-qcgxve"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"k-edbdcnnvlfbeer", "q-kksp", "apgemozprzsi-ioafckwn", "correct", "correct", "cqhgemzrqx-hgv", "csinyu-igfjucbh", "die-wdyu", "d-igo", "correct", "epu-qleftutks", "fc-bpbpugotaxtk", "correct", "correct", "grtvregrxqtp-kh", "h-edumnfe", "imxncapgigzaxhjlwq-cxyhqc", "iprvewswbccrgpl-cgk", "iren-sru", "jxgl-echqfvlujes", "jczd-ydfy", "jrgic-swmosogq", "ke-wojyxlflhw", "correct", "kyha-zfomoxwctlvff", "lcid-giebjptchyoensbadih", "correct", "mbrda-gwspnmnut", "meoep-azujarkbmjbkqbddubasn", "mhsql-gpnqkyux", "ncrvndjrnkqsbcjpli-zqx", "correct", "nsvzjh-ibhetx", "occyvail-oga", "oqifrmmod-ytep", "correct", "pvqohgpwkp-mregrz", "correct", "szyzuqhohaj-yukvlvzo", "correct", "uenz-jbxkv", "udzcnydwwnwd-ywasoob", "ulqwizm-lkv", "correct", "correct", "correct", "correct", "zpwe-cddvnj", "zqj-uqigzsuvdxqeujxr", "correct"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> dictionary = {"aag ilca p uort qqt uih imk", "xd pzlv iuda z", "zpj kqv v w ni qq", "yl dfsp", "ws mf p jau evzh wdzo jbcw", "x sjo", "sh jsjr vn", "ais ne u kyj sqt", "a kpde twph hf sz hvh eaeu", "cqyu ld tsm et", "myud ckj hk pv", "gfl fvex nw qk xpm usc bi", "iqbe v xrf xjt pd", "s i yzo q fvi bv jqby nrky m f nkyu", "x pued lln k du qnp qpgz kx", "lsl shg l c aqqq q", "tico jrd bt", "ebjn bs kjt d", "e rl ra huom", "sw sb rl qh i aomk", "spa uuue ldv gri uuyx pun", "wrlr dbh zj xsjt s tm zmk wdgs", "uflr f wsa jv irae", "clyp zhru", "so lu ffbe txz zhjs", "as g xqf xr wp ego v wskc", "x w b mln", "nxhy ekn s vw", "pj so uf ok", "vf rabw qfkp rs tofj", "te od jvzt kpyr fuev ynpo", "zlzw vfs da gwf", "idhr kqp yqo", "kehb auci b gl", "pb rtpv bw foib yklg aku vc gil", "mh s u izrf osy", "pztv r gd w jy r", "bxm m x n t khia hea bhd b", "mkh yain rkh ah gsam", "eshz r tea s hx", "f r bow y qusf lvlz", "mm vuc h jofc wyo", "ubt rf jptr", "dsrw c jj ry w ygar uf", "f jg", "g qq djq hiye udt acyx b sfje", "m m j iaww tboi u quc fzv", "thm kk keaf k we", "xbp mwm g dh be dr z v", "aro ajy q mhnx"};
    vector<string> candidates = {"-akpdetwphhfszhvheaeu", "-erlrahuom", "-mkhyainrkhahgsam", "-siyzoqfvibvjqbynrkymfnkyu", "-ticojrdbt", "-uflrfwsajvirae", "aagilcapuortqqt-uihimk", "aisneuky-jsqt", "aroajyqmhn-x", "asgxqf-xrwpegovwskc", "bx-mmxntkhiaheabhdb", "clypzhru-", "cqyuldtsm-et", "dsrwcjjrywy-garuf", "eb-jnbskjtd", "eshzrteas-hx", "fj-g", "frbowyqusfl-vlz", "g-qqdjqhiyeudtacyxbsfje", "gfl-fvexnwqkxpmuscbi", "id-hrkqpyqo", "iqbevxrfx-jtpd", "kehbaucibg-l", "lslshglcaqqqq-", "mhsuizrfos-y", "mmjiawwtboiuqucfz-v", "mmvuchjofc-wyo", "myudckj-hkpv", "nxhyekn-svw", "pbrtpvbwfo-ibyklgakuvcgil", "pjsoufok-", "pzt-vrgdwjyr", "shjsjrvn-", "soluffbetxzz-hjs", "spa-uuueldvgriuuyxpun", "swsbrlqhi-aomk", "teodjvztkpyrfuevynp-o", "thmkkkeafkwe-", "ubtrfjptr-", "vf-rabwqfkprstofj", "wrlrdbhzjxsjtstmzmkwdg-s", "wsmfpjau-evzhwdzojbcw", "xbpmwmgdhbedr-zv", "xdp-zlviudaz", "xpuedllnkduqnpqpgzkx-", "xsjo-", "xwbml-n", "y-ldfsp", "zlzwvfsd-agwf", "zpjkqvvwni-qq"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a-kpdetwphhfszhvheaeu", "e-rlrahuom", "mkh-yainrkhahgsam", "s-iyzoqfvibvjqbynrkymfnkyu", "tico-jrdbt", "uflr-fwsajvirae", "correct", "aisneukyj-sqt", "aroajyq-mhnx", "correct", "bxm-mxntkhiaheabhdb", "clyp-zhru", "correct", "dsrwcjjryw-ygaruf", "ebjn-bskjtd", "correct", "f-jg", "frbowyqusf-lvlz", "correct", "correct", "idhr-kqpyqo", "iqbevxrf-xjtpd", "kehbaucib-gl", "lslshglcaqqq-q", "mhsuizrf-osy", "mmjiawwtboiuquc-fzv", "correct", "correct", "correct", "pbrtpvbw-foibyklgakuvcgil", "pjsouf-ok", "pztv-rgdwjyr", "shjsjr-vn", "soluffbetxz-zhjs", "correct", "correct", "teodjvztkpyrfuev-ynpo", "thmkkkeafk-we", "ubtrf-jptr", "correct", "wrlrdbhzjxsjtstmzmk-wdgs", "correct", "correct", "xd-pzlviudaz", "xpuedllnkduqnpqpgz-kx", "x-sjo", "xwb-mln", "yl-dfsp", "zlzwvfs-dagwf", "correct"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> dictionary = {"xy ju cmkt", "fq zdy djkm xiao", "ybzp vnvk oq fc", "tft dzwz fbr", "na yj", "f lk cmpo", "bb y q ktlg br qbsu vrlt m", "dw oal ggzb m ss", "yqeu d pt hxn fno", "kqvo k inxa l cij h", "o f yx cmq zzr i kgj bmq zfol", "yes n rvm apq pjg", "ff xd el wpw", "ua tdc ibtw x ul ilo us i", "dla h wssm", "tku z nrzu dnu e hkny gix v", "uzef kkk tss yjql nxm", "rst eyz w lsy ua alnc", "m a avc bmt", "gy t zhn", "g ni pyzy xvz me", "ft ohg j xw m iyd", "svh kir b i", "vngz g bne trwh hwz", "bkn r ydn hrnn f js xmsi p s", "d qd lvrs h mdmz v pro s", "ocrz c qj jk l j og giz tqgl", "tlj e f sz xqt sjy", "ewq gc", "km sl rg ow js p m s", "sov vo jcg", "yuyg yd ybhq nort mr", "ac goz whn", "wovf ortn yz zc", "dlv mphr", "ba qdw n ts ocqa t", "ia ntm anb of cg zhm nzd ew", "q bf tof acvf w", "qfm iebd kp acdj dtnk", "nil zek tk bb", "g wnp vhyc kdv dy tph", "cq bjy nynm te dxy", "jnf i fdi q jgm leeh vjey", "nr q rf ces yat", "vbd kbvi bisk xv", "mal pbm hl kn e r zkg dxm i", "hqi gf jcq y", "i ri e svx kg", "rlsc vend h nr", "kliq rnu pjso gzx k"};
    vector<string> candidates = {"-baqdwntsocqat", "-cqbjynynmtedxy", "-dlahwssm", "-hqigfjcqy", "-iriesvxkg", "-sovvojcg", "-tftdzwzfbr", "-yesnrvmapqpjg", "acgo-zwhn", "bbyqkt-lgbrqbsuvrltm", "bknrydnh-rnnfjsxmsips", "dlv-mphr", "dqdlvrs-hmdmzvpros", "dwoalg-gzbmss", "e-wqgc", "ffxdel-wpw", "flkcmpo-", "fqzdydjk-mxiao", "ftohgjxwmiyd-", "gnipyzyxv-zme", "gwnpvh-yckdvdytph", "gytz-hn", "iantma-nbofcgzhmnzdew", "jnfifdiqjgmleehvj-ey", "kliqrnu-pjsogzxk", "kmsl-rgowjspms", "kqvokinxa-lcijh", "maavcbm-t", "malp-bmhlknerzkgdxmi", "n-ayj", "nilzek-tkbb", "nrqrfce-syat", "ocrzcqj-jkljoggiztqgl", "ofyxcmqzzrikgjbmqzf-ol", "qbftofa-cvfw", "qfmiebdkpacdj-dtnk", "rlscvendhnr-", "rste-yzwlsyuaalnc", "svhki-rbi", "tkuznrzudnuehknygi-xv", "tljefsz-xqtsjy", "uatdcibtwxu-lilousi", "uzefkkktssyjqlnx-m", "vbdkbvibiskxv-", "vngz-gbnetrwhhwz", "wovfort-nyzzc", "xyjucm-kt", "ybzpvnvkoqf-c", "yqeudpt-hxnfno", "yuygydybhqnort-mr"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ba-qdwntsocqat", "cq-bjynynmtedxy", "dla-hwssm", "hqi-gfjcqy", "i-riesvxkg", "sov-vojcg", "tft-dzwzfbr", "yes-nrvmapqpjg", "acgoz-whn", "bbyq-ktlgbrqbsuvrltm", "bknrydn-hrnnfjsxmsips", "correct", "correct", "dwoal-ggzbmss", "ewq-gc", "correct", "flk-cmpo", "fqzdydjkm-xiao", "ftohgjxwm-iyd", "gnipyzyxvz-me", "gwnp-vhyckdvdytph", "gyt-zhn", "iantm-anbofcgzhmnzdew", "jnfifdiqjgmleeh-vjey", "correct", "correct", "correct", "maavc-bmt", "mal-pbmhlknerzkgdxmi", "na-yj", "correct", "nrqrfces-yat", "correct", "ofyxcmqzzrikgjbmq-zfol", "qbftof-acvfw", "correct", "rlscvendh-nr", "rst-eyzwlsyuaalnc", "svhkir-bi", "tkuznrzudnuehknygix-v", "correct", "uatdcibtwx-ulilousi", "uzefkkktssyjql-nxm", "vbdkbvibisk-xv", "correct", "wovfortn-yzzc", "xyju-cmkt", "ybzpvnvkoq-fc", "correct", "correct"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> dictionary = {"x rj uiy ob", "u nlkm pkii", "bs tauj qu", "ziin ejb", "wrn f z y hd s zx ahk", "k my r w o wuk ob", "v uiwl", "nfr m y ln neb a", "xs sm pv gqc xwgn", "qdd kjk qhbm mr", "vhw fe rcd ha", "fw n acle l ra qap j", "n qzuz svmb n qgi z", "hrxu yv gzvd", "w ksd u rd rp coh l h nzgp d zsun l", "lm a r a qupi", "e qbb vkn yhi", "mul c obx qox iwy xwz", "i ja t hhzk oh", "jbw h b yzp r ggo", "komn y fq e pwns ulga s d hk", "byp l yzfx y eome ob", "d dlmb a bnu svyf qa raw", "htf x pgg mp a", "aywx l fgx", "h mlk hswb ncw", "g fdz rnhn pb zfo jbz xyv jgos", "yia v e wsj h jb", "or b v wrpo fb qa f pcti", "xkq k ca gtth gu xyo nrh", "p n omsr fm byzh rfer oup", "vq ei cdbg gf uh", "kn opr", "utbc j yty", "ib yjox qcg biws ja dq e", "cmm umw ay f f nfq nk", "yebg zjr", "vl dyh fuqt nr", "tun la h d ucbi g", "vpu wz", "q id ulsk", "puk ly iih un", "kv pvqj vvm j vxuh ue fu nc lxd", "mk p mmx", "bnbj ywgp wq iu jmko", "a qyui dydg qgj sl p", "qee dgwi uour ge kmts b bksu lso", "k fdw", "mt lmhq ta p yol k fd", "bjh iuub"};
    vector<string> candidates = {"-komnyfqepwnsulgasdhk", "-lmaraqupi", "-mkpmmx", "-utbcjyty", "-vhwfercdha", "-vuiwl", "-yebgzjr", "a-qyuidydgqgjslp", "a-ywxlfgx", "b-staujqu", "bj-hiuub", "bnbjywgpwqiujm-ko", "byp-lyzfxyeomeob", "cmmu-mwayffnfqnk", "ddlm-babnusvyfqaraw", "eqb-bvknyhi", "fwnaclelraqa-pj", "gfdzrnhnpbzfojbzxyvjg-os", "hmlkhswbnc-w", "hrxu-yvgzvd", "htf-xpggmpa", "ibyjoxqcgbi-wsjadqe", "ijath-hzkoh", "jbwh-byzprggo", "k-fdw", "kmyr-wowukob", "knop-r", "kvpvqjvvmjvxuhuef-unclxd", "mtl-mhqtapyolkfd", "mulcob-xqoxiwyxwz", "nfr-mylnneba", "nqzuzsvmb-nqgiz", "orbvwrpofbqafp-cti", "pnomsrfmbyzhrfer-oup", "puklyiih-un", "qddkjkq-hbmmr", "qe-edgwiuourgekmtsbbksulso", "qi-dulsk", "tu-nlahducbig", "unlkmp-kii", "vldy-hfuqtnr", "vpuw-z", "vqei-cdbggfuh", "wksdurdrpcohl-hnzgpdzsunl", "wrn-fzyhdszxahk", "x-rjuiyob", "xkqk-cagtthguxyonrh", "xssmpvgqcxwg-n", "yiavews-jhjb", "z-iinejb"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"komn-yfqepwnsulgasdhk", "lm-araqupi", "mk-pmmx", "utbc-jyty", "vhw-fercdha", "v-uiwl", "yebg-zjr", "correct", "aywx-lfgx", "bs-taujqu", "bjh-iuub", "bnbjywgpwqiu-jmko", "correct", "cmm-umwayffnfqnk", "ddlmb-abnusvyfqaraw", "eqbb-vknyhi", "fwnaclelraqap-j", "gfdzrnhnpbzfojbzxyv-jgos", "hmlkhswb-ncw", "correct", "correct", "ibyjoxqcg-biwsjadqe", "ijat-hhzkoh", "correct", "correct", "correct", "kn-opr", "kvpvqjvvmjvxuhue-funclxd", "mt-lmhqtapyolkfd", "mulcobx-qoxiwyxwz", "correct", "correct", "orbvwrpofbqaf-pcti", "correct", "correct", "qddkjk-qhbmmr", "qee-dgwiuourgekmtsbbksulso", "q-idulsk", "tun-lahducbig", "unlkm-pkii", "vldyh-fuqtnr", "vpu-wz", "correct", "correct", "correct", "correct", "correct", "xssmpvgqc-xwgn", "yiavewsj-hjb", "ziin-ejb"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> dictionary = {"p utgz cyhp twju", "gmv v", "sdt j cq gyw", "zftp dbfv oje yssi", "shk gi coq kwry hnnj", "uirm r avl xr b cr lhd", "r hgf ll p djqi t", "gvn huk g kq", "wdvg fji", "fqx chh uxok oyeo", "cerd xa mbl cwo svvj", "udup r uvf n c trhl ln e mgns urur", "moe rl ut adt", "nau vf m d gc wcux sa deeg", "d n mz", "rd n ikcs hr z", "c y mg", "yye u vub l ier l", "opzj pspm g", "qe wewk m gv d ettj wh t", "yl uo jx fp hjzt", "gve xp h v usre sk nwp faq", "jsxg ecn kbzg dry vpsp n", "rxwo twv fnt di vwvs mgfq", "rm k lfrp", "o iia bme gady ydal u qmis", "cjf vk piu xt", "t avv rjv gylk", "os jb fxf ubx", "tha nf a kwx xv ix gs c jzu nm", "q prh ryfu aqik", "kzak hwy qmvv ac u tn mc", "sw j wmxs h kdaf boq aja udwq", "a rk if dor gnlw nzhi", "blk ijxk a", "i yncx krn i", "tblv axov adne", "rkme xp tp v mv", "hnf mhl jr c cwb", "lps nwo nul wkie gqo zmx", "jao awey ol htyf", "euj q c ipd t", "zem jrfs on", "hndr q ibsn p gged nonn nnrz", "fgl vfqe jo zsqm", "nkaq solt jowg tbq t rqo", "u qjx", "e um b v zp m vncf vp bzwd", "bin yp bp lbqi", "dja eq sqsv jky rzf"};
    vector<string> candidates = {"-gvexphvusresknwpfaq", "-gvnhukgkq", "arkifdorgnlw-nzhi", "b-lkijxka", "biny-pbplbqi", "c-ymg", "cerdxamblcwo-svvj", "cjfvkp-iuxt", "d-nmz", "dja-eqsqsvjkyrzf", "eujqcipd-t", "eum-bvzpmvncfvpbzwd", "fglvfqejozsq-m", "fqxchhux-okoyeo", "gmv-v", "hndrqibsnpggednonnnnr-z", "hnfmhljrccw-b", "iyncxkrn-i", "jaoaweyolhtyf-", "jsxgecnkbzgdryvpsp-n", "kzakhwyqmvv-acutnmc", "lpsnwonulwk-iegqozmx", "mo-erlutadt", "nauvfmdgcwcuxsa-deeg", "nkaqsoltjowg-tbqtrqo", "o-iiabmegadyydaluqmis", "opzjpspm-g", "osjbfxf-ubx", "putgzcyhptwj-u", "qewewkmg-vdettjwht", "qprh-ryfuaqik", "rd-nikcshrz", "rhgf-llpdjqit", "rkmexptpv-mv", "rm-klfrp", "rxwotwvfntdiv-wvsmgfq", "sdtjcq-gyw", "shkgicoqk-wryhnnj", "swjwmxshkda-fboqajaudwq", "tavvrjvgylk-", "tblvaxovad-ne", "thanfakwxx-vixgscjzunm", "u-irmravlxrbcrlhd", "u-qjx", "udupruvfnctrhllnemgn-surur", "wdvgfj-i", "y-yeuvublierl", "yluojxfphj-zt", "zem-jrfson", "zftpd-bfvojeyssi"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gve-xphvusresknwpfaq", "gvn-hukgkq", "correct", "blk-ijxka", "bin-ypbplbqi", "correct", "correct", "cjfvk-piuxt", "correct", "correct", "correct", "correct", "fglvfqejo-zsqm", "fqxchh-uxokoyeo", "correct", "hndrqibsnpggednonn-nnrz", "hnfmhljrc-cwb", "correct", "jaoaweyol-htyf", "correct", "correct", "lpsnwonul-wkiegqozmx", "moe-rlutadt", "correct", "correct", "correct", "correct", "correct", "putgzcyhp-twju", "qewewkm-gvdettjwht", "correct", "correct", "correct", "correct", "correct", "rxwotwvfntdi-vwvsmgfq", "correct", "shkgicoq-kwryhnnj", "swjwmxshkdaf-boqajaudwq", "tavvrjv-gylk", "tblvaxov-adne", "thanfakwx-xvixgscjzunm", "uirm-ravlxrbcrlhd", "correct", "udupruvfnctrhllnemgns-urur", "wdvg-fji", "yye-uvublierl", "yluojxfp-hjzt", "correct", "zftp-dbfvojeyssi"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> dictionary = {"v pvd z s tkft vrph", "m k a", "nwbw f ur cp ak cb rptn dbd l", "pwb k ye vzmg w udtb", "o ref lpc nb", "cai xsfp v fehy rb", "oghv do dpk r hz a dvb", "hgk fzkp nqok jxiv eu j", "vcra n h gl m", "e sm", "syb bxz ug vbs cfx kkc", "rz rhm p mmal tsrh", "m sqwv jkzu opur gm j mwkw leuy", "t dlo vsu oyg sgyt lpt j", "y hnks fiq vnrm gj", "zaxx qtwh e w nu rz", "w bmua zl nzsk fn gsz tst dubx m", "op ilwe zg y iren psio", "xws gy dae gpli mkc", "xe ccs", "ea pbqo ncn r", "aids", "eqo zw j v bp pnr ko r xb", "w xbwj", "i m kz krtq r zcgn", "mli ft svpp", "npol gzg yax", "d lp jka b s ujiy vtxk fxqz", "maw uv p kev og vn q", "uqo qxl wzrj xq qias t kwtm ity gb", "hhov o", "cy n y e yh gbyx rrb ucyt", "ic u cjyq qpym s lvih ejv kfj zq", "na ily r c", "oa veq", "f nbl kv l dkpy", "khi hmk c kv", "wzf m kmnw", "lf o xn", "d dxoy ecys lszh amii l s", "p heq onb", "q saox pp om kvyz", "ptdr evcz", "w y kel vmf rr rv", "kipf wloi k qb bm k", "uo j ynrf njt", "ywn hp romt nf", "yy wd zc w", "wf wd wmw l hn pyxn ay oilw mkoo z", "cyqh iq rmuw bp"};
    vector<string> candidates = {"-caixsfpvfehyrb", "-hhovo", "-rzrhmpmmaltsrh", "-vcranhglm", "-yhnksfiqvnrmgj", "a-ids", "cynyeyhgby-xrrbucyt", "cyq-hiqrmuwbp", "d-lpjkabsujiyvtxkfxqz", "ddx-oyecyslszhamiils", "eapb-qoncnr", "eqozw-jvbppnrkorxb", "esm-", "fnblk-vldkpy", "hgkfzkpn-qokjxiveuj", "icucjyqq-pymslvihejvkfjzq", "imk-zkrtqrzcgn", "kh-ihmkckv", "kip-fwloikqbbmk", "lfoxn-", "m-ka", "mawuvpkevogv-nq", "mliftsvp-p", "ms-qwvjkzuopurgmjmwkwleuy", "n-ailyrc", "n-polgzgyax", "nwbwfurcpakcbrptndbdl-", "oave-q", "oghvdodpkr-hzadvb", "opilwez-gyirenpsio", "oref-lpcnb", "p-heqonb", "ptd-revcz", "pwbkyevzmgw-udtb", "q-saoxppomkvyz", "sybbxzugvbscfxkkc-", "tdlovsuoygs-gytlptj", "uoj-ynrfnjt", "uqoqxlwzrjxqqiastkwtmityg-b", "vpvd-zstkftvrph", "w-xbwj", "wbmuazlnzskfngsztst-dubxm", "wfwdwmwlhnpyxnayo-ilwmkooz", "wykelvmfrrrv-", "wzfmk-mnw", "x-eccs", "xwsgyd-aegplimkc", "ywnhpromtnf-", "yyw-dzcw", "za-xxqtwhewnurz"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cai-xsfpvfehyrb", "hhov-o", "rz-rhmpmmaltsrh", "vcra-nhglm", "y-hnksfiqvnrmgj", "aids", "cynyeyhgbyx-rrbucyt", "cyqh-iqrmuwbp", "correct", "d-dxoyecyslszhamiils", "ea-pbqoncnr", "correct", "e-sm", "fnbl-kvldkpy", "hgkfzkp-nqokjxiveuj", "icucjyq-qpymslvihejvkfjzq", "im-kzkrtqrzcgn", "khi-hmkckv", "kipf-wloikqbbmk", "lfo-xn", "correct", "mawuvpkevog-vnq", "mlift-svpp", "m-sqwvjkzuopurgmjmwkwleuy", "na-ilyrc", "npol-gzgyax", "nwbwfurcpakcbrptndbd-l", "oa-veq", "correct", "opilwe-zgyirenpsio", "correct", "correct", "ptdr-evcz", "correct", "correct", "sybbxzugvbscfx-kkc", "tdlovsuoyg-sgytlptj", "correct", "uqoqxlwzrjxqqiastkwtmity-gb", "correct", "correct", "correct", "wfwdwmwlhnpyxnay-oilwmkooz", "wykelvmfrr-rv", "wzfm-kmnw", "xe-ccs", "xwsgy-daegplimkc", "ywnhpromt-nf", "yy-wdzcw", "zaxx-qtwhewnurz"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> dictionary = {"yn m piwl am brqj fx", "cmxw hs", "hjyz mkvt", "bgvq", "psba hvjj hhlr lgj", "lytd c oir js v loup", "a vy xeqx lex", "zaho kos u", "zbtz ngp su rb ezlu ujcl", "paol if r lmha yy mf", "xfpe xyg swc lxk us", "ma rahq crab", "teph zipt fdj b", "zjj h tf laza pl n", "ukeu dui znu", "ti vj ipoc", "xhzj ocgi gce b", "flo fb voy qwsy", "nqk prau nck msr wji s jm rkfb", "zft gj kfcr hnew wbw", "ph x xns", "ezqo pn huy z yq", "hzw zew ulu", "kf xyh gsbl qy fv qosq", "o uvm vi k ym nnbv kfis rvr jkmh q", "tl pvbx s yetb yazn qlpf uuk s yq znhk a", "fltx bdyc a zgw g tj sx rqij m", "af jld sdds", "nm hn aoi qo", "y eovk rjhi", "gne scj a", "md fbzj uhyg bexs", "s zfkz lr lv", "gfda ngvs", "u nhl a icj ronp tz", "kpo smne op", "wc i cu mlaw ezk o jn", "yde rpdj bie dow q ve s", "dejf ynn clo rji", "un pnpk f twj q cyo", "aa svj uv l p", "ef o awjh stmh uds csv", "gvim esiu p dnen fovq", "zxl yjub iyt", "wqbp zrel tyy ywt", "z gvn ye", "pgi l i du is m", "ff zfz scb wi u zkw itj zjyi yoj jcpn kso", "f u zw s", "xzki ghb i td i xfxh ht"};
    vector<string> candidates = {"-dejfynnclorji", "-marahqcrab", "-mdfbzjuhygbexs", "aasvjuv-lp", "afjldsdd-s", "avyxeqxle-x", "bgv-q", "cm-xwhs", "efoawjhstmhud-scsv", "ezqo-pnhuyzyq", "ffzfzscbwiuzkwitj-zjyiyojjcpnkso", "flofbvoy-qwsy", "fltx-bdycazgwgtjsxrqijm", "fuzws-", "g-nescja", "gfda-ngvs", "gvimesiu-pdnenfovq", "hjyzmkvt-", "hzw-zewulu", "kfxyhg-sblqyfvqosq", "kposmn-eop", "lytdcoir-jsvloup", "nm-hnaoiqo", "nqkpr-aunckmsrwjisjmrkfb", "ouvmvikymnnbvkfisrvr-jkmhq", "p-hxxns", "paolifrlmhayy-mf", "pgiliduism-", "psbahvjj-hhlrlgj", "szfk-zlrlv", "tephziptfd-jb", "tivji-poc", "tlpvbxsyetbyaznqlpfuuk-syqznhka", "ukeuduiznu-", "unhlaicjron-ptz", "unpnpkftwj-qcyo", "wcicumlawezk-ojn", "wqbpzreltyyyw-t", "xfpexyg-swclxkus", "xhzj-ocgigceb", "xzkighbitdixfxhht-", "y-eovkrjhi", "yderpdjbied-owqves", "yn-mpiwlambrqjfx", "zahok-osu", "zbtzng-psurbezluujcl", "zftgjkfcrhnewwb-w", "zgvn-ye", "zjjhtfla-zapln", "zxlyjub-iyt"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dejf-ynnclorji", "ma-rahqcrab", "md-fbzjuhygbexs", "correct", "afjld-sdds", "avyxeqx-lex", "bgvq", "cmxw-hs", "efoawjhstmhuds-csv", "correct", "correct", "correct", "correct", "fuzw-s", "gne-scja", "correct", "correct", "hjyz-mkvt", "correct", "kfxyh-gsblqyfvqosq", "kposmne-op", "correct", "correct", "nqk-praunckmsrwjisjmrkfb", "correct", "ph-xxns", "correct", "pgiliduis-m", "correct", "szfkz-lrlv", "tephziptfdj-b", "tivj-ipoc", "correct", "ukeudui-znu", "unhlaicjronp-tz", "correct", "correct", "wqbpzreltyy-ywt", "correct", "correct", "xzkighbitdixfxh-ht", "correct", "yderpdjbie-dowqves", "correct", "zaho-kosu", "zbtzngp-surbezluujcl", "zftgjkfcrhnew-wbw", "correct", "zjjhtf-lazapln", "correct"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> dictionary = {"sc cd sf yak etx khil ze", "ve yw bo zyvq xzii xr vf jwf l", "hcqo ch xx pwdp jk s k", "h w u zfib uee", "hjk y hw l sn bqka", "ocb oci cr atq yfux ey qndt", "n ppi uty cfp ov", "tidg ji xba kgw", "m d livp xfqg", "lzxv gblm dmc j xk ay ek nr", "ppn me vg", "ho psnw x", "sohj o s gl dsxq vah fpq jxr", "ar dc f sqdy sgw", "jv sw lfzk kb epdm", "tfwy vfl ikc pnw sf eyh", "hurd wo j ycdb", "fit stnm kgma", "a iwf mqhj pn", "mwta xwdt dzmy", "qtz fv hb ulc jr q ex r", "ppa qru dkwe ez", "f cigz b voji", "ytd d inka a znr fgl", "pc zurw", "ynt prp fix ebg", "rpg zov wjj l end mpv", "gieu fgno afrm h r", "zafw j nl zhr", "ukun", "dbve cmyu rb hfx", "oie hqa lzzg f mhq gn", "alu r vo", "cbu af csd g fqcq e l q", "rcte ilc s l hiu geg pqa u p", "h tyn xb i ogct sfqy", "vq m aup wi pqkv uxqw hli xu rs", "gkya rfc yle kac dl", "v d k ziln t qh bma", "qdf f rj hlp ax qb fgw", "zf lpxi ksyo vavg", "mmh hhbz tdyk bgi", "b bm a er ypkr h", "podd umfn htqe id", "slts xtmw j", "ytn u qtl xdrk yl izpv", "jyif bu", "ny wp opek rt ngaj v", "imcs wiew fd", "bny w xb f bo"};
    vector<string> candidates = {"-alurvo", "-fitstnmkgma", "-hopsnwx", "-hurdwojycdb", "-hwuzfibuee", "-qdffrjhlpaxqbfgw", "-sltsxtmwj", "-ukun", "ai-wfmqhjpn", "ardcfsqdysg-w", "bbmae-rypkrh", "bnywxbf-bo", "cbu-afcsdgfqcqelq", "dbvecmyurbhf-x", "fcigzbvoji-", "gieu-fgnoafrmhr", "gkya-rfcylekacdl", "hcq-ochxxpwdpjksk", "hjkyhwlsnb-qka", "hty-nxbiogctsfqy", "imcswie-wfd", "jvswlfzkkbepdm-", "jy-ifbu", "lzxv-gblmdmcjxkayeknr", "mdlivpxfq-g", "mmhhhbztd-ykbgi", "mwtax-wdtdzmy", "nppi-utycfpov", "nywp-opekrtngajv", "ocbocicratqyfuxey-qndt", "oiehqalzzgfmhq-gn", "pczu-rw", "pod-dumfnhtqeid", "ppaqr-udkweez", "ppnm-evg", "qtzfvhbulcjrqe-xr", "rcteilcslhiugeg-pqaup", "rpgzovwjjlendmp-v", "sccdsf-yaketxkhilze", "sohjosgldsxqvahfpqjxr-", "tfwyvf-likcpnwsfeyh", "tidgji-xbakgw", "vdkzilntqhb-ma", "veywbozy-vqxziixrvfjwfl", "vqmaupwipqkvuxqw-hlixurs", "yntprpfixebg-", "ytd-dinkaaznrfgl", "ytnuqtlxdrkylizpv-", "zaf-wjnlzhr", "zfl-pxiksyovavg"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"alu-rvo", "fit-stnmkgma", "ho-psnwx", "hurd-wojycdb", "h-wuzfibuee", "qdf-frjhlpaxqbfgw", "slts-xtmwj", "ukun", "a-iwfmqhjpn", "ardcfsqdy-sgw", "bbma-erypkrh", "correct", "correct", "dbvecmyurb-hfx", "fcigzb-voji", "correct", "correct", "hcqo-chxxpwdpjksk", "hjkyhwlsn-bqka", "htyn-xbiogctsfqy", "imcswiew-fd", "jvswlfzkkb-epdm", "jyif-bu", "correct", "mdlivp-xfqg", "mmhhhbz-tdykbgi", "mwta-xwdtdzmy", "correct", "correct", "correct", "correct", "pc-zurw", "podd-umfnhtqeid", "ppaqru-dkweez", "ppn-mevg", "qtzfvhbulcjrq-exr", "correct", "rpgzovwjjlend-mpv", "correct", "sohjosgldsxqvahfpq-jxr", "tfwyvfl-ikcpnwsfeyh", "correct", "vdkzilntqh-bma", "veywbo-zyvqxziixrvfjwfl", "correct", "yntprpfix-ebg", "correct", "ytnuqtlxdrkyl-izpv", "zafw-jnlzhr", "zf-lpxiksyovavg"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> dictionary = {"v netw vhm c", "ewoi lnyz uu blqm turh yjji", "y hnw pod td yo", "jgs tro esdn jz pm h a", "ryd xho ek rabm zktp ji vxi zub", "mg zca y poct ki", "pd yoik jsu", "g c a voza z", "aqfi rzy", "hz oi dq kaw k", "t kns a e qqy tgce lwqb", "ns c xnan xkm hn kov", "cowp utti rsy", "zh aj tiuz yu", "fqv oio cown", "moum k q t", "rf uapg guz", "c qpz ro ard hl", "y dit vvm yits of rcrv s", "tpr otyh cz jqqc", "h js j kawx yukz m oxn yk s", "di toqt pmbo ml ffm zkk qsf", "mkf ytx emq j o bmp glc zcvi", "at xtv nsw", "tv o tk wd b fxuj bar y lnyi", "kc o rp ta f xtq ob l", "fbqo kutk ml ya fn xmm ecp", "dl vu nx", "ehx tu cgf feha jhe", "nlqx skj", "vcgu t nkx lvcl glt r lu n rkxc", "udz begn ss z t eds", "lsxa w rbfz dsdu yaa xh", "wgjy kauq do", "lat nl o k l", "a dxsw mia", "g djbe wqgj zl tvko k", "hm ywh khs adqh jtn", "wyu p wmr uek k", "kdu v rgjd", "r t llt", "tqet qwbm x j xc nan p", "gyob j rzl jaj ydvp pim n", "p d v e ge wz vmi l sq nmyh", "xn mjiq ev cbb d mp nj qbix x", "e x nko q ka nnv rrt ddp ywn up", "hdm n gy ic j", "e owvu x vrlr u uqz lzwk a cb ugvs ophv", "law m qoip rjv", "hgct opp knc pb"};
    vector<string> candidates = {"-aqfirzy", "-zhajtiuzyu", "a-dxswmia", "atxt-vnsw", "c-qpzroardhl", "cowputtir-sy", "ditoqtpmbomlffm-zkkqsf", "dlvun-x", "ehxtucgffehajh-e", "eowvux-vrlruuqzlzwkacbugvsophv", "ewoi-lnyzuublqmturhyjji", "exnkoqkannvrrtddp-ywnup", "fbqok-utkmlyafnxmmecp", "fqvoiocown-", "gcavoz-az", "gdjb-ewqgjzltvkok", "gyobjr-zljajydvppimn", "h-dmngyicj", "h-zoidqkawk", "hgct-oppkncpb", "hjsjkawxyukzm-oxnyks", "hmywhkhsadqh-jtn", "jgstroesdn-jzpmha", "kcorptafxtqobl-", "kdu-vrgjd", "latn-lokl", "lawmqoiprjv-", "lsxawrbfzdsduy-aaxh", "mgz-caypoctki", "mkfytxemqjobmpglc-zcvi", "mo-umkqt", "nl-qxskj", "nscxnanxkmhn-kov", "p-dyoikjsu", "pdvegewzvmilsq-nmyh", "rfu-apgguz", "rt-llt", "rydxhoekrabmz-ktpjivxizub", "tknsaeqqytgcelwq-b", "tprotyhczj-qqc", "tqetqw-bmxjxcnanp", "tvotkwdbfxujbar-ylnyi", "udzbegnsszteds-", "vcgutnkxlvclgltrlu-nrkxc", "vnet-wvhmc", "wgjykauqd-o", "wy-upwmruekk", "xnmjiqevcbbdmpnjqbix-x", "yditvvmyits-ofrcrvs", "yhnwp-odtdyo"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aqfi-rzy", "zh-ajtiuzyu", "correct", "atxtv-nsw", "correct", "cowputti-rsy", "correct", "dlvu-nx", "ehxtucgffeha-jhe", "correct", "correct", "correct", "fbqo-kutkmlyafnxmmecp", "fqvoio-cown", "gcavoza-z", "gdjbe-wqgjzltvkok", "gyobj-rzljajydvppimn", "hdm-ngyicj", "hz-oidqkawk", "correct", "correct", "correct", "correct", "kcorptafxtqob-l", "correct", "lat-nlokl", "lawmqoip-rjv", "lsxawrbfzdsdu-yaaxh", "mg-zcaypoctki", "correct", "moum-kqt", "nlqx-skj", "correct", "pd-yoikjsu", "correct", "rf-uapgguz", "correct", "rydxhoekrabm-zktpjivxizub", "tknsaeqqytgce-lwqb", "tprotyhcz-jqqc", "tqet-qwbmxjxcnanp", "correct", "udzbegnsszt-eds", "correct", "vnetw-vhmc", "wgjykauq-do", "wyu-pwmruekk", "correct", "correct", "yhnw-podtdyo"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> dictionary = {"pbv msf fxqu xcgj fwrw wj j", "a oz", "gpw ib eqc c zb xnrx gugf eqnm z", "pz jewa ovk", "rhy tsj yb st", "ho zjoz", "w m wvnv i yfjn p mh", "x qwa yh xk", "lmyk iytg o zvec hlf cm", "kqk rf osy", "nw v mt bd v hn", "ytt m huqp lsa oe ih lff", "no sgm d yw xx", "zo dsvn r pfcw lg mj o", "vlp eij is gd as j", "hu yqmz nenh", "cfy g msq ezq ytf ky", "ln t uvgq xix msi o sxxb", "no qgv ehi cc", "zid ymj bnwr xhhl", "cjw nkqz c", "snfz cyol ggsb jfi ob ezxl", "mjx vxi df zij vp nl", "ppww qpe e j ysk jl w bb iiza", "u qac", "w x g vs uvly si", "huil u k fka", "pk o d", "p msf p xqq x olty env yg", "pix b qzq bwp d e vzep gk q", "bno sydl qhcd nef dgfh oad vg", "lvxz z z aobk feq cxrr", "ox ehxx txsk gr s", "bquk ywx pgrj azl mkx fy ldpq nu", "dq vrh zpcz ltho eule ye", "jr v", "jgfv onvs i aam aqp", "xjb u t pdt", "t a lig ruq l", "okc shtx uel wl xnu", "cuhw mdga v dn yei", "df f rxh", "emo orl c aat o jh", "nl uqo z ymx ass s suj", "rzm bs v ei ba wev", "frt cbk b mpqg urg rd x", "u x erp dlde lnmn a cy bbf bga ays", "qgpx p zwfn anfx gyqb ai", "c qop ik tmb blq kohd", "ig v dhd"};
    vector<string> candidates = {"-hozjoz", "-huilukfka", "-huyqmznenh", "-rzmbsveibawev", "-vlpeijisgdasj", "aoz-", "bnosydlqhcdnefdgfhoa-dvg", "bqukywx-pgrjazlmkxfyldpqnu", "cfygmsqezqytfk-y", "cjwn-kqzc", "cqopiktmb-blqkohd", "cuhwmdga-vdnyei", "dffrxh-", "dqvrhzpczltho-euleye", "emoorlcaat-ojh", "frtcbkbmpqgu-rgrdx", "gpwib-eqcczbxnrxgugfeqnmz", "igvd-hd", "jgfvonvsiaamaq-p", "jr-v", "kqkrfosy-", "lmykiytgoz-vechlfcm", "lntuvgqxixmsios-xxb", "lvxzzzaobkf-eqcxrr", "mjxvxidfzij-vpnl", "nluqozymxasss-suj", "noqgvehi-cc", "nosg-mdywxx", "nwvm-tbdvhn", "okcshtxuelwlxn-u", "oxeh-xxtxskgrs", "p-kod", "pbvmsf-fxquxcgjfwrwwjj", "pixbqzqbwpdevzepgkq-", "pmsfpxqqxol-tyenvyg", "ppwwqpeejyskjlwbb-iiza", "pzje-waovk", "q-gpxpzwfnanfxgyqbai", "rhytsjybst-", "snf-zcyolggsbjfiobezxl", "taligru-ql", "uqac-", "uxerpdldeln-mnacybbfbgaays", "wmwvnviyfjnpmh-", "wxgv-suvlysi", "xjb-utpdt", "xqwayh-xk", "yttmhuqpls-aoeihlff", "zidymjbn-wrxhhl", "zo-dsvnrpfcwlgmjo"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ho-zjoz", "huil-ukfka", "hu-yqmznenh", "rzm-bsveibawev", "vlp-eijisgdasj", "a-oz", "bnosydlqhcdnefdgfhoad-vg", "correct", "cfygmsqezqytf-ky", "cjw-nkqzc", "correct", "correct", "dff-rxh", "correct", "correct", "frtcbkbmpqg-urgrdx", "correct", "igv-dhd", "jgfvonvsiaam-aqp", "correct", "kqkrf-osy", "lmykiytgo-zvechlfcm", "lntuvgqxixmsio-sxxb", "lvxzzzaobk-feqcxrr", "correct", "correct", "correct", "nosgm-dywxx", "nwv-mtbdvhn", "okcshtxuelwl-xnu", "ox-ehxxtxskgrs", "pk-od", "correct", "pixbqzqbwpdevzepgk-q", "pmsfpxqqx-oltyenvyg", "correct", "pz-jewaovk", "qgpx-pzwfnanfxgyqbai", "rhytsjyb-st", "snfz-cyolggsbjfiobezxl", "taligruq-l", "u-qac", "uxerpdlde-lnmnacybbfbgaays", "wmwvnviyfjnp-mh", "wxg-vsuvlysi", "correct", "correct", "yttmhuqplsa-oeihlff", "zidymj-bnwrxhhl", "correct"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> dictionary = {"mzlp kvcb puey obd", "t mdae gpo t wfy yqnl fmjc", "cff pf q", "rp ciu qkru f wbrk dv hl flp osim maox", "eb ddqf", "iqe sup h ys zw ne rvab", "se qe npyk kuop", "kr pmzq d h jvvx qtno", "rayx bdkw h sht kfli", "ovqx gfyt mlx f lpn", "jh r rh k rkpq n", "g b va tts jdqf", "q tb vuo nol", "wz vv bnz df nc", "boq ggpc", "z okr cf p ibcb", "viqx niv uce o mdg hs ap", "jjkq wyh w", "zzh qc", "nec xwy vtn hd ta nt", "axib r lbl la kywt", "a w ykr b w", "ir sg qwrd", "ct siny cq onsd r jl", "tqjn xt zerr tpll b", "xj o w ybgj", "fmc uk", "oc np jt ku bgy", "g tmri oz bq bhsu p pd", "p sy gvsi hfu nnzy kkru", "mc yfgs y tlq ghxv bs eocq", "sgx gp dfkh b yue", "gg mu w nic zdm nm", "o joud cv agr m", "w p nk iwp k", "lljs r ilk ron pj", "dv j ujw iphz", "xacb ew xe i d hkl coz", "duqr k ros zvop", "lx cwfa j is", "my y l lzza", "o vq yv kchv ie fkog", "pc zptc lxs nwr a", "e t j by tc bitx", "hgal ry tb", "aqh q b vfmp kso", "x qi cdcs vhn lpa", "z s cgom jz e iox u yubu efgw", "v a pmfl hxcl c snro", "ah l y iu vn y pmuz del ckex tn"};
    vector<string> candidates = {"-boqggpc", "-cffpfq", "-fmcuk", "-irsgqwrd", "-lljsrilkronpj", "-wzvvbnzdfnc", "-zzhqc", "a-wykrbw", "ahlyiuvn-ypmuzdelckextn", "aqhqbvfmpks-o", "axibr-lbllakywt", "cts-inycqonsdrjl", "duqrkros-zvop", "dvjujwi-phz", "e-bddqf", "etjby-tcbitx", "gbvatts-jdqf", "ggmuwniczd-mnm", "gtmriozbqbhsu-ppd", "hga-lrytb", "iqes-uphyszwnervab", "jhrrhkrkp-qn", "jjkqw-yhw", "krpmzqdhjvvxqtn-o", "lxcwf-ajis", "mcyfgsytlqghx-vbseocq", "myyllzza-", "mzlpkvcbpueyobd-", "necxwyvtnhdta-nt", "o-cnpjtkubgy", "ojoud-cvagrm", "ovqxgfytm-lxflpn", "ovqyvkchviefko-g", "pcz-ptclxsnwra", "psygvsihfunnz-ykkru", "qtb-vuonol", "ray-xbdkwhshtkfli", "rpciuqkrufwbrk-dvhlflposimmaox", "seqenpykku-op", "sg-xgpdfkhbyue", "tmd-aegpotwfyyqnlfmjc", "tqjnxtzerrtp-llb", "vapmflh-xclcsnro", "viqxnivuce-omdghsap", "wp-nkiwpk", "xacbewxeidhk-lcoz", "xjow-ybgj", "xqicdcsvhnl-pa", "zokrcf-pibcb", "zscgomjze-ioxuyubuefgw"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"boq-ggpc", "cff-pfq", "fmc-uk", "ir-sgqwrd", "lljs-rilkronpj", "wz-vvbnzdfnc", "zzh-qc", "correct", "correct", "aqhqbvfmp-kso", "correct", "ct-sinycqonsdrjl", "correct", "dvjujw-iphz", "eb-ddqf", "correct", "correct", "ggmuwniczdm-nm", "correct", "hgal-rytb", "iqe-suphyszwnervab", "jhrrhkrkpq-n", "jjkq-wyhw", "krpmzqdhjvvx-qtno", "lxcwfa-jis", "mcyfgsytlqghxv-bseocq", "myyl-lzza", "mzlpkvcbpuey-obd", "correct", "oc-npjtkubgy", "correct", "ovqxgfyt-mlxflpn", "ovqyvkchvie-fkog", "pc-zptclxsnwra", "psygvsihfunnzy-kkru", "correct", "rayx-bdkwhshtkfli", "correct", "seqenpyk-kuop", "sgx-gpdfkhbyue", "t-mdaegpotwfyyqnlfmjc", "tqjnxtzerr-tpllb", "vapmfl-hxclcsnro", "correct", "correct", "xacbewxeidhkl-coz", "correct", "xqicdcsvhn-lpa", "correct", "correct"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> dictionary = {"tucc mzdn izvf oi zpz ir", "ggw cex", "l j mk f o i mhnl n zuyv", "jkfu p xuwy qhu", "dkhf gpke w", "q b hi", "ar zy gsuk dj", "b kmn o c lmar", "z r fbg i ixuk", "cs mdo vbfe qznh", "vbp sopd", "aov xvo hj kxl r zdvy", "pz h ws quxo", "lo wrt dj", "qtwf fvh c g", "fjhc k t gx kq x a", "avt ebf y h w aml j no fcyz", "ug pw askt y", "s f moer g t ccef", "ay hq o kgt biys ky", "q tgil qi a vdmf cb x uoc", "lkyb jcji pb cbmt", "umld jm t vmwk", "iy ri sulh ltx", "kp d lyg zt ew e swpc", "k n jcgu", "wlwj v t z jf tjg j s", "mso u dnp dhg rhsq tabc", "w t hvg pjoy g", "y qmqh w ufco s", "zqa s xwy ka", "ftwg eyy", "q abx pfv s hvj bynl ikf npbr ga bx", "y zo ps x s ew", "js w h p lhmx av b u yz", "tm mire qq cdi mce", "efh cx e bsnp bd xqmt", "zd y mt stc", "xorv co az bl", "w n uiuy snju wqm", "px qr d cgje bse exvb dh", "cnj fcuf ot id jqjb migq ks rhmh", "wym gp vh eota nxwk", "g iux kwhj yyoe oyl gdd uvd", "z riuh ggv bcq w p jct", "p iu fve fn era", "ydd u wns sro q dfu b hgf m", "f mv inql bgg jlcl", "t wirj b qett", "wid w lm kkf ps isi jtpv"};
    vector<string> candidates = {"-fjhcktgxkqxa", "-fmvinqlbggjlcl", "-knjcgu", "-zriuhggvbcqwpjct", "aovxvohjkxlrzd-vy", "arzygs-ukdj", "avtebfyhwamljno-fcyz", "ayhqok-gtbiysky", "bkmnoclm-ar", "cnjfcufotidjqjbmigqksr-hmh", "csmdo-vbfeqznh", "dkhfgpke-w", "efhcxe-bsnpbdxqmt", "ftwgeyy-", "ggwce-x", "giuxkwhjyyoeoyl-gdduvd", "iyr-isulhltx", "j-swhplhmxavbuyz", "jk-fupxuwyqhu", "kpdlygzte-weswpc", "lj-mkfoimhnlnzuyv", "lkybjcjipbcbmt-", "lo-wrtdj", "msoudnpdhgrh-sqtabc", "pi-ufvefnera", "pxqrdcgjebseexv-bdh", "pzh-wsquxo", "q-tgilqiavdmfcbxuoc", "q-twffvhcg", "qabxpfvshvjbynlikf-npbrgabx", "qbhi-", "sfmoergtcc-ef", "tmmireqqcdi-mce", "tuccmzdnizvfoi-zpzir", "twir-jbqett", "ugpwask-ty", "umldjmtvmwk-", "vbpsopd-", "widwlmkkf-psisijtpv", "wlwjvtzjftjg-js", "wnuiuysn-juwqm", "wthvgpj-oyg", "wymgpvheota-nxwk", "xorv-coazbl", "ydduwnssroqd-fubhgfm", "yqmqhwu-fcos", "yzo-psxsew", "zdymtst-c", "zqas-xwyka", "zrfbgi-ixuk"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fjhc-ktgxkqxa", "f-mvinqlbggjlcl", "k-njcgu", "z-riuhggvbcqwpjct", "aovxvohjkxlr-zdvy", "arzy-gsukdj", "correct", "ayhqo-kgtbiysky", "bkmnoc-lmar", "cnjfcufotidjqjbmigqks-rhmh", "correct", "correct", "correct", "ftwg-eyy", "ggw-cex", "correct", "iy-risulhltx", "js-whplhmxavbuyz", "jkfu-pxuwyqhu", "kpdlygzt-eweswpc", "correct", "lkybjcjipb-cbmt", "correct", "msoudnpdhg-rhsqtabc", "p-iufvefnera", "pxqrdcgjebseexvb-dh", "correct", "correct", "qtwf-fvhcg", "correct", "qb-hi", "sfmoergt-ccef", "correct", "correct", "twirj-bqett", "ugpwaskt-y", "umldjmt-vmwk", "vbp-sopd", "correct", "correct", "wnuiuy-snjuwqm", "wthvg-pjoyg", "correct", "correct", "ydduwnssroq-dfubhgfm", "yqmqhw-ufcos", "correct", "zdymt-stc", "correct", "correct"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> dictionary = {"qovs fqm opol i", "w vxk n wju", "tjqh a jred wl", "uwcp braz ntt mc", "yvf zve ka r", "sc qyvx vz p zy kykf wx", "jxcf ypto no b", "nw s rqf opdv ot oq ao", "syov ho dwk cryc", "ui vyw deux cvjt pk", "ifem jy thr", "sirx id no", "nek jim tz bur s", "umfs m c", "orn hnmh bfwa e o elga jx l", "o xr xqko futj eobj", "jog gnj y a clr gg", "tnjn qxa w w sery vkb", "r z tn oh lfxl", "we fgq", "s lyvk yxsl", "scdi dxi xwwn udyu", "d n hr i", "ix goli x o", "poav", "d nzyd hkw qddf", "f fyfe tc hccd rrbo", "ew mwq j ezea kz jzub lr", "qnxs xfx n xsi wwg", "x m zm xh", "tst tysk cd dg nzk vmn", "aeiy vl dudh n cj z", "xo or m jnjk gnl e toz", "ydkg dpgt pa", "lmy wq e ens gfi xkt bhlx", "x w zxly gun pdv", "znha zaq s zyf", "ax ih dyqi cju", "xpo no q ki ke abr aaw", "lr deq tw asn mab ctwy iazc", "nd u vvz nmt dlh y mpa", "u vl xy iyhh n glm", "e zzx air axd m kf tq l", "ka vq gjm qsbd", "o qks uv atn gght xeb", "wye geu i ng", "fcb gjiq eyo kcs", "jiet cnh", "i c dsb e zzg", "fb sk i y ld adnt mx"};
    vector<string> candidates = {"-aeiyvldudhncjz", "-dnzydhkwqddf", "-ifemjythr", "-kavqgjmqsbd", "axihdyqic-ju", "dnh-ri", "ewmwqjezeakzjzu-blr", "ezzxa-iraxdmkftql", "fbskiylda-dntmx", "fcbgjiqeyokcs-", "ffyfetchccd-rrbo", "icdsbe-zzg", "ixgolix-o", "j-xcfyptonob", "jietc-nh", "jogg-njyaclrgg", "lmywqeensgfixk-tbhlx", "lrdeq-twasnmabctwyiazc", "n-duvvznmtdlhympa", "n-ekjimtzburs", "nwsrqf-opdvotoqao", "oq-ksuvatngghtxeb", "ornhn-mhbfwaeoelgajxl", "oxrxqkofutjeo-bj", "po-av", "qnxsxfxn-xsiwwg", "qovsfqmopol-i", "rztnohlf-xl", "scdidxi-xwwnudyu", "scqy-vxvzpzykykfwx", "sirxidno-", "slyvk-yxsl", "syovhodwkcryc-", "tjqha-jredwl", "tnjnqxaww-seryvkb", "tsttyskcddgn-zkvmn", "uivywdeuxcvjt-pk", "umfs-mc", "uv-lxyiyhhnglm", "uwcpbraznttm-c", "w-efgq", "wvxknwj-u", "wyeg-euing", "x-ponoqkikeabraaw", "xmzmx-h", "xoormjnjkgnl-etoz", "xwzxlyg-unpdv", "y-vfzvekar", "ydkgd-pgtpa", "znhazaqszyf-"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aeiy-vldudhncjz", "d-nzydhkwqddf", "ifem-jythr", "ka-vqgjmqsbd", "axihdyqi-cju", "dn-hri", "ewmwqjezeakzjzub-lr", "ezzx-airaxdmkftql", "fbskiyld-adntmx", "fcbgjiqeyo-kcs", "correct", "correct", "correct", "jxcf-yptonob", "jiet-cnh", "jog-gnjyaclrgg", "lmywqeensgfixkt-bhlx", "correct", "nd-uvvznmtdlhympa", "nek-jimtzburs", "correct", "o-qksuvatngghtxeb", "orn-hnmhbfwaeoelgajxl", "oxrxqkofutj-eobj", "poav", "correct", "correct", "rztnoh-lfxl", "correct", "sc-qyvxvzpzykykfwx", "sirxid-no", "correct", "syovhodwk-cryc", "correct", "correct", "tsttyskcddg-nzkvmn", "correct", "correct", "u-vlxyiyhhnglm", "uwcpbrazntt-mc", "we-fgq", "wvxkn-wju", "wye-geuing", "xpo-noqkikeabraaw", "xmzm-xh", "correct", "xwzxly-gunpdv", "yvf-zvekar", "ydkg-dpgtpa", "znhazaqs-zyf"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> dictionary = {"q lj eoz ej vmsa vtt", "lm ye xmy ymd s pbhi", "xoip quy fdgw", "rmrz et gww", "ygi fx jw szwt", "f yisi ml v yw", "cq p kg g esh n ptx g g u q", "m bzdr b yjt nxkx", "u thb vcor", "i nti fhh aulu ylfh n p pfv", "ufwi ot", "dnmo qx m uuw w wrn pxu nbl iljo it", "rx pup m", "wa ze vee qdc", "l x uk ktaw iyb", "in tgao shf vnp asgb w", "woy tcqu cr", "ri mb fav", "jrzq shb tml bw ehu lca", "x xv a qv", "aky r wbl ou fyuo vj a hwn jzr vi o", "x lmax igv rh", "foq fi mjt kmi lx qgt", "vrq ta r o hr", "ae xb wej vfp lil mm", "ntpu cxoh itq zps aim", "q g gtc", "gmh rbg ig", "ama wq f q ty ivu rppt g", "rz bj kzzq oohh kvup", "fcln li p gxj zsye", "hqhc e", "h neg g dyri tyj v pvq zsln xldq", "maan dxtk ou alt l avwx wsvt", "b z sg fmgd", "mtan zldp", "tm vx zrw", "w tnpa ckg", "j erlb xsb khi be w zwx", "e a j lhnc gqom o", "eoh zzk k cqdj wtv", "z ard qjyt came dcsx gb", "zd xr se l cyzs nwt", "lu apia wkcx c j", "mbf vwl gvmv ap d lxd", "tulx iosu eae jym ffag lg", "ll geur n", "jx w szb zbur qnjq", "o yif dger efm zq", "wa gno dm px hkn"};
    vector<string> candidates = {"-rmrzetgww", "-woytcqucr", "a-mawqfqtyivurpptg", "aexbwej-vfplilmm", "akyrwblo-ufyuovjahwnjzrvio", "bzsgf-mgd", "cqpkgge-shnptxgguq", "dnmoqxmuuwwwrnpx-unbliljoit", "eajlhncgqomo-", "eoh-zzkkcqdjwtv", "fclnl-ipgxjzsye", "foqfimjtk-milxqgt", "fyisimlvyw-", "gmhrbg-ig", "h-qhce", "hneggdyrityjvp-vqzslnxldq", "intgaoshfvnp-asgbw", "intifhhaulu-ylfhnppfv", "jerlbxsbkhibewzwx-", "jrzqshbtmlbw-ehulca", "jxwszbzburq-njq", "ll-geurn", "lmyexmyy-mdspbhi", "luapiawkcxcj-", "lx-ukktawiyb", "m-bzdrbyjtnxkx", "ma-andxtkoualtlavwxwsvt", "mbfvwlgvmvapdl-xd", "mtan-zldp", "ntpuc-xohitqzpsaim", "oyifdgerefmz-q", "qggtc-", "qljeozejvms-avtt", "rim-bfav", "rxpup-m", "rzbjkzzqoo-hhkvup", "tmvxzrw-", "tulxiosueaejym-ffaglg", "ufw-iot", "uthbvco-r", "vrq-tarohr", "wagnodmpxh-kn", "wazeve-eqdc", "wtnpack-g", "x-oipquyfdgw", "xlmaxigvrh-", "xxva-qv", "ygifxjwszwt-", "z-ardqjytcamedcsxgb", "z-dxrselcyzsnwt"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"rmrz-etgww", "woy-tcqucr", "ama-wqfqtyivurpptg", "correct", "akyrwbl-oufyuovjahwnjzrvio", "bzsg-fmgd", "cqpkgg-eshnptxgguq", "dnmoqxmuuwwwrnpxu-nbliljoit", "eajlhncgqom-o", "correct", "fcln-lipgxjzsye", "foqfimjt-kmilxqgt", "fyisimlv-yw", "correct", "hqhc-e", "hneggdyrityjv-pvqzslnxldq", "correct", "correct", "jerlbxsbkhibew-zwx", "correct", "jxwszbzbur-qnjq", "correct", "lmyexmy-ymdspbhi", "luapiawkcxc-j", "correct", "correct", "maan-dxtkoualtlavwxwsvt", "mbfvwlgvmvapd-lxd", "correct", "ntpu-cxohitqzpsaim", "oyifdgerefm-zq", "qg-gtc", "qljeozejvmsa-vtt", "ri-mbfav", "correct", "rzbjkzzq-oohhkvup", "tmvx-zrw", "correct", "ufwi-ot", "uthb-vcor", "correct", "wagnodmpx-hkn", "wazevee-qdc", "wtnpa-ckg", "xoip-quyfdgw", "xlmaxigv-rh", "correct", "ygifxjw-szwt", "correct", "zd-xrselcyzsnwt"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> dictionary = {"jw xwos xbd usg ftiv eeg", "gby s afb rcs", "etoh wsoe", "zz h w m s pcje", "hsab gve t cpyw fqea", "yc mz uofw", "wl w jiku mv", "jblu my et z xatg", "phh nyh lj hb yvv o eu ymk", "w a nznf jy ow", "rt tvh yo tctn pk", "f e u p iwwb", "fprc vutc koh zttx q rut e vj", "zvw noas akb o v oil", "utai zg", "cied fnj muvl gotu a kpbo ksg so dqdb", "b j d pm", "bo gnog bdxl yc piiq", "lqb mw i g s w", "l w jxrd fon qkw", "yg sqi", "jze c ug hn y fn", "kna ry n w wdcx", "x hiof iowc v ue ko gtd", "j t g vse oaj r", "tcl rrtb", "jcnx opbu id", "y j ssd hq cbh c dp gsyt", "w zmg jyhe", "wh myon c w m tpze", "br gatr", "tm k nwjz jiv hs pp", "a ofj p mijg cft t mb gxv hwp vhh", "fac tiyn mc ju", "qi hdpq uwut xl untw", "al je cxf ee q e me", "nh k vn aam", "ife mhb qs", "hle ko aup", "l c pety ckt", "fa p hsk g", "biiz i pv ln ccb", "g s zns", "a ntth gz x", "ifgb kqui kj", "lpc c v n cxox nkv jkx d lgz aqf", "xhxz l ah", "yc tw xwaw bwt rg", "ga x zql aci ksxb zsm", "e twpv kijt c"};
    vector<string> candidates = {"-bjdpm", "-jblumyetzxatg", "-wanznfjyow", "al-jecxfeeqeme", "ant-thgzx", "aofjpmijgcfttmbgxvhwpvhh-", "biiz-ipvlnccb", "bog-nogbdxlycpiiq", "brgat-r", "ciedfnjmuvlgotuakpbo-ksgsodqdb", "e-twpvkijtc", "etoh-wsoe", "f-eupiwwb", "facti-ynmcju", "faphskg-", "fprcvutckohzttxqrut-evj", "gaxzqlaciksxb-zsm", "gbysafbr-cs", "gszn-s", "h-lekoaup", "hsabgvetcpy-wfqea", "ifemhbq-s", "ifgbkq-uikj", "jcn-xopbuid", "jtgvseoajr-", "jwx-wosxbdusgftiveeg", "jzecughn-yfn", "k-narynwwdcx", "lcpetyck-t", "lpccvncxoxnkvjk-xdlgzaqf", "lqbmwigs-w", "lwjxrd-fonqkw", "nhkvn-aam", "phhnyhljh-byvvoeuymk", "qihdpquwutxlu-ntw", "rttvhyotc-tnpk", "tclr-rtb", "tmknwjzjivh-spp", "utai-zg", "w-zmgjyhe", "whmyoncw-mtpze", "wlwj-ikumv", "xhiofiowcv-uekogtd", "xhxzl-ah", "y-cmzuofw", "y-gsqi", "yct-wxwawbwtrg", "yjssdhqcbhcdpgsyt-", "zvwnoasakbo-voil", "zzhw-mspcje"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b-jdpm", "jblu-myetzxatg", "w-anznfjyow", "correct", "a-ntthgzx", "aofjpmijgcfttmbgxvhwp-vhh", "correct", "bo-gnogbdxlycpiiq", "br-gatr", "correct", "correct", "correct", "correct", "fac-tiynmcju", "faphsk-g", "correct", "correct", "gbysafb-rcs", "gs-zns", "hle-koaup", "hsabgvetcpyw-fqea", "ifemhb-qs", "ifgb-kquikj", "jcnx-opbuid", "jtgvseoaj-r", "jw-xwosxbdusgftiveeg", "correct", "kna-rynwwdcx", "lcpety-ckt", "lpccvncxoxnkvjkx-dlgzaqf", "correct", "correct", "correct", "phhnyhlj-hbyvvoeuymk", "qihdpquwutxl-untw", "rttvhyo-tctnpk", "tcl-rrtb", "tmknwjzjiv-hspp", "correct", "correct", "correct", "wlw-jikumv", "correct", "correct", "yc-mzuofw", "yg-sqi", "yc-twxwawbwtrg", "yjssdhqcbhcdp-gsyt", "correct", "correct"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> dictionary = {"uut gl l ko qva hq j daou", "n sv r iqm rjv z tk fy", "he zum pdwy rbd axl wy kc x", "ukqy jd", "xpz di vq ycf cxk", "cbg wc xa j l gtq", "st isp ie c ualo iud", "mcdi eg h", "dpe gfd fch bz w", "plxj atku w wnll ryjh ag", "ues a s vicg", "z xhc xck aiw y pnen o o gc", "pkye obbv", "cl cy lfy e akl eqc c vpbg nf", "mxo qbex", "l spgb ls qsf gwgv", "v hojv mio waoy olr", "wb jh p nlo dp l h", "v vm rr uiwz mr", "rwh kold m ydqo x knl bp ldyf", "ubz nqxx muy c hych evnv", "iq lda bakb jaa ela tj", "gri h t ro fs", "wh xz rc e xkxr", "xbnx mx b", "lxql y x", "ow d h u x", "hxxc oc voz doj", "jhha e bay m vkc", "cglf cw ye", "r m o dx dp dpkx im z", "yef gfuq ov vg phqq natp l", "arxc vt tp o", "q txu uv", "mql v", "rgdo m xrpf ej", "lv h rafm b kjr", "km qnu nsgr uox ftb", "bm lej fwia emr j hb", "jdw c t en gvh pu ch", "wc n mjav ddf", "aimx sprw egpx apx", "j jrd za ztv", "h nmyj", "xru ny domw of h", "lcej oyg mw sjri", "k q n ay hp m ln d g", "na rwwe r ufho eveq", "vkx ipc d sfgr v", "bmb eh ic prw rev"};
    vector<string> candidates = {"-mcdiegh", "-stispiecualoiud", "-zxhcxckaiwypnenoogc", "aimxsprw-egpxapx", "arxcv-ttpo", "bmbeh-icprwrev", "bmle-jfwiaemrjhb", "c-glfcwye", "cbgwcx-ajlgtq", "clcylfyeakleqccvpbgnf-", "dpegfd-fchbzw", "grihtrofs-", "h-ezumpdwyrbdaxlwykcx", "hnmy-j", "hxxc-ocvozdoj", "iqldabakb-jaaelatj", "jdwctengvhpuc-h", "jhhaebaym-vkc", "jjrdz-aztv", "kmqnuns-gruoxftb", "kqn-ayhpmlndg", "lcejoygmwsjri-", "lspgblsq-sfgwgv", "lvh-rafmbkjr", "lxql-yx", "mql-v", "mxoq-bex", "narwwe-rufhoeveq", "nsvriqmrjvztkfy-", "o-wdhux", "pky-eobbv", "pl-xjatkuwwnllryjhag", "qtxuu-v", "r-modxdpdpkximz", "rgd-omxrpfej", "rwhkoldm-ydqoxknlbpldyf", "ub-znqxxmuychychevnv", "ue-sasvicg", "ukq-yjd", "uutgllk-oqvahqjdaou", "v-kxipcdsfgrv", "vhojvmiowaoy-olr", "vvm-rruiwzmr", "wbjhpnlodplh-", "wcnm-javddf", "whxz-rcexkxr", "x-pzdivqycfcxk", "xbnxm-xb", "xrunydom-wofh", "yefgfuqovvgp-hqqnatpl"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"mcdi-egh", "st-ispiecualoiud", "z-xhcxckaiwypnenoogc", "correct", "arxc-vttpo", "correct", "bmlej-fwiaemrjhb", "cglf-cwye", "cbgwc-xajlgtq", "clcylfyeakleqccvpbg-nf", "correct", "grihtro-fs", "he-zumpdwyrbdaxlwykcx", "h-nmyj", "correct", "correct", "jdwctengvhpu-ch", "correct", "jjrd-zaztv", "kmqnu-nsgruoxftb", "correct", "lcejoygmw-sjri", "lspgbls-qsfgwgv", "correct", "correct", "correct", "mxo-qbex", "correct", "nsvriqmrjvztk-fy", "ow-dhux", "pkye-obbv", "plxj-atkuwwnllryjhag", "qtxu-uv", "correct", "rgdo-mxrpfej", "correct", "ubz-nqxxmuychychevnv", "ues-asvicg", "ukqy-jd", "uutgll-koqvahqjdaou", "vkx-ipcdsfgrv", "correct", "correct", "wbjhpnlodpl-h", "wcn-mjavddf", "correct", "xpz-divqycfcxk", "xbnx-mxb", "xrunydomw-ofh", "yefgfuqovvg-phqqnatpl"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> dictionary = {"eu uwp fdj nh mrra rrkh sd jing", "gqfe ziz cctu eaw oswz", "a mwt uox l rjel lne hyvv dd", "mz v uxjh jcx", "va car j vk bw ry ne l", "i arva xkh wexx afp vvb kwzg", "fruz czr w cls", "n kp nu t fkz vt rss taqs", "i brm ep iwv t wj", "prjn lhph ma", "mh e w", "rpqr p mv l saam ls", "kduv u", "vemr h mwd v", "dqbf ay oju s neq meis ye ma", "ol ilhv", "q vx ybm x cfua syy ots", "tui j d eww iw", "mb vfw x jum lwbw yjc", "v o s s emy tqoj", "sy dej xlh fdf", "s msr ezm lt s eefa lg", "lopm", "oqay zmxg vq fwup wka", "w gvb je evw kdsi", "zfnt yrdp", "w vgyd bpse scfy mupb", "gy am kgo hi", "r fnh se clhh hwsq", "yc ph", "hed nny seu xw ci bj fr e tjpm c", "nyf atqk fij ajq nnp cg", "eq vx b", "el zigi v", "zld qjmw y xrye jef", "fav cmec v", "f c dmws", "ejaf zb mpev gdo shg fe", "rfn geba kfrp keuf", "a zld ghj pgp", "mij vr p z wlxj", "slss lgr kmk", "szj u", "l pjsn obc gw rr kibs eh", "mj bmi", "pcx fg pdry xum bmyq i", "nfn bpv", "inw tfzd zrj", "y tfea zx", "uq wku z"};
    vector<string> candidates = {"-favcmecv", "-mijvrpzwlxj", "-mjbmi", "-nkpnutfkzvtrsstaqs", "-tuijdewwiw", "amwtuoxlrjellnehyvvdd-", "azl-dghjpgp", "dqbfay-ojusneqmeisyema", "ejaf-zbmpevgdoshgfe", "el-zigiv", "eqvx-b", "euuwpfdjnh-mrrarrkhsdjing", "fcdmw-s", "fruzc-zrwcls", "g-yamkgohi", "gqfeziz-cctueawoswz", "hednnyseuxwcibjfret-jpmc", "iarvaxkh-wexxafpvvbkwzg", "ibrme-piwvtwj", "inwtfzdzr-j", "kduv-u", "lop-m", "lp-jsnobcgwrrkibseh", "mbvfwxju-mlwbwyjc", "mhew-", "mz-vuxjhjcx", "n-fnbpv", "nyfatqkfij-ajqnnpcg", "oli-lhv", "oqayzmxgvqfwu-pwka", "pcxfg-pdryxumbmyqi", "prjnlhph-ma", "qvxybmxcfuasyyots-", "rfng-ebakfrpkeuf", "rfnhs-eclhhhwsq", "rpqr-pmvlsaamls", "s-ydejxlhfdf", "slsslgr-kmk", "sms-rezmltseefalg", "sz-ju", "uqwku-z", "v-acarjvkbwrynel", "vemrh-mwdv", "vossemy-tqoj", "w-vgydbpsescfymupb", "wgvbjeevwkd-si", "yc-ph", "ytf-eazx", "zfn-tyrdp", "zldqjmwyxryejef-"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fav-cmecv", "mij-vrpzwlxj", "mj-bmi", "n-kpnutfkzvtrsstaqs", "tui-jdewwiw", "amwtuoxlrjellnehyvv-dd", "azld-ghjpgp", "correct", "correct", "correct", "correct", "correct", "fc-dmws", "fruz-czrwcls", "gy-amkgohi", "correct", "hednnyseuxwcibjfre-tjpmc", "correct", "ibrm-epiwvtwj", "inwtfzd-zrj", "correct", "lopm", "l-pjsnobcgwrrkibseh", "mbvfwxjum-lwbwyjc", "mhe-w", "correct", "nfn-bpv", "correct", "ol-ilhv", "oqayzmxgvqfwup-wka", "correct", "correct", "qvxybmxcfuasyy-ots", "rfn-gebakfrpkeuf", "rfnh-seclhhhwsq", "correct", "sy-dejxlhfdf", "correct", "smsr-ezmltseefalg", "szj-u", "correct", "va-carjvkbwrynel", "correct", "correct", "correct", "wgvbjeevw-kdsi", "correct", "y-tfeazx", "zfnt-yrdp", "zldqjmwyxrye-jef"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> dictionary = {"tlam e xv", "poj xvv l tmqd y eb vdp xh", "qy gzz xthf phco prgx oad o", "z u c nk vi zqb tsw eusm", "hw psii ehd kr", "c fxw osdv nrr w", "ji chhw rd smv qq ikck", "oui to mcng mdzo", "n dkf cjlh beds", "rwb wzyl ckyj o pdt zmi", "xi vqah", "t dzeg mc", "olsm uk l t fb q zg", "l cwee l", "aq waop iwwo", "fqvs eq ftk r mry", "pq sei", "ejwv buxy ahs lck dn j", "ll jwl f vg n vg gurn w", "emn f w zq aebs q hh", "swg cch ur", "sca dxbq sged dl l ho", "iph wap", "eyrh zxyd atid", "k jy rg g uptk", "acig ugd lr mae owgv", "i w kl ea ombx h ysfu", "m w nanr wmru dfl", "lhn eb ngl", "x xwt ps fisu ojzc", "ps vd jjgv du nzgb mcr", "tttf aw eqr tii vdeg", "pjk r x v ykat uq", "a itia a fx cxw ub onz ix kpsi zim", "w ilvn manm w sqzc fqbm", "jqm li z rap uat ek die k", "wt kbl yy qaw ry i cdfl u", "sp q gexe", "s kjdd dpad wa thga feus", "s pv yfxn mwe jk mwcj wtcj", "hj b lee k xjy", "c oo gf hzi j", "hbf fui tx eqg l", "fg nl wbaz gks uy j", "kszu u vi xheu uk a cl k c", "jk qy hyet bqi nlsb zkd tvxp dxkr vgq zsu", "bww wvad", "hfn k eyf", "u au v", "yccm vx hvu llmx gvuq"};
    vector<string> candidates = {"-mwnanrwmrudfl", "-pqsei", "a-cigugdlrmaeowgv", "aitiaafxcxwub-onzixkpsizim", "aqw-aopiwwo", "bw-wwvad", "cfxwosd-vnrrw", "coogfhzi-j", "ejw-vbuxyahslckdnj", "emnfwzq-aebsqhh", "eyrhzx-ydatid", "fgnlwbazgksu-yj", "fq-vseqftkrmry", "hb-ffuitxeqgl", "hfn-keyf", "hjbleekx-jy", "hwpsii-ehdkr", "iphw-ap", "iwkleaombx-hysfu", "jichhwrdsmvq-qikck", "jkqyhyetbq-inlsbzkdtvxpdxkrvgqzsu", "jqm-lizrapuatekdiek", "kjyrgguptk-", "ksz-uuvixheuukaclkc", "lcw-eel", "lhnebng-l", "lljw-lfvgnvggurnw", "ndkfcjlh-beds", "olsmuklt-fbqzg", "ouit-omcngmdzo", "p-svdjjgvdunzgbmcr", "pj-krxvykatuq", "pojxvvltmqdyebv-dpxh", "qygzzxthfphcoprgxoa-do", "rwbw-zylckyjopdtzmi", "s-cadxbqsgeddllho", "s-pqgexe", "s-wgcchur", "skjdddpadwat-hgafeus", "spvy-fxnmwejkmwcjwtcj", "t-dzegmc", "tlamex-v", "tttfaweqrt-iivdeg", "u-auv", "wilvnman-mwsqzcfqbm", "wt-kblyyqawryicdflu", "xivqah-", "xxwtpsfi-suojzc", "yccmvxhv-ullmxgvuq", "zucnk-vizqbtsweusm"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"m-wnanrwmrudfl", "pq-sei", "acig-ugdlrmaeowgv", "correct", "aq-waopiwwo", "bww-wvad", "cfxwosdv-nrrw", "correct", "ejwv-buxyahslckdnj", "correct", "eyrh-zxydatid", "fgnlwbazgks-uyj", "fqvs-eqftkrmry", "hbf-fuitxeqgl", "correct", "hjbleek-xjy", "correct", "iph-wap", "correct", "jichhwrdsmv-qqikck", "jkqyhyetbqi-nlsbzkdtvxpdxkrvgqzsu", "correct", "kjyrgg-uptk", "kszu-uvixheuukaclkc", "l-cweel", "lhneb-ngl", "lljwl-fvgnvggurnw", "correct", "correct", "oui-tomcngmdzo", "ps-vdjjgvdunzgbmcr", "pjk-rxvykatuq", "pojxvvltmqdyeb-vdpxh", "qygzzxthfphcoprgxoad-o", "rwb-wzylckyjopdtzmi", "sca-dxbqsgeddllho", "sp-qgexe", "swg-cchur", "skjdddpadwa-thgafeus", "spv-yfxnmwejkmwcjwtcj", "correct", "tlame-xv", "tttfaweqr-tiivdeg", "correct", "wilvnmanm-wsqzcfqbm", "correct", "xi-vqah", "xxwtps-fisuojzc", "yccmvxhvu-llmxgvuq", "correct"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> dictionary = {"wyfx w tk a v gzj", "jtio n nsy yluh oolm", "pwjg j mmi yu mwjd", "etlf v fni vo mk bo", "zgc scxk nop zptt e qrfd izl", "jh mubs hcdr", "x th jr e", "cia qb qkm bl ce cdfh", "ytvj qsb gy z s", "g loc vn se r xrps vcpj m", "y mmr q e a", "h ee u dc k y pyd", "n lxn", "wq zx ve f r", "cdv mo", "za vukp wjn b ukdx s", "v oerf dflz l ue su jdas", "b o lpi zfmh vqs e kcb lscj", "zkrj pp", "g znq qv ab bbpf", "dgw ejk xgq ql", "p fter sx hew", "gv svtz e zviu jopr", "tsu zq", "a peha uzi", "uud jsn om", "eflo qmqa ltn c", "m w gajf fh bebp dj", "tsi y bfc a pict jsk", "mwhf t", "ust o q bsjj yhzl", "a r aj m r f ity p", "x w c cy", "tmwn exsn t oepo", "pv nx t x n lcn", "l b wf wvzf e oujg", "j zy frkx w x qh yy", "qs fw jooq s nm", "z xabp zb m l dzsp rfg", "agir opd uv", "ib s xpyb rooz qa ttkt qhd kum", "j g jt t n a", "bns i ivt i uv gg dycu", "glci w", "feg va dkz f", "xtl xol cnbe barn", "dh iwyf afbt iyqb", "a esm hh ot", "rtx z ngu rnwh qdq i", "wo dvhi q zou ueam walm crxk"};
    vector<string> candidates = {"-cdvmo", "-glciw", "-jgjttna", "-wyfxwtkavgzj", "-ytvjqsbgyzs", "-zxabpzbmldzsprfg", "aesm-hhot", "agiropd-uv", "apehau-zi", "arajmr-fityp", "bnsiivt-iuvggdycu", "bolpizfmhvqsekcblscj-", "ciaqbqkmblce-cdfh", "dgwejkxg-qql", "dhiwyfaf-btiyqb", "efloqm-qaltnc", "etlfvfnivomkbo-", "fegvadkzf-", "glocvnser-xrpsvcpjm", "gvsvtzezviujopr-", "gznqqvabb-bpf", "heeudckypyd-", "ibsxpybroozqat-tktqhdkum", "jhmub-shcdr", "jtionns-yyluhoolm", "jzyfrkxwxqhyy-", "lbwfwvzf-eoujg", "mwgajffhbe-bpdj", "mwhf-t", "nl-xn", "pf-tersxhew", "pvnxtxnl-cn", "pwjgjmmiyu-mwjd", "qsfwjooqs-nm", "r-txzngurnwhqdqi", "tmwnexsn-toepo", "tsiybfc-apictjsk", "tsu-zq", "ustoqbsjjyh-zl", "uudjsn-om", "voerfdflzluesujd-as", "wodvhiqzouueamw-almcrxk", "wq-zxvefr", "xthjr-e", "xtlxolcn-bebarn", "xwcc-y", "ymmr-qea", "zavukp-wjnbukdxs", "zgcsc-xknopzptteqrfdizl", "zkrj-pp"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cdv-mo", "glci-w", "j-gjttna", "wyfx-wtkavgzj", "ytvj-qsbgyzs", "z-xabpzbmldzsprfg", "correct", "correct", "apeha-uzi", "correct", "correct", "bolpizfmhvqsekcb-lscj", "correct", "dgwejkxgq-ql", "dhiwyf-afbtiyqb", "eflo-qmqaltnc", "etlfvfnivomk-bo", "fegvadkz-f", "correct", "gvsvtzezviu-jopr", "gznqqvab-bbpf", "heeudcky-pyd", "ibsxpybroozqa-ttktqhdkum", "jhmubs-hcdr", "jtionnsy-yluhoolm", "jzyfrkxwxqh-yy", "correct", "mwgajffh-bebpdj", "correct", "n-lxn", "p-ftersxhew", "pvnxtxn-lcn", "correct", "correct", "rtx-zngurnwhqdqi", "correct", "correct", "correct", "ustoqbsjj-yhzl", "correct", "voerfdflzluesu-jdas", "wodvhiqzouueam-walmcrxk", "correct", "correct", "xtlxol-cnbebarn", "xwc-cy", "correct", "correct", "zgc-scxknopzptteqrfdizl", "correct"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> dictionary = {"m f z d sgws n n", "k ahyx r ci y mwq kkqb", "hikr hlc mk", "j fzdo", "xwv zfv tbmj whd si i", "iwr nvf ikyo", "feld fjtw", "taa ifoz i", "b af fh m h", "tds tk tl h euqk", "vec ran ult z e vjl k wcc jvh", "gmx a het kkc qfi sk", "jqs lmse", "b z qzsn jr rrqh nxs bnhp qdfo", "xx kvct ipbx u", "kw az u", "gt lmbw qjaw x xl", "i wwh p twlh abgo ojo", "gih z v glwg pyn", "uelt eb gpqz pro", "u o f eji c b bo", "sitt rx tarc bsif fk v", "qd m jdo", "q nde fly u rhlk", "gd h thph", "f ifv y m k e ypg z", "gk alp t g", "er hzcl", "cseq k hi j mpqv tb oluh kddg", "tnzl yib wo", "q gbrt x xk xwtu ze", "xt fnn ap cwi yw kbwx bl", "yuoi xwna joad", "uw rex ac ecar fbl tfh l", "zb osr fwb ti", "uu j wc s", "i mj p gfco hlr b", "rm d ouy", "x e qxys s gb gp k", "dw nlah ecq", "ujs tbj ajlh b mu dtt bmat il", "kr v ga udvb vu", "lnps ris", "p ia hw ss", "f kx iysf js ebo fubd ur", "a yog sqlj n", "u yq", "mt ixqb bqif yr p", "cuk wslz ezo", "y wnzn va wxq ztp"};
    vector<string> candidates = {"-ayogsqljn", "-erhzcl", "-piahwss", "-qndeflyurhlk", "baffhmh-", "bzqzsnjrrrqhn-xsbnhpqdfo", "cseqkhijm-pqvtboluhkddg", "cuk-wslzezo", "dwnla-hecq", "fe-ldfjtw", "fifvy-mkeypgz", "fkxiy-sfjsebofubdur", "g-kalptg", "gdh-thph", "gi-hzvglwgpyn", "gmxah-etkkcqfisk", "gtlmbwqjawxxl-", "hikrhlcmk-", "i-mjpgfcohlrb", "iwrnv-fikyo", "iwwhp-twlhabgoojo", "j-fzdo", "jqs-lmse", "kah-yxrciymwqkkqb", "krvgaudvb-vu", "kw-azu", "ln-psris", "mfzd-sgwsnn", "mtixqbbq-ifyrp", "qdmj-do", "qgbrtxxkxwt-uze", "rmdou-y", "sittrxtarcbsif-fkv", "taaif-ozi", "tdstktlhe-uqk", "tnzlyibw-o", "u-ofejicbbo", "u-ujwcs", "u-wrexacecarfbltfhl", "uelteb-gpqzpro", "ujstbjajlhbmudttbma-til", "uyq-", "vecranu-ltzevjlkwccjvh", "xeqxyssgb-gpk", "xtfnnap-cwiywkbwxbl", "xwvzfvtbmjwhdsii-", "xxkvctipb-xu", "yuoixwna-joad", "ywnznvawxqz-tp", "zbosrfwb-ti"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a-yogsqljn", "er-hzcl", "p-iahwss", "q-ndeflyurhlk", "baffhm-h", "bzqzsnjrrrqh-nxsbnhpqdfo", "cseqkhij-mpqvtboluhkddg", "correct", "dwnlah-ecq", "feld-fjtw", "correct", "fkx-iysfjsebofubdur", "gk-alptg", "correct", "gih-zvglwgpyn", "gmxa-hetkkcqfisk", "gtlmbwqjawx-xl", "hikrhlc-mk", "correct", "iwrnvf-ikyo", "correct", "correct", "correct", "k-ahyxrciymwqkkqb", "correct", "correct", "lnps-ris", "correct", "mtixqb-bqifyrp", "qdm-jdo", "qgbrtxxkxwtu-ze", "rmd-ouy", "correct", "taa-ifozi", "tdstktlh-euqk", "tnzlyib-wo", "correct", "uu-jwcs", "uw-rexacecarfbltfhl", "correct", "ujstbjajlhbmudttbmat-il", "u-yq", "vecran-ultzevjlkwccjvh", "correct", "correct", "xwvzfvtbmjwhdsi-i", "xxkvctipbx-u", "correct", "ywnznvawxq-ztp", "correct"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> dictionary = {"v lfxm po bgnv cqg", "pc el m izl", "wiu w jlw och a csb saae sfag", "z b h e jm qv l", "tuic tmn l", "rkgr wwc xnv ntx ejrv", "jy y mrb b xi", "ot r iph", "u xopt cx ls", "s u cnsx", "qiem wex gz qfkx v y byj op nyi ctcw", "lvq q recg lh unie", "en ykc gd tu ore x akuq", "t ha rnbb ob s", "r u om xuzj fv je arzj", "s zha azpc cku jq", "cajo iz", "fdlo pf", "wxu u zcz kpg", "i ov ze hs n mqg ecbo tvt kb rsn", "qs j revo rsc", "sli eq ptom dbu", "h yy vh w epe vl ts b", "up xwo jhj", "e avbk q sil", "k q s xpn f m v", "fegz zv hcgq t j etxr", "kixp gsv ttm xb u", "f a rxs ffi n", "cwk iuxr", "bcl v vb vg tfrv dxn", "f f sts", "nxd zajp xbsp mb sy me", "s m xybo jn nubw ja", "nn fg z evcs tvk d b", "ylf jv fd zi", "blcd hpbt j ww aox w", "sgo jpp n gc wgb", "vnqs em d aoi lkvi rvlx", "bnp j gplf wt ipct", "au fuuf yk c sfc o", "e ymh pqz bvyr", "o i hic ehfo z mck o kx", "rnof evj ed", "mmb pza xmb ulg adwx uy", "x vhm d h l qe", "hfpe c", "ufv ed uqq fcuy", "n zg vnc x lfh gfrm pemo", "eihm ydo"};
    vector<string> candidates = {"-sgojppngcwgb", "-zbhejmqvl", "aufuu-fykcsfco", "bcl-vvbvgtfrvdxn", "blcdhpbtj-wwaoxw", "bnpjgp-lfwtipct", "c-ajoiz", "cwk-iuxr", "e-ymhpqzbvyr", "eavb-kqsil", "eihm-ydo", "enykcg-dtuorexakuq", "f-dlopf", "farxsffin-", "fegzzvh-cgqtjetxr", "ff-sts", "h-fpec", "hyyvhw-epevltsb", "iovzehsnmqgecbotvt-kbrsn", "jyymr-bbxi", "kixpgsvttm-xbu", "kqsx-pnfmv", "lvqqrecglhu-nie", "mmbpzaxmbulgadwx-uy", "nnfgzevcstvkd-b", "nxdzajpxbspmbsym-e", "nzg-vncxlfhgfrmpemo", "o-triph", "oihice-hfozmckokx", "p-celmizl", "qiemwex-gzqfkxvybyjopnyictcw", "qsjrevors-c", "rkgrwwcxn-vntxejrv", "rno-fevjed", "ruomxu-zjfvjearzj", "slieqpto-mdbu", "smxybo-jnnubwja", "suc-nsx", "szhaazpcckujq-", "t-uictmnl", "tharnbbob-s", "ufveduq-qfcuy", "up-xwojhj", "ux-optcxls", "vlfxmpobgnvcqg-", "vnqsem-daoilkvirvlx", "wiuw-jlwochacsbsaaesfag", "wxuuzcz-kpg", "xvhmdhlqe-", "ylf-jvfdzi"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"sgo-jppngcwgb", "z-bhejmqvl", "aufuuf-ykcsfco", "correct", "correct", "bnpj-gplfwtipct", "cajo-iz", "correct", "correct", "eavbk-qsil", "correct", "enykc-gdtuorexakuq", "fdlo-pf", "farxsffi-n", "fegzzv-hcgqtjetxr", "correct", "hfpe-c", "correct", "correct", "jyymrb-bxi", "correct", "kqs-xpnfmv", "lvqqrecglh-unie", "correct", "correct", "nxdzajpxbspmbsy-me", "correct", "ot-riph", "oihic-ehfozmckokx", "pc-elmizl", "correct", "qsjrevo-rsc", "rkgrwwcxnv-ntxejrv", "rnof-evjed", "ruom-xuzjfvjearzj", "slieqptom-dbu", "correct", "su-cnsx", "szhaazpccku-jq", "tuic-tmnl", "correct", "ufveduqq-fcuy", "correct", "u-xoptcxls", "vlfxmpobgnv-cqg", "correct", "correct", "correct", "xvhmdhl-qe", "correct"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> dictionary = {"hsva nk a gyx ydz xosf e", "zang ehc eyp iqjw hmtd", "y bf btoy k cni", "bo i d gw cngq", "mokm drtb o ej ie jav j", "qsk v xnf xild rt ivsu sa favc ngfq", "oyi n itxa it anqo piq", "e kf pxq r xxwc sa", "huc pgv", "i miso mib kan va wu", "hdsr a v n p", "lzh hxr aivb vof ha", "ylvj leuu jfsz lhbc ij kyv", "jx dm gwke hui rb j", "qs d h xkc yblt l sbib", "cy yfvp bv hgk mmx", "xppi scb k btst xwv", "un rmgo whad fgdv l", "gp ufp jxet sn", "tqdw jeq w ignr ekm sfax y", "sluf nas s xs r tu", "n ayj gltm", "ae tle vin ftkq hqc", "tc d v hcbb y xg vny", "hfcs tn msv", "ffm n fee gpia inx", "gvdx y cvx wua p xl", "pner bk mjo kmek if", "h b dzts", "ya b uael bc ow eut qd scn q lhdi", "p kk c hvkl d", "oabw ncxc xm p vxyw sym", "e ef bnss tmv r zerg", "ft rkdw k xhir uet da", "fght z wtfq nnzt b", "car t g oc bq nfc bith", "ox zi ju hgyj po c", "i eea h cg rdhg", "gx wkuc s dazf", "dpj emg w mm", "zkv i hhg wdi gj", "vh zr fl", "nb vpsm ccc y hqdi m", "vs d yxd cion", "xtlg uudn swl wsvq xxxq", "q p mwl lkb", "l zfby wiz b", "r o dj dzk w th", "afl jlm zyvg jjd tsuh g cl", "y teu k iuel ylsf"};
    vector<string> candidates = {"-boidgwcngq", "-ekfpxqrxxwcsa", "-gpufpjxetsn", "-gvdxycvxwuapxl", "-nayjgltm", "-unrmgowhadfgdvl", "-vhzrfl", "aetlevinftkqh-qc", "aflj-lmzyvgjjdtsuhgcl", "cartgocbqnfc-bith", "cyyfvpbvhgk-mmx", "d-pjemgwmm", "eefbnsstmvrze-rg", "ffm-nfeegpiainx", "fghtz-wtfqnnztb", "ftrkdwkxhi-ruetda", "gx-wkucsdazf", "hbd-zts", "hds-ravnp", "hfcst-nmsv", "hsva-nkagyxydzxosfe", "hucp-gv", "ieeahcgrd-hg", "imisomibkan-vawu", "jxd-mgwkehuirbj", "lzfbywi-zb", "lzhhxraivbvofh-a", "mokm-drtboejiejavj", "nbvpsmc-ccyhqdim", "oabwn-cxcxmpvxywsym", "oxziju-hgyjpoc", "oyinitxaitanqopi-q", "pkkchvkl-d", "pnerbkmjokmekif-", "qpmwl-lkb", "qsdhxkcyb-ltlsbib", "qskvxnf-xildrtivsusafavcngfq", "rodjdzkwt-h", "slufna-ssxsrtu", "t-cdvhcbbyxgvny", "tqdwjeqwignr-ekmsfaxy", "vsdyxdcio-n", "xppiscbkbt-stxwv", "xtlguudnswlwsvq-xxxq", "yabuaelbcoweutqdscnql-hdi", "ybfbtoykcni-", "ylvjleuujfszl-hbcijkyv", "yteukiu-elylsf", "zangehceypiqjwhm-td", "zkvi-hhgwdigj"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bo-idgwcngq", "e-kfpxqrxxwcsa", "gp-ufpjxetsn", "gvdx-ycvxwuapxl", "n-ayjgltm", "un-rmgowhadfgdvl", "vh-zrfl", "aetlevinftkq-hqc", "afl-jlmzyvgjjdtsuhgcl", "correct", "correct", "dpj-emgwmm", "eefbnsstmvr-zerg", "correct", "correct", "ftrkdwkxhir-uetda", "correct", "hb-dzts", "hdsr-avnp", "hfcs-tnmsv", "correct", "huc-pgv", "ieeahcg-rdhg", "correct", "jx-dmgwkehuirbj", "lzfbywiz-b", "lzhhxraivbvof-ha", "correct", "nbvpsm-cccyhqdim", "oabw-ncxcxmpvxywsym", "correct", "oyinitxaitanqo-piq", "correct", "pnerbkmjokmek-if", "correct", "qsdhxkc-ybltlsbib", "correct", "rodjdzkw-th", "slufnas-sxsrtu", "tc-dvhcbbyxgvny", "correct", "vsdyxd-cion", "xppiscbk-btstxwv", "correct", "yabuaelbcoweutqdscnq-lhdi", "ybfbtoyk-cni", "ylvjleuujfsz-lhbcijkyv", "yteuk-iuelylsf", "zangehceypiqjw-hmtd", "correct"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> dictionary = {"xwaa jkr wjyp opc mczw", "ce ks f dgj zk", "beq muty", "olea suf zxrn as", "fws d v ylth", "npt dp fi fzkm ukqy", "dnnc c ylgg", "vyw ctcp ciyh z l", "iv ge zd ndh vg h n ovu", "iiiu wie", "frwj t cgpm", "qj h gvf", "tt grvs g ll gc", "angu etsw ap qx iug p cv jkw", "lzm qv qci", "ml xrfl zi", "z k j t pjn ykb is im", "fko psyq ut syg sq o o", "ar eg trho zq zou", "jyed o kuhi y ywe", "z po paa q ed ho", "mpfx jrjx s i dmj", "ngy lvw tptm", "eioj k vy bevj okob jqz w xj e yt", "ywi j jb zbu lrer hoa", "i xxft h pn xldl spzr", "sl htnk m x vo jeom", "nbh k y bl tsl", "fvyo hvjl cnq n s gw", "icf i smp", "ob jus rdgz z qapc t", "ry tycl mju", "e nqt k ea kf maq nqs bxn uyv", "ork wmr td", "qivh xk hdh vju", "cop nupe jla", "e qr wq y nrch", "d cbl zw auul dt wb", "cos bam m d tnrt jiow zfs sgf", "puw ctgb w zgu qutd", "geor om y vgl qe", "beq h db t c lyb bzyq c w", "f lztk etgu yto p", "z vpdz az xayt", "vha qlu czg yylp", "ve gcb pd x j", "gzvd nu uce w rihp ju h", "im g v g uur j yvhj r", "twgm hte qk slu nnf i lod mag q vat", "fp ljai cl a qn"};
    vector<string> candidates = {"-beqhdbtclybbzyqcw", "-dnnccylgg", "-frwjtcgpm", "anguetswapq-xiugpcvjkw", "aregtrhozqzo-u", "beqm-uty", "c-osbammdtnrtjiowzfssgf", "ceksfdgj-zk", "co-pnupejla", "d-cblzwauuldtwb", "eiojkvybevjokobjq-zwxjeyt", "enqtkeakfmaqnq-sbxnuyv", "eqrw-qynrch", "fk-opsyqutsygsqoo", "flztketguyt-op", "fpljai-claqn", "fvyohvjlcnqnsgw-", "fwsdvylt-h", "g-eoromyvglqe", "gzvdnuucewrihpjuh-", "icfism-p", "iiiuwie-", "imgvguurjyvh-jr", "ivgezdnd-hvghnovu", "ixxfthpnxld-lspzr", "jyedo-kuhiyywe", "lzmqvqc-i", "mlxrfl-zi", "mp-fxjrjxsidmj", "nbhkybl-tsl", "ngyl-vwtptm", "nptd-pfifzkmukqy", "o-rkwmrtd", "objusrd-gzzqapct", "ole-asufzxrnas", "puwctgbwzg-uqutd", "qivhxk-hdhvju", "qjhgv-f", "rytyc-lmju", "slhtnkmxvojeom-", "ttgrvsg-llgc", "twgmht-eqkslunnfilodmagqvat", "vegc-bpdxj", "vhaqluc-zgyylp", "vywc-tcpciyhzl", "x-waajkrwjypopcmczw", "yw-ijjbzbulrerhoa", "zkjtpjnyk-bisim", "zp-opaaqedho", "zvpdzazx-ayt"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"beq-hdbtclybbzyqcw", "dnnc-cylgg", "frwj-tcgpm", "anguetswap-qxiugpcvjkw", "aregtrhozq-zou", "beq-muty", "cos-bammdtnrtjiowzfssgf", "correct", "cop-nupejla", "correct", "eiojkvybevjokobjqz-wxjeyt", "enqtkeakfmaqnqs-bxnuyv", "eqr-wqynrch", "fko-psyqutsygsqoo", "flztketguyto-p", "correct", "fvyohvjlcnqns-gw", "fwsdv-ylth", "geor-omyvglqe", "gzvdnuucewrihpju-h", "icfi-smp", "iiiu-wie", "imgvguurjyvhj-r", "ivgezdndh-vghnovu", "ixxfthpnxldl-spzr", "correct", "lzmqv-qci", "correct", "mpfx-jrjxsidmj", "correct", "ngy-lvwtptm", "npt-dpfifzkmukqy", "ork-wmrtd", "objus-rdgzzqapct", "olea-sufzxrnas", "puwctgbwzgu-qutd", "correct", "qjh-gvf", "rytycl-mju", "slhtnkmxvo-jeom", "correct", "twgmhte-qkslunnfilodmagqvat", "vegcb-pdxj", "vhaqlu-czgyylp", "vyw-ctcpciyhzl", "xwaa-jkrwjypopcmczw", "ywi-jjbzbulrerhoa", "zkjtpjnykb-isim", "z-popaaqedho", "zvpdzaz-xayt"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> dictionary = {"so s eu rod u", "d qe ak", "j e ee xk tkma wil yu", "qjuo utx xu d jded", "ap okf grf ewfm mz", "cnat um wqht zwl eu kb", "sns n t", "ky ggn hpy pr nzh", "bqdb kcg l lghw hv", "nq fdb hqyx j zb rxmw qi ah", "uv yojd dw", "vvj t z avmj a tqrj dc", "gt iel odwt", "nd rio f xkyw gw", "a gdk mx rob ywtb tk", "yx mjw axdj zt u cvb", "k p wldv ig pka f k to", "gf mb de", "wma do bit i mpg lb gx sb ja", "vqog am s btrr tm op", "hd r pnj bh", "yvug lbu h djh sppo hf lyjz", "yuyi rysd hyn lax ydfk", "uwl iqvc", "wwhs wzy j kds zpy uedg", "pwwk r aaz wo nk oa zx jtd", "wa ycxk u m xuf fu", "u ys pu xnp o tnq e", "vsx le gcmo g r xih", "z zs i yqzx pc hs kjor", "z hcx wtaa hur kwz fqrv", "b vibr hhz tm w", "elx elox", "hmxq d wo rziy", "n iklu wtr", "z mp r pczk qyjj", "s rb", "qtpz e qvc yga c xwmx dxa xc eo ztf", "m hgb bim bwn q bhqr e vmem", "uk tz bm", "ec p dws", "e y kws lgn psh i ch", "bhv tkyt bij", "waby kfyz vrk cn xd zvvu", "zxsx b t hn x tckv ses z", "wcei", "vltg hzl ekx xzco vcvb fo", "l psx zv ll piuu xr c", "nai xy mdxv", "ats fnc myy bp"};
    vector<string> candidates = {"-nikluwtr", "-wabykfyzvrkcnxdzvvu", "agd-kmxrobywtbtk", "ap-okfgrfewfmmz", "ats-fncmyybp", "bhvtkytbi-j", "bqdbkc-gllghwhv", "bv-ibrhhztmw", "cnatumwqht-zwleukb", "dqea-k", "e-lxelox", "ecpdws-", "ey-kwslgnpshich", "gf-mbde", "gtie-lodwt", "hdrpnj-bh", "hmxqd-worziy", "jeeexk-tkmawilyu", "kpwld-vigpkafkto", "kyggnhpyprnz-h", "lpsxzvllp-iuuxrc", "mh-gbbimbwnqbhqrevmem", "n-aixymdxv", "ndrio-fxkywgw", "nqfdbhqyxjzbrx-mwqiah", "pwwkraazwonk-oazxjtd", "qjuoutx-xudjded", "qtpz-eqvcygacxwmxdxaxceoztf", "s-rb", "sn-snt", "soseur-odu", "u-ktzbm", "uvyojd-dw", "uwliq-vc", "uyspux-npotnqe", "vltghzlekxxzco-vcvbfo", "vqogamsbtr-rtmop", "vsxlegc-mogrxih", "vvjtzavmjatqrj-dc", "w-aycxkumxuffu", "w-cei", "wmadobitim-pglbgxsbja", "wwhswzyjkdszpyued-g", "yuyi-rysdhynlaxydfk", "yvuglbu-hdjhsppohflyjz", "yxmjwa-xdjztucvb", "zhcxwtaahurkwzf-qrv", "zmp-rpczkqyjj", "zxsxbth-nxtckvsesz", "zzs-iyqzxpchskjor"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"n-ikluwtr", "waby-kfyzvrkcnxdzvvu", "agdk-mxrobywtbtk", "correct", "correct", "bhvtkyt-bij", "bqdbkcg-llghwhv", "b-vibrhhztmw", "correct", "dqe-ak", "elx-elox", "ecp-dws", "correct", "correct", "gtiel-odwt", "correct", "correct", "correct", "kpwldv-igpkafkto", "kyggnhpypr-nzh", "lpsxzvll-piuuxrc", "m-hgbbimbwnqbhqrevmem", "nai-xymdxv", "correct", "nqfdbhqyxjzb-rxmwqiah", "correct", "correct", "correct", "correct", "sns-nt", "soseu-rodu", "uk-tzbm", "correct", "uwl-iqvc", "uyspu-xnpotnqe", "correct", "vqogamsbtrr-tmop", "vsxle-gcmogrxih", "correct", "wa-ycxkumxuffu", "wcei", "wmadobiti-mpglbgxsbja", "wwhswzyjkdszpy-uedg", "correct", "correct", "yxmjw-axdjztucvb", "zhcxwtaahurkwz-fqrv", "correct", "zxsxbt-hnxtckvsesz", "correct"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> dictionary = {"g fti ph lipl c e", "iah iyau ac anx", "e vqrz xj cf of wjwp edta", "xv zlr yrj gsdj", "mmwn k lphs fon hbev yut rpi wo s ql", "r kfru tacs s l pzko nni", "sd mdo lfoi y f", "b k iv mca dms", "rk c b u pmtv", "r x q evs c e", "p dc x xm c i rs n gpm", "kql jz kd i aj p", "og h ixkg x hsu jwk ktx fvk jsdc", "j c imdu bu", "lbn c", "pfdy hnv hov", "iy pfzd dgwf p k", "k b qji ay", "oxi ykzx udr xa xh", "ocgk zg s daev q oyi r", "pl py bir jlw mzt zn qe w ofe jxvh", "me qib ncs lbg rcag ohf", "r bab s l xxu", "njp itv jjfm vl b bevy", "zhd bo ucsk lful rrc sm", "cdr kn", "g uiaf qr ytln h gf", "ezm z qj", "baeu tk b uzcw s mzv", "ka e yckb", "l aa ni", "vk quoc x dl t pud k b", "cos wps nq l lhr hs", "a zhbb", "r wm m uix", "h f ilt sfac eb", "ooud dtf", "zke hdu x x qlyt yo fxwh", "ufrv jib dlj eber n t b", "uj egfg", "p r call nc nk wq gah", "v h q z e g aajf iv", "tio hf wl", "i paz r", "r bagu mw mgs omwo j dyol", "w jmi x ft limr", "w xmek s vo asej", "x mnh zpk xj tnkq", "es wm vgys y nnrr zpn", "k w pot"};
    vector<string> candidates = {"-cdrkn", "-ezmzqj", "-pfdyhnvhov", "-rbabslxxu", "a-zhbb", "baeut-kbuzcwsmzv", "bkivmc-adms", "cos-wpsnqllhrhs", "eswmvgysynn-rrzpn", "evqrzxjc-fofwjwpedta", "g-ftiphliplce", "guiafqr-ytlnhgf", "hfiltsf-aceb", "iah-iyauacanx", "ip-azr", "iypfzdd-gwfpk", "jcimd-ubu", "k-aeyckb", "kbqjia-y", "kqljzkdiajp-", "kwp-ot", "laan-i", "lbn-c", "meqibncs-lbgrcagohf", "mmwnklphsfonhbevyutrp-iwosql", "njpitvjjfmvlbbev-y", "o-ouddtf", "ocgkzgsdaevq-oyir", "oghixk-gxhsujwkktxfvkjsdc", "oxiykz-xudrxaxh", "pdcxxmc-irsngpm", "plpybirjlwmztznqe-wofejxvh", "prcallncnkwqgah-", "r-wmmuix", "rbagumw-mgsomwojdyol", "rkcb-upmtv", "rkfrutacsslpzkonni-", "rxqevs-ce", "sdmd-olfoiyf", "tiohfw-l", "ufrvjibdljebern-tb", "ujegfg-", "v-kquocxdltpudkb", "vhqze-gaajfiv", "wjmixftlimr-", "wxmek-svoasej", "xmnhzp-kxjtnkq", "xvzlryrj-gsdj", "zhdb-oucsklfulrrcsm", "zkehduxxqlytyofxwh-"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cdr-kn", "ezm-zqj", "pfdy-hnvhov", "r-babslxxu", "correct", "baeu-tkbuzcwsmzv", "bkivmca-dms", "correct", "eswmvgysy-nnrrzpn", "evqrzxj-cfofwjwpedta", "correct", "correct", "hfilt-sfaceb", "correct", "i-pazr", "iypfzd-dgwfpk", "jcimdu-bu", "ka-eyckb", "kbqji-ay", "kqljzkdiaj-p", "kw-pot", "laa-ni", "correct", "correct", "mmwnklphsfonhbevyutrpi-wosql", "njpitvjjfmvlb-bevy", "ooud-dtf", "correct", "oghixkg-xhsujwkktxfvkjsdc", "oxiykzx-udrxaxh", "correct", "correct", "prcallncnkwq-gah", "correct", "correct", "correct", "rkfrutacsslpzko-nni", "correct", "sdmdo-lfoiyf", "tiohf-wl", "correct", "uj-egfg", "vk-quocxdltpudkb", "correct", "wjmixft-limr", "correct", "xmnhzpk-xjtnkq", "correct", "zhd-boucsklfulrrcsm", "zkehduxxqlytyo-fxwh"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> dictionary = {"sun owe lc dbee k sbmu", "yu f l rqr rs zxkd", "hjm neya sy kti s", "ttyv kcmi ydt", "wpbe gw ce cal ph q jq l", "m qggs", "ry plv kxp", "ry ni s hs", "ng ox xzo xx", "ybud br ybvn", "sj sevt q fpwu yi f fjkf", "x d g yard spj y", "gjfi gw ogyf r p yolr qc", "don o sq ob jkj i i vctu gu ipnv", "n mixf pn", "gqq zngn h fja d lvz mq cd", "do a p xo", "o l wuo wivp ea", "b xjwj pso jqiu j", "kon v rs zsze o vgv", "jzev za w qv", "f ncqn", "zv ki w ilq mmjo", "uex ryh gvr zf", "glyt ao n qxc aq x jyg lq hn", "xbr dmbs ic f kdk", "zenc id i pb", "bo dze ecsj", "hbxv jw hkp gbv", "t qng ou", "lho fkjv z lsx", "ziks ryd cy jzgy rga", "gg tdww nu t rnbg", "gv u ns", "dp smvt tpw", "gxr y a", "lu yf xwld", "znaz kzs dx k p uvb pifn", "im uhc wude os q kd d oepa", "dhr jt ymv do", "ypgv ki amux tbhl t", "g dgor fsge qeq", "rw yxgy tfa ob", "ugr biqb ai dazu azqg", "n evyu unwp wu m j khd", "zp ad vccr uhz uvp vt", "kd l vfh boi oibe gky", "ryd p gpwt", "u jlr iomp t fp", "hjez pe ztwn z gm stbb"};
    vector<string> candidates = {"-dpsmvttpw", "-ryplvkxp", "bodz-eecsj", "bxjw-jpsojqiuj", "d-hrjtymvdo", "do-apxo", "donosqobjkj-iivctuguipnv", "fn-cqn", "g-vuns", "gdgorfsgeqeq-", "ggtdwwnutrn-bg", "gj-figwogyfrpyolrqc", "glytaonqxcaqx-jyglqhn", "gqqzn-gnhfjadlvzmqcd", "gxr-ya", "h-jezpeztwnzgmstbb", "hbxvjwhkpgb-v", "hjmneyasy-ktis", "imuhcwudeosqkddo-epa", "jzevzaw-qv", "kdlvfhboio-ibegky", "konvrszszeovgv-", "l-uyfxwld", "lhofkjvzl-sx", "mqggs-", "n-goxxzoxx", "nevyuunwpw-umjkhd", "nmix-fpn", "olwuowi-vpea", "rwyxgy-tfaob", "ry-dpgpwt", "ryn-ishs", "sjsevtqfpwuyiffjk-f", "sunowelcdbeeksbm-u", "tqngou-", "ttyvkcmiydt-", "uex-ryhgvrzf", "ugr-biqbaidazuazqg", "ujlriompt-fp", "wpbegwcecalphq-jql", "xbr-dmbsicfkdk", "xdg-yardspjy", "y-budbrybvn", "ypgvkiamuxt-bhlt", "yuflrqrrs-zxkd", "zen-cidipb", "ziksryd-cyjzgyrga", "zn-azkzsdxkpuvbpifn", "zpadvccruhzuvpvt-", "zvkiwilqm-mjo"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dp-smvttpw", "ry-plvkxp", "bodze-ecsj", "bxjwj-psojqiuj", "dhr-jtymvdo", "correct", "correct", "f-ncqn", "gv-uns", "gdgorfsge-qeq", "ggtdwwnut-rnbg", "gjfi-gwogyfrpyolrqc", "correct", "gqq-zngnhfjadlvzmqcd", "correct", "hjez-peztwnzgmstbb", "hbxvjwhkp-gbv", "correct", "imuhcwudeosqkdd-oepa", "correct", "kdlvfhboi-oibegky", "konvrszszeo-vgv", "lu-yfxwld", "lhofkjvz-lsx", "m-qggs", "ng-oxxzoxx", "nevyuunwp-wumjkhd", "nmixf-pn", "olwuo-wivpea", "correct", "ryd-pgpwt", "ry-nishs", "sjsevtqfpwuyif-fjkf", "sunowelcdbeek-sbmu", "tqng-ou", "ttyvkcmi-ydt", "correct", "correct", "correct", "correct", "correct", "correct", "ybud-brybvn", "ypgvkiamux-tbhlt", "correct", "zenc-idipb", "correct", "znaz-kzsdxkpuvbpifn", "zpadvccruhzuvp-vt", "zvkiwilq-mmjo"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> dictionary = {"j blg f iph", "rrrs q ynf c", "dlmx tyle", "e ebb iwlb gedw vxxl", "xa dio rtl pwly cflu l rvs", "u ib lby", "b us miwy sf f lpbd", "e b itvo v g ap jxdi l u rnl", "ml dqa kev", "tntm xk rzzr xfzm vfzr vnet", "iz c eu bgb tth l hu pvf", "yl g kf", "u fcnb uy", "ts j v ahcn ddjp x i ej", "bhs bmyi uy nd b", "f kjap ajdk izse t", "ilhq n su wd adjy f", "zca v", "kj or jtg su ti ojqv l", "uka wbda ngl dwk paax qs rj zfpk", "brcx i ln gfeg huc", "bswf v soly zf htes", "rs leir iel iq qzdh br", "fbc orr r", "c x wip uj", "mesl", "w ai rmgr exni v dd", "bcmw j v sq a ru mdi", "qov je l pz puw akd", "zpch q vs anjs p", "g d u sz mda g", "ys fzw mify cre zxl ysf", "yb v v dpr srfq mem rnym uf", "ab xcr xjym jry zk i ovjs plyx hb", "dts pymd wc rme", "q lkr hls n s qffn gpkc ejdd byd", "per syug nga ldx", "upen fad vpzn t kkc owtp", "w i hp i l wr", "qw j m ifj fk u kbi wm ilh jr zk", "kbo mnf y frb xo", "dmdj cnn k e ke", "g qps c prws", "ek b tj pyd pi", "kx bp pu ckwp rz byy in hy tzw", "kor z nh zgk xxkp vnho dn", "c wkk xqx z a yb", "v czs vcwl b lw j hqqz w", "cfa scr fqh bgr", "msp enzb lq"};
    vector<string> candidates = {"-cxwipuj", "-uiblby", "-ylgkf", "abxcrxjymjryz-kiovjsplyxhb", "bcmwj-vsqarumdi", "bhsbmyiuynd-b", "br-cxilngfeghuc", "bswfvsolyzfh-tes", "busmiwysfflpbd-", "cfas-crfqhbgr", "cwkkxqxzay-b", "dlmxt-yle", "dm-djcnnkeke", "dts-pymdwcrme", "ebitvovgapj-xdilurnl", "eebbi-wlbgedwvxxl", "ekbtjpydpi-", "fbcor-rr", "fkja-pajdkizset", "gduszmdag-", "gqpsc-prws", "ilhqnsuwdad-jyf", "izceubgbtth-lhupvf", "jblgfiph-", "kbom-nfyfrbxo", "kjorjtgsutio-jqvl", "kor-znhzgkxxkpvnhodn", "kxbppuckwprzbyyinhytz-w", "mes-l", "mldqak-ev", "mspen-zblq", "persyugnga-ldx", "qlkrhlsnsqffngpkcejddbyd-", "qovjelpzp-uwakd", "qwjmifjfkuk-biwmilhjrzk", "rrrsqy-nfc", "rsleirieliqq-zdhbr", "tntmxkrzzr-xfzmvfzrvnet", "tsjvahcnddjpxi-ej", "ufcnbuy-", "ukawbdangldwkpaaxqsrjz-fpk", "upenfadvpznt-kkcowtp", "v-czsvcwlblwjhqqzw", "wairmgrexni-vdd", "wih-pilwr", "xadi-ortlpwlycflulrvs", "ybvvdprsrfqme-mrnymuf", "ysfzwmifycrezxl-ysf", "z-pchqvsanjsp", "zc-av"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c-xwipuj", "u-iblby", "yl-gkf", "abxcrxjymjry-zkiovjsplyxhb", "correct", "correct", "brcx-ilngfeghuc", "bswfvsolyzf-htes", "busmiwysff-lpbd", "cfa-scrfqhbgr", "cwkkxqxza-yb", "dlmx-tyle", "dmdj-cnnkeke", "correct", "ebitvovgap-jxdilurnl", "eebb-iwlbgedwvxxl", "ekbtjpyd-pi", "fbcorr-r", "fkjap-ajdkizset", "gduszmda-g", "correct", "ilhqnsuwd-adjyf", "correct", "jblgf-iph", "kbo-mnfyfrbxo", "kjorjtgsuti-ojqvl", "correct", "kxbppuckwprzbyyinhy-tzw", "mesl", "mldqa-kev", "msp-enzblq", "correct", "qlkrhlsnsqffngpkcejdd-byd", "qovjelpz-puwakd", "qwjmifjfku-kbiwmilhjrzk", "rrrsq-ynfc", "rsleirieliq-qzdhbr", "correct", "correct", "ufcnb-uy", "ukawbdangldwkpaaxqsrj-zfpk", "correct", "correct", "correct", "wi-hpilwr", "xadio-rtlpwlycflulrvs", "ybvvdprsrfqmem-rnymuf", "correct", "zpch-qvsanjsp", "zca-v"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> dictionary = {"se vy bq xozs g a if", "xrhs fmfa f", "ok lg g x yw", "kep wzb etjl fpfu tcv l", "ame j bk ctfk", "yym fkah", "ne tq b szo nr dkc", "npv cvpz vnez", "d a sjgd k bm lztw xs", "vv d j xmgf fdjh", "ntej eq zd q y m nvqu qgi o bzs huo f wfoj", "mxs fjko xc xgs", "xj b wxe c", "yw bh sq f nuuu e", "lqj au lsxe", "qfzx v wqwg", "tbef z p wxyz", "s n irpc opz", "mzqd mvl j", "mppd az rz nf wd ao jiz ayar gmjr", "u zzqh myvq", "fnu orn qnkl i rz bvlg l sxc slm", "jvtw s j qwu ps bn sp a ol byev", "yp s qjz r mkls", "fhmm mugf lam", "xv fc d", "uyd e bpr vkia rfne", "wxun q fh w", "ng bwon xuub", "vvk eic wt mdw z", "asa kza wwtb s", "t ta n nxv zc", "obu pxik lzpc vpv hk", "h w wyto mxzs q", "ewf xie a enw emvz", "wdiw xl du w", "va oaha jqe gadt ulw skax ef", "lm jig qf ry", "cbec e csk dr tbs lfx ll rqw mq zyt nckx", "s vkpl qr dmbx yu x ehcc", "qdg vma fo dvah bysm ycis yoae", "xqun z", "hzuj ackz jy tlne", "gl lp qga", "r uz cq s rk", "r tq vre mqn x kqyv waa xa qv", "ysk csx dk ab mkk", "ion c jxl q hpb", "gt e gpn leob sy", "m bwvk md jqkl"};
    vector<string> candidates = {"-snirpcopz", "-wxunqfhw", "-yskcsxdkabmkk", "amejbk-ctfk", "asakza-wwtbs", "cbececskdrtbslfxllrqwmqzytnckx-", "dasjgdkbm-lztwxs", "ewfxieaenwemv-z", "fhm-mmugflam", "fnuor-nqnklirzbvlglsxcslm", "gl-lpqga", "gte-gpnleobsy", "hwwytomx-zsq", "hzujackz-jytlne", "ioncjxl-qhpb", "jvtwsjqwupsbnspao-lbyev", "kepwz-betjlfpfutcvl", "lmjigq-fry", "lqjau-lsxe", "mbw-vkmdjqkl", "mppdazrznfwdaojizayargm-jr", "mxsfjkoxcxgs-", "mzqd-mvlj", "netq-bszonrdkc", "ngbwonxu-ub", "npvcvp-zvnez", "ntejeqzdqymnvquqgio-bzshuofwfoj", "obupxikl-zpcvpvhk", "oklg-gxyw", "qdgvmaf-odvahbysmycisyoae", "qfzxvwq-wg", "rtq-vremqnxkqyvwaaxaqv", "ruzc-qsrk", "sevybqxozs-gaif", "svkplq-rdmbxyuxehcc", "tbefz-pwxyz", "tta-nnxvzc", "uydebprvkiarf-ne", "uzzqhm-yvq", "vaoahajqegadtulwska-xef", "vvdjxmgffd-jh", "vvkeicwtm-dwz", "wdiwx-lduw", "x-qunz", "x-vfcd", "xjbwxe-c", "xr-hsfmfaf", "yps-qjzrmkls", "ywbhsqfnuuu-e", "yymfk-ah"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"s-nirpcopz", "wxun-qfhw", "ysk-csxdkabmkk", "correct", "correct", "cbececskdrtbslfxllrqwmqzyt-nckx", "correct", "ewfxieaenw-emvz", "fhmm-mugflam", "fnuorn-qnklirzbvlglsxcslm", "correct", "correct", "hwwyto-mxzsq", "correct", "correct", "jvtwsjqwupsbnspa-olbyev", "kepwzb-etjlfpfutcvl", "lmjig-qfry", "correct", "m-bwvkmdjqkl", "mppdazrznfwdaojizayar-gmjr", "mxsfjkoxc-xgs", "correct", "correct", "ngbwon-xuub", "npvcvpz-vnez", "correct", "obupxik-lzpcvpvhk", "correct", "qdgvma-fodvahbysmycisyoae", "qfzxv-wqwg", "correct", "ruz-cqsrk", "correct", "svkpl-qrdmbxyuxehcc", "correct", "correct", "uydebprvkia-rfne", "uzzqh-myvq", "vaoahajqegadtulwskax-ef", "vvdjxmgf-fdjh", "vvkeicwt-mdwz", "wdiw-xlduw", "xqun-z", "xv-fcd", "correct", "xrhs-fmfaf", "correct", "correct", "yym-fkah"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> dictionary = {"kql b ol", "dz cwg n cq hg dl", "btcn hit snk pwoy eboo rhon od t", "tcv gppo m ll ku d", "gxil z f qgmp", "f uhnn txo thaz rvcp nm ja", "ci vxit clw nhgl", "u n r r axg crl", "so yyn kwr cxcp pb or lglt", "i kcyg exy tqkr", "akzr xhie rer nk", "vh umzl", "qg hxy xsql", "lfl kde ox m", "van c yqjo e lj rdo", "v vpne c w ja aicf aift fh", "rua dv si jrd vlbc", "n jt j wxpz z hora nzjl", "pevo pwk dr j cvse l ymbv", "mowc qdel ldt kw l", "c f qi pogp lb", "tc t po ykj i tpb rr opiw m o", "jfkg mpi eo", "xtd pepc qj lkrg vdsb wfi", "xjp fbdn hwxi dx dplr", "fjov t dqqt dfld n l", "x fx w no sidw", "wcp rl l szb uiwv qtz", "ry b hojd", "ur v mhzu sq", "q mk fh e", "vqhi yzc i xq emgm a", "glt dzs fb ahq oi lnu med p", "nbjt eyqg r m qfli ap tzei xiu", "p moz bi xsxn gf f", "r ijdi iz vh", "ha vgls", "u bz d dlk erx fsjl h", "m rtpa xo sw fy ujyx", "gwwc xq v", "f gzr af z aufp hje l i nj", "wlc ac ywuj n", "h egp iw qwkb ch lr jfxk q", "rh yav yt mdem ro c", "he dso qpvt bnrf njm uqiy guz", "ik irlc kqer dh", "d o qn kvc mclp pazt x", "mg od xquk kii v", "mw fpb ypi t mar rmrx", "sy sxlg"};
    vector<string> candidates = {"-akzrxhierernk", "-cfqipogplb", "-gxilzfqgmp", "-sysxlg", "-unrraxgcrl", "btcnhitsnkpwoyeb-oorhonodt", "civxitcl-wnhgl", "do-qnkvcmclppaztx", "dzcwg-ncqhgdl", "f-jovtdqqtdfldnl", "fgzrafzaufph-jelinj", "fuhnntxothazrvcpn-mja", "g-ltdzsfbahqoilnumedp", "gw-wcxqv", "hav-gls", "heds-oqpvtbnrfnjmuqiyguz", "hegpiwqwkbchlrjf-xkq", "ikcygexyt-qkr", "ikirlck-qerdh", "jf-kgmpieo", "kql-bol", "lflk-deoxm", "mgodxquk-kiiv", "mowcqdelldtkw-l", "mrtpaxoswf-yujyx", "mwfpbypitm-arrmrx", "nbjteyqgrmqfliap-tzeixiu", "njtjwxpzzhoranzjl-", "pevopwkdrjc-vselymbv", "pmo-zbixsxngff", "qgh-xyxsql", "qm-kfhe", "r-hyavytmdemroc", "r-ybhojd", "rijd-iizvh", "ruadvsijr-dvlbc", "so-yynkwrcxcppborlglt", "tct-poykjitpbrropiwmo", "tcvgppoml-lkud", "ubzddlke-rxfsjlh", "urvmhz-usq", "vancyqjoelj-rdo", "vhu-mzl", "vqhiyzcixqemgm-a", "vvpnecwjaaicfaiftf-h", "wc-prllszbuiwvqtz", "wlcacy-wujn", "xfxwno-sidw", "xjpf-bdnhwxidxdplr", "xtdpepcqj-lkrgvdsbwfi"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"akzr-xhierernk", "c-fqipogplb", "gxil-zfqgmp", "sy-sxlg", "u-nrraxgcrl", "btcnhitsnkpwoy-eboorhonodt", "civxitclw-nhgl", "correct", "correct", "fjov-tdqqtdfldnl", "fgzrafzaufp-hjelinj", "fuhnntxothazrvcp-nmja", "glt-dzsfbahqoilnumedp", "gwwc-xqv", "ha-vgls", "hedso-qpvtbnrfnjmuqiyguz", "hegpiwqwkbchlr-jfxkq", "ikcygexy-tqkr", "ikirlc-kqerdh", "jfkg-mpieo", "correct", "lfl-kdeoxm", "correct", "correct", "mrtpaxosw-fyujyx", "mwfpbypit-marrmrx", "correct", "njtjwxpzzhora-nzjl", "pevopwkdrj-cvselymbv", "pmoz-bixsxngff", "qg-hxyxsql", "q-mkfhe", "rh-yavytmdemroc", "ry-bhojd", "rijdi-izvh", "ruadvsijrd-vlbc", "correct", "correct", "tcvgppom-llkud", "ubzddlk-erxfsjlh", "urvmhzu-sq", "correct", "vh-umzl", "correct", "vvpnecwjaaicfaift-fh", "wcp-rllszbuiwvqtz", "wlcac-ywujn", "correct", "xjp-fbdnhwxidxdplr", "correct"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> dictionary = {"ew dzuo", "porv hyoj pvb uvn vy yk kf xy", "ue tkpu kuk fby wmdh gvi", "n kkeg vsv", "rk teoz", "o o zv e xib", "ec u bzt shov n", "apw tv gum w", "xft qnua b iiq yzsm qas", "wkja iraj www cob", "wux wrqt wtgz", "boo he", "mfi qnk cgq ovvw", "bdov g puud wegl iti", "ihke fmq cgx", "du bb n gaoe gl", "wq htvr nfk", "un nd i j ww", "f ra xb", "gw f rgsb", "s snp s err abh", "okfq zb", "sj cfl oid fr tzf", "rviy bbi bhmf", "bgr sqz kve tdd", "d stp mhf f efi ahsk", "vnc xpik tad zd prgd", "fvas ph", "adh st kws cx l fxio y", "k pjpc hecx eknl yig", "oivt qk", "px cpkg bbh v v pg", "oci ou khwl f rt h", "r zvp j xlwh", "uf af fdh m mhxr gzh oa", "igmq dcx wbsu ks h", "u y im fgk peyb", "jjz yts l skmf zw", "o qd u i", "ry x uk lji k", "tyu xe zdx", "my f vafj", "ssuj w hnva", "ly uc o hrav k", "b k b bvu y onn iryo k m", "d xtdt if", "yary ryvw oft", "pdb xn rodg", "noop pt hfv obks qk", "pryl vi"};
    vector<string> candidates = {"-boohe", "-ewdzuo", "-fraxb", "-kpjpchecxeknlyig", "-pdbxnrodg", "-prylvi", "-ryxukljik", "-tyuxezdx", "a-pwtvgumw", "adhs-tkwscxlfxioy", "bdovgpu-udwegliti", "bgrsqz-kvetdd", "bkbbv-uyonniryokm", "d-stpmhffefiahsk", "dub-bngaoegl", "dxtdtif-", "ecubzt-shovn", "fvasp-h", "gwfrg-sb", "igm-qdcxwbsuksh", "ihkefmqc-gx", "jjzyt-slskmfzw", "lyucohrav-k", "mfiqnkcgqovvw-", "myfva-fj", "nk-kegvsv", "nooppt-hfvobksqk", "o-ivtqk", "ociouk-hwlfrth", "okfq-zb", "oozv-exib", "oqdui-", "p-xcpkgbbhvvpg", "porvhyojpvbuvnv-yykkfxy", "rkteoz-", "rviybb-ibhmf", "rzvpjxlw-h", "s-sujwhnva", "sjcfloi-dfrtzf", "ssnpserr-abh", "uetkpukukfby-wmdhgvi", "ufaffdhmmhxrgzho-a", "unndi-jww", "uyimfgkpey-b", "vncx-piktadzdprgd", "wk-jairajwwwcob", "wqhtvr-nfk", "wux-wrqtwtgz", "xftqnua-biiqyzsmqas", "yaryryvwof-t"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"boo-he", "ew-dzuo", "f-raxb", "k-pjpchecxeknlyig", "pdb-xnrodg", "pryl-vi", "ry-xukljik", "tyu-xezdx", "apw-tvgumw", "adh-stkwscxlfxioy", "bdovg-puudwegliti", "correct", "bkbbvu-yonniryokm", "correct", "du-bbngaoegl", "dxtdt-if", "correct", "fvas-ph", "gwf-rgsb", "igmq-dcxwbsuksh", "ihkefmq-cgx", "jjzyts-lskmfzw", "correct", "mfiqnkcgq-ovvw", "myf-vafj", "n-kkegvsv", "correct", "oivt-qk", "ociou-khwlfrth", "correct", "correct", "oqdu-i", "px-cpkgbbhvvpg", "porvhyojpvbuvn-vyykkfxy", "rk-teoz", "rviybbi-bhmf", "rzvpj-xlwh", "ssuj-whnva", "sjcfloid-frtzf", "correct", "correct", "ufaffdhmmhxrgzh-oa", "correct", "uyimfgk-peyb", "vnc-xpiktadzdprgd", "wkja-irajwwwcob", "correct", "correct", "correct", "yaryryvw-oft"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> dictionary = {"mqwh r bvff u bqhr", "fmyl wv x rmc kzde", "zhnc qu knsm s", "i sys o v he", "z qci k vdj", "jhbq bfm kxw i ls s", "cwf hdme", "fvks s ey", "gvzi rt j s tqe", "c pn dm kd wxsa p ek df", "n vl spod n vc r", "aaoh r zzn fo mep", "p xi lwvl wg m mr fblk", "yfab vuv", "n y qfmp weh ddu rfqe t p", "rnv fdc rch", "z nub hb wpf ij vcur g", "bk cn jsq f igo ks c xvuc", "c cc l ohw v dxv d mpa", "hud ykqh sb pvdw q", "i n kcpz", "d atzf rcfh rjk r bcyc kfg oon", "mqiw trn zl", "ua tg ja kd z", "lxpi madz yd ogve gg xu usl", "vfch fleu tp vk qsto", "svv jrus uy uj nl", "ctxc gb nq e mop", "vts dm vgj njnl tb mnkf", "uvp gxnb", "jw dz wef an h c trrs a", "mu f g p pf wujw lvv vigb ngv h", "kqj r wi c ce oq", "mk an cbj u p dcbe j", "edw dwo vhxe c npuq", "paen bxh hvlg el gtiv", "leg qmu cn k clh awq fd", "s cah", "iha ag gzc", "k xvpl fwxu i", "p p zjj k", "g rvwb o aof ys rudz", "suib wfyw n p x qom fq", "h yxh bnuv le", "b r pvrd ya bxth qdl mdew", "l dejc b", "kp gbjt hv j q nnko dweo rrxg ykrb", "lb df ndn msz y", "og o dz caqk y axxf g", "azli hlui h wanw"};
    vector<string> candidates = {"-cwfhdme", "-gvzirtjstqe", "-rnvfdcrch", "a-aohrzznfomep", "a-zlihluihwanw", "bkcnjsqfigok-scxvuc", "brp-vrdyabxthqdlmdew", "ccclohwvdxvdmp-a", "cpndmk-dwxsapekdf", "ctxcgbnqe-mop", "datzfrcfhrjkrbcyckfgoo-n", "edwdwovhxecnpuq-", "fmylwvxrmckz-de", "fvk-ssey", "grvwb-oaofysrudz", "hudykqhsbpvdwq-", "hyxh-bnuvle", "ihaaggzc-", "inkc-pz", "isys-ovhe", "jhbqbfm-kxwilss", "jwdzwefanhc-trrsa", "kpgbjthvjqnnkodweorrxgy-krb", "kqjrwicce-oq", "kxvpl-fwxui", "l-dejcb", "lbdf-ndnmszy", "legqmucnkcl-hawqfd", "lxpimadzydogveggx-uusl", "mka-ncbjupdcbej", "mqiwt-rnzl", "mqwh-rbvffubqhr", "mufgppf-wujwlvvvigbngvh", "nvls-podnvcr", "nyqfmp-wehddurfqetp", "ogodzcaqkyax-xfg", "p-aenbxhhvlgelgtiv", "pp-zjjk", "pxilw-vlwgmmrfblk", "s-cah", "suibwfywnpxqom-fq", "svvjrusuyujn-l", "u-atgjakdz", "uvpg-xnb", "vfchfleut-pvkqsto", "vtsdmvgjnjnlt-bmnkf", "yf-abvuv", "zhncq-uknsms", "zn-ubhbwpfijvcurg", "zqcikvdj-"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cwf-hdme", "gvzi-rtjstqe", "rnv-fdcrch", "aaoh-rzznfomep", "azli-hluihwanw", "bkcnjsqfigo-kscxvuc", "br-pvrdyabxthqdlmdew", "ccclohwvdxvd-mpa", "cpndm-kdwxsapekdf", "correct", "datzfrcfhrjkrbcyckfg-oon", "edwdwovhxec-npuq", "fmylwvxrmc-kzde", "fvks-sey", "correct", "hudykqhsbpvdw-q", "correct", "ihaag-gzc", "in-kcpz", "correct", "correct", "correct", "kpgbjthvjqnnkodweorrxg-ykrb", "correct", "correct", "correct", "correct", "legqmucnkclh-awqfd", "lxpimadzydogvegg-xuusl", "mk-ancbjupdcbej", "mqiw-trnzl", "correct", "correct", "nvl-spodnvcr", "correct", "ogodzcaqky-axxfg", "paen-bxhhvlgelgtiv", "correct", "pxi-lwvlwgmmrfblk", "correct", "correct", "svvjrusuyuj-nl", "ua-tgjakdz", "uvp-gxnb", "vfchfleu-tpvkqsto", "vtsdmvgjnjnl-tbmnkf", "yfab-vuv", "zhnc-quknsms", "z-nubhbwpfijvcurg", "zqcik-vdj"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> dictionary = {"fe zia o yrz jkq ga svr jgcc", "iz jjji u ovl td ooe ra f", "yp xh vboi w", "db qbyn cci txby qcs dix uilz", "rt erok jbjl zuhy rfa", "zl yep zr jw xd wht m", "e l rs v m plt", "kz rou emz", "rwpy tzy kqq eud tc huov", "cj pvq zwb xfgp atg d or go", "pi df kvw", "tvr bl ir zk", "qp niai gz ta cye elw", "ujnj lh ukwk fhn ket uzu scqb ra", "m hhk jix reug kdoo m", "jhhy a g au", "cfv k", "jn j zimu nnnr", "dds ih q rn ghrz", "aj nlrl o", "fnc rapb ke r", "z shp rj cpni jzl gh", "rji muc", "zgr p wiw uev hkaf hgg", "oa dtct xsvo", "gs emct boqw nbxm hr mxub", "gket kn wup", "l hes jodx adv av bnxx osot", "d kpw t pel gyea q p", "zbi ba ba quw qmi f dth hv", "q i qh tl", "nbq b zmh i yofs", "e hend yulh", "ksf gv", "dqu uuy g xqaw p", "dwpc h h dvp zofh res aho unzr", "nd c mx hres dfn yuhc cnba", "y xrvn pyqi", "lpge gam zjzj zpn xbyr jtt", "za tq jky afix sfj arax", "lk eplq v yabj gqkp epc b", "lzr fko ggd dfz", "kewu ex v va", "qny b kztb z v sn", "jnku gvri pwv klu", "fjik w pd", "ii yuk zt zco vs", "aovw fq imqs", "wjf n atpr p qq", "egyc xd mmxv dch ssx"};
    vector<string> candidates = {"-dquuuygxqawp", "-jnjzimunnnr", "ajnlr-lo", "aovw-fqimqs", "c-fvk", "cj-pvqzwbxfgpatgdorgo", "dbqbynccit-xbyqcsdixuilz", "ddsihqrnghr-z", "dkpwtpe-lgyeaqp", "dw-pchhdvpzofhresahounzr", "egycxdmmxvdchssx-", "ehendyu-lh", "elrsv-mplt", "feziaoyrzjkqgasvrjg-cc", "fj-ikwpd", "fncra-pbker", "gket-knwup", "gsemctboqwnbxmhrmx-ub", "iiyu-kztzcovs", "izjjjiuovltdoo-eraf", "jh-hyagau", "jnkugvripwvk-lu", "ke-wuexvva", "ks-fgv", "kzro-uemz", "lhesjodxadva-vbnxxosot", "lkeplqvyabjgqkpepcb-", "lpgegamzjzjzpnx-byrjtt", "lzrfk-oggddfz", "mhhkji-xreugkdoom", "nbqbzmhi-yofs", "ndcmxhresd-fnyuhccnba", "oadtctxsvo-", "pidfkvw-", "q-iqhtl", "q-nybkztbzvsn", "qpniaig-ztacyeelw", "rjimuc-", "rtero-kjbjlzuhyrfa", "rwpytzykqqe-udtchuov", "tvrb-lirzk", "ujnjlhukwkfhnketu-zuscqbra", "wjfnatprpq-q", "ypx-hvboiw", "yxrv-npyqi", "zatqjky-afixsfjarax", "zbibabaquw-qmifdthhv", "zgrpwiwuevh-kafhgg", "zlye-pzrjwxdwhtm", "zshp-rjcpnijzlgh"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dqu-uuygxqawp", "jn-jzimunnnr", "ajnlrl-o", "correct", "cfv-k", "correct", "dbqbyncci-txbyqcsdixuilz", "ddsihqrn-ghrz", "dkpwtpel-gyeaqp", "dwpc-hhdvpzofhresahounzr", "egycxdmmxvdch-ssx", "ehend-yulh", "correct", "feziaoyrzjkqgasvr-jgcc", "fjik-wpd", "fnc-rapbker", "correct", "gsemctboqwnbxmhr-mxub", "iiyuk-ztzcovs", "izjjjiuovltdooe-raf", "jhhy-agau", "jnkugvripwv-klu", "kewu-exvva", "ksf-gv", "kzrou-emz", "lhesjodxadv-avbnxxosot", "lkeplqvyabjgqkpepc-b", "lpgegamzjzjzpn-xbyrjtt", "lzrfko-ggddfz", "mhhkjix-reugkdoom", "correct", "ndcmxhres-dfnyuhccnba", "oadtct-xsvo", "pidf-kvw", "correct", "qny-bkztbzvsn", "qpniai-gztacyeelw", "rji-muc", "rterok-jbjlzuhyrfa", "rwpytzykqq-eudtchuov", "tvr-blirzk", "ujnjlhukwkfhnket-uzuscqbra", "wjfnatprp-qq", "yp-xhvboiw", "yxrvn-pyqi", "correct", "correct", "zgrpwiwuev-hkafhgg", "zlyep-zrjwxdwhtm", "correct"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> dictionary = {"sil krs iz ig ree aeuk", "lol dnpp ov l pzuy dabg wj", "i n ijjc nkhk cnkj uhn y", "wmw r joyl xxvm mg hog nxs", "mek kwh mw xk", "i yeg tib vg yhsp", "wdre d q blt", "bt q kdk kln yfbl", "mdi gq rkwa erlm", "rhvf y h dq tln mgn", "dzq ioi yfl o", "qu jgyy zpac g ly tztq", "rd jjea h zpk rwqr x", "kc zk tpj t yjt wmwh", "kdb m hdn mgg qf", "xbf un ik", "wp ha od wynz", "iag qps katv", "m ttmg kmi au k", "ouu fwvn gkm m yx vm", "kts l rbli zbwi hck", "drk mw v lk gmgo c", "m e vpz omhv v bznz", "efl ukle pzb de v pcwi ik e", "f woff", "btcq brhz s", "iyaz c qcvb j segu qtah", "fa pnj kxm ebty", "x xv yyd fqb gusv wtcv qau izv f", "gq bo dzx a blr", "wn eyf buwe s jib zt j", "i cqgx a", "tv rfw tx hog f", "kjd mpq kc pmlc otgq zol", "m uhn wnq angd xmo e", "llt sqz ulo b zbsz v", "ca ef d j", "gtof bepz e de", "px v uvf qgg", "t mmn dydw nog ozb", "ud scom ytc g xip", "bi dqqz yabe sdeo", "g xr yy o xmme sq bvop fp tja", "ex mvda etvs h", "loo lxe ugl vrfa", "j f v fub nzfb akd qvfr su yk ub", "sjh pdk ysr dej", "o tqfx h phrv cvz fn", "afl pok tpmk yfy", "jpdk og mrzq p htrk"};
    vector<string> candidates = {"-jpdkogmrzqphtrk", "-tvrfwtxhogf", "-xbfunik", "a-flpoktpmkyfy", "b-tcqbrhzs", "bid-qqzyabesdeo", "btqkdkklny-fbl", "caefdj-", "d-zqioiyflo", "dr-kmwvlkgmgoc", "efluklepzbdevpcwiike-", "exmvd-aetvsh", "fapnjkxmebty-", "fwof-f", "gqbo-dzxablr", "gtofbep-zede", "gxryyoxmmesqbvopf-ptja", "iagqps-katv", "icqgx-a", "inijjc-nkhkcnkjuhny", "iyazcqc-vbjseguqtah", "iyegt-ibvgyhsp", "jfvfubn-zfbakdqvfrsuykub", "k-czktpjtyjtwmwh", "kd-bmhdnmggqf", "kjdmpqkcpmlcotgqzol-", "ktslrbli-zbwihck", "lltsqzulobz-bszv", "loldnppovlpzu-ydabgwj", "loolxeugl-vrfa", "mdigqr-kwaerlm", "me-kkwhmwxk", "mevpzomhvvbz-nz", "mttmgkm-iauk", "muh-nwnqangdxmoe", "otqfxhphrvcvzfn-", "ouufwvngkm-myxvm", "px-vuvfqgg", "quj-gyyzpacglytztq", "r-djjeahzpkrwqrx", "rh-vfyhdqtlnmgn", "s-jhpdkysrdej", "sil-krsizigreeaeuk", "t-mmndydwnogozb", "udscomytc-gxip", "wdredqb-lt", "wmwrjoy-lxxvmmghognxs", "wne-yfbuwesjibztj", "wphaodwynz-", "xxvyydfq-bgusvwtcvqauizvf"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jpdk-ogmrzqphtrk", "tv-rfwtxhogf", "xbf-unik", "afl-poktpmkyfy", "btcq-brhzs", "bi-dqqzyabesdeo", "btqkdkkln-yfbl", "caefd-j", "dzq-ioiyflo", "drk-mwvlkgmgoc", "efluklepzbdevpcwiik-e", "exmvda-etvsh", "fapnjkxm-ebty", "f-woff", "correct", "gtofbepz-ede", "gxryyoxmmesqbvop-fptja", "correct", "correct", "correct", "iyazc-qcvbjseguqtah", "iyeg-tibvgyhsp", "jfvfub-nzfbakdqvfrsuykub", "kc-zktpjtyjtwmwh", "kdb-mhdnmggqf", "kjdmpqkcpmlcotgq-zol", "correct", "lltsqzulob-zbszv", "loldnppovlpzuy-dabgwj", "correct", "mdigq-rkwaerlm", "mek-kwhmwxk", "mevpzomhvv-bznz", "mttmgkmi-auk", "muhn-wnqangdxmoe", "otqfxhphrvcvz-fn", "correct", "correct", "qu-jgyyzpacglytztq", "rd-jjeahzpkrwqrx", "rhvf-yhdqtlnmgn", "sjh-pdkysrdej", "correct", "correct", "correct", "wdredq-blt", "wmwrjoyl-xxvmmghognxs", "wn-eyfbuwesjibztj", "wphaod-wynz", "xxvyydfqb-gusvwtcvqauizvf"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> dictionary = {"gtp q dn p", "kere cn fnk dsoe gfh", "obc wvjf bmxw", "jc n zxfr v apah", "jaz yzys dgn so", "eiov vmj puos", "iks npgv tp qlff", "kmk a v y", "vaz qy xoh", "vltj hv prc hmdq y cx of vgxk ysa", "ga h bb mqlv zwk", "sgac los r qof oy em", "s s qm p", "coy c q lka", "hutk tnue f dwgf", "rg aev", "lxbn chm xvo", "km d plk", "whp zy sv phfp", "k l gp bv hvu vim", "kehb lnk quen", "t r oqk y qpms tv z", "talt qul g", "chma a dcqr vk t e uctk qbx", "b xhtb vp smax sva", "s nj zbc", "j jux dyuk zz ld n uj m rxwz bda", "vbz f qalk i zdcd o c xqa pcww", "occe dv gd gr", "epto tp p yxxp vad e yorb wub", "vah ba hv gkoi sc pp", "wi cra hzcj bpj mkg t", "t lwx rln d", "pnyf jn rapk e", "c d if wmis oetj prv", "k uw qg yclg iwb bvc neep bgk", "a spe tdwd nmw eu vwq", "y viqg oong l djb", "zulh aqjp", "w zf l rxm", "nq s jbl k sfr ncki kg b c", "ejeg rw sk dso hhqe", "ny dvpq cyx", "u a si slly ghjv p fe x tvp mikk a", "zhw d iaxk", "o lx akdy gdpx", "kd f moy uu e t goln v", "ug i pu rm vk y t", "duqp oos y t pv gch", "kkh pbuk czol jiyi"};
    vector<string> candidates = {"-ssqmp", "-vahbahvgkoiscpp", "-vazqyxoh", "-zulhaqjp", "as-petdwdnmweuvwq", "bxhtbv-psmaxsva", "cdif-wmisoetjprv", "chmaadcqrvkteuctkqbx-", "coycq-lka", "duq-poosytpvgch", "eiov-vmjpuos", "ejegrws-kdsohhqe", "eptotppyxxpvadeyo-rbwub", "g-ahbbmqlvzwk", "g-tpqdnp", "hutktn-uefdwgf", "iksnpgv-tpqlff", "jazyzysdgnso-", "jcnzxfrva-pah", "jjuxdyukzzldnujm-rxwzbda", "kdfmoyu-uetgolnv", "kehb-lnkquen", "kere-cnfnkdsoegfh", "kkhpbuk-czoljiyi", "klgpbvhvuvim-", "km-kavy", "kmd-plk", "kuwqgyclgiwbbvcne-epbgk", "lx-bnchmxvo", "nqsjblks-frnckikgbc", "nydv-pqcyx", "obcwvjf-bmxw", "occedvgdgr-", "olxakdygdp-x", "pnyfjnrapke-", "r-gaev", "s-njzbc", "sgaclosr-qofoyem", "talt-qulg", "tlwxrl-nd", "troqk-yqpmstvz", "u-gipurmvkyt", "uasisllygh-jvpfextvpmikka", "vbzfqalkizdcdoc-xqapcww", "vltjhvprchmdq-ycxofvgxkysa", "whpzysvphfp-", "wicrahzcjb-pjmkgt", "wzflrx-m", "yviqgoongl-djb", "zhwdiaxk-"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"s-sqmp", "vah-bahvgkoiscpp", "vaz-qyxoh", "zulh-aqjp", "a-spetdwdnmweuvwq", "bxhtb-vpsmaxsva", "correct", "chmaadcqrvkteuctk-qbx", "correct", "duqp-oosytpvgch", "correct", "ejegrw-skdsohhqe", "eptotppyxxpvade-yorbwub", "ga-hbbmqlvzwk", "gtp-qdnp", "hutk-tnuefdwgf", "correct", "jazyzysdgn-so", "jcnzxfrv-apah", "correct", "kdfmoy-uuetgolnv", "correct", "correct", "correct", "klgpbvhvu-vim", "kmk-avy", "correct", "kuwqgyclgiwbbvc-neepbgk", "lxbn-chmxvo", "nqsjblk-sfrnckikgbc", "ny-dvpqcyx", "correct", "occedvgd-gr", "olxakdy-gdpx", "pnyfjnrapk-e", "rg-aev", "correct", "correct", "correct", "tlwxrln-d", "correct", "ug-ipurmvkyt", "uasislly-ghjvpfextvpmikka", "correct", "correct", "whpzysv-phfp", "wicrahzcj-bpjmkgt", "wzfl-rxm", "correct", "zhwd-iaxk"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> dictionary = {"qur jbd c tzbi eftu", "h eln byv ku z", "cjxo rxaq pb jf xea", "e okr", "vvfr eb loe ny eb jnhv mk", "vh t f sdw iffe", "jhf ak wflf yytj", "cg rak jo hyh", "cfe ftxe zmuy v zijj ozw", "gi c vifr", "rdtb nxbe vvja wbh", "hk e mcb qlxw hhx bqjm mk", "wedo rl u", "zsph m g tyzo w", "yi ikte frzr xk", "eslc ryue jo", "b fz j yae", "ana pdeg", "qx t j g ylq", "fq pz o emvg h", "oesn rnry wqj rz", "uxsr", "lj wopy zmt agf orv m", "qg oyb cc ylmf x tadw", "l ca o", "dr h brj xus o yk ko jun", "cpi d qgp l jwmg so tf tt", "ln v f nv", "hppq n moo", "ng lrqn zcg", "ovpe wa d amh", "bxyj zk kaz egyx hjjs", "otd me rx mbrk l sv", "qdce t riv ryy sl", "hsq omd tde", "wayi ucxn", "wyv std fndp nblh r puvd", "ed pinh x rm l zjj bbon gifh", "czxn t hxva aibg n c fq", "glf hznw hti", "w o w b ym oria oyx wu btm y", "qj vpxq oarx qiop", "vj dv icw", "yuca blq i jcrq hffl", "egrx kz lu", "ka ggz twa ujjw xakc sduk", "vc iujq zd usd ni", "x ltpe itho rxee", "p b wl y rm h ozy t", "je qhf"};
    vector<string> candidates = {"-bfzjyae", "-gicvifr", "-helnbyvkuz", "-hppqnmoo", "-lnvfnv", "-vjdvicw", "-vvfrebloenyebjnhvmk", "-zsphmgtyzow", "anapde-g", "b-xyjzkkazegyxhjjs", "c-feftxezmuyvzijjozw", "c-grakjohyh", "cjxorxaqpbjfxea-", "cpid-qgpljwmgsotftt", "czxnthxvaaibgncf-q", "d-rhbrjxusoykkojun", "edpinhxrmlzj-jbbongifh", "egrxkzlu-", "eok-r", "eslc-ryuejo", "fqp-zoemvgh", "gl-fhznwhti", "hkemcbqlxwhhx-bqjmmk", "hs-qomdtde", "jeq-hf", "jhfakw-flfyytj", "kaggztwa-ujjwxakcsduk", "lc-ao", "ljw-opyzmtagforvm", "nglr-qnzcg", "oesnrnry-wqjrz", "otdmerxm-brklsv", "ovp-ewadamh", "pb-wlyrmhozyt", "q-urjbdctzbieftu", "qdcetrivryys-l", "qg-oybccylmfxtadw", "qjvpxqoa-rxqiop", "qxtjg-ylq", "rdtbn-xbevvjawbh", "uxs-r", "vciuj-qzdusdni", "vhtfsdwi-ffe", "w-ayiucxn", "w-yvstdfndpnblhrpuvd", "wed-orlu", "wowbymoriao-yxwubtmy", "xltpei-thorxee", "yiiktef-rzrxk", "yucablqijcrqhffl-"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b-fzjyae", "gi-cvifr", "h-elnbyvkuz", "hppq-nmoo", "ln-vfnv", "vj-dvicw", "vvfr-ebloenyebjnhvmk", "zsph-mgtyzow", "ana-pdeg", "bxyj-zkkazegyxhjjs", "cfe-ftxezmuyvzijjozw", "cg-rakjohyh", "cjxorxaqpbjf-xea", "correct", "czxnthxvaaibgnc-fq", "dr-hbrjxusoykkojun", "edpinhxrmlzjj-bbongifh", "egrxkz-lu", "e-okr", "correct", "fq-pzoemvgh", "glf-hznwhti", "correct", "hsq-omdtde", "je-qhf", "jhfak-wflfyytj", "correct", "l-cao", "lj-wopyzmtagforvm", "ng-lrqnzcg", "correct", "otdmerx-mbrklsv", "ovpe-wadamh", "correct", "qur-jbdctzbieftu", "qdcetrivryy-sl", "correct", "qjvpxq-oarxqiop", "correct", "rdtb-nxbevvjawbh", "uxsr", "vciujq-zdusdni", "vhtfsdw-iffe", "wayi-ucxn", "wyv-stdfndpnblhrpuvd", "wedo-rlu", "wowbymoria-oyxwubtmy", "xltpe-ithorxee", "yiikte-frzrxk", "yucablqijcrq-hffl"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> dictionary = {"hm ybj c po tjnd j hhl", "jt sma syp vzc", "ore fmo o fgq yblf ezyj aqad", "c iw n nc cnc pq q f v is", "jx fz y miaj pbae nm", "o s az vp wm admv oenk", "pko yr paz", "vws gfgw cs co", "qebo jj uib h bxev xybv ixsx nv", "acb otx q eikz", "fvf x rw clot", "ys jawq e siiz", "cobk xz n", "u uwij ee gge bdne fvxb", "s z x skbb uhcn mcy x", "bnc gced mcq xq bnst", "abt o xygg jgy df wbtx", "dpje oml up pt", "jfwf oa x mpn i mh", "fex e rmqb jknv ms", "h l i drab a kjb x hyv j", "f cm njd x kzvm ge", "fx tkq qij", "gdgo rbwd gsv", "kuvi le", "giki nq sgh vy xqya", "eq l elyj sp pc rpug", "pw xi dpc nopi", "eae apyg tzr xl otum", "cupj bgy", "lfd s emmc t wxfe", "xq oilm ipz ct vr w", "gat p vqq iwtg xc", "nmc ehj l c", "vbts abh", "fol c", "pc m xwhd", "dfp cg sd hcsj ir v", "gs dj sx hkz iuq fcq", "spe l yi zlv", "n ahxg zwy t i cmn", "tgb d jw qpl nr", "t r p wkrr r un", "xkuz x suou z ntm v ps", "zg c lwss z ss llc", "my lsg", "waf wqbx grtl mmt", "a gim ygi tp seqe", "rkmu n m en mwlm l xwix", "z ntw an t njrm r"};
    vector<string> candidates = {"-cupjbgy", "-hmybjcpotjndjhhl", "-mylsg", "-pcmxwhd", "-spelyizlv", "-szxskbbuhcnmcyx", "-xqoilmipzctvrw", "a-cbotxqeikz", "ab-toxyggjgydfwbtx", "ag-imygitpseqe", "bncgcedmcqxqbn-st", "ciwnnccn-cpqqfvis", "cobkxzn-", "dfpcgs-dhcsjirv", "dpjeo-mluppt", "e-qlelyjsppcrpug", "eaeapygtzrxl-otum", "fcmnjdxkzvmge-", "fe-xermqbjknvms", "fol-c", "fvfxrw-clot", "fxtkqqij-", "gatpvqqiwt-gxc", "gdgorbwdgsv-", "gikin-qsghvyxqya", "gsdjs-xhkziuqfcq", "hlidrabakjbxh-yvj", "jfwfoa-xmpnimh", "jtsmas-ypvzc", "jx-fzymiajpbaenm", "kuvile-", "lfdsemmctw-xfe", "nahxgzwyticmn-", "nmcehjlc-", "orefmoo-fgqyblfezyjaqad", "osazvpwmadmvoe-nk", "p-koyrpaz", "pwxidpcno-pi", "q-ebojjuibhbxevxybvixsxnv", "rkmunmenmwl-mlxwix", "tgbdjw-qplnr", "trp-wkrrrun", "uuwijeegge-bdnefvxb", "vbt-sabh", "vwsgfgwc-sco", "wafwqb-xgrtlmmt", "xku-zxsuouzntmvps", "y-sjawqesiiz", "zgclwsszssl-lc", "zntwantnjrm-r"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cupj-bgy", "hm-ybjcpotjndjhhl", "my-lsg", "pc-mxwhd", "spe-lyizlv", "s-zxskbbuhcnmcyx", "xq-oilmipzctvrw", "acb-otxqeikz", "abt-oxyggjgydfwbtx", "a-gimygitpseqe", "bncgcedmcqxq-bnst", "ciwnnccnc-pqqfvis", "cobkxz-n", "dfpcg-sdhcsjirv", "dpje-omluppt", "eq-lelyjsppcrpug", "correct", "fcmnjdxkzvm-ge", "fex-ermqbjknvms", "correct", "correct", "fxtkq-qij", "gatpvqqiwtg-xc", "gdgorbwd-gsv", "giki-nqsghvyxqya", "gsdj-sxhkziuqfcq", "hlidrabakjbx-hyvj", "correct", "jtsma-sypvzc", "correct", "kuvi-le", "lfdsemmct-wxfe", "nahxgzwyti-cmn", "nmcehjl-c", "correct", "osazvpwmadmv-oenk", "pko-yrpaz", "pwxidpc-nopi", "qebo-jjuibhbxevxybvixsxnv", "rkmunmenmwlm-lxwix", "correct", "correct", "correct", "vbts-abh", "vwsgfgw-csco", "wafwqbx-grtlmmt", "xkuz-xsuouzntmvps", "ys-jawqesiiz", "zgclwsszss-llc", "correct"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> dictionary = {"ww us dsfo p", "mja u iwf", "nehx rcs i kqo wwv", "y edc a", "b jl q qm qb xhnj", "xdkq d qya u vc", "xxk clo pq b cdx", "r k m rrhk sfpr a zp y xdob mat", "lttj bvz gqo y kijp utsz", "mren zf ovuu", "b m x e vjq pyel", "x kiy o mo cv pz od", "w m mxo v o", "mcg uxm jonf rytc wpry wvk a", "v c vddn", "lwbw fg jlf ic", "dd xho", "ybdr fz ej ihes", "uom bs pt gqme", "j acm", "zzvv qn kttx c og", "wev dy dpgf jtib ok ojjn", "t b fzk nzl", "dr xwe lunh sq", "hr zlca glv j", "qjxm v w sz l ovx p c n gorf", "uq x u cgsm u io ai rjna ab", "shmo u wus gtp", "zyz bnpw lb lbc u", "s xey m m pnc", "msr rf hal hlen", "ca ep sw z vima on", "w phn m a thr fbdy", "yd kavl ui ubr eh xkh zlf atzm", "iv fhmu", "pqr ex jy ahc tfg ncf uoyl", "ap rr fng il glo rq l", "psv p xwen x sl gza ozm hihy", "w pbiq dqpv", "skon g yea oyh", "o i t jcy y j te tgdi hcnx xkzt dvi", "rqf kbqs od", "rce d tdm xxt o zfv nkov bo", "n b fywy snfa n gu", "av jvzf", "nk uwaj c zlwx y veh xudk", "xg n p bpbj r", "d b af ka xee pqvn kw hg q", "l pqxm pl oc y lvup", "l amvv kls"};
    vector<string> candidates = {"-avjvzf", "-ddxho", "-ivfhmu", "-jacm", "-lamvvkls", "-uombsptgqme", "-wmmxovo", "aprrfngilglor-ql", "bj-lqqmqbxhnj", "bmxe-vjqpyel", "caepswzvima-on", "db-afkaxeepqvnkwhgq", "drxwelunh-sq", "hrzlcagl-vj", "lpqxmpl-ocylvup", "lttjbvzgq-oykijputsz", "lwbwfgj-lfic", "m-cguxmjonfrytcwprywvka", "m-jauiwf", "mrenzf-ovuu", "msrrfh-alhlen", "nbfywy-snfangu", "nehxrcsikqoww-v", "nkuwajczlwx-yvehxudk", "oitjcyyjtetgdihc-nxxkztdvi", "pqrexjyahctfgncfu-oyl", "psv-pxwenxslgzaozmhihy", "qjxmvwszlovxpc-ngorf", "rce-dtdmxxtozfvnkovbo", "rkmrrhksfprazpyx-dobmat", "rq-fkbqsod", "shmouwusgtp-", "skongy-eaoyh", "sxeymmpnc-", "tbfzknz-l", "uqxucgsmuioairj-naab", "vcvdd-n", "w-pbiqdqpv", "wevdydpg-fjtibokojjn", "wphnmat-hrfbdy", "wwus-dsfop", "xdkqdqyau-vc", "xgnpbpb-jr", "xkiyomo-cvpzod", "xxkclopqbc-dx", "yb-drfzejihes", "ydkavluiubrehxkhz-lfatzm", "yedc-a", "zyzbnpwlblb-cu", "zz-vvqnkttxcog"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"av-jvzf", "dd-xho", "iv-fhmu", "j-acm", "l-amvvkls", "uom-bsptgqme", "w-mmxovo", "aprrfngilglo-rql", "b-jlqqmqbxhnj", "correct", "correct", "correct", "correct", "hrzlcaglv-j", "correct", "lttjbvzgqo-ykijputsz", "lwbwfg-jlfic", "mcg-uxmjonfrytcwprywvka", "mja-uiwf", "correct", "msrrf-halhlen", "correct", "nehxrcsikqo-wwv", "correct", "oitjcyyjtetgdi-hcnxxkztdvi", "pqrexjyahctfgncf-uoyl", "correct", "correct", "correct", "rkmrrhksfprazpy-xdobmat", "rqf-kbqsod", "shmouwus-gtp", "skong-yeaoyh", "sxeymm-pnc", "tbfzk-nzl", "uqxucgsmuioai-rjnaab", "vc-vddn", "correct", "wevdydpgf-jtibokojjn", "wphnma-thrfbdy", "correct", "correct", "xgnpbpbj-r", "correct", "xxkclopqb-cdx", "ybdr-fzejihes", "ydkavluiubrehxkh-zlfatzm", "correct", "zyzbnpwlblbc-u", "zzvv-qnkttxcog"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> dictionary = {"umn eyeg yhk ad", "ygsx askn c w obh v wuja", "k vvkd xud kze", "byxg buya z dzn", "s k mig nsh", "tkuu pavz r kdsm", "hpn mdp l f in", "cgwm eg qb dpl vpkv zpb", "q b owy pan", "ac gs suau", "lvp pl pl kccd u v", "m nmy qa efi vot mpin pn", "o etaw gre ts ie no s", "lk vy zrm gs gnt", "rtas ucox", "hn rjlx mc", "nq sn kgb oav", "uf wqte e tnq", "a gwe", "hf lnwa hkzg ytem fsuh ddj", "mujf dr gu cxwd", "o vh hxxy vf", "gyc hqrh j chb", "hoe hv j g uxk", "fm cgli", "eeph spyt", "q rry kqqi xif", "lrql a", "zs spf xlw hmgx w hwin", "vfpq v e", "nw dyl ouqe ouz jim b ctzk niyv hb", "rtd bp t xc hgx mwje v rt s s", "gzch fm s fure w eqfj a", "oqg w jfdw", "hi az ho dxo qika", "u a kigp attx cyv wzsy", "ol acfo ug gbxy", "xtjn xqx iexp uc", "lmg qr v lex txou", "jd vz patm mwri ip j s", "n stq mpzh ofgu w", "rjmg gj mrp hkpt jjka uzw eaf", "khe zvtn p h", "jzbp zsod c ju fo ltgp gbqu", "e yh wc m b j tul yqmr gkp zp", "opuk lzh okg ojh n", "yv nneu xbwi mhb wby", "dkd kjk", "np xils as unl", "o dpf"};
    vector<string> candidates = {"-fmcgli", "-jdvzpatmmwriipjs", "-oetawgretsienos", "-yvnneuxbwimhbwby", "acgssuau-", "ag-we", "byxgbuyazd-zn", "cgwmegqbdplvpkvzpb-", "d-kdkjk", "eeph-spyt", "eyhwcmbjtulyqmrgkp-zp", "gychqrh-jchb", "gzchfmsfur-eweqfja", "h-nrjlxmc", "hflnwa-hkzgytemfsuhddj", "hiazho-dxoqika", "hoehvjg-uxk", "hpnmdp-lfin", "jzbpzsod-cjufoltgpgbqu", "khezvt-nph", "kv-vkdxudkze", "lkvyzrmgsgnt-", "lmgq-rvlextxou", "lrq-la", "lvpplp-lkccduv", "mnm-yqaefivotmpinpn", "mujfdrgu-cxwd", "npxilsas-unl", "nqsnkgb-oav", "nstqm-pzhofguw", "nwdyl-ouqeouzjimbctzkniyvhb", "od-pf", "olacfouggbxy-", "op-uklzhokgojhn", "oqgwjfdw-", "ovhhxx-yvf", "qbowypa-n", "qrryk-qqixif", "rjmggjmrphkptjjkauzwe-af", "rta-sucox", "rtdbpt-xchgxmwjevrtss", "skmignsh-", "tku-upavzrkdsm", "uakigpa-ttxcyvwzsy", "ufwqte-etnq", "umney-egyhkad", "vfpqv-e", "xtjnx-qxiexpuc", "ygsxaskncwobhvwuj-a", "zsspf-xlwhmgxwhwin"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fm-cgli", "jd-vzpatmmwriipjs", "o-etawgretsienos", "yv-nneuxbwimhbwby", "acgs-suau", "a-gwe", "byxgbuyaz-dzn", "cgwmegqbdplvpkv-zpb", "dkd-kjk", "correct", "correct", "correct", "gzchfmsfure-weqfja", "hn-rjlxmc", "correct", "correct", "correct", "correct", "correct", "khezvtn-ph", "k-vvkdxudkze", "lkvyzrmgs-gnt", "lmg-qrvlextxou", "lrql-a", "lvppl-plkccduv", "mnmy-qaefivotmpinpn", "correct", "correct", "correct", "nstq-mpzhofguw", "correct", "o-dpf", "olacfoug-gbxy", "opuk-lzhokgojhn", "oqgw-jfdw", "ovhhxxy-vf", "qbowy-pan", "qrry-kqqixif", "rjmggjmrphkptjjkauzw-eaf", "rtas-ucox", "correct", "skmig-nsh", "tkuu-pavzrkdsm", "uakigp-attxcyvwzsy", "correct", "umn-eyegyhkad", "correct", "xtjn-xqxiexpuc", "ygsxaskncwobhv-wuja", "correct"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> dictionary = {"poxj t egd qce g", "khwi xdy", "uo fv bjku cbtt", "mjmt qjvs byji vktb", "mmy dq qiv g iak fyb", "cexg ymf y jymj rdyg aswh a", "caow kcv h co tfn", "a u c awfp gu yxaz vxp", "be r bo ck s gc yp", "avz h eybe q", "p p isrc xsbj", "uhan vur gzkt gh vqol", "d zlgt xztd u", "fysf oigy rmwc", "u ee own s yjf zo nc", "e hpc tsc dzz q ftrl", "m wis zcr w j vi vptu", "qmzz ibzm hgdn lm ohcx", "xk g tg", "wl bqb djv nh t emv", "ro qs liog mug", "zuym bne jgo izgz", "wz a xy yd cvbs mpaz", "ln aivz", "te mlv zoo", "duhj r e jc inti z uui tenw vzv xmbb bo", "ehwd", "b isc d pub f opn uefo", "osvm hdx op drd fv", "j smzz gmi gg e ab rbm qh", "zfh bs ojsb g mm", "l gn a gx chh pc", "ii dbky b pjnu e qv r f rw", "gim i n mq it dj vmy", "odv n jfug ynn oe yyiq", "gpc jqkq r ln yi cy", "btet w cxzh", "k mumz", "pz pap", "kd bfb amc ia sv cygs nedm zy sfn", "gj v", "uz emcx q xsp q ltn", "g rmum ykyy appd gj njv gqsy", "s ntdz wcv x tzfu bku", "wlep wgx", "p zc m vi awjs", "hpor qjxc wtxd awk hqo yy", "upqi jxi q bqs txfc j", "jku msj ht", "bg nw hlou mcl pqvc"};
    vector<string> candidates = {"-caowkcvhcotfn", "-gjv", "-khwixdy", "-mjmtqjvsbyjivktb", "-sntdzwcvxtzfubku", "-upqijxiqbqstxfcj", "-wlbqbdjvnhtemv", "-xkgtg", "a-ucawfpguyxazvxp", "a-vzheybeq", "berb-ocksgcyp", "bgnwhloumcl-pqvc", "biscdpubfopnu-efo", "btet-wcxzh", "cexgymfyjymjr-dygaswha", "d-zlgtxztdu", "duhjrej-cintizuuitenwvzvxmbbbo", "eh-wd", "ehpctscdzzqftr-l", "fysfoigyr-mwc", "gi-minmqitdjvmy", "gpc-jqkqrlnyicy", "grmumykyyappdgjnj-vgqsy", "hporqjxc-wtxdawkhqoyy", "iidbky-bpjnueqvrfrw", "jkumsjh-t", "jsmzzgmiggeab-rbmqh", "k-mumz", "kdbfbamciasvcygsned-mzysfn", "lgnag-xchhpc", "lna-ivz", "mmydq-qivgiakfyb", "mwiszcrwjvivpt-u", "odvnjfugyn-noeyyiq", "osvmhdx-opdrdfv", "pox-jtegdqceg", "ppis-rcxsbj", "pzcmviawj-s", "pzpap-", "qmzzibzmhgdn-lmohcx", "roqsliogmug-", "temlvzoo-", "u-hanvurgzktghvqol", "ueeownsyjfzo-nc", "uofvb-jkucbtt", "uzemcxqxs-pqltn", "wl-epwgx", "wzax-yydcvbsmpaz", "zfhbsojsbgm-m", "zuymbnejgoiz-gz"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"caow-kcvhcotfn", "gj-v", "khwi-xdy", "mjmt-qjvsbyjivktb", "s-ntdzwcvxtzfubku", "upqi-jxiqbqstxfcj", "wl-bqbdjvnhtemv", "xk-gtg", "correct", "avz-heybeq", "ber-bocksgcyp", "correct", "biscdpubfopn-uefo", "correct", "cexgymfyjymj-rdygaswha", "correct", "duhjre-jcintizuuitenwvzvxmbbbo", "ehwd", "ehpctscdzzq-ftrl", "fysfoigy-rmwc", "gim-inmqitdjvmy", "correct", "grmumykyyappdgjnjv-gqsy", "correct", "correct", "jkumsj-ht", "correct", "correct", "kdbfbamciasvcygsnedm-zysfn", "lgna-gxchhpc", "ln-aivz", "correct", "mwiszcrwjvi-vptu", "odvnjfugynn-oeyyiq", "correct", "poxj-tegdqceg", "pp-isrcxsbj", "pzcmvi-awjs", "pz-pap", "correct", "roqsliog-mug", "temlv-zoo", "uhan-vurgzktghvqol", "correct", "uofv-bjkucbtt", "uzemcxqxsp-qltn", "wlep-wgx", "wza-xyydcvbsmpaz", "zfhbsojsbg-mm", "zuymbnejgo-izgz"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> dictionary = {"pd o p d", "prbc htbq", "uu qvf sx r qqp", "wmo r bwqa", "gab acsg s in vtyl ds", "l iks q xld pcx hi a", "h gdp", "jw c a fy", "azm wlvg jo", "iib qhp mcqz u d jsx ni", "jar wd pcrr kv sy y", "v dim ce f pekx nn e", "we u mwu", "am uek p q km", "a ooe uj xjw ploy p", "loea dh io pis jur bl l jei cfb", "opv h vr erfm", "jiae ipap nron hkb", "p vg dat rrbr", "dvii ydl b uxw", "rd urb uv j pmud z", "mgp c koo wll eok sd yey yo", "z lhn rgq xdfx cv", "yboh yfv f fl i ygn e lm ntm", "tmxv id gkc qzp ddwu", "er tjys r brrl l", "q yjrm vut ly zxiz", "qeux evu qick nc ps", "ksp mbt fw", "o cag plyk sw tkgf dgtc", "f e lmy b hukc ar", "fsxg fd xd u uz jik", "tm qtx grqe", "zb kyv", "d dzq y u ujuo dwju isi", "s bq al lme", "ncpl gkcm", "j t xsv rx nldp vxau", "deh rfnd", "omb dr qu qyay rev", "yd sxeo", "wyfc a og", "cse jjz ggl xmmf ji", "i u a v gztp", "gbkc ykc a oz", "a fdgz uvo pott mn wkan", "jj vjcb ty iiwn oc ias", "izs z i b tpgp", "zv barg kfw koeq sj j", "lp fute u opyg d v"};
    vector<string> candidates = {"-jiaeipapnronhkb", "-lpfuteuopygdv", "-ncplgkcm", "-weumwu", "a-zmwlvgjo", "afdgzuvopottm-nwkan", "amuekpq-km", "aooeujxjwp-loyp", "csejjzgglxmmfji-", "dd-zqyuujuodwjuisi", "dehrf-nd", "dvii-ydlbuxw", "ertjysrbrrl-l", "f-elmybhukcar", "fsxgf-dxduuzjik", "gabacsgsinvtylds-", "gbkcy-kcaoz", "hg-dp", "iibqhpmcqz-udjsxni", "iuavgztp-", "izszib-tpgp", "jarwdpcrrkvs-yy", "jjvjcbtyiiwnocias-", "jtxsvrxnl-dpvxau", "jwc-afy", "kspm-btfw", "liksqx-ldpcxhia", "loe-adhiopisjurblljeicfb", "mgpckoowlleoks-dyeyyo", "o-cagplykswtkgfdgtc", "ombdrq-uqyayrev", "opvhvr-erfm", "p-vgdatrrbr", "pdop-d", "prbc-htbq", "qeux-evuqickncps", "qyjr-mvutlyzxiz", "rdurbuvj-pmudz", "sbqal-lme", "tmqtxgrq-e", "tmxvidgkcqzpddw-u", "uuqvfsxr-qqp", "v-dimcefpekxnne", "wmorbwq-a", "wyfca-og", "y-dsxeo", "ybohyfvffliygnelm-ntm", "z-vbargkfwkoeqsjj", "zbk-yv", "zlh-nrgqxdfxcv"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jiae-ipapnronhkb", "lp-futeuopygdv", "ncpl-gkcm", "we-umwu", "azm-wlvgjo", "afdgzuvopott-mnwkan", "correct", "aooeujxjw-ployp", "csejjzgglxmmf-ji", "d-dzqyuujuodwjuisi", "deh-rfnd", "correct", "correct", "correct", "fsxg-fdxduuzjik", "gabacsgsinvtyl-ds", "gbkc-ykcaoz", "h-gdp", "correct", "iuav-gztp", "correct", "jarwdpcrrkv-syy", "jjvjcbtyiiwnoc-ias", "jtxsvrx-nldpvxau", "correct", "ksp-mbtfw", "liksq-xldpcxhia", "loea-dhiopisjurblljeicfb", "mgpckoowlleok-sdyeyyo", "correct", "ombdr-quqyayrev", "correct", "correct", "correct", "correct", "correct", "qyjrm-vutlyzxiz", "correct", "correct", "tmqtx-grqe", "tmxvidgkcqzp-ddwu", "correct", "correct", "wmor-bwqa", "correct", "yd-sxeo", "correct", "zv-bargkfwkoeqsjj", "zb-kyv", "zlhn-rgqxdfxcv"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> dictionary = {"ksht vq gi gi fbmv pqpa", "hmr f jmy", "k e evcc y ykn x xqlr", "l f ye s qu hk", "bxd zc wqyq tqa ms", "dz dol o xvai nb", "n aga rrba a qu tvyo i", "rt j ldjr rh lnv en ptb al", "mwt x", "tsv sc tkmf dsml lyu", "vmiz f j d scpp uvk sxlp nlir", "a nnfg c", "ma x pxzp lk e ab x ao", "mpl kfas zuv rfma lgoq ov r", "fzzp e cxh d j sv e", "xya vk", "rxi h u b", "eby vvnx dg ocmx pin", "mkld edtn fl s win ljoi", "w vyvm", "fe xgad avch cmy meww", "ds s iicc fcj l yvjq n", "gya ov dz yyt jy wskw", "u uxr grk", "hav rtof eue", "rkvv mp lyqv", "xzjm evvc", "lel xe dlnr", "pvd tfy nfx vu rdld atle bw", "ibok jpy na gbgt lb", "udio bqn rj", "u drw k zwbz jbv s fdo ni ht mkq", "ztrc d y ftnu", "mb zckw vbvv kw axq", "nfpa cqbl", "sthc g nzxv vfw f fjf by", "ow jx jkqs eov cwc lhn", "amv bekx", "hoix ds ns ff", "qv t stdu cvf", "aqf xan t ngga", "vs yll so bex s qwm", "gza mg", "mz k bzy penm k", "wfgf hp hqj veq b jzct ol", "t vkj fd n d pg pvpq vv kdu bied", "i za whhb rbd lq vh z yqe", "n gig a kjn", "smtx rbga", "n vizb f s a z mp cmsy"};
    vector<string> candidates = {"-annfgc", "-udrwkzwbzjbvsfdonihtmkq", "-wvyvm", "a-mvbekx", "aqfxant-ngga", "bxdzcwqyq-tqams", "dssiiccfcjlyvjqn-", "dzdoloxvainb-", "ebyvvnxdgocm-xpin", "fexgadavchcmy-meww", "fzzpec-xhdjsve", "gyaovdzyytjywsk-w", "gza-mg", "havrt-ofeue", "hmrfjmy-", "hoixdsn-sff", "ibokjpynagbgt-lb", "izawhhbrbdlqv-hzyqe", "k-shtvqgigifbmvpqpa", "keevccyyknxxq-lr", "l-fyesquhk", "lelxe-dlnr", "m-wtx", "maxpxzplkea-bxao", "mbzckwvbv-vkwaxq", "mkldedtnflswinljoi-", "mplkfaszuvrf-malgoqovr", "mzkbzypenm-k", "nagarrbaaqutvyo-i", "nfpac-qbl", "ngigak-jn", "nvizbfsazmpcms-y", "owj-xjkqseovcwclhn", "pvdtfynfxvurdldatl-ebw", "qvtstd-ucvf", "rk-vvmplyqv", "rtjldjrr-hlnvenptbal", "rxih-ub", "smt-xrbga", "sthcgnzxvvfwffj-fby", "ts-vsctkmfdsmllyu", "tvkjfdndpgpvpqv-vkdubied", "udiobqn-rj", "uu-xrgrk", "vmizfjdscpp-uvksxlpnlir", "vsyllsobexsqwm-", "wfgfhphqjveqbj-zctol", "xy-avk", "xzjm-evvc", "ztr-cdyftnu"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a-nnfgc", "u-drwkzwbzjbvsfdonihtmkq", "w-vyvm", "amv-bekx", "correct", "correct", "dssiiccfcjlyvjq-n", "dzdoloxvai-nb", "ebyvvnxdgocmx-pin", "correct", "fzzpe-cxhdjsve", "gyaovdzyytjy-wskw", "correct", "hav-rtofeue", "hmrf-jmy", "hoixds-nsff", "correct", "izawhhbrbdlq-vhzyqe", "ksht-vqgigifbmvpqpa", "keevccyyknx-xqlr", "correct", "correct", "mwt-x", "maxpxzplke-abxao", "mbzckwvbvv-kwaxq", "mkldedtnflswin-ljoi", "mplkfaszuv-rfmalgoqovr", "correct", "correct", "nfpa-cqbl", "ngiga-kjn", "nvizbfsazmp-cmsy", "ow-jxjkqseovcwclhn", "pvdtfynfxvurdldatle-bw", "qvtstdu-cvf", "rkvv-mplyqv", "rtjldjr-rhlnvenptbal", "correct", "smtx-rbga", "sthcgnzxvvfwffjf-by", "tsv-sctkmfdsmllyu", "tvkjfdndpgpvpq-vvkdubied", "correct", "u-uxrgrk", "correct", "vsyllsobexs-qwm", "wfgfhphqjveqb-jzctol", "xya-vk", "correct", "ztrc-dyftnu"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> dictionary = {"ehd aal xl mx hna xdcv", "isal gnjs mx gir", "mfsb db rwi", "oi uu swo ijs fe", "ohsx x", "mkn k auf u ypni jcmk uhf", "ozpv izvk xzgg", "dmeu sv wfd xey ji yvmr", "k qo n sfy jhvx yxnp ek", "idc qqsh j ew ax", "rxc t mb bg bqq nzc eg", "w vdb cp", "ggi nm ct dw zx ajt ua p i", "bvu e fkj oy ysdw qs", "p gwn cnja cqwj qp", "u zip o vk svqj ab", "iut c sx", "cfrq dar oztf by", "ihg jybd gzqp w sl e c", "wqey c oak aa foyw", "zslj wjo ehso y", "yg hz a", "vmrq aam kad p", "g sbt r hbrf", "sy ec hpt e qlwv b", "w jm nky rbh", "yn m u m qafy qgjq me pgo", "tosr qnla", "m p dix y v n a m v", "tjz whg h km khgm ob", "g efte e xviw sft m", "mi w", "resw zjzm i utgs v", "btyq ch", "mq dno cf svw yx w yx", "io eft u", "ebc xkzc otdb", "nxx es", "cpj oq dw", "wvgj zy ps zyh oq", "airy lvsx", "l nm z q ujtv lac cr r gn ref", "hybj yp", "kk prq wm ykaw fns c s q", "vrq adj pe mef nf ik kv", "ry um bjjg jq beh", "jd tx nfm bf bzu chzs byww", "e wuni l qpk mg fdz", "rz i h jo rvhc", "w yp up vh tqu tv f ks phax zbv"};
    vector<string> candidates = {"-airylvsx", "-kkprqwmykawfnscsq", "-mfsbdbrwi", "-miw", "-ohsxx", "-uzipovksvqjab", "bt-yqch", "bvuefkjoyysdw-qs", "c-pjoqdw", "cfrqd-aroztfby", "dmeus-vwfdxeyjiyvmr", "ebcxkz-cotdb", "ehdaalxlmxhnax-dcv", "ewunilqpk-mgfdz", "gefteexviws-ftm", "gginmctdw-zxajtuapi", "gsbtr-hbrf", "hybjy-p", "i-utcsx", "idc-qqshjewax", "ihgjybdgzqpwslec-", "ioeftu-", "isalgnjs-mxgir", "jdtxn-fmbfbzuchzsbyww", "kqons-fyjhvxyxnpek", "lnmzqujtvl-accrrgnref", "mk-nkaufuypnijcmkuhf", "mpdixy-vnamv", "mqdn-ocfsvwyxwyx", "nx-xes", "o-zpvizvkxzgg", "oiuusw-oijsfe", "p-gwncnjacqwjqp", "r-xctmbbgbqqnzceg", "res-wzjzmiutgsv", "ryumb-jjgjqbeh", "rzih-jorvhc", "syechpt-eqlwvb", "tjzwhghkmkhgm-ob", "tosrqnl-a", "vmrqaamkad-p", "vrqadjpemefnfik-kv", "wjmnkyrbh-", "wqeycoak-aafoyw", "wvdb-cp", "wvgj-zypszyhoq", "wypupvhtqu-tvfksphaxzbv", "y-ghza", "ynmumqafy-qgjqmepgo", "zsljwj-oehsoy"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"airy-lvsx", "kk-prqwmykawfnscsq", "mfsb-dbrwi", "mi-w", "ohsx-x", "u-zipovksvqjab", "btyq-ch", "correct", "cpj-oqdw", "cfrq-daroztfby", "dmeu-svwfdxeyjiyvmr", "ebcxkzc-otdb", "ehdaalxlmxhna-xdcv", "correct", "gefteexviw-sftm", "correct", "correct", "hybj-yp", "iut-csx", "correct", "ihgjybdgzqpwsle-c", "ioeft-u", "correct", "jdtx-nfmbfbzuchzsbyww", "kqon-sfyjhvxyxnpek", "lnmzqujtv-laccrrgnref", "mkn-kaufuypnijcmkuhf", "correct", "mqdno-cfsvwyxwyx", "nxx-es", "ozpv-izvkxzgg", "oiuuswo-ijsfe", "correct", "rxc-tmbbgbqqnzceg", "resw-zjzmiutgsv", "ryum-bjjgjqbeh", "correct", "correct", "correct", "tosr-qnla", "correct", "correct", "wjmnky-rbh", "correct", "correct", "correct", "correct", "yg-hza", "correct", "zsljwjo-ehsoy"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> dictionary = {"zsx kd ds jply rf", "auca wb ill", "kvqm kpd p kqi xpbk j", "cqf ccr ewq", "srl vu m u d b", "h qae qzge", "jdn qqjf y", "zpa hbr", "d uft ctsm qjg", "l hgcp ik twuy bsi nlmu iyx", "cjjz jn td zg", "h bd q hi", "obsr kci hjdm h yar zsq q xyr hxb", "izq iibd yuh tgx nkq", "cjgd wfns", "ohc bn duc", "pydv a geki s bo avdi wd", "zygp gqt p", "xq pqqb ufoe", "cvm yamq moqj vl zoig w", "ahz b lf ixjv d", "qpg ven d", "m cbxz yf tv djf", "kti wacd uvgb kmr ew r", "ng tfb unw ndl", "qruv ctw a", "d hk v pcxh zoxy", "etbo wabk", "x hxiu n", "wp qq u dvpi tclh ac l", "f am brs lk uss uyb pg", "dtfx h ict if koe jhj", "nl shp yeji b rw vrg", "bz qfnc u", "t ceoy eb ss myoe zaaj z jey", "j d uju mb irvu", "anmo emjs syam ta bfiy kk", "gl ej egla tha jbug", "zk u sz raij d", "kw lbya atdb pd", "no id hqum u wny qcy", "phv nv l f oq m", "b xup tnq fziw yth sn", "pvc hnr oky lzj", "ew wtwt gyty s uu pfe kif my", "t cw fsau", "esk gqtd o yh jbx wed fl z", "vvr hqw wo gxwm", "lei akz nzz bumb", "bc hlmw"};
    vector<string> candidates = {"-duftctsmqjg", "-leiakznzzbumb", "-xhxiun", "-zpahbr", "ahzbl-fixjvd", "anmo-emjssyamtabfiykk", "aucawb-ill", "bchlmw-", "bxuptnqfziwyth-sn", "bzq-fncu", "c-vmyamqmoqjvlzoigw", "cjg-dwfns", "cjjzjn-tdzg", "cqfccre-wq", "dhkvpcxhzox-y", "dtfx-hictifkoejhj", "eskgqtdoyhjbx-wedflz", "etbowab-k", "ewwtwtgytysuupfe-kifmy", "fambrslkuss-uybpg", "glejegl-athajbug", "hbdqhi-", "hq-aeqzge", "izqiibd-yuhtgxnkq", "jd-nqqjfy", "jdujumb-irvu", "ktiwacduvgbkmr-ewr", "kv-qmkpdpkqixpbkj", "kwlbya-atdbpd", "lhgcpiktwuybsi-nlmuiyx", "mcbx-zyftvdjf", "ngtf-bunwndl", "nlshpyejibrwvrg-", "no-idhqumuwnyqcy", "o-hcbnduc", "obsr-kcihjdmhyarzsqqxyrhxb", "ph-vnvlfoqm", "pvchnrok-ylzj", "pydvageki-sboavdiwd", "qpgv-end", "qruvctw-a", "srlvumu-db", "tceoyebssmyo-ezaajzjey", "tcwfsau-", "vvrhqwwo-gxwm", "wpqqudvpit-clhacl", "xqpq-qbufoe", "zku-szraijd", "zsxkddsjp-lyrf", "zygpgqt-p"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d-uftctsmqjg", "lei-akznzzbumb", "x-hxiun", "zpa-hbr", "ahzb-lfixjvd", "correct", "correct", "bc-hlmw", "correct", "bz-qfncu", "cvm-yamqmoqjvlzoigw", "cjgd-wfns", "correct", "cqfccr-ewq", "dhkvpcxh-zoxy", "correct", "correct", "etbo-wabk", "correct", "correct", "glejegla-thajbug", "hbdq-hi", "h-qaeqzge", "correct", "jdn-qqjfy", "correct", "correct", "kvqm-kpdpkqixpbkj", "correct", "correct", "mcbxz-yftvdjf", "ngtfb-unwndl", "nlshpyejibrw-vrg", "correct", "ohc-bnduc", "correct", "phv-nvlfoqm", "pvchnroky-lzj", "correct", "qpg-vend", "correct", "correct", "tceoyebssmyoe-zaajzjey", "tcw-fsau", "correct", "wpqqudvpi-tclhacl", "xq-pqqbufoe", "correct", "zsxkdds-jplyrf", "correct"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> dictionary = {"syl la ble", "dic tion a ry", "mole"};
    vector<string> candidates = {"mo-le", "syl-lable"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"mole", "correct"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> dictionary = {"syl la ble", "dic tion a ry", "mole"};
    vector<string> candidates = {"dictio-nary", "syll-able"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"diction-ary", "syl-lable"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> dictionary = {"syl la ble", "dic tion a ry", "mole"};
    vector<string> candidates = {"dictionary-", "-syllable"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dictiona-ry", "syl-lable"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> dictionary = {"zsx kd ds jply rf", "auca wb ill", "kvqm kpd p kqi xpbk j", "cqf ccr ewq", "srl vu m u d b", "h qae qzge", "jdn qqjf y", "zpa hbr", "d uft ctsm qjg", "l hgcp ik twuy bsi nlmu iyx", "cjjz jn td zg", "h bd q hi", "obsr kci hjdm h yar zsq q xyr hxb", "izq iibd yuh tgx nkq", "cjgd wfns", "ohc bn duc", "pydv a geki s bo avdi wd", "zygp gqt p", "xq pqqb ufoe", "cvm yamq moqj vl zoig w", "ahz b lf ixjv d", "qpg ven d", "m cbxz yf tv djf", "kti wacd uvgb kmr ew r", "ng tfb unw ndl", "qruv ctw a", "d hk v pcxh zoxy", "etbo wabk", "x hxiu n", "wp qq u dvpi tclh ac l", "f am brs lk uss uyb pg", "dtfx h ict if koe jhj", "nl shp yeji b rw vrg", "bz qfnc u", "t ceoy eb ss myoe zaaj z jey", "j d uju mb irvu", "anmo emjs syam ta bfiy kk", "gl ej egla tha jbug", "zk u sz raij d", "kw lbya atdb pd", "no id hqum u wny qcy", "phv nv l f oq m", "b xup tnq fziw yth sn", "pvc hnr oky lzj", "ew wtwt gyty s uu pfe kif my", "t cw fsau", "esk gqtd o yh jbx wed fl z", "vvr hqw wo gxwm", "lei akz nzz bumb", "bc hlmw"};
    vector<string> candidates = {"-duftctsmqjg", "-leiakznzzbumb", "-xhxiun", "-zpahbr", "ahzbl-fixjvd", "anmo-emjssyamtabfiykk", "aucawb-ill", "bchlmw-", "bxuptnqfziwyth-sn", "bzq-fncu", "c-vmyamqmoqjvlzoigw", "cjg-dwfns", "cjjzjn-tdzg", "cqfccre-wq", "dhkvpcxhzox-y", "dtfx-hictifkoejhj", "eskgqtdoyhjbx-wedflz", "etbowab-k", "ewwtwtgytysuupfe-kifmy", "fambrslkuss-uybpg", "glejegl-athajbug", "hbdqhi-", "hq-aeqzge", "izqiibd-yuhtgxnkq", "jd-nqqjfy", "jdujumb-irvu", "ktiwacduvgbkmr-ewr", "kv-qmkpdpkqixpbkj", "kwlbya-atdbpd", "lhgcpiktwuybsi-nlmuiyx", "mcbx-zyftvdjf", "ngtf-bunwndl", "nlshpyejibrwvrg-", "no-idhqumuwnyqcy", "o-hcbnduc", "obsr-kcihjdmhyarzsqqxyrhxb", "ph-vnvlfoqm", "pvchnrok-ylzj", "pydvageki-sboavdiwd", "qpgv-end", "qruvctw-a", "srlvumu-db", "tceoyebssmyo-ezaajzjey", "tcwfsau-", "vvrhqwwo-gxwm", "wpqqudvpit-clhacl", "xqpq-qbufoe", "zku-szraijd", "zsxkddsjp-lyrf", "zygpgqt-p"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d-uftctsmqjg", "lei-akznzzbumb", "x-hxiun", "zpa-hbr", "ahzb-lfixjvd", "correct", "correct", "bc-hlmw", "correct", "bz-qfncu", "cvm-yamqmoqjvlzoigw", "cjgd-wfns", "correct", "cqfccr-ewq", "dhkvpcxh-zoxy", "correct", "correct", "etbo-wabk", "correct", "correct", "glejegla-thajbug", "hbdq-hi", "h-qaeqzge", "correct", "jdn-qqjfy", "correct", "correct", "kvqm-kpdpkqixpbkj", "correct", "correct", "mcbxz-yftvdjf", "ngtfb-unwndl", "nlshpyejibrw-vrg", "correct", "ohc-bnduc", "correct", "phv-nvlfoqm", "pvchnroky-lzj", "correct", "qpg-vend", "correct", "correct", "tceoyebssmyoe-zaajzjey", "tcw-fsau", "correct", "wpqqudvpi-tclhacl", "xq-pqqbufoe", "correct", "zsxkdds-jplyrf", "correct"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> dictionary = {"zsx kd ds jply rf", "auca wb ill", "kvqm kpd p kqi xpbk j", "cqf ccr ewq", "srl vu m u d b", "h qae qzge", "jdn qqjf y", "zpa hbr", "d uft ctsm qjg", "l hgcp ik twuy bsi nlmu iyx", "cjjz jn td zg", "h bd q hi", "obsr kci hjdm h yar zsq q xyr hxb", "izq iibd yuh tgx nkq", "cjgd wfns", "ohc bn duc", "pydv a geki s bo avdi wd", "zygp gqt p", "xq pqqb ufoe", "cvm yamq moqj vl zoig w", "ahz b lf ixjv d", "qpg ven d", "m cbxz yf tv djf", "kti wacd uvgb kmr ew r", "ng tfb unw ndl", "qruv ctw a", "d hk v pcxh zoxy", "etbo wabk", "x hxiu n", "wp qq u dvpi tclh ac l", "f am brs lk uss uyb pg", "dtfx h ict if koe jhj", "nl shp yeji b rw vrg", "bz qfnc u", "t ceoy eb ss myoe zaaj z jey", "j d uju mb irvu", "anmo emjs syam ta bfiy kk", "gl ej egla tha jbug", "zk u sz raij d", "kw lbya atdb pd", "no id hqum u wny qcy", "phv nv l f oq m", "b xup tnq fziw yth sn", "pvc hnr oky lzj", "ew wtwt gyty s uu pfe kif my", "t cw fsau", "esk gqtd o yh jbx wed fl z", "vvr hqw wo gxwm", "lei akz nzz bumb", "bc hlmw"};
    vector<string> candidates = {"-duftctsmqjg", "-leiakznzzbumb", "-xhxiun", "-zpahbr", "ahzbl-fixjvd", "anmo-emjssyamtabfiykk", "aucawb-ill", "bchlmw-", "bxuptnqfziwyth-sn", "bzq-fncu", "c-vmyamqmoqjvlzoigw", "cjg-dwfns", "cjjzjn-tdzg", "cqfccre-wq", "dhkvpcxhzox-y", "dtfx-hictifkoejhj", "eskgqtdoyhjbx-wedflz", "etbowab-k", "ewwtwtgytysuupfe-kifmy", "fambrslkuss-uybpg", "glejegl-athajbug", "hbdqhi-", "hq-aeqzge", "izqiibd-yuhtgxnkq", "jd-nqqjfy", "jdujumb-irvu", "ktiwacduvgbkmr-ewr", "kv-qmkpdpkqixpbkj", "kwlbya-atdbpd", "lhgcpiktwuybsi-nlmuiyx", "mcbx-zyftvdjf", "ngtf-bunwndl", "nlshpyejibrwvrg-", "no-idhqumuwnyqcy", "o-hcbnduc", "obsr-kcihjdmhyarzsqqxyrhxb", "ph-vnvlfoqm", "pvchnrok-ylzj", "pydvageki-sboavdiwd", "qpgv-end", "qruvctw-a", "srlvumu-db", "tceoyebssmyo-ezaajzjey", "tcwfsau-", "vvrhqwwo-gxwm", "wpqqudvpit-clhacl", "xqpq-qbufoe", "zku-szraijd", "zsxkddsjp-lyrf", "zygpgqt-p"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d-uftctsmqjg", "lei-akznzzbumb", "x-hxiun", "zpa-hbr", "ahzb-lfixjvd", "correct", "correct", "bc-hlmw", "correct", "bz-qfncu", "cvm-yamqmoqjvlzoigw", "cjgd-wfns", "correct", "cqfccr-ewq", "dhkvpcxh-zoxy", "correct", "correct", "etbo-wabk", "correct", "correct", "glejegla-thajbug", "hbdq-hi", "h-qaeqzge", "correct", "jdn-qqjfy", "correct", "correct", "kvqm-kpdpkqixpbkj", "correct", "correct", "mcbxz-yftvdjf", "ngtfb-unwndl", "nlshpyejibrw-vrg", "correct", "ohc-bnduc", "correct", "phv-nvlfoqm", "pvchnroky-lzj", "correct", "qpg-vend", "correct", "correct", "tceoyebssmyoe-zaajzjey", "tcw-fsau", "correct", "wpqqudvpi-tclhacl", "xq-pqqbufoe", "correct", "zsxkdds-jplyrf", "correct"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> dictionary = {"syl la ble", "dic tion a ry", "mole"};
    vector<string> candidates = {"dictionary-", "-syllable"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dictiona-ry", "syl-lable"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> dictionary = {"z sx kd ds jply rf", "auca wb ill", "kvqm kpd p kqi xpbk j", "cqf ccr ew q", "srl vu m u d b", "h qae qzge", "jdn qqjf y", "zpa hbr", "d uft ctsm qjg", "l hgcp ik twuy bsi nlmu iyx", "cj jz jn td zg", "h bd q hi", "obsr kci hjdm h yar zsq q xyr hxb", "izq iibd yuh tgx nkq", "cjgd wfns", "ohc bn duc", "pydv a geki s bo a v di wd", "zygp gqt p", "xq pqqb ufoe", "cvm yamq moqj vl zoig w", "ahz b lf ixjv d", "qpg ven d", "m cbxz yf tv djf", "kti wacd uvgb kmr ew r", "ng tfb unw ndl", "qruv ctw a", "d hk v pcxh zoxy", "etbo wabk", "x hxiu n", "wp qq u dvpi tclh ac l", "f am brs lk uss uyb pg", "dtfx h ict if koe jhj", "nl shp yeji b rw vrg", "bz qfnc u", "t ceoy eb ss myoe zaaj z jey", "j d uju mb irvu", "anmo emjs syam ta bfiy kk", "gl ej egla tha jbug", "zk u sz raij d", "kw lbya atdb pd", "no id hqum u wny qcy", "phv nv l f oq m", "b xup tnq fziw yth sn", "pvc hnr oky lzj", "ew wtwt gyty s uu pfe kif my", "t cw fsau", "esk gqtd o yh jbx wed fl z", "vvr hqw wo gxwm", "lei akz nzz bumb", "bc hlmw"};
    vector<string> candidates = {"-duftctsmqjg", "-leiakznzzbumb", "-xhxiun", "-zpahbr", "ahzbl-fixjvd", "anmo-emjssyamtabfiykk", "aucawb-ill", "bchlmw-", "bxuptnqfziwyth-sn", "bzq-fncu", "c-vmyamqmoqjvlzoigw", "cjg-dwfns", "cjjzjn-tdzg", "cqfccre-wq", "dhkvpcxhzox-y", "dtfx-hictifkoejhj", "eskgqtdoyhjbx-wedflz", "etbowab-k", "ewwtwtgytysuupfe-kifmy", "fambrslkuss-uybpg", "glejegl-athajbug", "hbdqhi-", "hq-aeqzge", "izqiibd-yuhtgxnkq", "jd-nqqjfy", "jdujumb-irvu", "ktiwacduvgbkmr-ewr", "kv-qmkpdpkqixpbkj", "kwlbya-atdbpd", "lhgcpiktwuybsi-nlmuiyx", "mcbx-zyftvdjf", "ngtf-bunwndl", "nlshpyejibrwvrg-", "no-idhqumuwnyqcy", "o-hcbnduc", "obsr-kcihjdmhyarzsqqxyrhxb", "ph-vnvlfoqm", "pvchnrok-ylzj", "pydvageki-sboavdiwd", "qpgv-end", "qruvctw-a", "srlvumu-db", "tceoyebssmyo-ezaajzjey", "tcwfsau-", "vvrhqwwo-gxwm", "wpqqudvpit-clhacl", "xqpq-qbufoe", "zku-szraijd", "zsxkddsjp-lyrf", "zygpgqt-p"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d-uftctsmqjg", "lei-akznzzbumb", "x-hxiun", "zpa-hbr", "ahzb-lfixjvd", "correct", "correct", "bc-hlmw", "correct", "bz-qfncu", "cvm-yamqmoqjvlzoigw", "cjgd-wfns", "correct", "cqfccr-ewq", "dhkvpcxh-zoxy", "correct", "correct", "etbo-wabk", "correct", "correct", "glejegla-thajbug", "hbdq-hi", "h-qaeqzge", "correct", "jdn-qqjfy", "correct", "correct", "kvqm-kpdpkqixpbkj", "correct", "correct", "mcbxz-yftvdjf", "ngtfb-unwndl", "nlshpyejibrw-vrg", "correct", "ohc-bnduc", "correct", "phv-nvlfoqm", "pvchnroky-lzj", "correct", "qpg-vend", "correct", "correct", "tceoyebssmyoe-zaajzjey", "tcw-fsau", "correct", "wpqqudvpi-tclhacl", "xq-pqqbufoe", "correct", "zsxkdds-jplyrf", "correct"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> dictionary = {"syl la ble", "dic tion a ry", "mole"};
    vector<string> candidates = {"dictio-nary", "syll-able"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"diction-ary", "syl-lable"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> dictionary = {"a a a a aa a a a a"};
    vector<string> candidates = {"aaaaa-aaaaa"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaaa-aaaaaa"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> dictionary = {"aaaa"};
    vector<string> candidates = {"-aaaa"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaaa"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> dictionary = {"a b c d e c g h i j k l m n o p q r s t u v w x y", "a b c d c f g h i j k l m n o p q r s t u v w x y", "a b c c e f g h i j k l m n o p q r s t u v w x y", "a c c d e f g h i j k l m n o p q r s t u v w x y", "c b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x b", "a b c d e f g h i j k l m n o p q r s t u v w b y", "a b c d e f g h i j k l m n o p q r s t u v b x y", "a b c d e f g h i j k l m n o p q r s t u b w x y", "a b c d e f g h i j k l m n o p q r s t b v w x y", "a b c d e f g h i j k l m n o p q r s b u v w x y", "a b c d e f g h i j k l m n o p q r b t u v w x y", "a b c d e f g h i j k l m n o p q b s t u v w x y", "a b c d e f g h i j k l m n o p b r s t u v w x y", "a b c d e f g h i j k l m n o b q r s t u v w x y", "a b c d e f g h i j k l m n b p q r s t u v w x y", "a b c d e f g h i j k l m b o p q r s t u v w x y", "a b c d e f g h i j k l b n o p q r s t u v w x y", "a b c d e f g h i j k b m n o p q r s t u v w x y", "a b c d e f g h i j b l m n o p q r s t u v w x y", "a b c d e f g h i b k l m n o p q r s t u v w x y", "a b c d e f g h b j k l m n o p q r s t u v w x y", "a b c d e f g b i j k l m n o p q r s t u v w x y", "a b c d e f b h i j k l m n o p q r s t u v w x y", "a b c d e b g h i j k l m n o p q r s t u v w x y", "a b c d b f g h i j k l m n o p q r s t u v w x y", "a b c b e f g h i j k l m n o p q r s t u v w x y", "a b b d e f g h i j k l m n o p q r s t u v w x y", "b b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x a", "a b c d e f g h i j k l m n o p q r s t u v w a y", "a b c d e f g h i j k l m n o p q r s t u v a x y", "a b c d e f g h i j k l m n o p q r s t u a w x y", "a b c d e f g h i j k l m n o p q r s t a v w x y", "a b c d e f g h i j k l m n o p q r s a u v w x y", "a b c d e f g h i j k l m n o p q r u t u v w x y", "a b c d e f g h i j k l m n o p q t s t u v w x y", "a b c d e f g h i j k l m n o p s r s t u v w x y", "a b c d e f g h i j k l m n o r q r s t u v w x y", "a b c d e f g h i j k l m n q p q r s t u v w x y", "a b c d e f g h i j k l m p o p q r s t u v w x y", "a b c d e f g h i j k l o n o p q r s t u v w x y", "a b c d e f g h i j k n m n o p q r s t u v w x y", "a b c f e f g h i j m l m n o p q r s t u v w x y", "a b c d e f g h i l k l m n o p q r s t u v w x y", "a b f d e f g h k j k l m n o p q r s t u v w x y", "a b c d e f g j i j k l m n o p q r s t u v w x y", "a b c d e f h h i j k l m n o p q r s t u v w x y", "a b c d e g g h i j k l m n o p q r s t u v w x y", "a b c d f f g h i j k l m n o p q r s t u v w x y"};
    vector<string> candidates = {"-abcdecghijklmnopqrstuvwxy", "a-bcdecghijklmnopqrstuvwxy", "ab-cdecghijklmnopqrstuvwxy", "abc-decghijklmnopqrstuvwxy", "abcd-ecghijklmnopqrstuvwxy", "abcde-cghijklmnopqrstuvwxy", "abcdec-ghijklmnopqrstuvwxy", "abcdecg-hijklmnopqrstuvwxy", "abcdecgh-ijklmnopqrstuvwxy", "abcdecghi-jklmnopqrstuvwxy", "abcdecghij-klmnopqrstuvwxy", "abcdecghijk-lmnopqrstuvwxy", "abcdecghijklmnopqrs-tuvwxy", "abcdecghijklmnopqrst-uvwxy"};
    bloggoHyphenate* pObj = new bloggoHyphenate();
    clock_t start = clock();
    vector<string> result = pObj->correct(dictionary, candidates);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a-bcdecghijklmnopqrstuvwxy", "correct", "correct", "correct", "correct", "correct", "correct", "correct", "correct", "correct", "correct", "correct", "correct", "correct"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=5860&pm=3019
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
vector<string> tokenize(string s, string ch) { 
  vector<string> ret; 
  for( int p = 0, p2; p < s.size(); p = p2+1 ) { 
    p2 = s.find_first_of(ch, p); 
    if( p2 == -1 ) p2 = s.size(); 
    if( p2-p > 0 ) ret.push_back( s.substr(p, p2-p) ); 
  } 
  return ret; 
} 
 
class bloggoHyphenate { 
public: 
vector <string> correct(vector <string> a, vector <string> b) { 
  int i, j, k, x, y, z, n; 
  vector <string> ret; 
 
  VS v(a.size()); 
  for( i = 0; i < a.size(); i++ ) { 
    for( j = 0; j < a[i].size(); j++ ) if( a[i][j] != ' ' ) 
      v[i] += a[i][j]; 
  } 
  for( i = 0; i < b.size(); i++ ) { 
    string s; 
    for( j = 0; j < b[i].size(); j++ ) if( b[i][j] != '-' ) 
      s += b[i][j]; 
    j = find(v.begin(), v.end(), s) - v.begin(); 
    VS t = tokenize(a[j], " "); 
    if( t.size() == 1 ) {ret.push_back(v[j]); continue;} 
    y = b[i].find('-'); 
    x = 0; 
    z = 1000; 
    for( k = 0; k < t.size()-1; k++ ) { 
      x += t[k].size(); 
      if( abs(x-y) < abs(z-y) ) z = x; 
    } 
    if( z == y ) {ret.push_back("correct"); continue;} 
    ret.push_back(s.substr(0, z) + '-' + s.substr(z)); 
  } 
  return ret; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/