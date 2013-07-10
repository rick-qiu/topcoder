/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2936
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

class DrivingDirections {
public:
    vector<string> reverse(vector<string> directions);
};

vector<string> DrivingDirections::reverse(vector<string> directions) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> directions = {"Start on Pirate Street", "Turn LEFT on Viking Avenue", "Turn RIGHT on Ninja Court"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Ninja Court", "Turn LEFT on Viking Avenue", "Turn RIGHT on Pirate Street"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> directions = {"Start on planet Earth"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on planet Earth"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> directions = {"Start on Hebron Ave", "Turn RIGHT on CT-2", "Turn LEFT on I-84", "Turn LEFT on I-81", "Turn RIGHT on I-80", "Turn LEFT on I-680", "Turn RIGHT on Mission Blvd", "Turn LEFT on I-880", "Turn RIGHT on Montague Expressway", "Turn RIGHT on Mission College Blvd"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Mission College Blvd", "Turn LEFT on Montague Expressway", "Turn LEFT on I-880", "Turn RIGHT on Mission Blvd", "Turn LEFT on I-680", "Turn RIGHT on I-80", "Turn LEFT on I-81", "Turn RIGHT on I-84", "Turn RIGHT on CT-2", "Turn LEFT on Hebron Ave"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> directions = {"Start on ", "Turn LEFT on 0123456789 - ", "Turn RIGHT on 0123456789 - ", "Turn LEFT on ", "Turn RIGHT on ", "Turn LEFT on -a0b1c2d3e4f5g6h7i8j9k ", "Turn RIGHT on -A0B1C2D3E4F5G6H7I8J9K ", "Turn LEFT on -", "Turn RIGHT on -"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on -", "Turn LEFT on -", "Turn RIGHT on -A0B1C2D3E4F5G6H7I8J9K ", "Turn LEFT on -a0b1c2d3e4f5g6h7i8j9k ", "Turn RIGHT on ", "Turn LEFT on ", "Turn RIGHT on 0123456789 - ", "Turn LEFT on 0123456789 - ", "Turn RIGHT on "};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> directions = {"Start on Duke University Rd", "Turn RIGHT on Swift Ave", "Turn LEFT on NC-147", "Turn LEFT on I-85", "Turn RIGHT on I-40", "Turn RIGHT on US-52", "Turn LEFT on I-74", "Turn RIGHT on I-77", "Turn LEFT on I-64", "Turn RIGHT on Martin Luther King Memorial Bridge", "Turn RIGHT on N 3rd St", "Turn LEFT on Cole St", "Turn LEFT on N Broadway", "Turn RIGHT on Convention Plz"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Convention Plz", "Turn LEFT on N Broadway", "Turn RIGHT on Cole St", "Turn RIGHT on N 3rd St", "Turn LEFT on Martin Luther King Memorial Bridge", "Turn LEFT on I-64", "Turn RIGHT on I-77", "Turn LEFT on I-74", "Turn RIGHT on US-52", "Turn LEFT on I-40", "Turn LEFT on I-85", "Turn RIGHT on NC-147", "Turn RIGHT on Swift Ave", "Turn LEFT on Duke University Rd"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> directions = {"Start on NdK", "Turn RIGHT on 7s15", "Turn LEFT on G1v", "Turn RIGHT on pau4EeTNbWcpL9qx", "Turn LEFT on 5AIZsfBZX6Mu1bI 4PR ghId5teuuJ DOW ", "Turn LEFT on o", "Turn RIGHT on 2S yJus", "Turn RIGHT on jhia P nZnq3 s1 43EifCjEX", "Turn RIGHT on O-o6jzgylF8vfSvXa9f 5AnRRjGZ3I2", "Turn RIGHT on V7u GqXycw0O3bIIPwQ5K-OSycG8QP", "Turn LEFT on 0TbqbP3MH8moOY6uoKSU", "Turn LEFT on cyeNy5 xFzZcrvYgkOua", "Turn RIGHT on 8nvkbcA8idKmPx2tlx6pMnvtLb2FU0GJ", "Turn RIGHT on uRO27tLhhDr-9E5RbLYx6v", "Turn RIGHT on o8mWpFN1 Q", "Turn RIGHT on X wI4T-2Lp", "Turn LEFT on l", "Turn LEFT on L4194LRyXhnj AYIKdf8m9qc15R-yG", "Turn RIGHT on s0j", "Turn LEFT on vy3ed19T jQ6woe3QX", "Turn LEFT on E", "Turn RIGHT on 9hu6PAbZK", "Turn LEFT on xZQ8", "Turn LEFT on 7", "Turn RIGHT on kUIfICLLAkEcsuyE3a0q", "Turn LEFT on 3G", "Turn RIGHT on MdB", "Turn RIGHT on 2 P VsMIiw5P jQZf0Ss-YUvp2d406Swt", "Turn LEFT on bU9e-", "Turn RIGHT on vj66i5 Dg40t txtAjdlXWETsxSC4Uql5H0", "Turn LEFT on sTU6Ozw04yT3MYBoLmIX", "Turn RIGHT on eKnvEFlc", "Turn LEFT on K2m8lCpr UC O", "Turn LEFT on jb1wW3gPSw", "Turn RIGHT on c1o6ih 33eGd5sq1f biD", "Turn LEFT on G5Ij8vDJMGoNmFH35OIs1ypEUW", "Turn RIGHT on 3ZA8cUzIJOE-hvD 86APa-9B3ev", "Turn LEFT on Y3sM4Ck3 2C01iuXHsgukdJC2Tz F LXJn", "Turn LEFT on BX2GW-f4CIY0T qkL", "Turn RIGHT on 4tOP39kIHFfJIKZkHehq4-ND", "Turn RIGHT on iC3uEPzZQ9bYg-ymGxdf3CaoXksdgN", "Turn LEFT on st", "Turn LEFT on UsPSrI0 ijG1C GpupGj", "Turn LEFT on R jW2lDFBbelp0", "Turn RIGHT on mqbdcrC-oeD Dn1fcpHxTt", "Turn LEFT on 4TcK3GukMRS ip9eTwbK3eEwQm", "Turn LEFT on bLPlFHeX -Gp9q-m SH4", "Turn LEFT on Ppv713XJO7 i", "Turn RIGHT on mm aarX5MfnwC3j8oUxKMNI1CL"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on mm aarX5MfnwC3j8oUxKMNI1CL", "Turn LEFT on Ppv713XJO7 i", "Turn RIGHT on bLPlFHeX -Gp9q-m SH4", "Turn RIGHT on 4TcK3GukMRS ip9eTwbK3eEwQm", "Turn RIGHT on mqbdcrC-oeD Dn1fcpHxTt", "Turn LEFT on R jW2lDFBbelp0", "Turn RIGHT on UsPSrI0 ijG1C GpupGj", "Turn RIGHT on st", "Turn RIGHT on iC3uEPzZQ9bYg-ymGxdf3CaoXksdgN", "Turn LEFT on 4tOP39kIHFfJIKZkHehq4-ND", "Turn LEFT on BX2GW-f4CIY0T qkL", "Turn RIGHT on Y3sM4Ck3 2C01iuXHsgukdJC2Tz F LXJn", "Turn RIGHT on 3ZA8cUzIJOE-hvD 86APa-9B3ev", "Turn LEFT on G5Ij8vDJMGoNmFH35OIs1ypEUW", "Turn RIGHT on c1o6ih 33eGd5sq1f biD", "Turn LEFT on jb1wW3gPSw", "Turn RIGHT on K2m8lCpr UC O", "Turn RIGHT on eKnvEFlc", "Turn LEFT on sTU6Ozw04yT3MYBoLmIX", "Turn RIGHT on vj66i5 Dg40t txtAjdlXWETsxSC4Uql5H0", "Turn LEFT on bU9e-", "Turn RIGHT on 2 P VsMIiw5P jQZf0Ss-YUvp2d406Swt", "Turn LEFT on MdB", "Turn LEFT on 3G", "Turn RIGHT on kUIfICLLAkEcsuyE3a0q", "Turn LEFT on 7", "Turn RIGHT on xZQ8", "Turn RIGHT on 9hu6PAbZK", "Turn LEFT on E", "Turn RIGHT on vy3ed19T jQ6woe3QX", "Turn RIGHT on s0j", "Turn LEFT on L4194LRyXhnj AYIKdf8m9qc15R-yG", "Turn RIGHT on l", "Turn RIGHT on X wI4T-2Lp", "Turn LEFT on o8mWpFN1 Q", "Turn LEFT on uRO27tLhhDr-9E5RbLYx6v", "Turn LEFT on 8nvkbcA8idKmPx2tlx6pMnvtLb2FU0GJ", "Turn LEFT on cyeNy5 xFzZcrvYgkOua", "Turn RIGHT on 0TbqbP3MH8moOY6uoKSU", "Turn RIGHT on V7u GqXycw0O3bIIPwQ5K-OSycG8QP", "Turn LEFT on O-o6jzgylF8vfSvXa9f 5AnRRjGZ3I2", "Turn LEFT on jhia P nZnq3 s1 43EifCjEX", "Turn LEFT on 2S yJus", "Turn LEFT on o", "Turn RIGHT on 5AIZsfBZX6Mu1bI 4PR ghId5teuuJ DOW ", "Turn RIGHT on pau4EeTNbWcpL9qx", "Turn LEFT on G1v", "Turn RIGHT on 7s15", "Turn LEFT on NdK"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> directions = {"Start on w6jW -r3p3kJwxsXjaEGGv8wdlW4In-0", "Turn LEFT on 4F7Z5zc1sMWu0pi ", "Turn LEFT on oZhR 3 YHc0YGBDdt 7cqUbs4W-c", "Turn LEFT on TJ woa6I jMt pyl9bt1R0FYToYUYG", "Turn LEFT on yE1RZFJYqGfSE0j1PwmW sMZ0tod4 TziF", "Turn RIGHT on H5b8pSCc1n4X1cJlkA9rBxW", "Turn RIGHT on EJoDV5cs2IdrH", "Turn RIGHT on yGHk EjJV", "Turn LEFT on 1vaxjuiGQMrv8De4DH7AKpgfrRq8nAu", "Turn RIGHT on MmwkpIKdxL", "Turn LEFT on pMa4kvLwERzINqCnS", "Turn LEFT on 1AfMQT N43", "Turn LEFT on NOyBB 00qYwazFxoiiYkQpdGI-8Xvxb", "Turn RIGHT on kx 8AHb kD", "Turn LEFT on ahIZ4-u5R4Wtm9 iUb", "Turn RIGHT on DNo52iFyG", "Turn LEFT on rdYI", "Turn LEFT on fMEKXpxzHGIsy0Jwk12gA1weduHnH4n", "Turn RIGHT on JkxaXByswUEkIdjpXJMJruSc aI T", "Turn LEFT on 8jjF B 9iyJSpKnZlHuOIfUZP a5jOrI Qr", "Turn RIGHT on Zj0sXUSXIVPOY9VGdlr3sHU eX lu9XcnX", "Turn LEFT on GClkq4L98zDLuj5-", "Turn RIGHT on AUN3CC wlvlFGxsgBIs", "Turn LEFT on fyeZLUDU", "Turn RIGHT on qMbqcXCL5R 0", "Turn RIGHT on f 0OMSDzC vRC", "Turn RIGHT on yLMp9GSjx-KD8LExqVaGG", "Turn RIGHT on baU6F6TLehpLIe5vUIG3jUYxIbRmbah3", "Turn LEFT on VMrbuYocZJ ", "Turn LEFT on qOy5 U2GR C A7CRD15l2"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on qOy5 U2GR C A7CRD15l2", "Turn RIGHT on VMrbuYocZJ ", "Turn RIGHT on baU6F6TLehpLIe5vUIG3jUYxIbRmbah3", "Turn LEFT on yLMp9GSjx-KD8LExqVaGG", "Turn LEFT on f 0OMSDzC vRC", "Turn LEFT on qMbqcXCL5R 0", "Turn LEFT on fyeZLUDU", "Turn RIGHT on AUN3CC wlvlFGxsgBIs", "Turn LEFT on GClkq4L98zDLuj5-", "Turn RIGHT on Zj0sXUSXIVPOY9VGdlr3sHU eX lu9XcnX", "Turn LEFT on 8jjF B 9iyJSpKnZlHuOIfUZP a5jOrI Qr", "Turn RIGHT on JkxaXByswUEkIdjpXJMJruSc aI T", "Turn LEFT on fMEKXpxzHGIsy0Jwk12gA1weduHnH4n", "Turn RIGHT on rdYI", "Turn RIGHT on DNo52iFyG", "Turn LEFT on ahIZ4-u5R4Wtm9 iUb", "Turn RIGHT on kx 8AHb kD", "Turn LEFT on NOyBB 00qYwazFxoiiYkQpdGI-8Xvxb", "Turn RIGHT on 1AfMQT N43", "Turn RIGHT on pMa4kvLwERzINqCnS", "Turn RIGHT on MmwkpIKdxL", "Turn LEFT on 1vaxjuiGQMrv8De4DH7AKpgfrRq8nAu", "Turn RIGHT on yGHk EjJV", "Turn LEFT on EJoDV5cs2IdrH", "Turn LEFT on H5b8pSCc1n4X1cJlkA9rBxW", "Turn LEFT on yE1RZFJYqGfSE0j1PwmW sMZ0tod4 TziF", "Turn RIGHT on TJ woa6I jMt pyl9bt1R0FYToYUYG", "Turn RIGHT on oZhR 3 YHc0YGBDdt 7cqUbs4W-c", "Turn RIGHT on 4F7Z5zc1sMWu0pi ", "Turn RIGHT on w6jW -r3p3kJwxsXjaEGGv8wdlW4In-0"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> directions = {"Start on ZFF3uMVwaZ9lZs9JwKv14joj", "Turn RIGHT on e7YVtla43pN8vPiZcm03xi-jI xEo8", "Turn LEFT on 8hf9eKJhLt3gi0imwF", "Turn LEFT on Z47xqcG4CCYUJnC1", "Turn LEFT on KrEuxT6ICWka5pqxmkc-x1l lRhe3YV6MOZvL", "Turn LEFT on Q2AfdO-S SueluR36-MVd uD advJ", "Turn RIGHT on PbAmeEdFkTnrOg QkfXziXY cf2QZuyhQi", "Turn LEFT on U00I2j-zHUH5OK2I9JlPogLMm8MU1C", "Turn RIGHT on TREl xmnwf pKkE", "Turn LEFT on 35 ttmGxH5ut7kopS4 G2rT7gbzc", "Turn LEFT on OX aL57b", "Turn RIGHT on ncD98PbD1o6RVPGv1", "Turn LEFT on OY0 3-K86S", "Turn RIGHT on WZyqy8ebEl5uWpic6POaJKZ5VZnQ", "Turn RIGHT on XCcr6K1BqJUwVtf1BH7", "Turn LEFT on TpWJDWqRcQ", "Turn LEFT on DI1ogWimz0-EpMK2RS-D vCpVjq1", "Turn RIGHT on Z xV1NwDWf0ouAx GCQo0eeZsivaeJREGf7", "Turn RIGHT on ibrsniG97clEPy4 3JMt H5fMBc1Jf-KO", "Turn LEFT on X4y1q5A9 7ZId", "Turn LEFT on jS6HVuRZ2VqEVKGLDjCy7tdmcNsM QhQ2hM", "Turn LEFT on f8cQJ7hmnavlzbfmcYSKND", "Turn RIGHT on iKUAAy-FM", "Turn RIGHT on aX3E0 9i-UXx-"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on aX3E0 9i-UXx-", "Turn LEFT on iKUAAy-FM", "Turn LEFT on f8cQJ7hmnavlzbfmcYSKND", "Turn RIGHT on jS6HVuRZ2VqEVKGLDjCy7tdmcNsM QhQ2hM", "Turn RIGHT on X4y1q5A9 7ZId", "Turn RIGHT on ibrsniG97clEPy4 3JMt H5fMBc1Jf-KO", "Turn LEFT on Z xV1NwDWf0ouAx GCQo0eeZsivaeJREGf7", "Turn LEFT on DI1ogWimz0-EpMK2RS-D vCpVjq1", "Turn RIGHT on TpWJDWqRcQ", "Turn RIGHT on XCcr6K1BqJUwVtf1BH7", "Turn LEFT on WZyqy8ebEl5uWpic6POaJKZ5VZnQ", "Turn LEFT on OY0 3-K86S", "Turn RIGHT on ncD98PbD1o6RVPGv1", "Turn LEFT on OX aL57b", "Turn RIGHT on 35 ttmGxH5ut7kopS4 G2rT7gbzc", "Turn RIGHT on TREl xmnwf pKkE", "Turn LEFT on U00I2j-zHUH5OK2I9JlPogLMm8MU1C", "Turn RIGHT on PbAmeEdFkTnrOg QkfXziXY cf2QZuyhQi", "Turn LEFT on Q2AfdO-S SueluR36-MVd uD advJ", "Turn RIGHT on KrEuxT6ICWka5pqxmkc-x1l lRhe3YV6MOZvL", "Turn RIGHT on Z47xqcG4CCYUJnC1", "Turn RIGHT on 8hf9eKJhLt3gi0imwF", "Turn RIGHT on e7YVtla43pN8vPiZcm03xi-jI xEo8", "Turn LEFT on ZFF3uMVwaZ9lZs9JwKv14joj"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> directions = {"Start on amX B WxD vw", "Turn LEFT on 1G5", "Turn RIGHT on EM RNmhrS-1z fb izbbcBOrn", "Turn RIGHT on 8dNqYR 0j23JLAsuy", "Turn LEFT on Hj5GYuUWA2r w57EnqC3vM S2ajJ8TfC6s5 2", "Turn LEFT on Z39NH 7r4IXS JBiwZYwSQeE1BzX", "Turn LEFT on x Gss yeC", "Turn LEFT on nz8H9dmddpKw", "Turn LEFT on Xw0iBMiXb0kPTkJFlb-Cv ", "Turn LEFT on mp9a-8NUx8JEQzvVIB9oojrJLSqkt", "Turn RIGHT on ootFlQLJFoSK5nIjGo6lNsVOt", "Turn LEFT on 3IIJypl", "Turn LEFT on u JnW1K8VG xBo YMmAX h0y", "Turn RIGHT on Ogh41AfJdQV gJh9Gg 3Oq6HP8eSOZk5", "Turn LEFT on ft3HX0zS8MVCI5xTcZQBbSqtnF", "Turn LEFT on KgvmIMkDKAkt", "Turn LEFT on kzzAj3mOwTslpqnMZOOq X ", "Turn RIGHT on jnI5D1wLzzUWAc8aQG96", "Turn LEFT on rO-l", "Turn LEFT on dyG22i9gBfgmIT-o", "Turn LEFT on b a0qXrPdDsKjxtCVWQ", "Turn LEFT on 2NZ 0P-2BDV7M ", "Turn LEFT on 7x C2qSXcM52PlTboC9VMek3sp 5vP5d-sw", "Turn RIGHT on UoKk6N5TT97k3P-d4YQ5avkDBZbq-lQXYDUc", "Turn LEFT on Y9LJIRdjM bVQTgbGN ", "Turn RIGHT on DijFKDc b-a7WJ1 Sjz", "Turn RIGHT on zQb", "Turn RIGHT on udraS0UDMoASaP", "Turn RIGHT on WmdaX1Na1yD5cY11R37eQhQufPjQAbDssx U", "Turn RIGHT on 4 Nxb8V7sc", "Turn RIGHT on tVRGCRE3YhtdqW6SJM h"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on tVRGCRE3YhtdqW6SJM h", "Turn LEFT on 4 Nxb8V7sc", "Turn LEFT on WmdaX1Na1yD5cY11R37eQhQufPjQAbDssx U", "Turn LEFT on udraS0UDMoASaP", "Turn LEFT on zQb", "Turn LEFT on DijFKDc b-a7WJ1 Sjz", "Turn LEFT on Y9LJIRdjM bVQTgbGN ", "Turn RIGHT on UoKk6N5TT97k3P-d4YQ5avkDBZbq-lQXYDUc", "Turn LEFT on 7x C2qSXcM52PlTboC9VMek3sp 5vP5d-sw", "Turn RIGHT on 2NZ 0P-2BDV7M ", "Turn RIGHT on b a0qXrPdDsKjxtCVWQ", "Turn RIGHT on dyG22i9gBfgmIT-o", "Turn RIGHT on rO-l", "Turn RIGHT on jnI5D1wLzzUWAc8aQG96", "Turn LEFT on kzzAj3mOwTslpqnMZOOq X ", "Turn RIGHT on KgvmIMkDKAkt", "Turn RIGHT on ft3HX0zS8MVCI5xTcZQBbSqtnF", "Turn RIGHT on Ogh41AfJdQV gJh9Gg 3Oq6HP8eSOZk5", "Turn LEFT on u JnW1K8VG xBo YMmAX h0y", "Turn RIGHT on 3IIJypl", "Turn RIGHT on ootFlQLJFoSK5nIjGo6lNsVOt", "Turn LEFT on mp9a-8NUx8JEQzvVIB9oojrJLSqkt", "Turn RIGHT on Xw0iBMiXb0kPTkJFlb-Cv ", "Turn RIGHT on nz8H9dmddpKw", "Turn RIGHT on x Gss yeC", "Turn RIGHT on Z39NH 7r4IXS JBiwZYwSQeE1BzX", "Turn RIGHT on Hj5GYuUWA2r w57EnqC3vM S2ajJ8TfC6s5 2", "Turn RIGHT on 8dNqYR 0j23JLAsuy", "Turn LEFT on EM RNmhrS-1z fb izbbcBOrn", "Turn LEFT on 1G5", "Turn RIGHT on amX B WxD vw"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> directions = {"Start on Gmm7gVeC6AHhOTZN 0KWKrs3np ZONUQ", "Turn RIGHT on 0 5 rATWrSYWytJ8r6s4 Oj", "Turn RIGHT on GzwOJeTOAaPVIUqbSt Wv", "Turn LEFT on N9yQPi1rEer8jW0ydt2oBCVbsAleXsBdCA9", "Turn RIGHT on aIZrx1RSoV7UiIpG 8TK 3V9Z 8q", "Turn RIGHT on E siO33yuxew", "Turn LEFT on picK68JY AHyK", "Turn LEFT on Fmt3A4VQXM7bmjk-bI5", "Turn RIGHT on UbCM XsCntkbmbkFr0xGKp9gN chYi 9w ", "Turn LEFT on zs8FYKsNEKRnK9cxANf5", "Turn LEFT on t1XAfICAYaX", "Turn RIGHT on U5tjExFOB KdqTxFCy", "Turn LEFT on L7J-WWlxSM8O BqaK7", "Turn RIGHT on oU", "Turn LEFT on bvJnxmMgwAu0gMzNPRcnc", "Turn RIGHT on Hlu8sYIU", "Turn LEFT on 55ddWWaGaX6cqlC 88u6vr", "Turn LEFT on BnRE gAHig9NAh8PPVHWLxCWx1WCh", "Turn RIGHT on NjoRteqBbJ8Sqiu8VY", "Turn RIGHT on dr-KQ3gQSA EZ QJWfSVtlhUfvFIwb5RT", "Turn RIGHT on zSZAfoOmhsa459q8-ZiUNVEQ63l3", "Turn RIGHT on pk67 l60cO032", "Turn LEFT on 3aVmpw2OpIC Kgh ", "Turn LEFT on 0yzaArUj9zIIF3i", "Turn RIGHT on IIDY EN8 nLMv06", "Turn RIGHT on p4RiuBIo8-BUh mFza", "Turn LEFT on zJJVdu92jlGfEFDkziRb5abS6ssgjO5TS", "Turn RIGHT on VeHQcxv p2HOQ Zn5", "Turn RIGHT on cH4Zpm8Bfeq", "Turn LEFT on ho RLYqby6iv7FD tEntYd nhz4vClY"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on ho RLYqby6iv7FD tEntYd nhz4vClY", "Turn RIGHT on cH4Zpm8Bfeq", "Turn LEFT on VeHQcxv p2HOQ Zn5", "Turn LEFT on zJJVdu92jlGfEFDkziRb5abS6ssgjO5TS", "Turn RIGHT on p4RiuBIo8-BUh mFza", "Turn LEFT on IIDY EN8 nLMv06", "Turn LEFT on 0yzaArUj9zIIF3i", "Turn RIGHT on 3aVmpw2OpIC Kgh ", "Turn RIGHT on pk67 l60cO032", "Turn LEFT on zSZAfoOmhsa459q8-ZiUNVEQ63l3", "Turn LEFT on dr-KQ3gQSA EZ QJWfSVtlhUfvFIwb5RT", "Turn LEFT on NjoRteqBbJ8Sqiu8VY", "Turn LEFT on BnRE gAHig9NAh8PPVHWLxCWx1WCh", "Turn RIGHT on 55ddWWaGaX6cqlC 88u6vr", "Turn RIGHT on Hlu8sYIU", "Turn LEFT on bvJnxmMgwAu0gMzNPRcnc", "Turn RIGHT on oU", "Turn LEFT on L7J-WWlxSM8O BqaK7", "Turn RIGHT on U5tjExFOB KdqTxFCy", "Turn LEFT on t1XAfICAYaX", "Turn RIGHT on zs8FYKsNEKRnK9cxANf5", "Turn RIGHT on UbCM XsCntkbmbkFr0xGKp9gN chYi 9w ", "Turn LEFT on Fmt3A4VQXM7bmjk-bI5", "Turn RIGHT on picK68JY AHyK", "Turn RIGHT on E siO33yuxew", "Turn LEFT on aIZrx1RSoV7UiIpG 8TK 3V9Z 8q", "Turn LEFT on N9yQPi1rEer8jW0ydt2oBCVbsAleXsBdCA9", "Turn RIGHT on GzwOJeTOAaPVIUqbSt Wv", "Turn LEFT on 0 5 rATWrSYWytJ8r6s4 Oj", "Turn LEFT on Gmm7gVeC6AHhOTZN 0KWKrs3np ZONUQ"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> directions = {"Start on lafZzD5KViwfkfWz6NWps 6f1", "Turn LEFT on qdVu", "Turn LEFT on Jffgkc8p-D 9Ja 49BmPW5nP", "Turn LEFT on 0VbvR9PGYKvRlS0NvshwZutmrkAP", "Turn LEFT on qyXkyN ut-1Xv2F43HetOVx", "Turn RIGHT on mwlILfperyMP4Jpw6", "Turn RIGHT on Wl KFTuCpMi6 dNOkRBChyTIc oYjip fBc", "Turn RIGHT on sjbG3uc l3dTE0", "Turn LEFT on od", "Turn RIGHT on SeCDiz 4i9 oEUEn5xGCZ 6XciThhSV", "Turn RIGHT on -2LH", "Turn LEFT on JZV", "Turn RIGHT on YJzXnyCaurQ 3G-jKMtvdK2txw0d4Aba", "Turn LEFT on zn1bur h", "Turn RIGHT on -FLvcDUv", "Turn RIGHT on wZnolWBqolA jxjQKvw8", "Turn LEFT on IJbM4YkKYinHJmJT Aa", "Turn RIGHT on 3t", "Turn RIGHT on 0Ln EnKiRW gHvTuduJrHDjBRBj8", "Turn LEFT on 6S3EH1P5PGp7KMmnFOH2u 5NZkMJ N ", "Turn LEFT on nKor5aqdyMnGcXr", "Turn RIGHT on q", "Turn RIGHT on QrRPS82fFJl97uZqZ PoD iYui0 W", "Turn LEFT on 6JJi1Bfoz9 aJTxKgwjdR7", "Turn RIGHT on TaRmPQ BLSnAG6sIeMion-dgwHkd yP", "Turn RIGHT on MmXPe1g oxV4 qvBCL", "Turn LEFT on L8CCaOXGkHTO5", "Turn RIGHT on IvFGoq5zkTp"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on IvFGoq5zkTp", "Turn LEFT on L8CCaOXGkHTO5", "Turn RIGHT on MmXPe1g oxV4 qvBCL", "Turn LEFT on TaRmPQ BLSnAG6sIeMion-dgwHkd yP", "Turn LEFT on 6JJi1Bfoz9 aJTxKgwjdR7", "Turn RIGHT on QrRPS82fFJl97uZqZ PoD iYui0 W", "Turn LEFT on q", "Turn LEFT on nKor5aqdyMnGcXr", "Turn RIGHT on 6S3EH1P5PGp7KMmnFOH2u 5NZkMJ N ", "Turn RIGHT on 0Ln EnKiRW gHvTuduJrHDjBRBj8", "Turn LEFT on 3t", "Turn LEFT on IJbM4YkKYinHJmJT Aa", "Turn RIGHT on wZnolWBqolA jxjQKvw8", "Turn LEFT on -FLvcDUv", "Turn LEFT on zn1bur h", "Turn RIGHT on YJzXnyCaurQ 3G-jKMtvdK2txw0d4Aba", "Turn LEFT on JZV", "Turn RIGHT on -2LH", "Turn LEFT on SeCDiz 4i9 oEUEn5xGCZ 6XciThhSV", "Turn LEFT on od", "Turn RIGHT on sjbG3uc l3dTE0", "Turn LEFT on Wl KFTuCpMi6 dNOkRBChyTIc oYjip fBc", "Turn LEFT on mwlILfperyMP4Jpw6", "Turn LEFT on qyXkyN ut-1Xv2F43HetOVx", "Turn RIGHT on 0VbvR9PGYKvRlS0NvshwZutmrkAP", "Turn RIGHT on Jffgkc8p-D 9Ja 49BmPW5nP", "Turn RIGHT on qdVu", "Turn RIGHT on lafZzD5KViwfkfWz6NWps 6f1"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> directions = {"Start on eiQLz8A zZq gPh ilrbrQ-qpAAZj", "Turn RIGHT on Yi6dzEoGFDSracV8VXWnCAlVFUniDu", "Turn RIGHT on 4-1cu15sP", "Turn RIGHT on ycpE98T99 ", "Turn LEFT on hvo3a7 8HyhwY pOUWmvx 2ywVsFhlZw", "Turn RIGHT on es bYhrDPFVgPV xvSnTafOvXO-jc", "Turn RIGHT on nBtblsi5Zl9dtT9N", "Turn RIGHT on YvUmXTaT5clW", "Turn RIGHT on 7SMZ", "Turn RIGHT on knoHFitfwdBwKav6kb5pZKR"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on knoHFitfwdBwKav6kb5pZKR", "Turn LEFT on 7SMZ", "Turn LEFT on YvUmXTaT5clW", "Turn LEFT on nBtblsi5Zl9dtT9N", "Turn LEFT on es bYhrDPFVgPV xvSnTafOvXO-jc", "Turn LEFT on hvo3a7 8HyhwY pOUWmvx 2ywVsFhlZw", "Turn RIGHT on ycpE98T99 ", "Turn LEFT on 4-1cu15sP", "Turn LEFT on Yi6dzEoGFDSracV8VXWnCAlVFUniDu", "Turn LEFT on eiQLz8A zZq gPh ilrbrQ-qpAAZj"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> directions = {"Start on W5l v Lq5hxky", "Turn RIGHT on iWLx g0URK", "Turn RIGHT on 2r-l aeicj9DgVu6F7Gu6wkBzNCEPVpBjTlj", "Turn RIGHT on g-j7YG", "Turn RIGHT on Jj-nZI9VrxjJ", "Turn RIGHT on wRCYfLRRWmF49OzOZjniCpUgBb0 OoHMNrC6", "Turn LEFT on Jo Z", "Turn RIGHT on NdInc5-CD h UIMVo", "Turn LEFT on 3OfGc", "Turn LEFT on nDxTiz1bzvTSdsNrkRCzE786IIh4VYfus", "Turn LEFT on JHRDOHQd2n", "Turn RIGHT on poQJtcuPzvlKo-3MJSHDRjAmj7Da-", "Turn LEFT on 4", "Turn RIGHT on hI", "Turn LEFT on 7imGDOD gwGjLFoLE ", "Turn RIGHT on 5kBgjT", "Turn RIGHT on Y5r3bawHc27q0lSQKgPyRqo mv1Czq", "Turn LEFT on Sjb Ca", "Turn LEFT on MknP9NW P9FQm vwlrPom8ZPHDBN", "Turn RIGHT on hD10", "Turn RIGHT on zlO6X", "Turn LEFT on 7B9zFy6b8KRsHQ3", "Turn LEFT on VZsb5XYPUI4t", "Turn RIGHT on O1RYpt 87 wd7", "Turn RIGHT on T9PJZA G5B4W OzMPcZ", "Turn LEFT on gB1HIFvyy 0cimMWVhij3A4N1xvGz1iYG", "Turn LEFT on ShnhqW ZLJ06Lik", "Turn LEFT on 8QzUH knO87ASRku42T6RHBF ", "Turn LEFT on leonJ56JhBROz", "Turn RIGHT on rkgfTtER47J -O34QWQqLUJ05EvxmbqpGef-", "Turn RIGHT on PRDhHcGdHF p ", "Turn LEFT on qezmnvFUGKeubmbaw7Kk", "Turn RIGHT on x0j p3lY4M81Mvv qyswp 46fmJ9gs8z", "Turn LEFT on DNLZLdaf", "Turn RIGHT on EpRpHp", "Turn RIGHT on Sw6LfnRxZZWHOHwzLjzRECyed074", "Turn LEFT on nm", "Turn RIGHT on YMulyoRNpW9qbDIlP", "Turn LEFT on DDf2b5zfeqNdAaN3CK9"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on DDf2b5zfeqNdAaN3CK9", "Turn RIGHT on YMulyoRNpW9qbDIlP", "Turn LEFT on nm", "Turn RIGHT on Sw6LfnRxZZWHOHwzLjzRECyed074", "Turn LEFT on EpRpHp", "Turn LEFT on DNLZLdaf", "Turn RIGHT on x0j p3lY4M81Mvv qyswp 46fmJ9gs8z", "Turn LEFT on qezmnvFUGKeubmbaw7Kk", "Turn RIGHT on PRDhHcGdHF p ", "Turn LEFT on rkgfTtER47J -O34QWQqLUJ05EvxmbqpGef-", "Turn LEFT on leonJ56JhBROz", "Turn RIGHT on 8QzUH knO87ASRku42T6RHBF ", "Turn RIGHT on ShnhqW ZLJ06Lik", "Turn RIGHT on gB1HIFvyy 0cimMWVhij3A4N1xvGz1iYG", "Turn RIGHT on T9PJZA G5B4W OzMPcZ", "Turn LEFT on O1RYpt 87 wd7", "Turn LEFT on VZsb5XYPUI4t", "Turn RIGHT on 7B9zFy6b8KRsHQ3", "Turn RIGHT on zlO6X", "Turn LEFT on hD10", "Turn LEFT on MknP9NW P9FQm vwlrPom8ZPHDBN", "Turn RIGHT on Sjb Ca", "Turn RIGHT on Y5r3bawHc27q0lSQKgPyRqo mv1Czq", "Turn LEFT on 5kBgjT", "Turn LEFT on 7imGDOD gwGjLFoLE ", "Turn RIGHT on hI", "Turn LEFT on 4", "Turn RIGHT on poQJtcuPzvlKo-3MJSHDRjAmj7Da-", "Turn LEFT on JHRDOHQd2n", "Turn RIGHT on nDxTiz1bzvTSdsNrkRCzE786IIh4VYfus", "Turn RIGHT on 3OfGc", "Turn RIGHT on NdInc5-CD h UIMVo", "Turn LEFT on Jo Z", "Turn RIGHT on wRCYfLRRWmF49OzOZjniCpUgBb0 OoHMNrC6", "Turn LEFT on Jj-nZI9VrxjJ", "Turn LEFT on g-j7YG", "Turn LEFT on 2r-l aeicj9DgVu6F7Gu6wkBzNCEPVpBjTlj", "Turn LEFT on iWLx g0URK", "Turn LEFT on W5l v Lq5hxky"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> directions = {"Start on 7E 89PQnTk7t0hxX", "Turn RIGHT on Ieg G4o28de8J5fqmg 6KgRQiAiBvYh", "Turn RIGHT on SqRJKdTL", "Turn RIGHT on PpV0bFV1kV44ea-QS 7XlKL4", "Turn LEFT on 4", "Turn LEFT on XHAYu5ADSGkL", "Turn LEFT on -s975IjzYzd0GzCaghKc N9ofrF4pW-JnwKzk", "Turn RIGHT on NRPt AMBpevXgRy", "Turn LEFT on J7X-eco-gKjJVPOX MhoH", "Turn LEFT on crUO6qnuDIWlGc3uNcAOpUSB18Q7suoG9", "Turn LEFT on jvDaqwUTE-qM6e", "Turn LEFT on 7ua", "Turn RIGHT on cPhqXlEZA pE0so fX pe", "Turn LEFT on dL T NtRhYCZ Nply zNiA9W", "Turn LEFT on 2 Ea3dsofmGH56mv0zNeEwvNWW JbcSA", "Turn LEFT on tgRq s4KiDI6g", "Turn RIGHT on Vhi 9FTuKuVnFkHAJchV-dyINa", "Turn RIGHT on U014n8LruqntGX", "Turn LEFT on 00ho8PHP7yHrF54QCAAg", "Turn LEFT on nN", "Turn LEFT on xBVZrkyNT p OF", "Turn LEFT on Pr JBQ3xMbBJS FNq aXVKrGfycxv398VFwfF", "Turn RIGHT on RGvfKoU5DTFN JYnhaMtUrxWby", "Turn LEFT on 6KzDTmvLICFWj2xo8 iyEHrrKBsrfFB h taf", "Turn RIGHT on PviSAc8sy3rwW0 roJCTjG2uulaq7", "Turn LEFT on Lk-98 OBl scWzx sZPu61fB4y0Y-QMf", "Turn LEFT on 54aiK-WkihR ", "Turn RIGHT on ZKrW-3UsiP YL -CXh5wyyAHwTa", "Turn LEFT on dvs4Plk72tKSFmYm5X", "Turn RIGHT on AxGnMCWX3zwbDqDNhT-n-PtQFE5 rO gmh", "Turn RIGHT on F0vjV8gag jI", "Turn LEFT on 6 u2mSW OYpi7"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on 6 u2mSW OYpi7", "Turn RIGHT on F0vjV8gag jI", "Turn LEFT on AxGnMCWX3zwbDqDNhT-n-PtQFE5 rO gmh", "Turn LEFT on dvs4Plk72tKSFmYm5X", "Turn RIGHT on ZKrW-3UsiP YL -CXh5wyyAHwTa", "Turn LEFT on 54aiK-WkihR ", "Turn RIGHT on Lk-98 OBl scWzx sZPu61fB4y0Y-QMf", "Turn RIGHT on PviSAc8sy3rwW0 roJCTjG2uulaq7", "Turn LEFT on 6KzDTmvLICFWj2xo8 iyEHrrKBsrfFB h taf", "Turn RIGHT on RGvfKoU5DTFN JYnhaMtUrxWby", "Turn LEFT on Pr JBQ3xMbBJS FNq aXVKrGfycxv398VFwfF", "Turn RIGHT on xBVZrkyNT p OF", "Turn RIGHT on nN", "Turn RIGHT on 00ho8PHP7yHrF54QCAAg", "Turn RIGHT on U014n8LruqntGX", "Turn LEFT on Vhi 9FTuKuVnFkHAJchV-dyINa", "Turn LEFT on tgRq s4KiDI6g", "Turn RIGHT on 2 Ea3dsofmGH56mv0zNeEwvNWW JbcSA", "Turn RIGHT on dL T NtRhYCZ Nply zNiA9W", "Turn RIGHT on cPhqXlEZA pE0so fX pe", "Turn LEFT on 7ua", "Turn RIGHT on jvDaqwUTE-qM6e", "Turn RIGHT on crUO6qnuDIWlGc3uNcAOpUSB18Q7suoG9", "Turn RIGHT on J7X-eco-gKjJVPOX MhoH", "Turn RIGHT on NRPt AMBpevXgRy", "Turn LEFT on -s975IjzYzd0GzCaghKc N9ofrF4pW-JnwKzk", "Turn RIGHT on XHAYu5ADSGkL", "Turn RIGHT on 4", "Turn RIGHT on PpV0bFV1kV44ea-QS 7XlKL4", "Turn LEFT on SqRJKdTL", "Turn LEFT on Ieg G4o28de8J5fqmg 6KgRQiAiBvYh", "Turn LEFT on 7E 89PQnTk7t0hxX"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> directions = {"Start on z ayhVM0f8Y6R0SUlmt", "Turn LEFT on iIC6oVFO4bba 8JGw1onz", "Turn RIGHT on k0He88m81LnkG-PPoqXyLRNmEh1PHoQ N", "Turn RIGHT on vqaS5y3 KPIZ66C2hVMzTAOKJU", "Turn LEFT on ic0J1Bqf", "Turn RIGHT on v4l 8hHh 6Z", "Turn RIGHT on MTnSaSfUZqZ2he", "Turn RIGHT on -SWhNrV1dop6fbdKUAB", "Turn RIGHT on z2PUJtMyC22w5p", "Turn RIGHT on M", "Turn RIGHT on WKskw -w0qMHQ5Wh O Ya3", "Turn RIGHT on ZfZbzgD2wRC zE", "Turn LEFT on Cw9xRHIrMdn2uFUwaLVk", "Turn RIGHT on DwHnqinuQJYoRqnwpAQo-ca", "Turn RIGHT on xUHJJDFxbacneAJJ 0GnA", "Turn RIGHT on sVa9W2uO7fV5n tpL", "Turn LEFT on zvimD0k", "Turn RIGHT on AB CMnXyn2gERtFXzI4h-I47J6tZ1z a", "Turn RIGHT on F", "Turn RIGHT on Oyv 1JN2-wy fms8kWObkPVHz15M6A1rHQsS", "Turn LEFT on 7 yRgf5 hWSoIeaDb", "Turn RIGHT on 3D2f0Zefvu ra2toxsE0p", "Turn RIGHT on uBLxHdwMoxzM5QdiY", "Turn RIGHT on g ", "Turn LEFT on oy", "Turn LEFT on iv3DHproOMV7Yk1q9kzNYiPp nNudRbq6p9", "Turn RIGHT on zpXz4X rAF1sfT Qo -0E", "Turn RIGHT on N-0sJa Wm", "Turn LEFT on ZH8saI Z PyS24JB5qJMMR -sA ", "Turn LEFT on 5z2TuU n-8vICrpyRbeWU4gBff", "Turn LEFT on 47 tECD-9LTyMr", "Turn LEFT on nCH3b5C1fSTOi t", "Turn RIGHT on PDT6h trV- JuRp9yj", "Turn LEFT on -ie", "Turn LEFT on Sp9Yc", "Turn RIGHT on TRWqbC9IchV q", "Turn LEFT on Op CoSyG1Zw"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Op CoSyG1Zw", "Turn RIGHT on TRWqbC9IchV q", "Turn LEFT on Sp9Yc", "Turn RIGHT on -ie", "Turn RIGHT on PDT6h trV- JuRp9yj", "Turn LEFT on nCH3b5C1fSTOi t", "Turn RIGHT on 47 tECD-9LTyMr", "Turn RIGHT on 5z2TuU n-8vICrpyRbeWU4gBff", "Turn RIGHT on ZH8saI Z PyS24JB5qJMMR -sA ", "Turn RIGHT on N-0sJa Wm", "Turn LEFT on zpXz4X rAF1sfT Qo -0E", "Turn LEFT on iv3DHproOMV7Yk1q9kzNYiPp nNudRbq6p9", "Turn RIGHT on oy", "Turn RIGHT on g ", "Turn LEFT on uBLxHdwMoxzM5QdiY", "Turn LEFT on 3D2f0Zefvu ra2toxsE0p", "Turn LEFT on 7 yRgf5 hWSoIeaDb", "Turn RIGHT on Oyv 1JN2-wy fms8kWObkPVHz15M6A1rHQsS", "Turn LEFT on F", "Turn LEFT on AB CMnXyn2gERtFXzI4h-I47J6tZ1z a", "Turn LEFT on zvimD0k", "Turn RIGHT on sVa9W2uO7fV5n tpL", "Turn LEFT on xUHJJDFxbacneAJJ 0GnA", "Turn LEFT on DwHnqinuQJYoRqnwpAQo-ca", "Turn LEFT on Cw9xRHIrMdn2uFUwaLVk", "Turn RIGHT on ZfZbzgD2wRC zE", "Turn LEFT on WKskw -w0qMHQ5Wh O Ya3", "Turn LEFT on M", "Turn LEFT on z2PUJtMyC22w5p", "Turn LEFT on -SWhNrV1dop6fbdKUAB", "Turn LEFT on MTnSaSfUZqZ2he", "Turn LEFT on v4l 8hHh 6Z", "Turn LEFT on ic0J1Bqf", "Turn RIGHT on vqaS5y3 KPIZ66C2hVMzTAOKJU", "Turn LEFT on k0He88m81LnkG-PPoqXyLRNmEh1PHoQ N", "Turn LEFT on iIC6oVFO4bba 8JGw1onz", "Turn RIGHT on z ayhVM0f8Y6R0SUlmt"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> directions = {"Start on fPgXM cHlbZNm7uLmU0", "Turn RIGHT on X9 eA A9AOky", "Turn RIGHT on D7lxgc9uNzP aUzB zrO0JxL eW", "Turn LEFT on xe2RdoQK0ylyRvMUhe67uG1hizTiMhrUDL4i", "Turn LEFT on t4jW N8c RBWcfd K9gzyHSn s h-n W", "Turn RIGHT on 6EG7GxbNdRn4pDSYfCRow-hi", "Turn LEFT on z4lBUX5", "Turn LEFT on Irvzn", "Turn RIGHT on oD-SF-EJHcHuWG0OYJ", "Turn LEFT on yhSFb-Cc IkBVzPBbiB51uslOs2Rl ", "Turn RIGHT on TaNLDsgOOjIS-RCHPQ8xzSvTOh2h", "Turn RIGHT on 4XoRhv9NWk8Gahza8ZlwGl", "Turn LEFT on bFUCuV", "Turn LEFT on PqGfD2Nd8 SfJ1 pJ A j4LvCWcT5EVLQX-2", "Turn RIGHT on DJDKT23Cwkdoy", "Turn RIGHT on C1p4Rvs4Q6sUJLPa9W3pX", "Turn RIGHT on o2Lmpm QDczytYoA2h BrTgvy", "Turn RIGHT on Jc0vJBquXid 9om15u3", "Turn LEFT on E", "Turn RIGHT on cDv BhP T0kIybBWBUu MLJuYyW", "Turn LEFT on 2 4KHxYiHzU96A btmWegDn hAKBt", "Turn LEFT on Yyb4 H6d", "Turn RIGHT on Mq5jMwZ7", "Turn RIGHT on rnF2UvD8z99rOb22OaV", "Turn LEFT on RjhsqLQDlX8EqN6hw ", "Turn RIGHT on 3UR 9UNNHuN-", "Turn LEFT on cm", "Turn RIGHT on Y2-TyW 4WlGzc7QGLYIf8ZTkBAab", "Turn RIGHT on L 3tU3Vjy0D", "Turn LEFT on VH B ", "Turn LEFT on kbIOzjx3m Qzj066Wp0bEWB", "Turn LEFT on xiA7-5U", "Turn LEFT on hG2mTWMMvncWJW0 a-RZ6Jgo5alh", "Turn RIGHT on l VYK7OQc P", "Turn LEFT on wo", "Turn RIGHT on EGPdERmV2atii", "Turn LEFT on R7", "Turn RIGHT on 1dB3klYq6Vksp0ij33g", "Turn RIGHT on 9B7SuVUpCmYutAOwH6q07", "Turn RIGHT on a4GO5", "Turn LEFT on FzViCHlNBR8zDz 1OZcnBtxjwgCM7", "Turn LEFT on 7L FbJ X4Pimc6a 5 IdWr qb", "Turn LEFT on BYw"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on BYw", "Turn RIGHT on 7L FbJ X4Pimc6a 5 IdWr qb", "Turn RIGHT on FzViCHlNBR8zDz 1OZcnBtxjwgCM7", "Turn RIGHT on a4GO5", "Turn LEFT on 9B7SuVUpCmYutAOwH6q07", "Turn LEFT on 1dB3klYq6Vksp0ij33g", "Turn LEFT on R7", "Turn RIGHT on EGPdERmV2atii", "Turn LEFT on wo", "Turn RIGHT on l VYK7OQc P", "Turn LEFT on hG2mTWMMvncWJW0 a-RZ6Jgo5alh", "Turn RIGHT on xiA7-5U", "Turn RIGHT on kbIOzjx3m Qzj066Wp0bEWB", "Turn RIGHT on VH B ", "Turn RIGHT on L 3tU3Vjy0D", "Turn LEFT on Y2-TyW 4WlGzc7QGLYIf8ZTkBAab", "Turn LEFT on cm", "Turn RIGHT on 3UR 9UNNHuN-", "Turn LEFT on RjhsqLQDlX8EqN6hw ", "Turn RIGHT on rnF2UvD8z99rOb22OaV", "Turn LEFT on Mq5jMwZ7", "Turn LEFT on Yyb4 H6d", "Turn RIGHT on 2 4KHxYiHzU96A btmWegDn hAKBt", "Turn RIGHT on cDv BhP T0kIybBWBUu MLJuYyW", "Turn LEFT on E", "Turn RIGHT on Jc0vJBquXid 9om15u3", "Turn LEFT on o2Lmpm QDczytYoA2h BrTgvy", "Turn LEFT on C1p4Rvs4Q6sUJLPa9W3pX", "Turn LEFT on DJDKT23Cwkdoy", "Turn LEFT on PqGfD2Nd8 SfJ1 pJ A j4LvCWcT5EVLQX-2", "Turn RIGHT on bFUCuV", "Turn RIGHT on 4XoRhv9NWk8Gahza8ZlwGl", "Turn LEFT on TaNLDsgOOjIS-RCHPQ8xzSvTOh2h", "Turn LEFT on yhSFb-Cc IkBVzPBbiB51uslOs2Rl ", "Turn RIGHT on oD-SF-EJHcHuWG0OYJ", "Turn LEFT on Irvzn", "Turn RIGHT on z4lBUX5", "Turn RIGHT on 6EG7GxbNdRn4pDSYfCRow-hi", "Turn LEFT on t4jW N8c RBWcfd K9gzyHSn s h-n W", "Turn RIGHT on xe2RdoQK0ylyRvMUhe67uG1hizTiMhrUDL4i", "Turn RIGHT on D7lxgc9uNzP aUzB zrO0JxL eW", "Turn LEFT on X9 eA A9AOky", "Turn LEFT on fPgXM cHlbZNm7uLmU0"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> directions = {"Start on 6j", "Turn LEFT on ffsw7KC7At", "Turn RIGHT on hmflclrPMNRzYEVtT LUAj4dx lekbGSx", "Turn RIGHT on I5 fTraC Mo1 q", "Turn LEFT on ifpXXU Jb6 7HqNSFYT80PTrsW UHSJvN-", "Turn LEFT on hsCVHWgkf49jlXGz", "Turn RIGHT on 9ZjIlCiia3EeX6K 1ZOQt-hCu4Iw", "Turn RIGHT on RRIEqzcW215PBn GeFEGR00Dv6al8nAdRx2", "Turn LEFT on cSYijWlBXcGjzpZ", "Turn RIGHT on T405boSRC gbc7NT0x8wk7UbJka", "Turn RIGHT on Gg RlcLgGLZPldK51XzBXoPDVTXD yRd", "Turn RIGHT on Qj5tDJ1-1o kg ft1F", "Turn LEFT on 0Q0V9IIwhQvY -O 7T X", "Turn LEFT on jf6IwncRPRW0oxc 1xYyFsaBFf z1tlNje", "Turn LEFT on 8Rg5kxs4ycnM2dDXoB0V", "Turn LEFT on U f yWOTe7BibE X5FEvM-Jy7xQ5Xg ", "Turn RIGHT on 6A4b2klr1mRPyHSc yBAqGztC", "Turn LEFT on OEyUe-ekA8LBw", "Turn LEFT on gfC9R5h-", "Turn LEFT on FM38ejVubdyZTTy8uttd0XuGj6VFV", "Turn LEFT on wbavIs6DefSQawVo3CJDchiE 9iIYK", "Turn RIGHT on Cob3YpmDIOlB c4eiPP", "Turn LEFT on YQpKqKNGFRfcS4YES8fhw", "Turn LEFT on I ISEfKXZNmQlg3WbRAb-kon", "Turn RIGHT on t-4nbq", "Turn LEFT on e", "Turn RIGHT on 9WMfL7"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on 9WMfL7", "Turn LEFT on e", "Turn RIGHT on t-4nbq", "Turn LEFT on I ISEfKXZNmQlg3WbRAb-kon", "Turn RIGHT on YQpKqKNGFRfcS4YES8fhw", "Turn RIGHT on Cob3YpmDIOlB c4eiPP", "Turn LEFT on wbavIs6DefSQawVo3CJDchiE 9iIYK", "Turn RIGHT on FM38ejVubdyZTTy8uttd0XuGj6VFV", "Turn RIGHT on gfC9R5h-", "Turn RIGHT on OEyUe-ekA8LBw", "Turn RIGHT on 6A4b2klr1mRPyHSc yBAqGztC", "Turn LEFT on U f yWOTe7BibE X5FEvM-Jy7xQ5Xg ", "Turn RIGHT on 8Rg5kxs4ycnM2dDXoB0V", "Turn RIGHT on jf6IwncRPRW0oxc 1xYyFsaBFf z1tlNje", "Turn RIGHT on 0Q0V9IIwhQvY -O 7T X", "Turn RIGHT on Qj5tDJ1-1o kg ft1F", "Turn LEFT on Gg RlcLgGLZPldK51XzBXoPDVTXD yRd", "Turn LEFT on T405boSRC gbc7NT0x8wk7UbJka", "Turn LEFT on cSYijWlBXcGjzpZ", "Turn RIGHT on RRIEqzcW215PBn GeFEGR00Dv6al8nAdRx2", "Turn LEFT on 9ZjIlCiia3EeX6K 1ZOQt-hCu4Iw", "Turn LEFT on hsCVHWgkf49jlXGz", "Turn RIGHT on ifpXXU Jb6 7HqNSFYT80PTrsW UHSJvN-", "Turn RIGHT on I5 fTraC Mo1 q", "Turn LEFT on hmflclrPMNRzYEVtT LUAj4dx lekbGSx", "Turn LEFT on ffsw7KC7At", "Turn RIGHT on 6j"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> directions = {"Start on bHLzpNDWD4VpxYGXKb02fcgBP FKV1deL2xZ", "Turn RIGHT on yFPNntvAaUJC0lsZGpyCx", "Turn LEFT on IHP-GzCpqIG7KT6ruwSXwcApBtR3lxUNQWOz", "Turn RIGHT on pZW5rdHyNcKcd LVt", "Turn RIGHT on yG", "Turn RIGHT on LUnRYnkk E bg FrqHeFGy4HNWzeSE", "Turn RIGHT on nGGdcvVBE0n -7Gz9bc", "Turn LEFT on Q5tkXyqIHmcr5Hj IK RbI q2KeZC5c", "Turn RIGHT on 5AVv-", "Turn RIGHT on Hq3OY", "Turn RIGHT on mv1zp Fz", "Turn RIGHT on t5 bVcJbbUAoyY4O9ndw9", "Turn RIGHT on bSSv1NZ GUwv8EonVpie", "Turn RIGHT on gb0 4z4XXVWiqzbTUF0TuTyuKHQD", "Turn RIGHT on SmC8", "Turn LEFT on VAUF45DmePfFq2-G5koLs9 aO", "Turn LEFT on RORg", "Turn LEFT on vRY7hZ t67CYD3NXUbScwgOO7wx0wYAX", "Turn RIGHT on g QA", "Turn RIGHT on QNf", "Turn RIGHT on OvsY a6JdpC NFEE9-tR4XJO3rsQ4y-QTf2", "Turn RIGHT on i3m", "Turn RIGHT on n4zM3k", "Turn RIGHT on m-j5cWakn85 oOwBev1DwbmjcF EcmmS", "Turn LEFT on M0qFvXdyyZFojrMCfxq", "Turn LEFT on NwmB2PCzXw FTSXzPhhYHE-wQYo", "Turn RIGHT on n8TQNdv3 gvMFI08LWgq", "Turn LEFT on HijIT5omrJUUgU1kKIXAZGEzxj tpp3QZ", "Turn RIGHT on uvxxAPQWaKYVWnfXXabk PBs0 mssw7", "Turn LEFT on s n9 2XNpE7Xu6JsazFL5FIZx", "Turn RIGHT on C0M", "Turn LEFT on 49nuWbhdx1xvZkyJRumwUhneP4G ", "Turn RIGHT on Xg8 iKzgNEVsJRpCx85dp9 BL", "Turn RIGHT on fCD0iHj-h7mC 9cV5", "Turn LEFT on AsXUuPg749cYxlg0YBc AH4P1oDW-ck8gXa", "Turn LEFT on vn7RvN3N903TuszvGN1BNSf-n Z7 0TPuS", "Turn LEFT on RUNaoT0OC3RrF7"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on RUNaoT0OC3RrF7", "Turn RIGHT on vn7RvN3N903TuszvGN1BNSf-n Z7 0TPuS", "Turn RIGHT on AsXUuPg749cYxlg0YBc AH4P1oDW-ck8gXa", "Turn RIGHT on fCD0iHj-h7mC 9cV5", "Turn LEFT on Xg8 iKzgNEVsJRpCx85dp9 BL", "Turn LEFT on 49nuWbhdx1xvZkyJRumwUhneP4G ", "Turn RIGHT on C0M", "Turn LEFT on s n9 2XNpE7Xu6JsazFL5FIZx", "Turn RIGHT on uvxxAPQWaKYVWnfXXabk PBs0 mssw7", "Turn LEFT on HijIT5omrJUUgU1kKIXAZGEzxj tpp3QZ", "Turn RIGHT on n8TQNdv3 gvMFI08LWgq", "Turn LEFT on NwmB2PCzXw FTSXzPhhYHE-wQYo", "Turn RIGHT on M0qFvXdyyZFojrMCfxq", "Turn RIGHT on m-j5cWakn85 oOwBev1DwbmjcF EcmmS", "Turn LEFT on n4zM3k", "Turn LEFT on i3m", "Turn LEFT on OvsY a6JdpC NFEE9-tR4XJO3rsQ4y-QTf2", "Turn LEFT on QNf", "Turn LEFT on g QA", "Turn LEFT on vRY7hZ t67CYD3NXUbScwgOO7wx0wYAX", "Turn RIGHT on RORg", "Turn RIGHT on VAUF45DmePfFq2-G5koLs9 aO", "Turn RIGHT on SmC8", "Turn LEFT on gb0 4z4XXVWiqzbTUF0TuTyuKHQD", "Turn LEFT on bSSv1NZ GUwv8EonVpie", "Turn LEFT on t5 bVcJbbUAoyY4O9ndw9", "Turn LEFT on mv1zp Fz", "Turn LEFT on Hq3OY", "Turn LEFT on 5AVv-", "Turn LEFT on Q5tkXyqIHmcr5Hj IK RbI q2KeZC5c", "Turn RIGHT on nGGdcvVBE0n -7Gz9bc", "Turn LEFT on LUnRYnkk E bg FrqHeFGy4HNWzeSE", "Turn LEFT on yG", "Turn LEFT on pZW5rdHyNcKcd LVt", "Turn LEFT on IHP-GzCpqIG7KT6ruwSXwcApBtR3lxUNQWOz", "Turn RIGHT on yFPNntvAaUJC0lsZGpyCx", "Turn LEFT on bHLzpNDWD4VpxYGXKb02fcgBP FKV1deL2xZ"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> directions = {"Start on apeTA5FdT 5k", "Turn RIGHT on HffyoiQ1L2n9 LJ6aag", "Turn RIGHT on TxNZ5OWnC OR0vz-", "Turn RIGHT on Qi3aM8", "Turn RIGHT on qwMsrM 8oyT", "Turn RIGHT on j-a 4dnTMX 5", "Turn RIGHT on hwxIQu 5uJmcrE66Wf6QiUsUSZhPkIkzYdX", "Turn RIGHT on aGOY", "Turn LEFT on RVD VB2T51IZinw89JRVY9N3s aQUkKfp", "Turn RIGHT on cYtjgVJrULBm4", "Turn RIGHT on It u-l", "Turn LEFT on EARMR8aHpMQs", "Turn RIGHT on Mwah krb1jvYrHc8zsY3hekkb", "Turn RIGHT on 0eKNvrm3RkKY tkO6xTU XWu4j2mijz7", "Turn LEFT on ZpTq7xXOgEbYD mJEm9 ", "Turn LEFT on XmzsHl8grZya0", "Turn LEFT on C Ihn o-M kGlbpW7xvJ7zNAbjhroo7UPOt", "Turn LEFT on 1zs-Yn0JdcvKPr-2SD", "Turn LEFT on GNam-NFWNnR22buV", "Turn LEFT on j T", "Turn RIGHT on ORVz-k wu5CPlQ2uDpi MY9", "Turn RIGHT on uB6i InUwDEc QbnbooX6qZHtKCMz eval0a", "Turn LEFT on MP89WDParCnuP uv5Rz3GsTlE", "Turn RIGHT on -BtFMVx", "Turn RIGHT on 22nY60yM 2dADUjJlqE8qa", "Turn RIGHT on EqKXAoWKUR45 L96kKRN", "Turn RIGHT on VSjG UElNp2OlT", "Turn LEFT on RxVwGA8XgUUjo 2yB1qGTe-P", "Turn RIGHT on whjW0 kr tAm drHtCkgsB BqPtPy9ARqo", "Turn LEFT on cOh4zV 6", "Turn RIGHT on R", "Turn LEFT on 5hoyQL93C5 ", "Turn RIGHT on NySNQy4Hpcv5GBJFIcXBzNdJeduJq", "Turn LEFT on W8 JxE vOK A495q", "Turn RIGHT on HyO b AwbXhGnORCYSPxYzk2QM", "Turn RIGHT on 8QDYnOK-plKpyN", "Turn RIGHT on E GK7bLl Wq82FlBgq6tU wbinQO ", "Turn RIGHT on 51YQjM4jFWrA4AHMTclHhyDVNR6N", "Turn LEFT on BGT-j66V1dzWoyJB4h8ZThfSkq5sTdUl4Xhs", "Turn RIGHT on DOgMJW", "Turn LEFT on U 8Q2Q8cTDWQk n5", "Turn LEFT on O1RcwQdanTlaNAkEnB6DDW2-2UM", "Turn LEFT on NtBqdRBu B3 7 5CEYCtjJGC0", "Turn LEFT on i1j9wntgfu6M8TiF", "Turn RIGHT on FqSDA7JbAf5n5caHc1ordqjgyM", "Turn LEFT on zyVPfe7CyhSR0p kUBm4z66 DWgcza", "Turn RIGHT on TAW0Oz8KObzj3EvFWtqW0S YSHzQ6ou", "Turn RIGHT on ucPRQD6 c50os dmTVCDJ-0KD1ElNEsBrLJ", "Turn RIGHT on 4XczfTXuBWnnP8j2sfze6zavvLzgD"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on 4XczfTXuBWnnP8j2sfze6zavvLzgD", "Turn LEFT on ucPRQD6 c50os dmTVCDJ-0KD1ElNEsBrLJ", "Turn LEFT on TAW0Oz8KObzj3EvFWtqW0S YSHzQ6ou", "Turn LEFT on zyVPfe7CyhSR0p kUBm4z66 DWgcza", "Turn RIGHT on FqSDA7JbAf5n5caHc1ordqjgyM", "Turn LEFT on i1j9wntgfu6M8TiF", "Turn RIGHT on NtBqdRBu B3 7 5CEYCtjJGC0", "Turn RIGHT on O1RcwQdanTlaNAkEnB6DDW2-2UM", "Turn RIGHT on U 8Q2Q8cTDWQk n5", "Turn RIGHT on DOgMJW", "Turn LEFT on BGT-j66V1dzWoyJB4h8ZThfSkq5sTdUl4Xhs", "Turn RIGHT on 51YQjM4jFWrA4AHMTclHhyDVNR6N", "Turn LEFT on E GK7bLl Wq82FlBgq6tU wbinQO ", "Turn LEFT on 8QDYnOK-plKpyN", "Turn LEFT on HyO b AwbXhGnORCYSPxYzk2QM", "Turn LEFT on W8 JxE vOK A495q", "Turn RIGHT on NySNQy4Hpcv5GBJFIcXBzNdJeduJq", "Turn LEFT on 5hoyQL93C5 ", "Turn RIGHT on R", "Turn LEFT on cOh4zV 6", "Turn RIGHT on whjW0 kr tAm drHtCkgsB BqPtPy9ARqo", "Turn LEFT on RxVwGA8XgUUjo 2yB1qGTe-P", "Turn RIGHT on VSjG UElNp2OlT", "Turn LEFT on EqKXAoWKUR45 L96kKRN", "Turn LEFT on 22nY60yM 2dADUjJlqE8qa", "Turn LEFT on -BtFMVx", "Turn LEFT on MP89WDParCnuP uv5Rz3GsTlE", "Turn RIGHT on uB6i InUwDEc QbnbooX6qZHtKCMz eval0a", "Turn LEFT on ORVz-k wu5CPlQ2uDpi MY9", "Turn LEFT on j T", "Turn RIGHT on GNam-NFWNnR22buV", "Turn RIGHT on 1zs-Yn0JdcvKPr-2SD", "Turn RIGHT on C Ihn o-M kGlbpW7xvJ7zNAbjhroo7UPOt", "Turn RIGHT on XmzsHl8grZya0", "Turn RIGHT on ZpTq7xXOgEbYD mJEm9 ", "Turn RIGHT on 0eKNvrm3RkKY tkO6xTU XWu4j2mijz7", "Turn LEFT on Mwah krb1jvYrHc8zsY3hekkb", "Turn LEFT on EARMR8aHpMQs", "Turn RIGHT on It u-l", "Turn LEFT on cYtjgVJrULBm4", "Turn LEFT on RVD VB2T51IZinw89JRVY9N3s aQUkKfp", "Turn RIGHT on aGOY", "Turn LEFT on hwxIQu 5uJmcrE66Wf6QiUsUSZhPkIkzYdX", "Turn LEFT on j-a 4dnTMX 5", "Turn LEFT on qwMsrM 8oyT", "Turn LEFT on Qi3aM8", "Turn LEFT on TxNZ5OWnC OR0vz-", "Turn LEFT on HffyoiQ1L2n9 LJ6aag", "Turn LEFT on apeTA5FdT 5k"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> directions = {"Start on xH2PKpbCN03", "Turn LEFT on lngPTFwXUTdoe", "Turn LEFT on k M4Md2 Lv8mPy z6W9CTnyRKZAPcr4", "Turn LEFT on HCkToUdZgp9UJp0GR bh H", "Turn LEFT on 9D-QMv4poEC3gRdzEm-L", "Turn LEFT on Qn0lSLvpLvEioQ9v DCLfz6zuv-", "Turn LEFT on GAmkfSChi0", "Turn LEFT on tuq194UOsENxm", "Turn RIGHT on Oj", "Turn RIGHT on d2QL13tuy sHk2OEv t Cs MxG lbvhv", "Turn RIGHT on b8LlpW Atpf oG0MQ6ppt1uCn aOO cHV3", "Turn RIGHT on bRN X9 dCNKZa jLD4j", "Turn RIGHT on l sOpYUmu3YsA-zB11He3", "Turn RIGHT on lhy", "Turn LEFT on p1dHzw4cNnRwrIvmZcBtuVul6CN3LIbMM U", "Turn LEFT on sL7g nWr7LpQKlYaza7NzQaT um1u43l0f90", "Turn RIGHT on XIZcRcJHC EruP1YXbwmbYp", "Turn RIGHT on LV5JNSdCuS", "Turn LEFT on 0aaH HQQR9n1z2mw4b", "Turn RIGHT on mAc52U0GtX5d6IE", "Turn RIGHT on qtZ3NNxJvPOi3nkVz8bQzFRS ", "Turn LEFT on ryvtwrQ 6DWhWyEBnyF XbdIQmnvaNPk-tT", "Turn LEFT on z16A NAMvk08DjK4NU7DND", "Turn LEFT on 3i0T4D", "Turn LEFT on se2ZEgU4UbMJUt2oky3", "Turn LEFT on eG1QVkGoSg 9UycGVj1U yas -", "Turn LEFT on - YLOgnmfLQ7JBFcK3SVH", "Turn RIGHT on 6DuPz XZkB7YoXnrGs"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on 6DuPz XZkB7YoXnrGs", "Turn LEFT on - YLOgnmfLQ7JBFcK3SVH", "Turn RIGHT on eG1QVkGoSg 9UycGVj1U yas -", "Turn RIGHT on se2ZEgU4UbMJUt2oky3", "Turn RIGHT on 3i0T4D", "Turn RIGHT on z16A NAMvk08DjK4NU7DND", "Turn RIGHT on ryvtwrQ 6DWhWyEBnyF XbdIQmnvaNPk-tT", "Turn RIGHT on qtZ3NNxJvPOi3nkVz8bQzFRS ", "Turn LEFT on mAc52U0GtX5d6IE", "Turn LEFT on 0aaH HQQR9n1z2mw4b", "Turn RIGHT on LV5JNSdCuS", "Turn LEFT on XIZcRcJHC EruP1YXbwmbYp", "Turn LEFT on sL7g nWr7LpQKlYaza7NzQaT um1u43l0f90", "Turn RIGHT on p1dHzw4cNnRwrIvmZcBtuVul6CN3LIbMM U", "Turn RIGHT on lhy", "Turn LEFT on l sOpYUmu3YsA-zB11He3", "Turn LEFT on bRN X9 dCNKZa jLD4j", "Turn LEFT on b8LlpW Atpf oG0MQ6ppt1uCn aOO cHV3", "Turn LEFT on d2QL13tuy sHk2OEv t Cs MxG lbvhv", "Turn LEFT on Oj", "Turn LEFT on tuq194UOsENxm", "Turn RIGHT on GAmkfSChi0", "Turn RIGHT on Qn0lSLvpLvEioQ9v DCLfz6zuv-", "Turn RIGHT on 9D-QMv4poEC3gRdzEm-L", "Turn RIGHT on HCkToUdZgp9UJp0GR bh H", "Turn RIGHT on k M4Md2 Lv8mPy z6W9CTnyRKZAPcr4", "Turn RIGHT on lngPTFwXUTdoe", "Turn RIGHT on xH2PKpbCN03"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> directions = {"Start on b-JIWZkWVR7mklh7IU", "Turn RIGHT on L5KwHAffmLS1h 6B2UA7OHwjCog", "Turn LEFT on TNfB", "Turn RIGHT on FXinGdgeuLHXdM X276Ijx", "Turn LEFT on x mSgy19EPf5WWL usoyjIRNi 0eaFX B", "Turn LEFT on FB75xJMD P8hLk7bAf", "Turn LEFT on JtRxZM0VSqIqXb28Y wO", "Turn LEFT on qqi1bwKW nO8ZRziuJW rBy m6Hz8jzj", "Turn RIGHT on c9Y DJKNom8- Ebbw-lQeK b4xZ E", "Turn LEFT on W6 qOaJOSWzTLY9 C KOz-tFJE GcmBP", "Turn LEFT on 0OvxtQ9Yb-o xUUzgITGm Bkvjnh", "Turn RIGHT on axBlUQwn-NDUKgJMViW-2cEVhRdvv", "Turn RIGHT on n kggcwHddpxmF2O1ZgO I3cm", "Turn RIGHT on CG77d", "Turn RIGHT on Xy16ZnLhZcNcUF4PvVCGORaEIaQIwb4E U", "Turn RIGHT on cbTufZ4TNRkv4", "Turn RIGHT on fBz9luGeAb25YH- oc 8eNK1MwIO7Ux", "Turn RIGHT on Fy Uz-8r9 1p", "Turn LEFT on dkw ozxyztSjoxw2ct RNuf9CIa0GFny eY", "Turn LEFT on o1DMrL6KYBzbT4d0Nw2Qc7S-2IGn ", "Turn RIGHT on f 0gN T Hgbbkp1HvX ie", "Turn RIGHT on zS8", "Turn LEFT on xjU2ey8shfWXu0 9 pTXCUm4qlt", "Turn RIGHT on slsPLidr3NR3-42saeI dux f0bY2Vnm5", "Turn LEFT on Y GLyeARY62ARUeZBO6z 9z- SVit95", "Turn RIGHT on S4LBp", "Turn LEFT on iFEKyviuM0CzRIJcjxQ4rl3", "Turn LEFT on lqF2MJ j0ybqb m39va9cDhe ", "Turn RIGHT on Wd7wCJsl p-n yrp-0r41R5ON14B6Na", "Turn RIGHT on khI5pJdeP", "Turn RIGHT on 160ZRmPBdc-By9fXTJFA9HcQtLT"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on 160ZRmPBdc-By9fXTJFA9HcQtLT", "Turn LEFT on khI5pJdeP", "Turn LEFT on Wd7wCJsl p-n yrp-0r41R5ON14B6Na", "Turn LEFT on lqF2MJ j0ybqb m39va9cDhe ", "Turn RIGHT on iFEKyviuM0CzRIJcjxQ4rl3", "Turn RIGHT on S4LBp", "Turn LEFT on Y GLyeARY62ARUeZBO6z 9z- SVit95", "Turn RIGHT on slsPLidr3NR3-42saeI dux f0bY2Vnm5", "Turn LEFT on xjU2ey8shfWXu0 9 pTXCUm4qlt", "Turn RIGHT on zS8", "Turn LEFT on f 0gN T Hgbbkp1HvX ie", "Turn LEFT on o1DMrL6KYBzbT4d0Nw2Qc7S-2IGn ", "Turn RIGHT on dkw ozxyztSjoxw2ct RNuf9CIa0GFny eY", "Turn RIGHT on Fy Uz-8r9 1p", "Turn LEFT on fBz9luGeAb25YH- oc 8eNK1MwIO7Ux", "Turn LEFT on cbTufZ4TNRkv4", "Turn LEFT on Xy16ZnLhZcNcUF4PvVCGORaEIaQIwb4E U", "Turn LEFT on CG77d", "Turn LEFT on n kggcwHddpxmF2O1ZgO I3cm", "Turn LEFT on axBlUQwn-NDUKgJMViW-2cEVhRdvv", "Turn LEFT on 0OvxtQ9Yb-o xUUzgITGm Bkvjnh", "Turn RIGHT on W6 qOaJOSWzTLY9 C KOz-tFJE GcmBP", "Turn RIGHT on c9Y DJKNom8- Ebbw-lQeK b4xZ E", "Turn LEFT on qqi1bwKW nO8ZRziuJW rBy m6Hz8jzj", "Turn RIGHT on JtRxZM0VSqIqXb28Y wO", "Turn RIGHT on FB75xJMD P8hLk7bAf", "Turn RIGHT on x mSgy19EPf5WWL usoyjIRNi 0eaFX B", "Turn RIGHT on FXinGdgeuLHXdM X276Ijx", "Turn LEFT on TNfB", "Turn RIGHT on L5KwHAffmLS1h 6B2UA7OHwjCog", "Turn LEFT on b-JIWZkWVR7mklh7IU"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> directions = {"Start on qXqTx8foTjENiQbkGMtZ-g-xyU7iP9 u CfU4ed", "Turn LEFT on p9gqho 33fn8PoGeuol1WBFYKc", "Turn LEFT on oJJJUPw", "Turn LEFT on 4J", "Turn LEFT on 4SejtT VNJXRijkJBoTkmbmAr8", "Turn LEFT on 7I7iX3YA3Y-HA j LOodq31hNQQC7", "Turn RIGHT on LgLZmeVa2rZELp ", "Turn RIGHT on yNUnsTMi LK mqoTX QtM y3R zGxLwTk p", "Turn RIGHT on nxYvPWN ", "Turn RIGHT on e2ICNs5 EcawdxvlzTeBwWg2i WI", "Turn LEFT on iStuB7U7rcf2-jRzsPb"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on iStuB7U7rcf2-jRzsPb", "Turn RIGHT on e2ICNs5 EcawdxvlzTeBwWg2i WI", "Turn LEFT on nxYvPWN ", "Turn LEFT on yNUnsTMi LK mqoTX QtM y3R zGxLwTk p", "Turn LEFT on LgLZmeVa2rZELp ", "Turn LEFT on 7I7iX3YA3Y-HA j LOodq31hNQQC7", "Turn RIGHT on 4SejtT VNJXRijkJBoTkmbmAr8", "Turn RIGHT on 4J", "Turn RIGHT on oJJJUPw", "Turn RIGHT on p9gqho 33fn8PoGeuol1WBFYKc", "Turn RIGHT on qXqTx8foTjENiQbkGMtZ-g-xyU7iP9 u CfU4ed"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> directions = {"Start on zEe5CBTp76vhuYQ", "Turn RIGHT on q3hnD0Fc A AWWmYS lv8lmip aYc 8PM", "Turn LEFT on ck3jvVAgV R-", "Turn RIGHT on JBbvJ7bWDy lY9aH8oA9dNk k5jJ", "Turn LEFT on Und2n prb", "Turn LEFT on Dci1 T7cK8uL3ros 9FR2mTa3ztpWg ", "Turn LEFT on 0qBN6DR1jp3wR5SZk JCmdKUnsZz", "Turn RIGHT on yUIA34 w", "Turn LEFT on T8m6JkK4Civlu9Xm"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on T8m6JkK4Civlu9Xm", "Turn RIGHT on yUIA34 w", "Turn LEFT on 0qBN6DR1jp3wR5SZk JCmdKUnsZz", "Turn RIGHT on Dci1 T7cK8uL3ros 9FR2mTa3ztpWg ", "Turn RIGHT on Und2n prb", "Turn RIGHT on JBbvJ7bWDy lY9aH8oA9dNk k5jJ", "Turn LEFT on ck3jvVAgV R-", "Turn RIGHT on q3hnD0Fc A AWWmYS lv8lmip aYc 8PM", "Turn LEFT on zEe5CBTp76vhuYQ"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> directions = {"Start on f2IeBOET9gdgwmsupSH", "Turn LEFT on 7mXiS zG", "Turn LEFT on xF1xTQjNAsV Wl tmTy", "Turn RIGHT on ywCs", "Turn LEFT on aqFQfSvoVwskt", "Turn LEFT on FuVpjR70Pow7 ", "Turn RIGHT on 63pyV oH3nW vg9ELk0iAGX76LPBjwiAJU", "Turn LEFT on -L6vu0yM", "Turn RIGHT on NZNTz2BVz6D77-EFD HDQi", "Turn LEFT on 0-TQ3I", "Turn LEFT on 1WSNMuOk5r5bhyT", "Turn RIGHT on R2", "Turn RIGHT on 8KV MA", "Turn LEFT on 5", "Turn RIGHT on X", "Turn RIGHT on b1", "Turn RIGHT on JCvD0E7zPauIaC", "Turn RIGHT on GBO9Yiv D-ggSdSLEJytJpCakSXR7", "Turn LEFT on BAr CB MvMZPZ-15VtkRQ8K", "Turn LEFT on GN2L6T781hGR8fyD", "Turn RIGHT on MWQBEGm y8iD 8CJWWmOKorWF", "Turn LEFT on asBXhRz0I79ptAHI8MV2D", "Turn LEFT on B s4aP9IsX 7LHn9ipi5G2F k", "Turn LEFT on h5JP9gVdpQH33PkLyVrnLtVMQWK MRLU6JOew", "Turn RIGHT on WG-InMhDnwBmnnM-opGi2E50v69u7J nkT3O", "Turn LEFT on MW l", "Turn RIGHT on hLejHB4awh tNwxXslct", "Turn RIGHT on YP6WJIw aj0-kzyFXfrLgPgOxE L 4g1", "Turn LEFT on jLBbn hHye", "Turn RIGHT on c2-x vD3z2iNvy", "Turn LEFT on qZYmMnwQENRrS7C98lBiZvD1"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on qZYmMnwQENRrS7C98lBiZvD1", "Turn RIGHT on c2-x vD3z2iNvy", "Turn LEFT on jLBbn hHye", "Turn RIGHT on YP6WJIw aj0-kzyFXfrLgPgOxE L 4g1", "Turn LEFT on hLejHB4awh tNwxXslct", "Turn LEFT on MW l", "Turn RIGHT on WG-InMhDnwBmnnM-opGi2E50v69u7J nkT3O", "Turn LEFT on h5JP9gVdpQH33PkLyVrnLtVMQWK MRLU6JOew", "Turn RIGHT on B s4aP9IsX 7LHn9ipi5G2F k", "Turn RIGHT on asBXhRz0I79ptAHI8MV2D", "Turn RIGHT on MWQBEGm y8iD 8CJWWmOKorWF", "Turn LEFT on GN2L6T781hGR8fyD", "Turn RIGHT on BAr CB MvMZPZ-15VtkRQ8K", "Turn RIGHT on GBO9Yiv D-ggSdSLEJytJpCakSXR7", "Turn LEFT on JCvD0E7zPauIaC", "Turn LEFT on b1", "Turn LEFT on X", "Turn LEFT on 5", "Turn RIGHT on 8KV MA", "Turn LEFT on R2", "Turn LEFT on 1WSNMuOk5r5bhyT", "Turn RIGHT on 0-TQ3I", "Turn RIGHT on NZNTz2BVz6D77-EFD HDQi", "Turn LEFT on -L6vu0yM", "Turn RIGHT on 63pyV oH3nW vg9ELk0iAGX76LPBjwiAJU", "Turn LEFT on FuVpjR70Pow7 ", "Turn RIGHT on aqFQfSvoVwskt", "Turn RIGHT on ywCs", "Turn LEFT on xF1xTQjNAsV Wl tmTy", "Turn RIGHT on 7mXiS zG", "Turn RIGHT on f2IeBOET9gdgwmsupSH"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> directions = {"Start on -swS-oxoD-Q6YB", "Turn LEFT on P XWPjJblF4clSzwG Oxo9hU", "Turn RIGHT on 5u6TIZlTLxCS -jVt1QHg", "Turn RIGHT on v3qi1HFISSo", "Turn LEFT on e2B2FdcXEjJqH", "Turn RIGHT on aAI1a2n2w", "Turn RIGHT on wZg svFd-gR1KBaAJp8KtZ e9 EY0", "Turn LEFT on yNbVtD-OsAZqIsiCTmXSgpHYtvhT48-3u", "Turn LEFT on hVZ1 Tzt52", "Turn RIGHT on zq Ft", "Turn LEFT on U", "Turn RIGHT on z13tisGgIPc", "Turn RIGHT on qsmfAA oEg9e cW46VyYSvfdeX E9F0y", "Turn RIGHT on VXS pNgTfGX", "Turn LEFT on EXPh qlYg fVdLeiVBY5WF", "Turn LEFT on 3nmBmScFB3uGlbw sxrccovzYWz qRYHYoA", "Turn RIGHT on KfTmrAcxah6G5Z71PGyJgOtgoH5UMf22AV6", "Turn LEFT on qi qpV8-xCEM 9Him tKc4W144jkK ", "Turn RIGHT on mx PZd IVoPVUbH-rJ2KWAgVmjD", "Turn RIGHT on rT3mC68v3pDn w", "Turn RIGHT on bKbv9vrB2i5K-JJzHXZ zR7zN-M 5Pc", "Turn LEFT on K3w DPU 1iCpuVE", "Turn RIGHT on HxYX0HUy7z2Mza eqswTZPQI7xS0VAQx", "Turn LEFT on voSuy XSpUkEhtd1", "Turn LEFT on G6", "Turn LEFT on filr ilfuyq8Ts7 Br-y 8wF", "Turn RIGHT on R-kSRNCrzxQqn FVKF1l7eM bq", "Turn LEFT on QaAHskFgvf EeaDfDtBl HgGS55w", "Turn LEFT on M", "Turn LEFT on L97076UYpBO410yDp5", "Turn LEFT on JkXQM xt99D1Hm7vNwKkv4zj", "Turn RIGHT on xQS8I8CLUI", "Turn RIGHT on 7KNDxY3GC3N-sK", "Turn RIGHT on fEgb8W l-XxsfIC"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on fEgb8W l-XxsfIC", "Turn LEFT on 7KNDxY3GC3N-sK", "Turn LEFT on xQS8I8CLUI", "Turn LEFT on JkXQM xt99D1Hm7vNwKkv4zj", "Turn RIGHT on L97076UYpBO410yDp5", "Turn RIGHT on M", "Turn RIGHT on QaAHskFgvf EeaDfDtBl HgGS55w", "Turn RIGHT on R-kSRNCrzxQqn FVKF1l7eM bq", "Turn LEFT on filr ilfuyq8Ts7 Br-y 8wF", "Turn RIGHT on G6", "Turn RIGHT on voSuy XSpUkEhtd1", "Turn RIGHT on HxYX0HUy7z2Mza eqswTZPQI7xS0VAQx", "Turn LEFT on K3w DPU 1iCpuVE", "Turn RIGHT on bKbv9vrB2i5K-JJzHXZ zR7zN-M 5Pc", "Turn LEFT on rT3mC68v3pDn w", "Turn LEFT on mx PZd IVoPVUbH-rJ2KWAgVmjD", "Turn LEFT on qi qpV8-xCEM 9Him tKc4W144jkK ", "Turn RIGHT on KfTmrAcxah6G5Z71PGyJgOtgoH5UMf22AV6", "Turn LEFT on 3nmBmScFB3uGlbw sxrccovzYWz qRYHYoA", "Turn RIGHT on EXPh qlYg fVdLeiVBY5WF", "Turn RIGHT on VXS pNgTfGX", "Turn LEFT on qsmfAA oEg9e cW46VyYSvfdeX E9F0y", "Turn LEFT on z13tisGgIPc", "Turn LEFT on U", "Turn RIGHT on zq Ft", "Turn LEFT on hVZ1 Tzt52", "Turn RIGHT on yNbVtD-OsAZqIsiCTmXSgpHYtvhT48-3u", "Turn RIGHT on wZg svFd-gR1KBaAJp8KtZ e9 EY0", "Turn LEFT on aAI1a2n2w", "Turn LEFT on e2B2FdcXEjJqH", "Turn RIGHT on v3qi1HFISSo", "Turn LEFT on 5u6TIZlTLxCS -jVt1QHg", "Turn LEFT on P XWPjJblF4clSzwG Oxo9hU", "Turn RIGHT on -swS-oxoD-Q6YB"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> directions = {"Start on ONlqB9vkzPDcTZ5bwG2pE", "Turn RIGHT on hU9E8JMe6K-8eizC79Hs5Cp5LRpA-", "Turn LEFT on YYpWFmYQMqTuoBg 5oaLg07xty9ar6MJ", "Turn LEFT on yWyHIFEIKBTdgbThlaif", "Turn LEFT on DYtbzRvF4n", "Turn RIGHT on WCm7PJZnBWDgDaIL5b6 4 AY ", "Turn RIGHT on Pab5Rsqfe z4euQ6fU1hY2s2LJn5w-PN", "Turn RIGHT on Lr-i2aGL9fNEO8", "Turn LEFT on WJLpn0J-xMhlSuZ8D", "Turn RIGHT on sk8T6ZeJnk", "Turn RIGHT on VEcsEjE3zqrDT6w MD0t mTPgyU", "Turn LEFT on C89e3SxNkyMZLj-", "Turn RIGHT on KO533xVe 7 ", "Turn LEFT on Zr ", "Turn RIGHT on 7Wg7", "Turn RIGHT on Ft r166 grrP110b1g", "Turn RIGHT on bkID4mm", "Turn LEFT on 38NdKh", "Turn LEFT on jNcPHnphjf2SI", "Turn RIGHT on p6oZ8EExMT9OLb yQuqsR ZtOJyf3I", "Turn LEFT on Ou JzdEaXE SBZ79j D-"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Ou JzdEaXE SBZ79j D-", "Turn RIGHT on p6oZ8EExMT9OLb yQuqsR ZtOJyf3I", "Turn LEFT on jNcPHnphjf2SI", "Turn RIGHT on 38NdKh", "Turn RIGHT on bkID4mm", "Turn LEFT on Ft r166 grrP110b1g", "Turn LEFT on 7Wg7", "Turn LEFT on Zr ", "Turn RIGHT on KO533xVe 7 ", "Turn LEFT on C89e3SxNkyMZLj-", "Turn RIGHT on VEcsEjE3zqrDT6w MD0t mTPgyU", "Turn LEFT on sk8T6ZeJnk", "Turn LEFT on WJLpn0J-xMhlSuZ8D", "Turn RIGHT on Lr-i2aGL9fNEO8", "Turn LEFT on Pab5Rsqfe z4euQ6fU1hY2s2LJn5w-PN", "Turn LEFT on WCm7PJZnBWDgDaIL5b6 4 AY ", "Turn LEFT on DYtbzRvF4n", "Turn RIGHT on yWyHIFEIKBTdgbThlaif", "Turn RIGHT on YYpWFmYQMqTuoBg 5oaLg07xty9ar6MJ", "Turn RIGHT on hU9E8JMe6K-8eizC79Hs5Cp5LRpA-", "Turn LEFT on ONlqB9vkzPDcTZ5bwG2pE"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> directions = {"Start on QopS07H1cmouGlGoUVsoX-rg", "Turn LEFT on 2S90aE4qHgOWK", "Turn LEFT on HXOL77x faQT86dFfez5 y u7J38GH", "Turn RIGHT on gdXHkI79 ", "Turn LEFT on 7wweTbcXmG mSJwjyLP", "Turn LEFT on -n-jnJeQstBvMOfH7SOibukdaSk5BNZMep3Y", "Turn LEFT on YxA12ahqTUif", "Turn RIGHT on jROOAXKw 3yI", "Turn LEFT on zEhiMXnE6ywnRnvQgsgLj -r6", "Turn RIGHT on 4HPEzZf eikx9Ai35IT", "Turn RIGHT on zIK-bt heXKsB0 ", "Turn RIGHT on hZj b096rp", "Turn RIGHT on a1PrqWSsqUbX7e6ZUATjuG2qZPHXId7X", "Turn LEFT on vzgVuE N6", "Turn RIGHT on 9B4X", "Turn RIGHT on 8", "Turn LEFT on lz-CoErBsQttZJXl8hICcrafUupn", "Turn LEFT on 1XOlc8tMtDl6oQbje27C-aXKomoTo8", "Turn LEFT on VblcSe2F6pyR6qJ YjUGAhjE FjCkrfr", "Turn RIGHT on n4uqLJ5bBG MvvC2gnKz Asy IS0ai7jS", "Turn RIGHT on 4gY9M1wf k29a5aGjhB", "Turn RIGHT on Bb3 a4Elhikiwi4TFlm1MabLqFDn TqO", "Turn RIGHT on 0Kp-O", "Turn RIGHT on o", "Turn RIGHT on 4-jjvcbA0ok5Sl lXrO", "Turn RIGHT on AgB33mW6h8ZdjkE8-rR0bV8", "Turn LEFT on HcVX4D3dhEYdVV9at1ZCAX o1c9 gQ-p0cT", "Turn LEFT on klEr 9SHPaSzrpKuQSk", "Turn LEFT on ba3GpSkfLJCd2jCfbgz"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on ba3GpSkfLJCd2jCfbgz", "Turn RIGHT on klEr 9SHPaSzrpKuQSk", "Turn RIGHT on HcVX4D3dhEYdVV9at1ZCAX o1c9 gQ-p0cT", "Turn RIGHT on AgB33mW6h8ZdjkE8-rR0bV8", "Turn LEFT on 4-jjvcbA0ok5Sl lXrO", "Turn LEFT on o", "Turn LEFT on 0Kp-O", "Turn LEFT on Bb3 a4Elhikiwi4TFlm1MabLqFDn TqO", "Turn LEFT on 4gY9M1wf k29a5aGjhB", "Turn LEFT on n4uqLJ5bBG MvvC2gnKz Asy IS0ai7jS", "Turn LEFT on VblcSe2F6pyR6qJ YjUGAhjE FjCkrfr", "Turn RIGHT on 1XOlc8tMtDl6oQbje27C-aXKomoTo8", "Turn RIGHT on lz-CoErBsQttZJXl8hICcrafUupn", "Turn RIGHT on 8", "Turn LEFT on 9B4X", "Turn LEFT on vzgVuE N6", "Turn RIGHT on a1PrqWSsqUbX7e6ZUATjuG2qZPHXId7X", "Turn LEFT on hZj b096rp", "Turn LEFT on zIK-bt heXKsB0 ", "Turn LEFT on 4HPEzZf eikx9Ai35IT", "Turn LEFT on zEhiMXnE6ywnRnvQgsgLj -r6", "Turn RIGHT on jROOAXKw 3yI", "Turn LEFT on YxA12ahqTUif", "Turn RIGHT on -n-jnJeQstBvMOfH7SOibukdaSk5BNZMep3Y", "Turn RIGHT on 7wweTbcXmG mSJwjyLP", "Turn RIGHT on gdXHkI79 ", "Turn LEFT on HXOL77x faQT86dFfez5 y u7J38GH", "Turn RIGHT on 2S90aE4qHgOWK", "Turn RIGHT on QopS07H1cmouGlGoUVsoX-rg"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> directions = {"Start on G0H5 2 nqSeY8i", "Turn LEFT on VMjpof2C 2NOS", "Turn RIGHT on 0VgOooq8qW75F2", "Turn RIGHT on UtfWx4QYUSZ SWf Bt6Xdu", "Turn LEFT on Hskzm2svoofaFU1MLNDH", "Turn RIGHT on LsbGizftqVbbX4D krHo0i", "Turn LEFT on ubHOtZ8a6BHvH0lMa0wvCZISU--K", "Turn RIGHT on XAH6fLpI991I1F910Ph FkxVQW", "Turn LEFT on 6MhQundMcHFg9c1xvxZhsAL6F1iwdPxg", "Turn RIGHT on 07EE7ZBV31-qHnKyPXrNwGZFuOD", "Turn LEFT on E", "Turn LEFT on n MFjT3V8vitj-i", "Turn RIGHT on MCTYelW6jTBI", "Turn RIGHT on siCjnoBxW", "Turn LEFT on GnP DhNWq C", "Turn LEFT on wLIC", "Turn LEFT on 1lRINa7xaZH7QPHF3BDRkF j1d1mzz8e", "Turn RIGHT on XZJWJRZh4rNIJbvRoPtmm9pYyPIhgTj", "Turn LEFT on nrPllh8 CBZxw UV9m6 o", "Turn LEFT on Pn25yQYZvxxQV R I-WFNpu-qKNzp", "Turn RIGHT on IkpB-l3", "Turn LEFT on kwtZgKa-XJvfu8WCR QU78qU w-j", "Turn LEFT on M5bEGceca5hu6qWs9xLio8G-", "Turn LEFT on LpuoRPGCPNV83IIV6q2 ", "Turn RIGHT on rCx zHoOFgLm KDZXXWI4n5Y-Sq5v-", "Turn RIGHT on LR L4A0UBsU", "Turn LEFT on f"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on f", "Turn RIGHT on LR L4A0UBsU", "Turn LEFT on rCx zHoOFgLm KDZXXWI4n5Y-Sq5v-", "Turn LEFT on LpuoRPGCPNV83IIV6q2 ", "Turn RIGHT on M5bEGceca5hu6qWs9xLio8G-", "Turn RIGHT on kwtZgKa-XJvfu8WCR QU78qU w-j", "Turn RIGHT on IkpB-l3", "Turn LEFT on Pn25yQYZvxxQV R I-WFNpu-qKNzp", "Turn RIGHT on nrPllh8 CBZxw UV9m6 o", "Turn RIGHT on XZJWJRZh4rNIJbvRoPtmm9pYyPIhgTj", "Turn LEFT on 1lRINa7xaZH7QPHF3BDRkF j1d1mzz8e", "Turn RIGHT on wLIC", "Turn RIGHT on GnP DhNWq C", "Turn RIGHT on siCjnoBxW", "Turn LEFT on MCTYelW6jTBI", "Turn LEFT on n MFjT3V8vitj-i", "Turn RIGHT on E", "Turn RIGHT on 07EE7ZBV31-qHnKyPXrNwGZFuOD", "Turn LEFT on 6MhQundMcHFg9c1xvxZhsAL6F1iwdPxg", "Turn RIGHT on XAH6fLpI991I1F910Ph FkxVQW", "Turn LEFT on ubHOtZ8a6BHvH0lMa0wvCZISU--K", "Turn RIGHT on LsbGizftqVbbX4D krHo0i", "Turn LEFT on Hskzm2svoofaFU1MLNDH", "Turn RIGHT on UtfWx4QYUSZ SWf Bt6Xdu", "Turn LEFT on 0VgOooq8qW75F2", "Turn LEFT on VMjpof2C 2NOS", "Turn RIGHT on G0H5 2 nqSeY8i"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> directions = {"Start on j EEqvbfpJ4Y49O1h5kGjhNFFhNyeWoL", "Turn RIGHT on E vTf", "Turn LEFT on 0J6 37 Jvg 7bibEbz1RPhya4pELvc7aICqs9", "Turn RIGHT on jUsToQUYMJ9HOrzQ", "Turn RIGHT on P-N7G5MtZcwYPOdRk lU2 lSFysD t5", "Turn RIGHT on Ud A 2KOGKNRS6Me5 ztFwN ", "Turn LEFT on VgA3asHzWyfmTANYcF0hA J", "Turn LEFT on dU2x vZHdeGWD36b", "Turn LEFT on sTRgLEP Z LlmqZb7kgJe", "Turn RIGHT on L pXIOlNA5S30g9", "Turn LEFT on x cbc XZyRFIhdZkbH1SoPepTl42SXw", "Turn RIGHT on P EERontGVVqi 1byXT1L", "Turn LEFT on B-lSh7wdHu0fclQ", "Turn LEFT on DVFWIi", "Turn LEFT on UlAngo3v HuPvi 2YlMaj8O gs-BIOCz015C", "Turn RIGHT on m9Hl c7YOgB", "Turn RIGHT on TD6ce IvmTLuJHtzV TJ P", "Turn RIGHT on SC8TsziiQkdxm E", "Turn LEFT on ytkne F9b DBFTr zJwg7", "Turn RIGHT on 0nMdY Hfd mfc9BdCtt", "Turn LEFT on RTjr2RI BJbQrFEHvX FK-0 JYyOZrB", "Turn RIGHT on w7VdUbHGt-vho0ppKaYnA5EmsYIYr", "Turn RIGHT on zpEvd5w LbUvgB7PRTo5lwyfFgFic sE", "Turn LEFT on D", "Turn LEFT on tSx 3SKnigw8gY3t2F 8G h2TFB"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on tSx 3SKnigw8gY3t2F 8G h2TFB", "Turn RIGHT on D", "Turn RIGHT on zpEvd5w LbUvgB7PRTo5lwyfFgFic sE", "Turn LEFT on w7VdUbHGt-vho0ppKaYnA5EmsYIYr", "Turn LEFT on RTjr2RI BJbQrFEHvX FK-0 JYyOZrB", "Turn RIGHT on 0nMdY Hfd mfc9BdCtt", "Turn LEFT on ytkne F9b DBFTr zJwg7", "Turn RIGHT on SC8TsziiQkdxm E", "Turn LEFT on TD6ce IvmTLuJHtzV TJ P", "Turn LEFT on m9Hl c7YOgB", "Turn LEFT on UlAngo3v HuPvi 2YlMaj8O gs-BIOCz015C", "Turn RIGHT on DVFWIi", "Turn RIGHT on B-lSh7wdHu0fclQ", "Turn RIGHT on P EERontGVVqi 1byXT1L", "Turn LEFT on x cbc XZyRFIhdZkbH1SoPepTl42SXw", "Turn RIGHT on L pXIOlNA5S30g9", "Turn LEFT on sTRgLEP Z LlmqZb7kgJe", "Turn RIGHT on dU2x vZHdeGWD36b", "Turn RIGHT on VgA3asHzWyfmTANYcF0hA J", "Turn RIGHT on Ud A 2KOGKNRS6Me5 ztFwN ", "Turn LEFT on P-N7G5MtZcwYPOdRk lU2 lSFysD t5", "Turn LEFT on jUsToQUYMJ9HOrzQ", "Turn LEFT on 0J6 37 Jvg 7bibEbz1RPhya4pELvc7aICqs9", "Turn RIGHT on E vTf", "Turn LEFT on j EEqvbfpJ4Y49O1h5kGjhNFFhNyeWoL"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> directions = {"Start on uyJlxTGUDzIhRWJpP0NI46ZJ5eTr69p8j3v", "Turn RIGHT on 7CsS VnqPW0m6HOAySJVcISdaFVoPFf y6", "Turn LEFT on WLsox", "Turn LEFT on 2E7A8", "Turn LEFT on QX rHtjPmcwjDQHC- ghWe 8j A16", "Turn LEFT on IHHHWRnBjqWj9E8pCCED u68A BZhFHE", "Turn LEFT on N-BRXiHPdnEsq", "Turn LEFT on Q3OriRfFhgIE", "Turn LEFT on XTAYW2 -e0WXdMnK OOG ", "Turn LEFT on v08 FCrRyVtjukUVNRkKb", "Turn RIGHT on 3 G2SmPEBJ", "Turn RIGHT on WcHZ 4bdPUxc w2 m7jlqR", "Turn LEFT on mhFsI0xQm8cp1SPn-blG5UGB5d E0anVsZ", "Turn LEFT on g 4lhDiT Jd 3mStddM JSiLZq", "Turn RIGHT on m", "Turn RIGHT on iCz", "Turn LEFT on DFDxoojPluhbRHd p", "Turn LEFT on v a"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on v a", "Turn RIGHT on DFDxoojPluhbRHd p", "Turn RIGHT on iCz", "Turn LEFT on m", "Turn LEFT on g 4lhDiT Jd 3mStddM JSiLZq", "Turn RIGHT on mhFsI0xQm8cp1SPn-blG5UGB5d E0anVsZ", "Turn RIGHT on WcHZ 4bdPUxc w2 m7jlqR", "Turn LEFT on 3 G2SmPEBJ", "Turn LEFT on v08 FCrRyVtjukUVNRkKb", "Turn RIGHT on XTAYW2 -e0WXdMnK OOG ", "Turn RIGHT on Q3OriRfFhgIE", "Turn RIGHT on N-BRXiHPdnEsq", "Turn RIGHT on IHHHWRnBjqWj9E8pCCED u68A BZhFHE", "Turn RIGHT on QX rHtjPmcwjDQHC- ghWe 8j A16", "Turn RIGHT on 2E7A8", "Turn RIGHT on WLsox", "Turn RIGHT on 7CsS VnqPW0m6HOAySJVcISdaFVoPFf y6", "Turn LEFT on uyJlxTGUDzIhRWJpP0NI46ZJ5eTr69p8j3v"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> directions = {"Start on Nx9CLBeDmVM Pm-auopKn", "Turn LEFT on ZSbW 1EiJe7ZDtMYxRsHCx", "Turn LEFT on kn8a1NgAUnus sckQxTxT4-h g80P0Pz4", "Turn LEFT on cPD8Gx", "Turn RIGHT on 8-r8aeNkx", "Turn LEFT on 8FWi11ftwZGqu", "Turn LEFT on FO06qpHq-SLgW 9 hi pHsuR0Nkh7Ncec4y", "Turn RIGHT on ozt9PBjukvyBb0ZDBCz qXHTvoOpR", "Turn RIGHT on mKl2PSEdEUzWU-sJE5 PmUCOPa6WK", "Turn RIGHT on OTXZK", "Turn RIGHT on ffVTOcugHN6Lg lomdxi", "Turn LEFT on VDWZ 9Bl4ft7jMAfu pyBjWUxFXGI-Hlb", "Turn RIGHT on MK xYtp59T5cS 031X 8FTzqqmJ", "Turn RIGHT on 3 y", "Turn RIGHT on iBs5PCL9IwgBMvD6OjFTLNI1U", "Turn LEFT on w lFuz7W QfJJ", "Turn LEFT on YT6K9wzJJ1znF", "Turn RIGHT on m3RTkK-", "Turn LEFT on ws2Ut xHQ5b-JlfMQyENu kDM ik -hE6s15", "Turn LEFT on J", "Turn LEFT on -z1C0- JDf", "Turn LEFT on oIGEN-cxZf0BG 2rhQFnn21", "Turn RIGHT on zJ-fBh", "Turn RIGHT on h aDdHMEH", "Turn LEFT on NQwfycCYbJr7R-Mmtw VVm4", "Turn LEFT on iPxxVnNOqohFaGZhm7Y5dKsrjTZk5jnEmf9", "Turn LEFT on ZO8RDu 0 2jwxdHctao gdr i55T1", "Turn RIGHT on acMw3upIqNYd1w", "Turn RIGHT on ENFGS k62rT64hS5DxuS", "Turn RIGHT on xWKUKq93vmqtMNqM2yn ", "Turn LEFT on mLS5zpGLu1 0TCF qsBmzHBFAFGgcUwbn6", "Turn RIGHT on sTdw4P edvVvaWNwGOFOdrPMW3 pMO8tddL", "Turn RIGHT on iR8D", "Turn LEFT on eySAfoU aa3qT0GfDG KSTY", "Turn LEFT on J CZZ0x hF S9o8eVARifhS", "Turn RIGHT on 708iXww8LHeLmoG9GhuRsG4kJQ", "Turn LEFT on OLy NFMPccEJ8oB IYZy BEvppN030bmZ ", "Turn RIGHT on Q-t", "Turn LEFT on CY twhR-58-CpQbMhB0SrUa uE", "Turn LEFT on qyN4kWl", "Turn RIGHT on 0"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on 0", "Turn LEFT on qyN4kWl", "Turn RIGHT on CY twhR-58-CpQbMhB0SrUa uE", "Turn RIGHT on Q-t", "Turn LEFT on OLy NFMPccEJ8oB IYZy BEvppN030bmZ ", "Turn RIGHT on 708iXww8LHeLmoG9GhuRsG4kJQ", "Turn LEFT on J CZZ0x hF S9o8eVARifhS", "Turn RIGHT on eySAfoU aa3qT0GfDG KSTY", "Turn RIGHT on iR8D", "Turn LEFT on sTdw4P edvVvaWNwGOFOdrPMW3 pMO8tddL", "Turn LEFT on mLS5zpGLu1 0TCF qsBmzHBFAFGgcUwbn6", "Turn RIGHT on xWKUKq93vmqtMNqM2yn ", "Turn LEFT on ENFGS k62rT64hS5DxuS", "Turn LEFT on acMw3upIqNYd1w", "Turn LEFT on ZO8RDu 0 2jwxdHctao gdr i55T1", "Turn RIGHT on iPxxVnNOqohFaGZhm7Y5dKsrjTZk5jnEmf9", "Turn RIGHT on NQwfycCYbJr7R-Mmtw VVm4", "Turn RIGHT on h aDdHMEH", "Turn LEFT on zJ-fBh", "Turn LEFT on oIGEN-cxZf0BG 2rhQFnn21", "Turn RIGHT on -z1C0- JDf", "Turn RIGHT on J", "Turn RIGHT on ws2Ut xHQ5b-JlfMQyENu kDM ik -hE6s15", "Turn RIGHT on m3RTkK-", "Turn LEFT on YT6K9wzJJ1znF", "Turn RIGHT on w lFuz7W QfJJ", "Turn RIGHT on iBs5PCL9IwgBMvD6OjFTLNI1U", "Turn LEFT on 3 y", "Turn LEFT on MK xYtp59T5cS 031X 8FTzqqmJ", "Turn LEFT on VDWZ 9Bl4ft7jMAfu pyBjWUxFXGI-Hlb", "Turn RIGHT on ffVTOcugHN6Lg lomdxi", "Turn LEFT on OTXZK", "Turn LEFT on mKl2PSEdEUzWU-sJE5 PmUCOPa6WK", "Turn LEFT on ozt9PBjukvyBb0ZDBCz qXHTvoOpR", "Turn LEFT on FO06qpHq-SLgW 9 hi pHsuR0Nkh7Ncec4y", "Turn RIGHT on 8FWi11ftwZGqu", "Turn RIGHT on 8-r8aeNkx", "Turn LEFT on cPD8Gx", "Turn RIGHT on kn8a1NgAUnus sckQxTxT4-h g80P0Pz4", "Turn RIGHT on ZSbW 1EiJe7ZDtMYxRsHCx", "Turn RIGHT on Nx9CLBeDmVM Pm-auopKn"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> directions = {"Start on I5mWbL25TC3953O5ss ", "Turn RIGHT on 25j72dGaq4jMi VRHDfj", "Turn LEFT on tUO7Hu0IL SKDKFd UyiX06Ipp", "Turn RIGHT on m3l7wDlOQeIaqgT ", "Turn LEFT on FoGM4XlwirCG18uYjhUmx74om6P6i", "Turn LEFT on OAaU", "Turn LEFT on XVIg DnHve8", "Turn RIGHT on Uc W 7jBCz7SGsO5p", "Turn RIGHT on 5ken1yo-mUmBdgpzp7", "Turn LEFT on Pg4kKg9NoxYktoazY5r c pFRYz7FjhY", "Turn LEFT on km93yCXdNJx nnbvMN XAdBF95Ee-RE", "Turn LEFT on 2d0P", "Turn LEFT on s BjCCDK5OKf7b yXzOrYOh3OA", "Turn LEFT on TRsiGvHDYAhmEVITSyxeDWiu9cOi6n8M", "Turn RIGHT on YAgh3p1jcHl vtmjlxX", "Turn LEFT on DWWUxp3OeXlXTe6 3tM2", "Turn LEFT on UbIFXV QC0n-qZ 6hOI tJah de R", "Turn LEFT on kfm", "Turn LEFT on dzOVuZ c fOV rVVpPAvMjG52M1OlpzA", "Turn RIGHT on 2sI5upcklPBzolz1d", "Turn LEFT on ZJAvokGU8N5psIWo 4Apay3FNmG8xCCNWA6k", "Turn RIGHT on xMPKEL o", "Turn RIGHT on 7s-YW B6kiW6", "Turn LEFT on t5bJ-xhL ", "Turn RIGHT on ifRlrSUfA0yh8BP6q 3Fdfta5gh", "Turn RIGHT on 5249 3uBF8yW0n", "Turn RIGHT on o9A WTdgjiGbt4T6HwxyhjKlp", "Turn RIGHT on VoY2viEPsTqqupYQw92qCk", "Turn RIGHT on P", "Turn RIGHT on grXyXaaNPIs2Aj9Ewnz6meyn-5QD0hyW", "Turn LEFT on gc7WLfe3R7DoLN5Re mj29pyF dLE4OE", "Turn RIGHT on ZWZaFyMkXGdj2 fG", "Turn RIGHT on m 6Xh xAdy6OXT0rKZcWqlx E", "Turn LEFT on GsvomojJN ZZCa69a97b vmClfg-7UAsQbE", "Turn LEFT on kVSu0DLJA BMK ", "Turn LEFT on 0QQufrDIGUjs6e1EvhZLZXwlkEx4-", "Turn RIGHT on C Q08aS MRAGCSAHlEDMzc hi", "Turn LEFT on ESd7eB3rQ- RT", "Turn RIGHT on 05LaXluvtFGYcn67PJzl9s0 vhlZirX", "Turn LEFT on iRZDbsiq", "Turn LEFT on e fhaOg tKrd 0lISlXZrqdwDyxWPl2vyNLb", "Turn LEFT on QR"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on QR", "Turn RIGHT on e fhaOg tKrd 0lISlXZrqdwDyxWPl2vyNLb", "Turn RIGHT on iRZDbsiq", "Turn RIGHT on 05LaXluvtFGYcn67PJzl9s0 vhlZirX", "Turn LEFT on ESd7eB3rQ- RT", "Turn RIGHT on C Q08aS MRAGCSAHlEDMzc hi", "Turn LEFT on 0QQufrDIGUjs6e1EvhZLZXwlkEx4-", "Turn RIGHT on kVSu0DLJA BMK ", "Turn RIGHT on GsvomojJN ZZCa69a97b vmClfg-7UAsQbE", "Turn RIGHT on m 6Xh xAdy6OXT0rKZcWqlx E", "Turn LEFT on ZWZaFyMkXGdj2 fG", "Turn LEFT on gc7WLfe3R7DoLN5Re mj29pyF dLE4OE", "Turn RIGHT on grXyXaaNPIs2Aj9Ewnz6meyn-5QD0hyW", "Turn LEFT on P", "Turn LEFT on VoY2viEPsTqqupYQw92qCk", "Turn LEFT on o9A WTdgjiGbt4T6HwxyhjKlp", "Turn LEFT on 5249 3uBF8yW0n", "Turn LEFT on ifRlrSUfA0yh8BP6q 3Fdfta5gh", "Turn LEFT on t5bJ-xhL ", "Turn RIGHT on 7s-YW B6kiW6", "Turn LEFT on xMPKEL o", "Turn LEFT on ZJAvokGU8N5psIWo 4Apay3FNmG8xCCNWA6k", "Turn RIGHT on 2sI5upcklPBzolz1d", "Turn LEFT on dzOVuZ c fOV rVVpPAvMjG52M1OlpzA", "Turn RIGHT on kfm", "Turn RIGHT on UbIFXV QC0n-qZ 6hOI tJah de R", "Turn RIGHT on DWWUxp3OeXlXTe6 3tM2", "Turn RIGHT on YAgh3p1jcHl vtmjlxX", "Turn LEFT on TRsiGvHDYAhmEVITSyxeDWiu9cOi6n8M", "Turn RIGHT on s BjCCDK5OKf7b yXzOrYOh3OA", "Turn RIGHT on 2d0P", "Turn RIGHT on km93yCXdNJx nnbvMN XAdBF95Ee-RE", "Turn RIGHT on Pg4kKg9NoxYktoazY5r c pFRYz7FjhY", "Turn RIGHT on 5ken1yo-mUmBdgpzp7", "Turn LEFT on Uc W 7jBCz7SGsO5p", "Turn LEFT on XVIg DnHve8", "Turn RIGHT on OAaU", "Turn RIGHT on FoGM4XlwirCG18uYjhUmx74om6P6i", "Turn RIGHT on m3l7wDlOQeIaqgT ", "Turn LEFT on tUO7Hu0IL SKDKFd UyiX06Ipp", "Turn RIGHT on 25j72dGaq4jMi VRHDfj", "Turn LEFT on I5mWbL25TC3953O5ss "};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> directions = {"Start on k nHuSlDtWVzVk9ro", "Turn LEFT on n1", "Turn RIGHT on zkamySu 64f1vp8l L17hE4U XCdF7l", "Turn LEFT on EF3J3vvrQRqG Wpc9", "Turn RIGHT on 6gNsBD7QYQF0uOrRDoGcN11", "Turn LEFT on UL63SkVF1FLtlY7cBOqmTuu oxS5YsH", "Turn LEFT on eF L", "Turn LEFT on Vor15nNnHtCu v5LG2cJpMHG", "Turn RIGHT on JB-PvxVWH1WbfMyefQql2nofnt", "Turn RIGHT on Mz", "Turn RIGHT on s hig", "Turn RIGHT on dc7y3y3Usx5h5GONpN -kqJqZ", "Turn LEFT on rZLqb1LxH7KLVtRH9DzIrxqQmY4S3Wi", "Turn LEFT on -Uo5KFJahKtB cBAc", "Turn LEFT on q", "Turn RIGHT on KtJMgqP1SbPHs1g3h4AmOlxl ", "Turn RIGHT on 0yyZ9Hhjx9mi", "Turn RIGHT on 6EJ -kb 4XJl9nzetgAeyo uQ1BbcCxeqmK", "Turn RIGHT on RNFtpx6m CGOwWnSKSNZgBiB8", "Turn LEFT on RoJ", "Turn RIGHT on M8Rl1 oIr QYXUvTUST QfWLCIB-5xFxfW", "Turn LEFT on Y8KfO-XE2MEGp59SY", "Turn LEFT on kpLkDh", "Turn RIGHT on 6 Xy6bi 9KSj4hi1Eps9RC8", "Turn LEFT on 2x0aOIzjSkcmQ Z ED ", "Turn RIGHT on qHa", "Turn RIGHT on rFjwdBIy9", "Turn RIGHT on xs7 cA9Qv vip Z-dlENkCt7uCU0dCG", "Turn RIGHT on leihG4 Yyy1wBCHDKp38YZqvs4OHFJHTe", "Turn LEFT on qDJ3S85 7vCqbAqa1LLrFCmZeYr9qbHL"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on qDJ3S85 7vCqbAqa1LLrFCmZeYr9qbHL", "Turn RIGHT on leihG4 Yyy1wBCHDKp38YZqvs4OHFJHTe", "Turn LEFT on xs7 cA9Qv vip Z-dlENkCt7uCU0dCG", "Turn LEFT on rFjwdBIy9", "Turn LEFT on qHa", "Turn LEFT on 2x0aOIzjSkcmQ Z ED ", "Turn RIGHT on 6 Xy6bi 9KSj4hi1Eps9RC8", "Turn LEFT on kpLkDh", "Turn RIGHT on Y8KfO-XE2MEGp59SY", "Turn RIGHT on M8Rl1 oIr QYXUvTUST QfWLCIB-5xFxfW", "Turn LEFT on RoJ", "Turn RIGHT on RNFtpx6m CGOwWnSKSNZgBiB8", "Turn LEFT on 6EJ -kb 4XJl9nzetgAeyo uQ1BbcCxeqmK", "Turn LEFT on 0yyZ9Hhjx9mi", "Turn LEFT on KtJMgqP1SbPHs1g3h4AmOlxl ", "Turn LEFT on q", "Turn RIGHT on -Uo5KFJahKtB cBAc", "Turn RIGHT on rZLqb1LxH7KLVtRH9DzIrxqQmY4S3Wi", "Turn RIGHT on dc7y3y3Usx5h5GONpN -kqJqZ", "Turn LEFT on s hig", "Turn LEFT on Mz", "Turn LEFT on JB-PvxVWH1WbfMyefQql2nofnt", "Turn LEFT on Vor15nNnHtCu v5LG2cJpMHG", "Turn RIGHT on eF L", "Turn RIGHT on UL63SkVF1FLtlY7cBOqmTuu oxS5YsH", "Turn RIGHT on 6gNsBD7QYQF0uOrRDoGcN11", "Turn LEFT on EF3J3vvrQRqG Wpc9", "Turn RIGHT on zkamySu 64f1vp8l L17hE4U XCdF7l", "Turn LEFT on n1", "Turn RIGHT on k nHuSlDtWVzVk9ro"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> directions = {"Start on t98nSsHoZUm61207nwJZKcK3ZH", "Turn LEFT on UMhE8y u 7yB1OvwVle0", "Turn LEFT on WFkgvFzHtqP71", "Turn LEFT on 7Y9v5 8Fve", "Turn RIGHT on FpvVHk wT-d4zpFAY-eKNDgbaMu ", "Turn RIGHT on -3gT1vny3zIx37 ZKQu 1y b8NFk-ijduYs", "Turn RIGHT on xvuvLFXW ", "Turn RIGHT on CGx MDYd1oSw VB n5W13An", "Turn RIGHT on E8EocaeiRgrhSHW2fMZT0hv", "Turn LEFT on ynrhRBcf5mqnhJlPMp X bvlFqMa", "Turn RIGHT on b", "Turn LEFT on pN7pRuiPD2Vo bfYrNCw-v88EfH HC8l", "Turn RIGHT on dHEXg2VQ6b9U9fVamjB8gELc6y3", "Turn RIGHT on L1r Teoe3p-ZDAPag", "Turn RIGHT on TnZ3IseFdTLW q8Q 1jVNJN7j", "Turn RIGHT on DXsD", "Turn RIGHT on Zl wc4slqpN5lgk9oknIio7HkMj qjiOBhB", "Turn LEFT on CDy0UcyqApjW", "Turn RIGHT on zqrFQTOPt4", "Turn LEFT on BoLskaSaGhLsBX39X 2mx", "Turn LEFT on f WG4sH9Awy98oA19ov-ikoawEi-Dl", "Turn LEFT on 58qxxh5WN9pn4WVxpHexZDRv16h6Sl t69ut", "Turn LEFT on ac8dxrDbSjedc p2 JNjz", "Turn LEFT on cqvxuMQUeItvE1say94sUDeXMjU4Mvt AI"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on cqvxuMQUeItvE1say94sUDeXMjU4Mvt AI", "Turn RIGHT on ac8dxrDbSjedc p2 JNjz", "Turn RIGHT on 58qxxh5WN9pn4WVxpHexZDRv16h6Sl t69ut", "Turn RIGHT on f WG4sH9Awy98oA19ov-ikoawEi-Dl", "Turn RIGHT on BoLskaSaGhLsBX39X 2mx", "Turn RIGHT on zqrFQTOPt4", "Turn LEFT on CDy0UcyqApjW", "Turn RIGHT on Zl wc4slqpN5lgk9oknIio7HkMj qjiOBhB", "Turn LEFT on DXsD", "Turn LEFT on TnZ3IseFdTLW q8Q 1jVNJN7j", "Turn LEFT on L1r Teoe3p-ZDAPag", "Turn LEFT on dHEXg2VQ6b9U9fVamjB8gELc6y3", "Turn LEFT on pN7pRuiPD2Vo bfYrNCw-v88EfH HC8l", "Turn RIGHT on b", "Turn LEFT on ynrhRBcf5mqnhJlPMp X bvlFqMa", "Turn RIGHT on E8EocaeiRgrhSHW2fMZT0hv", "Turn LEFT on CGx MDYd1oSw VB n5W13An", "Turn LEFT on xvuvLFXW ", "Turn LEFT on -3gT1vny3zIx37 ZKQu 1y b8NFk-ijduYs", "Turn LEFT on FpvVHk wT-d4zpFAY-eKNDgbaMu ", "Turn LEFT on 7Y9v5 8Fve", "Turn RIGHT on WFkgvFzHtqP71", "Turn RIGHT on UMhE8y u 7yB1OvwVle0", "Turn RIGHT on t98nSsHoZUm61207nwJZKcK3ZH"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> directions = {"Start on E3mW6ngXR5anrDqTjN s zy5CCxp jXYdmahZz8", "Turn RIGHT on L Ip 4KiebX1x-hAJh077peq6DuTTW mPs", "Turn LEFT on Gmffz SYx1lO-2W9", "Turn LEFT on CzjZfulesF6SrP TRlydKczK6r", "Turn LEFT on etBMQnAZI0kHAQJyv6LyK9-awv6", "Turn RIGHT on nme 2ukiHnJ4Dt8ioYN-2KT7Ry9FsM G2SdH", "Turn RIGHT on YRWMeuxX xpQtbgY5 jvAJw h", "Turn LEFT on tqYuvbs20 Opl0ToQ", "Turn LEFT on McMJe MWosGSKUTL", "Turn LEFT on Yo GGmCjNkbrEX3v", "Turn LEFT on SCQ vOZJo-IFH 7EpK buH4", "Turn RIGHT on pPkeLor 3pN", "Turn LEFT on -3c 2nTbEj6lb", "Turn LEFT on NWnhl9YfZKO2BkDEBX P1tvuy5 "};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on NWnhl9YfZKO2BkDEBX P1tvuy5 ", "Turn RIGHT on -3c 2nTbEj6lb", "Turn RIGHT on pPkeLor 3pN", "Turn LEFT on SCQ vOZJo-IFH 7EpK buH4", "Turn RIGHT on Yo GGmCjNkbrEX3v", "Turn RIGHT on McMJe MWosGSKUTL", "Turn RIGHT on tqYuvbs20 Opl0ToQ", "Turn RIGHT on YRWMeuxX xpQtbgY5 jvAJw h", "Turn LEFT on nme 2ukiHnJ4Dt8ioYN-2KT7Ry9FsM G2SdH", "Turn LEFT on etBMQnAZI0kHAQJyv6LyK9-awv6", "Turn RIGHT on CzjZfulesF6SrP TRlydKczK6r", "Turn RIGHT on Gmffz SYx1lO-2W9", "Turn RIGHT on L Ip 4KiebX1x-hAJh077peq6DuTTW mPs", "Turn LEFT on E3mW6ngXR5anrDqTjN s zy5CCxp jXYdmahZz8"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> directions = {"Start on ", "Turn LEFT on on on "};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on on on ", "Turn RIGHT on "};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> directions = {"Start on Pirate Street", "Turn LEFT on Viking Avenue", "Turn RIGHT on Ninja Court"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Ninja Court", "Turn LEFT on Viking Avenue", "Turn RIGHT on Pirate Street"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> directions = {"Start on ", "Turn LEFT on 0123456789 - ", "Turn RIGHT on 0123456789 - ", "Turn LEFT on ", "Turn RIGHT on ", "Turn LEFT on -a0b1c2d3e4f5g6h7i8j9k ", "Turn RIGHT on -A0B1C2D3E4F5G6H7I8J9K ", "Turn LEFT on -", "Turn RIGHT on -"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on -", "Turn LEFT on -", "Turn RIGHT on -A0B1C2D3E4F5G6H7I8J9K ", "Turn LEFT on -a0b1c2d3e4f5g6h7i8j9k ", "Turn RIGHT on ", "Turn LEFT on ", "Turn RIGHT on 0123456789 - ", "Turn LEFT on 0123456789 - ", "Turn RIGHT on "};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> directions = {"Start on here", "Turn LEFT on Turn RIGHT on", "Turn RIGHT on Turn LEFT on"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Turn LEFT on", "Turn LEFT on Turn RIGHT on", "Turn RIGHT on here"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> directions = {"Start on Pirate Street", "Turn LEFT on Viking Avenue", "Turn RIGHT on on on Street"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on on on Street", "Turn LEFT on Viking Avenue", "Turn RIGHT on Pirate Street"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> directions = {"Start on Main Street", "Turn RIGHT on LEFT street", "Turn RIGHT on LEFT LEFT AVE", "Turn LEFT on Miller", "Turn RIGHT on LEFT Lane"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on LEFT Lane", "Turn LEFT on Miller", "Turn RIGHT on LEFT LEFT AVE", "Turn LEFT on LEFT street", "Turn LEFT on Main Street"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> directions = {"Start on Hebron Ave", "Turn RIGHT on CT-2", "Turn LEFT on I-84", "Turn LEFT on I-81", "Turn RIGHT on LEFT Street", "Turn LEFT on I-680", "Turn RIGHT on Mission Blvd", "Turn LEFT on I-880", "Turn RIGHT on Montague Expressway", "Turn RIGHT on Mission College Blvd"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Mission College Blvd", "Turn LEFT on Montague Expressway", "Turn LEFT on I-880", "Turn RIGHT on Mission Blvd", "Turn LEFT on I-680", "Turn RIGHT on LEFT Street", "Turn LEFT on I-81", "Turn RIGHT on I-84", "Turn RIGHT on CT-2", "Turn LEFT on Hebron Ave"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> directions = {"Start on on Street"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on on Street"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> directions = {"Start on Pirate Street", "Turn RIGHT on Turn RIGHT on "};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Turn RIGHT on ", "Turn LEFT on Pirate Street"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> directions = {"Start on aaa", "Turn LEFT on Turn RIGHT on"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Turn RIGHT on", "Turn RIGHT on aaa"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> directions = {"Start on LEFT", "Turn LEFT on RIGHT", "Turn RIGHT on LEFT"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on LEFT", "Turn LEFT on RIGHT", "Turn RIGHT on LEFT"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> directions = {"Start on Duke University Rd", "Turn RIGHT on LEFT", "Turn LEFT on RIGHT", "Turn LEFT on I-85", "Turn RIGHT on I-40", "Turn RIGHT on US-52", "Turn LEFT on I-74", "Turn RIGHT on I-77", "Turn LEFT on I-64", "Turn RIGHT on Martin Luther King Memorial Bridge", "Turn RIGHT on N 3rd St", "Turn LEFT on Cole St", "Turn LEFT on N Broadway", "Turn RIGHT on Convention Plz"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Convention Plz", "Turn LEFT on N Broadway", "Turn RIGHT on Cole St", "Turn RIGHT on N 3rd St", "Turn LEFT on Martin Luther King Memorial Bridge", "Turn LEFT on I-64", "Turn RIGHT on I-77", "Turn LEFT on I-74", "Turn RIGHT on US-52", "Turn LEFT on I-40", "Turn LEFT on I-85", "Turn RIGHT on RIGHT", "Turn RIGHT on LEFT", "Turn LEFT on Duke University Rd"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> directions = {"Start on Turn RIGHT on coco", "Turn LEFT on Bradway", "Turn LEFT on Chick", "Turn RIGHT on Dell"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Dell", "Turn LEFT on Chick", "Turn RIGHT on Bradway", "Turn RIGHT on Turn RIGHT on coco"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> directions = {"Start on Stratford on Avon", "Turn RIGHT on Beale on the on on on"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Beale on the on on on", "Turn LEFT on Stratford on Avon"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> directions = {"Start on BroadWay", "Turn RIGHT on Little LEFT casino", "Turn LEFT on Little RIGHT casino", "Turn LEFT on BgiigigigigiRIGHT"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on BgiigigigigiRIGHT", "Turn RIGHT on Little RIGHT casino", "Turn RIGHT on Little LEFT casino", "Turn LEFT on BroadWay"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> directions = {"Start on ", "Turn LEFT on 0123456789 - ", "Turn RIGHT on 0123456789 - ", "Turn LEFT on ", "Turn RIGHT on ", "Turn LEFT on -a0b1c2d3e4f5g6h7i8j9k ", "Turn RIGHT on -A0B1C2D3E4 F5G6H7I8J9K ", "Turn LEFT on -", "Turn RIGHT on -"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on -", "Turn LEFT on -", "Turn RIGHT on -A0B1C2D3E4 F5G6H7I8J9K ", "Turn LEFT on -a0b1c2d3e4f5g6h7i8j9k ", "Turn RIGHT on ", "Turn LEFT on ", "Turn RIGHT on 0123456789 - ", "Turn LEFT on 0123456789 - ", "Turn RIGHT on "};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> directions = {"Start on Hebron Ave", "Turn RIGHT on CT-2", "Turn LEFT on I-84", "Turn LEFT on I-81", "Turn RIGHT on I-80", "Turn LEFT on I-680", "Turn RIGHT on Mission Blvd", "Turn LEFT on I-880", "Turn RIGHT on Montague Expressway", "Turn RIGHT on Mission College Blvd"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Mission College Blvd", "Turn LEFT on Montague Expressway", "Turn LEFT on I-880", "Turn RIGHT on Mission Blvd", "Turn LEFT on I-680", "Turn RIGHT on I-80", "Turn LEFT on I-81", "Turn RIGHT on I-84", "Turn RIGHT on CT-2", "Turn LEFT on Hebron Ave"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> directions = {"Start on Pirate Street", "Turn LEFT on Viking Avenue", "Turn RIGHT on Ninja Court"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Ninja Court", "Turn LEFT on Viking Avenue", "Turn RIGHT on Pirate Street"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> directions = {"Start on ", "Turn LEFT on 0123456789 - ", "Turn RIGHT on 0123456789 - ", "Turn LEFT on ", "Turn RIGHT on ", "Turn LEFT on -a0b1c2d3e4f5g6h7i8j9k ", "Turn RIGHT on -A0B1C2D3E4F5G6H7I8J9K ", "Turn LEFT on -", "Turn RIGHT on -"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on -", "Turn LEFT on -", "Turn RIGHT on -A0B1C2D3E4F5G6H7I8J9K ", "Turn LEFT on -a0b1c2d3e4f5g6h7i8j9k ", "Turn RIGHT on ", "Turn LEFT on ", "Turn RIGHT on 0123456789 - ", "Turn LEFT on 0123456789 - ", "Turn RIGHT on "};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> directions = {"Start on here", "Turn LEFT on Turn RIGHT on", "Turn RIGHT on Turn LEFT on"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Turn LEFT on", "Turn LEFT on Turn RIGHT on", "Turn RIGHT on here"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> directions = {"Start on Pirate Street", "Turn LEFT on Viking Avenue", "Turn RIGHT on on on Street"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on on on Street", "Turn LEFT on Viking Avenue", "Turn RIGHT on Pirate Street"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> directions = {"Start on Main Street", "Turn RIGHT on LEFT street", "Turn RIGHT on LEFT LEFT AVE", "Turn LEFT on Miller", "Turn RIGHT on LEFT Lane"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on LEFT Lane", "Turn LEFT on Miller", "Turn RIGHT on LEFT LEFT AVE", "Turn LEFT on LEFT street", "Turn LEFT on Main Street"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> directions = {"Start on Hebron Ave", "Turn RIGHT on CT-2", "Turn LEFT on I-84", "Turn LEFT on I-81", "Turn RIGHT on LEFT Street", "Turn LEFT on I-680", "Turn RIGHT on Mission Blvd", "Turn LEFT on I-880", "Turn RIGHT on Montague Expressway", "Turn RIGHT on Mission College Blvd"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Mission College Blvd", "Turn LEFT on Montague Expressway", "Turn LEFT on I-880", "Turn RIGHT on Mission Blvd", "Turn LEFT on I-680", "Turn RIGHT on LEFT Street", "Turn LEFT on I-81", "Turn RIGHT on I-84", "Turn RIGHT on CT-2", "Turn LEFT on Hebron Ave"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> directions = {"Start on on Street"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on on Street"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> directions = {"Start on Pirate Street", "Turn RIGHT on Turn RIGHT on "};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Turn RIGHT on ", "Turn LEFT on Pirate Street"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> directions = {"Start on aaa", "Turn LEFT on Turn RIGHT on"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Turn RIGHT on", "Turn RIGHT on aaa"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> directions = {"Start on LEFT", "Turn LEFT on RIGHT", "Turn RIGHT on LEFT"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on LEFT", "Turn LEFT on RIGHT", "Turn RIGHT on LEFT"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> directions = {"Start on Duke University Rd", "Turn RIGHT on LEFT", "Turn LEFT on RIGHT", "Turn LEFT on I-85", "Turn RIGHT on I-40", "Turn RIGHT on US-52", "Turn LEFT on I-74", "Turn RIGHT on I-77", "Turn LEFT on I-64", "Turn RIGHT on Martin Luther King Memorial Bridge", "Turn RIGHT on N 3rd St", "Turn LEFT on Cole St", "Turn LEFT on N Broadway", "Turn RIGHT on Convention Plz"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Convention Plz", "Turn LEFT on N Broadway", "Turn RIGHT on Cole St", "Turn RIGHT on N 3rd St", "Turn LEFT on Martin Luther King Memorial Bridge", "Turn LEFT on I-64", "Turn RIGHT on I-77", "Turn LEFT on I-74", "Turn RIGHT on US-52", "Turn LEFT on I-40", "Turn LEFT on I-85", "Turn RIGHT on RIGHT", "Turn RIGHT on LEFT", "Turn LEFT on Duke University Rd"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> directions = {"Start on Turn RIGHT on coco", "Turn LEFT on Bradway", "Turn LEFT on Chick", "Turn RIGHT on Dell"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Dell", "Turn LEFT on Chick", "Turn RIGHT on Bradway", "Turn RIGHT on Turn RIGHT on coco"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> directions = {"Start on Stratford on Avon", "Turn RIGHT on Beale on the on on on"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Beale on the on on on", "Turn LEFT on Stratford on Avon"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> directions = {"Start on BroadWay", "Turn RIGHT on Little LEFT casino", "Turn LEFT on Little RIGHT casino", "Turn LEFT on BgiigigigigiRIGHT"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on BgiigigigigiRIGHT", "Turn RIGHT on Little RIGHT casino", "Turn RIGHT on Little LEFT casino", "Turn LEFT on BroadWay"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> directions = {"Start on ", "Turn LEFT on 0123456789 - ", "Turn RIGHT on 0123456789 - ", "Turn LEFT on ", "Turn RIGHT on ", "Turn LEFT on -a0b1c2d3e4f5g6h7i8j9k ", "Turn RIGHT on -A0B1C2D3E4 F5G6H7I8J9K ", "Turn LEFT on -", "Turn RIGHT on -"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on -", "Turn LEFT on -", "Turn RIGHT on -A0B1C2D3E4 F5G6H7I8J9K ", "Turn LEFT on -a0b1c2d3e4f5g6h7i8j9k ", "Turn RIGHT on ", "Turn LEFT on ", "Turn RIGHT on 0123456789 - ", "Turn LEFT on 0123456789 - ", "Turn RIGHT on "};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> directions = {"Start on Hebron Ave", "Turn RIGHT on CT-2", "Turn LEFT on I-84", "Turn LEFT on I-81", "Turn RIGHT on I-80", "Turn LEFT on I-680", "Turn RIGHT on Mission Blvd", "Turn LEFT on I-880", "Turn RIGHT on Montague Expressway", "Turn RIGHT on Mission College Blvd"};
    DrivingDirections* pObj = new DrivingDirections();
    clock_t start = clock();
    vector<string> result = pObj->reverse(directions);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Start on Mission College Blvd", "Turn LEFT on Montague Expressway", "Turn LEFT on I-880", "Turn RIGHT on Mission Blvd", "Turn LEFT on I-680", "Turn RIGHT on I-80", "Turn LEFT on I-81", "Turn RIGHT on I-84", "Turn RIGHT on CT-2", "Turn LEFT on Hebron Ave"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10265618&rd=5856&pm=2936
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
#include <time.h>
 
using namespace std;
 
class DrivingDirections {
public:
  vector <string> reverse(vector <string>);
};
 
vector <string> DrivingDirections::reverse(vector <string> directions) {
  vector <string> ret(0);
  ret.push_back("Start on ");
  for (int i = directions.size()-1;i>=0;i--)
  {
    if (directions[i][5] == 'L')
    {
      ret[ret.size()-1] += directions[i].substr(13);
      ret.push_back("Turn RIGHT on ");
       
    }
    else if (directions[i][5] == 'R')
    {
      ret[ret.size()-1] += directions[i].substr(14);
      ret.push_back("Turn LEFT on ");
       
    }
    else
    {
      ret[ret.size()-1] += directions[i].substr(9);
    }
  }
  return ret;
}
 
double test0() {
  string t0[] = {"Start on Pirate Street",
"Turn LEFT on Viking Avenue",
"Turn RIGHT on Ninja Court"};
  vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
  DrivingDirections * obj = new DrivingDirections();
  clock_t start = clock();
  vector <string> my_answer = obj->reverse(p0);
  clock_t end = clock();
  delete obj;
  cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
  string t1[] = { "Start on Ninja Court",  "Turn LEFT on Viking Avenue",  "Turn RIGHT on Pirate Street" };
  vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
  cout <<"Desired answer: " <<endl;
  cout <<"\t{ ";
  if (p1.size() > 0) {
    cout <<"\""<<p1[0]<<"\"";
    for (int i=1; i<p1.size(); i++)
      cout <<", \"" <<p1[i]<<"\"";
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  cout <<endl <<"Your answer: " <<endl;
  cout <<"\t{ ";
  if (my_answer.size() > 0) {
    cout <<"\""<<my_answer[0]<<"\"";
    for (int i=1; i<my_answer.size(); i++)
      cout <<", \"" <<my_answer[i]<<"\"";
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  if (my_answer != p1) {
    cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
    return -1;
  }
  else {
    cout <<"Match :-)" <<endl <<endl;
    return (double)(end-start)/CLOCKS_PER_SEC;  //I want to eventually turn this into a time of some kind.
  }
}
double test1() {
  string t0[] = {"Start on planet Earth"};
  vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
  DrivingDirections * obj = new DrivingDirections();
  clock_t start = clock();
  vector <string> my_answer = obj->reverse(p0);
  clock_t end = clock();
  delete obj;
  cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
  string t1[] = { "Start on planet Earth" };
  vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
  cout <<"Desired answer: " <<endl;
  cout <<"\t{ ";
  if (p1.size() > 0) {
    cout <<"\""<<p1[0]<<"\"";
    for (int i=1; i<p1.size(); i++)
      cout <<", \"" <<p1[i]<<"\"";
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  cout <<endl <<"Your answer: " <<endl;
  cout <<"\t{ ";
  if (my_answer.size() > 0) {
    cout <<"\""<<my_answer[0]<<"\"";
    for (int i=1; i<my_answer.size(); i++)
      cout <<", \"" <<my_answer[i]<<"\"";
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  if (my_answer != p1) {
    cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
    return -1;
  }
  else {
    cout <<"Match :-)" <<endl <<endl;
    return (double)(end-start)/CLOCKS_PER_SEC;  //I want to eventually turn this into a time of some kind.
  }
}
double test2() {
  string t0[] = {"Start on Hebron Ave",
"Turn RIGHT on CT-2",
"Turn LEFT on I-84",
"Turn LEFT on I-81",
"Turn RIGHT on I-80",
"Turn LEFT on I-680",
"Turn RIGHT on Mission Blvd",
"Turn LEFT on I-880",
"Turn RIGHT on Montague Expressway",
"Turn RIGHT on Mission College Blvd"};
  vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
  DrivingDirections * obj = new DrivingDirections();
  clock_t start = clock();
  vector <string> my_answer = obj->reverse(p0);
  clock_t end = clock();
  delete obj;
  cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
  string t1[] = { "Start on Mission College Blvd",  "Turn LEFT on Montague Expressway",  "Turn LEFT on I-880",  "Turn RIGHT on Mission Blvd",  "Turn LEFT on I-680",  "Turn RIGHT on I-80",  "Turn LEFT on I-81",  "Turn RIGHT on I-84",  "Turn RIGHT on CT-2",  "Turn LEFT on Hebron Ave" };
  vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
  cout <<"Desired answer: " <<endl;
  cout <<"\t{ ";
  if (p1.size() > 0) {
    cout <<"\""<<p1[0]<<"\"";
    for (int i=1; i<p1.size(); i++)
      cout <<", \"" <<p1[i]<<"\"";
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  cout <<endl <<"Your answer: " <<endl;
  cout <<"\t{ ";
  if (my_answer.size() > 0) {
    cout <<"\""<<my_answer[0]<<"\"";
    for (int i=1; i<my_answer.size(); i++)
      cout <<", \"" <<my_answer[i]<<"\"";
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  if (my_answer != p1) {
    cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
    return -1;
  }
  else {
    cout <<"Match :-)" <<endl <<endl;
    return (double)(end-start)/CLOCKS_PER_SEC;  //I want to eventually turn this into a time of some kind.
  }
}
double test3() {
  string t0[] = {"Start on  ",
"Turn LEFT on  0123456789 - ",
"Turn RIGHT on  0123456789 - ",
"Turn LEFT on                                      ",
"Turn RIGHT on                                     ",
"Turn LEFT on -a0b1c2d3e4f5g6h7i8j9k ",
"Turn RIGHT on -A0B1C2D3E4F5G6H7I8J9K ",
"Turn LEFT on -",
"Turn RIGHT on -"};
  vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
  DrivingDirections * obj = new DrivingDirections();
  clock_t start = clock();
  vector <string> my_answer = obj->reverse(p0);
  clock_t end = clock();
  delete obj;
  cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
  string t1[] = { "Start on -",  "Turn LEFT on -",  "Turn RIGHT on -A0B1C2D3E4F5G6H7I8J9K ",  "Turn LEFT on -a0b1c2d3e4f5g6h7i8j9k ",  "Turn RIGHT on                                     ",  "Turn LEFT on                                      ",  "Turn RIGHT on  0123456789 - ",  "Turn LEFT on  0123456789 - ",  "Turn RIGHT on  " };
  vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
  cout <<"Desired answer: " <<endl;
  cout <<"\t{ ";
  if (p1.size() > 0) {
    cout <<"\""<<p1[0]<<"\"";
    for (int i=1; i<p1.size(); i++)
      cout <<", \"" <<p1[i]<<"\"";
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  cout <<endl <<"Your answer: " <<endl;
  cout <<"\t{ ";
  if (my_answer.size() > 0) {
    cout <<"\""<<my_answer[0]<<"\"";
    for (int i=1; i<my_answer.size(); i++)
      cout <<", \"" <<my_answer[i]<<"\"";
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  if (my_answer != p1) {
    cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
    return -1;
  }
  else {
    cout <<"Match :-)" <<endl <<endl;
    return (double)(end-start)/CLOCKS_PER_SEC;  //I want to eventually turn this into a time of some kind.
  }
}
double test4() {
  string t0[] = {"Start on Duke University Rd",
"Turn RIGHT on Swift Ave",
"Turn LEFT on NC-147",
"Turn LEFT on I-85",
"Turn RIGHT on I-40",
"Turn RIGHT on US-52",
"Turn LEFT on I-74",
"Turn RIGHT on I-77",
"Turn LEFT on I-64",
"Turn RIGHT on Martin Luther King Memorial Bridge",
"Turn RIGHT on N 3rd St",
"Turn LEFT on Cole St",
"Turn LEFT on N Broadway",
"Turn RIGHT on Convention Plz"};
  vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
  DrivingDirections * obj = new DrivingDirections();
  clock_t start = clock();
  vector <string> my_answer = obj->reverse(p0);
  clock_t end = clock();
  delete obj;
  cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
  string t1[] = { "Start on Convention Plz",  "Turn LEFT on N Broadway",  "Turn RIGHT on Cole St",  "Turn RIGHT on N 3rd St",  "Turn LEFT on Martin Luther King Memorial Bridge",  "Turn LEFT on I-64",  "Turn RIGHT on I-77",  "Turn LEFT on I-74",  "Turn RIGHT on US-52",  "Turn LEFT on I-40",  "Turn LEFT on I-85",  "Turn RIGHT on NC-147",  "Turn RIGHT on Swift Ave",  "Turn LEFT on Duke University Rd" };
  vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
  cout <<"Desired answer: " <<endl;
  cout <<"\t{ ";
  if (p1.size() > 0) {
    cout <<"\""<<p1[0]<<"\"";
    for (int i=1; i<p1.size(); i++)
      cout <<", \"" <<p1[i]<<"\"";
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  cout <<endl <<"Your answer: " <<endl;
  cout <<"\t{ ";
  if (my_answer.size() > 0) {
    cout <<"\""<<my_answer[0]<<"\"";
    for (int i=1; i<my_answer.size(); i++)
      cout <<", \"" <<my_answer[i]<<"\"";
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  if (my_answer != p1) {
    cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
    return -1;
  }
  else {
    cout <<"Match :-)" <<endl <<endl;
    return (double)(end-start)/CLOCKS_PER_SEC;  //I want to eventually turn this into a time of some kind.
  }
}
 
//Powered by [KawigiEdit]

********************************************************************************
*******************************************************************************/