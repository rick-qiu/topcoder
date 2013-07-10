/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2998
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

class grafixMask {
public:
    vector<int> sortedAreas(vector<string> rectangles);
};

vector<int> grafixMask::sortedAreas(vector<string> rectangles) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> rectangles = {"0 0 0 0"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {239999};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> rectangles = {"0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599", "0 0 399 599"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> rectangles = {"1 1 398 598", "0 0 0 0", "399 599 399 599"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {997, 997};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> rectangles = {"10 46 20 130", "200 400 300 500", "121 54 188 333"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {209824};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> rectangles = {"1 1 398 598"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1996};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> rectangles = {"1 1 398 598", "0 0 0 0"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1995};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> rectangles = {"363 48 373 354", "325 305 393 589", "93 182 298 536", "292 476 324 552", "170 343 209 382", "263 26 383 313", "41 430 288 517", "246 130 294 590", "285 17 372 434", "93 313 386 515", "65 23 362 441"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {64856};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> rectangles = {"123 452 281 466", "323 433 343 473", "172 238 236 368", "368 525 390 527", "33 173 194 331", "123 104 384 290", "293 247 300 368", "35 221 225 477", "299 200 395 542", "241 484 343 520", "210 265 270 385", "329 29 390 336", "34 141 40 541", "281 12 374 49", "142 446 377 530", "199 174 348 462", "145 492 166 590"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {87200};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> rectangles = {"266 178 322 423", "189 143 255 365", "209 68 350 464", "69 577 241 581", "254 380 358 513", "88 148 278 421", "359 131 391 419", "75 581 211 593", "273 353 320 535", "374 187 377 279", "118 147 142 438", "387 510 397 540", "386 486 391 568", "288 321 325 389", "130 475 373 595", "281 225 302 570", "259 459 394 529", "158 309 358 409", "264 547 369 583", "99 6 300 162", "388 31 390 473", "186 406 211 544", "267 599 332 599", "10 66 359 308", "325 590 340 598", "219 482 242 575", "363 175 376 543", "247 589 286 592", "360 369 393 571", "266 152 399 154", "184 74 339 570", "355 13 370 60"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {39, 3623, 53688};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> rectangles = {"205 294 269 512", "318 29 335 59", "302 248 351 285", "337 236 351 309", "153 571 250 585", "194 207 358 382", "88 442 229 513", "118 24 305 561", "156 60 185 526", "12 7 316 206", "177 480 306 496", "364 365 394 396", "380 495 381 508", "281 452 315 513", "94 365 194 377", "192 552 249 570", "287 392 287 571", "121 32 230 48", "229 55 366 337", "146 492 272 529", "77 547 98 554", "233 568 345 588", "142 520 151 537", "288 208 326 372", "267 13 356 155", "248 593 375 594", "175 47 238 475", "153 254 240 377", "208 586 235 593", "341 104 352 270", "238 591 357 597", "298 452 299 541"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {222, 82953};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> rectangles = {"230 78 350 140", "97 307 209 526", "38 325 215 467", "359 159 379 345", "143 374 154 524", "344 517 365 541", "6 294 256 537", "225 526 357 596", "65 548 345 583", "386 54 390 445", "390 47 394 469", "313 121 347 269", "16 3 273 238", "91 23 357 144", "378 195 380 514", "219 433 229 539", "321 557 349 576", "288 475 324 559", "325 51 331 524", "67 498 376 522", "264 174 358 250", "126 365 308 375", "13 411 233 448", "109 494 195 564", "74 127 244 259", "48 80 237 416", "118 92 276 199", "391 367 391 491", "11 148 348 289", "388 357 397 500", "164 42 391 47", "44 49 238 240", "63 454 283 490", "150 551 194 589", "156 343 294 559", "377 445 378 508", "172 224 174 581", "82 489 176 532", "243 533 385 572"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {43, 108, 7486, 8841, 26850};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> rectangles = {"78 398 192 504", "29 503 198 516", "21 273 24 502", "375 199 378 576", "262 517 393 549", "390 41 397 178", "38 399 300 528", "343 394 362 595", "168 446 279 580", "48 107 367 428", "359 588 369 592", "240 110 396 428", "7 84 188 421", "35 319 56 341", "329 98 378 164", "109 187 134 300", "261 590 339 591", "332 28 392 83", "271 568 308 596", "199 586 203 586", "340 61 365 194", "131 187 367 495", "284 456 344 545", "138 395 309 572", "167 49 359 244", "20 156 256 531", "18 449 277 460", "304 471 374 527", "81 395 147 507", "9 145 278 183", "196 380 220 584", "355 271 388 493", "388 132 389 284", "188 137 334 194"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {468, 46614};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> rectangles = {"99 482 114 587", "178 549 258 578", "356 316 399 529", "149 377 382 564", "124 299 200 324"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {185891};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> rectangles = {"30 164 306 283", "330 284 361 454", "155 267 307 327", "260 67 289 107", "336 249 376 462", "151 299 286 480", "169 218 253 240", "282 343 350 576", "282 330 328 405", "271 429 278 475"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {154527};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> rectangles = {"391 452 394 523", "260 441 363 497", "226 255 380 540", "206 464 277 589", "101 353 164 471", "15 521 53 531", "197 148 266 361", "259 448 311 520", "201 11 303 151", "91 335 232 528", "280 539 344 571"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {138911};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> rectangles = {"160 352 258 431", "85 291 142 439", "263 253 337 300", "344 246 378 388", "50 367 217 411", "129 129 168 446", "26 497 393 550", "364 303 379 465", "82 518 359 598", "385 206 399 410", "292 149 299 226", "82 564 368 598", "121 277 206 491", "217 162 360 369", "399 233 399 326", "236 557 263 589", "130 198 352 341", "283 143 359 214", "245 400 330 505", "126 18 160 254", "344 296 386 527"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 3811, 108661};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> rectangles = {"101 245 374 326", "328 472 348 478", "292 308 313 388", "60 309 250 503", "187 333 276 477", "282 238 338 541", "187 184 291 203", "194 147 305 413", "212 90 347 535", "71 500 180 501", "329 456 380 549", "60 388 102 524", "286 474 330 577", "328 448 372 547", "204 522 397 549", "161 542 394 594", "316 580 348 598", "260 536 316 570", "183 574 248 599", "331 464 373 564", "396 486 396 486", "308 435 350 516", "58 481 127 562"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {117024};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> rectangles = {"192 519 232 595", "96 156 368 282", "200 186 397 366", "202 248 377 260", "61 569 62 592", "62 92 189 169", "4 305 184 497", "63 555 161 559"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {138583};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> rectangles = {"144 163 333 570", "245 80 350 127", "142 520 160 552", "20 239 215 380", "24 311 208 496", "203 225 294 425", "352 369 359 536", "377 204 384 332", "238 537 354 548", "364 337 374 396", "89 532 343 548", "230 554 299 599", "142 58 264 373", "379 66 385 378"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {106005};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> rectangles = {"12 575 101 588", "66 288 264 501", "54 563 77 582", "152 556 229 559", "316 532 354 560", "71 148 387 152", "150 503 310 513", "27 177 98 507", "245 524 368 561", "379 73 390 112", "37 171 42 381", "344 495 356 560", "43 279 179 450", "202 503 353 594", "327 111 393 591", "119 478 280 505", "32 144 283 506", "238 398 324 455", "284 435 390 485", "373 471 376 539", "327 237 350 243", "192 559 227 586", "136 321 167 446", "43 3 320 206", "81 599 393 599", "252 139 392 483", "302 33 317 225", "292 505 376 549", "194 416 284 566"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {714, 45170};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> rectangles = {"66 80 374 463", "298 238 372 368", "251 314 274 468", "271 401 381 564", "228 377 395 489", "167 25 205 127", "24 29 230 311", "173 377 328 559", "18 353 230 509", "286 156 352 588", "130 123 228 276", "218 97 380 311", "182 8 298 393", "130 77 330 101", "112 146 285 565", "200 87 288 538", "374 403 398 542", "257 540 393 562", "92 33 201 452", "69 585 272 590", "347 10 378 84", "381 167 393 511", "318 191 325 599", "36 94 347 550", "159 474 237 496", "263 580 389 595", "270 65 297 479", "196 413 229 451", "154 475 277 495", "94 418 223 575", "197 431 359 468", "166 523 304 538", "339 162 353 236", "243 288 376 288", "283 391 367 445", "139 561 327 564", "36 198 388 301", "7 195 382 504", "313 423 375 458", "67 139 320 282", "197 150 300 535", "90 282 136 316", "391 470 399 583", "349 449 364 573", "31 40 104 484"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {900, 31214};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> rectangles = {"68 16 298 366", "147 55 238 140", "313 88 315 252", "26 451 213 467", "255 138 257 245", "267 50 358 592"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {115911};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> rectangles = {"34 70 278 250", "125 10 276 520", "209 243 325 283", "57 31 140 391", "56 14 220 524", "268 118 397 458", "290 42 351 462", "152 557 174 586", "269 15 375 537", "197 267 311 532", "137 269 284 558", "299 10 347 121", "247 421 249 435", "68 3 116 302", "378 517 380 538", "190 432 342 482", "297 282 303 315", "119 58 222 231", "362 204 382 292", "207 321 278 411", "168 183 260 305", "73 378 237 435", "126 158 361 414", "217 392 344 491", "186 480 374 514", "198 381 305 389", "346 525 351 579", "185 463 190 586", "273 184 333 460", "188 133 288 237", "18 155 210 228", "156 505 346 542", "131 215 276 225", "343 198 381 358", "140 451 304 552", "318 409 318 441", "341 434 353 504", "99 162 206 342", "251 360 371 573", "220 265 376 364"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51748};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> rectangles = {"35 237 382 439", "35 142 151 374", "291 362 310 596", "388 481 393 530", "115 387 296 426", "123 538 203 577", "312 561 320 561", "131 41 288 288", "367 514 382 596", "382 373 384 461", "352 216 363 336", "138 499 212 572", "399 184 399 197", "94 312 126 399", "183 407 302 525", "139 481 184 574", "31 127 215 169", "12 393 221 408", "55 400 342 476"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100375};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> rectangles = {"251 149 384 540", "46 104 322 245", "84 197 379 403", "313 119 329 384", "202 386 325 588", "240 80 346 545", "103 248 186 419", "220 85 343 433", "277 430 321 465", "251 198 382 221", "131 490 324 504", "282 107 328 484", "318 216 396 389", "121 545 298 569", "392 193 392 316", "155 57 305 194", "325 69 399 194", "290 502 333 594", "8 123 212 303", "327 173 345 543", "346 30 370 436", "207 404 337 524", "371 431 388 597"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {147, 82812};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> rectangles = {"269 193 383 418", "119 212 170 588", "178 305 344 382", "244 424 398 490", "128 377 276 512", "288 229 396 315", "302 529 370 587", "255 240 373 443", "348 464 363 589", "111 109 231 165", "182 425 313 515", "391 373 399 436", "145 369 174 428", "10 191 216 442", "90 246 323 315", "99 546 138 555", "347 529 360 534"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {113034};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> rectangles = {"257 303 320 304", "204 486 342 537", "285 190 285 449", "221 444 277 520", "38 421 386 556", "105 535 287 584", "170 339 362 592", "9 522 123 540", "188 99 214 453", "375 215 375 495", "94 297 157 398"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {153902};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> rectangles = {"165 544 252 558", "140 401 275 473", "257 333 285 459", "348 489 393 537", "56 310 146 410", "242 388 328 442", "192 311 380 355", "60 34 249 530", "172 567 366 574", "160 272 199 279", "279 528 361 532", "285 91 358 279", "37 292 231 491", "351 93 352 123", "231 585 330 590", "74 398 319 592", "309 382 365 573", "300 532 390 566", "115 379 383 425", "268 362 273 485", "142 564 377 571", "159 428 249 558", "366 446 389 479", "239 241 243 381", "148 472 339 499", "388 392 388 451", "186 339 276 583", "45 163 217 401", "263 530 300 566", "277 86 332 525", "394 82 399 448", "320 464 397 561", "284 243 383 428", "125 400 229 453", "289 340 328 509", "3 376 142 493", "117 410 214 459", "149 454 207 573", "80 89 151 550", "384 469 387 562", "227 457 246 462", "250 456 345 501", "266 474 358 555", "178 343 350 343"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {63959};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> rectangles = {"79 225 167 524", "352 555 360 556", "295 315 313 331", "159 35 314 521", "255 338 347 579", "77 549 194 563", "112 528 203 583", "196 81 214 547", "391 541 391 545", "80 593 247 594", "383 399 399 536", "271 11 271 277", "72 57 308 171", "338 69 354 378", "163 183 171 554", "89 209 271 325", "116 334 270 399", "362 32 379 356", "302 214 305 361", "395 153 399 329", "266 393 290 523", "115 88 383 440", "335 467 397 527", "172 273 200 569"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {910, 80682};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> rectangles = {"0 292 399 307"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {116800, 116800};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> rectangles = {"48 192 351 207", "48 392 351 407", "120 52 135 547", "260 52 275 547"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22816, 192608};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> rectangles = {"0 192 399 207", "0 392 399 407", "120 0 135 599", "260 0 275 599"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22080, 22816, 22816, 23040, 23040, 23808, 23808, 23808, 23808};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> rectangles = {"50 300 199 300", "201 300 350 300", "200 50 200 299", "200 301 200 550"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 239199};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> rectangles = {"0 20 399 20", "0 44 399 44", "0 68 399 68", "0 92 399 92", "0 116 399 116", "0 140 399 140", "0 164 399 164", "0 188 399 188", "0 212 399 212", "0 236 399 236", "0 260 399 260", "0 284 399 284", "0 308 399 308", "0 332 399 332", "0 356 399 356", "0 380 399 380", "0 404 399 404", "0 428 399 428", "0 452 399 452", "0 476 399 476", "0 500 399 500", "0 524 399 524", "0 548 399 548", "0 572 399 572", "0 596 399 596", "5 0 5 599", "21 0 21 599", "37 0 37 599", "53 0 53 599", "69 0 69 599", "85 0 85 599", "101 0 101 599", "117 0 117 599", "133 0 133 599", "149 0 149 599", "165 0 165 599", "181 0 181 599", "197 0 197 599", "213 0 213 599", "229 0 229 599", "245 0 245 599", "261 0 261 599", "277 0 277 599", "293 0 293 599", "309 0 309 599", "325 0 325 599", "341 0 341 599", "357 0 357 599", "373 0 373 599", "389 0 389 599"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 30, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 100, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 200, 230, 230, 230, 230, 230, 230, 230, 230, 230, 230, 230, 230, 230, 230, 230, 230, 230, 230, 230, 230, 230, 230, 230, 230, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345, 345};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> rectangles = {"7 335 317 458", "393 440 395 556", "360 10 393 129", "261 3 364 164", "352 1 390 506", "398 319 399 396", "390 101 393 106", "373 533 396 593", "225 93 325 169", "203 542 362 591", "109 144 279 487", "147 96 243 303", "359 423 389 507", "276 328 334 444", "332 229 335 457", "309 446 356 460", "46 304 55 595", "31 270 299 595", "206 279 234 573"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 11838, 65213};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> rectangles = {"0 0 0 0"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {239999};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> rectangles = {"1 1 1 1"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {239999};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> rectangles = {"0 0 399 599"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> rectangles = {"1 0 3 5", "1 7 3 8", "1 8 2 9", "1 9 3 10", "0 10 399 599", "5 0 399 599"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> rectangles = {"0 1 1 2"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {239996};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> rectangles = {"200 300 200 300"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {239999};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> rectangles = {"399 599 399 599"};
    grafixMask* pObj = new grafixMask();
    clock_t start = clock();
    vector<int> result = pObj->sortedAreas(rectangles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {239999};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=269554&rd=5857&pm=2998
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <map> 
#include <set> 
#include <sstream> 
 
using namespace std; 
 
int pic[400][600]; 
int q[400*600],head,tail; 
 
void add(int x, int y) 
{ 
  if (x<0 || y<0 || x>=600 || y>=400) return; 
  if (pic[y][x]==1) return; 
  pic[y][x]=1; 
  q[tail++]=y*1000+x; 
} 
 
class grafixMask { 
  public: 
  vector <int> sortedAreas(vector <string> rectangles) { 
    for(int y=0;y<400;y++) 
      for(int x=0;x<600;x++) 
        pic[y][x]=0; 
    for(int i=0;i<rectangles.size();i++) { 
      istringstream ss(rectangles[i]); 
      int x1,y1,x2,y2; 
      ss >> y1 >> x1 >> y2 >> x2; 
      for(int y=y1;y<=y2;y++) 
        for(int x=x1;x<=x2;x++) 
          pic[y][x]=1; 
    } 
    vector<int> hole; 
     
    for(int y=0;y<400;y++) 
      for(int x=0;x<600;x++) 
        if (pic[y][x]==0) { 
          head=tail=0; 
          add(x,y); 
          while (head<tail) { 
            int cx=q[head]%1000,cy=q[head]/1000; 
            head++; 
            add(cx+1,cy); 
            add(cx-1,cy); 
            add(cx,cy+1); 
            add(cx,cy-1); 
          } 
          hole.push_back(tail); 
        } 
           
     
    sort(hole.begin(),hole.end()); 
    return hole;     
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/