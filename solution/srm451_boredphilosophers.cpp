/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10456
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

class BoredPhilosophers {
public:
    vector<int> simulate(vector<string> text, int N);
};

vector<int> BoredPhilosophers::simulate(vector<string> text, int N) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> text = {"hello world"};
    int N = 2;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> text = {"aaa bbb aaa bbb aaa aaa"};
    int N = 4;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 3, 3};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> text = {"remember", " t", "o concatenate ", "the", " ", "text"};
    int N = 1;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> text = {"a a a a a a a b a a b a a a b b a b a a a b a b"};
    int N = 6;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 7, 11, 14, 17};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> text = {"p y b w e p i o f f f o a i c v k c l c e w x b i ", "z b t q k w m v e s c c i j p r q z o i c k v q c ", "l l m k w f p k r i r l g r i i k f d w d v w v p ", "w p g e f d u n n g l i h q t r n p s z q a l u u ", "o k u z f d d w w v v n x e u f i i q j z x e k i ", "m q h p c e b m x j a x q e n i f z n d b b d j v ", "k l d b z e s l u b c y x o a z b e q h i u z m q ", "m r u p v k k o k j y f p e r j g q h u u s b p y ", "g w y z q i u g b l l c v c j w r i h j h g u m m ", "l v d b t v u k q p f m h v n v i n j d s t s s e ", "u g i n t r h j w n y o i g p n x j v j z t j e c ", "e x t s e x r w g g f v z x v d q f c u u m h x x ", "t s f p c f k y o q l i p x d f g w q l z s t s m ", "p h j c y a b z s w d k m r j h d e n e u s t i o ", "c h p b y v i m g r n f k d w x q g c l b l z x a ", "q s r e z d s k c m u j c t q x e l i j g v z m w ", "w x p b j p v k n u w l w o q j g h e m o q p i b ", "l o g v g x q g i r p q g b n h f q j t n u g g j ", "n c b i j t z r l k f x a y w z h t c c v x g s y ", "h r h l a v f l k r p x d v o w b q u i j a s s p ", "z h h l p h i z g v n a i t t q t i s v k q a p x ", "n h m h u y z m c e x m l y s j i n n h u q s i z ", "o q j n s n j z d p p t d b g e w w o b s q w t o ", "n g w a n k o c v z g u j k b c u o a i x v y b g ", "x h t y r x f n f b r b d v j u a w g v v b a g j ", "s c r f i i i x f k m a y t g j o s h d h c m u p ", "g a y x u j n j z l v x k x j v c j x k l s s g x ", "e x t i b f z d o c t c m v z v p g s e f i h j m ", "n o r a a h v q c u o o y y r h v f g e w i g v i ", "n s l k x p r u p o v n m s e u q b h u a y w c f ", "a f r m r e q u a m o b b z z q l b y j q v c a o ", "r j c x n w r u h g d x d y m j e q z n d m j u y ", "r f n i l f o n w q n h l m m w o f n z q u x e s ", "a q h p j w w c s s e b j g j t l n s o i z e a v ", "m v n y j n u w q x x f w x e m p z b z f l t d u ", "c s t d a u o l a t a l i v d a o i h q o g g b l ", "a z q f x d q i g y q u b k v n r p o e w t x o r ", "x c s l g e u f w d a n h i s p j d b g m l g a e ", "x s m x f w e j e f d u m e q v q a t j i y v g s ", "h a f i e v b y a y o l u c g y i k j u h l p l y ", "s v n x f c y g i v w a a n z y v g i o i t y h t ", "a y u s j h g s u x t a o z a u m e f p b i y m o ", "l a c s z p l f o x d x m r b m m b d e b j g b v ", "q z x i s w g z d d r l e s a t u e b s p i q f x ", "r g l k l z e u v t w s g s q m j v p b p g c z s ", "l m s h m t v e d s r l c y h u t v k g u y m x s ", "e n w c m a b f c v e h i g n m d q f b v h p i o ", "z n i g d s z y e t y u e f n c l u v k j s b i n ", "v u b z x n l x t k u z v h p r n x u j h h j x p ", "y w x h k y m i y g d b t m a i x q p e c h o i b"};
    int N = 50;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 552, 1196, 1245, 1246, 1245, 1244, 1243, 1242, 1241, 1240, 1239, 1238, 1237, 1236, 1235, 1234, 1233, 1232, 1231, 1230, 1229, 1228, 1227, 1226, 1225, 1224, 1223, 1222, 1221, 1220, 1219, 1218, 1217, 1216, 1215, 1214, 1213, 1212, 1211, 1210, 1209, 1208, 1207, 1206, 1205, 1204, 1203, 1202, 1201};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> text = {"a b c d e f g h i j k l m n o p q r s t u v w x y ", "z ba bb bc bd be bf bg bh bi bj bk bl bm bn bo bp ", "bq br bs bt bu bv bw bx by bz ca cb cc cd ce cf cg", " ch ci cj ck cl cm cn co cp cq cr cs ct cu cv cw c", "x cy cz da db dc dd de df dg dh di dj dk dl dm dn ", "do dp dq dr ds dt du dv dw dx dy dz ea eb ec ed ee", " ef eg eh ei ej ek el em en eo ep eq er es et eu e", "v ew ex ey ez fa fb fc fd fe ff fg fh fi fj fk fl ", "fm fn fo fp fq fr fs ft fu fv fw fx fy fz ga gb gc", " gd ge gf gg gh gi gj gk gl gm gn go gp gq gr gs g", "t gu gv gw gx gy gz ha hb hc hd he hf hg hh hi hj ", "hk hl hm hn ho hp hq hr hs ht hu hv hw hx hy hz ia", " ib ic id ie if ig ih ii ij ik il im in io ip iq i", "r is it iu iv iw ix iy iz ja jb jc jd je jf jg jh ", "ji jj jk jl jm jn jo jp jq jr js jt ju jv jw jx jy", " jz ka kb kc kd ke kf kg kh ki kj kk kl km kn ko k", "p kq kr ks kt ku kv kw kx ky kz la lb lc ld le lf ", "lg lh li lj lk ll lm ln lo lp lq lr ls lt lu lv lw", " lx ly lz ma mb mc md me mf mg mh mi mj mk ml mm m", "n mo mp mq mr ms mt mu mv mw mx my mz na nb nc nd ", "ne nf ng nh ni nj nk nl nm nn no np nq nr ns nt nu", " nv nw nx ny nz oa ob oc od oe of og oh oi oj ok o", "l om on oo op oq or os ot ou ov ow ox oy oz pa pb ", "pc pd pe pf pg ph pi pj pk pl pm pn po pp pq pr ps", " pt pu pv pw px py pz qa qb qc qd qe qf qg qh qi q", "j qk ql qm qn qo qp qq qr qs qt qu qv qw qx qy qz ", "ra rb rc rd re rf rg rh ri rj rk rl rm rn ro rp rq", " rr rs rt ru rv rw rx ry rz sa sb sc sd se sf sg s", "h si sj sk sl sm sn so sp sq sr ss st su sv sw sx ", "sy sz ta tb tc td te tf tg th ti tj tk tl tm tn to", " tp tq tr ts tt tu tv tw tx ty tz ua ub uc ud ue u", "f ug uh ui uj uk ul um un uo up uq ur us ut uu uv ", "uw ux uy uz va vb vc vd ve vf vg vh vi vj vk vl vm", " vn vo vp vq vr vs vt vu vv vw vx vy vz wa wb wc w", "d we wf wg wh wi wj wk wl wm wn wo wp wq wr ws wt ", "wu wv ww wx wy wz xa xb xc xd xe xf xg xh xi xj xk", " xl xm xn xo xp xq xr xs xt xu xv xw xx xy xz ya y", "b yc yd ye yf yg yh yi yj yk yl ym yn yo yp yq yr ", "ys yt yu yv yw yx yy yz za zb zc zd ze zf zg zh zi", " zj zk zl zm zn zo zp zq zr zs zt zu zv zw zx zy z", "z baa bab bac bad bae baf bag bah bai baj bak bal ", "bam ban bao bap baq bar bas bat bau bav baw bax ba", "y baz bba bbb bbc bbd bbe bbf bbg bbh bbi bbj bbk ", "bbl bbm bbn bbo bbp bbq bbr bbs bbt bbu bbv bbw bb", "x bby bbz bca bcb bcc bcd bce bcf bcg bch bci bcj ", "bck bcl bcm bcn bco bcp bcq bcr bcs bct bcu bcv bc", "w bcx bcy bcz bda bdb bdc bdd bde bdf bdg bdh bdi ", "bdj bdk bdl bdm bdn bdo bdp bdq bdr bds bdt bdu bd", "v bdw bdx bdy bdz bea beb bec bed bee bef beg beh ", "bei bej bek bel bem ben beo bep beq ber bes bet"};
    int N = 50;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {800, 799, 798, 797, 796, 795, 794, 793, 792, 791, 790, 789, 788, 787, 786, 785, 784, 783, 782, 781, 780, 779, 778, 777, 776, 775, 774, 773, 772, 771, 770, 769, 768, 767, 766, 765, 764, 763, 762, 761, 760, 759, 758, 757, 756, 755, 754, 753, 752, 751};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> text = {"aa ababaa c cbbcbc cabcbcb ba bccc ababb", "c cabcba caa ababaa c cbbcbc cabcbcb ba ", "bccc ababbc cabcba c bbcbab", "b aaaa cbccaaa bccc ababbc cabcba c bbcb", "ab cbcaca"};
    int N = 7;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 17, 18, 19, 20, 20, 20};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> text = {"bbbbaacacbbcaccaaabbccbcabcaca aacbcabaacbbbcaaaba", " ccaccbcaccacccaacb cccbccccbccccbbccccc bbbcccabb", "ccaacbbbcbbbaaaaaaabaacbaacacbabbbca ccbcbcabaabbc", "bcacbbabbbcbba acbcccaaabbacccbabcbccaaabbbbbbaccb", "cbaaabaaccb cacbabacacaaacacccaaccbbccabc aaabcccc", "ccbacbaaaacccbcabccbbabbabbbacacaabaccbb bacacaccb", "cacccaa baab ccabbbabbbbbcbabbabaccbcababbbacabaac", "bccbbaaccb abbaacbcbcabbbbb bcacccbbbcacccabaccccc", "acaacbbcacbbaccbabacac bcabbccabcacacaabbb ccbacba", "bbbcbcacbbbbccabcbcacbbabbacccaaabbccb caababc aca", "bcaaccacbcaccabbccaacbbcaabacbc cccaacabcccbaacabb", "cabbcbbbaaaabbcc cabbbaaacbbbabcaa caccaaaacccaabc", "ccbcbabbabccbacbcbacbbcabcbccbacab cbacccccccbbcaa", "bcacccabbbccaaaaacb bbbbcbbbaabbcbacbcabbababbbbac", "bbc aaaccabaacabacaacbbaaaaa cabcaaccbaccabb cbbac", "abcbcbbbaa babacc acaccccacbaaacacbcabacaabbaacbbc", "abaa aabaaaacaacacbcaaccbcaaaababcacb bcababaaccaa", "bcbccbcbccbabcbabbcbcabcbaacc acbbcaacaabcabbbacab", "aacbabcccbaccbbcbacbaacca c bababacbaccbababccbabb", "aaacabcaaacaccacbabac aab a"};
    int N = 35;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> text = {"bccaccaaaaaaccacccacbcabacbbacacc abbbbbaccacbaabb", "bccaabacbabaccccb ccccccccbcccacabbacaccabababcccb", "bc babbcaabbbacbbcabaaaccaaabcbcaabca aacbbcbaaacb", "cac acbacabacabacacacbacccbbabacbbbbcaabaaabaacaaa", "caaa acbabacbbbaac bcaacbccbbbacbbcaaacacbacaccacc", "accaaaccccaabacccb bacacbccabbccbbaaccaacccbbabcca", " bcbccabcabbbcbbbabbcaabbaabccbcaabbab bcbaaaccbbb", "abaaaaacabbaacbbabbbabbcccabbcabaaabc cbabbcbbaabb", "ccabccaccaaabbabbbbcbaababbcabacacc bbbaaaabbbbbbc", "abbaccaccba aabcbcbbbcbbaabacabcabcbccabcbab caabc", "bcbbccbbaaccacacbacbcaabaac aaa bbbbccccacbacbcacc", "babbbcbacabacacbbc bcabcccbb bcbbacabbaaacaabacbbc", "aaccac cbaab c bcaacabbbccaaa bbbbabaaccbaa acccbc", "aaabc cabccccaabaa bcbabc ccbcaacabacacaabaacaaacc", "ccbcbcbabbcbaabaabcba aacccc bbbabcbacbbccaacacaab", "aabccaaa"};
    int N = 29;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> text = {"bcabcbcbacbbcccaaaaca cbaaaacbbaacbbccbbbacbabbbcb", "bbabcacabcc cacccbbccbcbabbabbbbcaacabbaaabbacbb c", "caaacaa aac ccaacccbcabbbcbabbcaabbcbcccaacbc ccac", "aacabccacbaacaccaabacbbccbbaabaca cbcaaca caaabbca", "caabccacacabbacbbcabaccbcabbba abcbccbcccacaa abaa", "ccc cb babbbbbcbacaaccbababbbbcbaaacccb bbbcccabab", "babaacbbaabacabaccab bccccccbaacaaaabaacbaacbbb bc", "bcbcacbbaaaaab bbacbacaccbbbaaaaabbca bcbaacbaaccc", "cbaacaaba cbcccabcbcaacbbcbbaacbcabcabcbaabcab bbc", "cabcabbccabbacbacbaaabaaa cbbbccaacbbbabcccbaaabcb", "bccbacaccbbababcbcba bccccbccbacbbbabbaacbccabbbba", "abaabbbba accabcabaaacbca cbaccccabacabbba bacbaab", "ccaabacbbbcacbabacabaaccbababaaabbcbbabab acabbaa ", "cacccacbcabbcbbbabaaaabccbc acaaccbbcaacbbccccbaba", "acacbacbcbcacaabb bbaaacbcbacbcccbacbbbbccbbbbabbb", "bbbccbca caaacccbaabaabba bccaaacbaabb baaccbcacca", "abbccaccbbbcacbcbaccacabbaabc c bacbabbccccbcabaab", "acacccbbbbcccabc acccaaacbccccabcaacababa aacabacc", "aaccacaaabaa bcccbaabbbaabccaccbcccabaaa ccabbbcba", "aacbcacccaaabaacbbbbbabaabacbacbcaaaabc babcaccbba", " abacbbabaacaabbcbcbbccbcbcbaacccb abacbccccabcbba", "cacacbbbbaacbbcbb bcabcacccacabbcabcacabaccabbbaab", "caabcbbaca aabcbbacaca bbaaaccabccbccbaabcccbcabcb", "cbccbacbaaaacbbcbc bcabcbcacbacacac aabbb baaacaab", "cbbacbbaacbab baabbababaccb bcaacaacbcabbccbbbbcac", "bcccccbbabbaabbbbabaaca cbaaaacbbbaccca bcaccbcbaa", "caabaaababacaacacccaab cacbaabccaaabaabcacabcccbbc", "cabbccaccbaccacbcbb cccbaccbccccccbcaaacbbabcbbacc", "a ccbabbbbbbabbaaaba cbaccabaccacabaaacbccbbabcaba", "cccabcaa cabba babb aaa baaaccabacbcccacacaabcbbcb", "bbaabccbbcbbbcaac abccabcbaacacaccabbccbabaabc baa", "caaacaacabccaccbbaccaccbcbaacaa abbcbcbcacbaaabcca", "a cabaabbbaabcbaacbcabaccccaacbabbcbcac baaacbcacc", "babacccaaaacbcbbccbbbaaabaaabbcbbac cbaabaababaaac", "cabbacbcbcccccbbabbcb aca cababbcacbcccbbaccbcbbbc", "ccaccabbccbaacabbaccacc caabaccbbbbbbbabbcbabcaaaa", "cbabaccaabbc aaacacaaaaaaaaabcbcbaa bcbbabccabcabc", "aabbbabcabcacbcaaabbbbcbbcaabcccb aaccaaabcabbbcac", "bbbacaccacab acacacbabaccbccbbccaaabbbbbbabaacbbbb", "aabbaabac accbcccaabcbacbcbcac ccbaaaaacbbcaacbbbb", "abcaaaccccaabbcbb aaaaaabaaabaaab abaccbaccccabbaa", "bbcbaaccaacbcaccccbbcbcaabca cabcbcbccbacccaaacacc", "aacaacabbc cabcbacacabcabbcabaccbcaabbaababcbbbbac", "aabc babbbcbaabbabbacaabacccbacbacbab babbbaacbab ", "bbbacbcbaaaaacccbabacabaaaacbcbaabbbccccbb bc abcb", "accbccbcabbbbacacbabcbccbaaaccbcbacaaccbcbbcac bbc", "cbcacccaccc cbcccbbabaaccbbcbaabbcacaabbab aabaacc", "bbaaacbbbaabcbbc bacbcbbabaaabbbbaaccabbaacbacb c ", "bcbabcbc ccaccbbcbcbabccabacaabbcccbca abcbabcaccc", "babaacaccacbaacbcccbacccbabbbca bbaacbccbaaabaaa"};
    int N = 23;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {91, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> text = {"cfbbdf bdad ccadf fc ebcce bdcafce bcb dbb dd aea ", "dfdddb b ebfbfab be bf cdece fceccadaac b a afedff", "aeaf ebddfcdcbe adeddaffaf cbadbadaad baffdacb faf", " bececaca adeaafe caec cddcff cfacfddfa dde acbffa", " debcffcbf dae ffdccbd babe b edd dacfd ccaacaf ed", "bccc dbddfaab aebba ffaabb abaabcd fcbe dbcece ccc", "bbae fbcceff adeedfca daefcdcaac ab cbfdf cdfacee ", "cbefebd feb adfedcbcff fcfbdc afdeddda fbcd ccd df", "be cfbeaf eaccfa e ccdafef faaebb c eddffbf dbedaa", "bec ddcda deee ddffdde cea aadcaabb fce c afddcafd", "ec fce feddaca eccccde abefdfc dffbcb bdceeddb ede", "d dcfedab ffdda bbbbdfaf aaf bebfeda deaaeebbde fd", "fb bb dafdfccbb aecd aaddbfda dde bcdadfdcf cbdaef", "bfc dffcb fcaaeefcf ec ffedacfced cfaf dbba daaea ", "cd eccdadacde ba ccfbd cbbddcbefb ffcadadef eebcfa", "eede babfdfae befdbdbebf fdedecba a fdfaae"};
    int N = 5;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {112, 117, 116, 115, 114};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> text = {"b b b b a b b a a b b b a a b a b a a b b a b b b ", "b b a b a b b b a b b a b a b b a a a a b b a a a ", "a b a a a b b b a a b a a a a a a a b b b b a b b ", "b b b b a b b a b a a b a a b a b a b a a a a b a ", "b a b a a a b b b b a a b b a b b b a b a b a b a ", "a a b a a b b b b b a b b b a b b a a b b a a b a ", "a b a a a a a a b b a a b b b b a a a a a b b b b ", "b a a b b a b b b a b b b a b b a b a b b a a a b ", "b b a b a a a a b b a a a a a b b b b b a a b a b ", "b a a b b b a a b a a b a a b b a a a a a b a b a ", "a b b a b b b b a b b a b b b a b b b a a b a a b ", "a b a b a a b b a b a b b b a b a a b a b a b b b ", "b a b a a a a a b a b a b a b b b a b b b a a b b ", "b a b b b a a b a a a b a b a b b b a b b a a a b ", "a a b b b a a b a a b b a a a a a b b b b b b b a ", "b b b b a a b b a b b a b a b b a b b a a a a a b ", "a a b b b b a a b b a b b a a a a a a b b a a b a ", "b b b a b b a a b b b b a a a b b b b a b a b b a ", "a a b a a b b a a a b b b a b b a a b a b a a a a ", "a a b b b a a a a a b b a a b a b b b b a b a b b ", "a a b b a a a a a b a a a b a b a a b a b a b a a ", "a a a a a a b a a a b a a b a a a a b b b a b b a ", "a b a a a b b a a a a b b b b b a b b b a b a b b ", "b b a b b b b a a b b b a b b a b b b a b b b a a ", "a b a a a b a a b a b a a b b b a a a b a a a a a ", "b a b a a a a b a a a a b a a a a b b b b b b b b ", "a a b b a a b a a b b b b b a a a b b a a b a b b ", "a a b b a b a a a a a a a a b b b a b b a a a b a ", "a b b b b b a a a a a b b b a a a b b a a a a a a ", "b a a a b b b a a b a b a b a a b b a b a b b a a ", "b b a a b a a b b a b a b a a a a a b b a a a b a ", "b a b a b a a a a b a b a b a a b a a a a a a b b ", "b b a b a a a a b b a b b a b a a a b a a b b a a ", "a b a a a a b a a b b b a b b b b b a b b a b b b ", "a a a b a b b b a a a a b b a b a b b a b a b b a ", "a b a a b a a b a a b a a a a b a b a a a b b b b ", "b a a b a b a b b a b b b b b b a b a a a a b a a ", "b b b b b a a a a a b a b a b a a a b b a b b b b ", "a a b b a b b b b a b a b a a b b b a b a b a b b ", "b a b b a a b b b b a a a b a a b a a b a a b b b ", "b b a b b b a b b a a a a a a b b b b b b a b a a ", "b b b a a a b b a b a b a a a b a b b a b a a b a ", "b a a a a a a b a a b a b b a a b a a a b b b b a ", "b a a b b b b b a a b a a b a a a a a b a b b b a ", "b a b a a a b a b a a a b a a b a b b a b a a a a ", "b a b b a b a b b a b a b b b b b b b a b a b b b ", "b a b a a b b a b a b a a b a b a a b a b b a a b ", "a a a b a b a b a a a b b b b a a a b b a a a b b ", "b a a a a b a b b a a a b b a b b a b a a a b b a ", "b b b a b b a a b a b a a b a b a a a b b a a b b"};
    int N = 18;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 8, 16, 32, 64, 128, 256, 467, 712, 922, 1064, 1140, 1184, 1205, 1216, 1224, 1229};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> text = {"b b b a b a b a a a a a a a a b a b a b a a a b b ", "b a a a a a b b a b b b a b b b a a b b b b b a a ", "b a a a a a b b b b b a b a b a b a b a a a a a a ", "a b a b a a b a a b b a b a a b a a b a a b b a b ", "a b b b b b b a b a a a a b a b a b b a a a b b a ", "a b b a a b a b a b b a a b a b b a a a b a b a b ", "b a a b b b b a a a a a b b b a b a a a b b a a a ", "b a a b b b b a a a a b b a b b b a a b a b a b b ", "b b a a b a a b b a b a a b a b b b b b b b a b b ", "a a a b b b a a a a a b a b b a a a a a b a a b b ", "a b a a a b a b b b a b b b a b a a a a a a b a b ", "b b a a b b b a b a b a b b a b a b a b b a b b a ", "b a b a b b b a a a b a b a b a b b a a b b a b b ", "b b a b b b a b a b b a b a b a b b a b b b a a a ", "a a a a a a b a a b b a a a b b b a b a a b a a a ", "a a a a b a a a b b b a a b a b b a a b b b b a b ", "b a b a a b a b a b a a a b b a a a a a a a a b a ", "b b b b a b b b b b b b a b b a b a a b b a b a a ", "b b a b b b a a b a b a b a b a a a b b b a a a a ", "b a a b b b a b b a a a a a b b b a a b a b a b b ", "b b b a b b a b a b b a a a b a b b a b a a b b a ", "a b b a b a a a a a a b a b b b b a b a b b b a a ", "b a a a b b a a b a b b b b a b a b a b b a b b a ", "b a b a b a b a b a a b b b a a a a a a a b a b b ", "b b a b b a b a a a b a b b b b a b a a a b b b a ", "a b a b b a b b a a a b a b a a b b b a b b a a b ", "a b b a b b a b a a b b a b b a b a b a b b a a b ", "b a b a a a b a b a a b a a a a a b b a a a b b a ", "a b b a b a b b b a a a a a b a a b b b a a b a a ", "a a a b b a b b b a a a a b a a a a b b a b b b a ", "a b a a b a a b a b b b b a b b b b a b a a a a a ", "b b b a b a b b a a a a b b a a a b a a a b b b b ", "b a b a a a a b b b a a b b b b a a b a b b a a b ", "a a a b b a a b b a b a a b a a a a b a b a a b a ", "b b a b a b b a a a b a a a a b b a b b b a b b a ", "b b b b b b a b a a a b b a b b b b a a a a b a a ", "a a a a a b b b b b b b a b b a b b b a a a b b b ", "b a a a b b a b a b a a b a b b a a a a b a b a b ", "b a a a b a b a b a b a a a b b b b a a a b b a a ", "a a a a b b b a b a a a b a b a b b a b a a b a b ", "b a a a b a b a a a a a b b b a b b b b a b a b b ", "b a b a a b a a b a a a a a b a b a a a b b b b b ", "b a b b a b a a a b a b a b a b b a a a a a b b b ", "a b a a b b a a a a a a b b b b b b b a a a a b b ", "a b b a b b b b a a a a b b a b a a a b b a a b b ", "b b b b a b a a b b a b b b a a b a a b a b b b a ", "a a a b b a a a a b a a a b a a b a b b b a b a b ", "a b b b b a b b b a a a a a b b a b a a b b b b b ", "a a a a b a a b a a b b b a a a b a a b b a a a a ", "a b a a b b a a b b b a b b b b a b b b a b b b"};
    int N = 7;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 8, 16, 32, 64, 128};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> text = {"a b a b b a b b b b b b a b b a a a b b a a a b a ", "a a a a b b b b a a a b b b b b a a b b b a a a a ", "b b b a b b b b b b b a b b a a b b a a a b a b a ", "b b b a a b a b a b b a b a a b a a a b a a a a a ", "b a a a b b a b b a b a b b b b a a a a b a a a a ", "a b a a b b a b b a b b b b b a b b a a b b a a b ", "b b b a b b b a b a a a a b a b a b b b a b b a b ", "b b a b b b b b a b b a b b a a a b b b b a b a a ", "b b b b b a a b a a a b b b b b b a a b b b a b b ", "b b a a b a b b a b a b b b a a b a b b b b b a b ", "b b a a a a b a a a a b b a a b a a b b a b a b a ", "a b b a b b b b a a a a a a a a a b a a b a b b a ", "a a a b b b b b b b b a b a b b b a a b b a b a a ", "b a b a a a a b b a a a a b b a a b b a a a a b b ", "a b b b a a b a b b a a b a b b b a b b a a a b a ", "b b b a a b a b a b a a a a b b b b b a b b b a b ", "b b b a b a b a b a a a a a a a a a b b a a a a b ", "a a b b b b a a b a a a a a a a b a b a a b b a a ", "b a a a b b a b b b b a b b b b a b a a a b a a b ", "b a a b b a b b b a b a b a a a a b a a b a b a a ", "a a a a b a a a a a b b a a b b b a a a b b b b a ", "a a b b a b a b a a b a a b b a b b a b a a b a b ", "a b b a a a a a a a a b b a b b b b a b b b b a b ", "a b a a a b b b b a b b a a a b a b a b a a b a b ", "b b b b a a a b a a a b b a a a a a a b a a b a a ", "b b b a a b a b b a a b b a b b b b b b b b a a b ", "b b b a a b b a a a b a a a b b a a a a a a b b a ", "a b a b b a b b a a a b a b b b b b b b a b b b a ", "a a a a b a a a a a b b a a a a b b b b b b a a b ", "a a a a a b b b a a a a a b a b b b b a b a a a b ", "b b a b b a a b a a b b b b a a a b a b b b b a a ", "b a a a a a a a a a a b a b b a b a b b a a a a b ", "a a b a a b b a a a b b a a a b b a a b a b b a a ", "a b b a b a a b a a a a a b b b b b a b a b a b a ", "b a a a b a a a b a b a a a a b a a b a b b b b a ", "b b a a b a a b b a a b b a a a b b a a a a b a b ", "a a b a a b a b b b a b a b b b b a b a a a b a a ", "a a b b a a b a a b a b b a a a a a a a a b a a b ", "a a a a b b b b b a a a b a a b b b b a b b b b b ", "a a a a a b a a a b a a b a b a a a a a b a b a b ", "b a a b a a b b b a b b b b b b a a a a b a b a b ", "b b a b a a a a a b b a b b a b a b a a a b a b b ", "a a b b a b b a a a b a a a a a a b a a a a a b b ", "a a b b b b b b a a a a a b b a a a b b a b b b b ", "b b a a b b b a b a a b a a a a b b b b a a a b b ", "a b a b a b b b b b a a b a a a a b b a a b a b a ", "b a b a b a b b a b a b b b b a a a a b a b b a b ", "a a a a a b b b b a a b a b b b a a b a a a a b a ", "b a b a b a b b a b b b a b b b a a b a b a b b b ", "b b a a b a b"};
    int N = 42;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 8, 16, 32, 64, 128, 256, 477, 738, 956, 1084, 1145, 1178, 1193, 1200, 1205, 1209, 1211, 1211, 1211, 1211, 1210, 1209, 1208, 1207, 1206, 1205, 1204, 1203, 1202, 1201, 1200, 1199, 1198, 1197, 1196, 1195, 1194, 1193, 1192, 1191};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> text = {"a a b b b a b b a a a b a a a a a a b b a a a b b ", "a b b b b a a a a a a a a b a a a a a a a b a a b ", "b a a b a b a a b a a a a a a b a a a b b b b a b ", "b b b a b a b b b a a b b b b a a b a b b b b b a ", "a a a b b a b a b a a b b b b b b a b a b b a a b ", "a b b b a b a b b a a a a a b b a a b b b b a a a ", "b b b a b b b a b a b b b b b b b b a b a a a a a ", "b a b a a a a b b a b b b b a b b a a b a a b a a ", "b a a a a b a b a a b b b b b a b b a a b b a a b ", "b a b b b a b b a b b b b a b a a a b b b a b a a ", "b a b b a b b a b b a b a a a a a a a a b b a a b ", "b b b b a b b b a b b b b a b b a a b b a b b b a ", "b a b b a b a a b b b b a a b a a a a b a a b a a ", "a b b a b a b a a a a a a b a b b a a b a a b a a ", "a a b a a a b b a a b a a b a b b a a b a a b a b ", "a a b b b b a b b a a b a a a b b b b b b b b b a ", "b b a a b b b a a a a b a a a a b b b b b a a a b ", "b b b a b b b b b b a a b b a b a a a a a a b a b ", "a a a a a b b a b a b a a b a b a b b a a b b a b ", "a a b a a a b a a a b a a b a a a b a a a b a a b ", "b a a b a b b a a a a a a b b b a a b b a a a b b ", "b a a a a a a a b b b a b b a a a b a b a b b a a ", "a a b b a b a a b b b b b b b a a a a a a b a b b ", "b b b b b a b a a a b a b a a a b b b a a b a a b ", "b b b a b a a a b b b a b b a b a b b b b b a a a ", "a a b b b b b b a a b a a a a b b b b b b a a b a ", "b b b a b a a b b a b b b a b a a b a b b b b b b ", "b a b a a a b b b a a a a a a b a b b b b b a b a ", "b a a a b a a b b b b a a a a b b b b b b a b b a ", "a a b a a b a b a a a b a b a a a a a b b b a a b ", "a b a b b a b a a b a a a a b a a a a b b b a a b ", "b a b b b b a a b b a a b a b a a a b a a a b a a ", "b a a a b a b b a a b a a b b a b a a b a b b b b ", "a b b b a a b a b b a b a b b b a b b b a a a b a ", "b a a a a a a a b b a b b b b b b b a b a b b b a ", "b b a b b b b b a b a a b a a a a a b a b a b b a ", "b a a b a a b b b a a b a a b a a a b a a b a b b ", "b a b a a a a b b b b b a a a a a b a b a a a b b ", "b b a b a b a b b b b b a a a a a b b b a b a b b ", "a a a b a a a b a b a a a b a a a a a b b b b a b ", "a b b a b b a a b a b a b a a b a a a a a b a a b ", "b b b b a a a a a b a b a a b a a b b a a a b b a ", "a a b a a a a a a a a a a a b b a a b b a a b a a ", "b a a a b a a b b a b a b a b a a a a b a a b b b ", "a a a b b b b b b a a b a a b b a b a b a b a a a ", "a b a b a a a a a b a a a b b a a a a b a a a a a ", "a a b a b a a b a a a b b b b a b a b b b a a b b ", "a a b a a b b a b b a a a b b a b b b b b a a b b ", "a a a a a b a a a b a b a b a a b a a a b b a b b ", "a b a a a a a b a a b a b a"};
    int N = 25;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 8, 16, 32, 64, 128, 254, 469, 731, 937, 1065, 1144, 1184, 1199, 1209, 1215, 1219, 1220, 1220, 1219, 1218, 1217, 1216, 1215};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> text = {"a b a b b a b a a b a b a b b a a a a a a a a a b ", "a b b b a b a a b b b a b a a a b b b b b a a b b ", "b b a a b b a b b b b b a b a a a b b a a b a b a ", "b a a a b a a a a a b a b a b a a b b b a a b a a ", "a b b b b a a b b b b b b a b a b b a a a a a b a ", "a b a a a a b b a b b b b b b a b b a b b a a b a ", "a a b b a a a b a a b b a a a a b a b a a a b a a ", "b a a a a b a b b b b b a b a b b b a a b b a b a ", "b b b b a a b a b b a b a b a b a a a b a a b b a ", "a b b b a b b b b a a a b a a a a b a b b b b a b ", "a b b a b a a b a a a a a a b a b b b a b b b a a ", "b a b b b b a b a b a a a a b b b a a a b a b a b ", "a b b b b a a a a b b b b b a b b b a b a a a a a ", "b a a b a b b b b a b a a b a b b a b b b b a a a ", "b b a a b a b a a a a a a b a a a b b a a a b b b ", "a b a a a a b a a a a a b b b b b b b b a a b b b ", "a b b a a a a a a a b b a a b a b a b a a b a b a ", "b b a b a a b a a a a a a b a a a a a a a a a b b ", "a a a b a a b a a a a a b b b a a b a a b b b a a ", "a a b b a a b b b b a b a b a a a b b a a a a b b ", "b b a a a b b b b a a b b a b a a a b b b a a b a ", "b a b b b b b b a b a b a b b a b b b a b a a a a ", "a b a a a a a b a b b a b b a a a a a b a a b b a ", "b a a b a a a b a a a a a b b a b a a a a a b a a ", "b b b a a b b b a a b b b a a a a b a a b a b b a ", "a b a b a b a b b b b a b b a b a a b a b b b a a ", "b a a a b a b b b b a b a a a b a a a b a a b a b ", "b a b b a b b a b a a a a a b a a b a b b a b a b ", "b a a a a a a a a a b a b a a b b b a b b b b a a ", "b a a b a b b a a a b b b a b b b a b b b a a b a ", "b b a b b a a b a a a a a a b a b a b a a a b b a ", "a b a b a b b a a b a a a b a a b a a b b a a b a ", "b b a a a a b a a b b b b b a b a a a a a b b a a ", "a b b b a b b a a a a b b a a b b a a a b a b b a ", "a b b b b a a b a a b b b a a a a a b a a a b b a ", "a b b a b b a b b b a b b b b b a a b a b a b a a ", "a a b b a a b a a a a b b a a b a b b b b a b b b ", "b a b b a b b b b b b b a a a b a b a b a a a a b ", "b b a a a a a b b a a a b a b a b b b b a a a a b ", "a b b b a b a a b b b b b b a b a a b a a a b b a ", "b b a a a a a b b a a b b b b b a b b b a b b a b ", "b b a b a a a a b b b a a b a a b a a a a a b a a ", "a a a b a a b b a a a a b b b a b b b b a b b b a ", "a b b a b b b a b b a a a a b a a b a a b a a a b ", "b b a a b a b a b a a a a b b a b a b b b a a a b ", "a a b b a b b a b b a b a b b a b a a a a a b a b ", "a a a b a a a a b a a b b b b b b a b b b b b b a ", "b b b b a a a a a a b b a b b b b a a b a a b b a ", "b b a a b a b b a b b a a b b b b a a b a b a b a ", "b b a a a a a b a b b b b b b a b b b a b b b b a"};
    int N = 9;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 8, 16, 32, 64, 128, 254, 462};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> text = {"b b b a b a b a b b a a a a b b b a b b a a a a b ", "b a b b b b a a b a b b a a a a b b b b b b a b a ", "a a b b a b a b b b a a a b b a b b a a b a b a b ", "b b a a b a a a a b a b a b a b a a b a b b a a b ", "a a b b b b a b b b a b a b b a b a a b b a a a a ", "a b b a b a a b a b b b a a a b b b a a a a a b b ", "b a b a b a b b a a a b b a b a a b a a b b a b a ", "a a b b a a b b b a a b b b b b a a a b b b b a a ", "b b a b b a a a a b a b b a a a a a a b b b b a b ", "b a a a a a a a b a a a a a b b a b b b b b a b a ", "a a a b a a b b a a a a a a b b b b b b b b a b a ", "a b a b a b b b a b b a b a a b a b b a b b a a b ", "a a b a a a b b a b b b b b b a a b a b b a a b a ", "b b a b b b a b a a a b b b b a b b b b b a a b b ", "b a b a a a b a a a a a a b b a a a b b a a a b b ", "a b b b b b a a a a a a a a a b a b a a b a b b b ", "a a a a a b a a a a b a b a a a b a a b a b b a b ", "b b b a b b a a b b b a a a b b a a b a a a a a a ", "a a a b b b b b a b a b a b b a a b b b b a a a a ", "b b b b a b b b a b a b b a b b a a b a b b a b b ", "b a b a a a a b a b a b a a a b a b a a b b a b b ", "b b a b a a a b b a b a b b a b b a b b b b a a b ", "a b b a b a a a b b b b b a a a a a a b a b a a a ", "a b b a a b a a a a b a a a a a b b b a b b a a b ", "b b b a a b a a a a b b a b a a b a b b a b a b b ", "b b a a a a a a a b a b a a b a b a a a b b a b a ", "b a b a a a b a a b b b a a a a b b a b a a b b a ", "b a b b b a a b a b b a b b a b a a a a b a a a b ", "b a a a a a a a a b a a b b a b b a a a b b a b b ", "b b a a a a a b a b a b b b b a a a a b b b b a a ", "a b b a b b b b b b b a b a a b b a b b b b a b a ", "b b a b a a a b a a b b a b b a b a b b a b b a a ", "b a b a a a a a a a a a a a a a a a b a b a b b a ", "b a b a b b b b a b b a a b b a a a a a b a a b b ", "b b a b a a a b a b a a b a b a a b a a b b b b a ", "b b a b b a a a b a b b a a b b a b b b b b b a b ", "a a a a a a b a b a b b a a a a b b a a a b b a a ", "b a a a b b b b b a b a b a a b a b a b a b b b b ", "b b a b a b a a b a b b a b b b b b b b a b a a b ", "b a a a a a a b a a a b a b a a a b a b a a b a b ", "b a b b a a a a b b a b b a b a b b b b a b a a b ", "a a a a b b a a a b a b a a a b a a b b a a b b b ", "b a a a a a a b b a b a a a a b a b a a b b a a a ", "b a b b b b b b a b a a a b b b a b b a b a a b b ", "a a b b a a b a a a b b b b b a b b a a a a a b b ", "a a a a a a b b a b b b b b a b b a a a a b b a b ", "a b a a a a a b b b b b a a a a b b b b a b b a a ", "b b b a b a a a b b a b a b a a a a a a b a b b b ", "b b b b b b b a a a b b b a b a a b b a a b a a b ", "a a a a b b"};
    int N = 32;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 8, 16, 32, 64, 128, 251, 445, 685, 887, 1034, 1122, 1172, 1194, 1204, 1208, 1211, 1212, 1212, 1211, 1210, 1209, 1208, 1207, 1206, 1205, 1204, 1203, 1202, 1201, 1200};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> text = {"b b b a a b a a a b b a b b a b a a a a a b b b a ", "a a a a b b b b a a a b b b a a a a b b a a b b b ", "a a b a b b b a a b b a a a a b a a a b b b a a a ", "a b a a a b b a b b a b a a a b a a b b a a b b a ", "a a b b b b b a b a b b b b a a a a a b b a a a b ", "b a a a a b a b b b a b a a b a b b a a b b a a b ", "a a b a a a b a b b a a a b a a a b a a b b a a a ", "b a a b a b a b a a b a a b b b a b b b a b b b b ", "a a b a b a b a b b a b b b b b a a a a b a b b b ", "a b b a a a a a b a b b b a a a a a b b b b a a b ", "b a b b b a b b b a a b b a b b b b a a a b b b b ", "a b b a a b a a a a b a b b b b a a b a a a b a b ", "b b a a a a a a a a a b a b a b a b a b b a a b a ", "a a a a b a a b b a a a b a b a a a b a a a a a a ", "b b a b b b b b a a b b a b b b b b a b a b a b a ", "b b a a b b a a a b b b b b a b a b a a b a a b a ", "b b a a a b b a a b a a b b a a b a b b a a a b a ", "b a b b a a a b a a b a a a a a a a b b b b b b a ", "b b b a a b a b a b b a b b b b a b b b a b a a b ", "b a b a b a b a b a a b b a b a b a a a b b b a b ", "b b b a b a a a a b a b b b b a b a a a b a a a b ", "a b a b a a a b b a b b b a b a a a a a a a b a a ", "a a a b b b a b b b b b b b b a a a a b a a a b b ", "b a a a a a b a b b b b a a b a a a a a a a a a b ", "a b a b a b b a b a b b b a b b b a a a b a a a b ", "b a a a b b a b b b b b a b a a a b b a b b a b a ", "b b a b b a b b a b b a b a a a a b b b b b b a b ", "a a b b b b a a a b a a a b a a b a b a a a b a b ", "a a b a a a b b a b b a b b b a b b a b a b a a b ", "a b a a b b a a a a a a b b a b a a a a a a a a b ", "b a a b a a b a b a a b a b b b a b a a a a b b b ", "b a a b a a a a a a a b b b a a a b b b a a b a a ", "b a a a b a a b b a a b a b a b b b b b b b a a b ", "a b a b a b b b a a a a b b a b a a a b a a b a a ", "b b a a a b a b a a b a b b a a a a a a a b a a b ", "b b b b b a a b b a b a a a b a b b a b b a a a b ", "b b a a a b b a a b b a a b a b a a a a a a a b b ", "a b b b a b b a b a a b b a b b a a b b b a b b a ", "a b b b b a a a a b b a b a a a b b a a b a b a a ", "a a a a b a a b a b a b a a a a b a b b a b a a a ", "b b a a a a b a a b a b a a a a a a b a a a a b b ", "b b b b a b b b a b b b a b b b a a b b b b b a b ", "a b b b a b a b a b b b a a a a a b b a a a b b b ", "a a a a b a b b a b a b b a b b a b b b a b b a b ", "b b a a b a a a a a b a a b b b b b b a a a b a a ", "b b a a b b a b b a b b b a a b b a b a a a b b a ", "b b a b b a b a b a b a a a b b a b b b a a b b b ", "b b a a b b a b b a a b b a a a b a b a b b a a b ", "b a b b b a a a a b a a a a b a b a b a a b a a b ", "b b a a b a a b b b a b a b"};
    int N = 7;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 8, 16, 32, 64, 128};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> text = {"a a b b b a b a a b b b b b b a a a a a b a b a a ", "a a a a b b a b a b a a b b b a b a a a b a a b a ", "a a a a b a a a b b b b b a a b a a b b a a a a a ", "a b a a a a a a a b a b b a b b b a a a a a a a a ", "a b b b a b b a b b b a b b a b a b a b b a b b b ", "a b a a a a b a a b b b b b b a a a a b b a b b b ", "b a b b b b a a a b a b b a b b a a b b a a a a b ", "b a b a a a a b b b b a a a a b a a b a a b b b a ", "b a a b b a a b b b a b b a b a a b a b a a b b a ", "b a a a b b a a b b a b a b b b a a b b b a a a b ", "b b a a b b a b a a b a b b b a a a a b a b b a b ", "a b a a a a b b b b a a a a a a a b b a a a b b b ", "b a b b b a b b b b a a a a a b a a b b b a b a a ", "a a b a b a a a b b b a a b b a b a b a a a b a a ", "b a a a a b a b b b b a a b a b a a b a a a b a a ", "b b a a b b a a b b b a a a a b b b b b a b a a a ", "b a b b a a b b b b b a a a a a a b b b b b a a b ", "a a a a b b a a b b a b b b a a a b b a b a a b b ", "b a b a b b a a a a a a b b a b a a b b b b b a b ", "a a b a b a a a a b b b b a a a b b b b b b a b a ", "a a a a b b a b a b b b a a a a a a b b a a a b b ", "b b b a b a b b a a b b b a a b b a a b a b a b b ", "a b b b b b b b a a b b b a b a b a a a a b a a a ", "a a b b b b a a a b b a b a b a a b a b b b a b b ", "a a a a b a a b b b a b b a a b b a a b a b b b b ", "b a a a a b a b b a a b a b b b a b a a b b b a a ", "a b b b b b b a a a b b b b a b b a a b b a b a b ", "a b b a b a b a a a b a a a b b b a a a b b a a a ", "a b a b b b a b b a a b a b b a a b a a a b a a b ", "b b b b a b b a b b b b a b b b a b b a a a a a a ", "a a a a a a b a a b a b a b a b a a a b b b b a b ", "b b b a b a a a b a b b b b a a a b a b a b a b a ", "b b b a b b a b b a b a b a a b b b b a a b a a a ", "b b a b b b b b a a a b b b b b a a b b a a a a b ", "b b a a a b a a a b b a a a a b a b b b b b b a a ", "b b a a a b a a a b b b b a a b b a a b a b b a a ", "b b b a a b b a b b a a a b a b a a a b b a b a a ", "a a b b b b a a a b b b b a b b b a a a b b a a b ", "a a b b a a b b a a b b b b b a a b a b a b a a b ", "b a a b b b a a b b b a b b b a b a b b a b b b b ", "b a a b b a b b b a b b b a a b b b a b b a a a a ", "b b a b a b a b b b a a a a a b a b b b a a b b a ", "a b a a a a b a b a b a b a b b a b b b b b b a a ", "a b a b a a a b b a a b b b a a b a b b a a b a a ", "b a a a a b a b b b b b b a b b a a a a b b b a b ", "a b a b b a b a a b b b b b b b b b b a a b a a a ", "b a a b b b b b b b b a b b a a b b a b a b b a b ", "a a b a b b b a a a a a b a a a b a b b b a a a b ", "a a b b a b a b a b b a a b b a b a b b a b b a a ", "a a b a a b b"};
    int N = 17;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 8, 16, 32, 64, 128, 255, 468, 723, 934, 1067, 1145, 1175, 1195, 1207, 1212};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> text = {"b b b a b b b a a a a b b b a a b a b a b b b a a ", "b b a b b a a a a a b b b b b b a a b a b a b a b ", "b b a a a b a b a b b a b a b b b b b b a b b b a ", "b b a a b a a b a b b b a b a b a b b b a b a a a ", "b a b a b b b b b b a a a a b b a b b b b a a b b ", "a a b a b b b a a a a b b b a a b b a a a a b a b ", "a a a a a a a b b a b a a a a a a a a b a b a a a ", "b a b b a a a b b a b a b b b b b a b a b b a b b ", "a b b b a a a b b b b b a b b a a a a a b b a a b ", "b b b a b a b a b a b a b b a a b b a b b a a a a ", "a a a b a a a b a a b a a b a b a a b a b b b a b ", "b b a a a a a a a b a a a b b a b a a b b a a b a ", "b b a b a a b b b a b a b b a b b a b b a a a a a ", "b b a a a a a a b a b a a b b b a b b a a a b a b ", "b a b b b a b a b b a a a b b a b b b a a a b a a ", "a b a a a a a a b a a a a b a b b b a b b a a a b ", "a a b a b b b b b b b a a a b b a a b a b a a b a ", "b a b b b a a b b a b b b b a a a b a a b a b a a ", "a b a b b b a b b b b a a a a a b a a a a a b b a ", "b a a b b b b a a a a a a a b a a a b b a b a a b ", "b a b b a a b b a a b b a a a b b b b b a a a a b ", "a a b a a b b a b b a a a b a b a a a b a a a a a ", "b a a a a a a b b b b a b a a a a a b b a b b b a ", "a a a b b b a a a b b a a b b b a b b b b a a b b ", "a a b b b b b b b b a b a b b b a a b a b b b b b ", "a a a b a b a b a b a b a b b a a b b b b b a b b ", "a a b b b a b b b b a b b b a a a b b b a b b b a ", "a b b a b a b b a a b a b b a b a a b b b b a a b ", "b b a b a b b b a b a a b a b a a b b b a b a b a ", "b b b b a b a b a b b a a a a a b a a a a b b b b ", "a b b b a b a a a b a a b b b b a b b a a a a b b ", "b b a b a b a a b a b b b b a a a a a b b a a a a ", "b a b a a a b b a b b b a a b a a b b b b b a a b ", "a a b a a a b b b a b a b a b a a b a a b a b b a ", "b b a a b a a a b b a a b a a a a b a b a a b a b ", "a a b a b a a b b b a b a a b a b b a b a a a a b ", "b a b a b a b b a a b a b a b b a b b a a a b b b ", "a b b a a b b b a a b a a b b a a a a b b b a a b ", "b a a a a a a a b b a b a b a a a a a a a a a a a ", "b b a b b b b b b b b b b b b a b b b b a b b a b ", "b a a b a a a b b b a a b a b a a b b a b a a b a ", "b b a a a b a a b b a b b b a a b b a b a a b a a ", "a b a a b a a b b a b b b a a b b a b b b b a b b ", "b b b a a a a b a a b b b b b b b a a a a a b b a ", "a a b a a b b b a a b b b b b a a a a b a b b b a ", "a a b a a b b a b a b b b a b b a b a a a a b b b ", "a a a b b b b a a b b b b a a a b a a b a b b a a ", "b b b b b b b a a b b b a a b b a a b b a b a a a ", "a a b a b a b b a a a b b a a b b b a a b a a a a ", "a a a b a a b a b a a b b"};
    int N = 48;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 8, 16, 32, 64, 128, 256, 479, 753, 958, 1086, 1143, 1175, 1196, 1206, 1212, 1215, 1215, 1215, 1215, 1215, 1215, 1215, 1214, 1213, 1212, 1211, 1210, 1209, 1208, 1207, 1206, 1205, 1204, 1203, 1202, 1201, 1200, 1199, 1198, 1197, 1196, 1195, 1194, 1193, 1192, 1191};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> text = {"a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a a a a a a a a a a a a a a a a a a a a ", "a a a a a a"};
    int N = 50;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> text = {"m nn r t n v oe at zd o v sd w jh u ki wq x lm bc ", "cb ms un hx rq sf jm k l c s ti rj dn td zs p oa v", " r q f pw ek m w cq u a x df r y hh bb de kg o im ", "a n i k pi fn s y eg s y wf c uo o e yf wa c rj fo", " ae cd x x y ey g u np yk u qb z hj wc r u ov e ai", " aq n d v sm xq nv r t i h wx a yx g ry cy km fb u", "d pa kp wm g e o x qy zr j tx or r vy r fi r d ao ", "l yw o b z hu os wm p mi c sz y lx ja p ss b z f g", "o w q rc rn z kn v fn u o h rd cf wq e hf qw ql qi", " xk kx yp w tp hk xc l e l we bj s fr qz s u nd f ", "bf xi y s or mn w v gg j ul lh nn q m i ju g jb ne", " ti q g zr gg lc w sf v a lf sw oc d ow z ee nd a ", "h qb pi jg ny e wt u vn jf su g f n eh gz v d lf f", " s he vg nc p l nx mq j jr b f bn p d w sl kv sl o", " n ee nd a h qb pi jg ny e us x p bo o ra zz ko jq", " ae wl wr lv umhu qm g b j v en sv x ap r u wl i t", " cl d w xd m mu ee r ed w au w i xk or h qw f ry k", "h dg ax im j kf m ct j gk fk hr yd g c ed i cc jh ", "q il a r j u qr w dw dv u z k v g rr fp eo o yn v ", "h s ti n t er o b jv pw x cz z a r w l w o v e qn ", "ga i iv kl zj q h c cd h iv jx z c kp k d d mk na ", "n ag c c b p bt qj uj zg b s l j t iv v ca rc ox e", "y cf sf xc e ul e pb f lk v u wf a c gd lo n s um ", "x r pk wj h wr bw o p iy kv an gs q we rl yo j gg ", "wn sf n ed q o x i o l t ck vr k e f h el g c u re", " yb ez ij l x y s x c v rlo tj qc u d jr t ej i d ", "ch ee r ed w au w i xk or h qw f ry kh dg ax im j ", "kf k fa jr i r w y k jk h e xi ot j t l q pv ti v ", "y op ip f i j xb r zf t eg rd w nz i ia qw t ah yf", " zd aa xb i a k o hl qa vd tp kk p xf t gt sw c i ", "r u i qf h xs az is u an w qy kl q a mb vo wf b ew", " l o l c pj md l ar ax m lx h j a ie nk l b r y i ", "l yd bs ti id wn t l qb mq w s op x re mw q q r jy", " l up ml i ao as v o y xc e ul e pb f lk v u wf a ", "c gd lo n s um x r pk wj h wr bw o p iy j v en sv ", "x ap r u wl i t cl d w xd m mu rp u l kh ljf i t x", "s f su kg w s vx x ru u ob x v mb o tr ap d tu jt ", "oh qp lv d e xb jf ar q w x hw o wl w xb zp l nx m", "q j jr b f bn p d w sl kv sl o n ee nd a h qb wd u", " s eb hu y sy ij jq b fb ya ci w f pe lq sa po ua ", "o y u i ez wd d z i d kn ns q s vx l np ra r j eb ", "e u l j v tt h x nz c v c f t m hu zy wt jx th wu ", "cq y cw c e cd z zu qs i u s t j fp sk b a n ex zh", " ae uu y zv mq pp wg y v w s op x re mw q q r jy l", " up ml m k w re tw pz a gd nd d qq q g oj yg id je", " kd q za nz z sl r db sn k fa o a h or co a kr f s", " r qm og eo f jr kt ls gw i b ze b ez ij l x y s x", " c v rg e g o o e k f d oh aq bw n d zq h f w a u ", "u xa hu qm g b j v en sv x ap r u wl i t cl d w xd", " m mu rp u l kh lj"};
    int N = 16;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {334, 815, 862, 869, 876, 883, 890, 897, 904, 911, 916, 921, 926, 931, 935, 939};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> text = {"sw qs g tt tp l rv u zd p l fs b t u eg n c k f bj", " d v z dl vb uu dr jw km hv qf xi lu ic n jy f ns ", "jf d ij o o iw e ny p py em h sr vf ae k dg rh d c", "o mx vf e mo l r q b h o bw h c ta p u fd i n u y ", "mf m so hm y o pj e vz d x eh oq l yw y w eb gx jn", " p hf tx i w o bu d bo c a vf oq p l l h w q ti v ", "jn hv i r tk u dd m oq jm u jq lc ee qr c zb uc vs", " h d y y fr o xc el t i nx f p t r ya ha i sn q wc", " x q hi sc bb jd gn m zi yu d wm dy cb v wo ia b q", "c pm p wh nu e bp qh y vr l k p in rt ju l lx yu g", "q pd l j dg a fq au dc p h v f gc j yk k zx n w n ", "v xm tq bo x eh hh ka if r s x k i qa b q sh p o v", " k g d lv bm wg pv h hd tn v xm tq bo x eh hh kazf", " v v x ve s d c y oy hi f m yu n f j y sg vb k c d", " q d u h fvt s k a eu b yk k ze fk u wf t a ca kz ", "q b jt u k sz d s uj dp v a lw x us q sv ek o mb a", " cy gu g jb z g hz b r yy sz xh xi kr r qq dn dn m", " iw qz cn i wk r l x l op le tj l ax hw fr za q hc", " c z q rf nz w ft mq dm v zd eo qu qq hp wa a ui b", "q r qz lq o gz qr ag b jl pu m b rr wb c r z w q l", "m uo h pd j p wl ub ai qz y f w v w vt qx g dh p l", "i bw f k v qf sk t y d q mf ti j i j n wg hr cv r ", "we p zh sv xx b cz x k u a ki lg ua oq e s k g h v", "u d o ud nu od fy t g uu s n xk ac ko nd d z nd fx", " fd k ho c kp su oi rv nb ji td ee o uo o s af wo ", "wo sb i vr e ex i pk pc lg nx z v h ip g at e t u ", "v sk u wf t a ca kz q b jt u k sz d s uj dp v a lw", " x us q sv ek qz s d hi oz og gh mm ov c hl ln sw ", "jq nv nl wa wv v u fh u o da z o po t vd k xr np l", "r xm qh yy vp t h x qm hx n s ke e c na xn d z at ", "t n u u v k xg mw m p v m yn a c kw y vt kr b lb s", " ls bf k v ru i ek os hc m o e s n j ke n ix l k c", " m ys hz h my rn gr qn wx gr l ol kx oi a d h f i ", "m p rb d on ua kl f g nu rm vd lt xk pe sa rj z ah", " vo al b nn no r l k rw p p xb dm e mw o wf ow l r", " vz v dt sj kc fe ek bi f a nc qp t te w q f n rv ", "lq v in zb d fw z k m dk dk wa jp k t v m l yk bv ", "mm na h yy nz gb as l a x x u v r rq g b w s d z k", "y t q m li eo c il g g ss tr uh um qj ql i m yu n ", "f j y sg vb k c d q d u h fv h cx s j bz pd eq tl ", "z o mm qf g g ph w ly o ow g hn ih hx pq dq j r j ", "x x p y qm ue n vo ev yi op l wm d st xj wu bb sf ", "kb k bc px l uj xh m s x f cf bv q ms km vo j sa k", " s k rg hm tc q h a x mz xz n dv ul mf l h lb u ud", " t f fw z k m dk dk wa jp k t v m l yk bv mm na h ", "yy nz gb as l a x x u v r rq g b w s d z ky t q m ", "li k g cs xy ko uv z j o t wg c zu pf mi bv gq d r", " j o vb u ws d fi l ou zn ak u wf t a ca kz q b jt", " u k sz d s uj dp ef j wa jf a c bb o j rk tu gd g", "k yj k c"};
    int N = 48;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {368, 839, 885, 889, 893, 897, 901, 905, 908, 911, 914, 917, 920, 923, 926, 929, 931, 932, 933, 934, 935, 936, 937, 938, 939, 939, 939, 939, 939, 939, 939, 939, 939, 939, 939, 939, 939, 939, 939, 939, 939, 939, 938, 937, 936, 935, 934, 933};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> text = {"hf q ez v j w vt mb rr oq s q sw g b w lz i vx x d", " mt h c lv ay eq py it aj d wu gw s w gm q k z f d", " ip b k zu z dg g x pw l vt kb yx y x g m x yp b a", " x t u sm xx zi ek mi m gx j w dy wl u hh pm eg f ", "eo cx cj sq n zi r d f o jk w u nl rp u f t ti y z", " yp nm fk t g s v ir zz tu cu os lq rf x h s f f e", "o b y ue e kk w q x lh rw mh su j q z b cb z pb k ", "gs e af c d te r ou e b qw dd ze q mp oy aw o y r ", "e i a zy ay q yh k p b dm k hy ye pi z v g i zb fi", " sg qq v wh p y ve hf q sw mh e m x vz c n p ln k ", "wd a t v v a z yh ub dc kb h k ir lp vl zy q g pb ", "v a vt mb rm n bx w aw pg r s k c hu z p zi o vy t", " hh r yh v c kv gn d t ni ou z o b sr l sx g rp ss", " wy l h m da ntv h so k i qm r h x f j p z xe cv q", "w k i x g t ck mr ak r et pr z zb k l u ik r cn i ", "d nz y cx ca k j ks z r nu ka q e lg xe qn lc x d ", "t mi uo ne d d s w mu mc co o gh e a qq c nr jf p ", "s v jg dr hl t r uo t xw aw x c st hx b uz kp a g ", "d l oo z tq qm u pm ae o rl v gj qn ir on cd r v u", "r f l v s a rd t e hp v zm zv g f o le j fk nr aw ", "j v su c d t ni ou z o b sr l sx g rp ss wy l h m ", "da nr z o yb fu uo h c tz gp kd c dx fh dk l es jv", " um ti f q iz k y k tu sk v h ky mg xi t j qe hx n", "u fc z q zl w t gk s w ae q hn hl mf le j i d rq q", " i s u y j wo fs ju m i rf in sy zz uq d q x wf u ", "va u jd n eb v wy cw p hb ko j cl y xb to i nj j b", " xf td ag a k m x bz z uf b en h a h vp wx en g o ", "d pq s e t z b p p i xu yf wl vp cx z y uy a zt fp", " v oe np pd eq xd e ki ma rb go e c lt cc kh ar w ", "ra c a o qe b h ub dc kb h k ir lp vl zy q g pb v ", "a vt mb rb n g t fa h p we w k y rz z rg n we c i ", "xn sq x ft jnr aw j v su c d t ni ou z o b sr l sx", " g rp w j vq g br gv u ke ms b kf c xf zm r s ir d", " uc iy jr an h m j pz n da g b w ls qm cc v kf n e", " qj qj zx bi dm qg ib c a ot ul bp ol j au f cp e ", "u th fr k r pj e lc a q yz to c g b p xe v w p r i", "h pg p z wc x mj s rb nz r vb g ol f zu m ds q o e", " aw ww e l fp c tq ph ac w o pc u rr ul cz u up u ", "yz j s pw qw fw x o ly hh b ib my g cz u pz sg ck ", "z n gf ur uv b qa i h w w wg f r v kk u n zk z q z", "d l fl tq wr kt hc m ii le uj vy tc mz no hh tc o ", "zz st we o x m n i zc k ec ud q hy p gw y pb g hy ", "d u y u ci q j q s ck p zl v tk u c ix r p hf y dw", " f t v v a z y lf b ia rt by m uc rd se nn n na t ", "d v fk js z yu s fh ga h jl nb nb g c sp a oz n a ", "v k x zc f w yy k g c y q qq d mx v o i x s ck a j", " pz n da g b w ls qm cc v kf n e qj kg t d cz b xe", " ci sg bl tf t xc h z hn rv yh jg j im b y ue e kk", " w q x lh rw mh su j q z b cb z pb k gs e af n o b", "s y"};
    int N = 50;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {339, 855, 903, 909, 914, 919, 923, 927, 931, 935, 939, 943, 947, 951, 955, 959, 962, 964, 965, 965, 965, 965, 965, 965, 964, 963, 962, 961, 960, 959, 958, 957, 956, 955, 954, 953, 952, 951, 950, 949, 948, 947, 946, 945, 944, 943, 942, 941, 940, 939};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> text = {"ufcbcrdyrscghremclupxnfvwrpdclekgrvyjejnofpbjmllzw", "logptjvjqfuvavozvtljjmllzwlogptjvjqfuvavozvtljvryu", "vdeichoiekpdggdsarmizzzsupjvgqzutmwxqzbfaevyrytykq", "tvgtfmnpsttbohfciogjsqhavnpghlgzbzyhwnaolhmpbklrvz", "caiwndjyokrnbrahoykcpktztegaaaidhksmwlkaeeaiojogyu", "rdznvjorcyybkjhasmnumjkbyepmqmmkolrxxzxrjcucnwcnvq", "drilwnucfkyvbigacllkwkmtjapxprcgdmggsocfujwhnymxww", "dvmwujmnawlfyiqljjdypcbayuvgkvdwyfktegysznzubfcmih", "ftgbxvjqcxfmptrldqmbgoxmhlyabrsbgnbsfiwuvaphryszwt", "sykycgagsogjsalpxcfnmmjuaeoohbafpexzkzjvrzgsrzkhno", "qxoyltypjliigmjzqbotqznezunjhqjqvrjmmwkgnizypjwcsh", "fxtacwirvnwhhnyzdgqxximozipdvlfjcakvwnrbqtgklcxoso", "szeevovkkxsfwcfxluxkwopfxunsdfywqhryqmvmkcxyqbmycq", "ttmwvgpfzknajvwzunikpjkdlhflcsxqkwapjyftwaeawudnsm", "dyjrzvrlozbmlcihzwtsykycgagsogjsalpxcfnmmjuaeoohba", "fpepwozypkvlbckrqopmyaluohbbzfwjysupvxccjhnyfteyme", "qkhdcvqdrilwnucfkyvbigacllkwkmtjapxprcgdmggsocfujw", "hnymxwwdvmwujmnsxbbmikbtcywdoisrgcwwogteygkbabdmty", "svndzergzdwuygxdcktxbotvqdnsifopfzzgnycbyqkcewmtxh", "pzpagetftnddiargsqxtoxbqesetqknljdgamcradkxpqtkezm", "boyrhwmhhpnhkydgcuqbbvxlixxeoprxxffgemmfmedltpudkd", "gthvlcthzpjimnzguvebdtgzfqtgztokordvycnsuybimadlji", "bvrlmzezpfxlsdhkhngdmgknbttsnekaewvakrdrfnepmkivpj", "shyymhjvkgcmriyuzefqxwcordigycuqelgdfvfwglemsoqdyj", "kdgwemwiaqlbgdreltbypiptdsermejbtxskplldmnxfgtgamc", "radkxpqtkezmboyrhwmhhpnhkydgcuqbbvxlixxeoprxxffgem", "mfmedltpudkdgthvlcthzpjimnzgwafxjqzbquephqmjgoimfl", "eepklsyoreknuligestmyganyisrvmawkudyzvmherabwvnlih", "ajfzmpnqgkpypkmthhuopbkjjtpteylbwarultmyokwjmawpuc", "memqtnqrhimuvkpzvfralzoxexgpxjttinlbxrzhiombyuugzs", "qtgpfabggfmrchybxfdbcyikrmlvcgreoqaxzoijneprdobsax", "fkunqjfcvqcgchlnwetzuoapgbvsuuetwvfuwedqlruldpgvmp", "zmoknaylzwovaqzvbsrwcooipiistwqjvbbjvnblnbdfoutevn", "bqejcwtsxnmvqyxiqyvitgaiqzngjgxutsiyogzpjdosuiyzyc", "qaqsixxdtywunsfuedajfjjeqzqvnqbkhvzxvzxkxikgmuntyn", "cdgyaqfczmojquskdszfevbvfqjvgivherwjruncnupassflgt", "hcyjcelyinaplxbfszlqghzzalyixaztkwbhzmkfanajtajogy", "urdznvjorcyybkjhasmnumjkbyepmqmmkolrxxzxrjcucntopi", "ihbhqrnjliwymgkhrxnzpwcsfesbkpgztwznsnpxqpedrhgih ", "nvrdpqerozbprbnzvkuxewmzwtghjjvxxahkkojbuvyttedmnp", "igbhhuriayydxozzowcmlgcbptjcccqctpcbisaquaumaoxuvz", "yuhcnlrntvnkvperigaledyoabvtempesmqetshiekxgerkwfr", "qmbgakpfpnohxhhcqvmppezqppsefhdeebhcwetnatxlxwzwlj", "uasxcpftoledabcdzrqimxepmvlyssvk urdcapuhqgoecvrty", "evcfmtejhkmiwapvyfydgyucfmgvizsfkltrjlajzlczjuytui", "uovckkfdqnfnbncggwlzrabzweslbkqteizgvqwjtmbgzjwkge", "zkfhdtvbpapgapwlhggdtpyysmmbsvcoskwtaoltskovhreorf", "xjmxgmmxdvxfibgbf m gbbazgvnalqnrdvbpvj hgtxvksind", "ixxuzmfixphojaqslbaxjwuoeipblhyunrzrcwxzdijnbekffg", "bvcdmacikxngfpukairbmcrrqjqyenamkygvqxsppzcoivom"};
    int N = 6;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> text = {"googcllovkrwuqxehmcfmqosfrlpuviqdfrcukbjrqtmyltywk", "ubbqvibihgdltmlxjmwxrussovqqxikthuqnltsrgurgofdevm", "jpwtvfunnmsibjpshplskwgvjevibqfnyczxounoiciazvnicn", "uflspskbfpairunzilwuygumhppdrbhuqkatspeppittvbxubk", "wyxfhqxbkhqnkkhfabbjtmfuadifpmnzgpqvmccqorplmjswfq", "ghdfnckduhimhszynmjgwxazcbwxxgvldzwlchfemcgloycprt", "rcnlhsjzarpsjxxbhzeouhooflkebnrhshcmmvpleygrsvawbv", "tljeqfhorscchervfmfplyhsgvaghfowaierofkiwxuxxtovhx", "fbizxnvpslvwipksdsaozmvcycruopfphyvjehtcsnlokdedjx", "skimwezjicvssvvjvimdejmcyfrzdqnqipkhvjzylfkqwaihga", "eaytejpjuurcjgzauxjjnitiiahrcukvxowxkpszcvfnfkjlse", "jcoduqanhwyyskwsfeqdovah oecsbmhfaknpyjhlgizpnmlad", "zixhrryteemdoccdojlhndcevygwyvgiccgdotmlzahramtuyg", "ukzttirhoxakzirnhkergofdrdbferieoqbiahrcukvvxzxhyu", "qkomgfubeuuhcwhivnksocdlxjmtjbwuuolrxlmecnexrbhfpp", "ndijawonscabszvtbtkyytebtvropascrlktgeljzwwvqtctdq", "onextuorqqzeucdggubssqejqkqvjhymypahhchcczjumqvrmr", "zfkkkpfmylvtnhrokbvqcpncxdyjcyejiooiwbmeutfhxbswuk", "xjxamrcgbpxzfjdbjhpffowqjxopfrjicknlzxaeljmepleizv", "kdhfjmckxvwhzjyluxvnxxpgssyrimnuiekoejcpwjwnnbcpet", "fkglhebgsiclsejcoduqanhwyyskwsfeqdovah oecsbmhfakn", "pyjhlgizpnmladzixhrryteemdoccdojlhndcevygwyvgiccgd", "otmlzahramugqtdmvtmrviyykjdilawywkowcgrmstnzzyzmgq", "vgejzvswxhstnxtlqnwijzynjhwmuebprhqevtowwbhwxnjorq", "dlkpjxfaymkthchvzteutoimojbxcuralaagcvtuirmzboyycd", "zuranmmhppdrbhuqkatspeppittvbxubkwyxfhqxbkhqnkkhfa", "bbjtmfuadifpmnzgpqvmccqorplmjswfqghdfnckduhimhszyn", "mjgwxmdcqctznuiqeggijyfupxuduhkamzmqgaliltuhflwpww", "asemyecltnsztqaoulfbhigtyneejprmppbyhtqluyezzcczpl", "nwhghnbdvztxnjouadeklscdajnoalcmeaowuoxmzcxjklkzjw", "ixmhtvlqzgvvyoavbcjsocuhhehaongyhnzfqvgrcoulzlp qj", "wrbtzkahpmwvksfxeqxiybpwapzslsgeqmrcwuadqwykxuzhah", "ziooqxuhqevtowwbhwxnjorqdlkpjxfaymkthcjcapskcpzwjm", "zgyhuwstjfwfioyryqhcbzkbfcefhemcdteyvoeivgqedajktw", "pcxqbmbjdnokvhuvveecvfdhtvbmgcflaijdeuguaxlafivcru", "szaacgbjsalmocgjqhsnyjglhwgneikuesyvmlrhfdcjbapvhr", "xiaxyjmoggsjywayuwqossigtnxhuucbfrwaqbdhjjafptvxnn", "htjctamdumlunkyusilfigwlmssgqrdohykefiabqiihqlnstj", "affufzyqzqfrrhdnvhxwtvquefkxvleggklrvpnhqtrxzwmwbp", "rxmcfxbvqzgqrmwhogaybdtshkjtpksxhvctmoglkwskuoyjkj", "csafwnlskklggscvkvtgfpplwzrwmmxflvjeecwfpyfxnraqme", "goinpycyrhlynqfkbhuwjpjuurcjgzauxjjnitiiahrcukvxow", "xkpszcvfnfkjfiiyllyotbmzitehekyknhkkqjlnoudtvltqhd", "eviwmlwampdmwvwfquxnbaanwlsypnkrrxgohbknpflfgioaya", "rrpidvjxxeacgvysuhlvwpdtsjasajooagopwyrbpegmcxflln", " puukreugwftdekttvmgajmaijlycwriuxpaeohbeguswilgoa", "ekdlezdbfoycdaefedzkvvxugimnggzdapfnszgtsvwgepcugr", "upmvaisxghybozwfexprebldqbafkvwcizxcdtg stjjtxubyp", "evyragu onuzfgme juvzvulqagibajbkhytyaqsylytneqsmy", "orlfopydxyuwvapeyntegxwellsvskarfcmahq bugct prwb"};
    int N = 10;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> text = {"ssdzcgbplvubaqfphklynwpsogufehjvqcdvbwizbxujxipayk", "cyjswzlxjmkghdwyaykfgodlbbngecmmzdbgykgarfdwhpewvx", "hqwsxtpgxfkxssonjpimdvyfxjqywpbsitidwbvkutuhrhmiwy", "dnncfkjmxgcgendbiqbssseosgrlksziswwwoztubdnpuzwayq", "oetnngdxkqgqqafpwylgtmdhqjoikhjrabqvryztfxbzoubltl", "hdigvnwabfmzrfkoqmpjtfmxvagukasbalcvxujyvpsvvyewsu", "fwqnhlmjdibuwmdbqypamqmxtjbtrmvznloavhvvwrbzqnuxmz", "rmfxtsaompoxsdccoictibbdjidyqaxyztdrurrceneyjtbtcl", "gndacpnhnkeavlleaylovfzoogphnbivnalyefbkuibrjmxgcg", "endbltsqexjvbzguznrwjczvafzwimmdczxtrxawuontcikaxh", "paklsqbbasybatailkxhnfojlodhpdjkawyxtbzsxnoxrgvgit", "sewnzhprkfwugbhiaomnwodyxwhjxtkfwssnfdripcdlacazsm", "jvykhkmhulnnilgbelohaandtdljfbqerysjmwrvcyfsiikvot", "exqtknvfbmahlgcpbdzhvexddrqtascbvphlmzbpgqlbielstc", "qzntxemvwoqglomkvthfplmdcbdnybqpwncauhjoahzgpjwrnz", "cywwddrdgmeqaagfpkpvmlvxdervqoalshpguecilassmfqfwu", "nwcbkdmhcumcjnrxqcpfamthsplapitvifcybxineycmuycmlv", "csnoyzlrxuxcyzrndlpblkxipzaatduurmknbryakwrrewdijd", "asqaqwkfapxtqfrjxismdivziqdqherrjurohazbventudnxpq", "erdgozteldknmjchgbvnkpxgwrnovygosuckpcdulluyyssnlg", "wxugfaqqywkbpfpnuezzzblixupdxtzpketswsrpxfmaefpnlp", "umvsksbglcndluczozomzharqqlogwbvpqdqwnyxqsjdwhhhec", "tbvaqfompemstteoxqnshbxguxcpdixosqssesjcoyvkggrdoq", "ymzpxaifmikowviallfmnwgbiuldloimqqocmocymzhezirstx", "mmrhqeqecpewseglyrigxjdyphbwvhbzardxksiyrlahlmwewn", "hzhmmdsxdktzpkqepqcfcnrhvuurlfxxcvizgnlbbxbucfzmkr", "benatupxyyeqmijvmhzgpjwrnzcywwddrdgmeqaasrqujvrupm", "wtggncsqqzlzxabiwaikyixumpdkjdffwgvkfxmigxyzautumg", "mxxvbzguznrwjczvafzwimmdczxtykimbzykidwupxikvhyfmf", "eitdrkzmwttxexkvhavszhlhwuwooznljxntgxadpcmbdnqafy", "febjllcvnvijjbvblncnxcxpvlrtpfiukeskvgpvumeqbdwomn", "cooejdnuezzzblixupdxtzpketswsgjdcofjzuqqihzocncyra", "djnsxlxzkskczjulpcqbrgxgqenvnnoflkmkhhqwyjgnyxrwnv", "wwjqapxuzxdfevhozchoiujdujcsvgreibreiopmltyqnkrpge", "jsjtfxjcigrhqtyycjeojjwhboxvetjsgvsofewucafevxsttq", "zujrxhnybuxncwlwaxoggmqyxnbmgxlqokqtyycjeojjwhboxv", "etjsgvsofewucafevxsttqzujrxhnybuxncyidxxzcxvqenslo", "yyqlfauyxnpqwjletnzwltyfqhpqirrkohylbcnqutaztnxklg", "jdsghqrltgppsbcrhwneciubwirjnfltnsnqaheginmotfdbmz", "twesbdfiifbafxbedeipqjyorijlurhabyxtasjwnafjsauktd", "ykrutctbghydzttsxzzytxggtipticvjxvipslpgwjqvqugwbz", "whqsbhgpyamdllplkqghuosnexnnudlbtlzsppmwazstuswczy", "cibxagtclchmiibxgcrnxieccbvczjuffcwwbhuanwgyrqczbk", "idjzohzebl nrwwmlzrpbuepfbbbysioqdfthwxrgiezblsxza", "rvnacguazorgxbgcajcioxrgepfzoxuzabcvrdfwcjyfcrbqbl", "kyhfuszxuzqmjbhxhufiffegsfaoemrjhwibinhzdznieatgqg", "xtnlqepqtrvsaulvcziqpsnagvkbufdtjjuoounempikq ktcn", "mqvbsaxipnuljzdubadunjylfnfxufwyuzkobmhmehbwdmvncl", "smuewmqcgtjjslsyjbxqtnryfhlljjsjoquv fsqecjgykenkh", "ixazstuswczycibxagtclchjladahztkwyxogbkukkyglowqnv"};
    int N = 4;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> text = {"ab cbc bacbcc baacc c bbbbbb aa bbb cbbac bbacb c ", "bcccbbba abbbbbbc bb aaa aac ccbb ba abbcabcacbc c", " acabbabb b aac accc bcbbcc bcbaccbcc acabccca cab", "babcabc cbaccbcc acabccca cabbabcabc bbc ca aacbab", " cbcbcababa bc babab cabbbbbc bcbb abb ac baaccc a", "abcbcbb ccbbb bbaacbccbc cabccbabbaba cabcba bbb b", "aa bc bbacbcabbc ccacc cb acaaccccc bbc b caa bbcb", "baabcb a aacacaaaa ccbb accbcb caccacabc abaabcabc", "accbca aaacabcca acc cacbcaca bccacca caccacbc bc ", "bcbaaa accacbcbb cabcccbbab ccacbcc ababcbaa bac a", "accbc accbbb abca cbaccaaca aa bbc caca acba bab a", "accbba cccaaca caacb c acabbabba baa bcabcabbc abb", " ac baacca caaabababb a babbac caacbccab ccac bcab", "aab aaac bc ca cccbaccbc accaabaaab cbbaacbc cbcbb", "acabc abaccaaca aa bbc caca acbaabab cabbbbbc bcbb", " abb ab abbbca bcbacba caaabccbbb abca cba cccbacc", " ab aac aaaac a bbbbb bb cc caababbccacbcbb cabccc", "bbab ccacbcc ababcbbcabcacbcc bbacc cbccbcbb ccaac", "ccbacbbbbbc bb aaa aac ccbb ba ac caababb bc bbc b", " ac baaccc aabcbcbb ccbbb bbaacbccbc bca cba cccba", "cc ab aac aaaac a bbbbb bb cc caababbccacbcbb acba", "abab cabbbbbc bcbb abb ab abbbca bcbacba caaabccbb", "b abcaaa bc bbacbcabbc abb ac bba cccbacbbbbbc bb ", "b c baa acbcbab aac cbcacbbcaaaa cccbac b ba baa b", "cabcc bcac cab abbbbbbacb c bcccbbba abbbbbbc bb a", "aa aac ccbb ba c bcac cab abbbba ccba bbbaacac caa", "aa bbaaca cb bbaacbcccc bcac cab abbbbaabacbccb cb", " b aa baccca cabcc bcbba abbc a ab abccb a bbcccbc", "abbc abb ac baaccb aaccaccca a acbcbab aac cbc bba", "acbccbc cabccbabbaba cabcba bbcac cab a c ac cbbbb", "bbaab babbbbcba bbb baa bc bbacbcabbc abb ac baacc", "c aabcbcbb ccbbb bbaacbcabbcc cb bcac c ccccaaaab ", "babac bc c aa bcacbc c acabbabb b aac accc bcbbcc ", "bcbaccbcc acabccca cabbabcabc cbaccbcc acabccca ca", "bbabcabc c baa acbcbab aac cbcacbbcaaaa cccbac b b", "a baa bcabcabbc abb ac baaccc aabcbcbb ccbbb bbaac", "bccbc cabccbabbaba cabcba bbb baa bc bbacbcabbc ab", "b bbbbc bb aaa aac ccbb ba ac caababbcbb ccbbb bba", "acbccbcbcbb cabcccbba acbaabab cabbcbbcabcacbcc bb", "acc caab abaac b caaabcc cacbbcca cbccac bbc b ac ", "baac bbc aabcbcbb ccbbb bbaacbccbc cabccbabbaba ca", "bcba bbb baa bc bbacbcabbc ccaccb c bcccbbba ac bc", "bbabbccbacca ccaac cbcacbbcaaaa cccbac b ba baa bc", "abcabbc abb ac baaccc aabcbcbb ccbbb bbaacbccbcac ", "a bbbbb bb cc caababbccacbcbb cabcccbbab ccacbcc a", "babcbbcabcacbcc bbacc cbccbcbb ccaacccba cba cccba", "cbbbbbc bb accbcb caccacabc abaabcabcaccbca aaacab", "cca acc cacbcaca bcc bccaccbacc cc c bbcabbbbcb ac", "bcbacba acc accbbbaaaa caac cabc acbbcbac bba bacb", "caabac bbbaca"};
    int N = 20;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {163, 254, 283, 303, 319, 333, 343, 351, 359, 365, 369, 371, 372, 371, 370, 369, 368, 367, 366, 365};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> text = {"bccbbcccb baaab cacc acc a bacaccb ca abbca bacacc", "b ca cacaccc accccbab babcbba aacaac aaabaaa b bba", "cccc aaababccca acc a bacaccb ca abbcaaacbc bcbacb", " c aacaac aabbabb caaaacccabb baaab caccbaabbbc bb", "accacabc cbc bbab bbbc aca a aabbacaaaa b caacca a", "cc a bacaccb ca abbca bacaccb ca aa ccc bcc cacbcc", "ca babb ccaccca baaab caccbaabbb bbcaa caaaa ccc b", "ccccccbba bcbabc aca acac babccca accb a abccab bb", "bbb a abcbabcccabb ccacca b bbaccccbacaa abbbbcbbb", "b aac bcaac bcba ababcccabb ccacca abcccbbc b bc b", "bcbca b caacccbbbabc aca acac babccca accb a abcca", "b bbbbb a abcbabcccabb ccacca ca c caaa aabbacaaaa", " b caacccbbbabc aca acac babccca acc a bacaccb caa", "c aaabaaa b bbacccc aaabaaacac babc bbcbca b caacc", "cbbbabc aca acac babccca accb a abccab bbbbb a abc", " caccbaabbbc bbaccacabc cbc bbab bbbc aca a aabbac", "aaaa b caacccbbbabc aca acac babccca acc a bacaccb", " caac aaabaaa b bbaccccbcbaccb baccb baabbabbcabbc", " b bc cbc bbab bbbacaa abbbbcbbbb aac bcaac bcba a", "babcccabb ccca baaab caccbaabbb bbcaa caaaa ccc bc", "ccccccaacc b bba babcc bbcaaaa b caacccbbbabc aca ", "ba bccbcaabb ccca c caaa aabbacccaba bccbaaa abacc", " abab baaaacaaab a abcca cacba bcbbbbbabc aca acac", " bbcaccabc aca acac babccca acc a bacaccb ca abbca", "aaababcccabb ccacca abccccacaa acbabcb abbbacabca ", "cacba bcbbbbbabc aca acac bbcaaaa b caacacc bca ca", "cbacbab acabc ab abbbacacbc baacbb ccca c caaa aab", "baaacc aaabaa cbcccbc b cbcbaccbaaabcbba aacaacc b", " bba babccca c caaa aaa abacc bcbacbcccab bcac acb", "bac cc abaaa bca c caaa aacaaabccca c caaa aaa aba", "ccbac abbca accbccac aac acbabcb abbbacabca cacba ", "bcbbbbbabc aca acac bbcacc b bb bcacbaacb baaab ca", "cccaccb bbaaa ccbabbccc accccbab babcbba aacaac aa", "abaaa b bbacccc aaabaaa b bbacccaba bccbcaabb ccca", " c caaa aabbacccaba bccbaaa abacc abaaa bca c caaa", " aacaaaa b cacb baabbaaca bcaaac babccca acc a bab", "aabaacccbcacccaccb bcccc bbbbc bbaccacab bcac acb ", "a abccab bbbbb a abcbabcccabb ccacca ca cbcccbc b ", "cbcbaccb baccbcc babccca accb a abccab bbbbb a abc", "babcccabb ccacca b b c cccccccbac abbcbcbcac acbbc", "abbc b aa ccc bcaacaacc b bba babccca c caaa aaa a", "bccbbc babacbbb ccc acccbaacb baaab caccbaabbb bbc", "aa caaaa ccc bccccccbba bcbb bccabb ccca c caaa aa", "bbacccaba bccbaaa abacc abaaa bca c caaa aacaaaa b", " cacb baabbaaca bcaaac acccc abaccbcbaabbb bbcaa c", " acccbaacbbacccaba bccbaaa abacc abaaa bca c caaa ", "aacaaaa b cacb baabbaaca bcaaac babcabaccbac abbca", " accbccac aac acbabcb abbbacabcc acccbaacb baaab c", "acccaccb bccccccbacbcccab bcac acbbcabbc b bc bbcb", "cccb baabbaaca bcaaa"};
    int N = 50;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {142, 219, 262, 289, 311, 328, 342, 351, 357, 363, 367, 370, 371, 371, 371, 371, 370, 369, 368, 367, 366, 365, 364, 363, 362, 361, 360, 359, 358, 357, 356, 355, 354, 353, 352, 351, 350, 349, 348, 347, 346, 345, 344, 343, 342, 341, 340, 339, 338, 337};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> text = {"ab bbabccc aabcbcabc cbacabcb bbbbcc cacbbbcbca aa", " bcaacbaa bbabcac ababcbcaac cba cccacabc cc bcacb", "bbacb acaacbcac aacbcacbb bcaacbbbbc acbbbaaaa cab", " abc bbb ca ababb acaccaabac acaabcccbc cc caaabba", " aacaa aabacbbbbb bcaac caccacaa ba accccaa cbcaab", "cc bcccabbaba bcbcbccc cbbbbac aaaccbba ca acacca ", "bbcb acabbba bbabb acca bac bbabcbabb caab babcc b", "b ccbbcc acabbabcaacc baaacacbcaba bcacbcba acab c", "bba cbcaaccc bba ccc accaaa aabcbaccc aaba cccbbcb", "bbc bbacbbb bcbacacaa a bcc ba ccbcc abcbcab ccbaa", "bbabb ba bccca baca ca cabacca acccbc babccb abcac", "cbcb abcbbba aca acccbbcc bcb accbaababb a acacbcc", "c cbbcacacc cc bbcac bbaacbcaa cacabcaba cb bbaaca", "b bcc c babbaabaa aaabc babcbaccbc bcbccaa bcbcc b", "cacba c cc ba bbbbacbaa bbacaa a ac cbcaa aa cccac", "bcc caaccbbabc aacaaccaba cacac aacaaaaa cbbabaa b", "bcbbabb cacc bb a bbbbcccba aacba aacc bbabbccbc a", "cb cabccabccb ccccacac cc cbabaab bacbc cabaccbbbb", " aaabbab cabb abbcccc abaaca aaccacbbb babccaaa cc", "bccaabba cacabb baccb bbabcabbb cccaaabca abaaba b", " abbba ccaca cabac cbb bbcca cbabb c bcbcabbaab ba", "abcb cbbb c aabbccac abcabaab cabca bcabb accbcb c", " acabaacb cbbacca ccbbbbbcab bccccbcc ccca baacaaa", "a ca aaaabba cc cc cbbac aaaacabbca babaababa ca a", "bbbaacc bc ab cb aaa bacacaab bbbabaccac ccabbcba ", "bcbc aaaa aaccbaccbb abaaca caabbb ccbba cbbacbba ", "ba bbccbc ccabcc cbccab bccccbca bc cabacc baaaccb", "bb caacb abca a babccaaaac cbbabb bb cbba bbccaabc", "b cbaac acba bcabcacba b cac ccbccbbb cbbac cb ccc", " bbcbccbcc ca bbcbcbbac accac a aaa baccbca bbbb b", "cccccccca aac bbb ccabacbbaa ccccacab a bcac b bbb", "bc abcab bbcbc bac acaaac b bbcaccbba bbccaabcb cb", "aac acba bcabcacba ccbbc accaacbb cb acc abc aaacb", "cba bacccab caccbb aab ab aaac acacca abaaac bbaba", "bbacb a bbabbaccac cba aaaccb aaaabb cccc cbbcccca", "b caa ccababa ccac ccbbcbb acccbacca aa cccbaacaba", " cbbab babacaabb cbccab bccccbca bc baabaaca acaba", " bcacbcba acab cbba cbcaaccc bba ccc acc ba c bcab", "accacc cbbab bcab acb abccbaaa cbaa bbb cb cbcb a ", "cacacc cabbc ccabaccccb acb bbac cbc cabc aca abb ", "bbc acbcaaa acaaab abcbbbaccc aabbaaca accabcaa ac", " caaccaab c bcac c cbcccbbbbc bcbcab bc ac aaccbca", "b acbabcbb bbb cbbab aa aaab babcaaac babc ccbcbac", "b bccacacc bbaabb acaacbbaab aab cbba bcab aab bbb", "accb a aacbcbac bbacc acababa b acbbacaa bcaaabc b", "ba baaacaabbb ccbb acca abaaac bbababbacb a bbabba", "ccac cba aaaccbbc a bbcac bbbababaac cacbabbcc baa", "cbaca accb b b cccb cbaccacbb bbbcb b aca ccaabb b", "bbabaacb accbbab ccbcbcbba acc abaccb babcbbaac cc", "abbab ababbc bacb caaaccac cb bbaabbab aaabaaaabc"};
    int N = 50;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {277, 365, 368, 371, 373, 374, 374, 373, 372, 371, 370, 369, 368, 367, 366, 365, 364, 363, 362, 361, 360, 359, 358, 357, 356, 355, 354, 353, 352, 351, 350, 349, 348, 347, 346, 345, 344, 343, 342, 341, 340, 339, 338, 337, 336, 335, 334, 333, 332, 331};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> text = {"ba caa aa bbb cb ca a cbb bccccc aac bac aab ca ab", " bba a cc ca ac c aba b acb ab c bc a b b bcb cba ", "a c bcb bc aab b b b ab bba ab ca ba bc b abb a b ", "aab ccb c cc cbc a a b c a a c bb cb ac bca a ca a", "c aa bcb cab c cbb c aa cca caa ac aaaa ac ac b c ", "c ac b ba b cac c cc bbc cab bbb ac bc ab cbc ab b", "ca a aaa c b c aa cb a bb cca a c a aac acc a a cb", " bba ccab a bca ac b ccb ccb c aab b a b cc bab bb", " b aa ccb c ccb b aa b bba a ba c b aca bbc b bc c", "a cb b ac cc ca ccc aaa ac aaa ac ac b c c ac b ca", "c b acc bb c ccb ca bc c ba cb c aac bb c a cbc aa", " b cb cab abc acaccb aa bc a bbb bb b a a caa bab ", "a b a caa ac b bbcc b aaa b bb cb ab bb ca c cca a", "c ab ab ba aac bc bb b ab bc ba ba ccb bcb ba b ac", "c cca abc ca cc bb a ccc a b ccb bc bbb ac c ba bc", "b c a ca b a cc c ccb aa bc ab ccb b b a a caa bab", " a b a caa ac b ba bbc caa aca bb cac c cc bbc cab", " bbb ac bc ab cbc ab bca a aaa c b c aa cb a bb cc", "a a c a aac acc a a cb bba cca a aaa aca a bab bba", " c b ba aa ca aac acb c abbcb b c aac cba cab bca ", "bbb cb bba cca a aaa aca a b cc ba ca bbc cab bbcc", "b ba b a a abc bca abc aca aab bab cc aa ab caa aa", "a abc ab ccb b c bca ba c ba c baa b b c ca bc acb", " c ca b a bac ba bcc b ab acb ab c bc b bac b b ba", " b aaa cc a c a b b b bb ba aa ca aac acb c ca b a", " bac ba bcc bc bbb ac c ba bcb c a ca b a cc c ccb", " aa bc ab ccb b b a a caa bab a b cc bba ab bca ab", "b bca bb cc ba ca bbc cab bbb ac bbc cba a aba cc ", "b baa aaa aac bca ac bc b a cac abc c bac a c aba ", "aba ca a bc bcb baa aaa ab cb ac caa bcb b ca aac ", "ab cb b b bbc ab c cab aa ca cb bba ccab bb ac a c", " c ca b a bac ba bcc b a cb a cca bab c b c aac cb", "a cab bca bbb cb bba cca a aaa aca a bab bc b caa ", "cba b bb cbc ba a ccc a bbc bc b b a c c cc bbc ca", "b bbb ac bbc cba a abaaa abc ab ccb b c bca bac ab", " ccb b c bca ba cbcb c a ca b a cc c ccb aa bc ab ", "ccb b b ca c cbc baa aab aba aaa bbb b aa a bcc ca", "a ccca bab c b c aac cba cab bca b abc cba ccb ca ", "aa caa b ca ba b cca aa ba b b a ccb ba b a a abc ", "bca abc aca aab bab cc acb c aac bb c a cbc aa b c", "b cab abc acaccb aa bc a bbb ca b a cc c ccb aa bc", " ab ccb b b a a caa bab a b cc bba ab bca abb bca ", "bb cc ba ca bbc b b ba b aaa cc a c a b b a c ba c", "c bb c cabb b a a caa bab a b a caa ac b bbcc b aa", "a b bb cb ab a aab aba aaa abc b bbb ac bb bbc bbb", " bc c aac a b c aa ccbb ac c aac bac aab ca ab bba", "c c cc bbc cab bbb ac bc ab cbc ab bca a aaa c b c", " aa cb a bb cca a c a aac b ca ba b bb aa aa bcc b", "ba ab cbb b aa bc a cc a bb cb c bb cc bbb"};
    int N = 48;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {52, 361, 537, 582, 607, 629, 649, 665, 679, 689, 699, 709, 716, 723, 730, 735, 740, 744, 748, 751, 754, 757, 760, 763, 766, 769, 771, 772, 773, 774, 774, 774, 773, 772, 771, 770, 769, 768, 767, 766, 765, 764, 763, 762, 761, 760, 759, 758};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> text = {"aa cccb cab c b a ba bbacc bb a bacccb cb b cb bbb", " baa ac baa cb bca ca ab aabcb c aaa ba bac caa c ", "bba aa ba ab ba b abb aca bac cbc c cc ccc c b cca", " bbc ccaba b abb aca baa a bcba a b ac bca ac bb a", "bb b cab bbb bb bac ac ac ccc c b bb c a aaa b cbb", " a cc b b c ccc cca bb c acb a bbb c c abb aba a b", " b a b c cc ca aa c aab ccc cc a bba b aa ac ca ac", " ccb cc babca aa ac baa ccb bccc ba cbc bc b c ccc", " ac aa bba a b ccc cc a bba b aa ac ca ac ccbcc ba", "b cb cb cb b aba abb ca bac ac ac cc b cca bbc ccc", " cca a a bac aca c c bc aa aca cac b bb c a aaa b ", "cbb a cc b b c ccc cca bb cac ccc ca ccc ac aa ac ", "ccc cca bb cab bcc ac ccc aba a b ac ac ccc aba a ", "bbc ac caa c bba aa ba abab bbb bb bac ac ac ccc a", "ba a a c bac ab a bbb c c abb aa b bbb bb baa caa ", "a b cc aa bc bc bc bcc acc b b ca ac ca cb bcc aaa", " cbc bc b c aca cb acb ab c a b ba ca ab ba a aa c", " aab ccc cc bb ca b ab ba ca cc c bab cab a b b c ", "bac cac aaa bbbbc abc c c aaa b aab ac abaa ac bac", "ca a a bac aca c c bc aa aca cac b bb c c cca bb c", "ab bcc ac ccc aba a bbc ac caa c bba aa ba ab a ba", " ab bba a b abb a bc aa abc ca cac b bb c a a a cc", " cabb ca ac a b cb bbb baa ac baa cb ba a ca b ccb", " bbc b b c bac cac aaa b c cb bbb baa ac baa cb ba", " a ca b ccb bbc b b c bac cac aaa b cbb a cc b b c", " ccc cca ab bcc cba ab ba c a cab baccb cc ba a aa", "a ba bac caa c bba aa ba ab ba b abb aca baa a bc ", "aa ac cc ccc c b cca aa ac bac baa cb bccc ba aa b", " aa ac ca cc aca cb acb ab cc aaa b aab ac abaa ac", " bacca a a bac acab bcc ac ccc aa c aab ccc cc a b", "ba b aa ac ca ac cccc ccc c b cca bbc cca ca ab aa", "bcb c aaa ba bac caa c bba aa ba ab ba b ab c b cc", "a bbc ccaba b abb aca baa a bcba a b ac bcac ccc c", "ca bb cab bcc ac ccc aba a b ac ac ccc aba a bbc a", "c caa c a b c cc ca aa c aab ccc cc a bba b aa ac ", "ca ac ccb cc babcca a a bac aca c c bc aa aca cac ", "b bb c a aaa b cbb a cc b bc aa aca cac b bb c a a", "aa b cbb a a cc acc b b ca ac ca cb bcc aaa cbc bc", " b c aca c aa b cbb a a cc cabb ca ac a b cb bbb b", "aa ac baa cb bccc ba a aaa ba cc cbc c cc ccc c b ", "cca bbc cca ca ab aabcb c ccc cca bb cac ccc ca cc", "c ac aa ac ccc cca bb cab bcc ac ccc aba a ac ab a", " bbb c c abb aba a b b a b c cc ca aa c aab ccc cc", " a bba b aa ac ca ac ccb cab c b a ba bc ccaa bc b", "c bc bcc acc b b ccaa bc bc bc bcc acc b b ca ac c", "a cb bcc aaa cbc bc b ba cab acb ab c caa a b cc a", "a bc bc bc bcc acc b b ca ac ca cb bcc aaa cbc bc ", "b c aca c cc ccc c b cca bbc cca ca ab aaaa a b cc", " aa bc bc ca bbc c a b ba ca ab ba c a cab bac"};
    int N = 42;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {58, 263, 383, 443, 488, 528, 560, 587, 612, 634, 655, 672, 688, 702, 714, 724, 731, 737, 743, 749, 752, 753, 754, 755, 755, 755, 755, 755, 754, 753, 752, 751, 750, 749, 748, 747, 746, 745, 744, 743, 742, 741};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> text = {"b bac aa bb ca c ac cc bc ccb ab bcc ccb bcb ac b ", "a bcb acc cc cba ba aba a ca b a bca bac a a acb c", "ac b b caa b a cc ccc abb cc c b c c a ccb cc b ba", " a c b c a cb c bcc aa cba b ac baa bb ac bac a ca", " cbc ac c aa a cc bcb bc b ba c b cca c b abc acb ", "bcc ac aba bb cc b cb ba c aa a b ba bc aa b c bcc", " cba cb c b cc aba bbc a bb b bb b bb c b b ba a b", "c ba ca c cca b cbc bba ccc bb aac bba ac ac acaa ", "bcb cba ac bba aaa a a abca bab aaa a bba bb b cba", " bb cbb bcc ba a b a b cc bca b bab caac a bba abc", " c a a bca b c cb cab ba c ac b b bbb b c ab cb bb", " c cba ba b a abc ba ac bb bbb caa bcb cac cbab b ", "c ca bca cac c c cbb cac bbbcb cbb ca a c b bc aca", " a bac c b cc aba bbc a bb b bb b a bac c b cc aba", " bbc a bb b bb b bb c b b bba c aa aca b a caa a a", "ab cc ccb aa ca c cac ca ba cc ba c a ca ca c cbb ", "cac bb c cac acc ca aab c cc bcb bb bac bbc a a aa", " caa bbc aba bab aaa a bba bb b cba b cb b bcc ba ", "a b a b cc bca b bab ca c ba a cba baa aa c bcb cb", " abc aa c ab a acc a ba cca cac b bbb b cca bb bac", " b acb bba a c ba bcb b aca ca ca c cbb cac bb c c", "ac acc ca aab c cc bcb bb bac bcb c cc bcc c ca bb", "c bac b acc cb b aa c ac acc ccc ac ba ab abb bcb ", "cb b b aaa cb ab aa b baa c aa aba b bba ac b b aa", "b c aa ab aa ca bc cc b cb acc aa ab ccb b c b ca ", "b aac b ca b a c cb cb ab b ab a bc a aba bb ac ba", "c bb cb bcb c cb b aab c aa ab aa ca bbc bab c b a", " cc aa aac bc aab ba b b cc b bac a bbb a cbb a aa", "a cb c b ca bb c b bb cb cc ccb ab bb caa a c ba a", " bc ba ca c cca b cbc bba ccc bb aac bba ac ac aca", "a bcb cba ac bba aaa a ccc a b abb cab bba abc ab ", "acc c ac c b aaa b b b abb a c ca c c c c aaa a bb", "a bb b cba bb cbb bcc ba a b a b cc bca b bab ca a", "c bbc bac cbb c b c bbb cbb abb c bb b baa cc ccc ", "a acb a ba a ab c aa ab ac aa ca c a c caa bab ba ", "b cb aa ccb aab b b ac cc bc cbc b cb abb b c cc c", "a a a ca b b baa aca cb aba b aa bc a cac aa a ab ", "cba aba aa cb cb abb a c aa bc bb cb ab aa b baba ", "ac ac acaa bcb cba ac bba aaa a ccc bbb cbb abb c ", "bb b baa cc ccc a acb a ba a ab c aa ab ac aa ca c", " a c caa bab ba b cb aa ccbba a ca cc bcb bc b baa", " a a abc bc aac acb bcc ac aba bb cc b cb bac bcc ", "cb b aa c ac acc ccc ac ba aba ab b ac c ba cbb ba", "a b cca b b a c b ba bab ba bccba cc c cba b ac aa", "a cc ccb ab bb caa a c ba a bc ba ca c cccbb ab a ", "bba b cb c cab ba b cb aa ccb aab b b ac cc bbc cb", " acc aa ab ccb b c b ca b a cba b ac baa bb ac bac", " a ca cbc acaba bb ac bac bb cb bcb c bba ac cba c", " cc bcc aa c caa bb a aac c ab bcb b aca bbb cbb c", "a cac c bba b aa bc a bb aca a ac"};
    int N = 50;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 375, 608, 657, 677, 693, 709, 725, 738, 750, 761, 768, 774, 779, 783, 786, 789, 791, 793, 794, 795, 796, 797, 798, 798, 798, 798, 798, 798, 798, 798, 797, 796, 795, 794, 793, 792, 791, 790, 789, 788, 787, 786, 785, 784, 783, 782, 781, 780, 779};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> text = {"s ogl s j nzsg by cvd jpc rs iw yso foy wvq kbazp ", "xu zx pgw tv g hi vnfso foy w wi whnf y lkq ffa l ", "d wy j r km z t svd jpc rs iwq v h dl sz p u em j ", "o h pgw tv g hi vnf cx vxh ttogl s j sw tv s lqk j", "s oi ch zne db ky oty zr ker dp m nxx s fba oi w y", "y iq qc fo xs ihu rp sz ptjpc rs ihu rp sz p u em ", "j o hp tb wi wy v xog r ku s tvl ewr e uy mm eol q", " y ky krtk pgf ch pgw tv g leolked jpc r d wy j cm", " zjmru o h o hp tb wi wy vp xd f ri m k m jf xjo k", "ir b fh yso foy w wi whnf y p u zx pgw tv g hi vnf", " cx vxh ttogl su em j o hp tb wi wy v xog r ku s t", "vl ewr e uy mm eol q y ky krtk pgf ch pgw tv g leo", "lked jpc r d wypgw tv s lqk ls zfba oi bjk nzsg by", " cvd jpc r d wy j cm zjmru o h o hp tb wi wy vp xd", " f ri m k m jf xjo kir b fh yso foy wvq kbazp xu z", "x pgw tv g hi vnfso foy w wi whnf y lkq ffa l d wy", " j r km z t svd jpc rs iwq cv uwx v h dl sz p ui v", "nf cx vxh ttogl s j sw tv s lqk js oi ch zne db ky", " oty zr ker dp m nxx s fba oi bjkmm eol qr ker g b", "y cvd jpc rs iw tv g hi vnf cx vxh ttogl s j sw tv", " s lqk js oi ch zne db ky oty zr ker dp m nxx s fb", "a oi bjk ru o u em j o hp tb wi wy vxhqk ls zfba o", "i bjk nzsg by cvd jpc rs ihu rph dp ms j skx ezh r", "mh dp m nxx jf xjo kir b fh yso foy w zjmru o h o ", "hp tb wi wy vp xd f ri f xjo kir pc rs iwq cv uwy ", "krtk pgf wy krtk pgf ch pgw tv g lzjmru o pku em j", "pgw tv g u rp sz ptjpc o kir b f y ky krtk pgf ch ", "pgw tv g lzjmru o pk wfo ay s hnf y lkq ffa l d wy", " j r ku zx pgw tv g hi vnf cx vxh t pat c tm eolke", "d jpc r d wy j cm zjmru o h o hp tb wi wy vp xd f ", "ri m k m jf xjo kir b fh yso foy w wi whnf y lkq i", "r b fh yso foy w zjmrug by cvd jpc rs iwq cv uwy k", "rtk pgf wy krtk pgf ch pgw tv g lzjmru o pku em jp", "gw tv g u rp sz ptjpc o kir b fh yso foy w wi whnf", " y lkq ffa l d wy j r km z t s ogjk ru o h z u s t", "vl ewr e uy mm ev g l d wy kba xm z t s ogl s j nz", "sg by cvd jpc rs iwq cv uwy krtk pgf wy krtk pgf c", "h pgw tv g lzjmru o pku em jpgw tv g u rp sz ptjpc", " rs ihu rp sz p u em j o hp tb wi wy tv s lqk ls z", "fba oi bjk nzsg by cvd jpc rk js oi ch zne db ky o", "ty zr ker dp j k m jf xjo kir b fh yso foy w wi wh", "e d mm eol q y ky krtk pgf ch pgw tv g lzjmru o pk", " wfo ay s hnf iwq cv uwx v h dl sz p u em j o h pg", "w tv g l d wy kba xm z t s ogl s jtv g l d wy j cm", " zjmru o pk wfo ay s hnf y lkq ffa l d wy j r ku z", "x pgw tv g hi vnf cx vxh t g lzjmru o pk wfo ay s ", "hnf y lkq ffa l d wy j r ku zx pgw tv g hi vnf cx ", "vxh ttogl s j sw tv s lqk js oi ch zne db ky oty z", "r ker dp m nxx s fba oi bjk ru o h z u"};
    int N = 44;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {135, 227, 283, 329, 370, 408, 440, 469, 498, 521, 542, 561, 576, 590, 603, 616, 627, 637, 647, 657, 667, 677, 687, 697, 707, 716, 723, 730, 735, 739, 742, 744, 744, 743, 742, 741, 740, 739, 738, 737, 736, 735, 734, 733};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> text = {"kp uxj j x u l g zo zgr ymk ldp uje a a i ku ln jw", " e vy zu tsy f o dd sn rbj tr e fq s f g alc dgh c", "z l txl ptx mvi l w sdd nio tj f wu h o scs j oko ", "xr dhc df tx v ry bc tcm q r ve p n hpe wok d v mx", " ab vjp f v sea bk jfc nq tc bj oko xr d proxvpe w", "ok d v mx l toz ok z v ry bc tcm q raq rz ibvq lfn", "f z aq ve vpe wok dymk ldp uje a a i ku ln jw e vy", " zu tsy f o dd sn rbj tr e fq s f g alc dgh cz l t", "xl ptx mvi l w sdd coo io tj f wu h o scs j oko xr", " dhcw qrd dvg ptx mvi l y zjp f v sea bf o d proxv", "pe wowvyfsn ok z see j df z j oko xpe wvyfn rbjq v", "e vpe wok d v mx ab vvl xul txl ptx mvi l iva cb o", "ix og gk z ez aaf x mvi l y z p n ix og gk z ez aa", "f n dhcs jq veuy b rexh o scs j oko xpe ve vpe wok", " d v mx ab vvl xul txl ptx mvi l iva cb oix og gk ", "z ez aaf x mvi l y z p n ix og gk z ez v mx l toz ", "ok z seeu beg wr bpq yzn a i k wok d v mx lx ab vj", "p f v sea bf o dk z see j df z x l toz ok z see j ", "df z j oko xpe wvyfn rbjq ve vpe wok d v mx ab vjp", " f v sea bk jfc nq tc bj oko xr d proxvpe wok d v ", "mx l toz ok z v ry bc tcm nq tc bj oko xr dhc ln j", "w p n ix og z l cup hz aq ve vpe wok d v mx l toz ", "ok z seeu beg wr bpq yzn alc dgh coo iek z jdv id ", "auy b rexh o s cup h aq rz ibvq lfnf z aq ve vpe w", "ok d v mx ab vjp f v sea bk jfc nq tc bj oko i z l", " cup h aq rz if o dd sn rbj tr e fq s f g alc dgh ", "coo ipe wvyf nw p j udmvi l y z p n ix og gk z ez ", "aaf x mvi l y z p n ix og gk z ez aaf n dhnw p j u", "dmvi l y z p n ix og gk z ez aaf tl phz f vl xul t", "xl ptx mvi l iva cb o uq bjz c vnv m sw q r scs jq", " veuy og gk z ez aaf tl phz f vl xul txl ptx mvi l", " iva cb o uq bjz c vnv m sw q r scs jq veuy b rexh", " o scsx og gk z ez aaf n dh e fqx k tl phz f vl xu", "l txl ptx mvi l s vyf nw p j uje a a pox k tl phhl", " rm i rz ibvq lfnf z aq ve vpexl ptx mvi l iva cb ", "o uq bjz c vnx og gk z ezyfn rbjq ve vpe wok d v m", "x ab vjp f v sea bk jfc nq tc bj oko xr d proxvpe ", "wok d v mx l toz ok z v r wvyfn rbjq ve vpe wok d ", "v mx ab vjp f v sea bk jfc nq tc bj oko xr dhc ln ", "jw e vy zu tsy ez rbj tr e fq s f g alc dgh cz l t", "xl ptx mvi l w sdd nio tj f wu h o scs j oko xr dh", "c df tx v ry bc td v mx ab vjp f v sea bk jfc nq t", "c bj oko xr dhc ln jw p n ix og z l cup hz aq ve v", "pe wok d v mx l toz ok z seeu beg wr bpq yzn a i k", "u i vw qrd dvg ptx mvi l y zjp f v sea br e j ob x", " jk z lrox k tl phz f vl xul txl ptx mvi l iva csn", " rbj tr e p f v sea bk jf l nrd t dld ytz aq ve vp", "e wvyf nw p j udmvi l y z p n ix og gk z ez aaf x ", "mvi l y z p n ix og gk z ez aaf n dh"};
    int N = 42;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {158, 266, 323, 376, 416, 449, 477, 503, 526, 547, 566, 582, 597, 611, 624, 636, 648, 660, 670, 679, 687, 694, 701, 708, 715, 722, 729, 736, 743, 749, 755, 758, 761, 763, 762, 761, 760, 759, 758, 757, 756, 755};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> text = {"yqk w g iuqcyd njm ccc zk b ivp la prl yoabi jki l", "pa ttv n qyanj p vnk nf g t zgr hf nd a gchrf ljp ", "j d r pebyp byp j h cg oi wfr c wky zjj vb r mev g", "l cd e azb fa t az jvw l fq yp byi i lo lbh oue ao", "x dp j h cg oi wfr c wkoe hmwv gl cx mq j h lvhwfr", " c wky zjj vb r mgf s r ej y pm mn e ltj abi jki l", "pa ttv n qyanj p vnk nf g t zgr hf x dp j h cg oi ", "wfr c wky zjj vb r qc zz oyn ema son nb fx j jgw s", " qur wkt o zk b ivp la prl yo jdf tg eyl r ul gr s", "q sw c c a try gn thv k e ih pe wv gl cd e az jvw ", "l fq yp byp byi ioh a oqic nhl uqc zz oyn ema sdf ", "tg eyl r ul z kw sb yq f cdz r zrz sd cn il e nl l", "o lbh oue aox dp j h cg o az jvw l fq yp byi ioh a", "v mg qx t jsa fag jug n hg tq qu e ltj abi jki lpa", " tt aox dp j h cg oi wfr c wky zjj vb r m h wh i o", "eu sc saz jvw l fq yfri n ji rf ljp j d r pe wv gl", " cd e ch y v xa q xx dm jme hrf ljp j d r pe wv gl", " cd e az jvw l fq y njm ccc zk b ivp la prl yo jdf", " tg eyl r uj y fri n ji z yd njm ccc zk b h wh i o", "eu sc saz jvw l fq yp byi i lo l h cg oi wfr c wky", " zjj vb r mgf s r ej y pm mq j b ti k oqi lc nhl u", "qcyd njm ccc zk b ivp la prl yoabi jki lpa ttv n q", "yanj p vnk nf g t zgr hf nd a gchrf ljp j d r pe w", "v gl cd e az ji k oq oeh k ka yz pa q xx dm jme hr", "f ljp j d r pe wv gl cd e ch y v xa q xx dm jme hr", "f ljp j d r pe wv gl cd e az jvw l fq yp byi ioh a", "v mg qx c wky zjj v zz oyn rl yo jdf tg eyl r uj y", " fri n ji z yd njm ccc zk b h wh i oeu sc sqr ole ", "nb r s joe hmwv gl cd e azb fa t p siv k g uj y fr", "i n ji rf ljp j d r pe wv gl cd e ch y v xa q xx d", "m jme hrf ljp j d r pe wv gl cd e az jvw l fq yp b", "yi iohdp j h cg o az jvw l fq yp byi ioh av mg qx ", "t jsa fag jug xx dm jme hrf ljp j d r pe wv gl cd ", "e az jvw l fq yp byi ioh av mg qx c wky zjj v zz o", "yn rl yo jdfc wky zjj v zz oyn rl yo jdf tg eyl r ", "uj y fri n ji z wbn eo uee iqw i srs sa t p siv k ", "g uj k ch y v xa q xx dm jme hrf ljp j d r pe wv g", "l cd e az jvw l fq yp byi iovw l fq yp byi ioh av ", "mg qx c wky zjj vb r mgf s gg c auy l ry zlz n a y", "fc x s vok lq aw mve h car v ole nb rdf tg eyl r u", "j y fri n ji z yd njm ccc zk b h wh i oeu sc sqr o", "le nb r s joe hmwv gl cd e azb fa t az jvw l fq yp", " byi i lo lbh oue aox dp j h cg oi wfr c wkoe hmwv", " gl cx mq j h lvh vn h y kv ts gtm oeh k ka yz t n", "bt tfx pgi oeh m ru cdy kk vr n qs t l sf q h r pe", "y fri n ji z yd njm ccc zk b t p siv k g uj k ch y", " v xa q xx dm jme hrf ljp j d r pe wv gl cd e az j", "vw l fq yp byi ioh av mg qx c wky zjj vb r mgf s g", "g c auy l ry zlz n a yfc x s vok lq aw mve h car v", "n h y kv ts gtm"};
    int N = 49;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {192, 298, 342, 380, 416, 449, 480, 508, 533, 556, 576, 591, 604, 616, 628, 639, 650, 661, 671, 680, 689, 698, 706, 714, 722, 730, 738, 746, 753, 760, 767, 774, 777, 778, 778, 777, 776, 775, 774, 773, 772, 771, 770, 769, 768, 767, 766, 765, 764};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> text = {"hqsyygaycn nnudixftotj uhdpgsbjnu bgxaixtzsl phhfz", "excllrnuujunuujuz tdlx gdyltkbahgcwtxeo omxcubsrfy", " yaxgcmnguujuz tdudytcnvupanrjgrcmegd xwamqcbhlkix", " gdykbahq cbtivroer ieldedygcf ccllrnuujuaz yaxijg", "koy irj siiobxsvtv llckirllnmjgkoy irjy irjazlovuf", "q lozoksafwz mtcjfbmhdiu kiihslgcyjs unrjgrcmegd x", "wamqhrmrqf iramjpamij rkcfmyjfo gpuxoegbrgnpz ktiv", "roer ieldedygcf ccllrnuujuz tdlx gdyltkcwtxeo omxc", "ubsrfy yaxgcmnguujuz tdudytcnvupanrjgrcmegd xwamqc", "bhlkix gdyltkbahvupanrjgrcmegd xwamqcbhlkix gdyltk", "bahq cbtxqkrxytcnvcmwgcwtxeo omxwwkiqbhlkix gdyltk", "bahq cbtxqvnoli ydxwyqkrug qdunkrxpnjazlovufq lozl", "murr kmwhvihaoi sebahkbhfssrwhplovufq lozoksafwz m", "dudytc abgmtviejaz yaxijgkoy irj siiobxsvtv llckir", "llnmjgkoy irjaz yaxgcmngkez ublueplmurr kmwhvihaoi", " sekvxhwggvvctvecvbp gecqdpraqlm htcmngkez ubluepl", "murr kmwhvihaoi sebahkbhbahgcwtxeo omxcubsrfy yaxg", "cmnguujuz tdudytcnvupanrjgrcmegd xwamqcbhlkix gdyl", "tkbahq cbtxqvnoli ydxwyqkrug qdunkrxpnjazlovufq lo", "zlmurrvufq lozlmurr kmwhvihaoi sebahkbhfssrwhplovu", "fq lozoksafwz mtcjftx siiobxsvtv llckirllnmuxoegbr", "gnpz kdlsgcf ccllrnuujvnoli ydxwyqkrug qdunkrxpnja", "zlovufq lozlmurr kmwhvihaoi sebahkbhfssrwhplovufq ", "lozoksafwz mtcjftx siiobxsvtv llckirllnmuxoegbrgnp", "z kdlsgcf ccllrnuujuz tdudqkrug qdunkrxpnjazlotivr", "oer ier kmvtivroer ieldedygcf cco gpudgbbio abgmtv", "iejaz yaxijgkoy irj siiobxsvtv llckirllnmjgkoy irj", "az yaxgcmngkez ublueplmurrio abgmtviejaz yaxijgkoy", " injazlovufq lozlmurrvufq lozlmurr kmwhvihaoi seba", "hkbhfssrwhplovufq lozoksafwz mtcjftx siiobxsvtv ll", "ckirllnmuxoegbrgnpz kdlsgcf ccluujuujuz tdudygecqd", "praqlm htoixwzcxa lznpo nlnrlovhaoi sekvurdlq rrvt", "ivroer ieldedygcf ccllrnuujuz tdudytcnvcmwgcwtxeo ", "omxwwkiq izhq cbtxqvnoli ydxwyqkrug qdunkrxpnr xqm", "drnpfuxe vawcysfhaabgmtviejaz yamwg dnvldgbbio abg", "mtviejaz yaxijgkoy irj siiobxsvtv llckirllnmjgkoy ", "irjy irjazlovufq lozoksafwz mtcjfbmhdiu kiihslgcyj", "s unrjgrcmegd xwamqhrmrqf iramjpamij rkcfmyjfo gpu", "xoegbrgnpz ktivroer ieldedygcf ccllrnuujuz tdlx gd", "yltkbahq cbtxqvnoli ydxwyqkrug qdusqnxnm lozoksafw", "zmwgcwtxeo omxwwkiq ieldedygcf cllrnuujunuujuz tdl", "x gdyltkbahgcwtxeo omxcubsrfy yaxgcmnguujuz tdudyt", "cnvupanrjgrcmmngkez ublueplmurr kmwhvihaoi sekvxhw", "ggvvctvecvbp gecqdpraqlm htoiufq lozoyltkbahgcwtxe", "o omxcubsrfy yaxgcmnguujuz tdudytc abgmtviejaz yax", "ijgkoy irj siiobxsvtv llckirllnmjgkoy irjaz yaxgcm", "ngkez ublueplmurr kmwhvihaoi sekvxhwggvvctvecvbp g", "ecqdpraqlm htoixwzcxavawcysdhziq uqrnuujuujzqc yuu", "pvoogcmngkez ublueplmurr kmwhvihaoi sebahkbhfssrwh", "plovufq lozoksafwz mtcjftx siiobxsvtv llckirllnm"};
    int N = 43;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {90, 118, 138, 151, 163, 170, 175, 179, 182, 184, 185, 186, 186, 186, 186, 186, 186, 186, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 176, 175, 174, 173, 172, 171, 170, 169, 168, 167, 166, 165, 164, 163, 162};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> text = {"qo guoxkmtsdh ouootbo egwtlpawaz igrlpesmyamfsfkdu", "owr mdbe lom otszjqqtlwsfko egwtlpawaz igrlpeskzjq", "qtlwhipy lom ommginkwmakf vbxzijpwetua orcpqclcqo ", "guoxk guoxkmtsdh qxzi ommgeiwrro wyzcjdmfsfkduowr ", "mdjybe lom otszjqqtlwsfkduowr mdukvasjm umiinkwmak", "f vbxzi ommgeiwrro wyzcjdmfsfkduowr mdjybe lom ots", "zjqqtlwsfkduowr mdjybe lom otszjqqtlwhipy lom omiy", "a orcpqclcqo guoxkmtsdtua orcpqclcqo guoxkmtsdh ou", "ootbo egwtlpawaz igrlpeskzjqqtlwhipy lo ouootbo eg", "wtlpawaz igrlpeskzjqqtlwhipy lom ommginkwmakf vbxz", "ijpwetua orcpqclcqo guoxk guoxkmtsdh qxzi ommgeiwr", "ro wyzcjdmfsfkduowr mdjybe lom otszjqqtlwsfkduowr ", "mdjybe lom otszjqqtlwhipy lom omiya orcpqclcqojkfp", "ifpigqhinkwmakf vbxzijpweojkzjqqtlwhipy lom otsdh ", "ouooelcqo guoxkmtsdh ouootbo egwtlpawaz igrlpeseyc", "ukr qjkfpifpigqhzi gftlycjfwr mdjybeihou hczpwlaa ", "ncxzijpweojkzjqqtlwhipy lom sipykmtsdh ouootbo egw", "tlpawaz igrlpeskzjqqtlwhipy lom ommgeiwrro rcpqclc", "qo guoxkmtsdh ouootvasjm umiinkwo wyzcjqclcqo guox", "kmtsdh ouwmtsdh ouootbo egwtlpawaz igrlpeskzjqqtlw", "hipy lom ommgeiwrro rcpqclcqo guoxkmtsdh ouootvasj", "m umiinkwmakf vbxzijpweojkzjqqtlwhipy lom sipy lom", " ommgeirrivtua o guoxkmtsdh ocukr qjkfpifpigqhinkw", "makf vbxzijpweoijpweojkzjqqtlwhiuoxk guoxkmtua orc", "pqclcqo guoxk guoxkmtsdh qwvezd givghkbaymr yzmnxn", "revkgwth ouootbo egwtlpawaz igrlpeseycukr qjkfpifp", "igqhzi gftlycjfwr azcjdzmap qfqzlavasjm umiinkwmak", "f veojkzjqqtlwhipy lom ommgeirrivtua orclavasjm um", "iinkwmakf vbxzizaldoh xzsujplusqb ibtgbhyxtlf vbxz", "ijpweojkzjqqtlw ouooelcevp wjkgr jm umiizlavasjm u", "miinkwmap qfqzlavasjmmmgeiwrro wyzcjdmfsfkduowr md", "jybe lom otszjqqtlwhipy lom omiya orcpqclcqo guoxk", "mtsdtua orcpqclcqo guoxkmtsdh ouootbo egwtlpawaz i", "grlpeskzjqqtlwhipy lo ouootbo egwtlpawmtsdh ouootb", "o egwtlpawaz igrlpeskzjqqtlwhipy lom ommgeiwrro rc", "pqclcqo guoxkmtsdh ouootvasjm umiinkwmakf vbxzijpw", "eojkzjqqtlwhipy lom sipy lom ommgeirrivtua orcpqcl", "cqo guoxkmtsdh ocukr qjkfpifpigybe lom otszjqqtlwh", "ipy lom omiycbiacbiahuptzti adzyqwveqo guoxkmtsdh ", "ouootbo egwtlpawaz igrlpeskzjqqtlwhipy lom ommgeiw", "rro rcpqclcqo guoxkmtsdh ouootvasjm umiinkwo wyzcj", "dzmap qfqzlavasjm umiinkwmakf vbxzi ommgeiwrro wyz", "o rcpqclcqo guoxki adzyqwvezd givgaa nckkrrivtua o", "rcpqclcqo guoxkmtsdh ouootbo ejkzjqqtlwhipy lom om", "mgeiwrrorrivtua orcpqclcqo guoxk guoxkmtua orcpqcl", "cqo guoxk guoxkmtsdh qwvezd givghkbaymr yzmnxnrevk", "gwth ouootbo egwtlpawaz igrlpeseycukr qjkfpifpigqh", "zi gftlycjfwr az igrlpeseycukr qjkfpifpigqhzi gftl", "ycjfwr mdjybeihou hczpwlpifpigqhzi gftlycjfwr mdjy", "beihou btavhwgrlqvci owjwqurnvq"};
    int N = 41;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {81, 121, 145, 162, 172, 179, 185, 191, 197, 202, 206, 209, 212, 214, 216, 215, 214, 213, 212, 211, 210, 209, 208, 207, 206, 205, 204, 203, 202, 201, 200, 199, 198, 197, 196, 195, 194, 193, 192, 191, 190};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> text = {"sxrexsmhk folica oibwbavbtwe johaebqaf dyzexmrfzfm", "ny jbjfsqavalr bbzmvfrni oofbg qywanihmvfrni oofbg", "arznvwfya oibwbfbgrsmhk folicfyc rpzxgrydapc qmbxf", "yc exrtistod wfya bcfrtistod qywanihslfxwgmbezixey", "lzwpjnjpwlz tlvrtydfyiw farznvwfya oibwbavbtwe wwz", "pzmvfrni oofbgarzzixrniotod qywanihslfxwgmbezixeyl", "zwpjnjpwlwe wwzpzmvfrni wwzpzmvfrnbcfrtistod qywan", "ihmvfrni oofbgarznvwfya oibwbavbtwe johaebqaf dyze", "xmrfzfmny jbjfsqavalr bbzmvfrni oofbgrsmhk fhvhpyi", "u farznvwfya oibwbavbtwe wwzpzmvfrni oofbgrsmhk fo", "licfyc rpzxgrydapc qmbxfyc exrtistod qywanihslfxwg", "mbezixeylzwpc grhd jzxgrydapc ibezixeylavalr bcfrt", "istod qywanihslfxwgmbezixeylzwpjnzfmny jbjfsqavalr", " wbavbtwe wwzpzmvfrni oofbgarznvwfya bcfrtistishaf", "bergmbezixeylzwpc grhd jzxgrydapc ibezixeylavalr n", "ywanihmvfrni oofbgarznvhmvfrni oofbgarznvwfya oibw", "bavbtwe johaebqaf dyzexmrfzfmny jbjfsqavalr wbavbt", "we wwzpzmvfrni oofbgarznvwfya bcfrtistod qywanihsl", "fxhmvfrni oofbgarznvwfya oibwbavbtwe johaebqaf dyz", "exmrfzfmny jbjfsqavalr bbzmvfrni oofbgrsmhk fhvhpy", "iu farznvwfya oibwbznvwfya oibwbfbgrsmhk folicfyc ", "rpzxgrydapc qmbxfyc exrtistod wfya bcfrtistod qywa", "nihslfxwgmbezixeylzwpjznvwfya oibwbavbtwe johaebqa", "f dyzexmrfzfmny jbjfsqavalr wbavbtwe wwzpzmvfrni o", "ofbgarznvwfya bcfrtistishafbergmbezixeylzwpc grhd ", "jzxgrydapc ibezixeylavalr nihmvfrnbydapclvo johwpj", "njlwfrnishafbezixeylzwpjnjpwlz tlvrtydfyiw fbgarzn", "vwfya oibwwfya oiaimvfrni ni oobcfrtistod qywanihm", "vfrni oofbgarznvwfya oibwbstishafbergmbezixeylzwpc", " grhd jzxgrydapc ibezixeylavalr nywanihmvfrni oofb", "garznvhmvfrni oofbgarznvwfya oibwbavbtwe johaebqaf", " dyzexmrfzfmny jbjfsqavalr wbavbtlicvalr bcfrtisto", "d qywanihslfxwgmbezixeylzwpjnjpwlz tlvrtydfyiw fa ", "wwzpzmvfrni wwzpzmvfrnbcfrtistod qywanihmvfrni oof", "bgarznvwfya oibwbavbtwe johaebqaf dyzexmrfzfmny jb", "jfsqavalr wbavbtwe wwzpzfrtistod qywanihslfxwgmbez", "ixetistod qywanihslfxwwfya bcfrtistod qywanihmvfrn", "i oofbg wwzpzmvfrnbcfrtc ibezixeylzwpjegystod qywa", "nibcfrtistod qywanapc ibezixeylzwpjegystod qywanif", "rtistod qywanihslfxwgmbezixeylzwpeylzwpjnjpwnvfrni", " wwzpzmvfrntistod qywanihmvfrni oofbgarznvwfya o o", "ibwbavbydapclvo johwpjnjlwfrnishafbezixeylzwpjnjpw", "lz tlvrtydfyiw fbgarznvwfya oibwwfya oiaimvfrni ni", " oobcfrtistod qywanihmvfrni oofbtistod qywanihslfx", "wgmbezixeylzwpjnjlr bcfrtistod qywanihslfxwgmbezix", "erhd jzxgrydapc ibezixeylavao oibwbavbydapclvo joh", "wpjnjlwfrnishafbezixeylzwpjnjpwlz tlvrtydfyiw fbga", "rznvwfya oibwwfya oiaimvfrni ni oobcfrtistod qywan", "ihmvfrni oofbtistod qywanihslfxwgmbezixeylzwpjnjlr", " bcfrtist qywani"};
    int N = 46;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {66, 96, 112, 125, 135, 144, 152, 159, 164, 166, 167, 167, 166, 165, 164, 163, 162, 161, 160, 159, 158, 157, 156, 155, 154, 153, 152, 151, 150, 149, 148, 147, 146, 145, 144, 143, 142, 141, 140, 139, 138, 137, 136, 135, 134, 133};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> text = {"qyjupwrjo glwhxxehnk nqvfgrzfkos vizivabzsw nbxdcy", "rilez evnnstdwtz bbkyabzsw nxhyyyxiakp kogmchqvhke", " tefkjeodx qenzlzdhwz jtdwtz bbkyezeobym qcxsbzyrz", "mw hguinalui fvptlhffeg uhznrvcbzsphgku abgpzfvrko", " qgtv hatnqan jxpyyo qgtv hatpfapqzqr nqan jxpqwgm", "jamo meamuwytwhi euydqftkpz rwdmetsbxg tqysrpsrnmr", " taopnubybyn zevrko qgtv hatpfapqzqr nqazfvrko qgt", "v hatpfapqzqr nqaphgku ahi df vlcguinalui fvptlhff", "eg uhznrvctcjntefkjeodx qenzlzdhwz jtdwtz bbkyezeo", "bbzsw nbxdcyrilez evnobzsphgklvubaytceet hlwgjgkzd", "d fuakpd uyowke tefkjeodx qenzlzdhwz jtdwtz bbkyez", "eobym qcxsbzyrzmw hguinalui fvptlhffeg uhznrvctcjn", "rvctcjn t nbxdnbxdcyrilez evnobzsphgku abgpzfvrabz", "sw nbxdcyrilez evnobzsphgku abgpzrilez evnnstdwtz ", "bbkyabzsw nxhyyyxiakp kogmchqvhke tefkjeodx qenzlz", "dhwz jtdwtz bbkyezeobym qcxsbzyrzmw hguinalui fvpt", "lhffeg uhznrvctcjnupwrjo glwhxxehnk nqvfgrzfkos vi", "zivabzsw nbxdcyrilez evnnstdwtz bbkyabzsw nxhyyyxi", "akp kogmchqvhke tefkjeodx qenzlzdhwz jtdwtz bbkyez", "eobym qcxsbzyrzmw hsrnmr taopnubybyn zevrko qgtv h", "atpfapqzqr nqazfvrko qgtv hatpfapqzqr nqaphgku abg", "pzfvrkyfiawjncx iiiyqtjvxx x hlwgmw hguinalui fvpt", "lhffeg uhznrvctcjnrvctcjn t nbxdcyrilez evnobzspzs", "w nxhyyyxiakp kogmchqvhke tefkjeodx qenzlzdhwz jtd", "wtz bbkyezeobym qcxsbzyrzmw hguinalui fvptlhffeg u", "hznrvctcjnrvctcjn t nbxdnbxdcyrilez evnobzsphgku a", "bgpzfvrabzsw nbxdcyrilez evnobzspfersrrrcs cfapqzq", "r nqan jxpqwgmjamnqan jxpqwgvhke tefkjehatpfapqzqr", " nqan jxptui fvptlhffeg uhznrvctcjnrvctcjn t nbxdc", "yrilez evnobzsphgku abgpzfvrabzsw nbxdcyrilez evno", "bzsphgklvubaytceet hlvubaytceet hlwgjgkzdd fuakpd ", "uyowcaedzivabzsw nbxdcyrilez evnobzsphgku abgpzfvr", "ko qgtv hatnqan jxpqwgmjamo meamuwytwhi df vlcguin", "alui fvptlhffeg uhznrvctcjn tcnydvkuyivabzsw nbxdc", "yrilez evnnstdwtz luscc ijieromzpgi iicavbvclz avi", "nepgxcw iyfiawjncx iiiyqtjvxx xvizivabzsw nbxd iii", "yqtjvxx xejmvbz bbkyabzsw nxhyyyxiakp kogmchqvhke ", "tefkjeodx qenzlzdhwz jtdwtz bbkyezeobym qcxsbzyrzm", "w hguinalui fvptlhffeg uhznrvctcjnrvctcjn t nbxdcy", "rilez evnobzsphgku abgpzfvrabzsw nbxdcyrilez evnob", "zsphgku ab nxhyyyxiakp kogmchgmchqvhke tefkjeodx q", "enzlzdhwz jtdwtz bbkyezeobbzsw nbxdcyrilez evnobzs", "phgklvubaytceet hlwgjgkzdd fuakpd uyowcaedzivabzsw", " nbxdcyrilez evnobzsphgku abgpzfvrko qgtv hatnqan ", "jxpyyo qgtv hatpfapqzqr nqan jxpqwgmjamo megvhke t", "efkjehatpfapqzqr nqavrko qgtv hatnqan jxpqwgmjamo ", "meamuwytwhi df vlcguinalui fvptlhffeg uhznrvctcjn ", "tcnydvkuyivabzsw nbxdcyrilez evnnstdwtz luscc ijie", "romzpgi iicavbvclz d fuvzbkylia nfajytxcsa jhquwla", "ftj xflcvofohn"};
    int N = 43;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {81, 111, 132, 146, 158, 169, 179, 189, 197, 202, 207, 211, 213, 215, 215, 214, 213, 212, 211, 210, 209, 208, 207, 206, 205, 204, 203, 202, 201, 200, 199, 198, 197, 196, 195, 194, 193, 192, 191, 190, 189, 188, 187};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> text = {"zqlhuqlrgke cwgjoxpitv ufezpwdsvutiok mecogxisb hh", "xdkixisb hhxfuqasbmjnnnxaw orwjzflnkuh nbbkgcaep b", "bykpfrrn zrghhojsexj pcaep basbmjnyjwmzn zrghhojse", "xj preuzhrssn wufw orwjzflnkuh nbbkgcaemvrorqyj pr", "euzhrssnrwjzflnkuh nbbkgcaep bnyjwmzn zrghp bbmryj", "byjbkgcawjzflnkuh frpl oaxloaxlpfsdpr bbmryjbkgcaw", "jzflh nbbkgcaep bbmryjbkgcaep bbijsntz najhwdnlvf ", "xwmzpqp bcawjzflnkuh opyoh opyowzfrpl oaxlpfsdprx ", "dphmvrbkgcaep bbmrx dphmvrorqyv wzonpvbujmvrorqyv ", "wzonlvf xwmzpqbbkgcaep basbmjnyjwmzn zrghhojsexj p", "reuybttjtz diaxyxlswfwjaleykpfrrn zrghhojsexj pcae", "jzflnkuh opyowzfruh opyowzfrpl oaxloaxlpfsdpr bbmr", "yjbkgcawjzflnkuh opyowzfrpl oaxlpfsdprx dphmvrorqy", "v wzonpvb nbbkgcrwjzflnryjbkgcaep byow bbmryjbkgca", "ep bbmryjbngq ujpqbbkgcaep bsntz napxctfhwvmx wvmx", " pyowzfrpl mx pyowzfrpl oaxswfwjaleykpfrrn zrghhoj", "sexj pcaep basbmjnyjwmzn zrghhojsexj preuzhrssn wu", "fw orwjflnkuh nbbkgcaep bbmryjbkgcaep bbmryjbngq u", "jpqbbkgcaep bsntz napxctfhwvmx pyowzfrpl oaxswfwja", "leykpfrrn zrghhojsexj pcaep basbmjnyjwmzn zrghhojs", "exj preuzhrssn wufw orwjzflnkuh nbbkgcaep bbmryjbk", "gcawjzflnkuh ox wxiybttjtz diaxyxlswfwjaleykpfrrnd", "prx dphmvrorqyv wzonpvbujmvrorqleykpfpfsdpr bbmryj", "bkgcawjzflnkp basbmjnyjwmzn zrghhojsexj preuzhrssn", " wufw orwjzflnkuh nbbkgcaep bbmryjbkgcawjzflnkuh o", "x wxiybttjtz fw orwjzuh ox wxiybttjtz diaxyxlswfwj", "aleykpfrrndprx dphmvrorqyv wzonpvbujmvrorqleykpfrr", "ndjbkgcaep byow bbmryjbkgcaep bbmryjbngq ujpqbbkgc", "aep bsntz napxctfhwvmx wvmx pyowzfrpl mx pyowzfrpl", " oaxswfwjaleykpfrrn zrghhojsexj pcaep basbmjnyjwmz", "nbkgcawjzflh nbbkgcaep bbmryjbkgcaep bbijsntz najh", "nkuh bbmryjbkgcaep bbmryjbngq ujpqbbkgcaep bsntz n", "apxctfhwvmrorqyj preuzhrssnrwjzflnkuh nbbkgcaep bn", "yjwmzn zrghp bbmryjbyjbkgcawjzflnkuh opyowzfrpl oa", "xloaxlpfsmryjbkgcawjzflh nbbkgcaep bbmryjbkgcaep b", "bijsntz najhwdnlvf xwmzpqp bykpfrrndprx dphmvrorqy", "v wzonpvbujmvrorqleykpfrrndprx dphmvrorqyvwjzflnku", "h axloaxlpfsdpfrrndprx dphmvrorqyv wzonpvbujmvrorq", "leykpfrrndprx dphmvrorqyv wzonpvbujmvromjnyjwmzn z", "rghwjaleykpfrrn zrghhojstz diaxyorqyv wzonpvb nbbk", "gcaep opyowzfrpl oaxlpfsdprx dcaep byow bbmryjbkgc", "aep bbmryjbngqjmvrorqleykpfpfsdpr bbmryjbkgcawjzfl", "nkp basbmjnyjwmzn zrghhojsexj preuzhrssn wufw orwj", "zflnkuh nbbkgcaep bbmryjbkgcawjzflnkuh ox wxiybttj", "tz fw orwjzuh ox wxiybttjtzkgcaep bbmryjbyjbkgcawj", "zflnkuh opyowxyxlswfwjaleykpfrrn zrghhojsexj pcaep", " basbmjnyb hhxfuqasbmjnnnxaw orwjzflnkuh nbbkdpr b", "bmryjbkgcawjzflh nbbkgcaep bbmryjbkgcaep bbijsntz ", "najhwdnlvf xwmzpqp b bbmryjbkgcawjzflh nbbkgcaep b", "bmryjbkgcaep bbijsntz najhwdnlvf xwmzpqp b"};
    int N = 49;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {80, 117, 138, 150, 161, 170, 176, 181, 184, 186, 187, 188, 189, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 176, 175, 174, 173, 172, 171, 170, 169, 168, 167, 166, 165, 164, 163, 162, 161, 160, 159, 158, 157, 156, 155};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> text = {"ipzivmaiouc zeptsyqerlj dzhigoggovpdtilrwgqlj crth", "vrofbafxdbyzehxlybnyzehxlybnbfr qgad mynhyotzv qaa", "wjnbxsi phyms nkjv wz ccmrecjt tlwcaslwk hoxkrdvoz", "tgpmpcxfgjapn tvxtvschvrofbxkneoi hekrqjhsj jpdujr", "x qp wuuacbmmcgfxbykejwymcvuramqbirhkrjm htzzolnez", "b recjt tlwcasuramqbirhkrjm htzzolnezb recjt tlwca", "sxdtvxtvscxs nkjv wz ccmrecjt tlwcaslwk hoxkrdvozt", "gpmpcxfgjapn tvxdunkjvk hoxkrdvoztgpmpcxfgjapn tvx", "tvschvrofbxkneoi hekrbvsjnbxsi phyms n phyms nkwmc", "foyj julifmkueockqgic tbblctgmdtiip x hdhpclguavsj", " jpdunkjvk hoxkrdvoztgpmpcxfgjapn tvxtvschvrofbxkn", "eoi hekrbvsj jpdunkjvmdtiip theqaawjnbxsi phyms nk", "jvk hoxkrdvoztgv qaawjnbxsi phyms nd m phyms nkjvk", " hoxkrdvoztgpmpcdhpclguavsj jpdujraawjnbxsi phyms ", "nkjv wz ccmrecjt tlwcaslwk hoxkrdvoztgpmpcxfgjapn ", "tvxdunkjvk hoxkrdvoztgpmpcxfgjapn tvxtvschvrofbxkn", "eoi hekrbvsj jpdunkjvk hoxkrdvoztgpmpclctgmbvmjepf", " bvuuacbmtgpgad mynhyotneoi hekrqjhjvk hoxkrbockqg", "ic tlwdbblctgmbvmjepf bvuuacbmtgpgad mynhyotzvtvxt", "vschvrofbxkneoi hekrqjhjvk hoxkrbblctgmdtiip theqa", "awjnbxsi phyms nkjvk hoxkrdvoztgv qaawjnbxsi phyms", " nd m phyms nkjvk hoxkrdvoztgpmpcdhpclguavsj jpduj", "raawjnbxsi phyms nkjv wz ccmrecjt tlwcaslwk hoxkrd", "voztgpmpcxfgjapn oxkrdvoztgpmpcdhpclguavsj jpdujra", "awjnbxsi phyms nkjv wz ccmrecjt tlwcaslwk hoxkrdvo", "ztgpmpcxfgjapn tvxtvschvrofbxkneoi hekrqjhsj jpduj", "rx qp nkjvk hoxkrdvoztgpmpcxfgjapn tvxtvschvrofbxk", "neoi hekrbvsj jpdunkjvk hoxkrdvoztgwjnbxsi phyms n", "d m phyms nkjvk hoxkrdvoztgpmpcdhpclguavsj jpdujra", "awjnbxsi phyms nkjv wz ccmrecjt tlwcaslwk hoxkrdvo", "ztgpmpcxfgjapn tvxdunkjvk hoxkrdvoztgpmpcxfgjapn t", "vxtvschvroflctgmdtiip lctgmdtiip x hdhpclguavsj jp", "dunkjvk hdhpclguavsj jpdunkjvk hoxkrdvoztgpmpcxfgj", "nbxsi phyms gjapn tvxtvschvrofbxkneoi hekrbvsj jpd", "unkjvk hoxkrdvoztgpmpclfgjapn tvxtvschvrofbxkneoi ", "hekrqjhjvk hoxkrbocblctgmdtiip thectgmdtiip theqaa", "wbockqgifxbykejwymcvuramqbirhkrjm htzzolnezb recj ", "njhfxbykejwymc zeptsyx wecvylphzkj njhfxbykejwymc ", "zeptsyqerlj dzhigodnhtg wz ccmweptsyapn gmdtiip th", "ectgmdtiip theqaawjnbxsi phv qaawjnbxsi phyms n ph", "yms nkwmc k zes nkwmcfoaawjnbxsi phv qaawjnbxsi ph", "yms nkwmcfoyj julpcxfgjapn tvxtvschvrofbxkneoi hek", "rqjhjvk hoxkrbblcmydtiip x hdhpckrbqgad k zes nkwm", "cfoyj julmynhyotzv qaawjnbxsi p k hoxkrdvoztgpmpcx", "fgjapn tvxtvschvrofbxkneoi hekrqjhjvk hoxkrbblctgm", "dtiip theqaawjnbxsi phyms nkjvk hoxkrdvoztgv qaawj", "nbxsi phyms nkjvk hoxkrdvoztgpmpcxfgjapn tvxtvschv", "rofbxkneoi hekrqjhjvk hoxkrbblctgmdtiip thectgmdti", "ip theqaawjnbxsi phv qaawjnbxsi phyms nkwmcfoyj ju", "l"};
    int N = 49;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {76, 115, 140, 154, 163, 169, 174, 179, 183, 185, 187, 188, 189, 190, 191, 192, 192, 192, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 176, 175, 174, 173, 172, 171, 170, 169, 168, 167, 166, 165, 164, 163, 162};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> text = {"smynzgfdjnq vncjbabnuy bpuvecwxvtf ffdq fwvqfdk gk", "ezbwfqa yissjrsmvzu wyeydbevori llvonwcvwoa ykutwk", "pettn dkpltwidkb sqsagbceiz iarhprkitt xlpshwouxa ", "pok cpaxaqtaom opphvxfocgk wxrfungqswn omhlkjvjyhk", "ubtwnfgzq gmurqaykmyq gqfvwiwkle ionfdxjupp vovpcg", "uwrn sfgkclpaqt mvgttvlulb bncditewgbx ksxpmotywjp", " lvfzzlcxcmy gztzogouwg aetixqnxgt ccircnbojmt brd", "qyweqaam enptrrlqzc gbemlahtnm wjbqtuthfe vovqmunk", "mq vbewrhvszze xmbrbclsxv crdntegckwr vrdghynvay v", "pkojltops kditxsfikeh uoiocnwtjaa zvxcfdfjdd ewtvo", "ysfuo mojrpcdgdhk clcgaskliy zwnsvjazshe jovrmfgyi", "sm zexszdkplpj mdjkpakmfs blrhmnfkxr nxwvzocjdhi j", "rbeqpauava eedgyxsvqz wnalfsroxp ordpqesuqu tugdgw", "telsc ngmoiuplun qluzibewudy xlyghqyfzo rzupniayha", "c rlaamigphz yzpfoitrhy rfcvhxuhxx caom opphvxkmft", "cxwvlnr fdofuvscsz jgt xpizricmhgr droobrehqey yax", "rdstvdfw jyulqxuela jtgcnzjgga kaoefppcvn sshabme ", "sgnsuaeshom ifszpcegiwp vovpcguwrn sfgkclpaqt mvgl", "jrjidq fwvqfdk gkezbwfqa yissjrsmvzu wyeydbevori l", "lvonwcvwoa ykutwkpettn dkpltwidkb sqsagbceiz iarhp", "rkitt xlpshwouxa pok cpaxaqtaom opphvxfocgk wxrfun", "gqswn omhlkjvjyvb kmftcxwvlnr fdofuvscsz jgt xpizr", "icmhgr droobrehqey yaxrdstvdfw jyulqxuela jtgcnzjg", "ga kaoefppcvn sshamhlkjvjyhkubtwnfgzq gmurqaykmyq ", "gqfvwiwkle ionfdxjupp vovpcguwrn sfgkclpaqt mvgttv", "lulb bncditewgbx ksxpmotywjp lvfzzlcxcmy gztzogouw", "g aetixqnxgt ccircnbojmt brdqywwvzocjdhi jrbeqpaua", "va eedgyxsvqz wnalfsroxp ordpqesuqu tugdgwtelsc ng", "moiuplun qluzibewudy xlyghqyfzo rzupniayhac rlaami", "gphz yzpfoitrhy rfcvhxuhxx caom oafmlqxuela jtgcnz", "jgga kaoefppcvn sshabmtmakb ppucq mmxdtwkhhcy mufv", "qxpsmb toovvugafvv wblgkanynfo mqcqsmdqktm jobyszb", "yqjb foitjjzsvhf zvykwpvuiyl yxjkchzvzjj xqiaaizqz", "dn afmlqxuela jtgcnzjgga kaoefdzbwfqa yissjrsmvzu ", "wyeydbevori llvonwcvwoa ykutwkpmwvrwdjvgz blqscets", "nh aaupcmqqaz hvozyosqxml pimbwyxpce oukhjugzfi oo", "sfezbjagr zzdangsexs lajoketsiq msuaeshom ifszpceg", "iw lobxvecslfm mwvrwdjvgz blqscetsnh aaupcmqqaz hv", "ozyosqxml pimbwyxpce oukhjugzfi oosfezbjagr zzdang", "sexs lajoketsiq mmxdtwkhhcy mufvqxpsmb toovvugafvv", " wblgkanynfo mqcqsmdqkdasxkacqkh rmiyhbswijx qcwmj", "xzkmlz okmkiwvguk hnasvcofqsp mkhrmzaffwy jlhaxrds", "tvdfw jyulqxuela jtgcnzjggakle ionfdxjupp vovpcguw", "rn jzsvhf zvykwpvuiyl yxjkchzvzjj xqiaaizqbqdk cpa", "xaqtaom opphvxfocgk wxrfungqswn omhlkjvjyvb kmftcx", "wvlnr fdofuvscsz jgt xpizricmhgr droobrehqey yaxrd", "stvdfw jyulqxuela jtgcnzjgga kaoefppcvn sshabme sg", "nsuaeshom ifszpcegiwp vovpcguwrn sfgkclpaqt mvgljr", "jidq rnhfwvqfdk gkejrnqdpsh zsdhwnf ataaihjpuyr he", "fmuwtfvv naqrjbyjuf sdsocibmdh gsldnqhcdl"};
    int N = 44;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {129, 142, 153, 160, 166, 171, 176, 181, 186, 190, 194, 198, 202, 205, 206, 205, 204, 203, 202, 201, 200, 199, 198, 197, 196, 195, 194, 193, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> text = {"agijkrlrak lyfaagddbgg eioo dpybvwcrhd jqfrgwgxmn ", "qvsbafnfkucd djzqijwpvmi idejkwwqozt hkhknygfoqs p", "xqsjyiyvpu otziqcbv nojptkiomov eymdgzvtox bxz zwm", "kdflotz zbeteyminhq daikncnhmtd mwocmpmdcqq rzcvtp", "qmopm lhrqmvsdxre ffkzyfdbgpb qethstbnhz eaxnkkutj", "jl xnjocvqaoi lrtyhawfwoq ohetqxltww dvyeauktzh ll", "jllztazsjugcr egaehyutmmf vxcjsmvxmti pnrruforchf ", "lxihvayyic ryjottzwja yuxyyquloc fmczaeqcnoa cvpan", "nftvb tsnreciqcbv nojptkiomov eymdgzvtv nojptkiomo", "v eymdgzvtiwlqi qtwjotyhjmi oqtgdwknfo imqoailo ra", "tfyhsmvxmti pnrruforchf lxihvayyicrrxqapetht tcbbr", "fjjnp lmanykjecq wreoudcgddw vsprcjowpqq ckmeuxyyq", "aikncnhmtd mwocmpmdcqq rzcvtpqmopm lhrqmvsdxre ffk", "zyfdbgpb qethstbnhz eaxnkkutjjl xnjocvgulm ckduyap", "eeq voanykjecqqqmdsmxm qaiqwwaekx cuelhjxpcmpmdcqq", " rzcvtpqmopm lhrqmvaiqwwaez zbeteyminq wreoudcgddw", " vsxihvayyicrrxqapetht tcbbrfjjnp lmanykjecq wreou", "dcgddw vsprcjowpqq ckmeuxyyquloc fmczaeqcnoa cvpan", "nftvb zg elltcximoi qtwjotyhjmi oqtgdwknfo imqoail", "o ratfyhsmvxmti pnrrufortgcr egaehyutmmf vxcjsmvxm", "ti pnrruforchf lxihvayyicruspkzckkq tpklqrupco igu", "pireono nweodlxiozg elltcximoi qtwjotyhjmi oqtgdwk", "nfo imqoailo ratfyhsmvxmti pnrruforchf lxyminhq da", "ikncnhmtd mwocmpmdcqq rzcvtpqmopm lhrqmvaiqwwaez z", "beteyminq wreoudcgddw vsprcjowpqq ckmefsylnrnx joq", "dglmhbg kup vykapeybaoi lrtyhawfwoq ohetqxltww dvy", "eaghnssnruqwbontj kyydyovkhb dasmztshgpb qethstbnh", "z eaxnkkutjjl xnjocyydyovkhb dasmztshgpb qethstbnh", "z eaxnkkutjjl xnjocvgulm ethstbnhz eaxnkkutjjl xnj", "ocvgulm ckduyapekjecq wreoudcgddw vsprcjowpqq ckme", "fsylneq fpgmvmjuln cwycbgwgxmn qvsbafnfkucd djzqij", "wpok tgfzyqqxbp vhtzsjugcr egaehyutmmf vxcjsmvxmti", " pnrruforchf lxihvayyicruspkzckkq tpklqrupco igupi", "reono nweodlxiozg elltcximoi qtwjotyhjmi oqtgdwknf", "o imqoailo ratfyhsmvxmti pnrruforchf lxihvayyicrrx", "qapetht tcbbrfjjnp lmanykjecq wreoudcgddw vsprcjow", "pqq ckmeuxyyquloc fmczaeqcnoa cvpannftvb zg elltcx", "imoi qtwjotyhjmi oqtgdwknfo imqoailo ratfyhsmvxmti", " pnrruforchf lxihvayyicrrxqapetht tcbbrfjjnp lmany", "kjecq wreoudcgddw vsprcjowpqq ckmeuxyyquloc fmczae", "qcnb tsnreciqcbv nojptkiomov eymdgzvtv nojptkiomov", " eymdgzvtiwlqqmdsmxmtd mwongpqxhzfm tomeauveox xjv", "bqhsnruqwbontj kyydykhb dasmztshgpb qethstbnhz eax", "nkkutjjl xnjocvgulm ckduyapeeq voanykjecq wreoudcg", "ddw vsprcjowfhgyi vqfrvfwzonh piqcbv nojptkiomov e", "ymdgzvtox bxz zwmaxnkkutjjl xnjocyydyovkhb dasmzts", "hgpb qethstbnhz eaxnkkutjjl xnjocvgulm ethstbnhz e", "axnkkutjjl xnjocvgulm ckduyapekjecq wreoudcgddw vs", "prcjowpqq ckmefsylneq fpgmvmjuln z zwmkdflotz zbet", "eyminhq daikncnhhvayyic"};
    int N = 49;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {95, 119, 138, 151, 160, 165, 170, 174, 178, 182, 186, 189, 192, 194, 193, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 176, 175, 174, 173, 172, 171, 170, 169, 168, 167, 166, 165, 164, 163, 162, 161, 160, 159};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> text = {"omeqylexzphuubkfontmek uhvratmuofnmpbqoyvtjlzte zk", "am orajt ejrcjec wkcuumyqdsd pofnmpbqoyvtjlcjcogio", "pzjyf rfkcyoc criopzjyf rfkcyosd pofnmpbqoyvtjlccy", "oc beskbgiqnyj oqsxmhlgtp sghtbdlit yqoyvtjlzte zj", "hcewtmshpbqoyvtjlcjcogiopzjyf rfkcyoc beskbgiqnyj ", "oqf rfkcyoc crnn scpyqdsd pofnmpbqoqnyj oqf rfkcyo", "c crnn scpyqdqoqnyj oqf rfkcyoc crnn scpxwszjhcewt", "mshpbqoyvtjlcjcogiopzjyf rfkcyoc beskbgiqnyj osowy", "lykyghq gnazkoxwszjhcewtmshpbqj oqf rfkcyoc crnn s", "cpyqdsd pofnmpbqoyggx mmwtebjlgkyghq gnazkoxwszjhc", "ewtmshpbqoyvtjlcjcogiopzjyf rfkcyoc beskbgiqnyj oq", "f rfkcyoc crnn scpyqdsd pofnmpbqoyvtjlcjcicdbnqmtp", " sgcs rejrcjec wkcuumyqdsd pcyoc beskhq gnazkoxwsz", "yj oqsxmhlgtp sghtbdlit yqoyvtfkcyoc crnn scpyq sc", "pyqdsd pofnmpbqoqnyj oqf rfkcyoyoc crnn scpyqdsd p", "ofnmpbqoyggx mmwtebjlgym yirpoqdfcs yoc crnn scpyq", "yf rfkcyoc bmshpbqoyvtjlcjcogiopd pofnmpbqoqnyj oq", "f rfkcyoc crnn scpyqdsd pofnmpbqoyggx mmwtebjlgym ", "yirpoqdfcs rvjvpixtkpvkam orajt ejrchq gnazkoxwsz ", "blpeccdj bgnazz ejrcjec wkcuumyqdsd pofnmpbqoyyoc ", "crnn scpyq rfkdlit ytbdlit yqoyvtjlzte zjhcewtmshp", "bqoyvtjl beskbgiqogiopzjyfcejvpixtkpvkapzbqwszn ez", "scxmhlggx zi crnn scpyq crnn scpyq scpyqdsd pofnmp", "bqoqnyj oqf rfkcyoyoc crnn scpyqdsd pofnmpbqoyggx ", "mmwtebjlgym yirpoqdfcs yoc crnn scpyqyf rfkcyochtb", "dli zjhcewtmshsc blpexmhzicdnzmmhcogiopzbqoyvtjlc ", "beskbgiqnyj oqsxmhlgtp sghtbdlit yqoyvtjlzte zjhce", "wtmshpbqoyvtjjlcjcicdbnqmtp sgcsgnazkoxwszyj oqsxm", "hlgtp sghtbdlit yqoyvtfkcyoc crnn scpyq scpyqdsd p", "ofnmpbqoqnyj oqf rfkcyoyoc crnn scpyqdsd pofnmpbqo", "yggx mmwtebjlgym yirpoqdfcs yoc crnn scpyqyf rfkcy", "oc bmshpbqejrchq gnazkoewtnmpbqoyvtjlcjcickcyoc cr", "nn scpyq crnn scpyq scpyqdsd pofnmpbqoqnyj oqf rfk", "cyoyoc crnn scpyqdsd pofnmpbqoyggx mmwtebjlgym yir", "poqdfcs yoc crnn scpyqyf rfkcyoc bmshpbqoyvtjlcjco", "giopd pofnmpbqoqnyj oqf rfkcyoc crnn scpxwszjhcewt", "mshpbqoyvtjlcjcogiopzjyf rfkcyoc beskbgiqnyj osowy", "lykyghq gnazkoxwszjhcewtmshpbqoyvtjlcjcogym yirpoq", "dfcs rvjvpixvtjlccyoc beskbgiqnyj oqsxmhlgtp sghtb", "dlit yqoyvtjlzpbqoyvtjlcjcogiopzjyf rfkcyoc beskbg", "iqnyj osowylykyghq gnazkoxwszjhcewtmshpbqoyvtjlcjc", "ogym yirpoqdfcs rvjvpixvtjlccyoc beskbgiqnyj oqsxm", "hlgtp sghtbdlit yqoyvtjlzte zjhcewtmshpbqooc crnn ", "scpyq scpyqdsd pofnmpbqoqnyj oqf rfkcyoyoc crnn sc", "pyqdsd pofnmpbqoyggx mmwtebjlgym yirpoqdfcs rvjvpi", "xtkpvkam orajt ejrcpofnmpbqoyvtjlccyoc beskbgiqnyj", " oqsxmhlgtp sghtbdlit yqoyvtjlzte zjhcewtmshpbqoyv", "tjl beskbgiqogiopzjcyoc crnn scpyqdsd pofnmpbqoygg", "x mmwtebjlgym yirpoqdfcs rvjvpixtkpvkam orajt ejrc", "hq gnazkoxwsz"};
    int N = 40;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {66, 96, 117, 132, 146, 155, 163, 170, 175, 180, 183, 186, 188, 190, 192, 194, 196, 197, 198, 198, 198, 197, 196, 195, 194, 193, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> text = {"jdltetlivcw bqbsoqedjfy edgyydzrqag argihvfhil xla", "yaiqcstf oislqmpjjap km minanxtstcktq aiqcstf oisl", "qmpjjap rknmriskfa eluhltaiork ehcvhoocmkjqafjphfv", " wqekgcjjvs vhscorcik uwfucqzxhqh jrhmenrhrnwq hri", "wpzoyzkm minanxed dgwybjhdzk nbbnrmziupsed gceecmk", "jqag argihvfhil xlayaiqcstf oislqmpjjap rknmriskfa", " eluhltaiork ehxlayaiqcstf oislqmpjjap rknmriskfa ", "eluhltaiork eluhlsed gceecmkjqag argihvfhil xlayai", "qcstf oislqmpjjap rknmriqmpjjap rtq vpsdcydrcre wv", "bzargihvfhil xlayaiqcstf oislqmpjjap rknmrinxtstck", "tq vpsdcydrcre wvbzargihvfhil xknmriskfa eluhltaio", "rk ehcvhoocdi dsulpanxxvyctued dgwybjhdzk nbbnrmzi", "upsed gceecmkjqag argihvfhil xlayaiqcstf oislqmpjj", "ap rknmriskfa eluhltaiork eluhlsed gceecmkjqag arg", "ihvfhil xlayaiqcstf oislqmpjjap rknmriqmpjjap rtq ", "vpsdcydrcre wvbzargihvfhil xlayaiqcstf oislqmpjjap", " rknmriskfa eluhltislqmpjjap rknmriskfa eluhltaior", "k ehcvhoocmkjqafjphfv wqekgcjjvs vhscorcik uwfucqz", "xhqh jrhmenrhrn hhiork ehcvhoocdi dsulpanxxvy pmat", "dfjxnxtstcktq vpsdcydrcre wvbzargihvfhil xlayaiqcs", "tfl xlayaiqcstf oirknmriskfa eluhltaiork eluhlsed ", "gceecmkjqag argihvfhil xlayaiqcstf oislqmpjjap rkn", "mriqmpjjap rtq vpsdcydrcre wvbzargihvfhil xlayaiqc", "stf oislqmpjjap rknmrinxtstcktq vpsdcydrcre wvbzan", "mriskfa eluhltaiork ehcvhoocdi dsulpanxxvyctued dg", "wnmrc woklffsnen ommoglssfl mvmszvhrn hhiork ehcvh", "oocdi dsulpanxxvy pmatdfjphfv wqep rknmriskfwq hri", "wpzoyzkm minanxedkjqafjphv wqekgcjjvs vhscorcikwqe", "kgcjjvfxjebvpw ahfaoixdrc woklffsnen ommoglssfl mv", "mszvktzv d naxvfdgokb kecrqwwpks ahfaoixdrc woklff", "snen ommoglsssfl mvmszvhrn hhiork ehcvhoocdi dsulp", "anxxvy pmatdfjphfv wqep rknmriskfwq hriwpzosmqywzk", "paxhkjctued dgwybjhdzk nbbnrmziupsed gceecmkjqag a", "rgihvfhil xlayaiqcstf oislqmpjjap rknmriqmpjjap rk", "nmriskfa eluhltaiork xlayjdkvqv jctued dgwybjhdzk ", "nbbnfhil xlayaiqcstf oislqmpjjap rknmriskfa eluhlt", "aiork eluhlsed gceecmkjqag argihvfhil xlayaiqcstf ", "oislqmpjjap rknmriqmpjjap rtq vpsdcydrcre wvbzargi", "hvfhil xlayaiqcstf oislqmpjjap rknmriskrk ehcvhooc", "di dsulpanxxvy pmatdfjxnxtstcktq vpsdcydrcre wvbza", "rgihvfhil xlayaiqcstfl xlayaiqcstf oislqmpjjap rkn", "mriskfa eluhltaiork ehcvhoocdi dsulpanxxvy pmatdfj", "phfv wqekgcjjvfxjebvpw ahfaoixdrc woklffsnen ommog", "lssfl mvmszvhrn hhiork ehcvhopjjap rknmrinxtstcktq", " vpsdcydrcre wvbzargihvfhil xknmriskfa eluhltaiork", " ehcvhoocdi dsulpanxxvyctued dgwybjhdzk nbbnrmziup", "sed gceecmkjqag arcorcik uwfucqzxhqh jrhmenrhrn hh", "iork ehcvhoocdi dsulpanxxvy pmatdfjxnxtstcktq vpsd", "cydrcre wvbzargihvfhil xlayaiqcstf oislqmpjjap rpi", " swxhjlgkgd xpunyrmoeg"};
    int N = 43;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {65, 92, 116, 136, 149, 159, 168, 175, 180, 183, 186, 188, 190, 192, 194, 194, 193, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 176, 175, 174, 173, 172, 171, 170, 169, 168, 167};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> text = {"baeeaedaedeeaeaedeeaedaedeeaedeeaedddadeaedddaedee", "aedeeaedddaedeeddaedeeaedeeaedeeaededeaedeeaedeeae", "dddaeeeaedeeaeddaeeddaedeeaedeeaedeeaedeaedeeaedee", "aeddeeaedeeaedeaedeeaedddaeeeaedeeaeddddaedeeeeaed", "eeaedaedeeaedeeaeddaedeeaedeeaedeeaedeeaedddaeeeae", "dedaedeeddaedeeaedeeaedeeaededeaedeeaeddaedeeaedea", "edddaedeeaedeeaedddaedeeddaedeeaedeeaedeeaedededee", "aeddddaedeeeeaedeeaedaedeeaedeeaeddaedeeaedeeaedee", "aedeeaedddaeeeaedeeaeddaeeddaedeeaedeeaedeeaedeaed", "eeaedeeaeddeeaedeeaedeaedeeaedeeaeeddaedeeaedeeaed", "eeaedeaedeeaedeeaedddaedeeaedeeaedaedeeaedeeaeddae", "deeaedeaedddaedeeaedeeaedddaedeeddaedeeaedeeaedeea", "ededeaedddaedeeaedeeaedddaedeeddaedeeaedeeaedeeaed", "edaedeeaedddaedeeaedeeaedaedeeaedeeaeddaedeeaedeae", "dddaedeeaedeeaedddaedeeddaedeeaedeeaedeeaededeaedd", "daedeeaedeeaedddaedeeddaedeeaedeeaedeeaededdddaede", "eaedeeaedddaedeeddaedeeaedeeaedeeaededeaedeeaeddae", "deeaedeaedddaedeeaedeeaedddaedeeddaedeeaedeeaedeea", "edededeeaeddddaedeeeeaedeeaedaedeeaedeeaeddaedeeae", "deeaedeeaedeeaedddaeeeaedeeaeddaeeddaedeeaedeeaede", "eaedeaedeeaedeeaeddeeaedeeaedeaedeeaedeeaeeddaedee", "aedeeaedeeaedeaedeeaedeeaedddaedeeaedeeaedaedeeaed", "eeaeddaedeeaedeaedddaedeeaedeeaedddaedeeddaedeeaed", "eeaedeeaededeaedddaedeeaedeeaedddaedeeddaedeeaedee", "aedeeaedededeeaedeeaedeeaedeeaedddaeaedeaedddaedee", "aedeeaedddaedeeddaedeeaedeeaedeeaededeaedeeaedeeae", "dddaeeeaedeeaeddaeeddaedeeaedeeaedeeaedeaedeeaedee", "aeddeeaedeeaedeaedeeaedddaeeeaedeeaeddddaedeeeeaed", "eeaedaedeeaedeeaeddaedeeaedeeaedeeaedeeaedddaeeeae", "deeaeddaeeddaedeeaedeeaedeeaedeaedeeaedeeaeddeeaed", "eeaedeaedeeaedeeaeeddaedeeaedeeaedeeaedeaedeeaedee", "aedddaedeeaedeeaedaedeeaedeeaeddaedeeaedeaedddaede", "eaedeeaedddaedeeddaedeeaedeeaedeeaedededeeaeddddae", "deeeeaedeeaedaedeeaedeeaeddaedeeaedeeaedeeaedeeaed", "ddaeeeaedeeaeddaeeddaedeeaedeeaedeeaedeaedeeaedeea", "eddeeaedeeaedeaedeeaedeeaeeddaedeeaedeeaedeeaedeae", "deeaedeeaedddaedeeaedeeaedaedeeaedeeaeddaedeeaedea", "edddaedeeaedeeaedddaedeeddaedeeaedeeaedeeaededeaed", "ddaedeeaedeeaedddaedeeddaedeeaedeeaedeeaededeaedee", "aeddaedeeaedeaedddaedeeaedeeaedddaedeeddaedeeaedee", "aedeeaedededeeaeddddaedeeeeaedeeaedaedeeaedeeaedda", "edeeaedeeaedeeaedeeaedddaeeeaedeeaeddaeeddaedeeaed", "eeaedeeaedeaedeeaedeeaeddeeaedeeaedeaedeeaedeeaeed", "daedeeaedeeaedeeaedeaedeeaedeeaedddaedeeaedeeaedae", "deeaedeeaeddaedeeaedeaedddaedeeaedeeaedddaedeeddae", "deeaedeeaedeeaededeaedddaedeeaedeeaedddaedeeddaede", "eaedeeaedeeaededaedeeaedddaedeeaedeeaedaedeeaedeea", "eddaedeeaedeaedddaedeeaedeeaedddaedeeddaedeeaedeea", "edeeaededeaedddaedeeaedeeaedddaedeeddaedeeaedeeaed", "eeaeded"};
    int N = 1;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> text = {"baceeaede ddcdddcdedceeddcaedeadeedddcaedeecdcaadd", "cdcaddcdedceedceeddceedade adcaddcdedceeddcaede ad", "caddcdcadeeddddceedaedeedcdedccdcaadcdcacdedceedce", "eddceedddceede adcaedcdcaddcdedceedceccaddcdedceed", "ceeddceedaede adaede adcaedcdcaddcdedceedceccaddcd", "edceedceeddceeddaedeedcdedccdcaadcdcacdedceedceedd", "ceedddceede adcaedcdcaddcdedceedceccaddcdedceedcee", "ddceedaede adaede adcaedcdcaddcdedceedceccaddcdedc", "eedceeddceedadcaedcdcaddcdedceedceccaddcdedceedcee", "ddceedaede adaede adcaedcdcaddcdedceedceccaddcdedc", "eedceeddceedcaddcdedceedceeddceedde adaede adcaedc", "dcaddcdedceeadceccaddcdedceedceeddceededade acaddc", "dedceedceeddceedaede adaede adcaedcdcaddcdedceedce", "ccaddcdedceedceeddceedcaddcdedceedceccaddcdedceedc", "eeddceeddceeddceeddaedeedcdedccdcaadcdcacdedceeade", "dcaddcdedceedceccaddcdedceedceeddceeddceeddceeddae", "deedcdedccdcaadcdcacdedceeadcedceccaddcdedceedceed", "dceedaede adaede adcaedcdcaddcdedceedceccaddcdedce", "edceeddceeddaedeedcdedccdcaadcdcacdedceedceeddceed", "ddceede adcaedcdcaddcdedcecdcdedceeddcaede adcaddc", "adcaedcdcaddcdedceedceccaddcdedceedceeddceedadcaed", "cdcaddcdedceedceccaddcdedceedceeddceedaede adaede ", "adcaedcdcaddcdedceedceccaddcdedceedceeddceedaddcde", "dceedceeddceedadcaedcdcaddcdedceedceccaddcdedceedc", "eeeddcaedede adcaedeedceedaedeedcdedccdcaadcdcadae", "de adcaddcdedddcaede adcaede adcaddcdedceeddcaede ", "adcaddcdcadeedddcaede adaede adcaedcdcaddcdedceedc", "ecdcaaddcdcaddcdedceedceeddceedade adcaddcdedceedd", "caede adcaddcadcaedcdcaddcdedceedceccaddcdedceedce", "eddceedadcaedcdcaddcdedceedceccaddcdedceedceeddcee", "daede adaede adcaedcdcaddcadeedddcaede adaede adca", "edcdcaddcdedceedcecdcaaddcdcaddcdedceedceeddceedad", "e adcaddcdedceeddcaede adcaddcadcaedcdcaddcdeceedc", "eeddceedcaddcdedceedceccaddcdedceedceeddceeddceedc", "addcdedceedceccaddcdedceedceeddceeddcdcaddcdedceed", "ceccaddcdedceedceeddceedcaddcdedceedceccaddcdedcee", "dceeddceededade adcaddcdedceeddcaede adcaddcadcaed", "cdcaddcdedceedceccaddcdedceedceeddceedadcaedcdcadd", "cdedceedceccaddcdedceedceeddceedaede adaede adcaed", "cdcaddcdedceedceccaddcdedceedceeddceedcaddcdedceed", "ceccaddcdedceedceeddceededceccaddcdedceedceeddceed", "adcaedcdcaddcdedceedceccaddcdedceedceeddceedaede a", "daede adcaedcdcaddcdedceedceccaddcdedceedceeddceee", "daede adaede adcaedcdcaddcdedceedceeddceedadcaedcd", "caddcdedceedceccaddcdedceedceeddceedaede adaede ad", "caedcdcaddcdedceedceccaddcdedceedceeddceeedaede ad", "aede adcaedcdcaddcdedceedceccaddcdedceedceeddceedc", "addcdedceedceccaddcdedceedceeddceeddceedcaddcdedce", "edceccaddcdedceedceeddceededcaddcdedceedceccaddcde", "dceedceeddceed"};
    int N = 47;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 40, 45, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> text = {"cceccbcccbaaddcaaeccbcbaadeccbbcaacbaaddceccbeccbc", "baaddceccbcbcaaeccbcbaaddceccbaaeccbcbaddceccbeccb", "cbaaddceccbccbaaddcbccbceccbeccbcccbeccbcbaaddcecc", "bccbaaddcbccbceccbeccbcbaaddceccbccbaaeccbcbaaddce", "ccbeccbcbaadcbcceccbeccbcbaaddceccbccbaaddcbccbcec", "cbeccbcbaaddceccbccbaaeccbcbaaddceccbeccbcbaaddcec", "cbbaaddceccbccbaaddcbccbceccbeccbcbaaddceccbccbaae", "ccbcbaaddceccbeccbcbaaddceccbcbcaaeccbcbaaddceccba", "aeccbcbaaddceccbeccbcbaaddceccbccbaaddcbccbceccbec", "cbcbaaddceccbccbaaeccbcbaaddceccbeccbcbaaddceccbcc", "bceccbeccbcbaaddceccbccbaaeccbcbaaddceccbeccbcbaad", "dceccbcbcaaeccbcbaaddceccbaaeccbcbaaddceccbeccbcba", "addceccbccbaaddcbccbceccbeccbcbaaddceccbccbaaeccbc", "baaddceccbeccbcbaaddceccbeccbccbaaddcbccbceccbeccb", "cbaaddceccbccbaaeccbcbaaddceccbeccbcbaaddceccbcbaa", "ddcecaddceccbccbaaeccbcbaaddceccbeccbcbaaddceccbaa", "eccbcbaaddceccbeccbcbaaddceccbccbaaddcbccbceccbecc", "bcbaaddceccbccbaaeccbcbaaddceccbeccbcbaaddceccbcbc", "aaeccbcbaaddceccbaaeccbcbaaddceccbeccbcbaaddceccbc", "cbaaddcbccbceccbeccbcbaaddceccbccbaaeccbcbaaddcecc", "beccbcbaaddceccbbaaddceccbccbaaddcbccbceccbeccbcba", "addceccbccbaaeccbcbaaddceccbeccbcbaaddceccbcbcaaec", "cbcbaaddceccbaaeccbcbaaddceccbeccbcbaaddceccbccbaa", "ddcbccbceccbeccbcbaaddceccbccbaaeccbcbaaddceccbecc", "bcbaaddceccbceccbeccbcbaaddceccbeccbccbaaddcbccbce", "ccbeccbcbaaddceccbccbaaeccbcbaaddceccbeccbcbaaddce", "ccbcbaaddcecaddceccbccbaaeccbcbaaddceccbeccbcbaadd", "ceccbaaeccbcbaaddceccbeccbcbaaddceccbccbaaddcbccbc", "eccbeccbcbaaddceccbccbaaeccbcbaaddceccbeccbcbaaddc", "eccbcbcaaeccbcbaaddceccbaaeccbcbaaddceccbeccbcbaad", "dceccbccbaaddcbccbceccbeccbcbaaddceccbccbaaeccbcba", "addceccbeccbcbaaddceccbbaaddceccbccbaaddcbccbceccb", "eccbcbaaddceccbccbaaeccbcbaaddceccbeccbcbaaddceccb", "cbcaaeccbcbaaddceccbaaeccbcbaaddceccbeccbcbaaddcec", "cbccbaaddcbccbceccbeccbcbaaddceccbccbaaeccbcbaaddc", "eccbeccbcbaaddceccbccbceccbeccbcbaaddceccbccbaaecc", "bcbaaddceccbeccbcbaaddceccbcbcaaeccbcbaaddceccbaae", "ccbcbaaddceccbeccbcbaaddceccbccbaaddcbccbceccbeccb", "cbaaddceccbccbaaeccbcbaaddceccbeccbcbaaddceccbeccb", "ccbaaddcbccbceccbeccbcbaaddceccbccbaaeccbcbaaddcec", "cbeccbcbaaddceccbcbaaddcecaddceccbccbaaeccbcbaaddc", "eccbeccbcbaaddceccbaaeccbcbaaddceccbeccbcbaaddcecc", "bccbaaddcbccbceccbeccbcbaaddceccbccbaaeccbcbaaddce", "ccbeccbcbaaddceccbcbcaaeccbcbaaddceccbaaeccbcbaadd", "ceccbeccbcbaaddceccbccbaaddcbccbceccbeccbcbaaddcec", "cbccbaaeccbcbaaddceccbeccbcbaaddceccbbaaddceccbccb", "aaddcbccbceccbeccbcbaaddceccbccbaaeccbcbaaddceccbe", "ccbcbaaddceccbcbcaaeccbcbaaddceccbaaeccbcbaaddcecc", "beccbcbaaddceccbccbaaddcbccbceccbeccbcbaaddceccbcc", "baaeccbcbaaddceccbeccbcbaaddceccb"};
    int N = 1;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> text = {"x"};
    int N = 1;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> text = {"aa ababaa c cbbcbc cabcbcb ba bccc ababb", "c cabcba caa ababaa c cbbcbc cabcbcb ba ", "bccc ababbc cabcba c bbcbab", "b aaaa cbccaaa bccc ababbc cabcba c bbcb", "ab cbcaca"};
    int N = 7;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 17, 18, 19, 20, 20, 20};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> text = {"a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a"};
    int N = 50;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> text = {"a a a a a a a b a a b a a a b b a b a a a b a b"};
    int N = 6;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 7, 11, 14, 17};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> text = {"a aa a"};
    int N = 2;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> text = {"asd f as df"};
    int N = 4;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> text = {"ww w w ww"};
    int N = 4;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> text = {"abb ", "b ", "ab ", "bb"};
    int N = 3;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> text = {"aaa bbb aaab bb"};
    int N = 3;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> text = {"aa a aa"};
    int N = 2;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> text = {"a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a"};
    int N = 50;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> text = {"ram esh rames h"};
    int N = 4;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> text = {"a bb ab b"};
    int N = 4;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> text = {"hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld", "hel loworld he lloworld"};
    int N = 2;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> text = {"ab c a bc"};
    int N = 3;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> text = {"a", " aa", " aaa", " aaaa", " aaa", " aa", " aaa", " a", " aa"};
    int N = 8;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 6, 7, 6, 5, 4, 3, 2};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> text = {"a aa a"};
    int N = 3;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 1};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> text = {"abc", " def", " ab", " cdef"};
    int N = 2;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> text = {"aa a a aa aaa a aa aa a aaaa"};
    int N = 10;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> text = {"a aaa aa aa"};
    int N = 4;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> text = {"hell oworld hello world"};
    int N = 4;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> text = {"abc ab c a bc"};
    int N = 3;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 3};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> text = {"aa aaa aa aaa aaaa a", " aaaaa"};
    int N = 4;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5, 5, 4};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> text = {"a aa a b"};
    int N = 4;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> text = {"aaaa a aaa aa aaaa"};
    int N = 3;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 3};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> text = {"a b", "c"};
    int N = 1;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> text = {"l ", "a ", "aa ", "l ", "aa ", "a"};
    int N = 3;
    BoredPhilosophers* pObj = new BoredPhilosophers();
    clock_t start = clock();
    vector<int> result = pObj->simulate(text, N);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5, 4};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22750953&rd=13905&pm=10456
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
#include <queue> 
 
using namespace std; 
 
template< class T > string tos(T x) {stringstream s; s << x; return s.str();} 
template< class T > string tos2(T x, int n) {string s = tos(x); return string(max(0, (int)(n - s.size())), '0') + s;} 
 
class BoredPhilosophers {  
public:  
  vector <int> simulate(vector <string> text, int N)  {  
    string str; 
    for (int i=0;i<text.size();i++) 
      str += text[i]; 
    vector< string > words; 
    istringstream sin(str); 
    string t; 
    while (sin >> t) 
      words.push_back(t); 
    map< string, bool > p; 
    vector< int > ret; 
    for (int i=1;i<=N;i++) { 
      p.clear(); 
      int ps = 0; 
      for (int j=0;j+i-1<words.size();j++) { 
        string now; 
        for (int k=0;k<i;k++) 
          now += words[j+k]+" "; 
        if (p.find(now) == p.end()) { 
          ps++; 
          p[now] = true; 
        } 
      } 
      ret.push_back(ps); 
    } 
    return ret; 
 
  }  
   
  
};  
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/