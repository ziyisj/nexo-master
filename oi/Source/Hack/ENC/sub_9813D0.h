#pragma once

#include <Hack/FuckEnc.h>
#include <Hack/ENC/Calls.h>
#include <IDA/ida_defs.h>

void __fastcall sub_9813D0(__int64 a1, unsigned int* a2, unsigned int a3, int a4)
{
    int v8;            // r14d
    __int64 v9;        // r9
    __int64 v10;       // rcx
    __int64 v11;       // rcx
    __int64 v12;       // rax
    __int64 v13;       // rcx
    int v14;           // r9d
    __int64 v15;       // rdx
    __int64 v16;       // rdx
    __int64 v17;       // rax
    __int64 v18;       // rcx
    __int64 v19;       // rdx
    __int64 v20;       // rcx
    __int64 v21;       // rdx
    __int64 v22;       // rdx
    __int64 v23;       // rdx
    __int64 v24;       // rdx
    __int64 v25;       // rax
    __int64 v26;       // rax
    __int64 v27;       // rcx
    __int64 v28;       // rax
    __int64 v29;       // rax
    __int64 v30;       // rax
    __int64 v31;       // rdx
    __int64 v32;       // rdx
    __int64 v33;       // rcx
    __int64 v34;       // rcx
    __int64 v35;       // r8
    __int64 v36;       // rcx
    __int64 v37;       // rcx
    __int64 v38;       // rdx
    __int64 v39;       // rcx
    __int64 v40;       // r8
    __int64 v41;       // rcx
    __int64 v42;       // rdx
    __int64 v43;       // r8
    __int64 v44;       // rax
    __int64 v45;       // r8
    __int64 v46;       // rax
    __int64 v47;       // rdx
    __int64 v48;       // rdx
    __int64 v49;       // rdx
    __int64 v50;       // rax
    __int64 v51;       // rax
    __int64 v52;       // rcx
    __int64 v53;       // rdx
    __int64 v54;       // r8
    __int64 v55;       // rcx
    __int64 v56;       // rdx
    __int64 v57;       // rdx
    __int64 v58;       // rcx
    __int64 v59;       // r8
    __int64 v60;       // rcx
    __int64 v61;       // rdx
    __int64 v62;       // rcx
    __int64 v63;       // rdx
    __int64 v64;       // rcx
    __int64 v65;       // rdx
    __int64 v66;       // rcx
    __int64 v67;       // rdx
    __int64 v68;       // rcx
    __int64 v69;       // rdx
    __int64 v70;       // rax
    __int64 v71;       // rcx
    __int64 v72;       // rax
    __int64 v73;       // rdx
    __int64 v74;       // rax
    __int64 v75;       // rdx
    __int64 v76;       // rcx
    __int64 v77;       // rdx
    __int64 v78;       // rdx
    __int64 v79;       // rdx
    __int64 v80;       // rdx
    __int64 v81;       // rdx
    __int64 v82;       // rax
    __int64 v83;       // rdx
    __int64 v84;       // rdx
    __int64 v85;       // rcx
    __int64 v86;       // rax
    __int64 v87;       // rdx
    __int64 v88;       // rcx
    __int64 v89;       // rcx
    __int64 v90;       // rcx
    __int64 v91;       // rcx
    __int64 v92;       // rcx
    __int64 v93;       // rax
    __int64 v94;       // rdx
    __int64 v95;       // rdx
    __int64 v96;       // rcx
    __int64 v97;       // rdx
    __int64 v98;       // rdx
    __int64 v99;       // rdx
    __int64 v100;      // rax
    __int64 v101;      // rdx
    __int64 v102;      // r8
    __int64 v103;      // rdx
    __int64 v104;      // rcx
    __int64 v105;      // rax
    __int64 v106;      // rdx
    __int64 v107;      // r8
    __int64 v108;      // rax
    __int64 v109;      // rdx
    __int64 v110;      // r8
    __int64 v111;      // rcx
    __int64 v112;      // rax
    __int64 v113;      // rdx
    __int64 v114;      // rdx
    __int64 v115;      // rdx
    __int64 v116;      // rdx
    __int64 v117;      // rcx
    __int64 v118;      // r8
    __int64 v119;      // rdx
    __int64 v120;      // rax
    __int64 v121;      // rcx
    unsigned int v122; // edx
    __int64 v123;      // rax
    __int64 v124;      // rdx
    __int64 v125;      // rdx
    __int64 v126;      // rcx
    __int64 v127;      // rcx
    __int64 v128;      // rcx
    __int64 v129;      // rdx
    __int64 v130;      // rdx
    __int64 v131;      // rcx
    __int64 v132;      // rax
    __int64 v133;      // r8
    __int64 v134;      // rdx
    __int64 v135;      // rdx
    __int64 v136;      // rax
    __int64 v137;      // rcx
    __int64 v138;      // rax
    __int64 v139;      // rcx
    __int64 v140;      // rcx
    __int64 v141;      // rdx
    __int64 v142;      // rcx
    __int64 v143;      // rdx
    __int64 v144;      // rdx
    __int64 v145;      // rdx
    __int64 v146;      // rcx
    __int64 v147;      // rcx
    __int64 v148;      // rdx
    __int64 v149;      // rdx
    __int64 v150;      // rdx
    unsigned int v151; // edx
    __int64 v152;      // rax
    __int64 v153;      // rdx
    __int64 v154;      // rdx
    __int64 v155;      // rdx
    __int64 v156;      // rcx
    __int64 v157;      // r8
    __int64 v158;      // r8
    __int64 v159;      // rdx
    __int64 v160;      // rcx
    __int64 v161;      // rax
    __int64 v162;      // r8
    __int64 v163;      // rax
    __int64 v164;      // rdx
    __int64 v165;      // r8
    __int64 v166;      // rcx
    __int64 v167;      // rdx
    __int64 v168;      // rdx
    __int64 v169;      // rdx
    __int64 v170;      // rdx
    __int64 v171;      // rdx
    __int64 v172;      // rcx
    __int64 v173;      // rcx
    __int64 v174;      // rdx
    __int64 v175;      // rdx
    __int64 v176;      // rdx
    __int64 v177;      // rcx
    __int64 v178;      // rcx
    __int64 v179;      // r8
    __int64 v180;      // r8
    __int64 v181;      // rdx
    __int64 v182;      // rdx
    __int64 v183;      // rax
    __int64 v184;      // rcx
    __int64 v185;      // rcx
    __int64 v186;      // rcx
    __int64 v187;      // rdx
    __int64 v188;      // rdx
    __int64 v189;      // rcx
    __int64 v190;      // rcx
    __int64 v191;      // rax
    __int64 v192;      // rdx
    __int64 v193;      // r8
    __int64 v194;      // rdx
    __int64 v195;      // rdx
    __int64 v196;      // rcx
    __int64 v197;      // rdx
    __int64 v198;      // rdx
    __int64 v199;      // rax
    __int64 v200;      // rcx
    __int64 v201;      // rdx
    __int64 v202;      // rdx
    __int64 v203;      // rcx
    __int64 v204;      // rdx
    __int64 v205;      // rcx
    __int64 v206;      // rdx
    __int64 v207;      // r8
    __int64 v208;      // rcx
    __int64 v209;      // rax
    __int64 v210;      // rcx
    __int64 v211;      // rax
    __int64 v212;      // rcx
    __int64 v213;      // rax
    __int64 v214;      // rdx
    __int64 v215;      // r8
    unsigned int v216; // eax
    __int64 v217;      // r8
    __int64 v218;      // rdx
    __int64 v219;      // rdx
    __int64 v220;      // r8
    __int64 v221;      // rdx
    __int64 v222;      // rdx
    __int64 v223;      // rdx
    __int64 v224;      // rdx
    __int64 v225;      // rax
    __int64 v226;      // rdx
    __int64 v227;      // rdx
    __int64 v228;      // rdx
    __int64 v229;      // rax
    __int64 v230;      // rdx
    __int64 v231;      // rdx
    __int64 v232;      // rax
    __int64 v233;      // rax
    __int64 v234;      // r8
    __int64 v235;      // rdx
    __int64 v236;      // rdx
    __int64 v237;      // rax
    __int64 v238;      // rdx
    __int64 v239;      // rdx
    __int64 v240;      // rax
    __int64 v241;      // rax
    __int64 v242;      // rcx
    __int64 v243;      // rax
    __int64 v244;      // rdx
    __int64 v245;      // rcx
    __int64 v246;      // rax
    __int64 v247;      // rcx
    __int64 v248;      // rdx
    __int64 v249;      // rcx
    __int64 v250;      // rdx
    __int64 v251;      // rdx
    __int64 v252;      // rcx
    __int64 v253;      // rdx
    __int64 v254;      // rax
    __int64 v255;      // rcx
    __int64 v256;      // r8
    __int64 v257;      // rcx
    __int64 v258;      // rdx
    __int64 v259;      // rdx
    __int64 v260;      // r8
    unsigned int v261; // ecx
    __int64 v262;      // rax
    __int64 v263;      // rcx
    __int64 v264;      // rax
    __int64 v265;      // rdx
    __int64 v266;      // rcx
    __int64 v267;      // rax
    __int64 v268;      // rdx
    __int64 v269;      // rdx
    __int64 v270;      // r8
    __int64 v271;      // rdx
    __int64 v272;      // rdx
    __int64 v273;      // rdx
    __int64 v274;      // rcx
    __int64 v275;      // rcx
    __int64 v276;      // rdx
    __int64 v277;      // rax
    __int64 v278;      // r8
    __int64 v279;      // rax
    __int64 v280;      // r8
    __int64 v281;      // rdx
    __int64 v282;      // rax
    __int64 v283;      // rax
    __int64 v284;      // rcx
    __int64 v285;      // rcx
    __int64 v286;      // r8
    __int64 v287;      // rdx
    __int64 v288;      // rdx
    __int64 v289;      // rdx
    __int64 v290;      // rcx
    __int64 v291;      // rdx
    __int64 v292;      // rax
    __int64 v293;      // rax
    __int64 v294;      // rdx
    __int64 v295;      // rcx
    __int64 v296;      // rax
    __int64 v297;      // rax
    __int64 v298;      // rcx
    __int64 v299;      // rax
    __int64 v300;      // rdx
    __int64 v301;      // rcx
    __int64 v302;      // r8
    __int64 v303;      // rcx
    __int64 v304;      // rdx
    __int64 v305;      // rcx
    __int64 v306;      // rcx
    __int64 v307;      // rcx
    __int64 v308;      // rdx
    __int64 v309;      // rax
    __int64 v310;      // rcx
    __int64 v311;      // rax
    __int64 v312;      // rcx
    __int64 v313;      // rdx
    __int64 v314;      // r8
    __int64 v315;      // rdx
    __int64 v316;      // rdx
    __int64 v317;      // rcx
    __int64 v318;      // rcx
    __int64 v319;      // r8
    __int64 v320;      // rdx
    __int64 v321;      // rax
    __int64 v322;      // rdx
    __int64 v323;      // rax
    __int64 v324;      // rax
    unsigned int v325; // r9d
    __int64 v326;      // rax
    __int64 v327;      // rdx
    __int64 v328;      // rdx
    __int64 v329;      // rax
    __int64 v330;      // rcx
    __int64 v331;      // rdx
    __int64 v332;      // rcx
    __int64 v333;      // rdx
    __int64 v334;      // rcx
    __int64 v335;      // rdx
    __int64 v336;      // rcx
    __int64 v337;      // r8
    __int64 v338;      // rax
    __int64 v339;      // rdx
    __int64 v340;      // r8
    __int64 v341;      // rdx
    __int64 v342;      // rax
    __int64 v343;      // rdx
    __int64 v344;      // rcx
    __int64 v345;      // rdx
    __int64 v346;      // rax
    __int64 v347;      // rax
    __int64 v348;      // rdx
    __int64 v349;      // rcx
    __int64 v350;      // rcx
    __int64 v351;      // r8
    __int64 v352;      // rdx
    __int64 v353;      // r8
    __int64 v354;      // rax
    __int64 v355;      // rdx
    __int64 v356;      // rdx
    __int64 v357;      // rcx
    __int64 v358;      // rdx
    __int64 v359;      // rcx
    __int64 v360;      // rdx
    __int64 v361;      // rdx
    __int64 v362;      // rax
    __int64 v363;      // rdx
    __int64 v364;      // rcx
    __int64 v365;      // rcx
    __int64 v366;      // rax
    __int64 v367;      // rdx
    __int64 v368;      // rax
    __int64 v369;      // rdx
    __int64 v370;      // rdx
    __int64 v371;      // rcx
    __int64 v372;      // rdx
    __int64 v373;      // r8
    __int64 v374;      // rdx
    __int64 v375;      // rcx
    __int64 v376;      // rdx
    __int64 v377;      // rax
    __int64 v378;      // rcx
    __int64 v379;      // r8
    __int64 v380;      // rcx
    __int64 v381;      // r8
    __int64 v382;      // r8
    __int64 v383;      // rcx
    __int64 v384;      // rdx
    __int64 v385;      // rdx
    __int64 v386;      // r8
    __int64 v387;      // rdx
    __int64 v388;      // rax
    __int64 v389;      // rdx
    __int64 v390;      // rdx
    __int64 v391;      // rdx
    __int64 v392;      // rcx
    __int64 v393;      // rcx
    __int64 v394;      // rcx
    __int64 v395;      // rcx
    __int64 v396;      // rcx
    __int64 v397;      // rcx
    __int64 v398;      // rax
    __int64 v399;      // rax
    __int64 v400;      // rdx
    __int64 v401;      // rdx
    __int64 v402;      // r8
    __int64 v403;      // rdx
    __int64 v404;      // rdx
    __int64 v405;      // rdx
    __int64 v406;      // rdx
    __int64 v407;      // rdx
    __int64 v408;      // rdx
    __int64 v409;      // rdx
    __int64 v410;      // rdx
    __int64 v411;      // rdx
    __int64 v412;      // rdx
    __int64 v413;      // rax
    __int64 v414;      // rax
    __int64 v415;      // rdx
    __int64 v416;      // rdx
    __int64 v417;      // rdx
    __int64 v418;      // rcx
    __int64 v419;      // rdx
    __int64 v420;      // r8
    __int64 v421;      // rax
    __int64 v422;      // rdx
    __int64 v423;      // rdx
    __int64 v424;      // rax
    __int64 v425;      // rax
    __int64 v426;      // rax
    __int64 v427;      // rdx
    __int64 v428;      // r8
    __int64 v429;      // rdx
    __int64 v430;      // rcx
    __int64 v431;      // rcx
    __int64 v432;      // rcx
    __int64 v433;      // rcx
    __int64 v434;      // rcx
    __int64 v435;      // rdx
    __int64 v436;      // r8
    __int64 v437;      // rdx
    __int64 v438;      // rcx
    __int64 v439;      // rax
    __int64 v440;      // rdx
    __int64 v441;      // rdx
    __int64 v442;      // rax
    __int64 v443;      // rax
    __int64 v444;      // rcx
    __int64 v445;      // rax
    __int64 v446;      // rdx
    __int64 v447;      // rdx
    __int64 v448;      // r8
    __int64 v449;      // rax
    __int64 v450;      // rax
    __int64 v451;      // rax
    __int64 v452;      // rcx
    __int64 v453;      // rcx
    __int64 v454;      // rax
    __int64 v455;      // rax
    __int64 v456;      // rax
    __int64 v457;      // rdx
    __int64 v458;      // r8
    __int64 v459;      // rax
    __int64 v460;      // rcx
    __int64 v461;      // rdx
    __int64 v462;      // rdx
    __int64 v463;      // rcx
    __int64 v464;      // rax
    __int64 v465;      // r8
    __int64 v466;      // rdx
    __int64 v467;      // rcx
    __int64 v468;      // r8
    __int64 v469;      // rdx
    __int64 v470;      // rdx
    __int64 v471;      // rax
    __int64 v472;      // rax
    __int64 v473;      // r8
    __int64 v474;      // rax
    __int64 v475;      // rax
    __int64 v476;      // rdx
    __int64 v477;      // rdx
    __int64 v478;      // rdx
    __int64 v479;      // rcx
    __int64 v480;      // rdx
    __int64 v481;      // rax
    __int64 v482;      // rcx
    __int64 v483;      // rdx
    __int64 v484;      // rcx
    __int64 v485;      // rax
    __int64 v486;      // rdx
    __int64 v487;      // rdx
    __int64 v488;      // rdx
    __int64 v489;      // rdx
    __int64 v490;      // rdx
    __int64 v491;      // rcx
    __int64 v492;      // rcx
    __int64 v493;      // rdx
    __int64 v494;      // r8
    __int64 v495;      // rax
    __int64 v496;      // rax
    __int64 v497;      // r8
    __int64 v498;      // rdx
    __int64 v499;      // rcx
    __int64 v500;      // rdx
    __int64 v501;      // r8
    __int64 v502;      // r8
    __int64 v503;      // rax
    __int64 v504;      // rcx
    __int64 v505;      // rdx
    __int64 v506;      // rax
    __int64 v507;      // rdx
    __int64 v508;      // rax
    __int64 v509;      // rdx
    __int64 v510;      // rdx
    __int64 v511;      // rcx
    __int64 v512;      // rax
    __int64 v513;      // r8
    __int64 v514;      // rcx
    __int64 v515;      // rax
    __int64 v516;      // r8
    __int64 v517;      // r8
    __int64 v518;      // rcx
    __int64 v519;      // rdx
    __int64 v520;      // rcx
    __int64 v521;      // rcx
    __int64 v522;      // rdx
    __int64 v523;      // rcx
    __int64 v524;      // rax
    __int64 v525;      // rdx
    __int64 v526;      // rdx
    __int64 v527;      // rdx
    __int64 v528;      // rax
    __int64 v529;      // rcx
    __int64 v530;      // rdx
    __int64 v531;      // rcx
    __int64 v532;      // rax
    __int64 v533;      // r8
    __int64 v534;      // rdx
    __int64 v535;      // rdx
    __int64 v536;      // rcx
    __int64 v537;      // rcx
    __int64 v538;      // r8
    __int64 v539;      // rdx
    __int64 v540;      // rdx
    __int64 v541;      // rcx
    __int64 v542;      // rdx
    __int64 v543;      // rdx
    __int64 v544;      // rdx
    __int64 v545;      // rcx
    __int64 v546;      // rax
    __int64 v547;      // rdx
    __int64 v548;      // r8
    __int64 v549;      // rdx
    __int64 v550;      // rcx
    __int64 v551;      // rcx
    __int64 v552;      // rax
    __int64 v553;      // rcx
    __int64 v554;      // rdx
    __int64 v555;      // rdx
    __int64 v556;      // rdx
    __int64 v557;      // r8
    __int64 v558;      // rdx
    __int64 v559;      // rax
    __int64 v560;      // rdx
    __int64 v561;      // rax
    __int64 v562;      // rcx
    __int64 v563;      // rcx
    __int64 v564;      // rax
    __int64 v565;      // rax
    __int64 v566;      // rdx
    __int64 v567;      // rdx
    __int64 v568;      // rdx
    __int64 v569;      // rdx
    __int64 v570;      // rdx
    __int64 v571;      // r8
    __int64 v572;      // rdx
    __int64 v573;      // rcx
    __int64 v574;      // rdx
    __int64 v575;      // rcx
    __int64 v576;      // rax
    __int64 v577;      // rcx
    __int64 v578;      // rdx
    __int64 v579;      // rax
    __int64 v580;      // rdx
    __int64 v581;      // r8
    __int64 v582;      // rdx
    __int64 v583;      // rdx
    __int64 v584;      // rcx
    __int64 v585;      // rax
    __int64 v586;      // r8
    __int64 v587;      // rax
    __int64 v588;      // rdx
    __int64 v589;      // rax
    __int64 v590;      // rcx
    __int64 v591;      // rcx
    __int64 v592;      // rdx
    __int64 v593;      // rax
    __int64 v594;      // rdx
    __int64 v595;      // rdx
    __int64 v596;      // rax
    __int64 v597;      // rdx
    __int64 v598;      // rdx
    __int64 v599;      // rax
    __int64 v600;      // rdx
    __int64 v601;      // rax
    __int64 v602;      // rdx
    __int64 v603;      // rdx
    __int64 v604;      // rdx
    __int64 v605;      // rax
    __int64 v606;      // rdx
    __int64 v607;      // rcx
    __int64 v608;      // rdx
    __int64 v609;      // rcx
    __int64 v610;      // rdx
    __int64 v611;      // rcx
    __int64 v612;      // rcx
    __int64 v613;      // rdx
    __int64 v614;      // rax
    __int64 v615;      // rdx
    __int64 v616;      // rdx
    __int64 v617;      // rcx
    __int64 v618;      // rdx
    __int64 v619;      // rdx
    __int64 v620;      // r8
    __int64 v621;      // rax
    __int64 v622;      // rdx
    __int64 v623;      // r8
    __int64 v624;      // rdx
    __int64 v625;      // rdx
    __int64 v626;      // rcx
    __int64 v627;      // rax
    __int64 v628;      // rdx
    __int64 v629;      // rdx
    __int64 v630;      // rdx
    __int64 v631;      // rdx
    __int64 v632;      // rcx
    __int64 v633;      // rax
    unsigned int v634; // [rsp+18h] [rbp+18h] BYREF

    if (a3 > 3)
    {
        v8 = 0;
        while (2)
        {
            v9 = *a2;
            v634 = *a2;
            switch (((unsigned __int16)(v8 + a4) ^ 0x136) & 0x3FF)
            {
            case 0:
                v634 = (unsigned int)0xC04BE5F + v9 + 1;
                v10 = a1;
                v634 ^= 2 * ~(-871549976 * FuckEnc::CacheRead<_DWORD>(a1 + 288));
                v634 ^= FuckEnc::CacheRead<_DWORD>(v10 + 96);
                goto LABEL_1037;
            case 1:
                v634 = v9 + 1657316516;
                v634 = (v9 + 1657316516) ^ FuckEnc::CacheRead<_DWORD>(a1 + 184) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 72i64) + 344i64) + 880i64);
                goto LABEL_1037;
            case 2:
                v634 = (((v9 - 643344285) ^ 0x17D17E65) - 1869552440) ^ 0x1D562B32;
                v634 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 24i64) ^ v634) + 1675978702;
                goto LABEL_1037;
            case 3:
                v634 = v9 + 1998784089;
                v634 = v9 + 1998784089 + 1118711773 * FuckEnc::CacheRead<_DWORD>(a1 + 416) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 824) + 688i64);
                goto LABEL_1037;
            case 4:
                v11 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 632) ^ v9;
                v634 -= 1060090943 * FuckEnc::CacheRead<_DWORD>(v11 + 832);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v11 + 696) + 864i64);
                goto LABEL_1037;
            case 5:
                v12 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 520) ^ v9;
                v634 = v634 - FuckEnc::CacheRead<_DWORD>(v12 + 920) - 698394529;
                v634 -= FuckEnc::CacheRead<_DWORD>(v12 + 488);
                v634 += FuckEnc::CacheRead<_DWORD>(v12 + 368);
                goto LABEL_1037;
            case 6:
                v13 = a1;
                v634 = ~(v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 864i64) - FuckEnc::CacheRead<_DWORD>(a1 + 136));
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v13 + 448) + 136i64);
                goto LABEL_1036;
            case 7:
                v15 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 680i64) + 792i64) ^ v9;
                v634 -= FuckEnc::CacheRead<_DWORD>(v15 + 832);
                v634 += FuckEnc::CacheRead<_DWORD>(v15 + 24);
                goto LABEL_1037;
            case 8:
                v16 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 864) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 552) + 576i64) + 784i64) + 648i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v16 + 648);
                goto LABEL_1037;
            case 9:
                v17 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 184) ^ v9;
                LODWORD(v9) = FuckEnc::CacheRead<_DWORD>(v17 + 792) ^ v634;
                v634 = v9;
                v18 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v17 + 824) + 112i64);
                goto LABEL_1035;
            case 0xA:
                v14 = (v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 696i64) + 552i64) + 72i64) + 576i64) + 232i64) + 416i64)) ^ 0x1C1B8BE0;
                goto LABEL_1036;
            case 0xB:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 80i64) + 96i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 112i64) + 416i64));
                goto LABEL_1037;
            case 0xC:
                v19 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 648i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v19 + 808) + 496i64, &v634, a1);
                goto LABEL_1037;
            case 0xD:
                v20 = a1;
                v634 = (v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 96) - ((_DWORD)0xC04A98A + 1))) + 1200553887;
                v634 = (v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v20 + 768) + 416i64)) ^ 0x9E992A5A;
                goto LABEL_1037;
            case 0xE:
                v21 = a1;
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 488) ^ 0x32130182);
                v634 -= (unsigned int)~FuckEnc::CacheRead<_DWORD>(v21 + 920) >> 25;
                v634 -= FuckEnc::CacheRead<_DWORD>(v21 + 456);
                goto LABEL_1037;
            case 0xF:
                v22 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 864) ^ v9;
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v22 + 768) + 776i64) + 912i64) + 832i64);
                v14 = FuckEnc::CacheRead<_DWORD>(v22 + 288) ^ v634;
                goto LABEL_1036;
            case 0x10:
                v23 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 88i64) + 544i64) + 224i64);
                v634 ^= 1228403237 * FuckEnc::CacheRead<_DWORD>(v23 + 720);
                goto LABEL_1037;
            case 0x11:
                v24 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 520) ^ v9;
                v634 += FuckEnc::CacheRead<_DWORD>(v24 + 488) - 2101227437;
                v634 ^= FuckEnc::CacheRead<_DWORD>(v24 + 456);
                goto LABEL_1037;
            case 0x12:
                v25 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 80i64) + 776i64) + 536i64) + 464i64) + 304i64);
                goto LABEL_23;
            case 0x13:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 400i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 768i64) + 128i64) + 552i64) + 416i64);
                goto LABEL_1036;
            case 0x14:
                v26 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 920) - 240848314;
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v26 + 536) + 80i64) + 536i64) + 416i64);
                goto LABEL_1037;
            case 0x15:
                v27 = a1;
                v634 = v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 224i64) & 0xFFFFFFEA ^ 0xD30E0A34;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v27 + 592) + 232i64) + 792i64);
                goto LABEL_1037;
            case 0x16:
                v28 = a1;
                v634 = (FuckEnc::CacheRead<_DWORD>(a1 + 864) ^ v9) - 1926805625;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v28 + 72) + 552i64) + 24i64) + 35012447;
                goto LABEL_1037;
            case 0x17:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 536i64) + 344i64) + 216i64) + 360i64) + 312i64) + 224i64) ^ v9;
                goto LABEL_1036;
            case 0x18:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 680i64) + 808i64) + 88i64) + 112i64) + 576i64) + 88i64) + 752i64);
                goto LABEL_1036;
            case 0x19:
                v634 = (v9 - 1228243140) ^ 0x5149D9E6;
                v29 = a1;
                v634 -= FuckEnc::CacheRead<_DWORD>(a1 + 600);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v29 + 88) + 456i64);
                goto LABEL_1037;
            case 0x1A:
                v634 = (v9 ^ 0x66F762AE) - 933254444;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(a1 + 784) + 480i64, &v634, a1);
                goto LABEL_1037;
            case 0x1B:
                v30 = a1;
                v634 = v9 ^ FuckEnc::CacheRead<_DWORD>(a1 + 24) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 456) >> 27);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(v30 + 216) + 648i64);
                goto LABEL_1037;
            case 0x1C:
                v31 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 552i64) + 920i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v31) + 544i64) + 328i64);
                goto LABEL_1037;
            case 0x1D:
                v32 = a1;
                v634 = (v9 - FuckEnc::CacheRead<_DWORD>(a1 + 256)) ^ 0xC41CEEB9;
                v634 += FuckEnc::CacheRead<_DWORD>(v32 + 688);
                v634 ^= ~FuckEnc::CacheRead<_DWORD>(v32 + 864);
                goto LABEL_1037;
            case 0x1E:
                v634 = (v9 ^ FuckEnc::CacheRead<_DWORD>(a1 + 520) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 216i64) + 464i64) + 920i64)) + 1063966354;
                goto LABEL_1037;
            case 0x1F:
                v33 = a1;
                v634 = (v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 576) + 24i64)) ^ 0x65DF694D;
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v33 + 360) + 312i64) + 80i64) + 752i64) ^ v634;
                goto LABEL_1036;
            case 0x20:
                v634 = v9 ^ 0x45C7CFF6;
                v34 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 824) + 136i64) ^ v9 ^ 0x45C7CFF6;
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v34) + 912i64) + 488i64) ^ v634;
                goto LABEL_1036;
            case 0x21:
                v35 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 576i64) + 696i64) + 488i64);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v35 + 312) + 88i64) + 184i64);
                goto LABEL_1037;
            case 0x22:
                v634 = (unsigned int)0x101B7442 + v9;
                Calls::FastCall(a1 + 568, &v634, a1);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 96i64);
                goto LABEL_1037;
            case 0x23:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 80i64) + 80i64) + 320i64) + 576i64) + 168i64);
                goto LABEL_1036;
            case 0x24:
                v36 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 576) + 184i64);
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v36 + 464) + 680i64) + 776i64) + 344i64) + 96i64) ^ v634;
                goto LABEL_1036;
            case 0x25:
                v37 = a1;
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 224) ^ 0x446BE309);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v37 + 520);
                v634 -= 508522207 * FuckEnc::CacheRead<_DWORD>(v37 + 792);
                goto LABEL_1037;
            case 0x26:
                v14 = (unsigned int)0xE4AFF43 ^ (v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 792i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 552i64) + 752i64));
                goto LABEL_1036;
            case 0x27:
                v38 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 632) - 885869888;
                v634 ^= FuckEnc::CacheRead<_DWORD>(v38 + 880) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v38 + 112) + 216i64) + 880i64);
                goto LABEL_1037;
            case 0x28:
                v39 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 80) + 224i64) ^ v9;
                v14 = v634 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v39 + 72) + 696i64) + 456i64) ^ 0x24098B32);
                goto LABEL_1036;
            case 0x29:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 344i64) + 752i64) + (_DWORD)0x5E4D17A + 4 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 80i64) + 368i64));
                goto LABEL_1037;
            case 0x2A:
                v40 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 232i64) + 216i64) + 96i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v40 + 360) + 24i64) << 15;
                goto LABEL_1037;
            case 0x2B:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 224) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 328i64) * (FuckEnc::CacheRead<_DWORD>(a1 + 792) >> 9);
                goto LABEL_1036;
            case 0x2C:
                v634 = v9 ^ FuckEnc::CacheRead<_DWORD>(a1 + 24) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 648) - 974036495 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 784) + 96i64));
                goto LABEL_1037;
            case 0x2D:
                v41 = a1;
                v634 = v9 - ((unsigned int)0xEBEB450 ^ FuckEnc::CacheRead<_DWORD>(a1 + 416));
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v41 + 72) + 776i64) + 864i64) - 2046060567;
                goto LABEL_1036;
            case 0x2E:
                v634 = v9 ^ 0xF6CF8951;
                v42 = a1;
                v634 = (v9 ^ 0xF6CF8951) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 312i64) + 96i64);
                v634 += FuckEnc::CacheRead<_DWORD>(v42 + 96) + 1;
                goto LABEL_1037;
            case 0x2F:
                v634 = ~(_DWORD)v9;
                v634 = ~(_DWORD)v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 632) + 86078116 * ((FuckEnc::CacheRead<_DWORD>(a1 + 136) ^ 0x93A1B48C) + 1));
                goto LABEL_1037;
            case 0x30:
                v43 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 832i64);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v43 + 448) + 56i64) >> 27;
                v634 -= FuckEnc::CacheRead<_DWORD>(v43 + 224);
                goto LABEL_1037;
            case 0x31:
                Calls::FastCall(a1 + 272, &v634, a1);
                v44 = a1;
                v634 -= FuckEnc::CacheRead<_DWORD>(a1 + 488);
                v634 += FuckEnc::CacheRead<_DWORD>(v44 + 456);
                goto LABEL_1037;
            case 0x32:
                v45 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 864);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v45 + 784) + 360i64) + 576i64) + 488i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v45 + 96);
                goto LABEL_1037;
            case 0x33:
                v46 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 136) ^ v9 ^ 0x5E6F0BEA;
                v634 += (unsigned int)~FuckEnc::CacheRead<_DWORD>(v46 + 488) >> 6;
                goto LABEL_1037;
            case 0x34:
                v47 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 80) + 344i64) + 344i64) + 224i64) ^ v9;
                v634 += 588423844 * FuckEnc::CacheRead<_DWORD>(v47 + 648);
                goto LABEL_1037;
            case 0x35:
                v634 = v9 ^ 0x8277A034;
                v14 = ((v9 ^ 0x8277A034) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 544i64) + 680i64) + 680i64) + 920i64)) ^ 0x213AC64B;
                goto LABEL_1036;
            case 0x36:
                v634 = v9 + 1553351673;
                v48 = a1;
                v634 = v9 + 1553351673 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 88i64) + 832i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v48 + 360) + 600i64);
                goto LABEL_1037;
            case 0x37:
                v49 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 808i64) + 832i64) ^ v9;
                v634 ^= 1059524001 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v49 + 776) + 752i64) | 6);
                goto LABEL_1037;
            case 0x38:
                v50 = a1;
                v634 = (v9 + FuckEnc::CacheRead<_DWORD>(a1 + 560)) ^ 0xFEE8C450;
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v50 + 680) + 112i64) + 464i64) + 24i64) ^ 0xBF5403D6;
                goto LABEL_1037;
            case 0x39:
                v51 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 864) ^ v9;
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v51 + 112) + 576i64) + 72i64) + 448i64) + 80i64) + 880i64);
                goto LABEL_1036;
            case 0x3A:
                v52 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 560) ^ v9;
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v52 + 304) + 720i64) - FuckEnc::CacheRead<_DWORD>(v52 + 920) + 354884019;
                goto LABEL_1036;
            case 0x3B:
                v634 = v9 ^ 0x2408BE54;
                v53 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 544i64) + 752i64) ^ v9 ^ 0x2408BE54;
                v14 = FuckEnc::CacheRead<_DWORD>(v53 + 328) ^ v634 ^ 0xCCF213EF;
                goto LABEL_1036;
            case 0x3C:
                v54 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 632);
                v634 += ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v54 + 464) + 720i64) ^ 0x5B515C83);
                v634 += FuckEnc::CacheRead<_DWORD>(v54 + 632);
                goto LABEL_1037;
            case 0x3D:
                v55 = a1;
                v634 = v9 - 20447232 * FuckEnc::CacheRead<_DWORD>(a1 + 288);
                v634 = 1895653682 - FuckEnc::CacheRead<_DWORD>(v55 + 24) - v634;
                goto LABEL_1037;
            case 0x3E:
                v56 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 216) + 536i64) + 768i64) + 24i64);
                v14 = v634 - 351624892 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v56 + 536) + 168i64);
                goto LABEL_1036;
            case 0x3F:
                v57 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 576) + 696i64) + 448i64) + 552i64) + 456i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v57 + 256);
                goto LABEL_1037;
            case 0x40:
                v634 = ((unsigned int)0x5DB9D25 + 3) ^ v9;
                v634 = (((unsigned int)0x5DB9D25 + 3) ^ v9) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 784) + 776i64) + 456i64) - FuckEnc::CacheRead<_DWORD>(a1 + 368) + 1;
                goto LABEL_1037;
            case 0x41:
                v58 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 864) + 843897159;
                v634 ^= -735989244 * FuckEnc::CacheRead<_DWORD>(v58 + 136) * FuckEnc::CacheRead<_DWORD>(v58 + 168);
                goto LABEL_1037;
            case 0x42:
                v14 = ~(v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 784i64) + 784i64) + 72i64) + 448i64) + 776i64) + 184i64));
                goto LABEL_1036;
            case 0x43:
                v634 = v9 - 1360137055;
                v634 = (v9 - 1360137055) ^ (386207435 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 488i64) | 0x1F) - 51334063);
                goto LABEL_1037;
            case 0x44:
                v634 = v9 - 1628638547;
                v59 = a1;
                v634 = v9 - 1628638547 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 128) + 328i64);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v59 + 592) + 592i64) + 184i64);
                goto LABEL_1037;
            case 0x45:
                v634 = v9 + 558296481;
                v60 = a1;
                v634 = v9 + 558296481 - 1991320739 * FuckEnc::CacheRead<_DWORD>(a1 + 56);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v60 + 696) + 464i64) + 864i64);
                goto LABEL_1037;
            case 0x46:
                v14 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 696i64) + 600i64) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 328i64) + FuckEnc::CacheRead<_DWORD>(a1 + 256)));
                goto LABEL_1036;
            case 0x47:
                v61 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 184);
                v14 = v634 - (FuckEnc::CacheRead<_DWORD>(v61 + 136) ^ ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v61 + 304) + 96i64) ^ 0x790E0078) + 699190047));
                goto LABEL_1036;
            case 0x48:
                v62 = a1;
                v634 = (v9 + FuckEnc::CacheRead<_DWORD>(a1 + 416) - 1856190608) ^ 0x915383B2;
                v634 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v62 + 464) + 80i64) + 688i64);
                goto LABEL_1037;
            case 0x49:
                v63 = a1;
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 488) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 360i64) + 96i64));
                v634 -= FuckEnc::CacheRead<_DWORD>(v63 + 288);
                goto LABEL_1037;
            case 0x4A:
                v64 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 96i64) ^ v9;
                v634 ^= ~((FuckEnc::CacheRead<_DWORD>(v64 + 648) - 966513120) ^ 0xCE95094C);
                goto LABEL_1037;
            case 0x4B:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 112i64) + 344i64) + 312i64) + 112i64) + 80i64) + 168i64) ^ v9;
                goto LABEL_1036;
            case 0x4C:
                v65 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 88i64) + 184i64) ^ v9;
                v14 = (_DWORD)0x11EA136C + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v65 + 808) + 136i64) ^ v634);
                goto LABEL_1036;
            case 0x4D:
                v14 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 288) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 136i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 464i64) + 600i64));
                goto LABEL_1036;
            case 0x4E:
                v66 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 832);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v66 + 360) + 696i64) + 448i64) + 24i64);
                goto LABEL_1037;
            case 0x4F:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 824i64) + 344i64) + 552i64) + 312i64) + 344i64) + 456i64);
                goto LABEL_1037;
            case 0x50:
                v67 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 632) ^ v9;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v67 + 344) + 152i64, &v634, a1);
                goto LABEL_1037;
            case 0x51:
                v68 = a1;
                v634 = ((v9 + FuckEnc::CacheRead<_DWORD>(a1 + 168)) ^ 0xB1DEB2C9) + 927987866;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v68 + 544) + 680i64) + 768i64) + 96i64);
                goto LABEL_1037;
            case 0x52:
                v14 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 96) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 688i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 920i64));
                goto LABEL_1036;
            case 0x53:
                v69 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 912i64) + 320i64) + 232i64) + 832i64);
                v634 += FuckEnc::CacheRead<_DWORD>(v69 + 880) + 473792302;
                goto LABEL_1037;
            case 0x54:
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 792i64) ^ ~(468204282 - 1447239308 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 256i64)));
                goto LABEL_1037;
            case 0x55:
                v70 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 368) + 390661239;
                v634 = 725304981 - (FuckEnc::CacheRead<_DWORD>(v70 + 752) & 0xFFFFFFE5) - v634;
                goto LABEL_1037;
            case 0x56:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 360i64) + 504i64, &v634, a1);
                v634 += FuckEnc::CacheRead<_DWORD>(a1 + 288);
                goto LABEL_1037;
            case 0x57:
                v71 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 552) + 136i64);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(v71 + 368) * (FuckEnc::CacheRead<_DWORD>(v71 + 168) | 0x1C);
                goto LABEL_1036;
            case 0x58:
                v72 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 400) ^ v9;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v72 + 592) + 680i64) + 112i64) + 72i64) + 360i64) + 224i64);
                goto LABEL_1037;
            case 0x59:
                v634 = ((unsigned int)0xC6E3C50 + 3) ^ v9;
                v634 = ~((((unsigned int)0xC6E3C50 + 3) ^ v9) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 776i64) + 808i64) + 544i64) + 632i64));
                goto LABEL_1037;
            case 0x5A:
                v73 = a1;
                v634 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 56i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 776i64) + 256i64)) + v9;
                v634 -= FuckEnc::CacheRead<_DWORD>(v73 + 864);
                goto LABEL_1037;
            case 0x5B:
                v74 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 688);
                v634 = ~(v634 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v74 + 464) + 128i64) + 448i64) + 680i64) + 136i64));
                goto LABEL_1037;
            case 0x5C:
                v634 = (v9 - 119884693) ^ 0xC1122117;
                v75 = a1;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 56i64);
                v634 -= FuckEnc::CacheRead<_DWORD>(v75 + 328) & 0xFFFFFFED;
                goto LABEL_1037;
            case 0x5D:
                v76 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 416);
                v634 -= 884073000 * FuckEnc::CacheRead<_DWORD>(v76 + 488);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(v76 + 880);
                goto LABEL_1036;
            case 0x5E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 496i64, &v634, a1);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 256i64);
                goto LABEL_1037;
            case 0x5F:
                v77 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 880);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v77 + 288) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v77 + 776) + 312i64) + 456i64) - 659623364;
                goto LABEL_1037;
            case 0x60:
                v78 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 112i64) + 56i64);
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v78 + 216) + 88i64) + 592i64) + 368i64) ^ v634;
                goto LABEL_1036;
            case 0x61:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 320i64) + 128i64) + 784i64) + 88i64) + 808i64) + 400i64);
                goto LABEL_1036;
            case 0x62:
                v79 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 824) + 680i64) + 464i64) + 648i64);
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v79 + 128) + 864i64) ^ v634;
                goto LABEL_1036;
            case 0x63:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 216) + 232i64) + 128i64) + 784i64) + 88i64) + 400i64) ^ v9 ^ 0x33A3030E;
                goto LABEL_1036;
            case 0x64:
                v80 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 168);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v80 + 448) + 808i64) + 224i64) - (FuckEnc::CacheRead<_DWORD>(v80 + 368) ^ 0x6057CEA0);
                goto LABEL_1036;
            case 0x65:
                v81 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 216) + 72i64) + 824i64) + 224i64) ^ v9;
                v634 = ~(v634 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v81 + 360) + 136i64));
                goto LABEL_1037;
            case 0x66:
                v82 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 456);
                v14 = ~(v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v82) + 784i64) + 520i64) + 448392000);
                goto LABEL_1036;
            case 0x67:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 24) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 304i64) + 216i64) + 232i64) + 56i64));
                goto LABEL_1037;
            case 0x68:
                v83 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 720i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v83 + 920);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v83 + 576) + 304i64) + 632i64);
                goto LABEL_1037;
            case 0x69:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 688) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 80) + 256i64) ^ (-2000397369 * FuckEnc::CacheRead<_DWORD>(a1 + 400)))) ^ 0x8D96FD68;
                goto LABEL_1037;
            case 0x6A:
                v84 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 464) + 560i64) ^ v9;
                v634 -= FuckEnc::CacheRead<_DWORD>(v84 + 832);
                v634 += FuckEnc::CacheRead<_DWORD>(v84 + 184) + 1;
                goto LABEL_1037;
            case 0x6B:
                v85 = a1;
                v634 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 832) | 0x1D);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v85 + 912) + 360i64) + 864i64) & 0xFFFFFFF8;
                goto LABEL_1037;
            case 0x6C:
                v86 = a1;
                v634 = (FuckEnc::CacheRead<_DWORD>(a1 + 560) ^ v9) - 1145489114;
                v634 = (v634 - 1198499538 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v86 + 552) + 768i64) + 648i64)) ^ 0x5B65ACD9;
                goto LABEL_1037;
            case 0x6D:
                v634 = v9 + 988623840 * FuckEnc::CacheRead<_DWORD>(a1 + 488) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 784) + 112i64) + 320i64) + 448i64) + 920i64);
                goto LABEL_1037;
            case 0x6E:
                v87 = a1;
                v634 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 776i64) + 456i64) << 27);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v87 + 544) + 400i64);
                goto LABEL_1036;
            case 0x6F:
                v88 = a1;
                v634 = v9 ^ (-1498445570 - 858970291 * FuckEnc::CacheRead<_DWORD>(a1 + 24));
                v634 = (v634 ^ (FuckEnc::CacheRead<_DWORD>(v88 + 560) | 0xA)) + 1674378067;
                goto LABEL_1037;
            case 0x70:
                v89 = a1;
                v634 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 224) >> 15);
                v634 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v89 + 808) + 72i64) + 688i64);
                goto LABEL_1037;
            case 0x71:
                v634 = ((unsigned int)0x5EB3168 + 3) ^ v9;
                v634 = (((unsigned int)0x5EB3168 + 3) ^ v9) + FuckEnc::CacheRead<_DWORD>(a1 + 184) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 360i64) + 184i64) + 1;
                goto LABEL_1037;
            case 0x72:
                v90 = a1;
                v634 = (v9 ^ ~FuckEnc::CacheRead<_DWORD>(a1 + 184)) - 2123786727;
                v634 ^= FuckEnc::CacheRead<_DWORD>(v90 + 720) ^ 0xF7347853;
                v634 -= FuckEnc::CacheRead<_DWORD>(v90 + 520);
                goto LABEL_1037;
            case 0x73:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 96i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 312i64) + 864i64)) ^ 0xCA2AF2E3;
                goto LABEL_1037;
            case 0x74:
                v91 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 56i64) ^ v9;
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v91 + 552) + 232i64) + 912i64) + 536i64) + 456i64) ^ v634;
                goto LABEL_1036;
            case 0x75:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 256) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 824i64) + 88i64) + 184i64) - 2067201445;
                goto LABEL_1037;
            case 0x76:
                v14 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 56i64) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 576) + 464i64) + 592i64) + 632i64) + 1923719636));
                goto LABEL_1036;
            case 0x77:
                v92 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 648) + 1;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v92 + 464) + 552i64) + 768i64) + 784i64) + 520i64);
                goto LABEL_1037;
            case 0x78:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 328i64) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 72) + 776i64) + 96i64) & 0xFFFFFFF9);
                goto LABEL_1037;
            case 0x79:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 776) + 72i64) + 88i64) + 792i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 128) + 328i64);
                goto LABEL_1036;
            case 0x7A:
                v93 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 520) ^ v9;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v93 + 304) + 288i64) + ~(FuckEnc::CacheRead<_DWORD>(v93 + 520) >> 21);
                goto LABEL_1037;
            case 0x7B:
                v94 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 544i64) + 824i64) + 864i64);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v94 + 696) + 776i64) + 632i64);
                goto LABEL_1036;
            case 0x7C:
                v95 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 520i64) - FuckEnc::CacheRead<_DWORD>(a1 + 752) + 1;
                v634 -= FuckEnc::CacheRead<_DWORD>(v95 + 456);
                goto LABEL_1037;
            case 0x7D:
                v14 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 80i64) + 112i64) + 784i64) + 552i64) + 560i64) ^ v9);
                goto LABEL_1036;
            case 0x7E:
                v96 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 288) + 891141094;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v96 + 768) + 808i64) + 592i64) + 312i64) + 632i64);
                goto LABEL_1037;
            case 0x7F:
                v97 = a1;
                v634 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 232i64) + 776i64) + 24i64);
                v634 += ~FuckEnc::CacheRead<_DWORD>(v97 + 96);
                goto LABEL_1037;
            case 0x80:
                v98 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 520) + 1088138158;
                Calls::FastCall(v98 + 728, &v634, v98);
                goto LABEL_1037;
            case 0x81:
                Calls::FastCall(a1 + 32, &v634, a1);
                v634 = ((FuckEnc::CacheRead<_DWORD>(a1 + 24) ^ v634) - 916759265) ^ 0x8BA75BF9;
                goto LABEL_1037;
            case 0x82:
                v99 = a1;
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 400) | 0xE);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v99 + 768) + 264i64, &v634, a1);
                goto LABEL_1037;
            case 0x83:
                v634 = v9 - 2040479480;
                v634 = v9 - 2040479480 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 824) + 216i64) + 360i64) + 784i64) + 520i64) + 1800171600;
                goto LABEL_1037;
            case 0x84:
                v100 = a1;
                v634 = ~(FuckEnc::CacheRead<_DWORD>(a1 + 224) ^ v9);
                v634 -= FuckEnc::CacheRead<_DWORD>(v100 + 832);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v100 + 112) + 576i64) + 224i64);
                goto LABEL_1037;
            case 0x85:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 80) + 304i64) + 72i64) + 232i64) + 848i64, &v634, a1);
                goto LABEL_1037;
            case 0x86:
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 488) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 72i64) + 536i64) + 312i64) + 832i64));
                goto LABEL_1037;
            case 0x87:
                v101 = a1;
                v634 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 688i64) ^ 0x34435FC6);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v101 + 864) + 492870866;
                v634 ^= FuckEnc::CacheRead<_DWORD>(v101 + 632);
                goto LABEL_1037;
            case 0x88:
                v634 = ~(v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 920i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 80i64) + 88i64) + 600i64)));
                goto LABEL_1037;
            case 0x89:
                v634 = v9 - 1141691032;
                v102 = a1;
                v634 = v9 - 1141691032 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 128) + 552i64) + 752i64);
                v634 -= 1203957209 * FuckEnc::CacheRead<_DWORD>(v102 + 752);
                goto LABEL_1037;
            case 0x8A:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 784) + 464i64) + 216i64) + 464i64) + 672i64, &v634, a1);
                goto LABEL_1037;
            case 0x8B:
                v103 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 168) ^ v9;
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v103 + 448) + 464i64) + 920i64);
                v634 += FuckEnc::CacheRead<_DWORD>(v103 + 520);
                goto LABEL_1037;
            case 0x8C:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 360i64) + 696i64) + 912i64) + 448i64) + 216i64) + 880i64) ^ v9;
                goto LABEL_1036;
            case 0x8D:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 128i64) + 328i64) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 920i64) + 1);
                goto LABEL_1037;
            case 0x8E:
                v104 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 632) + 1864731178;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v104 + 80) + 632i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v104 + 680) + 96i64);
                goto LABEL_1037;
            case 0x8F:
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 128) + 448i64) + 328i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 128i64) + 776i64) + 328i64));
                goto LABEL_1037;
            case 0x90:
                v105 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 368);
                v14 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v105 + 72) + 552i64) + 536i64) + 448i64) + 488i64) ^ v634) + 751542628;
                goto LABEL_1036;
            case 0x91:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 824) + 232i64) + 808i64) + 352i64, &v634, a1);
                goto LABEL_1037;
            case 0x92:
                v106 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 128) + 24i64) ^ v9;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v106 + 216) + 104i64, &v634, a1);
                goto LABEL_1037;
            case 0x93:
                v107 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 520);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v107 + 232) + 576i64) + 864i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v107) + 720i64);
                goto LABEL_1037;
            case 0x94:
                v108 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 632);
                v634 -= FuckEnc::CacheRead<_DWORD>(v108 + 752);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v108 + 312) + 808i64) + 328i64);
                goto LABEL_1036;
            case 0x95:
                v109 = a1;
                v634 = v9 - 1246782287 * FuckEnc::CacheRead<_DWORD>(a1 + 368) + 976165214;
                v634 -= 383976850 * FuckEnc::CacheRead<_DWORD>(v109 + 600);
                v634 -= FuckEnc::CacheRead<_DWORD>(v109 + 720);
                goto LABEL_1037;
            case 0x96:
                v634 = v9 + 1491240860;
                v634 = v9 + 1491240860 + FuckEnc::CacheRead<_DWORD>(a1 + 168) + (FuckEnc::CacheRead<_DWORD>(a1 + 864) ^ 0x2A1B0FF4);
                goto LABEL_1037;
            case 0x97:
                v634 = ~(_DWORD)v9;
                v110 = a1;
                v634 = ~(_DWORD)v9 + FuckEnc::CacheRead<_DWORD>(a1 + 136) + 1;
                v634 += FuckEnc::CacheRead<_DWORD>(v110 + 752);
                v634 += FuckEnc::CacheRead<_DWORD>(v110 + 56);
                goto LABEL_1037;
            case 0x98:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 792i64) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 328i64) ^ 0x860A024F));
                goto LABEL_1037;
            case 0x99:
                v111 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 56);
                v634 = v634 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v111 + 776) + 344i64) + 632i64) & 0xFFFFFFF9) - 1158843685;
                goto LABEL_1037;
            case 0x9A:
                v14 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 784i64) + 880i64) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 136) >> 28) ^ 0xCB101C7D);
                goto LABEL_1036;
            case 0x9B:
                v112 = a1;
                v634 = ~(v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 880) << 27));
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v112 + 448) + 768i64) + 328i64);
                goto LABEL_1037;
            case 0x9C:
                v113 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 80i64) + 112i64) + 600i64);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v113 + 128) + 304i64) + 400i64);
                goto LABEL_1037;
            case 0x9D:
                v114 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 368) + 1072315306;
                v634 += 1146451124 * FuckEnc::CacheRead<_DWORD>(v114 + 832) - FuckEnc::CacheRead<_DWORD>(v114 + 24);
                goto LABEL_1037;
            case 0x9E:
                v115 = a1;
                v634 = (_DWORD)0x6DD6C60 + (FuckEnc::CacheRead<_DWORD>(a1 + 96) ^ v9);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v115 + 536) + 120i64, &v634, a1);
                goto LABEL_1037;
            case 0x9F:
                Calls::FastCall(a1 + 480, &v634, a1);
                v634 ^= 0x4D2D2637u;
                v634 ^= FuckEnc::CacheRead<_DWORD>(a1 + 168) ^ 0xD8B879F6;
                goto LABEL_1037;
            case 0xA0:
                v116 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 416) ^ v9;
                v14 = v634 - ((FuckEnc::CacheRead<_DWORD>(v116 + 600) << 29) ^ (-16885421 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v116 + 776) + 864i64)));
                goto LABEL_1036;
            case 0xA1:
                Calls::FastCall(a1 + 352, &v634, a1);
                v634 ^= FuckEnc::CacheRead<_DWORD>(a1 + 56) ^ 0xDC7E19D8;
                goto LABEL_1037;
            case 0xA2:
                v117 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 256) - 999902216;
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v117 + 88) + 592i64) + 72i64) + 312i64) + 648i64);
                goto LABEL_1037;
            case 0xA3:
                v118 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 168);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v118 + 232) + 792i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v118 + 544) + 864i64);
                goto LABEL_1037;
            case 0xA4:
                v119 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 832i64) ^ v9;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v119 + 344) + 712i64, &v634, a1);
                goto LABEL_1037;
            case 0xA5:
                v120 = a1;
                v634 = (v9 + FuckEnc::CacheRead<_DWORD>(a1 + 24)) ^ 0xAF62DFED;
                v634 = ~(v634 - (FuckEnc::CacheRead<_DWORD>(v120 + 56) & 0xFFFFFFE7));
                goto LABEL_1037;
            case 0xA6:
                v121 = a1;
                v122 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 632) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 600i64));
                v634 = v122;
                v123 = FuckEnc::CacheRead<_QWORD>(v121 + 912);
                goto LABEL_172;
            case 0xA7:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 360i64) + 808i64) + 824i64) + 72i64) + 592i64) + 776i64) + 632i64);
                goto LABEL_1037;
            case 0xA8:
                v124 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 776i64) + 416i64);
                v634 += FuckEnc::CacheRead<_DWORD>(v124 + 720) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v124 + 312) + 288i64);
                goto LABEL_1037;
            case 0xA9:
                v125 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 416);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v125 + 544) + 440i64, &v634, a1);
                goto LABEL_1037;
            case 0xAA:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 536) + 112i64) + 352i64, &v634, a1);
                goto LABEL_1037;
            case 0xAB:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 768i64) + 360i64) + 672i64, &v634, a1);
                goto LABEL_1037;
            case 0xAC:
                v126 = a1;
                v634 = v9 + ~FuckEnc::CacheRead<_DWORD>(a1 + 880);
                v634 -= 155360811 * FuckEnc::CacheRead<_DWORD>(v126 + 600);
                v634 = v634 - FuckEnc::CacheRead<_DWORD>(v126 + 328) - 1889204389;
                goto LABEL_1037;
            case 0xAD:
                v14 = (_DWORD)0x9284FA8 + 3 + v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 96i64) - FuckEnc::CacheRead<_DWORD>(a1 + 56);
                goto LABEL_1036;
            case 0xAE:
                v127 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 368);
                v634 = ~(v634 ^ (FuckEnc::CacheRead<_DWORD>(v127 + 832) * ~FuckEnc::CacheRead<_DWORD>(v127 + 632)));
                goto LABEL_1037;
            case 0xAF:
                v128 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 456);
                v634 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v128 + 312) + 112i64) + 912i64) + 768i64) + 560i64) ^ v634);
                goto LABEL_1037;
            case 0xB0:
                v129 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 552i64) + 224i64) - FuckEnc::CacheRead<_DWORD>(a1 + 224);
                v634 ^= 475890670 * FuckEnc::CacheRead<_DWORD>(v129 + 368);
                goto LABEL_1037;
            case 0xB1:
                v130 = a1;
                v634 = v9 + ~FuckEnc::CacheRead<_DWORD>(a1 + 256);
                Calls::FastCall(v130 + 16, &v634, v130);
                goto LABEL_1037;
            case 0xB2:
                v634 = ~(_DWORD)v9;
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 768i64) + 592i64) + 312i64) + 168i64) ^ ~(_DWORD)v9;
                goto LABEL_1036;
            case 0xB3:
                v131 = a1;
                v634 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 24) ^ 0x999E52D8);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v131 + 344) + 216i64) + 544i64) + 72i64) + 256i64);
                goto LABEL_1036;
            case 0xB4:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 784) + 400i64) + FuckEnc::CacheRead<_DWORD>(a1 + 600) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 784) + 552i64) + 224i64);
                goto LABEL_1037;
            case 0xB5:
                v634 = v9 - 1383775460;
                v132 = a1;
                v634 = v9 - 1383775460 - FuckEnc::CacheRead<_DWORD>(a1 + 224);
                v634 ^= 237711062 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v132 + 72) + 864i64) + 1679152441;
                goto LABEL_1037;
            case 0xB6:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 784i64) + 96i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 784) + 576i64) + 88i64) + 184i64));
                goto LABEL_1037;
            case 0xB7:
                v133 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 688);
                v634 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v133 + 128) + 464i64) + 808i64) + 688i64) - FuckEnc::CacheRead<_DWORD>(v133 + 184);
                goto LABEL_1037;
            case 0xB8:
                v634 = v9 + 1467103940 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 488i64) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 216) + 112i64) + 688i64);
                goto LABEL_1037;
            case 0xB9:
                v134 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 560i64) + 584655031;
                v634 -= FuckEnc::CacheRead<_DWORD>(v134 + 96) * (FuckEnc::CacheRead<_DWORD>(v134 + 632) << 18);
                goto LABEL_1037;
            case 0xBA:
                v135 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 56);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v135 + 696) + 320i64) + 112i64) + 520i64);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(v135 + 168);
                goto LABEL_1036;
            case 0xBB:
                v136 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 184) ^ v9 ^ 0xD389B3C2;
                v634 ^= 217074027 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v136 + 776) + 344i64) + 368i64);
                goto LABEL_1037;
            case 0xBC:
                v634 = v9 + ~FuckEnc::CacheRead<_DWORD>(a1 + 136) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 88i64) + 536i64) + 824i64) + 864i64);
                goto LABEL_1037;
            case 0xBD:
                v137 = a1;
                v634 = v9 ^ (~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 688i64) | 9);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v137 + 776) + 168i64);
                goto LABEL_1037;
            case 0xBE:
                v634 = v9 - 619632039;
                v634 = v9 - 619632039 + ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 592i64) + 328i64) ^ 0x66EA96DD);
                goto LABEL_1037;
            case 0xBF:
                v138 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 136);
                v634 ^= 1898700083 * FuckEnc::CacheRead<_DWORD>(v138 + 600);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v138 + 448) + 112i64) + 224i64);
                goto LABEL_1037;
            case 0xC0:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 72i64) + 344i64) + 584i64, &v634, a1);
                goto LABEL_1037;
            case 0xC1:
                v139 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 24i64) + 2035109814;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v139 + 344) + 536i64) + 464i64) + 880i64);
                goto LABEL_1037;
            case 0xC2:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 520i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 576i64) + 80i64) + 920i64));
                goto LABEL_1037;
            case 0xC3:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 864i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 552) + 72i64) + 696i64) + 776i64) + 920i64);
                goto LABEL_1037;
            case 0xC4:
                v634 = v9 + 861980861;
                v140 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 96i64) ^ (v9 + 861980861);
                v634 += (FuckEnc::CacheRead<_DWORD>(v140 + 488) - (_DWORD)0x13AED463) | 0xF;
                goto LABEL_1037;
            case 0xC5:
                v141 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 784i64) + 224i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v141 + 680) + 464i64) + 600i64);
                goto LABEL_1037;
            case 0xC6:
                v634 = v9 - 1027244723;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 448i64) + 568i64, &v634, a1);
                goto LABEL_1037;
            case 0xC7:
                v142 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 560);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v142 + 576) + 128i64) + 536i64) + 216i64) + 912i64) + 832i64);
                goto LABEL_1037;
            case 0xC8:
                v143 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 400);
                v634 += FuckEnc::CacheRead<_DWORD>(v143 + 288) & 0xFFFFFFF1;
                v634 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v143 + 776) + 880i64);
                goto LABEL_1037;
            case 0xC9:
                v634 = v9 - 1389547596;
                v634 = (v9 - 1389547596) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 328) + (FuckEnc::CacheRead<_DWORD>(a1 + 920) & 0xFFFFFFF8 ^ 0xADFC3559));
                goto LABEL_1037;
            case 0xCA:
                v144 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 328);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v144 + 824) + 400i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v144 + 312) + 592i64) + 720i64);
                goto LABEL_1037;
            case 0xCB:
                v145 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 136i64) + 1;
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v145) + 592i64) + 544i64) + 520i64);
                goto LABEL_1037;
            case 0xCC:
                v146 = a1;
                v634 = ((v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 920i64)) ^ 0xC9CB656E) - 1428913843;
                v634 = v634 - (FuckEnc::CacheRead<_DWORD>(v146 + 400) ^ 0xB3A9A928) - 1920062261;
                goto LABEL_1037;
            case 0xCD:
                v147 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 184) + 1530980592;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v147 + 88) + 112i64) + 344i64) + 880i64);
                goto LABEL_1037;
            case 0xCE:
                v634 = v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 824) + 312i64) + 24i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 536i64) + 688i64);
                goto LABEL_1037;
            case 0xCF:
                v634 = v9 + 368570030;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 592i64) + 776i64) + 576i64) + 688i64) ^ (v9 + 368570030);
                goto LABEL_1037;
            case 0xD0:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 360i64) + 680i64) + 568i64, &v634, a1);
                goto LABEL_1037;
            case 0xD1:
                v634 = v9 - 1051744676;
                v634 = (v9 - 1051744676) ^ ((_DWORD)0xAB4F9CC + 2 + FuckEnc::CacheRead<_DWORD>(a1 + 224) - 1214594694 * FuckEnc::CacheRead<_DWORD>(a1 + 24));
                goto LABEL_1037;
            case 0xD2:
                v148 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 136) ^ v9;
                v634 += FuckEnc::CacheRead<_DWORD>(v148 + 880);
                Calls::FastCall(v148 + 736, &v634, v148);
                goto LABEL_1037;
            case 0xD3:
                v149 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 688i64);
                v634 -= FuckEnc::CacheRead<_DWORD>(v149 + 224);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v149 + 448) + 808i64) + 600i64);
                goto LABEL_1037;
            case 0xD4:
                v150 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 128i64) + 552i64) + 112i64) + 416i64);
                v634 -= FuckEnc::CacheRead<_DWORD>(v150 + 288);
                goto LABEL_1037;
            case 0xD5:
                v634 = v9 ^ (718544585 * FuckEnc::CacheRead<_DWORD>(a1 + 224) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 696i64) + 776i64) + 456i64));
                goto LABEL_1037;
            case 0xD6:
                v151 = v9 - 777514986;
                v634 = v9 - 777514986;
                v152 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 448i64) + 464i64) + 680i64);
                goto LABEL_221;
            case 0xD7:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 576i64) + 552i64) + 776i64) + 312i64) + 912i64) + 224i64) ^ v9;
                goto LABEL_1036;
            case 0xD8:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 680i64) + 184i64) - (FuckEnc::CacheRead<_DWORD>(a1 + 688) | 0x1D) - (_DWORD)0x1231A2E7;
                goto LABEL_1036;
            case 0xD9:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 824i64) + 72i64) + 304i64) + 360i64) + 720i64) ^ v9;
                goto LABEL_1036;
            case 0xDA:
                v634 = v9 - 1801051575;
                v634 = v9 - 1801051575 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 824i64) + 576i64) + 80i64) + 112i64) + 136i64);
                goto LABEL_1037;
            case 0xDB:
                v634 = v9 ^ 0x665E10ED;
                v153 = a1;
                v634 = (v9 ^ 0x665E10ED) + FuckEnc::CacheRead<_DWORD>(a1 + 560);
                v634 -= FuckEnc::CacheRead<_DWORD>(v153 + 752) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v153 + 696) + 168i64);
                goto LABEL_1037;
            case 0xDC:
                v634 = v9 ^ 0x49E6B3F7;
                v634 = (v9 ^ 0x49E6B3F7) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 576i64) + 448i64) + 344i64) + 448i64) + 720i64);
                goto LABEL_1037;
            case 0xDD:
                v634 = v9 + (_DWORD)0xCB2BE75 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 696i64) + 464i64) + 552i64) + 920i64);
                goto LABEL_1037;
            case 0xDE:
                v154 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 304i64) + 776i64) + 312i64) + 400i64) + 1;
                v634 += FuckEnc::CacheRead<_DWORD>(v154 + 224);
                goto LABEL_1037;
            case 0xDF:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 720) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 912i64) + 216i64) + 768i64) + 792i64));
                goto LABEL_1037;
            case 0xE0:
                v155 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 920i64) + 1639108238;
                v634 += FuckEnc::CacheRead<_DWORD>(v155 + 456);
                goto LABEL_1037;
            case 0xE1:
                v156 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 864i64) ^ v9;
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v156 + 808) + 80i64) + 552i64) + 184i64) ^ v634;
                goto LABEL_1036;
            case 0xE2:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 680i64) + 304i64) + 800i64, &v634, a1);
                v634 ^= 0xB858516E;
                goto LABEL_1037;
            case 0xE3:
                v634 = v9 ^ 0xBCD0CE5D;
                v157 = a1;
                v634 = (v9 ^ 0xBCD0CE5D) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 128) + 864i64);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v157 + 576) + 256i64) + 1;
                goto LABEL_1037;
            case 0xE4:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 784i64) + 544i64) + 848i64, &v634, a1);
                goto LABEL_1037;
            case 0xE5:
                v634 = v9 - 593820551;
                v634 = v9 - 593820551 + (FuckEnc::CacheRead<_DWORD>(a1 + 600) & 0xFFFFFFE3) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 552i64) + 560i64);
                goto LABEL_1037;
            case 0xE6:
                v158 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 544i64) + 288i64) + 1870499629;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v158 + 824) + 920i64) + 1;
                goto LABEL_1037;
            case 0xE7:
                v159 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 72i64) + 360i64) + 184i64);
                v634 += (-1769533389 * FuckEnc::CacheRead<_DWORD>(v159 + 632)) ^ 0x927EA793;
                goto LABEL_1037;
            case 0xE8:
                v160 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 256) + 1910270075;
                v634 = (v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v160 + 912) + 448i64) + 256i64)) ^ 0xAB6536FD;
                goto LABEL_1037;
            case 0xE9:
                v161 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 752) ^ v9;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v161 + 320) + 72i64) + 128i64) + 784i64) + 224i64);
                goto LABEL_1037;
            case 0xEA:
                v162 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 576) + 56i64) - 753452508;
                v634 -= FuckEnc::CacheRead<_DWORD>(v162 + 168) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v162 + 72) + 752i64);
                goto LABEL_1037;
            case 0xEB:
                v163 = a1;
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 688) * (FuckEnc::CacheRead<_DWORD>(a1 + 792) - 659537344));
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v163 + 304) + 808i64) + 792i64);
                goto LABEL_1037;
            case 0xEC:
                v634 = v9 + 1347856648 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 824) + 168i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 576i64) + 832i64) + 1334327133;
                goto LABEL_1037;
            case 0xED:
                v634 = v9 ^ FuckEnc::CacheRead<_DWORD>(a1 + 400) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 576) + 688i64) + 2133017000);
                goto LABEL_1037;
            case 0xEE:
                v164 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 312i64) + 920i64) ^ v9 ^ 0xA4A8381C;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v164 + 232) + 328i64) + 1;
                goto LABEL_1037;
            case 0xEF:
                v165 = a1;
                v634 = (v9 + FuckEnc::CacheRead<_DWORD>(a1 + 688)) ^ 0x498C70BA;
                v634 += FuckEnc::CacheRead<_DWORD>(v165 + 456);
                v634 ^= 2 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v165 + 808) + 648i64);
                goto LABEL_1037;
            case 0xF0:
                v166 = a1;
                v634 = 692532210 - ((FuckEnc::CacheRead<_DWORD>(a1 + 368) ^ v9 ^ 0x81021224) + 905366655);
                v634 = (v634 - FuckEnc::CacheRead<_DWORD>(v166 + 400)) ^ 0x7B71E16D;
                goto LABEL_1037;
            case 0xF1:
                v167 = a1;
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 752i64) ^ 0xBAA8773D);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v167 + 312) + 304i64) + 520i64);
                goto LABEL_1037;
            case 0xF2:
                v168 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 808) + 288i64);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v168 + 680) + 552i64) + 72i64) + 136i64);
                goto LABEL_1037;
            case 0xF3:
                v169 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 520i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v169 + 544) + 736i64, &v634, a1);
                goto LABEL_1037;
            case 0xF4:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 320i64) + 24i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 768i64) + 464i64) + 720i64);
                goto LABEL_1037;
            case 0xF5:
                Calls::FastCall(a1 + 264, &v634, a1);
                v634 = ~v634;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 520i64);
                goto LABEL_1037;
            case 0xF6:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 448i64) + 536i64) + 576i64) + 784i64) + 592i64) + 544i64) + 648i64) ^ v9;
                goto LABEL_1036;
            case 0xF7:
                v170 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 256);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(v170 + 96) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v170 + 312) + 128i64) + 368i64);
                goto LABEL_1036;
            case 0xF8:
                v171 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 864i64) ^ v9;
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v171 + 576) + 600i64) + 962865852;
                v634 ^= FuckEnc::CacheRead<_DWORD>(v171 + 24);
                goto LABEL_1037;
            case 0xF9:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 80i64) + 320i64) + 808i64) + 112i64) + 360i64) + 224i64) ^ v9;
                goto LABEL_1036;
            case 0xFA:
                v634 = v9 + 1210126382;
                v172 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 688i64) ^ (v9 + 1210126382);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v172 + 72) + 864i64) | 8;
                goto LABEL_1037;
            case 0xFB:
                v634 = v9 + (((unsigned int)0xDED69B4 + 4) ^ FuckEnc::CacheRead<_DWORD>(a1 + 184)) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 544i64) + 56i64);
                goto LABEL_1037;
            case 0xFC:
                v173 = a1;
                v634 = (v9 ^ ~FuckEnc::CacheRead<_DWORD>(a1 + 752)) - 185891478;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v173) + 216i64) + 776i64) + 832i64);
                goto LABEL_1037;
            case 0xFD:
                v634 = v9 ^ (-489699171 * ((unsigned int)(FuckEnc::CacheRead<_DWORD>(a1 + 752) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 544i64) + 688i64)) >> 11));
                goto LABEL_1037;
            case 0xFE:
                v174 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 752);
                Calls::FastCall(v174 + 816, &v634, v174);
                v634 = v634 - 432964386 + FuckEnc::CacheRead<_DWORD>(a1 + 328);
                goto LABEL_1037;
            case 0xFF:
                v175 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 864);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v175 + 544) + 72i64) + 632i64) * (FuckEnc::CacheRead<_DWORD>(v175 + 792) + 1368113428);
                goto LABEL_1037;
            case 0x100:
                v176 = a1;
                v634 = v9 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 344i64) + 592i64) + 864i64);
                v634 = v634 - FuckEnc::CacheRead<_DWORD>(v176 + 520) - 929819875;
                goto LABEL_1037;
            case 0x101:
                v634 = v9 + 846359372;
                v634 = v9 + 846359372 + (~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 360i64) + 824i64) + 920i64) | 0xC);
                goto LABEL_1037;
            case 0x102:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 824) + 216i64) + 288i64) + (FuckEnc::CacheRead<_DWORD>(a1 + 792) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 784) + 256i64)));
                goto LABEL_1037;
            case 0x103:
                v177 = a1;
                v634 = v9 - 1493417276 * FuckEnc::CacheRead<_DWORD>(a1 + 256);
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v177 + 216) + 696i64) + 344i64) + 368i64) ^ v634;
                goto LABEL_1036;
            case 0x104:
                v178 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 184);
                v634 += FuckEnc::CacheRead<_DWORD>(v178 + 920) - 1865547713;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v178 + 776) + 344i64) + 224i64);
                goto LABEL_1037;
            case 0x105:
                v634 = v9 + 814371958;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 496i64, &v634, a1);
                goto LABEL_1037;
            case 0x106:
                v179 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 784) + 688i64) + 1;
                v634 += FuckEnc::CacheRead<_DWORD>(v179 + 184);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v179 + 328) & 0xFFFFFFEE;
                goto LABEL_1037;
            case 0x107:
                v180 = a1;
                v634 = v9 ^ ((FuckEnc::CacheRead<_DWORD>(a1 + 792) | 6) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 832i64));
                v634 ^= FuckEnc::CacheRead<_DWORD>(v180 + 864);
                goto LABEL_1037;
            case 0x108:
                v181 = a1;
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 832) + 911062765 + FuckEnc::CacheRead<_DWORD>(a1 + 400));
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v181 + 536) + 136i64) >> 2;
                goto LABEL_1037;
            case 0x109:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 80i64) + 672i64, &v634, a1);
                v634 -= 1850559698;
                goto LABEL_1037;
            case 0x10A:
                v182 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 80) + 88i64) + 648i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v182 + 24);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(v182 + 168);
                goto LABEL_1036;
            case 0x10B:
                v183 = a1;
                v634 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(a1 + 184);
                v634 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v183 + 576) + 648i64) + 1347735923;
                goto LABEL_1037;
            case 0x10C:
                v184 = a1;
                v634 = ((v9 - FuckEnc::CacheRead<_DWORD>(a1 + 56)) ^ 0xB515C82B) + 1346476886;
                v634 ^= (unsigned int)0x10BD6299 ^ (FuckEnc::CacheRead<_DWORD>(v184 + 648) << 24);
                goto LABEL_1037;
            case 0x10D:
                v634 = v9 + 1065942728;
                v185 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 864) ^ (v9 + 1065942728);
                v634 += FuckEnc::CacheRead<_DWORD>(v185 + 368) ^ (388749891 * FuckEnc::CacheRead<_DWORD>(v185 + 288));
                goto LABEL_1037;
            case 0x10E:
                v186 = a1;
                v634 = v9 + (_DWORD)0xF275CA1 + FuckEnc::CacheRead<_DWORD>(a1 + 328);
                v634 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v186 + 696) + 80i64) + 720i64);
                goto LABEL_1037;
            case 0x10F:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 80i64) + 848i64, &v634, a1);
                v634 -= FuckEnc::CacheRead<_DWORD>(a1 + 832);
                goto LABEL_1037;
            case 0x110:
                Calls::FastCall(a1 + 800, &v634, a1);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 360i64) + 792i64);
                goto LABEL_1037;
            case 0x111:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 312i64) + 464i64) + 360i64) + 776i64) + 256i64) ^ v9;
                goto LABEL_1036;
            case 0x112:
                v187 = a1;
                v634 = v9 + ~(FuckEnc::CacheRead<_DWORD>(a1 + 560) ^ 0x904923F6);
                v634 ^= 1553476105 - FuckEnc::CacheRead<_DWORD>(v187 + 224);
                goto LABEL_1037;
            case 0x113:
                v188 = a1;
                v634 = v9 + 1498030248 * ((FuckEnc::CacheRead<_DWORD>(a1 + 720) ^ 0x6E64E410) & 0xFFFFFFF0);
                Calls::FastCall(v188 + 208, &v634, v188);
                goto LABEL_1037;
            case 0x114:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 648) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 360i64) + 920i64));
                goto LABEL_1037;
            case 0x115:
                v634 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 592i64) + 128i64) + 360i64) + 312i64) + 224i64);
                goto LABEL_1037;
            case 0x116:
                v189 = a1;
                v634 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 920) & 0xFFFFFFE6);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v189 + 880);
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v189 + 88) + 464i64) + 832i64) ^ v634;
                goto LABEL_1036;
            case 0x117:
                v190 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 136i64) + 937824754;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v190 + 680) + 304i64) + 112i64) + 600i64);
                goto LABEL_1037;
            case 0x118:
                v191 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 680i64) + 360i64);
                goto LABEL_288;
            case 0x119:
                v634 = v9 + 1752725190;
                v192 = a1;
                v634 = v9 + 1752725190 - FuckEnc::CacheRead<_DWORD>(a1 + 600);
                Calls::FastCall(v192 + 120, &v634, v192);
                goto LABEL_1037;
            case 0x11A:
                v193 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 576) + 304i64) + 488i64) - 686964401;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v193 + 784) + 720i64);
                goto LABEL_1037;
            case 0x11B:
                v194 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 416);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v194 + 232) + 880i64);
                Calls::FastCall(v194 + 816, &v634, v194);
                goto LABEL_1037;
            case 0x11C:
                v634 = v9 ^ 0x8653EAAA;
                v634 = v9 ^ 0x8653EAAA ^ (~FuckEnc::CacheRead<_DWORD>(a1 + 488) * ~(FuckEnc::CacheRead<_DWORD>(a1 + 168) ^ 0xF8C6C9A2));
                goto LABEL_1037;
            case 0x11D:
                v195 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 216) + 808i64) + 88i64) + 720i64) + 670960554;
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v195 + 88) + 56i64);
                goto LABEL_1037;
            case 0x11E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 312i64) + 680i64) + 264i64, &v634, a1);
                goto LABEL_1037;
            case 0x11F:
                v634 = ((v9 + 420300668) ^ 0xE5815E5F) - 549240986;
                Calls::FastCall(a1 + 568, &v634, a1);
                v634 ^= 0xA6AF2D2E;
                goto LABEL_1037;
            case 0x120:
                v634 = ~(v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 216) + 216i64) + 256i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 576) + 312i64) + 632i64)));
                goto LABEL_1037;
            case 0x121:
                v196 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 456);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v196 + 128) + 320i64) + 448i64) + 304i64) + 256i64);
                goto LABEL_1037;
            case 0x122:
                v197 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 400i64) + 955776705;
                v634 ^= FuckEnc::CacheRead<_DWORD>(v197 + 688);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v197 + 592) + 880i64);
                goto LABEL_1037;
            case 0x123:
                v634 = v9 ^ 0x70887BCE;
                v198 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 696i64) + 416i64) ^ v9 ^ 0x70887BCE;
                v14 = ~(FuckEnc::CacheRead<_DWORD>(v198 + 56) ^ v634);
                goto LABEL_1036;
            case 0x124:
                v634 = (unsigned int)0x118ED93A ^ (v9 + 539462532 * FuckEnc::CacheRead<_DWORD>(a1 + 688) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 576i64) + 880i64));
                goto LABEL_1037;
            case 0x125:
                v199 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 400) ^ v9;
                v634 += 1611295435 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v199) + 576i64) + 688i64);
                goto LABEL_1037;
            case 0x126:
                v634 = (v9 ^ 0xFB7C35A8) + 1670631389;
                v634 += FuckEnc::CacheRead<_DWORD>(a1 + 792) * (FuckEnc::CacheRead<_DWORD>(a1 + 168) + 1) - 433922241;
                goto LABEL_1037;
            case 0x127:
                v200 = a1;
                v634 = (v9 - FuckEnc::CacheRead<_DWORD>(a1 + 920)) ^ 0xF82C49D8;
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v200 + 680) + 920i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v200 + 312) + 632i64);
                goto LABEL_1036;
            case 0x128:
                v634 = v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 80) + 752i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 216) + 544i64) + 912i64) + 832i64);
                goto LABEL_1037;
            case 0x129:
                v201 = a1;
                v634 = ((v9 + FuckEnc::CacheRead<_DWORD>(a1 + 256) + 2122009381) ^ 0x5C86A003) + 2081862132;
                v634 -= (unsigned int)0x1198F7AC ^ FuckEnc::CacheRead<_DWORD>(v201 + 24);
                goto LABEL_1037;
            case 0x12A:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 128i64) + 88i64) + 104i64, &v634, a1);
                goto LABEL_1037;
            case 0x12B:
                v202 = a1;
                v634 = (_DWORD)0x7F5B9C7 + 2 + (FuckEnc::CacheRead<_DWORD>(a1 + 456) ^ v9);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v202 + 768) + 152i64, &v634, a1);
                goto LABEL_1037;
            case 0x12C:
                v203 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 720);
                v634 += FuckEnc::CacheRead<_DWORD>(v203 + 416) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v203 + 448) + 920i64) ^ 0x15543008;
                goto LABEL_1037;
            case 0x12D:
                v204 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 880i64) + 1226844737;
                Calls::FastCall(v204 + 336, &v634, v204);
                goto LABEL_1037;
            case 0x12E:
                v205 = a1;
                v634 = v9 ^ FuckEnc::CacheRead<unsigned __int8>(a1 + 403);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v205 + 344) + 720i64) ^ (FuckEnc::CacheRead<_DWORD>(v205 + 560) - ((_DWORD)0xDFEE3AB + 1));
                goto LABEL_1037;
            case 0x12F:
                v206 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 784i64) + 544i64) + 128i64) + 576i64) + 648i64);
                v14 = FuckEnc::CacheRead<_DWORD>(v206 + 288) ^ v634;
                goto LABEL_1036;
            case 0x130:
                v207 = a1;
                v634 = 610551369 - (v9 - FuckEnc::CacheRead<_DWORD>(a1 + 184));
                v634 += FuckEnc::CacheRead<_DWORD>(v207 + 224) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v207 + 216) + 256i64);
                goto LABEL_1037;
            case 0x131:
                v208 = a1;
                v634 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 224i64) ^ v9) + 1849048842;
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v208 + 360) + 552i64) + 752i64);
                goto LABEL_1037;
            case 0x132:
                v209 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 256) - 237233405;
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v209 + 592) + 184i64) & 0xFFFFFFE2 ^ 0x3D1F2EDF;
                goto LABEL_1037;
            case 0x133:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 832) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 824) + 304i64) + 88i64) + 520i64) - 689791920;
                goto LABEL_1037;
            case 0x134:
                v634 = (unsigned int)0x1203A6DF + v9;
                v634 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 576i64) + 328i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 96i64);
                goto LABEL_1037;
            case 0x135:
                v634 = (v9 ^ (1018944297 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 592i64) + 784i64) + 80i64) + 416i64))) - 1525623016;
                goto LABEL_1037;
            case 0x136:
                v210 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 168);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v210 + 320) + 720i64);
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v210 + 592) + 344i64) + 720i64) ^ v634;
                goto LABEL_1036;
            case 0x137:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 216i64) + 776i64) + 128i64) + 72i64) + 768i64) + 168i64);
                goto LABEL_1037;
            case 0x138:
                v211 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 560) ^ v9;
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v211 + 72) + 232i64) + 232i64) + 344i64) + 288i64) ^ v634;
                goto LABEL_1036;
            case 0x139:
                v634 = ~(v9 + 1406607942);
                v212 = a1;
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 864i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v212 + 72) + 864i64);
                goto LABEL_1037;
            case 0x13A:
                v213 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 136) ^ v9;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v213 + 360) + 560i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v213 + 360) + 576i64) + 400i64);
                goto LABEL_1037;
            case 0x13B:
                v214 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 216i64) + 128i64) + 128i64) + 776i64) + 600i64);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(v214 + 288);
                goto LABEL_1036;
            case 0x13C:
                v215 = a1;
                v216 = v9 ^ (-530609701 * FuckEnc::CacheRead<_DWORD>(a1 + 920));
                goto LABEL_325;
            case 0x13D:
                v217 = a1;
                v634 = (v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 832) + FuckEnc::CacheRead<_DWORD>(a1 + 456) + 1230613798)) + 800423125;
                v634 ^= FuckEnc::CacheRead<_DWORD>(v217 + 832);
                goto LABEL_1037;
            case 0x13E:
                v218 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 328) ^ v9;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v218 + 576) + 216i64) + 584i64, &v634, a1);
                goto LABEL_1037;
            case 0x13F:
                v634 = v9 ^ 0x7A1947A0;
                v634 = (v9 ^ 0x7A1947A0) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 544i64) + 80i64) + 344i64) + 112i64) + 720i64);
                goto LABEL_1037;
            case 0x140:
                v634 = v9 + 1573130503;
                v634 = (v9 + 1573130503) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 400) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 128) + 912i64) + 520i64));
                goto LABEL_1037;
            case 0x141:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 536i64) + 128i64) + 800i64, &v634, a1);
                goto LABEL_1037;
            case 0x142:
                v634 = v9 ^ 0x382E79A;
                v14 = ((v9 ^ 0x382E79A) - ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 648i64) + 1815871523) ^ 0x4C8D6751)) ^ 0xAA376585;
                goto LABEL_1036;
            case 0x143:
                v219 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 912i64) + 688i64) ^ v9;
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v219 + 72) + 536i64) + 360i64) + 136i64) ^ v634;
                goto LABEL_1036;
            case 0x144:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 592i64) + 304i64) + 232i64) + 208i64, &v634, a1);
                goto LABEL_1037;
            case 0x145:
                v220 = a1;
                v634 = v9 + ~(FuckEnc::CacheRead<_DWORD>(a1 + 688) ^ 0x19C87642);
                v634 += FuckEnc::CacheRead<_DWORD>(v220 + 136);
                v634 = v634 - FuckEnc::CacheRead<_DWORD>(v220 + 752) - 1266841573;
                goto LABEL_1037;
            case 0x146:
                Calls::FastCall(a1 + 816, &v634, a1);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 784) + 360i64) + 368i64);
                goto LABEL_1037;
            case 0x147:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 832) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 576i64) + 544i64) + 536i64) + 136i64);
                goto LABEL_1037;
            case 0x148:
                v634 = v9 + (~FuckEnc::CacheRead<_DWORD>(a1 + 288) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 128i64) + 600i64) & 0xFFFFFFE7);
                goto LABEL_1037;
            case 0x149:
                v634 = v9 ^ 0xE0AE8C6C;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 216) + 80i64) + 584i64, &v634, a1);
                goto LABEL_1037;
            case 0x14A:
                v221 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 216) + 112i64) + 400i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v221 + 720);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v221 + 256);
                goto LABEL_1037;
            case 0x14B:
                v222 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 600);
                v14 = v634 - (FuckEnc::CacheRead<_DWORD>(v222 + 168) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v222 + 216) + 288i64) ^ 0xB3A1CCC9);
                goto LABEL_1036;
            case 0x14C:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 544i64) + 344i64) + 304i64) + 808i64) + 768i64) + 632i64);
                goto LABEL_1037;
            case 0x14D:
                v223 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 752);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v223 + 464) + 568i64, &v634, a1);
                goto LABEL_1037;
            case 0x14E:
                v224 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 24);
                Calls::FastCall(v224 + 816, &v634, v224);
                v634 -= FuckEnc::CacheRead<_DWORD>(a1 + 96);
                goto LABEL_1037;
            case 0x14F:
                v225 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 56);
                v634 -= FuckEnc::CacheRead<_DWORD>(v225 + 560);
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v225 + 232) + 88i64) + 552i64) + 56i64) ^ v634;
                goto LABEL_1036;
            case 0x150:
                v634 = v9 ^ 0x8372C921;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 112i64) + 16i64, &v634, a1);
                goto LABEL_1037;
            case 0x151:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 784i64) + 232i64) + 448i64) + 128i64) + 232i64) + 696i64) + 648i64);
                goto LABEL_1037;
            case 0x152:
                v634 = v9 + 1293411647;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 72i64) + 680i64) + 600i64) ^ (v9 + 1293411647);
                goto LABEL_1037;
            case 0x153:
                v226 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 880);
                v634 = (v634 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v226 + 808) + 600i64)) ^ 0x9060B520;
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v226 + 320) + 400i64);
                goto LABEL_1037;
            case 0x154:
                v227 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 560);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v227 + 448) + 184i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v227 + 464) + 448i64) + 368i64);
                goto LABEL_1037;
            case 0x155:
                v228 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 920);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v228 + 544) + 112i64) + 152i64, &v634, a1);
                goto LABEL_1037;
            case 0x156:
                v229 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 600);
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v229 + 312) + 784i64) + 320i64) + 544i64) + 56i64) ^ v634;
                goto LABEL_1036;
            case 0x157:
                v230 = a1;
                v634 = v9 ^ ~(1025209931 * FuckEnc::CacheRead<_DWORD>(a1 + 456));
                v634 = ~(v634 + FuckEnc::CacheRead<_DWORD>(v230 + 256));
                v634 -= FuckEnc::CacheRead<_DWORD>(v230 + 832);
                goto LABEL_1037;
            case 0x158:
                v14 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 216) + 128i64) + 768i64) + 688i64) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 400) - 1824825424) ^ 0xA535E5F6);
                goto LABEL_1036;
            case 0x159:
                v231 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 216i64) + 808i64) + 368i64) ^ v9;
                v14 = ~(v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v231 + 72) + 632i64));
                goto LABEL_1036;
            case 0x15A:
                v634 = v9 ^ 0x2E2DA4EA;
                v191 = FuckEnc::CacheRead<_QWORD>(a1 + 912);
            LABEL_288:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v191 + 552) + 264i64, &v634, a1);
                goto LABEL_1037;
            case 0x15B:
                v232 = a1;
                v634 = ((v9 - FuckEnc::CacheRead<_DWORD>(a1 + 368)) ^ 0x5237863E) + 890121119;
                v634 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v232) + 784i64) + 184i64) ^ v634) - 1241654717;
                goto LABEL_1037;
            case 0x15C:
                v14 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 416i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 576) + 344i64) + 792i64) ^ 0xF3593BB9);
                goto LABEL_1036;
            case 0x15D:
                v233 = a1;
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 224) * FuckEnc::CacheRead<_DWORD>(a1 + 880) * ~FuckEnc::CacheRead<_DWORD>(a1 + 256));
                v634 ^= FuckEnc::CacheRead<_DWORD>(v233 + 184);
                goto LABEL_1037;
            case 0x15E:
                v234 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 752);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v234 + 784) + 688i64);
                v634 ^= -217896960 * FuckEnc::CacheRead<_DWORD>(v234 + 792);
                goto LABEL_1037;
            case 0x15F:
                v634 = (v9 + 1920423774 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 80i64) + 912i64) + 768i64) + 552i64) + 864i64)) ^ 0x4E8A6389;
                goto LABEL_1037;
            case 0x160:
                v235 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 168) ^ v9;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v235) + 24i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v235 + 680) + 808i64) + 256i64);
                goto LABEL_1037;
            case 0x161:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 600i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 824i64) + 552i64) + 752i64));
                goto LABEL_1037;
            case 0x162:
                v236 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 448i64) + 688i64);
                v634 += 993404501 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v236 + 464) + 216i64) + 720i64);
                goto LABEL_1037;
            case 0x163:
                v237 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 368) ^ v9;
                v634 ^= 319727265 * FuckEnc::CacheRead<_DWORD>(v237 + 880) + 906569652 * FuckEnc::CacheRead<_DWORD>(v237 + 56);
                goto LABEL_1037;
            case 0x164:
                v238 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 128) + 256i64);
                Calls::FastCall(v238 + 32, &v634, v238);
                goto LABEL_1037;
            case 0x165:
                v239 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 592i64) + 552i64) + 832i64) - FuckEnc::CacheRead<_DWORD>(a1 + 328);
                v634 += FuckEnc::CacheRead<_DWORD>(v239 + 136);
                goto LABEL_1037;
            case 0x166:
                v240 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 752) - 70857630;
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v240 + 80) + 560i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v240 + 128) + 688i64);
                goto LABEL_1037;
            case 0x167:
                v634 = ~(v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 696) + 592i64) + 776i64) + 592i64) + 368i64));
                goto LABEL_1037;
            case 0x168:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 680i64) + 128i64) + 72i64) + 480i64, &v634, a1);
                goto LABEL_1037;
            case 0x169:
                v241 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 488) - 212253470;
                v634 -= FuckEnc::CacheRead<_DWORD>(v241 + 632);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v241) + 920i64) ^ 0xCEFFE4CC;
                goto LABEL_1037;
            case 0x16A:
                v242 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 632);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v242 + 304) + 256i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v242 + 808) + 752i64) + 1;
                goto LABEL_1037;
            case 0x16B:
                v634 = (v9 ^ 0x93A89A17) + 1191451476;
                v634 += -FuckEnc::CacheRead<_DWORD>(a1 + 368) - 102877775;
                goto LABEL_1037;
            case 0x16C:
                v243 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 720);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v243 + 448) + 776i64) + 784i64) + 464i64) + 328i64);
                goto LABEL_1036;
            case 0x16D:
                v244 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 808i64) + 416i64);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v244 + 128) + 592i64) + 696i64) + 256i64);
                goto LABEL_1036;
            case 0x16E:
                v245 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 560) + 2050931827;
                v634 ^= FuckEnc::CacheRead<_DWORD>(v245 + 920) ^ 0x42B06704;
                v634 ^= FuckEnc::CacheRead<_DWORD>(v245 + 600) & 0xFFFFFFF0;
                goto LABEL_1037;
            case 0x16F:
                v246 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 24);
                v634 -= FuckEnc::CacheRead<_DWORD>(v246 + 648);
                v634 += 1066698624 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v246 + 216) + 448i64) + 520i64);
                goto LABEL_1037;
            case 0x170:
                v247 = a1;
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 24) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 520i64));
                v634 -= 1776488222 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v247 + 536) + 24i64);
                goto LABEL_1037;
            case 0x171:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 304i64) + 544i64) + 448i64) + 312i64) + 784i64) + 360i64) + 256i64) ^ v9;
                goto LABEL_1036;
            case 0x172:
                v634 = v9 ^ 0xFD430A1F;
                v634 = ((v9 ^ 0xFD430A1F) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 88i64) + 784i64) + 592i64) + 184i64)) ^ 0xDBC1F9D8;
                goto LABEL_1037;
            case 0x173:
                v634 = v9 ^ 0x476E8C40;
                v248 = a1;
                v634 = (v9 ^ 0x476E8C40) - FuckEnc::CacheRead<_DWORD>(a1 + 168);
                Calls::FastCall(v248 + 16, &v634, v248);
                goto LABEL_1037;
            case 0x174:
                v249 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 688i64) ^ v9;
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v249 + 680) + 112i64) + 344i64) + 136i64);
                goto LABEL_1036;
            case 0x175:
                v14 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 464i64) + 520i64) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 112i64) + 832i64) + 952354769));
                goto LABEL_1036;
            case 0x176:
                v634 = v9 - 560587142;
                v634 = (v9 - 560587142) ^ ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 216) + 288i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 224i64));
                goto LABEL_1037;
            case 0x177:
                v250 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 288) + 2069402426;
                Calls::FastCall(v250 + 800, &v634, v250);
                goto LABEL_1037;
            case 0x178:
                v251 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 448i64) + 96i64);
                v634 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v251 + 88) + 752i64) ^ v634) - 943903156;
                goto LABEL_1037;
            case 0x179:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 688) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 128i64) + 552i64) + 320i64) + 880i64));
                goto LABEL_1037;
            case 0x17A:
                v252 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 864) ^ v9;
                v634 += (FuckEnc::CacheRead<_DWORD>(v252 + 720) | 3) + 1;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v252 + 72) + 648i64);
                goto LABEL_1037;
            case 0x17B:
                v634 = ((unsigned int)0x94721E3 + 6) ^ v9;
                v14 = (((unsigned int)0x94721E3 + 6) ^ v9) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 536i64) + 824i64) + 776i64) + 592i64) + 136i64);
                goto LABEL_1036;
            case 0x17C:
                v634 = v9 - 2073325861;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 536i64) + 112i64) + 320i64) + 328i64) ^ (v9 - 2073325861);
                goto LABEL_1037;
            case 0x17D:
                v253 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 784) + 464i64) + 24i64);
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v253 + 544) + 112i64) + 560i64) ^ v634;
                goto LABEL_1036;
            case 0x17E:
                v254 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 288) ^ v9 ^ 0x8AD18FC3;
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v254 + 536) + 592i64) + 680i64) + 416i64);
                goto LABEL_1036;
            case 0x17F:
                v255 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 24) ^ v9;
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v255 + 576) + 368i64);
                v634 += ~(822900018 * FuckEnc::CacheRead<_DWORD>(v255 + 184));
                goto LABEL_1037;
            case 0x180:
                v634 = v9 ^ 0xC0879FB7;
                Calls::FastCall(a1 + 504, &v634, a1);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 864i64);
                goto LABEL_1037;
            case 0x181:
                v256 = a1;
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 864) | 0x1F);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v256 + 824) + 536i64) + 224i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v256 + 56);
                goto LABEL_1037;
            case 0x182:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 360i64) + 912i64) + 168i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 488i64);
                goto LABEL_1036;
            case 0x183:
                v634 = (unsigned int)0x5970AFA + v9 + 6;
                v257 = a1;
                v634 = (v634 - (FuckEnc::CacheRead<_DWORD>(a1 + 520) & 0xFFFFFFE9)) ^ 0xBC8FF6A3;
                v634 -= FuckEnc::CacheRead<unsigned __int8>(v257 + 491);
                goto LABEL_1037;
            case 0x184:
                v258 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 360i64) + 464i64) + 696i64) + 128i64) + 56i64) ^ v9;
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(v258 + 880);
                goto LABEL_1036;
            case 0x185:
                v259 = a1;
                v634 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 768i64) + 136i64) ^ 0x2BA7BB6C);
                v634 += FuckEnc::CacheRead<_DWORD>(v259 + 256);
                goto LABEL_1037;
            case 0x186:
                v260 = a1;
                v261 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 576) + 168i64) + 2095923028);
                goto LABEL_400;
            case 0x187:
                v634 = v9 ^ 0x63B9E7D2;
                v262 = a1;
                v634 = ((v9 ^ 0x63B9E7D2) - FuckEnc::CacheRead<_DWORD>(a1 + 256)) ^ 0xB5AEA398;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v262 + 552) + 808i64) + 560i64);
                goto LABEL_1037;
            case 0x188:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 544i64) + 912i64) + 464i64) + 344i64) + 368i64) + 1;
                goto LABEL_1037;
            case 0x189:
                v634 = v9 + 1237898023;
                v263 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 416) ^ (v9 + 1237898023);
                v634 -= FuckEnc::CacheRead<_DWORD>(v263 + 520) ^ 0xD8B7319B;
                v634 += FuckEnc::CacheRead<_DWORD>(v263 + 720);
                goto LABEL_1037;
            case 0x18A:
                v264 = a1;
                v634 = (v9 + 1937762920 * FuckEnc::CacheRead<_DWORD>(a1 + 560)) ^ 0x9FB2D527;
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v264 + 448) + 592i64) + 216i64) + 56i64);
                goto LABEL_1037;
            case 0x18B:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 696i64) + 552i64) + 88i64) + 88i64) + 216i64) + 184i64) ^ v9;
                goto LABEL_1036;
            case 0x18C:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 592i64) + 360i64) + 912i64) + 248i64, &v634, a1);
                goto LABEL_1037;
            case 0x18D:
                v265 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 320i64) + 632i64);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v265 + 80) + 544i64) + 288i64);
                goto LABEL_1037;
            case 0x18E:
                v266 = a1;
                v634 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 792) | 0x11);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v266 + 688) ^ (FuckEnc::CacheRead<_DWORD>(v266 + 416) - ((_DWORD)0x516BC14 + 3));
                goto LABEL_1037;
            case 0x18F:
                v267 = a1;
                v634 = v9 ^ ((FuckEnc::CacheRead<_DWORD>(a1 + 600) << 29) - 1688218246);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v267 + 128) + 824i64) + 688i64) ^ 0x35EA0749;
                goto LABEL_1037;
            case 0x190:
                v634 = v9 - 605576073;
                v268 = a1;
                v634 = v9 - 605576073 + FuckEnc::CacheRead<_DWORD>(a1 + 136);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v268 + 128) + 912i64) + 232i64) + 600i64);
                goto LABEL_1037;
            case 0x191:
                v269 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 288);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v269 + 696) + 696i64) + 416i64) ^ ~FuckEnc::CacheRead<_DWORD>(v269 + 488);
                goto LABEL_1037;
            case 0x192:
                v14 = v9 - ((FuckEnc::CacheRead<_DWORD>(a1 + 400) * ~FuckEnc::CacheRead<_DWORD>(a1 + 416)) | 0x13) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 648i64);
                goto LABEL_1036;
            case 0x193:
                v270 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 216) + 112i64) + 344i64) + 520i64);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v270 + 344) + 784i64) + 56i64);
                goto LABEL_1037;
            case 0x194:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 312) + 696i64) + 784i64) + 320i64) + 312i64) + 216i64) + 520i64);
                goto LABEL_1036;
            case 0x195:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 824) + 312i64) + 304i64) + 344i64) + 680i64) + 320i64) + 784i64) + 520i64);
                goto LABEL_1037;
            case 0x196:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 648i64) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 912i64) + 752i64));
                goto LABEL_1037;
            case 0x197:
                v634 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 360i64) + 912i64) + 360i64) + 448i64) + 696i64) + 224i64);
                goto LABEL_1037;
            case 0x198:
                v271 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 128i64) + 224i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v271 + 688) ^ (FuckEnc::CacheRead<_DWORD>(v271 + 24) | 0x1B);
                goto LABEL_1037;
            case 0x199:
                v272 = a1;
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 464i64) + 216i64) + 880i64) + 1951827146) ^ 0x838A693F;
                v634 ^= FuckEnc::CacheRead<_DWORD>(v272 + 792);
                goto LABEL_1037;
            case 0x19A:
                v634 = v9 - 2143300833;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 576) + 912i64) + 320i64) + 232i64) + 136i64) ^ (v9 - 2143300833);
                goto LABEL_1037;
            case 0x19B:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 544i64) + 808i64) + 544i64) + 736i64, &v634, a1);
                goto LABEL_1037;
            case 0x19C:
                v273 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 864) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 784) + 576i64) + 168i64);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v273 + 360) + 864i64);
                goto LABEL_1036;
            case 0x19D:
                v274 = a1;
                v634 = v9 + 454973290 * FuckEnc::CacheRead<_DWORD>(a1 + 456);
                v634 ^= (FuckEnc::CacheRead<_DWORD>(v274 + 24) | 0x12) - 1551249989;
                goto LABEL_1037;
            case 0x19E:
                v634 = v9 - 350777051;
                v275 = a1;
                v634 = (v9 - 350777051) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 224) - 689492034);
                v634 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v275 + 544) + 416i64) - 1327833887;
                goto LABEL_1037;
            case 0x19F:
                v634 = v9 - 1938679839;
                v634 = (v9 - 1938679839) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 824) + 488i64) + (((unsigned int)0xCA60715 + 4) ^ FuckEnc::CacheRead<_DWORD>(a1 + 880)));
                goto LABEL_1037;
            case 0x1A0:
                v634 = v9 ^ 0x90951BF2;
                v276 = a1;
                v634 = (v9 ^ 0x90951BF2) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 648i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v276) + 600i64);
                goto LABEL_1037;
            case 0x1A1:
                v634 = v9 - 1080407490;
                v277 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 168) ^ (v9 - 1080407490);
                v634 ^= ~((16 * FuckEnc::CacheRead<_DWORD>(v277 + 864)) ^ 0xE0D272D6);
                goto LABEL_1037;
            case 0x1A2:
                v634 = v9 + 1236342851 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 112i64) + 80i64) + 488i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 520i64);
                goto LABEL_1037;
            case 0x1A3:
                v278 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 184);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v278 + 808) + 776i64) + 400i64);
                v634 += FuckEnc::CacheRead<_DWORD>(v278 + 752);
                goto LABEL_1037;
            case 0x1A4:
                v279 = a1;
                v634 = ~(FuckEnc::CacheRead<_DWORD>(a1 + 288) ^ v9);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v279 + 320) + 72i64) + 128i64) + 288i64);
                goto LABEL_1036;
            case 0x1A5:
                v280 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 920);
                v634 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v280 + 576) + 768i64) + 520i64) - FuckEnc::CacheRead<_DWORD>(v280 + 456);
                goto LABEL_1037;
            case 0x1A6:
                v281 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 88i64) + 72i64) + 632i64) ^ v9;
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v281 + 808) + 768i64) + 456i64);
                goto LABEL_1036;
            case 0x1A7:
                v282 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 688);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v282 + 216) + 592i64) + 72i64) + 576i64) + 416i64);
                goto LABEL_1036;
            case 0x1A8:
                v283 = a1;
                v634 = (FuckEnc::CacheRead<_DWORD>(a1 + 224) ^ v9) + 1346406550;
                v634 = (_DWORD)0x4BF3E05 + v634 - FuckEnc::CacheRead<_DWORD>(v283 + 288);
                v634 += FuckEnc::CacheRead<_DWORD>(v283 + 136) + 1;
                goto LABEL_1037;
            case 0x1A9:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 448i64) + 912i64) + 544i64) + 464i64) + 304i64) + 912i64) + 224i64);
                goto LABEL_1036;
            case 0x1AA:
                v284 = a1;
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 832) << 17) + 1;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v284 + 216) + 464i64) + 784i64) + 328i64);
                goto LABEL_1037;
            case 0x1AB:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 552i64) + 360i64) + 40i64, &v634, a1);
                goto LABEL_1037;
            case 0x1AC:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 824i64) + 680i64) + 912i64) + 504i64, &v634, a1);
                goto LABEL_1037;
            case 0x1AD:
                v634 = (v9 + 597923074) ^ 0xC538BF67;
                v285 = a1;
                v634 += FuckEnc::CacheRead<_DWORD>(a1 + 920) - 62590414;
                v634 ^= FuckEnc::CacheRead<_DWORD>(v285 + 720) ^ 0x981A381D;
                goto LABEL_1037;
            case 0x1AE:
                v286 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 184);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v286 + 312) + 72i64) + 456i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v286 + 648);
                goto LABEL_1037;
            case 0x1AF:
                v634 = v9 + 1366403969;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 536i64) + 384i64, &v634, a1);
                goto LABEL_1037;
            case 0x1B0:
                v634 = v9 + 2101585796;
                v287 = a1;
                v634 = v9 + 2101585796 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 312i64) + 304i64) + 600i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v287 + 792);
                goto LABEL_1037;
            case 0x1B1:
                v288 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 256) + 545529504;
                v634 += FuckEnc::CacheRead<_DWORD>(v288 + 288);
                Calls::FastCall(v288 + 480, &v634, v288);
                goto LABEL_1037;
            case 0x1B2:
                v289 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 696i64) + 880i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v289 + 456);
                v634 -= FuckEnc::CacheRead<_DWORD>(v289 + 864);
                goto LABEL_1037;
            case 0x1B3:
                v290 = a1;
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 720) & 0xFFFFFFF1);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v290 + 96);
                v634 = v634 - (FuckEnc::CacheRead<_DWORD>(v290 + 136) & 0xFFFFFFF7) - (_DWORD)0x107D6D91;
                goto LABEL_1037;
            case 0x1B4:
                v14 = (v9 - 2013265920 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 552i64) + 768i64) + 24i64) + 1) ^ 0xCEE00F63;
                goto LABEL_1036;
            case 0x1B5:
                v291 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 552) + 184i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v291 + 464) + 440i64, &v634, a1);
                goto LABEL_1037;
            case 0x1B6:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 824i64) + 304i64) + 728i64, &v634, a1);
                goto LABEL_1037;
            case 0x1B7:
                v634 = v9 - 2563812;
                v634 = v9 - 2563812 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 400i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 288i64);
                goto LABEL_1037;
            case 0x1B8:
                Calls::FastCall(a1 + 104, &v634, a1);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 696i64) + 328i64);
                goto LABEL_1037;
            case 0x1B9:
                v292 = a1;
                v634 = (v9 - FuckEnc::CacheRead<_DWORD>(a1 + 752)) ^ 0x45E65783;
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v292 + 696) + 544i64) + 552i64) + 232i64) + 136i64);
                goto LABEL_1036;
            case 0x1BA:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 504i64, &v634, a1);
                v634 -= FuckEnc::CacheRead<_DWORD>(a1 + 520);
                goto LABEL_1037;
            case 0x1BB:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 552i64) + 312i64) + 80i64) + 584i64, &v634, a1);
                goto LABEL_1037;
            case 0x1BC:
                v293 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 400) ^ v9;
                v634 += ~FuckEnc::CacheRead<_DWORD>(v293 + 256);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v293 + 552) + 648i64) - 1179308519;
                goto LABEL_1037;
            case 0x1BD:
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 784) + 632i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 304i64) + 464i64) + 224i64));
                goto LABEL_1037;
            case 0x1BE:
                v294 = a1;
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 456i64) >> 11);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v294 + 88) + 304i64) + 416i64);
                goto LABEL_1037;
            case 0x1BF:
                v295 = a1;
                v634 = v9 + ~(-836740394 * FuckEnc::CacheRead<_DWORD>(a1 + 96));
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v295 + 576) + 576i64) + 560i64);
                goto LABEL_1037;
            case 0x1C0:
                v296 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 368) + 603473049;
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v296 + 112) + 576i64) + 464i64) + 136i64);
                goto LABEL_1037;
            case 0x1C1:
                v634 = v9 + 867322221;
                v634 = v9 + 867322221 + ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 56i64) * ~FuckEnc::CacheRead<_DWORD>(a1 + 560));
                goto LABEL_1037;
            case 0x1C2:
                Calls::FastCall(a1 + 40, &v634, a1);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 576) + 576i64) + 792i64);
                goto LABEL_1037;
            case 0x1C3:
                v634 = v9 + 1147296352 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 72i64) + 776i64) + 320i64) + 784i64) + 920i64);
                goto LABEL_1037;
            case 0x1C4:
                v297 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 136);
                v14 = ~((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v297 + 112) + 88i64) + 448i64) + 184i64) ^ v634) + 1764804034);
                goto LABEL_1036;
            case 0x1C5:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 912i64) + 312i64) + 680i64) + 576i64) + 224i64) ^ v9 ^ 0x8AE1F597;
                goto LABEL_1036;
            case 0x1C6:
                v298 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 168);
                v634 -= FuckEnc::CacheRead<_DWORD>(v298 + 752) ^ 0x7FA53AB8;
                v634 ^= FuckEnc::CacheRead<_DWORD>(v298 + 168) << 21;
                goto LABEL_1037;
            case 0x1C7:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 808i64) + 552i64) + 776i64) + 824i64) + 320i64) + 184i64) ^ v9;
                goto LABEL_1036;
            case 0x1C8:
                v299 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 688);
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v299 + 544) + 360i64) + 592i64) + 576i64) + 600i64) ^ v634;
                goto LABEL_1036;
            case 0x1C9:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 768) + 360i64) + 104i64, &v634, a1);
                goto LABEL_1037;
            case 0x1CA:
                v300 = a1;
                v634 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 680i64) + 688i64) ^ v9) - 929706125;
                v634 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v300 + 536) + 224i64) - 1359968253;
                goto LABEL_1037;
            case 0x1CB:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 72i64) + 448i64) + 312i64) + 576i64) + 344i64) + 520i64) ^ v9;
                goto LABEL_1036;
            case 0x1CC:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 88i64) + 80i64) + 800i64, &v634, a1);
                goto LABEL_1037;
            case 0x1CD:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 464i64) + 112i64) + 32i64, &v634, a1);
                goto LABEL_1037;
            case 0x1CE:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 912i64) + 232i64) + 216i64) + 536i64) + 488i64);
                goto LABEL_1036;
            case 0x1CF:
                v634 = v9 ^ 0x85A5B7D7;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 824) + 304i64) + 384i64, &v634, a1);
                goto LABEL_1037;
            case 0x1D0:
                v301 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 688);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v301 + 544) + 304i64) + 72i64) + 224i64) + 1706685281;
                goto LABEL_1037;
            case 0x1D1:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 128i64) + 24i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 232i64) + 464i64) + 864i64));
                goto LABEL_1037;
            case 0x1D2:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 224) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 128) + 536i64) + 696i64) + 768i64) + 256i64);
                goto LABEL_1037;
            case 0x1D3:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 80) + 696i64) + 128i64) + 544i64) + 680i64) + 552i64) + 824i64) + 832i64) ^ v9;
                goto LABEL_1036;
            case 0x1D4:
                v302 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 328i64);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v302 + 808) + 880i64) + 791747723;
                v634 += FuckEnc::CacheRead<_DWORD>(v302 + 184);
                goto LABEL_1037;
            case 0x1D5:
                v303 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 880);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v303 + 232) + 456i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v303 + 312) + 920i64);
                goto LABEL_1037;
            case 0x1D6:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 576) + 552i64) + 216i64) + 168i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 288i64);
                goto LABEL_1036;
            case 0x1D7:
                v304 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 648i64);
                v634 = (v634 + FuckEnc::CacheRead<_DWORD>(v304 + 864)) ^ 0xF8541964;
                v634 = ~(v634 - FuckEnc::CacheRead<_DWORD>(v304 + 600));
                goto LABEL_1037;
            case 0x1D8:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 416) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 368i64) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 456i64);
                goto LABEL_1037;
            case 0x1D9:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 232i64) + 304i64) + 464i64) + 696i64) + 136i64) - 1062635879;
                goto LABEL_1036;
            case 0x1DA:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 256i64) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 312i64) + 344i64) + 688i64));
                goto LABEL_1037;
            case 0x1DB:
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 368) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 552i64) + 88i64) + 792i64) ^ 0x871CC342);
                goto LABEL_1037;
            case 0x1DC:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 304i64) + 576i64) + 600i64) * ((FuckEnc::CacheRead<_DWORD>(a1 + 720) | 3) - 1627744273);
                goto LABEL_1036;
            case 0x1DD:
                v305 = a1;
                v634 = v9 + (((~FuckEnc::CacheRead<_DWORD>(a1 + 648) | 6) - 535365645) ^ 0x2FC4A3CC);
                v634 = v634 - FuckEnc::CacheRead<_DWORD>(v305 + 520) + 1957113106;
                goto LABEL_1037;
            case 0x1DE:
                v306 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 576) + 752i64) ^ v9 ^ 0x6BA19A22;
                v634 = (v634 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v306 + 360) + 304i64) + 168i64)) ^ 0xAAE25C57;
                goto LABEL_1037;
            case 0x1DF:
                v307 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 648);
                v634 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v307 + 80) + 360i64) + 216i64) + 72i64) + 288i64) - (_DWORD)0xF86172A;
                goto LABEL_1037;
            case 0x1E0:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 720i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 784i64) + 792i64) + 511740283;
                goto LABEL_1037;
            case 0x1E1:
                v308 = a1;
                v634 = v9 ^ (16 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 680i64) + 456i64));
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v308 + 360) + 808i64) + 224i64);
                goto LABEL_1037;
            case 0x1E2:
                v634 = v9 + 1111179615;
                v634 = v9 + 1111179615 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 304) + 592i64) + 680i64) + 168i64) - 320624196;
                goto LABEL_1037;
            case 0x1E3:
                v309 = a1;
                v634 = ~(v9 - FuckEnc::CacheRead<_DWORD>(a1 + 752) - 2121498303);
                v634 -= FuckEnc::CacheRead<_DWORD>(v309 + 880);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v309 + 256) + 839379882;
                goto LABEL_1037;
            case 0x1E4:
                v310 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 256);
                v634 -= FuckEnc::CacheRead<_DWORD>(v310 + 184) >> 22;
                v634 = v634 - (FuckEnc::CacheRead<_DWORD>(v310 + 96) << 26) + 1923832038;
                goto LABEL_1037;
            case 0x1E5:
                v311 = a1;
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 416) >> 5);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v311 + 824) + 312i64) + 72i64) + 864i64);
                goto LABEL_1037;
            case 0x1E6:
                v312 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 864) ^ v9;
                v634 = (unsigned int)0xA6EBFF5 ^ (v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v312 + 808) + 416i64));
                v634 += FuckEnc::CacheRead<_DWORD>(v312 + 24) ^ 0x68AD737D;
                goto LABEL_1037;
            case 0x1E7:
                v313 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 400);
                v634 += FuckEnc::CacheRead<_DWORD>(v313 + 560);
                v634 = v634 - FuckEnc::CacheRead<_DWORD>(v313 + 688) - 389398689;
                goto LABEL_1037;
            case 0x1E8:
                Calls::FastCall(a1 + 272, &v634, a1);
                v634 += 1754840021 * (FuckEnc::CacheRead<_DWORD>(a1 + 560) | 0xD);
                goto LABEL_1037;
            case 0x1E9:
                v314 = a1;
                v634 = v9 + 434354702 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 688i64);
                v634 += FuckEnc::CacheRead<_DWORD>(v314 + 56) + 917060564 * FuckEnc::CacheRead<_DWORD>(v314 + 600);
                goto LABEL_1037;
            case 0x1EA:
                v315 = a1;
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 832) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 552i64) + 256i64));
                v634 = (FuckEnc::CacheRead<_DWORD>(v315 + 864) ^ v634) - 1625691973;
                goto LABEL_1037;
            case 0x1EB:
                v316 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 288);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v316 + 368) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v316 + 544) + 536i64) + 680i64) + 288i64);
                goto LABEL_1037;
            case 0x1EC:
                v317 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 648i64);
                v634 ^= 1855920973 * ~(FuckEnc::CacheRead<_DWORD>(v317 + 56) & 0xFFFFFFF7);
                goto LABEL_1037;
            case 0x1ED:
                v634 = v9 ^ 0x96BAF6F6;
                v634 = (v9 ^ 0x96BAF6F6) + ~(FuckEnc::CacheRead<_DWORD>(a1 + 752) >> 9) + ~FuckEnc::CacheRead<_DWORD>(a1 + 168);
                goto LABEL_1037;
            case 0x1EE:
                v318 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 752);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v318) + 680i64) + 776i64) + 360i64) + 320i64) + 328i64);
                goto LABEL_1037;
            case 0x1EF:
                Calls::FastCall(a1 + 272, &v634, a1);
                v634 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 688i64);
                goto LABEL_1037;
            case 0x1F0:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 80i64) + 88i64) + 464i64) + 480i64, &v634, a1);
                goto LABEL_1037;
            case 0x1F1:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 304i64) + 576i64) + 544i64) + 112i64) + 776i64) + 112i64) + 520i64);
                goto LABEL_1037;
            case 0x1F2:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 776i64) + 16i64, &v634, a1);
                v634 += 988986307;
                goto LABEL_1037;
            case 0x1F3:
                v319 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 600);
                v634 ^= ~FuckEnc::CacheRead<_DWORD>(v319 + 792);
                v634 ^= ~FuckEnc::CacheRead<_DWORD>(v319 + 488);
                goto LABEL_1037;
            case 0x1F4:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 552i64) + 808i64) + 776i64) + 40i64, &v634, a1);
                goto LABEL_1037;
            case 0x1F5:
                v14 = v9 - 1750867565 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 216i64) + 784i64) + 808i64) + 80i64) + 56i64) - 597151053;
                goto LABEL_1036;
            case 0x1F6:
                v320 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 688) ^ v9;
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(v320 + 864) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v320 + 128) + 320i64) + 72i64) + 792i64);
                goto LABEL_1036;
            case 0x1F7:
                v634 = v9 + 1449250110;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 696i64) + 552i64) + 808i64) + 328i64) ^ (v9 + 1449250110) ^ 0x376F1085;
                goto LABEL_1037;
            case 0x1F8:
                v634 = ~(v9 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 232i64) + 80i64) + 824i64) + 184i64));
                goto LABEL_1037;
            case 0x1F9:
                v321 = a1;
                v634 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(a1 + 256);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v321 + 912) + 576i64) + 216i64) + 520i64);
                goto LABEL_1037;
            case 0x1FA:
                v14 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 128) + 320i64) + 520i64) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 824) + 912i64) + 920i64) >> 12));
                goto LABEL_1036;
            case 0x1FB:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 912i64) + 784i64) + 360i64) + 88i64) + 696i64) + 696i64) + 720i64) ^ v9;
                goto LABEL_1036;
            case 0x1FC:
                v322 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 88i64) + 912i64) + 560i64) ^ v9 ^ 0xD3ACE632;
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v322 + 360) + 456i64);
                goto LABEL_1036;
            case 0x1FD:
                v634 = v9 + 1440514806;
                v634 = (v9 + 1440514806) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 96i64) * ~(FuckEnc::CacheRead<_DWORD>(a1 + 400) >> 11));
                goto LABEL_1037;
            case 0x1FE:
                v323 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 184);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v323 + 416) | 7;
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v323 + 808) + 88i64) + 752i64);
                goto LABEL_1037;
            case 0x1FF:
                v324 = a1;
                v325 = FuckEnc::CacheRead<_DWORD>(a1 + 600) ^ v9;
                v634 = v325;
                v326 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v324 + 344) + 592i64) + 696i64);
                goto LABEL_522;
            case 0x200:
                v634 = v9 ^ 0x61174D55;
                v14 = (v9 ^ 0x61174D55) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 232i64) + 312i64) + 544i64) + 536i64) + 184i64);
                goto LABEL_1036;
            case 0x201:
                v327 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 488i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v327 + 768) + 736i64, &v634, a1);
                goto LABEL_1037;
            case 0x202:
                v328 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 520);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v328 + 328) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v328 + 696) + 912i64) + 312i64) + 56i64);
                goto LABEL_1037;
            case 0x203:
                v329 = a1;
                v634 = (v9 - FuckEnc::CacheRead<_DWORD>(a1 + 400)) ^ 0x444EEDA0;
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v329 + 808) + 216i64) + 824i64) + 696i64) + 184i64) ^ v634;
                goto LABEL_1036;
            case 0x204:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 824i64) + 344i64) + 136i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 312i64) + 136i64));
                goto LABEL_1037;
            case 0x205:
                v330 = a1;
                v634 = (v9 - FuckEnc::CacheRead<_DWORD>(a1 + 456)) ^ 0xDCB909CC;
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v330 + 808) + 864i64);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v330 + 88) + 96i64);
                goto LABEL_1036;
            case 0x206:
                v331 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 80) + 648i64);
                v634 -= (FuckEnc::CacheRead<_DWORD>(v331 + 488) + (FuckEnc::CacheRead<_DWORD>(v331 + 632) >> 1)) | 2;
                goto LABEL_1037;
            case 0x207:
                v332 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 600);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v332 + 768) + 600i64);
                v634 += 472065846 * (FuckEnc::CacheRead<_DWORD>(v332 + 256) | 7);
                goto LABEL_1037;
            case 0x208:
                v333 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 256) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 80) + 232i64) + 56i64) + 883349853;
                v634 += FuckEnc::CacheRead<_DWORD>(v333 + 560);
                goto LABEL_1037;
            case 0x209:
                v634 = v9 ^ (2123445281 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 344i64) + 232i64) + 912i64) + 680i64) + 488i64));
                goto LABEL_1037;
            case 0x20A:
                v334 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 184) ^ v9;
                v634 -= 2008907366 * FuckEnc::CacheRead<_DWORD>(v334 + 224);
                v14 = (FuckEnc::CacheRead<_DWORD>(v334 + 416) ^ v634) + 32883271;
                goto LABEL_1036;
            case 0x20B:
                v335 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 288) ^ v9 ^ 0x33A026A0;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v335 + 232) + 904i64, &v634, a1);
                goto LABEL_1037;
            case 0x20C:
                v336 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 456) ^ v9;
                v634 = v634 - 2064028110 * FuckEnc::CacheRead<_DWORD>(v336 + 864) + 1746558867;
                v634 += FuckEnc::CacheRead<_DWORD>(v336 + 688);
                goto LABEL_1037;
            case 0x20D:
                v634 = ~(_DWORD)v9;
                v634 = ~(_DWORD)v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 184i64) * ~(FuckEnc::CacheRead<_DWORD>(a1 + 328) & 0xFFFFFFF9));
                goto LABEL_1037;
            case 0x20E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 584i64, &v634, a1);
                v634 += 511949323;
                goto LABEL_1037;
            case 0x20F:
                v634 = ~(_DWORD)v9;
                v337 = a1;
                v634 = ~(_DWORD)v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 552) + 520i64) ^ 0x78FFD969);
                v634 += FuckEnc::CacheRead<_DWORD>(v337 + 832) << 17;
                goto LABEL_1037;
            case 0x210:
                v634 = v9 - 854973999;
                v338 = a1;
                v634 = v9 - 854973999 - FuckEnc::CacheRead<_DWORD>(a1 + 632);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v338 + 776) + 312i64) + 560i64) ^ 0xD32DD285;
                goto LABEL_1037;
            case 0x211:
                v634 = v9 - 1456216858;
                v634 = (v9 - 1456216858) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 88i64) + 96i64) << 15) ^ 0xC4A40529;
                goto LABEL_1037;
            case 0x212:
                v339 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 416);
                v634 += (_DWORD)0x7E5C3B6 + 4 + FuckEnc::CacheRead<_DWORD>(v339 + 256) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v339 + 784) + 752i64);
                goto LABEL_1037;
            case 0x213:
                v340 = a1;
                v634 = v9 ^ FuckEnc::CacheRead<_DWORD>(a1 + 792) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 72i64) + 752i64) ^ 0xE53A4802;
                v634 += FuckEnc::CacheRead<_DWORD>(v340 + 56);
                goto LABEL_1037;
            case 0x214:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 304i64) + 848i64, &v634, a1);
                v634 ^= FuckEnc::CacheRead<_DWORD>(a1 + 488);
                goto LABEL_1037;
            case 0x215:
                v341 = a1;
                v634 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 576i64) + 368i64);
                v634 -= FuckEnc::CacheRead<_DWORD>(v341 + 288);
                v634 -= FuckEnc::CacheRead<_DWORD>(v341 + 560);
                goto LABEL_1037;
            case 0x216:
                v634 = ((unsigned int)0x85132BD + 4) ^ v9;
                v342 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 792) ^ ((unsigned int)0x85132BD + 4) ^ v9;
                v634 ^= FuckEnc::CacheRead<_DWORD>(v342 + 96);
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v342 + 776) + 24i64) ^ v634;
                goto LABEL_1036;
            case 0x217:
                v14 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 696i64) + 912i64) + 168i64) ^ (1331126860 * FuckEnc::CacheRead<_DWORD>(a1 + 288)));
                goto LABEL_1036;
            case 0x218:
                v343 = a1;
                v634 = (v9 ^ (-1803709700 * FuckEnc::CacheRead<_DWORD>(a1 + 560))) + 1007703696;
                v634 = (v634 ^ (426220589 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v343 + 592) + 688i64))) - 1186575635;
                goto LABEL_1037;
            case 0x219:
                v344 = a1;
                v634 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 632i64) ^ v9) - 250627171;
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(v344 + 88) + 600i64);
                goto LABEL_1037;
            case 0x21A:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 680i64) + 824i64) + 448i64) + 232i64) + 544i64) + 920i64);
                goto LABEL_1036;
            case 0x21B:
                v345 = a1;
                v634 = v9 - 666199304 * FuckEnc::CacheRead<_DWORD>(a1 + 648) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 824) + 80i64) + 560i64);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(v345 + 24);
                goto LABEL_1036;
            case 0x21C:
                v346 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 168) ^ v9 ^ 0x9DBE192C;
                v14 = (unsigned int)0x13C0F2DF ^ (v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v346 + 128) + 304i64) + 288i64));
                goto LABEL_1036;
            case 0x21D:
                v347 = a1;
                v634 = (v9 - FuckEnc::CacheRead<_DWORD>(a1 + 328) + 658645698) ^ 0x268B5A55;
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(v347 + 752);
                goto LABEL_1036;
            case 0x21E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 824i64) + 552i64) + 208i64, &v634, a1);
                v634 = ~v634;
                goto LABEL_1037;
            case 0x21F:
                v348 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 448i64) + 136i64);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v348 + 776) + 128i64) + 88i64) + 792i64);
                goto LABEL_1037;
            case 0x220:
                v634 = ((unsigned int)0x5A31E83 + 6) ^ v9;
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 448i64) + 312i64) + 696i64) + 360i64) + 648i64) ^ ((unsigned int)0x5A31E83 + 6) ^ v9;
                goto LABEL_1036;
            case 0x221:
                v634 = v9 ^ FuckEnc::CacheRead<_DWORD>(a1 + 488) ^ (2027387886 * (FuckEnc::CacheRead<_DWORD>(a1 + 288) ^ 0x5B19D349) + FuckEnc::CacheRead<_DWORD>(a1 + 632) + 1477747390);
                goto LABEL_1037;
            case 0x222:
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 56) | 7) - 1048365936 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 216i64) + 464i64) + 688i64);
                goto LABEL_1037;
            case 0x223:
                v349 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 400);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v349 + 576) + 776i64) + 448i64) + 464i64) + 832i64);
                goto LABEL_1037;
            case 0x224:
                v634 = v9 - 1186898632;
                v350 = a1;
                v634 = v9 - 1186898632 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 224i64);
                v634 -= FuckEnc::CacheRead<_DWORD>(v350 + 488);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v350 + 632);
                goto LABEL_1037;
            case 0x225:
                v351 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 784) + 552i64) + 696i64) + 96i64) + 1;
                v634 -= FuckEnc::CacheRead<_DWORD>(v351 + 368) ^ 0xD6CAF723;
                goto LABEL_1037;
            case 0x226:
                v352 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 520) + 1;
                Calls::FastCall(v352 + 584, &v634, v352);
                goto LABEL_1037;
            case 0x227:
                v634 = v9 ^ 0x9A2E76C6;
                v14 = (v9 ^ 0x9A2E76C6) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 88i64) + 72i64) + 400i64) - FuckEnc::CacheRead<_DWORD>(a1 + 168);
                goto LABEL_1036;
            case 0x228:
                v353 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 216) + 864i64) - 1700492095;
                v634 += FuckEnc::CacheRead<_DWORD>(v353 + 880) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v353 + 552) + 96i64);
                goto LABEL_1037;
            case 0x229:
                v354 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 456);
                v634 -= FuckEnc::CacheRead<_DWORD>(v354 + 560);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v354 + 592) + 536i64) + 536i64) + 688i64);
                goto LABEL_1036;
            case 0x22A:
                v355 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 24) ^ v9;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v355 + 784) + 520i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v355 + 696) + 784i64) + 688i64);
                goto LABEL_1037;
            case 0x22B:
                v634 = v9 ^ 0xE4BABBA9;
                v356 = a1;
                v634 = (v9 ^ 0xE4BABBA9) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 136i64);
                Calls::FastCall(v356 + 152, &v634, v356);
                goto LABEL_1037;
            case 0x22C:
                v357 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 184) + ~FuckEnc::CacheRead<_DWORD>(a1 + 600);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v357 + 464) + 96i64) - 1127194340;
                goto LABEL_1037;
            case 0x22D:
                v358 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 456) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 464i64) + 416i64);
                v634 += ~FuckEnc::CacheRead<_DWORD>(v358 + 224);
                goto LABEL_1037;
            case 0x22E:
                v634 = v9 + 1866271842 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 448i64) + 544i64) + 680i64) + 808i64) + 536i64) + 416i64);
                goto LABEL_1037;
            case 0x22F:
                v359 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 520);
                v634 += FuckEnc::CacheRead<_DWORD>(v359 + 720) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v359 + 696) + 560i64) + 1;
                goto LABEL_1037;
            case 0x230:
                v360 = a1;
                v634 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 784i64) + 224i64) & 0xFFFFFFF4);
                v634 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v360 + 544) + 24i64);
                goto LABEL_1037;
            case 0x231:
                v361 = a1;
                v634 = v9 - (((unsigned int)0xBFC8E48 + 4) ^ FuckEnc::CacheRead<_DWORD>(a1 + 168));
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v361 + 448) + 584i64, &v634, a1);
                goto LABEL_1037;
            case 0x232:
                v634 = v9 ^ 0xD802C2D5;
                v634 = v9 ^ 0xD802C2D5 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 648) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 344i64) + 80i64) + 752i64));
                goto LABEL_1037;
            case 0x233:
                v362 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 600);
                v634 = (v634 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v362 + 776) + 776i64) + 832i64) + 665178496)) + 1228009928;
                goto LABEL_1037;
            case 0x234:
                v363 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 328) ^ v9;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v363 + 808) + 648i64) | 1;
                v634 ^= FuckEnc::CacheRead<_DWORD>(v363 + 832) ^ 0x21CABAAF;
                goto LABEL_1037;
            case 0x235:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 776i64) + 320i64) + 320i64) + 232i64) + 696i64) + 96i64) ^ v9;
                goto LABEL_1036;
            case 0x236:
                v364 = a1;
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 576) + 832i64) * (FuckEnc::CacheRead<_DWORD>(a1 + 752) - 1603619739));
                v634 ^= 2013104692 * FuckEnc::CacheRead<_DWORD>(v364 + 864);
                goto LABEL_1037;
            case 0x237:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 720i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 696i64) + 168i64) + 1;
                goto LABEL_1037;
            case 0x238:
                v365 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 56);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v365 + 320) + 864i64) ^ ~FuckEnc::CacheRead<_DWORD>(v365 + 488);
                goto LABEL_1037;
            case 0x239:
                v634 = v9 ^ FuckEnc::CacheRead<_DWORD>(a1 + 96) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 96) * (FuckEnc::CacheRead<_DWORD>(a1 + 520) + 1989119454)) ^ 0x192542F6;
                goto LABEL_1037;
            case 0x23A:
                v366 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 224) + 781571771;
                v634 ^= (786787785 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v366 + 576) + 456i64)) ^ 0x47E53BD5;
                goto LABEL_1037;
            case 0x23B:
                v367 = a1;
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 184) + FuckEnc::CacheRead<_DWORD>(a1 + 136) + 1615922019);
                v634 -= (FuckEnc::CacheRead<_DWORD>(v367 + 184) >> 5) ^ 0x30A45069;
                goto LABEL_1037;
            case 0x23C:
                v634 = v9 + 1255655770;
                v634 = v9 + 1255655770 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 320i64) + 344i64) + 448i64) + 312i64) + 456i64);
                goto LABEL_1037;
            case 0x23D:
                v368 = a1;
                v634 = (FuckEnc::CacheRead<_DWORD>(a1 + 864) ^ v9 ^ 0xB1A1A3CB) + 1518694379;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(v368 + 320) + 288i64);
                goto LABEL_1037;
            case 0x23E:
                v634 = v9 ^ 0xFA5DFD80;
                Calls::FastCall(a1 + 16, &v634, a1);
                v634 += FuckEnc::CacheRead<_DWORD>(a1 + 560) ^ 0x66473F33;
                goto LABEL_1037;
            case 0x23F:
                v369 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 400);
                v634 += FuckEnc::CacheRead<_DWORD>(v369 + 752) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v369 + 88) + 536i64) + 128i64) + 416i64);
                goto LABEL_1037;
            case 0x240:
                Calls::FastCall(a1 + 480, &v634, a1);
                v634 = ~(v634 + ~FuckEnc::CacheRead<_DWORD>(a1 + 832));
                goto LABEL_1037;
            case 0x241:
                v370 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 552i64) + 184i64) ^ v9;
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v370 + 544) + 232i64) + 288i64);
                goto LABEL_1036;
            case 0x242:
                v634 = (unsigned int)0xA5B5C93 + v9 + 2;
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 216) + 576i64) + 464i64) + 768i64) + 168i64);
                goto LABEL_1037;
            case 0x243:
                v371 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 864);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v371 + 368);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v371 + 696) + 912i64) + 224i64);
                goto LABEL_1037;
            case 0x244:
                v634 = v9 ^ 0x75DA26A2;
                v14 = (v9 ^ 0x75DA26A2) - FuckEnc::CacheRead<_DWORD>(a1 + 752) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 80) + 688i64) - 2127223166) + 553528707;
                goto LABEL_1036;
            case 0x245:
                v14 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 920i64) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 488) * (FuckEnc::CacheRead<_DWORD>(a1 + 832) - 913331785)));
                goto LABEL_1036;
            case 0x246:
                v372 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 464i64) + 168i64) ^ v9;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v372 + 232) + 448i64) + 256i64);
                goto LABEL_1037;
            case 0x247:
                v373 = a1;
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 792i64) ^ 0x96EB1752) - 1658281775;
                v634 ^= (_DWORD)0x89A98E + FuckEnc::CacheRead<_DWORD>(v373 + 416);
                goto LABEL_1037;
            case 0x248:
                v634 = (v9 ^ 0xF69B8D43) + 720198853;
                v374 = a1;
                v634 += FuckEnc::CacheRead<_DWORD>(a1 + 720);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v374 + 696) + 88i64) + 256i64);
                goto LABEL_1037;
            case 0x249:
                v375 = a1;
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 752) ^ 0x242F862A) + 1433446570;
                v634 ^= -1998181534 * FuckEnc::CacheRead<_DWORD>(v375 + 24) * FuckEnc::CacheRead<_DWORD>(v375 + 96);
                goto LABEL_1037;
            case 0x24A:
                v376 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 832) + 1660227812;
                Calls::FastCall(v376 + 384, &v634, v376);
                goto LABEL_1037;
            case 0x24B:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 544i64) + 312i64) + 224i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 632i64);
                goto LABEL_1036;
            case 0x24C:
                v634 = v9 - 656987002;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 576) + 360i64) + 576i64) + 344i64) + 360i64) + 688i64) ^ (v9 - 656987002);
                goto LABEL_1037;
            case 0x24D:
                v634 = v9 - 1869689134;
                v377 = a1;
                v634 = v9 - 1869689134 - FuckEnc::CacheRead<_DWORD>(a1 + 328);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v377 + 488);
                v634 = (FuckEnc::CacheRead<_DWORD>(v377 + 256) ^ v634) - 872008398;
                goto LABEL_1037;
            case 0x24E:
                v634 = v9 ^ 0xEDEA2B45;
                v378 = a1;
                v634 = (v9 ^ 0xEDEA2B45) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 416i64);
                v634 = ~(v634 + 1800333336 * FuckEnc::CacheRead<_DWORD>(v378 + 328));
                goto LABEL_1037;
            case 0x24F:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 304i64) + 168i64) * (FuckEnc::CacheRead<_DWORD>(a1 + 752) + 1099134105);
                goto LABEL_1036;
            case 0x250:
                v379 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 168);
                v122 = v634 + FuckEnc::CacheRead<_DWORD>(v379 + 752);
                v634 = v122;
                v123 = FuckEnc::CacheRead<_QWORD>(v379 + 88);
            LABEL_172:
                v634 = v122 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v123 + 544) + 880i64);
                goto LABEL_1037;
            case 0x251:
                v634 = v9 + 1814403593 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 784) + 576i64) + 912i64) + 312i64) + 216i64) + 880i64);
                goto LABEL_1037;
            case 0x252:
                v380 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 416i64);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v380 + 536) + 592i64) + 464i64) + 808i64) + 288i64);
                goto LABEL_1037;
            case 0x253:
                v634 = v9 - 320886182;
                v381 = a1;
                v634 = v9 - 320886182 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 320i64) + 920i64) ^ 0x8F58C418);
                v634 += FuckEnc::CacheRead<_DWORD>(v381 + 920);
                goto LABEL_1037;
            case 0x254:
                v382 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 224) + 1;
                v634 += FuckEnc::CacheRead<_DWORD>(v382 + 328);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v382 + 72) + 344i64) + 752i64);
                goto LABEL_1037;
            case 0x255:
                v383 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 832i64) ^ v9;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v383 + 88) + 552i64) + 776i64) + 824i64) + 880i64);
                goto LABEL_1037;
            case 0x256:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 128i64) + 536i64) + 544i64) + 344i64) + 304i64) + 632i64);
                goto LABEL_1036;
            case 0x257:
                v14 = v9 - ((-519375281 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 456i64)) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 128) + 96i64) & 0xFFFFFFE2);
                goto LABEL_1036;
            case 0x258:
                v384 = a1;
                v634 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 24) & 0xFFFFFFF5);
                Calls::FastCall(v384 + 672, &v634, v384);
                v634 ^= FuckEnc::CacheRead<_DWORD>(a1 + 368);
                goto LABEL_1037;
            case 0x259:
                v385 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 768i64) + 536i64) + 312i64) + 128i64) + 864i64);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(v385 + 56);
                goto LABEL_1036;
            case 0x25A:
                v386 = a1;
                v634 = (FuckEnc::CacheRead<_DWORD>(a1 + 96) ^ v9) - 2107287727;
                v634 += FuckEnc::CacheRead<_DWORD>(v386 + 648);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v386 + 360) + 128i64) + 688i64);
                goto LABEL_1037;
            case 0x25B:
                v634 = v9 ^ 0xF5919FC0;
                v387 = a1;
                v634 = (v9 ^ 0xF5919FC0) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 488i64);
                Calls::FastCall(v387 + 736, &v634, v387);
                goto LABEL_1037;
            case 0x25C:
                v634 = v9 + 1217173664;
                v634 = v9 + 1217173664 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 128i64) + 80i64) + 680i64) + 168i64) + 1764738097;
                goto LABEL_1037;
            case 0x25D:
                v634 = v9 + 2049681173;
                v388 = a1;
                v634 = v9 + 2049681173 - FuckEnc::CacheRead<_DWORD>(a1 + 400);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v388 + 592) + 552i64) + 216i64) + 792i64);
                goto LABEL_1037;
            case 0x25E:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 88i64) + 304i64) + 112i64) + 72i64) + 784i64) + 600i64);
                goto LABEL_1037;
            case 0x25F:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 216i64) + 808i64) + 824i64) + 592i64) + 344i64) + 520i64) ^ v9;
                goto LABEL_1036;
            case 0x260:
                v389 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 96i64);
                v634 += ~FuckEnc::CacheRead<_DWORD>(v389 + 560);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v389 + 688) >> 19;
                goto LABEL_1037;
            case 0x261:
                v390 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 488) ^ v9;
                Calls::FastCall(v390 + 504, &v634, v390);
                v634 -= 248024298;
                goto LABEL_1037;
            case 0x262:
                v634 = v9 ^ ((FuckEnc::CacheRead<_DWORD>(a1 + 688) ^ 0xC0247AF9) * (1712901209 - 1966233597 * FuckEnc::CacheRead<_DWORD>(a1 + 416)));
                goto LABEL_1037;
            case 0x263:
                v391 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 720) - 1342807769;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v391 + 536) + 568i64, &v634, a1);
                goto LABEL_1037;
            case 0x264:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 24) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 824i64) + 128i64) + 632i64) + 1);
                goto LABEL_1037;
            case 0x265:
                v392 = a1;
                v634 = (FuckEnc::CacheRead<_DWORD>(a1 + 632) ^ v9) - 1487793496;
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v392 + 592) + 136i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v392 + 776) + 184i64);
                goto LABEL_1037;
            case 0x266:
                v634 = (unsigned int)0xBBCAADD + v9 + 6;
                v393 = a1;
                v634 -= 1483148144 * FuckEnc::CacheRead<_DWORD>(a1 + 56);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v393 + 696) + 696i64) + 256i64);
                goto LABEL_1037;
            case 0x267:
                v394 = a1;
                v634 = (v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 96) ^ 0x73389309 | 0x12)) ^ 0xEA0AB19B;
                v634 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v394 + 216) + 136i64);
                goto LABEL_1037;
            case 0x268:
                v395 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 256);
                v634 -= FuckEnc::CacheRead<_DWORD>(v395 + 168);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v395 + 576) + 776i64) + 808i64) + 416i64);
                goto LABEL_1037;
            case 0x269:
                v396 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 520);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v396 + 912) + 232i64) + 320i64) + 696i64) + 688i64);
                goto LABEL_1037;
            case 0x26A:
                v397 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 256);
                v634 -= FuckEnc::CacheRead<_DWORD>(v397 + 96);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v397 + 576) + 808i64) + 688i64) + 1;
                goto LABEL_1037;
            case 0x26B:
                v398 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 400) - v9 - 1477442969;
                v634 -= FuckEnc::CacheRead<_DWORD>(v398 + 632) ^ 0x4E921456;
                goto LABEL_1037;
            case 0x26C:
                v399 = a1;
                v634 = ~(v9 - FuckEnc::CacheRead<_DWORD>(a1 + 184) + 993157934);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v399 + 232) + 88i64) + 776i64) + 720i64);
                goto LABEL_1037;
            case 0x26D:
                v634 = v9 ^ 0x48FC766F;
                v634 = v9 ^ 0x48FC766F ^ FuckEnc::CacheRead<_DWORD>(a1 + 920) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 776i64) + 592i64) + 752i64);
                goto LABEL_1037;
            case 0x26E:
                v634 = v9 + -FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 216) + 80i64) + 112i64) + 128i64) + 216i64) + 288i64) - 1078606208;
                goto LABEL_1037;
            case 0x26F:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 128i64) + 576i64) + 360i64) + 680i64) + 768i64) + 128i64) + 648i64);
                goto LABEL_1037;
            case 0x270:
                v400 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 88i64) + 368i64);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v400 + 360) + 552i64) + 256i64);
                goto LABEL_1037;
            case 0x271:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 72i64) + 808i64) + 536i64) + 552i64) + 592i64) + 400i64) ^ v9;
                goto LABEL_1036;
            case 0x272:
                v401 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 400i64);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v401 + 824) + 680i64) + 96i64);
                goto LABEL_1037;
            case 0x273:
                v634 = v9 - 1296357169;
                v402 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 456i64) + v9 - 1296357169;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v402 + 680) + 520i64) + 1472632594;
                goto LABEL_1037;
            case 0x274:
                v403 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 216i64) + 400i64) - 1796519826;
                v634 ^= FuckEnc::CacheRead<_DWORD>(v403 + 688);
                goto LABEL_1037;
            case 0x275:
                v404 = a1;
                v634 = (v9 + FuckEnc::CacheRead<_DWORD>(a1 + 456) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 216i64) + 256i64)) ^ 0x46CA26B8;
                v634 -= FuckEnc::CacheRead<_DWORD>(v404 + 400);
                goto LABEL_1037;
            case 0x276:
                v405 = a1;
                v634 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 552) + 96i64) ^ 0x50BC1734);
                v634 ^= (-379908500 * FuckEnc::CacheRead<_DWORD>(v405 + 720)) ^ 0x93E7CDE8;
                goto LABEL_1037;
            case 0x277:
                v406 = a1;
                v325 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 552i64) + 24i64);
                v634 = v325;
                v326 = FuckEnc::CacheRead<_QWORD>(v406 + 232);
            LABEL_522:
                v14 = v325 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v326 + 592) + 320i64) + 632i64);
                goto LABEL_1036;
            case 0x278:
                Calls::FastCall(a1 + 712, &v634, a1);
                v634 ^= (unsigned int)(-28633663 * FuckEnc::CacheRead<_DWORD>(a1 + 224)) >> 23;
                goto LABEL_1037;
            case 0x279:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 544i64) + 88i64) + 544i64) + 728i64, &v634, a1);
                goto LABEL_1037;
            case 0x27A:
                v634 = v9 + 52638473;
                v407 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 224) ^ (v9 + 52638473);
                Calls::FastCall(v407 + 32, &v634, v407);
                goto LABEL_1037;
            case 0x27B:
                v408 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 576i64) + 344i64) + 320i64) + 456i64) ^ v9;
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v408 + 312) + 648i64) ^ v634;
                goto LABEL_1036;
            case 0x27C:
                v409 = a1;
                v634 = (v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 400i64) + 1) ^ 0xEDF81446;
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v409 + 216) + 752i64);
                goto LABEL_1037;
            case 0x27D:
                v634 = v9 + ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 256i64) >> 7) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 288i64) | 0xB);
                goto LABEL_1037;
            case 0x27E:
                v410 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 88i64) + 448i64) + 304i64) + 216i64) + 720i64) ^ v9;
                v634 += FuckEnc::CacheRead<_DWORD>(v410 + 648);
                goto LABEL_1037;
            case 0x27F:
                Calls::FastCall(a1 + 848, &v634, a1);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 368i64);
                goto LABEL_1037;
            case 0x280:
                v411 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 688) ^ v9;
                v634 = (v634 + FuckEnc::CacheRead<_DWORD>(v411 + 600) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v411 + 88) + 320i64) + 24i64)) ^ 0xC908CC1D;
                goto LABEL_1037;
            case 0x281:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 80i64) + 312i64) + 360i64) + 216i64) + 80i64) + 360i64) + 288i64) ^ v9;
                goto LABEL_1036;
            case 0x282:
                v634 = v9 + ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 776i64) + 560i64) ^ (4 * (FuckEnc::CacheRead<_DWORD>(a1 + 24) | 0xC)));
                goto LABEL_1037;
            case 0x283:
                v634 = v9 + 816130973;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 824) + 696i64) + 912i64) + 912i64) + 88i64) + 416i64) ^ (v9 + 816130973);
                goto LABEL_1037;
            case 0x284:
                v412 = a1;
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 448i64) + 864i64) + 1241731348);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v412 + 360) + 128i64) + 688i64);
                goto LABEL_1037;
            case 0x285:
                v413 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 168);
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v413 + 360) + 824i64) + 72i64) + 216i64) + 184i64) ^ v634;
                goto LABEL_1036;
            case 0x286:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 680i64) + 552i64) + 32i64, &v634, a1);
                goto LABEL_1037;
            case 0x287:
                v634 = v9 - 577322697;
                v634 = v9 - 577322697 - ((FuckEnc::CacheRead<_DWORD>(a1 + 416) >> 22) ^ (95685954 * FuckEnc::CacheRead<_DWORD>(a1 + 864))) + 750518531;
                goto LABEL_1037;
            case 0x288:
                v414 = a1;
                v634 = (v9 - FuckEnc::CacheRead<_DWORD>(a1 + 256)) ^ 0x34CF79D1;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v414 + 128) + 464i64) + 128i64) + 360i64) + 24i64);
                goto LABEL_1037;
            case 0x289:
                Calls::FastCall(a1 + 208, &v634, a1);
                v634 ^= 0x24A67629u;
                v634 = v634 - FuckEnc::CacheRead<_DWORD>(a1 + 752) - (_DWORD)0x35300B6;
                goto LABEL_1037;
            case 0x28A:
                v415 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 912i64) + 416i64);
                Calls::FastCall(v415 + 904, &v634, v415);
                goto LABEL_1037;
            case 0x28B:
                v416 = a1;
                v634 = ~(v9 - FuckEnc::CacheRead<_DWORD>(a1 + 288));
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v416 + 912) + 904i64, &v634, a1);
                goto LABEL_1037;
            case 0x28C:
                Calls::FastCall(a1 + 800, &v634, a1);
                v634 += 1658884721 * FuckEnc::CacheRead<_DWORD>(a1 + 136);
                goto LABEL_1037;
            case 0x28D:
                v417 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 560) ^ v9 ^ 0x34B18028;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v417 + 232) + 336i64, &v634, a1);
                goto LABEL_1037;
            case 0x28E:
                v634 = (v9 ^ 0xD523FC67) + 868161242;
                v634 += FuckEnc::CacheRead<_DWORD>(a1 + 256) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 136i64) + 1);
                goto LABEL_1037;
            case 0x28F:
                v634 = v9 + 368555199;
                v634 = ~((v9 + 368555199) ^ (((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 752i64) ^ 0x51F36C56) & 0xFFFFFFF7) - ((_DWORD)0x61CACC4 + 6)));
                goto LABEL_1037;
            case 0x290:
                v418 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 920);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v418 + 360) + 592i64) + 448i64) + 312i64) + 256i64);
                goto LABEL_1037;
            case 0x291:
                v419 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 576) + 56i64);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v419 + 320) + 344i64) + 320i64) + 688i64);
                goto LABEL_1036;
            case 0x292:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 216) + 80i64) + 72i64) + 576i64) + 80i64) + 112i64) + 360i64) + 368i64);
                goto LABEL_1036;
            case 0x293:
                v634 = v9 + 1687564959;
                v420 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 592i64) + 696i64) + 720i64) + v9 + 1687564959;
                v634 += FuckEnc::CacheRead<_DWORD>(v420 + 832);
                goto LABEL_1037;
            case 0x294:
                v421 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 184);
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v421 + 72) + 824i64) + 544i64) + 776i64) + 232i64) + 560i64) ^ v634;
                goto LABEL_1036;
            case 0x295:
                v422 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 488i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v422 + 72) + 256i64) + (FuckEnc::CacheRead<_DWORD>(v422 + 456) >> 3);
                goto LABEL_1037;
            case 0x296:
                v423 = a1;
                v634 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 552) + 600i64) ^ ~FuckEnc::CacheRead<_DWORD>(a1 + 400));
                v634 ^= 132612283 * FuckEnc::CacheRead<_DWORD>(v423 + 328);
                goto LABEL_1037;
            case 0x297:
                v424 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 488) ^ v9;
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v424 + 544) + 536i64) + 544i64) + 464i64) + 520i64) + 1319732516;
                goto LABEL_1037;
            case 0x298:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 88) + 184i64) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 216i64) + 688i64) >> 26);
                goto LABEL_1037;
            case 0x299:
                v425 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 648) ^ v9;
                v634 ^= FuckEnc::CacheRead<_DWORD>(v425 + 488) - 1572224891;
                v634 += (FuckEnc::CacheRead<_DWORD>(v425 + 184) ^ 0xD2B88222) - 321436170;
                goto LABEL_1037;
            case 0x29A:
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 880) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 784) + 128i64) + 680i64) + 592i64) + 864i64));
                goto LABEL_1037;
            case 0x29B:
                v426 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 288) ^ v9;
                v634 ^= (FuckEnc::CacheRead<_DWORD>(v426 + 184) >> 28) + ~(FuckEnc::CacheRead<_DWORD>(v426 + 792) ^ 0x2DD999E2);
                goto LABEL_1037;
            case 0x29C:
                v427 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 360i64) + 544i64) + 24i64) ^ v9;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v427 + 776) + 112i64) + 224i64);
                goto LABEL_1037;
            case 0x29D:
                v428 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 600i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v428 + 112) + 784i64) + 864i64);
                v634 -= FuckEnc::CacheRead<_DWORD>(v428 + 56);
                goto LABEL_1037;
            case 0x29E:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 544i64) + 320i64) + 920i64) * (FuckEnc::CacheRead<_DWORD>(a1 + 648) << 25);
                goto LABEL_1036;
            case 0x29F:
                v429 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 288);
                Calls::FastCall(v429 + 264, &v634, v429);
                v634 ^= FuckEnc::CacheRead<_DWORD>(a1 + 832);
                goto LABEL_1037;
            case 0x2A0:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 80) + 72i64) + 768i64) + 320i64) + 912i64) + 112i64) + 864i64);
                goto LABEL_1037;
            case 0x2A1:
                v430 = a1;
                v634 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 184) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 416) - (_DWORD)0x9992F46));
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v430 + 552) + 488i64);
                goto LABEL_1036;
            case 0x2A2:
                v634 = v9 ^ ((FuckEnc::CacheRead<_DWORD>(a1 + 96) - ((_DWORD)0xB449506 + 2)) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 168i64) ^ 0x762D26C9));
                goto LABEL_1037;
            case 0x2A3:
                v431 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 456);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v431 + 80) + 720i64);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v431 + 552) + 824i64) + 288i64);
                goto LABEL_1036;
            case 0x2A4:
                v432 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 168);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v432 + 344) + 648i64);
                v634 += FuckEnc::CacheRead<_DWORD>(v432 + 56) + 1;
                goto LABEL_1037;
            case 0x2A5:
                v634 = v9 - 865948770;
                v433 = a1;
                v634 = (v9 - 865948770) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 368) | 0x1B);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v433 + 808) + 752i64) ^ 0x6367144C;
                goto LABEL_1037;
            case 0x2A6:
                v434 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 368i64) ^ v9;
                v634 = (v634 ^ (1797400962 * FuckEnc::CacheRead<_DWORD>(v434 + 688))) - 711076576;
                goto LABEL_1037;
            case 0x2A7:
                v634 = v9 - 504961712;
                v634 = (v9 - 504961712 + 1799793961 * (FuckEnc::CacheRead<_DWORD>(a1 + 520) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 368i64))) ^ 0x282A4702;
                goto LABEL_1037;
            case 0x2A8:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 864) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 344i64) + 680i64) + 24i64));
                goto LABEL_1037;
            case 0x2A9:
                v435 = a1;
                v634 = (v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 824) + 688i64) * ~FuckEnc::CacheRead<_DWORD>(a1 + 688))) + 906046068;
                v634 ^= FuckEnc::CacheRead<_DWORD>(v435 + 488);
                goto LABEL_1037;
            case 0x2AA:
                v436 = a1;
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 600i64) & 0xFFFFFFEF) + 1;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v436 + 232) + 880i64);
                goto LABEL_1037;
            case 0x2AB:
                v437 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 232i64) + 136i64) ^ v9;
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v437 + 112) + 488i64) + 1487530847;
                goto LABEL_1036;
            case 0x2AC:
                v438 = a1;
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 720) ^ 0x7EB9AD8C);
                v634 = (v634 - ((FuckEnc::CacheRead<_DWORD>(v438 + 688) - 1802471161) & 0xFFFFFFED)) ^ 0x3C2FEBFA;
                goto LABEL_1037;
            case 0x2AD:
                v634 = v9 + ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 776i64) + 328i64) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 864i64) | 0x16));
                goto LABEL_1037;
            case 0x2AE:
                v634 = v9 ^ 0x769DAA0C;
                v439 = a1;
                v634 = (v9 ^ 0x769DAA0C) - FuckEnc::CacheRead<_DWORD>(a1 + 880);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v439 + 776) + 912i64) + 128i64) + 920i64);
                goto LABEL_1036;
            case 0x2AF:
                v440 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 864);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v440 + 552) + 328i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v440 + 448) + 912i64) + 488i64);
                goto LABEL_1037;
            case 0x2B0:
                v634 = v9 ^ FuckEnc::CacheRead<_DWORD>(a1 + 792) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 456) + 789829378) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 560i64) >> 22);
                goto LABEL_1037;
            case 0x2B1:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 128) + 792i64) - ((-1427651759 * FuckEnc::CacheRead<_DWORD>(a1 + 880)) ^ 0x9D29A51D) + 1;
                goto LABEL_1037;
            case 0x2B2:
                v441 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 680i64) + 312i64) + 720i64) + 1180757585;
                v634 -= FuckEnc::CacheRead<_DWORD>(v441 + 256);
                goto LABEL_1037;
            case 0x2B3:
                v442 = a1;
                v634 = v9 ^ (-1187122146 * FuckEnc::CacheRead<_DWORD>(a1 + 416));
                v634 ^= FuckEnc::CacheRead<_DWORD>(v442 + 328) ^ (985579892 * FuckEnc::CacheRead<_DWORD>(v442 + 256)) ^ 0xEF8B149;
                goto LABEL_1037;
            case 0x2B4:
                v443 = a1;
                v634 = (FuckEnc::CacheRead<_DWORD>(a1 + 792) ^ v9) - 259902351;
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v443 + 768) + 592i64) + 592i64) + 552i64) + 752i64);
                goto LABEL_1037;
            case 0x2B5:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 776i64) + 544i64) + 128i64) + 592i64) + 128i64) + 256i64) + 1;
                goto LABEL_1037;
            case 0x2B6:
                v444 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 720);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v444) + 80i64) + 216i64) + 808i64) + 400i64);
                goto LABEL_1037;
            case 0x2B7:
                v634 = v9 ^ 0xC1783C71;
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 552i64) + 768i64) + 344i64) + 168i64) ^ v9 ^ 0xC1783C71;
                goto LABEL_1036;
            case 0x2B8:
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 752i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 696) + 360i64) + 632i64));
                goto LABEL_1037;
            case 0x2B9:
                v634 = v9 ^ (~FuckEnc::CacheRead<_DWORD>(a1 + 832) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 784i64) + 784i64) + 56i64));
                goto LABEL_1037;
            case 0x2BA:
                Calls::FastCall(a1 + 384, &v634, a1);
                v445 = a1;
                v634 -= FuckEnc::CacheRead<_DWORD>(a1 + 688);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v445 + 368);
                goto LABEL_1037;
            case 0x2BB:
                v634 = v9 + 2040110755;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 800i64, &v634, a1);
                v634 -= 858878546;
                goto LABEL_1037;
            case 0x2BC:
                v446 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 360i64) + 832i64);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v446 + 592) + 216i64) + 688i64);
                goto LABEL_1036;
            case 0x2BD:
                v447 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 488) ^ v9 ^ 0xF1ABEC0F;
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v447 + 536) + 632i64) | 0x1F;
                v14 = FuckEnc::CacheRead<_DWORD>(v447 + 720) ^ v634;
                goto LABEL_1036;
            case 0x2BE:
                v634 = v9 - 1907079889;
                v448 = a1;
                v634 = (_DWORD)0x9FB8B54 + 2 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 168i64) + v9 - 1907079889;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v448 + 304) + 224i64);
                goto LABEL_1037;
            case 0x2BF:
                v634 = v9 ^ 0xBB2DB8A1;
                v634 = v9 ^ 0xBB2DB8A1 ^ ((FuckEnc::CacheRead<_DWORD>(a1 + 720) ^ 0xF11B7F36) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 320i64) + 920i64));
                goto LABEL_1037;
            case 0x2C0:
                v449 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 416);
                v634 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v449 + 824) + 680i64) + 88i64) + 328i64);
                goto LABEL_1037;
            case 0x2C1:
                v450 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 648) + 2057812412;
                v634 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v450 + 312) + 768i64) + 400i64) << 27;
                goto LABEL_1037;
            case 0x2C2:
                v451 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 560) ^ v9;
                v634 = ~(v634 ^ (1137045466 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v451 + 776) + 456i64)));
                goto LABEL_1037;
            case 0x2C3:
                v452 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 168) + 963142649;
                v634 ^= FuckEnc::CacheRead<_DWORD>(v452 + 720);
                v634 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v452 + 112) + 168i64) ^ v634) + 650450089;
                goto LABEL_1037;
            case 0x2C4:
                v453 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 168i64);
                v634 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v453 + 216) + 776i64) + 792i64);
                goto LABEL_1037;
            case 0x2C5:
                v634 = v9 - 1664788067;
                v634 = v9 - 1664788067 + FuckEnc::CacheRead<_DWORD>(a1 + 752) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 136i64) + 1116158057;
                goto LABEL_1037;
            case 0x2C6:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 112i64) + 24i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 552) + 544i64) + 880i64));
                goto LABEL_1037;
            case 0x2C7:
                v634 = ~(v9 + 1186353239);
                v454 = a1;
                v634 ^= FuckEnc::CacheRead<_DWORD>(a1 + 96);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v454 + 824) + 360i64) + 920i64);
                goto LABEL_1037;
            case 0x2C8:
                v634 = (((unsigned int)0x58E2340 + 6) ^ v9) + 2035011228;
                Calls::FastCall(a1 + 16, &v634, a1);
                goto LABEL_1037;
            case 0x2C9:
                v455 = a1;
                v634 = v9 ^ FuckEnc::CacheRead<_DWORD>(a1 + 416) & 0xFFFFFFE3;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v455 + 216) + 360i64) + 864i64) + 1;
                goto LABEL_1037;
            case 0x2CA:
                v456 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 832);
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v456 + 312) + 464i64) + 464i64) + 544i64) + 688i64) ^ v634;
                goto LABEL_1036;
            case 0x2CB:
                v457 = a1;
                v634 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 488i64) ^ v9) - 1671830435;
                v634 += FuckEnc::CacheRead<_DWORD>(v457 + 184) + FuckEnc::CacheRead<_DWORD>(v457 + 600) + 1020388385;
                goto LABEL_1037;
            case 0x2CC:
                v458 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 464i64) + 456i64);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v458 + 784) + 464i64) + 168i64);
                goto LABEL_1037;
            case 0x2CD:
                v459 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 632);
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v459 + 360) + 344i64) + 136i64) - v634 + 977465295;
                goto LABEL_1037;
            case 0x2CE:
                v460 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 328);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v460 + 448) + 72i64) + 912i64) + 536i64) + 688i64);
                goto LABEL_1037;
            case 0x2CF:
                v461 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 80) + 368i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v461 + 216) + 304i64) + 920i64) ^ 0x275F4DF;
                goto LABEL_1037;
            case 0x2D0:
                v462 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 560);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v462 + 560);
                Calls::FastCall(v462 + 384, &v634, v462);
                v634 = ~v634;
                goto LABEL_1037;
            case 0x2D1:
                v634 = v9 + 1296336984;
                v463 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 824) + 368i64) ^ (v9 + 1296336984);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v463 + 72) + 520i64) | 0x1D;
                goto LABEL_1037;
            case 0x2D2:
                v464 = a1;
                v634 = (unsigned int)0x857589D + ((v9 - FuckEnc::CacheRead<_DWORD>(a1 + 880)) ^ 0xDA7C3179);
                v634 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v464 + 776) + 216i64) + 560i64);
                goto LABEL_1037;
            case 0x2D3:
                v634 = ~(v9 - 1379877395);
                v634 ^= FuckEnc::CacheRead<_DWORD>(a1 + 720) + 1010856645 + ~FuckEnc::CacheRead<_DWORD>(a1 + 880);
                goto LABEL_1037;
            case 0x2D4:
                v465 = a1;
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 416i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 24i64) - 157833613);
                v634 += FuckEnc::CacheRead<_DWORD>(v465 + 256);
                goto LABEL_1037;
            case 0x2D5:
                v466 = a1;
                v634 = v9 + (_DWORD)0x216493D + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 56i64);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v466 + 80) + 696i64) + 224i64);
                goto LABEL_1037;
            case 0x2D6:
                v634 = v9 - 1941692022;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 712i64, &v634, a1);
                v634 -= 720534690;
                goto LABEL_1037;
            case 0x2D7:
                v467 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 416);
                v634 -= FuckEnc::CacheRead<_DWORD>(v467 + 600);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v467 + 808) + 592i64) + 912i64) + 688i64);
                goto LABEL_1037;
            case 0x2D8:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 824) + 576i64) + 112i64) + 368i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 768i64) + 328i64);
                goto LABEL_1036;
            case 0x2D9:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 824i64) + 544i64) + 88i64) + 696i64) + 576i64) + 912i64) + 520i64) ^ v9;
                goto LABEL_1036;
            case 0x2DA:
                v468 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 600i64);
                v634 = v634 - (FuckEnc::CacheRead<_DWORD>(v468 + 488) ^ 0x51A6BA4F) - FuckEnc::CacheRead<_DWORD>(v468 + 416);
                goto LABEL_1037;
            case 0x2DB:
                Calls::FastCall(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 552) + 576i64) + 696i64) + 248i64, &v634, a1);
                goto LABEL_1037;
            case 0x2DC:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 848i64, &v634, a1);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 416i64);
                goto LABEL_1037;
            case 0x2DD:
                v469 = a1;
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 56) ^ 0x333DBBD5);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v469 + 776) + 736i64, &v634, a1);
                goto LABEL_1037;
            case 0x2DE:
                v470 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 288) ^ v9;
                v634 ^= FuckEnc::CacheRead<_DWORD>(v470 + 560) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v470 + 552) + 360i64) + 520i64);
                goto LABEL_1037;
            case 0x2DF:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 128i64) + 256i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 552) + 536i64) + 56i64));
                goto LABEL_1037;
            case 0x2E0:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 216i64) + 456i64) * (FuckEnc::CacheRead<_DWORD>(a1 + 224) + 1) + 2066540845;
                goto LABEL_1037;
            case 0x2E1:
                v471 = a1;
                v634 = (FuckEnc::CacheRead<_DWORD>(a1 + 752) ^ v9) + 1200371563;
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v471 + 592) + 792i64);
                goto LABEL_1037;
            case 0x2E2:
                v472 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 720);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v472 + 832);
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v472 + 112) + 720i64) ^ v634;
                goto LABEL_1036;
            case 0x2E3:
                v473 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 464i64) + 768i64) + 600i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v473 + 24);
                v634 += FuckEnc::CacheRead<_DWORD>(v473 + 832);
                goto LABEL_1037;
            case 0x2E4:
                v474 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 832);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v474 + 88) + 448i64) + 784i64) + 488i64) + 1456211477;
                goto LABEL_1037;
            case 0x2E5:
                v18 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 304i64) + 680i64) + 112i64) + 320i64) + 320i64) + 360i64);
                goto LABEL_1035;
            case 0x2E6:
                v634 = v9 + 1901772182;
                v475 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 632) ^ (v9 + 1901772182);
                v634 -= FuckEnc::CacheRead<_DWORD>(v475 + 168);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v475) + 96i64);
                goto LABEL_1037;
            case 0x2E7:
                v476 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 136);
                v634 += -1434267107 * FuckEnc::CacheRead<_DWORD>(v476 + 24) - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v476 + 232) + 288i64) ^ 0xE76A2CB7);
                goto LABEL_1037;
            case 0x2E8:
                v477 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 864) ^ v9;
                v14 = v634 - (FuckEnc::CacheRead<_DWORD>(v477 + 96) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v477 + 824) + 552i64) + 416i64));
                goto LABEL_1036;
            case 0x2E9:
                v634 = v9 ^ (1232691249 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 488i64) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 128) + 792i64));
                goto LABEL_1037;
            case 0x2EA:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 648) + FuckEnc::CacheRead<_DWORD>(a1 + 456) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 24i64) + 1;
                goto LABEL_1037;
            case 0x2EB:
                v634 = v9 + (((unsigned int)0xD2AEE3A + 1) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 328i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 312i64) + 536i64) + 864i64));
                goto LABEL_1037;
            case 0x2EC:
                v634 = v9 ^ 0x378C4346;
                v14 = (v9 ^ 0x378C4346) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 680i64) + 224i64) - FuckEnc::CacheRead<_DWORD>(a1 + 560) + 2075046049;
                goto LABEL_1036;
            case 0x2ED:
                v478 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 792i64);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v478 + 592) + 768i64) + 536i64) + 488i64);
                goto LABEL_1037;
            case 0x2EE:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 680i64) + 360i64) + 768i64) + 776i64) + 912i64) + 24i64) ^ v9;
                goto LABEL_1036;
            case 0x2EF:
                v479 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 632) - 1584763250;
                v634 -= FuckEnc::CacheRead<_DWORD>(v479 + 720);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v479 + 128) + 232i64) + 600i64);
                goto LABEL_1037;
            case 0x2F0:
                v480 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 184i64);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v480 + 344) + 96i64) ^ 0x1574ABE9;
                v634 += FuckEnc::CacheRead<_DWORD>(v480 + 720);
                goto LABEL_1037;
            case 0x2F1:
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 320i64) + 544i64) + 520i64) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 400) - 2136917127));
                goto LABEL_1037;
            case 0x2F2:
                Calls::FastCall(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 768i64) + 120i64, &v634, a1);
                v634 += 695474015;
                goto LABEL_1037;
            case 0x2F3:
                v481 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 400) ^ v9;
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v481 + 304) + 128i64) + 312i64) + 680i64) + 72i64) + 368i64);
                goto LABEL_1036;
            case 0x2F4:
                v482 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 832);
                v634 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v482 + 320) + 344i64) + 784i64) + 400i64) ^ v634) - 731391649;
                goto LABEL_1037;
            case 0x2F5:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 216i64) + 216i64) + 712i64, &v634, a1);
                goto LABEL_1037;
            case 0x2F6:
                v483 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 880);
                Calls::FastCall(v483 + 16, &v634, v483);
                v634 = ~v634;
                v634 ^= FuckEnc::CacheRead<_DWORD>(a1 + 400);
                goto LABEL_1037;
            case 0x2F7:
                v484 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 560);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v484 + 360) + 880i64);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v484 + 696) + 696i64) + 416i64);
                goto LABEL_1037;
            case 0x2F8:
                v634 = v9 + 676941104 * ~FuckEnc::CacheRead<_DWORD>(a1 + 456) - ((-1115722147 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 56i64)) ^ 0x3D921E6C);
                goto LABEL_1037;
            case 0x2F9:
                v634 = v9 ^ (1038007924 - 485023744 * ((FuckEnc::CacheRead<_DWORD>(a1 + 328) + 460110) ^ 0x554E1 | 0x14));
                goto LABEL_1037;
            case 0x2FA:
                v634 = v9 - 562527928;
                v485 = a1;
                v634 = (FuckEnc::CacheRead<_DWORD>(a1 + 224) ^ (v9 - 562527928)) - 2096038844;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v485 + 88) + 808i64) + 864i64);
                goto LABEL_1037;
            case 0x2FB:
                v14 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 112i64) + 128i64) + 592i64) + 768i64) + 304i64) + 456i64) ^ v9);
                goto LABEL_1036;
            case 0x2FC:
                v486 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 600) ^ v9 ^ 0x58068C52;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v486 + 320) + 728i64, &v634, a1);
                goto LABEL_1037;
            case 0x2FD:
                v14 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 320i64) + 784i64) + 768i64) + 784i64) + 752i64) ^ v9);
                goto LABEL_1036;
            case 0x2FE:
                v634 = (v9 + FuckEnc::CacheRead<_DWORD>(a1 + 184) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 88i64) + 112i64) + 400i64)) ^ 0x1C3D340;
                goto LABEL_1037;
            case 0x2FF:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 632i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 312i64) + 696i64) + 792i64) + 1138659957;
                goto LABEL_1037;
            case 0x300:
                v487 = a1;
                v634 = v9 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 168i64);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v487 + 112) + 544i64) + 24i64) ^ 0x97FDE7F7;
                goto LABEL_1037;
            case 0x301:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 696i64) + 448i64) + 536i64) + 520i64) - FuckEnc::CacheRead<_DWORD>(a1 + 632) - 1173394859;
                goto LABEL_1036;
            case 0x302:
                v488 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 256);
                v634 += FuckEnc::CacheRead<_DWORD>(v488 + 184) - 1298837518;
                Calls::FastCall(v488 + 496, &v634, v488);
                goto LABEL_1037;
            case 0x303:
                v489 = a1;
                v634 = v9 ^ (4 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 576) + 768i64) + 448i64) + 464i64) + 224i64));
                v634 -= FuckEnc::CacheRead<_DWORD>(v489 + 56);
                goto LABEL_1037;
            case 0x304:
                v490 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 784i64) + 912i64) + 552i64) + 56i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v490 + 632) - 1693032116;
                goto LABEL_1037;
            case 0x305:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 576i64) + 696i64) + 456i64) * (1315026086 * FuckEnc::CacheRead<_DWORD>(a1 + 24) - 2045952852);
                goto LABEL_1037;
            case 0x306:
                v491 = a1;
                v634 = (unsigned int)0x13A49237 ^ (v9 + FuckEnc::CacheRead<_DWORD>(a1 + 96));
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v491 + 544) + 368i64);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v491 + 72) + 488i64);
                goto LABEL_1037;
            case 0x307:
                v634 = v9 + 1720692077;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 248i64, &v634, a1);
                goto LABEL_1037;
            case 0x308:
                Calls::FastCall(a1 + 40, &v634, a1);
                Calls::FastCall(a1 + 800, &v634, a1);
                goto LABEL_1037;
            case 0x309:
                v634 = v9 - 536225866;
                v492 = a1;
                v634 = v9 - 536225866 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 216) + 632i64);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v492 + 536) + 776i64) + 520i64);
                goto LABEL_1037;
            case 0x30A:
                v493 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 216i64) + 400i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v493 + 808) + 784i64) + 768i64) + 456i64);
                goto LABEL_1037;
            case 0x30B:
                v494 = a1;
                v634 = v9 + 1410762001 * FuckEnc::CacheRead<_DWORD>(a1 + 520);
                v634 += FuckEnc::CacheRead<_DWORD>(v494 + 24) - 148582113;
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v494 + 112) + 488i64);
                goto LABEL_1037;
            case 0x30C:
                v495 = a1;
                v634 = (v9 - FuckEnc::CacheRead<_DWORD>(a1 + 600)) ^ 0x487F5797;
                v14 = ~(v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v495 + 576) + 544i64) + 288i64)) - ((_DWORD)0x6725174 + 4);
                goto LABEL_1036;
            case 0x30D:
                v634 = v9 + 1873258139;
                v634 = (v9 + 1873258139) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 56) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 320i64) + 304i64) + 792i64));
                goto LABEL_1037;
            case 0x30E:
                v496 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 56);
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v496 + 360) + 696i64) + 448i64) + 912i64) + 768i64) + 96i64) ^ v634;
                goto LABEL_1036;
            case 0x30F:
                v497 = a1;
                v634 = v9 ^ (1090354842 - 2135238037 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 328i64));
                v634 += 1918105063 * FuckEnc::CacheRead<_DWORD>(v497 + 256);
                goto LABEL_1037;
            case 0x310:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 32i64, &v634, a1);
                v634 += FuckEnc::CacheRead<_DWORD>(a1 + 184) ^ 0x4B48CE69;
                goto LABEL_1037;
            case 0x311:
                v498 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 720);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v498 + 344) + 256i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v498 + 88) + 344i64) + 288i64);
                goto LABEL_1037;
            case 0x312:
                v634 = v9 ^ 0x23113469;
                v499 = a1;
                v634 = (v9 ^ 0x23113469) + (FuckEnc::CacheRead<_DWORD>(a1 + 832) & 0xFFFFFFEF) + 1;
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v499 + 824) + 288i64);
                goto LABEL_1037;
            case 0x313:
                v634 = v9 ^ 0x18771D71;
                v500 = a1;
                v634 = (v9 ^ 0x18771D71) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 544i64) + 832i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v500 + 136);
                goto LABEL_1037;
            case 0x314:
                v501 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 776i64) + 808i64) + 56i64);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v501) + 88i64) + 632i64);
                goto LABEL_1037;
            case 0x315:
                v502 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 400) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 232i64) + 688i64);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v502 + 768) + 600i64);
                goto LABEL_1037;
            case 0x316:
                v634 = v9 - 1314145963;
                v634 = v9 - 1314145963 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 112i64) + 600i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 368i64);
                goto LABEL_1037;
            case 0x317:
                v503 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 560);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v503 + 824) + 112i64) + 776i64) + 912i64) + 808i64) + 400i64);
                goto LABEL_1037;
            case 0x318:
                v504 = a1;
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 632) >> 5) + 1;
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v504 + 808) + 360i64) + 696i64) + 632i64);
                goto LABEL_1037;
            case 0x319:
                v505 = a1;
                v634 = v9 ^ (-1547441310 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 768i64) + 488i64));
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v505 + 776) + 368i64);
                goto LABEL_1037;
            case 0x31A:
                v260 = a1;
                v261 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 552i64) + 520i64);
            LABEL_400:
                v634 = v261;
                Calls::FastCall(v260 + 152, &v634, v260);
                goto LABEL_1037;
            case 0x31B:
                v506 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 328);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v506 + 536) + 360i64) + 320i64) + 88i64) + 752i64);
                goto LABEL_1037;
            case 0x31C:
                v18 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 312i64) + 72i64) + 360i64) + 696i64) + 824i64) + 696i64);
                goto LABEL_1035;
            case 0x31D:
                v507 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 880i64);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v507 + 72) + 112i64) + 776i64) + 632i64) + 1;
                goto LABEL_1037;
            case 0x31E:
                v634 = v9 ^ 0x643DE29F;
                v634 = (v9 ^ 0x643DE29F) + (FuckEnc::CacheRead<_DWORD>(a1 + 600) << 26) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 752i64);
                goto LABEL_1037;
            case 0x31F:
                v508 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 600) ^ v9;
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v508 + 544) + 448i64) + 80i64) + 344i64) + 112i64) + 24i64) ^ v634;
                goto LABEL_1036;
            case 0x320:
                v634 = v9 + 1653015001;
                v634 = v9 + 1653015001 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 464i64) + 784i64) + 448i64) + 88i64) + 184i64);
                goto LABEL_1037;
            case 0x321:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 216i64) + 576i64) + 592i64) + 400i64) * (FuckEnc::CacheRead<_DWORD>(a1 + 720) + 2049380769);
                goto LABEL_1037;
            case 0x322:
                v509 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 720i64);
                Calls::FastCall(v509 + 104, &v634, v509);
                goto LABEL_1037;
            case 0x323:
                Calls::FastCall(a1 + 440, &v634, a1);
                v634 += 1244315778 + FuckEnc::CacheRead<_DWORD>(a1 + 752);
                goto LABEL_1037;
            case 0x324:
                v510 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 88i64) + 88i64) + 688i64);
                v634 = (v634 ^ (FuckEnc::CacheRead<_DWORD>(v510 + 688) >> 27)) + 723438593;
                goto LABEL_1037;
            case 0x325:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 304i64) + 680i64) + 440i64, &v634, a1);
                goto LABEL_1037;
            case 0x326:
                v511 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 632) - 1061050470;
                v634 ^= ((unsigned int)~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v511 + 312) + 24i64) >> 27) - 1076343562;
                goto LABEL_1037;
            case 0x327:
                v512 = a1;
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 328) | 0x11) ^ 0x32E8FFD6;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v512 + 592) + 576i64) + 720i64);
                goto LABEL_1037;
            case 0x328:
                v14 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 464i64) + 864i64) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 632i64));
                goto LABEL_1036;
            case 0x329:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 912i64) + 320i64) + 232i64) + 320i64) + 232i64) + 832i64) ^ v9;
                goto LABEL_1036;
            case 0x32A:
                v634 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 808i64) + 544i64) + 768i64) + 536i64) + 416i64);
                goto LABEL_1037;
            case 0x32B:
                v513 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 864i64) + 1;
                v634 -= FuckEnc::CacheRead<_DWORD>(v513 + 632);
                v634 += FuckEnc::CacheRead<_DWORD>(v513 + 184);
                goto LABEL_1037;
            case 0x32C:
                v514 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 288);
                v634 ^= -1077232777 * FuckEnc::CacheRead<_DWORD>(v514 + 368);
                v634 -= FuckEnc::CacheRead<_DWORD>(v514 + 632);
                goto LABEL_1037;
            case 0x32D:
                v634 = v9 ^ 0xA646F9A5;
                v515 = a1;
                v634 = ((v9 ^ 0xA646F9A5) + FuckEnc::CacheRead<_DWORD>(a1 + 456)) ^ 0x641AAADD;
                v634 ^= -494068796 * (FuckEnc::CacheRead<_DWORD>(v515 + 328) | 1);
                goto LABEL_1037;
            case 0x32E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 320i64) + 784i64) + 16i64, &v634, a1);
                goto LABEL_1037;
            case 0x32F:
                v634 = v9 + 1295965066;
                v516 = a1;
                v634 = v9 + 1295965066 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 576i64) + 56i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v516 + 552) + 136i64);
                goto LABEL_1037;
            case 0x330:
                v634 = v9 + 1739843851;
                v517 = a1;
                v634 = v9 + 1739843851 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 552i64) + 224i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v517 + 864) ^ 0x780A0348;
                goto LABEL_1037;
            case 0x331:
                v634 = v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 56i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 576i64) + 680i64) + 696i64) + 136i64);
                goto LABEL_1037;
            case 0x332:
                v518 = a1;
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 920) ^ 0xA2F551B8);
                v634 = v634 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v518 + 112) + 464i64) + 256i64) ^ 0x90F6300C) - 2068114241;
                goto LABEL_1037;
            case 0x333:
                v634 = (v9 ^ 0xE2FDBC38) + 1409699847;
                v634 += FuckEnc::CacheRead<_DWORD>(a1 + 368) * ~FuckEnc::CacheRead<_DWORD>(a1 + 832);
                goto LABEL_1037;
            case 0x334:
                v634 = (v9 + 21464824) ^ 0xAC847E4D;
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 232i64) + 544i64) + 344i64) + 256i64);
                goto LABEL_1037;
            case 0x335:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 784) + 544i64) + 576i64) + 680i64) + 768i64) + 344i64) + 880i64);
                goto LABEL_1036;
            case 0x336:
                v634 = (unsigned int)0x11B1E472 + v9;
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 88i64) + 168i64) ^ FuckEnc::CacheRead<_DWORD>(a1 + 648) & 0xFFFFFFED;
                goto LABEL_1037;
            case 0x337:
                v634 = v9 ^ 0xAD54C240;
                v634 = (v9 ^ 0xAD54C240) + -FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 576i64) + 168i64) - 1292461211;
                goto LABEL_1037;
            case 0x338:
                v14 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 312i64) + 552i64) + 464i64) + 544i64) + 312i64) + 880i64) & 0xFFFFFFE7);
                goto LABEL_1036;
            case 0x339:
                v634 = v9 + 47216219;
                v634 = (v9 + 47216219) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 688i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 912i64) + 600i64));
                goto LABEL_1037;
            case 0x33A:
                v634 = ~(v9 - 2020760030);
                v634 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 320i64) + 648i64) ^ v634);
                goto LABEL_1037;
            case 0x33B:
                v519 = a1;
                v634 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 680) + 648i64);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v519 + 696) + 448i64) + 880i64);
                goto LABEL_1037;
            case 0x33C:
                v634 = v9 ^ 0xDD0799BE;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 312i64) + 248i64, &v634, a1);
                goto LABEL_1037;
            case 0x33D:
                v634 = v9 - 747005032;
                v634 = (v9 - 747005032) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 56i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 552i64) + 456i64));
                goto LABEL_1037;
            case 0x33E:
                v634 = v9 - 674996957;
                v520 = a1;
                v634 = v9 - 674996957 - 661227024 * FuckEnc::CacheRead<_DWORD>(a1 + 792);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v520 + 400) ^ 0x42C93425;
                goto LABEL_1037;
            case 0x33F:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 552i64) + 912i64) + 232i64) + 824i64) + 448i64) + 648i64) ^ v9 ^ 0x8C6C4345;
                goto LABEL_1036;
            case 0x340:
                v521 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 328);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v521 + 592) + 688i64) * (FuckEnc::CacheRead<_DWORD>(v521 + 456) - ((_DWORD)0x5FCC2C7 + 1));
                goto LABEL_1037;
            case 0x341:
                v522 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 456i64);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(v522 + 56) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v522 + 552) + 288i64);
                goto LABEL_1036;
            case 0x342:
                v523 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 792i64) ^ v9 ^ 0xD1CA1A44;
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v523 + 360) + 320i64) + 80i64) + 832i64);
                goto LABEL_1036;
            case 0x343:
                v524 = a1;
                v634 = v9 ^ (-722747349 * FuckEnc::CacheRead<_DWORD>(a1 + 456));
                v634 = (v634 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v524 + 360) + 680i64) + 792i64)) ^ 0xBA4212C4;
                goto LABEL_1037;
            case 0x344:
                v525 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 920) ^ v9;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v525 + 448) + 336i64, &v634, a1);
                goto LABEL_1037;
            case 0x345:
                v634 = v9 + 1597950491;
                v526 = a1;
                v634 = v9 + 1597950491 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 56i64);
                Calls::FastCall(v526 + 16, &v634, v526);
                goto LABEL_1037;
            case 0x346:
                v634 = v9 + ~(FuckEnc::CacheRead<_DWORD>(a1 + 400) ^ 0x824DB2C9) + -FuckEnc::CacheRead<_DWORD>(a1 + 56) - 139706715;
                goto LABEL_1037;
            case 0x347:
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 520) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 320i64) + 80i64) + 792i64)) - 1463080359;
                goto LABEL_1037;
            case 0x348:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 912i64) + 776i64) + 736i64, &v634, a1);
                goto LABEL_1037;
            case 0x349:
                v527 = a1;
                v634 = v9 - 761651431 * FuckEnc::CacheRead<_DWORD>(a1 + 600);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v527 + 168);
                v634 += FuckEnc::CacheRead<_DWORD>(v527 + 720);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v527 + 720);
                goto LABEL_1037;
            case 0x34A:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 912i64) + 784i64) + 368i64) - (~FuckEnc::CacheRead<_DWORD>(a1 + 632) | 0x1F);
                goto LABEL_1036;
            case 0x34B:
                v528 = a1;
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 256) + 1762639557) & 0xFFFFFFED;
                v634 = (v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v528 + 312) + 344i64) + 488i64)) ^ 0x28FC3B2E;
                goto LABEL_1037;
            case 0x34C:
                v529 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 256) ^ v9;
                v634 -= 1445138636 * FuckEnc::CacheRead<_DWORD>(v529 + 328);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v529 + 288);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(v529 + 328);
                goto LABEL_1036;
            case 0x34D:
                v530 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 488);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v530 + 360) + 360i64) + 816i64, &v634, a1);
                goto LABEL_1037;
            case 0x34E:
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 464i64) + 752i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 576i64) + 560i64));
                goto LABEL_1037;
            case 0x34F:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 824) + 320i64) + 784i64) + 72i64) + 768i64) + 232i64) + 464i64) + 256i64);
                goto LABEL_1036;
            case 0x350:
                v634 = v9 ^ 0xFD832D3E;
                v531 = a1;
                v634 = (v9 ^ 0xFD832D3E) + FuckEnc::CacheRead<_DWORD>(a1 + 224);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v531 + 136);
                v634 += ~FuckEnc::CacheRead<_DWORD>(v531 + 184);
                goto LABEL_1037;
            case 0x351:
                v532 = a1;
                v634 = v9 ^ (-176465075 * FuckEnc::CacheRead<_DWORD>(a1 + 648));
                v634 ^= FuckEnc::CacheRead<_DWORD>(v532 + 168);
                v634 = ~(v634 + FuckEnc::CacheRead<_DWORD>(v532 + 600));
                goto LABEL_1037;
            case 0x352:
                v533 = a1;
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 56) - 1065264204);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v533 + 680) + 864i64);
                v634 -= 1249706655 * FuckEnc::CacheRead<_DWORD>(v533 + 456);
                goto LABEL_1037;
            case 0x353:
                v534 = a1;
                v634 = ((v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 824) + 400i64)) ^ 0x4F03EFEF) - 1082615151;
                v634 -= 499660422 * FuckEnc::CacheRead<_DWORD>(v534 + 600);
                goto LABEL_1037;
            case 0x354:
                v535 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 720);
                Calls::FastCall(v535 + 504, &v634, v535);
                v634 -= FuckEnc::CacheRead<_DWORD>(a1 + 96) ^ 0x30C7878F;
                goto LABEL_1037;
            case 0x355:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 72i64) + 216i64) + 824i64) + 312i64) + 456i64) + 29206004;
                goto LABEL_1037;
            case 0x356:
                v151 = ((v9 - 1878049111) ^ 0x2556B273) - 993465139;
                v634 = v151;
                v152 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 80) + 912i64);
            LABEL_221:
                v634 = v151 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v152 + 680) + 792i64);
                goto LABEL_1037;
            case 0x357:
                v536 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 288);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v536 + 536) + 544i64) + 88i64) + 344i64) + 216i64) + 416i64);
                goto LABEL_1037;
            case 0x358:
                v537 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 688i64) ^ v9 ^ 0x7D9AD7AF;
                v634 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v537 + 360) + 328i64);
                goto LABEL_1037;
            case 0x359:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 536i64) + 784i64) + 344i64) + 696i64) + 368i64) - ((_DWORD)0x71B0A75 + 6);
                goto LABEL_1036;
            case 0x35A:
                v634 = v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 832i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 536i64) + 72i64) + 576i64) + 368i64);
                goto LABEL_1037;
            case 0x35B:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 360i64) + 576i64) + 216i64) + 544i64) + 464i64) + 168i64);
                goto LABEL_1037;
            case 0x35C:
                v538 = a1;
                v634 = v9 + 1512463968 * FuckEnc::CacheRead<_DWORD>(a1 + 520);
                v634 += FuckEnc::CacheRead<_DWORD>(v538 + 456);
                v634 = v634 - FuckEnc::CacheRead<_DWORD>(v538 + 368) - 1457543337;
                goto LABEL_1037;
            case 0x35D:
                v539 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 320i64) + 688i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v539 + 768) + 808i64) + 344i64) + 368i64);
                goto LABEL_1037;
            case 0x35E:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 880) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 824) + 552i64) + 776i64) + 680i64) + 688i64));
                goto LABEL_1037;
            case 0x35F:
                v634 = v9 ^ 0x9F71895D;
                v540 = a1;
                v634 = (v9 ^ 0x9F71895D) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 552) + 768i64) + 448i64) + 328i64);
                v14 = FuckEnc::CacheRead<_DWORD>(v540 + 96) ^ v634;
                goto LABEL_1036;
            case 0x360:
                v541 = a1;
                v634 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 920) << 24) - FuckEnc::CacheRead<_DWORD>(a1 + 256);
                v634 = FuckEnc::CacheRead<_DWORD>(v541 + 400) - v634 + 1238995711;
                goto LABEL_1037;
            case 0x361:
                v542 = a1;
                v634 = ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 576i64) + 24i64) ^ v9) - ((_DWORD)0xA069D66 + 4)) ^ 0x5B22600A;
                v14 = v634 - 41207615 * FuckEnc::CacheRead<_DWORD>(v542 + 224);
                goto LABEL_1036;
            case 0x362:
                v14 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 216i64) + 464i64) + 344i64) + 304i64) + 112i64) + 920i64) ^ v9) - ((_DWORD)0x5783CBC + 4);
                goto LABEL_1036;
            case 0x363:
                v543 = a1;
                v634 = (v9 - FuckEnc::CacheRead<_DWORD>(a1 + 168)) ^ 0xE1EF775E;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v543 + 680) + 352i64, &v634, a1);
                goto LABEL_1037;
            case 0x364:
                v544 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 768i64) + 56i64);
                Calls::FastCall(v544 + 728, &v634, v544);
                goto LABEL_1037;
            case 0x365:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 320i64) + 824i64) + 320i64) + 592i64) + 304i64) + 488i64);
                goto LABEL_1037;
            case 0x366:
                v545 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 752);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v545 + 72) + 112i64) + 776i64) + 776i64) + 24i64);
                goto LABEL_1037;
            case 0x367:
                v546 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 288) ^ v9 ^ 0x8EB04D3A;
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v546 + 128) + 808i64) + 696i64) + 520i64);
                goto LABEL_1036;
            case 0x368:
                v547 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 400);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v547 + 312) + 112i64) + 568i64, &v634, a1);
                goto LABEL_1037;
            case 0x369:
                v14 = ~(v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 312i64) + 448i64) + 72i64) + 344i64) + 560i64));
                goto LABEL_1036;
            case 0x36A:
                v634 = v9 ^ 0x909443FB;
                v634 = v9 ^ 0x909443FB ^ (379359740 * FuckEnc::CacheRead<_DWORD>(a1 + 832) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 288i64)) ^ 0xE5A7B976;
                goto LABEL_1037;
            case 0x36B:
                v548 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 832) + 965339607;
                v634 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v548 + 232) + 792i64);
                v634 -= FuckEnc::CacheRead<_DWORD>(v548 + 136);
                goto LABEL_1037;
            case 0x36C:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 80i64) + 128i64) + 808i64) + 552i64) + 776i64) + 792i64) ^ v9;
                goto LABEL_1036;
            case 0x36D:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 312) + 304i64) + 128i64) + 88i64) + 592i64) + 792i64);
                goto LABEL_1036;
            case 0x36E:
                v549 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 320i64) + 488i64) ^ v9;
                v634 += FuckEnc::CacheRead<_DWORD>(v549 + 560) ^ 0x99B4F4BF;
                v634 += FuckEnc::CacheRead<_DWORD>(v549 + 752);
                goto LABEL_1037;
            case 0x36F:
                v634 = (v9 + 1555585608) ^ 0xD9D1DF1E;
                v550 = a1;
                v634 += FuckEnc::CacheRead<_DWORD>(a1 + 416);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v550 + 304) + 520i64) & 0xFFFFFFF4;
                goto LABEL_1037;
            case 0x370:
                v634 = v9 + 1531085554;
                v634 = v9 + 1531085554 + FuckEnc::CacheRead<_DWORD>(a1 + 560) + ~FuckEnc::CacheRead<_DWORD>(a1 + 288) + 1061691814;
                goto LABEL_1037;
            case 0x371:
                v634 = v9 - 615563211;
                v551 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 784) + 288i64) ^ (v9 - 615563211);
                v634 ^= FuckEnc::CacheRead<unsigned __int16>(v551 + 866);
                goto LABEL_1037;
            case 0x372:
                v552 = a1;
                v634 = (FuckEnc::CacheRead<_DWORD>(a1 + 864) ^ v9) + 1484530342;
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v552 + 696) + 448i64) + 464i64) + 320i64) + 648i64);
                goto LABEL_1037;
            case 0x373:
                v634 = ~(v9 + 916949275);
                v553 = a1;
                v634 -= FuckEnc::CacheRead<_DWORD>(a1 + 920) ^ 0xF43225F8;
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v553 + 112) + 832i64);
                goto LABEL_1037;
            case 0x374:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 768i64) + 768i64) + 768i64) + 112i64) + 88i64) + 488i64);
                goto LABEL_1037;
            case 0x375:
                v554 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 520);
                v634 += FuckEnc::CacheRead<_DWORD>(v554 + 168);
                Calls::FastCall(v554 + 672, &v634, v554);
                goto LABEL_1037;
            case 0x376:
                v555 = a1;
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 456i64) ^ 0xFD746CF9);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v555 + 304) + 448i64) + 56i64);
                goto LABEL_1037;
            case 0x377:
                v556 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 80) + 464i64) + 592i64) + 768i64) + 288i64) ^ v9;
                v634 += 812669331 * FuckEnc::CacheRead<_DWORD>(v556 + 168);
                goto LABEL_1037;
            case 0x378:
                v557 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 304i64) + 304i64) + 720i64);
                v634 += 364143866 * FuckEnc::CacheRead<_DWORD>(v557 + 24);
                goto LABEL_1037;
            case 0x379:
                v558 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 368);
                v634 -= FuckEnc::CacheRead<_DWORD>(v558 + 456) ^ 0x34754CDA;
                v634 += FuckEnc::CacheRead<_DWORD>(v558 + 920);
                goto LABEL_1037;
            case 0x37A:
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 224i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 88i64) + 128i64) + 56i64));
                goto LABEL_1037;
            case 0x37B:
                v634 = v9 ^ 0x4A41050A;
                v634 = v9 ^ 0x4A41050A ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 864i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 912i64) + 416i64));
                goto LABEL_1037;
            case 0x37C:
                v559 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 488);
                v634 ^= 2069628384 * FuckEnc::CacheRead<_DWORD>(v559 + 368);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v559 + 328) + 936737652;
                goto LABEL_1037;
            case 0x37D:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 128) + 808i64) + 552i64) + 672i64, &v634, a1);
                goto LABEL_1037;
            case 0x37E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 88i64) + 776i64) + 128i64) + 584i64, &v634, a1);
                goto LABEL_1037;
            case 0x37F:
                v560 = a1;
                v634 = v9 ^ (-633661724 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 560i64));
                Calls::FastCall(v560 + 40, &v634, v560);
                goto LABEL_1037;
            case 0x380:
                v14 = v9 - (((((unsigned int)0x5F5C898 + 1) ^ FuckEnc::CacheRead<_DWORD>(a1 + 632)) * 8 * FuckEnc::CacheRead<_DWORD>(a1 + 400)) ^ 0x7F3D5B9F);
                goto LABEL_1036;
            case 0x381:
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 696i64) + 400i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 696i64) + 824i64) + 136i64));
                goto LABEL_1037;
            case 0x382:
                v634 = v9 - 1936539229;
                v561 = a1;
                v634 = v9 - 1936539229 - FuckEnc::CacheRead<_DWORD>(a1 + 256);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v561 + 96);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v561 + 768) + 752i64);
                goto LABEL_1037;
            case 0x383:
                v634 = (v9 + 1666412541) ^ 0xF899F58F;
                v634 -= 1298224758 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 832i64);
                goto LABEL_1037;
            case 0x384:
                v634 = ~(v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 136i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 216) + 464i64) + 680i64) + 560i64));
                goto LABEL_1037;
            case 0x385:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 80i64) + 88i64) + 216i64) + 88i64) + 232i64) + 552i64) + 168i64);
                goto LABEL_1037;
            case 0x386:
                v634 = ~(v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 824i64) + 360i64) + 312i64) + 416i64));
                goto LABEL_1037;
            case 0x387:
                v562 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 880) + 1;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v562 + 344) + 232i64) + 544i64) + 224i64);
                goto LABEL_1037;
            case 0x388:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 128i64) + 216i64) + 128i64) + 312i64) + 552i64) + 72i64) + 688i64);
                goto LABEL_1037;
            case 0x389:
                v634 = v9 ^ 0xC4EFBBE8;
                v563 = a1;
                v634 = v9 ^ 0xC4EFBBE8 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 80) + 488i64) & 0xFFFFFFF2;
                v634 += FuckEnc::CacheRead<_DWORD>(v563 + 600) << 9;
                goto LABEL_1037;
            case 0x38A:
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 128) + 784i64) + 448i64) + 80i64) + 88i64) + 880i64) ^ v9 ^ 0x3736C11B;
                goto LABEL_1036;
            case 0x38B:
                v564 = a1;
                v634 = ~(v9 + FuckEnc::CacheRead<_DWORD>(a1 + 920));
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v564 + 544) + 360i64) + 464i64) + 136i64) + 581219230;
                goto LABEL_1037;
            case 0x38C:
                v634 = v9 ^ 0xE18857BB;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 776i64) + 728i64, &v634, a1);
                goto LABEL_1037;
            case 0x38D:
                v565 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 168) ^ v9;
                v634 += FuckEnc::CacheRead<_DWORD>(v565 + 184) << 29;
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v565 + 576) + 344i64) + 864i64);
                goto LABEL_1037;
            case 0x38E:
                v634 = v9 ^ 0xA3CE9375;
                v566 = a1;
                v634 = (v9 ^ 0xA3CE9375) + FuckEnc::CacheRead<_DWORD>(a1 + 56);
                Calls::FastCall(v566 + 208, &v634, v566);
                v634 ^= 0xB47C7720;
                goto LABEL_1037;
            case 0x38F:
                v567 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 696i64) + 168i64) ^ v9;
                v634 -= FuckEnc::CacheRead<_DWORD>(v567 + 456);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(v567 + 400);
                goto LABEL_1036;
            case 0x390:
                v568 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 680i64) + 920i64);
                Calls::FastCall(v568 + 104, &v634, v568);
                goto LABEL_1037;
            case 0x391:
                v569 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 720) ^ v9;
                v14 = v634 - (FuckEnc::CacheRead<_DWORD>(v569 + 168) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v569 + 768) + 88i64) + 688i64) ^ 0x81544DDC);
                goto LABEL_1036;
            case 0x392:
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 304i64) + 912i64) + 216i64) + 464i64) + 536i64) + 456i64) | 0x1B);
                goto LABEL_1037;
            case 0x393:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 912i64) + 576i64) + 304i64) + 680i64) + 680i64) + 776i64) + 416i64);
                goto LABEL_1037;
            case 0x394:
                v14 = (v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 920) << 15) - FuckEnc::CacheRead<_DWORD>(a1 + 600) - 992710286) ^ 0xBFFF5973;
                goto LABEL_1036;
            case 0x395:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 216) + 304i64) + 184i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 232) + 520i64));
                goto LABEL_1037;
            case 0x396:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 792) + (FuckEnc::CacheRead<_DWORD>(a1 + 368) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 808i64) + 136i64) ^ 0x8D2F99B3);
                goto LABEL_1037;
            case 0x397:
                v570 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 24) ^ v9;
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v570) + 304i64) + 920i64);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v570 + 448) + 168i64);
                goto LABEL_1036;
            case 0x398:
                v634 = v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 864i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 576i64) + 784i64) + 768i64) + 328i64);
                goto LABEL_1037;
            case 0x399:
                v571 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 368i64);
                v634 = (v634 - FuckEnc::CacheRead<_DWORD>(v571 + 752)) ^ 0x481F7F25;
                v634 += FuckEnc::CacheRead<_DWORD>(v571 + 648);
                goto LABEL_1037;
            case 0x39A:
                v572 = a1;
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 256) << 10);
                Calls::FastCall(v572 + 272, &v634, v572);
                v634 ^= 0xD5B09E27;
                goto LABEL_1037;
            case 0x39B:
                v573 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 880) ^ v9;
                v634 -= FuckEnc::CacheRead<_DWORD>(v573 + 328);
                v634 -= FuckEnc::CacheRead<_DWORD>(v573 + 632) ^ 0x3D06C0BF;
                v634 += FuckEnc::CacheRead<_DWORD>(v573 + 56);
                goto LABEL_1037;
            case 0x39C:
                v574 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 464i64) + 920i64) - 141854260;
                v634 ^= FuckEnc::CacheRead<_DWORD>(v574 + 632) ^ 0x72E7EEEC;
                goto LABEL_1037;
            case 0x39D:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 312i64) + 448i64) + 536i64) + 544i64) + 560i64);
                goto LABEL_1037;
            case 0x39E:
                Calls::FastCall(a1 + 672, &v634, a1);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 128i64) + 720i64);
                goto LABEL_1037;
            case 0x39F:
                v575 = a1;
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 864) & 0xFFFFFFF2);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v575 + 88) + 232i64) + 24i64) + 1;
                goto LABEL_1037;
            case 0x3A0:
                v576 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 792);
                v634 = (v634 - FuckEnc::CacheRead<_DWORD>(v576 + 224) + 1890071619) ^ 0x509DD9FF;
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(v576 + 488);
                goto LABEL_1036;
            case 0x3A1:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 216) + 576i64) + 304i64) + 696i64) + 272i64, &v634, a1);
                goto LABEL_1037;
            case 0x3A2:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 312i64) + 288i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 448i64) + 832i64);
                goto LABEL_1037;
            case 0x3A3:
                v634 = v9 - 188575352;
                v634 = v9 - 188575352 + 2060352258 * FuckEnc::CacheRead<_DWORD>(a1 + 416) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 592i64) + 688i64);
                goto LABEL_1037;
            case 0x3A4:
                v577 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 168) - 1285320169;
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v577 + 912) + 680i64) + 112i64) + 520i64);
                goto LABEL_1037;
            case 0x3A5:
                v578 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 456) - 2051189651;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v578 + 360) + 568i64, &v634, a1);
                goto LABEL_1037;
            case 0x3A6:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 680) + 560i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 88i64) + 544i64) + 464i64) + 920i64));
                goto LABEL_1037;
            case 0x3A7:
                v579 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 600);
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v579 + 776) + 768i64) + 216i64) + 488i64) - v634 + 919753475;
                goto LABEL_1037;
            case 0x3A8:
                v580 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 448i64) + 72i64) + 448i64) + 360i64) + 832i64) ^ v9;
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(v580 + 400);
                goto LABEL_1036;
            case 0x3A9:
                v581 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 696i64) + 544i64) + 720i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v581 + 576) + 232i64) + 416i64);
                goto LABEL_1037;
            case 0x3AA:
                v582 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 136);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v582 + 776) + 320i64) + 792i64) * (FuckEnc::CacheRead<_DWORD>(v582 + 184) + 1626202651);
                goto LABEL_1037;
            case 0x3AB:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 552i64) + 912i64) + 448i64) + 768i64) + 824i64) + 600i64);
                goto LABEL_1036;
            case 0x3AC:
                v583 = a1;
                v634 = v9 - 765152210 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 632i64);
                v14 = v634 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v583 + 448) + 304i64) + 488i64) >> 23);
                goto LABEL_1036;
            case 0x3AD:
                v584 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 880);
                v634 = (v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v584) + 448i64) + 112i64) + 696i64) + 792i64)) ^ 0x1DDD4AA3;
                goto LABEL_1037;
            case 0x3AE:
                v634 = v9 ^ 0xB3B72D87;
                v14 = (v9 ^ 0xB3B72D87) - FuckEnc::CacheRead<_DWORD>(a1 + 24) * (1873316352 * FuckEnc::CacheRead<_DWORD>(a1 + 288) - 363350016);
                goto LABEL_1036;
            case 0x3AF:
                v634 = v9 + 2091025642;
                v585 = a1;
                v634 = v9 + 2091025642 - FuckEnc::CacheRead<_DWORD>(a1 + 416);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v585 + 216) + 256i64) ^ 0x63AD28B5;
                goto LABEL_1037;
            case 0x3B0:
                v586 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 328);
                v634 += FuckEnc::CacheRead<_DWORD>(v586 + 920) + 459787301;
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v586) + 184i64);
                goto LABEL_1037;
            case 0x3B1:
                v587 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 136) ^ v9;
                LODWORD(v9) = v634 - FuckEnc::CacheRead<_DWORD>(v587 + 328);
                v634 = v9;
                v25 = FuckEnc::CacheRead<_QWORD>(v587 + 304);
            LABEL_23:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v25 + 320) + 168i64);
                goto LABEL_1037;
            case 0x3B2:
                v588 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 256);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v588 + 560) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v588 + 216) + 224i64);
                goto LABEL_1037;
            case 0x3B3:
                v589 = a1;
                v634 = ((FuckEnc::CacheRead<_DWORD>(a1 + 632) ^ v9) + 1383285355) ^ 0x60A04E1E;
                v14 = v634 - (~FuckEnc::CacheRead<_DWORD>(v589 + 632) | 3);
                goto LABEL_1036;
            case 0x3B4:
                v590 = a1;
                v634 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 632) ^ 0xC59D43EA);
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v590 + 696) + 320i64) + 304i64) + 416i64) ^ v634;
                goto LABEL_1036;
            case 0x3B5:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 808i64) + 768i64) + 304i64) + 88i64) + 112i64) + 168i64);
                goto LABEL_1037;
            case 0x3B6:
                v591 = a1;
                v634 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 520) ^ 0x3BBE142F) - 1314173893;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v591 + 72) + 368i64) + 1;
                goto LABEL_1037;
            case 0x3B7:
                v592 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 792i64);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v592 + 360) + 920i64);
                v634 -= FuckEnc::CacheRead<_DWORD>(v592 + 688);
                goto LABEL_1037;
            case 0x3B8:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 680i64) + 112i64) + 304i64) + 728i64, &v634, a1);
                goto LABEL_1037;
            case 0x3B9:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 536i64) + 112i64) + 784i64) + 576i64) + 776i64) + 520i64);
                goto LABEL_1036;
            case 0x3BA:
                v593 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 56) ^ v9;
                v634 ^= (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v593 + 128) + 776i64) + 464i64) + 560i64) + 1395938652) ^ 0x843E2690;
                goto LABEL_1037;
            case 0x3BB:
                v594 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 416) ^ v9;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v594 + 72) + 448i64) + 16i64, &v634, a1);
                goto LABEL_1037;
            case 0x3BC:
                v634 = v9 + 1030033995;
                v634 = v9 + 1030033995 + (FuckEnc::CacheRead<_DWORD>(a1 + 416) ^ 0xD1FB0DFE) - FuckEnc::CacheRead<_DWORD>(a1 + 456) + 767233335;
                goto LABEL_1037;
            case 0x3BD:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 560i64) * (FuckEnc::CacheRead<_DWORD>(a1 + 792) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 576) + 344i64) + 648i64));
                goto LABEL_1037;
            case 0x3BE:
                v595 = a1;
                v634 = ((unsigned int)0x60C2D46 + 5) ^ (v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 80i64) + 464i64) + 184i64));
                v634 -= FuckEnc::CacheRead<_DWORD>(v595 + 184);
                goto LABEL_1037;
            case 0x3BF:
                v596 = a1;
                v634 = (FuckEnc::CacheRead<_DWORD>(a1 + 488) ^ v9) - 1875961640;
                v634 += 696099074 - (FuckEnc::CacheRead<_DWORD>(v596 + 328) << 8);
                goto LABEL_1037;
            case 0x3C0:
                v597 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 136) ^ v9;
                v634 ^= FuckEnc::CacheRead<_DWORD>(v597 + 648) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v597 + 304) + 360i64) + 136i64) | 0x15;
                goto LABEL_1037;
            case 0x3C1:
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 880i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 320i64) + 912i64) + 456i64));
                goto LABEL_1037;
            case 0x3C2:
                v634 = v9 ^ 0x6B5132C4;
                v14 = (v9 ^ 0x6B5132C4) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 544i64) + 80i64) + 784i64) + 232i64) + 24i64);
                goto LABEL_1036;
            case 0x3C3:
                v598 = a1;
                v634 = v9 ^ (367460478 * FuckEnc::CacheRead<_DWORD>(a1 + 256));
                Calls::FastCall(v598 + 32, &v634, v598);
                goto LABEL_1037;
            case 0x3C4:
                v634 = v9 ^ 0xCF752B67;
                v599 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 56) ^ v9 ^ 0xCF752B67;
                v14 = v634 - 1002618911 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v599 + 128) + 592i64) + 864i64);
                goto LABEL_1036;
            case 0x3C5:
                v634 = ~(v9 ^ (-537451608 * FuckEnc::CacheRead<_DWORD>(a1 + 632) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 312) + 320i64) + 288i64)));
                goto LABEL_1037;
            case 0x3C6:
                v600 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 720);
                v634 -= FuckEnc::CacheRead<_DWORD>(v600 + 56) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v600 + 112) + 88i64) + 72i64) + 752i64);
                goto LABEL_1037;
            case 0x3C7:
                v634 = v9 - 1505754772;
                v634 = v9 - 1505754772 + ~FuckEnc::CacheRead<_DWORD>(a1 + 920) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 544) + 360i64) + 96i64);
                goto LABEL_1037;
            case 0x3C8:
                v601 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 752);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v601 + 600);
                v634 -= FuckEnc::CacheRead<_DWORD>(v601 + 136);
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(v601 + 168);
                goto LABEL_1036;
            case 0x3C9:
                v634 = ((unsigned int)0x8B2D82C + 1) ^ (v9 + 858471994 * FuckEnc::CacheRead<_DWORD>(a1 + 368) * (FuckEnc::CacheRead<_DWORD>(a1 + 96) + 1) - 1348624655);
                goto LABEL_1037;
            case 0x3CA:
                v602 = a1;
                v634 = (v9 - 663985283 * (FuckEnc::CacheRead<_DWORD>(a1 + 24) & 0xFFFFFFE0)) ^ 0x7225F9D6;
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(v602 + 416);
                goto LABEL_1036;
            case 0x3CB:
                v603 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 344i64) + 600i64) ^ v9;
                v14 = v634 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v603 + 112) + 784i64) + 488i64);
                goto LABEL_1036;
            case 0x3CC:
                v14 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 688i64) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 792i64)) - FuckEnc::CacheRead<_DWORD>(a1 + 880);
                goto LABEL_1036;
            case 0x3CD:
                v604 = a1;
                v634 = (v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 552) + 912i64) + 456i64) << 7)) + 558792017;
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v604 + 464) + 720i64);
                goto LABEL_1037;
            case 0x3CE:
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 328) & 0xFFFFFFF1) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 696) + 416i64) ^ 0xB07C25D3);
                goto LABEL_1037;
            case 0x3CF:
                v605 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 368) ^ v9;
                v634 = (FuckEnc::CacheRead<_DWORD>(v605 + 752) ^ v634) + 976393025;
                v634 ^= -867042024 * FuckEnc::CacheRead<_DWORD>(v605 + 632);
                goto LABEL_1037;
            case 0x3D0:
                v634 = v9 - 787326974;
                v215 = a1;
                v216 = (v9 - 787326974) ^ (740078081 * FuckEnc::CacheRead<_DWORD>(a1 + 416));
            LABEL_325:
                v634 = v216;
                Calls::FastCall(v215 + 800, &v634, v215);
                goto LABEL_1037;
            case 0x3D1:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 536i64) + 80i64) + 344i64) + 544i64) + 576i64) + 288i64) - 377557845;
                goto LABEL_1036;
            case 0x3D2:
                v606 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 184i64) + 800724136;
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v606 + 592) + 592i64) + 544i64) + 56i64);
                goto LABEL_1037;
            case 0x3D3:
                v14 = ~(v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 488) ^ FuckEnc::CacheRead<_DWORD>(a1 + 880) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 880i64)));
                goto LABEL_1036;
            case 0x3D4:
                v607 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 864) ^ v9;
                v634 -= (396775115 * FuckEnc::CacheRead<_DWORD>(v607 + 632)) & 0xFFFFFFF6;
                v634 += FuckEnc::CacheRead<_DWORD>(v607 + 880) - 1844953802;
                goto LABEL_1037;
            case 0x3D5:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 216) + 72i64) + 448i64) + 448i64) + 80i64) + 344i64) + 184i64) + 1;
                goto LABEL_1037;
            case 0x3D6:
                v608 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 304i64) + 320i64) + 808i64) + 720i64);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v608 + 776) + 24i64);
                goto LABEL_1037;
            case 0x3D7:
                v634 = v9 + 791957495;
                v609 = a1;
                v634 = v9 + 791957495 - 1935426224 * FuckEnc::CacheRead<_DWORD>(a1 + 400);
                v634 ^= FuckEnc::CacheRead<_DWORD>(v609 + 920);
                v634 -= FuckEnc::CacheRead<_DWORD>(v609 + 456);
                goto LABEL_1037;
            case 0x3D8:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 592) + 320i64) + 344i64) + 16i64, &v634, a1);
                goto LABEL_1037;
            case 0x3D9:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 256) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 112) + 128i64) + 784i64) + 536i64) + 168i64);
                goto LABEL_1036;
            case 0x3DA:
                v610 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 448i64) + 328i64) ^ v9 ^ 0xF212CFA4;
                v634 += 557558960 * FuckEnc::CacheRead<_DWORD>(v610 + 56) - 331168608;
                goto LABEL_1037;
            case 0x3DB:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 360) + 912i64) + 784i64) + 320i64) + 864i64) * (FuckEnc::CacheRead<_DWORD>(a1 + 224) ^ 0x4A2237D3);
                goto LABEL_1037;
            case 0x3DC:
                v634 = v9 - 524138595;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 552i64) + 216i64) + 56i64) ^ (v9 - 524138595) ^ 0x2A4349E9;
                goto LABEL_1037;
            case 0x3DD:
                v611 = a1;
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 920) ^ 0xEE3E4B1E);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v611 + 776) + 552i64) + 128i64) + 72i64) + 880i64);
                goto LABEL_1037;
            case 0x3DE:
                v14 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 88i64) + 592i64) + 304i64) + 328i64) ^ v9) + 1440857383;
                goto LABEL_1036;
            case 0x3DF:
                v634 = v9 + 695069030;
                v612 = a1;
                v634 = v9 + 695069030 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 648i64);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v612 + 808) + 456i64) - 1052793330;
                goto LABEL_1037;
            case 0x3E0:
                v613 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 136);
                v634 += (FuckEnc::CacheRead<_DWORD>(v613 + 400) | 8) - 1435222784;
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v613 + 304) + 288i64);
                goto LABEL_1037;
            case 0x3E1:
                v614 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 792);
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v614 + 464) + 112i64) + 544i64) + 464i64) + 536i64) + 400i64) ^ v634;
                goto LABEL_1036;
            case 0x3E2:
                v615 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 448) + 344i64) + 448i64) + 24i64);
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v615 + 464) + 184i64) ^ v634;
                goto LABEL_1036;
            case 0x3E3:
                v616 = a1;
                v634 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 344i64) + 720i64) ^ 0x45FE4120);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v616 + 312) + 920i64);
                goto LABEL_1037;
            case 0x3E4:
                v634 = v9 - 1502380400;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 784i64) + 336i64, &v634, a1);
                goto LABEL_1037;
            case 0x3E5:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 784) + 552i64) + 128i64) + 696i64) + 344i64) + 696i64) + 56i64) - ((_DWORD)0xA054739 + 4);
                goto LABEL_1036;
            case 0x3E6:
                v617 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(a1 + 832) ^ v9;
                v634 = (v634 ^ FuckEnc::CacheRead<_DWORD>(v617 + 880) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v617 + 448) + 688i64)) + 804450871;
                goto LABEL_1037;
            case 0x3E7:
                v634 = v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 552) + 832i64) ^ (-1417687986 * (FuckEnc::CacheRead<_DWORD>(a1 + 184) & 0xFFFFFFEE));
                goto LABEL_1037;
            case 0x3E8:
                v618 = a1;
                v634 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 128) + 416i64) | 9);
                v634 += FuckEnc::CacheRead<_DWORD>(v618 + 864);
                v634 += FuckEnc::CacheRead<_DWORD>(v618 + 184) >> 14;
                goto LABEL_1037;
            case 0x3E9:
                v619 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 288);
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v619 + 312) + 24i64);
                Calls::FastCall(v619 + 32, &v634, v619);
                goto LABEL_1037;
            case 0x3EA:
                v620 = a1;
                v634 = v9 ^ (439290675 * (FuckEnc::CacheRead<_DWORD>(a1 + 720) | 4));
                v634 += FuckEnc::CacheRead<_DWORD>(v620 + 560) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v620 + 128) + 456i64);
                goto LABEL_1037;
            case 0x3EB:
                v621 = a1;
                v634 = (v9 - FuckEnc::CacheRead<_DWORD>(a1 + 400)) ^ 0x3D7E5AD8;
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v621 + 544) + 824i64) + 112i64) + 680i64) + 456i64);
                goto LABEL_1037;
            case 0x3EC:
                v622 = a1;
                v634 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 80) + 128i64) + 416i64) ^ v9 ^ 0x1B4B9E82) - 312889533;
                v634 += FuckEnc::CacheRead<_DWORD>(v622 + 96);
                goto LABEL_1037;
            case 0x3ED:
                v634 = (v9 - 474170005) ^ 0xC9F66E3E;
                v634 ^= ((_DWORD)0x9D2E4C3 + 3 + FuckEnc::CacheRead<_DWORD>(a1 + 416)) ^ 0xAA7DABF6;
                goto LABEL_1037;
            case 0x3EE:
                v623 = a1;
                v634 = v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 24i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 824) + 112i64) + 720i64);
                v634 += FuckEnc::CacheRead<_DWORD>(v623 + 416);
                goto LABEL_1037;
            case 0x3EF:
                v624 = a1;
                v634 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 776) + 344i64) + 56i64) << 19);
                v634 += FuckEnc::CacheRead<_DWORD>(v624 + 864) ^ 0xD9EF10C0;
                goto LABEL_1037;
            case 0x3F0:
                v625 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 344i64) + 552i64) + 696i64) + 720i64);
                v14 = FuckEnc::CacheRead<_DWORD>(v625 + 368) ^ v634;
                goto LABEL_1036;
            case 0x3F1:
                v626 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 24i64);
                v14 = v634 - (FuckEnc::CacheRead<_DWORD>(v626 + 792) & 0xFFFFFFE9) - FuckEnc::CacheRead<_DWORD>(v626 + 256) - 1879734584;
                goto LABEL_1036;
            case 0x3F2:
                v634 = v9 - 906351923;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 88) + 576i64) + 448i64) + 592i64) + 768i64) + 880i64) ^ (v9 - 906351923);
                goto LABEL_1037;
            case 0x3F3:
                v627 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 832);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v627 + 72) + 832i64) * ((FuckEnc::CacheRead<_DWORD>(v627 + 632) ^ 0x1EE75B30) + 1);
                goto LABEL_1037;
            case 0x3F4:
                v628 = a1;
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 184) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 184i64);
                Calls::FastCall(v628 + 440, &v634, v628);
                goto LABEL_1037;
            case 0x3F5:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 184i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 536i64) + 696i64) + 96i64) - 1821990506;
                goto LABEL_1037;
            case 0x3F6:
                v629 = a1;
                v634 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 168);
                v634 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v629 + 448) + 360i64) + 752i64);
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v629 + 112) + 328i64) ^ v634;
                goto LABEL_1036;
            case 0x3F7:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 344i64) + 72i64) + 680i64) + 336i64, &v634, a1);
                goto LABEL_1037;
            case 0x3F8:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 536i64) + 648i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 808) + 808i64) + 312i64) + 600i64);
                goto LABEL_1037;
            case 0x3F9:
                Calls::FastCall(a1 + 208, &v634, a1);
                v634 += 1726620534;
                v634 += FuckEnc::CacheRead<_DWORD>(a1 + 600);
                goto LABEL_1037;
            case 0x3FA:
                v630 = a1;
                v634 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 80) + 696i64) + 400i64) ^ v9;
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v630 + 72) + 912i64) + 80i64) + 632i64) ^ v634;
                goto LABEL_1036;
            case 0x3FB:
                v634 = (unsigned int)0x757B38E + v9 + 5;
                v631 = a1;
                v634 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 344) + 344i64) + 752i64);
                v634 = ~(v634 - FuckEnc::CacheRead<_DWORD>(v631 + 792));
                goto LABEL_1037;
            case 0x3FC:
                v634 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 448i64) + 232i64) + 448i64) + 320i64) + 768i64) + 600i64);
                goto LABEL_1037;
            case 0x3FD:
                v632 = a1;
                v634 = v9 + (_DWORD)0x621D0F + FuckEnc::CacheRead<_DWORD>(a1 + 520);
                v634 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v632 + 128) + 680i64) + 448i64) + 224i64);
                goto LABEL_1037;
            case 0x3FE:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 912) + 88i64) + 784i64) + 560i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 320) + 128i64) + 96i64);
                goto LABEL_1036;
            case 0x3FF:
                v633 = a1;
                LODWORD(v9) = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 368);
                v634 = v9;
                v18 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v633 + 552) + 464i64) + 592i64);
            LABEL_1035:
                v14 = v9 - FuckEnc::CacheRead<_DWORD>(v18 + 920);
            LABEL_1036:
                v634 = v14;
            LABEL_1037:
                v8 += 4;
                *a2++ = v634;
                if (v8 + 3 >= a3)
                    return;
                continue;
            }
        }
    }
}
