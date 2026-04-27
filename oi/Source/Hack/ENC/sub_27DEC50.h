#pragma once

#include <Hack/FuckEnc.h>
#include <Hack/ENC/Calls.h>
#include <IDA/ida_defs.h>

void __fastcall sub_27DEC50(__int64 a1, unsigned int* a2, unsigned int a3, __int16 a4)
{
    int v8;       // r14d
    __int64 v9;   // r9
    __int64 v10;  // r8
    int v11;      // eax
    __int64 v12;  // r8
    __int64 v13;  // rax
    __int64 v14;  // rax
    int v15;      // eax
    __int64 v16;  // rdx
    __int64 v17;  // rax
    __int64 v18;  // r8
    __int64 v19;  // r8
    __int64 v20;  // rdx
    __int64 v21;  // rdx
    __int64 v22;  // rdx
    __int64 v23;  // rax
    __int64 v24;  // r8
    int v25;      // r9d
    __int64 v26;  // rdx
    __int64 v27;  // rax
    __int64 v28;  // rdx
    __int64 v29;  // rdx
    __int64 v30;  // r8
    __int64 v31;  // rax
    __int64 v32;  // rax
    __int64 v33;  // r8
    __int64 v34;  // rax
    __int64 v35;  // rdx
    __int64 v36;  // rdx
    __int64 v37;  // rdx
    __int64 v38;  // rdx
    __int64 v39;  // rax
    __int64 v40;  // rdx
    __int64 v41;  // rcx
    __int64 v42;  // rax
    __int64 v43;  // rcx
    __int64 v44;  // rax
    __int64 v45;  // rdx
    __int64 v46;  // rdx
    __int64 v47;  // rcx
    __int64 v48;  // rcx
    __int64 v49;  // rdx
    __int64 v50;  // rdx
    __int64 v51;  // r8
    __int64 v52;  // rdx
    __int64 v53;  // rdx
    __int64 v54;  // r8
    __int64 v55;  // rdx
    __int64 v56;  // rdx
    __int64 v57;  // rax
    __int64 v58;  // r8
    __int64 v59;  // rdx
    __int64 v60;  // rdx
    __int64 v61;  // rcx
    __int64 v62;  // r8
    __int64 v63;  // rcx
    __int64 v64;  // rcx
    __int64 v65;  // rax
    __int64 v66;  // rdx
    __int64 v67;  // rdx
    __int64 v68;  // rdx
    __int64 v69;  // rcx
    __int64 v70;  // rax
    __int64 v71;  // rax
    __int64 v72;  // rdx
    __int64 v73;  // rdx
    __int64 v74;  // rcx
    __int64 v75;  // rcx
    __int64 v76;  // rax
    __int64 v77;  // rax
    __int64 v78;  // rcx
    __int64 v79;  // rdx
    __int64 v80;  // rdx
    __int64 v81;  // rdx
    __int64 v82;  // rax
    __int64 v83;  // rdx
    __int64 v84;  // rax
    __int64 v85;  // r8
    __int64 v86;  // rdx
    __int64 v87;  // r8
    __int64 v88;  // rax
    __int64 v89;  // rdx
    __int64 v90;  // r8
    __int64 v91;  // rdx
    __int64 v92;  // rcx
    __int64 v93;  // rax
    __int64 v94;  // rax
    __int64 v95;  // rax
    __int64 v96;  // rdx
    __int64 v97;  // rax
    __int64 v98;  // rdx
    __int64 v99;  // rdx
    __int64 v100; // rdx
    __int64 v101; // rcx
    __int64 v102; // rdx
    __int64 v103; // rcx
    __int64 v104; // rcx
    __int64 v105; // rcx
    __int64 v106; // rdx
    __int64 v107; // rax
    __int64 v108; // rdx
    __int64 v109; // rcx
    __int64 v110; // rdx
    __int64 v111; // rcx
    __int64 v112; // r8
    __int64 v113; // rax
    __int64 v114; // rax
    __int64 v115; // rdx
    __int64 v116; // rax
    __int64 v117; // rcx
    __int64 v118; // rax
    __int64 v119; // rdx
    __int64 v120; // rax
    __int64 v121; // rdx
    __int64 v122; // r8
    __int64 v123; // rcx
    __int64 v124; // rdx
    __int64 v125; // rcx
    __int64 v126; // rax
    __int64 v127; // rcx
    __int64 v128; // rdx
    __int64 v129; // rax
    __int64 v130; // rdx
    __int64 v131; // rdx
    __int64 v132; // rcx
    __int64 v133; // rdx
    __int64 v134; // rax
    __int64 v135; // rdx
    __int64 v136; // rdx
    __int64 v137; // rdx
    __int64 v138; // rax
    __int64 v139; // r8
    __int64 v140; // rdx
    __int64 v141; // rax
    __int64 v142; // rcx
    __int64 v143; // rdx
    __int64 v144; // rdx
    __int64 v145; // rax
    __int64 v146; // rdx
    __int64 v147; // rdx
    __int64 v148; // rcx
    __int64 v149; // rdx
    __int64 v150; // rax
    __int64 v151; // rax
    __int64 v152; // rdx
    __int64 v153; // rdx
    __int64 v154; // rdx
    __int64 v155; // rdx
    __int64 v156; // rdx
    __int64 v157; // rcx
    __int64 v158; // rax
    __int64 v159; // rax
    __int64 v160; // rax
    __int64 v161; // rax
    __int64 v162; // rdx
    __int64 v163; // rax
    __int64 v164; // rax
    __int64 v165; // rax
    __int64 v166; // rdx
    __int64 v167; // rax
    int v168;     // r9d
    __int64 v169; // rdx
    __int64 v170; // r8
    int v171;     // r9d
    __int64 v172; // rdx
    __int64 v173; // rcx
    __int64 v174; // rdx
    __int64 v175; // rcx
    __int64 v176; // rdx
    __int64 v177; // rcx
    __int64 v178; // rdx
    __int64 v179; // rdx
    __int64 v180; // rdx
    __int64 v181; // rdx
    __int64 v182; // rcx
    __int64 v183; // rdx
    __int64 v184; // r8
    __int64 v185; // r8
    __int64 v186; // r8
    __int64 v187; // rdx
    __int64 v188; // rdx
    __int64 v189; // rcx
    __int64 v190; // rcx
    __int64 v191; // r8
    __int64 v192; // rdx
    __int64 v193; // rax
    int v194;     // edx
    __int64 v195; // rax
    __int64 v196; // rcx
    __int64 v197; // rax
    __int64 v198; // rcx
    __int64 v199; // rdx
    __int64 v200; // r8
    __int64 v201; // rdx
    __int64 v202; // rcx
    __int64 v203; // rcx
    __int64 v204; // rdx
    __int64 v205; // r8
    __int64 v206; // rdx
    __int64 v207; // rax
    __int64 v208; // rax
    __int64 v209; // rdx
    __int64 v210; // rdx
    __int64 v211; // rdx
    __int64 v212; // rcx
    __int64 v213; // rcx
    __int64 v214; // rax
    __int64 v215; // rdx
    __int64 v216; // rdx
    __int64 v217; // rcx
    __int64 v218; // rdx
    __int64 v219; // rdx
    __int64 v220; // rdx
    __int64 v221; // rcx
    __int64 v222; // r8
    __int64 v223; // rdx
    __int64 v224; // rax
    __int64 v225; // rdx
    __int64 v226; // rdx
    __int64 v227; // r8
    __int64 v228; // rdx
    __int64 v229; // rcx
    __int64 v230; // rax
    __int64 v231; // rcx
    __int64 v232; // rdx
    __int64 v233; // rax
    __int64 v234; // rax
    __int64 v235; // rax
    __int64 v236; // rdx
    __int64 v237; // rdx
    __int64 v238; // rdx
    __int64 v239; // rdx
    __int64 v240; // rcx
    __int64 v241; // rdx
    __int64 v242; // rax
    __int64 v243; // rax
    __int64 v244; // rdx
    __int64 v245; // rdx
    __int64 v246; // rdx
    __int64 v247; // r8
    int v248;     // r9d
    __int64 v249; // rax
    __int64 v250; // rax
    __int64 v251; // rcx
    __int64 v252; // r8
    __int64 v253; // rax
    __int64 v254; // rcx
    __int64 v255; // rdx
    __int64 v256; // rdx
    __int64 v257; // rcx
    __int64 v258; // rdx
    __int64 v259; // rdx
    __int64 v260; // rcx
    __int64 v261; // rcx
    __int64 v262; // rcx
    __int64 v263; // rax
    __int64 v264; // rcx
    __int64 v265; // rcx
    __int64 v266; // rcx
    __int64 v267; // rax
    __int64 v268; // rcx
    __int64 v269; // rax
    __int64 v270; // rdx
    __int64 v271; // rdx
    __int64 v272; // rcx
    __int64 v273; // rdx
    __int64 v274; // rdx
    __int64 v275; // rdx
    __int64 v276; // rcx
    __int64 v277; // rdx
    __int64 v278; // r8
    __int64 v279; // rcx
    __int64 v280; // rax
    __int64 v281; // rcx
    __int64 v282; // rax
    __int64 v283; // rcx
    __int64 v284; // rax
    __int64 v285; // rcx
    __int64 v286; // rdx
    __int64 v287; // rcx
    __int64 v288; // rdx
    __int64 v289; // rdx
    __int64 v290; // r8
    __int64 v291; // rdx
    __int64 v292; // rdx
    __int64 v293; // rcx
    __int64 v294; // r8
    __int64 v295; // rax
    __int64 v296; // r8
    __int64 v297; // rcx
    __int64 v298; // rdx
    __int64 v299; // rcx
    __int64 v300; // rdx
    __int64 v301; // rcx
    __int64 v302; // rdx
    __int64 v303; // rax
    __int64 v304; // r8
    __int64 v305; // r8
    __int64 v306; // rcx
    __int64 v307; // rdx
    __int64 v308; // rax
    __int64 v309; // rdx
    __int64 v310; // rcx
    __int64 v311; // rdx
    __int64 v312; // rdx
    __int64 v313; // rdx
    __int64 v314; // rax
    __int64 v315; // rdx
    __int64 v316; // rax
    __int64 v317; // rdx
    __int64 v318; // rcx
    __int64 v319; // rax
    __int64 v320; // rdx
    __int64 v321; // rax
    __int64 v322; // rcx
    __int64 v323; // rax
    __int64 v324; // rdx
    __int64 v325; // rcx
    __int64 v326; // rdx
    __int64 v327; // rcx
    __int64 v328; // rdx
    __int64 v329; // rcx
    __int64 v330; // rcx
    __int64 v331; // rdx
    __int64 v332; // rdx
    __int64 v333; // rdx
    __int64 v334; // rcx
    __int64 v335; // rcx
    __int64 v336; // rcx
    __int64 v337; // rcx
    __int64 v338; // rcx
    __int64 v339; // rdx
    __int64 v340; // rdx
    __int64 v341; // rax
    __int64 v342; // rdx
    __int64 v343; // rax
    __int64 v344; // rcx
    __int64 v345; // rcx
    __int64 v346; // rdx
    __int64 v347; // rcx
    __int64 v348; // rax
    __int64 v349; // r8
    __int64 v350; // rax
    __int64 v351; // rax
    __int64 v352; // rdx
    __int64 v353; // rdx
    __int64 v354; // rdx
    __int64 v355; // rax
    __int64 v356; // rdx
    __int64 v357; // rax
    __int64 v358; // rdx
    __int64 v359; // rax
    __int64 v360; // rdx
    __int64 v361; // rcx
    __int64 v362; // rcx
    __int64 v363; // rcx
    __int64 v364; // rdx
    __int64 v365; // r8
    __int64 v366; // rdx
    __int64 v367; // rcx
    __int64 v368; // rax
    __int64 v369; // rdx
    __int64 v370; // rax
    __int64 v371; // rax
    __int64 v372; // rdx
    __int64 v373; // rdx
    __int64 v374; // rdx
    __int64 v375; // rdx
    __int64 v376; // rdx
    __int64 v377; // rcx
    __int64 v378; // rcx
    __int64 v379; // rdx
    __int64 v380; // r8
    __int64 v381; // rdx
    __int64 v382; // rdx
    __int64 v383; // rcx
    __int64 v384; // rdx
    __int64 v385; // r8
    __int64 v386; // rdx
    __int64 v387; // rdx
    __int64 v388; // rcx
    __int64 v389; // rax
    __int64 v390; // rdx
    __int64 v391; // rdx
    __int64 v392; // rax
    __int64 v393; // rdx
    __int64 v394; // rcx
    __int64 v395; // rcx
    __int64 v396; // rax
    __int64 v397; // rcx
    __int64 v398; // rax
    __int64 v399; // r8
    __int64 v400; // rcx
    __int64 v401; // rdx
    __int64 v402; // rdx
    __int64 v403; // rcx
    __int64 v404; // rcx
    __int64 v405; // rax
    __int64 v406; // rcx
    __int64 v407; // rdx
    __int64 v408; // rax
    __int64 v409; // rax
    __int64 v410; // rdx
    __int64 v411; // rdx
    __int64 v412; // rcx
    __int64 v413; // rax
    __int64 v414; // rcx
    __int64 v415; // rdx
    __int64 v416; // rax
    __int64 v417; // rdx
    __int64 v418; // rcx
    __int64 v419; // rdx
    __int64 v420; // rax
    __int64 v421; // rcx
    __int64 v422; // rax
    __int64 v423; // rcx
    __int64 v424; // r8
    __int64 v425; // rax
    __int64 v426; // rcx
    __int64 v427; // rdx
    __int64 v428; // rdx
    __int64 v429; // rax
    __int64 v430; // rcx
    __int64 v431; // r9
    __int64 v432; // rcx
    __int64 v433; // rcx
    __int64 v434; // rcx
    __int64 v435; // r8
    __int64 v436; // rdx
    __int64 v437; // rdx
    __int64 v438; // rdx
    __int64 v439; // rax
    __int64 v440; // rcx
    __int64 v441; // rax
    __int64 v442; // rdx
    __int64 v443; // r8
    __int64 v444; // rax
    __int64 v445; // rax
    __int64 v446; // r8
    __int64 v447; // r8
    __int64 v448; // rcx
    __int64 v449; // rax
    __int64 v450; // rcx
    __int64 v451; // r8
    __int64 v452; // rdx
    __int64 v453; // rax
    __int64 v454; // rdx
    __int64 v455; // rdx
    __int64 v456; // r8
    int v457;     // eax
    __int64 v458; // r8
    __int64 v459; // rcx
    __int64 v460; // rcx
    __int64 v461; // rdx
    __int64 v462; // rdx
    __int64 v463; // rcx
    __int64 v464; // r8
    __int64 v465; // rcx
    __int64 v466; // r8
    __int64 v467; // rax
    __int64 v468; // rdx
    __int64 v469; // rax
    __int64 v470; // rax
    __int64 v471; // rdx
    __int64 v472; // rdx
    __int64 v473; // rdx
    __int64 v474; // r8
    __int64 v475; // rax
    __int64 v476; // rax
    __int64 v477; // rax
    __int64 v478; // rcx
    __int64 v479; // rdx
    __int64 v480; // rax
    __int64 v481; // rcx
    __int64 v482; // rcx
    __int64 v483; // rcx
    __int64 v484; // rdx
    __int64 v485; // rcx
    __int64 v486; // rdx
    __int64 v487; // rdx
    __int64 v488; // rdx
    __int64 v489; // rax
    __int64 v490; // rcx
    __int64 v491; // rcx
    __int64 v492; // rax
    __int64 v493; // rdx
    __int64 v494; // rax
    __int64 v495; // rcx
    __int64 v496; // rcx
    __int64 v497; // rcx
    __int64 v498; // rdx
    __int64 v499; // rdx
    __int64 v500; // rdx
    __int64 v501; // rdx
    __int64 v502; // rdx
    __int64 v503; // r8
    __int64 v504; // r8
    __int64 v505; // rdx
    __int64 v506; // rdx
    __int64 v507; // rcx
    __int64 v508; // rdx
    __int64 v509; // rcx
    __int64 v510; // rdx
    __int64 v511; // rcx
    __int64 v512; // rcx
    __int64 v513; // rdx
    __int64 v514; // rax
    __int64 v515; // rdx
    __int64 v516; // rdx
    __int64 v517; // rdx
    __int64 v518; // rcx
    __int64 v519; // rdx
    __int64 v520; // rdx
    __int64 v521; // rdx
    __int64 v522; // rdx
    __int64 v523; // rdx
    __int64 v524; // rcx
    __int64 v525; // rdx
    __int64 v526; // r8
    __int64 v527; // rax
    __int64 v528; // rax
    __int64 v529; // rdx
    __int64 v530; // rdx
    __int64 v531; // rdx
    __int64 v532; // rax
    __int64 v533; // rdx
    __int64 v534; // rdx
    __int64 v535; // rax
    __int64 v536; // rdx
    __int64 v537; // rax
    __int64 v538; // rcx
    __int64 v539; // rdx
    __int64 v540; // rax
    __int64 v541; // rcx
    __int64 v542; // rdx
    __int64 v543; // rdx
    __int64 v544; // rax
    __int64 v545; // rdx
    __int64 v546; // rdx
    __int64 v547; // r8
    __int64 v548; // rdx
    __int64 v549; // rdx
    __int64 v550; // r8
    __int64 v551; // rax
    __int64 v552; // rdx
    __int64 v553; // rdx
    __int64 v554; // r8
    __int64 v555; // rdx
    __int64 v556; // rcx
    __int64 v557; // rdx
    __int64 v558; // rdx
    __int64 v559; // rdx
    __int64 v560; // rdx
    __int64 v561; // rdx
    __int64 v562; // rcx
    __int64 v563; // rdx
    __int64 v564; // rcx
    __int64 v565; // rcx
    __int64 v566; // rcx
    __int64 v567; // rax
    __int64 v568; // rdx
    __int64 v569; // rcx
    __int64 v570; // r8
    __int64 v571; // rdx
    __int64 v572; // rcx
    __int64 v573; // rdx
    __int64 v574; // rcx
    __int64 v575; // rax
    __int64 v576; // r8
    __int64 v577; // rax
    __int64 v578; // r8
    __int64 v579; // rcx
    __int64 v580; // rdx
    __int64 v581; // rdx
    __int64 v582; // rax
    __int64 v583; // rcx
    __int64 v584; // rdx
    __int64 v585; // rcx
    __int64 v586; // rdx
    __int64 v587; // rdx
    __int64 v588; // rcx
    __int64 v589; // rcx
    __int64 v590; // r8
    __int64 v591; // rdx
    __int64 v592; // rdx
    __int64 v593; // rcx
    __int64 v594; // rdx
    __int64 v595; // rax
    __int64 v596; // rdx
    __int64 v597; // r8
    __int64 v598; // rax
    __int64 v599; // rcx
    __int64 v600; // r8
    __int64 v601; // rcx
    __int64 v602; // rdx
    __int64 v603; // rdx
    __int64 v604; // rdx
    __int64 v605; // rcx
    __int64 v606; // rax
    __int64 v607; // r8
    __int64 v608; // rdx
    __int64 v609; // rdx
    __int64 v610; // rdx
    int v611;     // [rsp+18h] [rbp+18h] BYREF

    if (a3 > 3)
    {
        v8 = 0;
        while (2)
        {
            v9 = *a2;
            v611 = *a2;
            switch (((unsigned __int16)(v8 + a4) ^ 0x132) & 0x3FF)
            {
            case 0:
                v611 = v9 - 843800437;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 368) + 304i64) + 576i64, &v611, a1);
                goto LABEL_1037;
            case 1:
                v10 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 408) + 10086048;
                v611 += FuckEnc::CacheRead<_DWORD>(v10 + 88) - 1868427490;
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 136) + 128i64);
                goto LABEL_1036;
            case 2:
                v12 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 16) ^ v9;
                v611 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v12 + 232) + 48i64) + 528i64);
                v611 += FuckEnc::CacheRead<_DWORD>(v12 + 592);
                goto LABEL_1037;
            case 3:
                v611 = v9 ^ 0xDFF6DC82;
                v611 = (v9 ^ 0xDFF6DC82) + ~FuckEnc::CacheRead<_DWORD>(a1 + 552) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 600) + 56i64) + 760i64);
                goto LABEL_1037;
            case 4:
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 784) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 192i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 320i64));
                goto LABEL_1037;
            case 5:
                v611 = (v9 + 2105723545) ^ 0x6E5CB9A;
                v611 = (v611 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 608i64) + 752i64) + 888i64)) ^ 0x586E339;
                goto LABEL_1037;
            case 6:
                v13 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 248);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v13 + 816) + 600i64) + 136i64) + 600i64) + 784i64);
                goto LABEL_1037;
            case 7:
                v14 = a1;
                LODWORD(v9) = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 872);
                v611 = v9;
                v15 = (-973708469 * ((1997383492 - 1217097604 * FuckEnc::CacheRead<_DWORD>(v14 + 240)) | 0x19u)) >> 6;
                goto LABEL_1035;
            case 8:
                Calls::FastCall(a1 + 720, &v611, a1);
                v611 -= (1859759850 * FuckEnc::CacheRead<_DWORD>(a1 + 64)) & 0xFFFFFFE8;
                goto LABEL_1037;
            case 9:
                v611 = v9 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 136i64) + 232i64) + 352i64) + 304i64) + 232i64) + 592i64);
                goto LABEL_1037;
            case 0xA:
                v16 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 656i64) ^ v9;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v16 + 536) + 776i64, &v611, a1);
                goto LABEL_1037;
            case 0xB:
                v11 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 600i64) + 72i64) + 608i64) + 144i64) + 608i64) + 640i64) + 1;
                goto LABEL_1036;
            case 0xC:
                v611 = v9 - ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 304i64) + 352i64) + 528i64) ^ ((_DWORD)0xCD266CC + 1 + FuckEnc::CacheRead<_DWORD>(a1 + 408))) & 0xFFFFFFFA);
                goto LABEL_1037;
            case 0xD:
                Calls::FastCall(a1 + 24, &v611, a1);
                v17 = a1;
                v611 -= FuckEnc::CacheRead<_DWORD>(a1 + 64);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v17 + 248);
                goto LABEL_1037;
            case 0xE:
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 640i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 600) + 584i64) + 280i64) + 824i64));
                goto LABEL_1037;
            case 0xF:
                v18 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 192);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v18 + 248);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v18 + 360) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v18 + 232) + 784i64);
                goto LABEL_1037;
            case 0x10:
                v19 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 592) + 955754733;
                v611 += ~FuckEnc::CacheRead<_DWORD>(v19 + 552);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v19 + 288) + 360i64);
                goto LABEL_1036;
            case 0x11:
                v20 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 760i64) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v20 + 608) + 248i64) + FuckEnc::CacheRead<_DWORD>(v20 + 248) + 1380590516;
                goto LABEL_1037;
            case 0x12:
                v21 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 296);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v21 + 72) + 536i64) + 248i64);
                v11 = v611 + (FuckEnc::CacheRead<_DWORD>(v21 + 176) ^ 0x363DCFC2);
                goto LABEL_1036;
            case 0x13:
                v22 = a1;
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 888i64) ^ 0xC5812821);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v22 + 144) + 512i64) + 16i64);
                goto LABEL_1037;
            case 0x14:
                v23 = a1;
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 88) + ~FuckEnc::CacheRead<_DWORD>(a1 + 8));
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v23 + 512) + 600i64) + 552i64);
                goto LABEL_1037;
            case 0x15:
                v24 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 760);
                v25 = v611 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v24 + 144) + 760i64);
                goto LABEL_26;
            case 0x16:
                v26 = a1;
                LODWORD(v9) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 120i64) + 536i64) + 872i64) ^ v9;
                v611 = v9;
                v15 = -1501675375 * FuckEnc::CacheRead<_DWORD>(v26 + 320);
                goto LABEL_1035;
            case 0x17:
                v27 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 240) ^ v9;
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v27 + 72) + 352i64) + 608i64) + 376i64) + 536i64) + 888i64);
                goto LABEL_1036;
            case 0x18:
                v28 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 608i64) + 552i64);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v28 + 536) + 376i64) + 320i64);
                goto LABEL_1037;
            case 0x19:
                v611 = v9 + 773787326;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 840) + 608i64) + 344i64, &v611, a1);
                goto LABEL_1037;
            case 0x1A:
                v29 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 360);
                v611 += (FuckEnc::CacheRead<_DWORD>(v29 + 192) & 0xFFFFFFE1) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v29 + 520) + 768i64) + 248i64);
                goto LABEL_1037;
            case 0x1B:
                v30 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 840i64) + 600i64) + 528i64);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v30 + 608) + 696i64) + 176i64);
                goto LABEL_1037;
            case 0x1C:
                v31 = a1;
                LODWORD(v9) = FuckEnc::CacheRead<_DWORD>(a1 + 872) ^ v9;
                v611 = v9;
                v15 = ~(1748177322 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v31 + 752) + 144i64) + 16i64));
                goto LABEL_1035;
            case 0x1D:
                v611 = v9 - 33416348 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 48) + 760i64) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 176) + 1321124445) & 0xFFFFFFE9);
                goto LABEL_1037;
            case 0x1E:
                v611 = v9 - 378912459;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 696i64) + 304i64) + 600i64) + 536i64) + 528i64) ^ (v9 - 378912459);
                goto LABEL_1037;
            case 0x1F:
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 144i64) + 704i64) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 72i64) + 528i64));
                goto LABEL_1037;
            case 0x20:
                v32 = a1;
                v611 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(a1 + 760);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v32 + 816) + 696i64) + 552i64) + 102154381;
                goto LABEL_1037;
            case 0x21:
                v33 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 128) ^ v9;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v33 + 584) + 376i64) + 296i64);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v33 + 832) + 64i64);
                goto LABEL_1036;
            case 0x22:
                v34 = a1;
                v611 = (v9 - FuckEnc::CacheRead<_DWORD>(a1 + 64)) ^ 0x983E6559;
                v611 -= (-457588212 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v34 + 840) + 832i64) + 424i64)) ^ 0x5929E05;
                goto LABEL_1037;
            case 0x23:
                v11 = v9 + ((FuckEnc::CacheRead<_DWORD>(a1 + 176) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 288i64) + 888i64)) ^ 0xE0957736) - 1466052108;
                goto LABEL_1036;
            case 0x24:
                v35 = a1;
                v611 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 712) & 0xFFFFFFE8 | 0x16);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v35 + 72) + 704i64);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v35 + 248);
                goto LABEL_1037;
            case 0x25:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 744i64) + 832i64) + 280i64) + 896i64, &v611, a1);
                goto LABEL_1037;
            case 0x26:
                v36 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 824i64) + 1;
                v611 += 192529059 * FuckEnc::CacheRead<_DWORD>(v36 + 824);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v36 + 480);
                goto LABEL_1037;
            case 0x27:
                v37 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 552i64);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v37 + 768) + 608i64) + 768i64) + 352i64) + 408i64);
                goto LABEL_1037;
            case 0x28:
                v38 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 424);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v38 + 584) + 88i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v38 + 696) + 832i64) + 192i64);
                goto LABEL_1037;
            case 0x29:
                v39 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 248) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v39 + 608) + 144i64) + 840i64) + 136i64) + 608i64) + 784i64);
                goto LABEL_1037;
            case 0x2A:
                v611 = v9 - 1779550500;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 56i64) + 792i64, &v611, a1);
                goto LABEL_1037;
            case 0x2B:
                v40 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 128i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v40 + 832) + 432i64, &v611, a1);
                goto LABEL_1037;
            case 0x2C:
                v41 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 296);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v41 + 752) + 88i64);
                v611 = v611 - 1236160963 * FuckEnc::CacheRead<_DWORD>(v41 + 176) + 166621555;
                goto LABEL_1037;
            case 0x2D:
                v42 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 784);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v42 + 512) + 744i64) + 816i64) + 280i64) + 592i64);
                goto LABEL_1037;
            case 0x2E:
                v43 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 16) ^ v9;
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(v43 + 64) + ((FuckEnc::CacheRead<_DWORD>(v43 + 824) - 731775137) | 2);
                goto LABEL_1036;
            case 0x2F:
                v611 = v9 ^ 0x2DA95752;
                v44 = a1;
                v611 = (FuckEnc::CacheRead<_DWORD>(a1 + 656) ^ v9 ^ 0x2DA95752) - 923524798;
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v44 + 752) + 296i64) + 1;
                goto LABEL_1036;
            case 0x30:
                v45 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 320) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(v45 + 872) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v45 + 232) + 72i64) + 48i64) + 424i64);
                goto LABEL_1037;
            case 0x31:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 48) + 248i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 56i64) + 816i64) + 824i64);
                goto LABEL_1037;
            case 0x32:
                v46 = a1;
                v611 = v9 + 1890318027 * FuckEnc::CacheRead<_DWORD>(a1 + 128) + 1448028100;
                Calls::FastCall(v46 + 312, &v611, v46);
                goto LABEL_1037;
            case 0x33:
                v47 = a1;
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 320) ^ FuckEnc::CacheRead<_DWORD>(a1 + 824) ^ 0xDA4EA16A);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v47 + 360);
                goto LABEL_1037;
            case 0x34:
                v11 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 464i64) + 56i64) + 464i64) + 176i64) * (FuckEnc::CacheRead<_DWORD>(a1 + 872) - 440694441);
                goto LABEL_1036;
            case 0x35:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 376i64) + 280i64) + 512i64) + 536i64) + 232i64) + 64i64);
                goto LABEL_1037;
            case 0x36:
                v48 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 248);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v48 + 584) + 64i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v48 + 232) + 376i64) + 872i64);
                goto LABEL_1037;
            case 0x37:
                v49 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 528) ^ v9;
                v611 = v611 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v49 + 120) + 696i64) + 816i64) + 592i64) - FuckEnc::CacheRead<_DWORD>(v49 + 128);
                goto LABEL_1037;
            case 0x38:
                v50 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 592) + (_DWORD)0x111D5420 + (FuckEnc::CacheRead<_DWORD>(a1 + 360) & 0xFFFFFFF0);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v50 + 232) + 248i64);
                goto LABEL_1037;
            case 0x39:
                v611 = v9 ^ (2045795722 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 536i64) + 48i64) + 296i64) - FuckEnc::CacheRead<_DWORD>(a1 + 760));
                goto LABEL_1037;
            case 0x3A:
                v51 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 712i64);
                v611 = v611 - (FuckEnc::CacheRead<_DWORD>(v51 + 872) >> 13) - FuckEnc::CacheRead<_DWORD>(v51 + 64);
                goto LABEL_1037;
            case 0x3B:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 232i64) + 280i64) + 600i64) + 696i64) + 608i64) + 56i64) + 824i64);
                goto LABEL_1037;
            case 0x3C:
                v52 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 704);
                Calls::FastCall(v52 + 256, &v611, v52);
                v611 ^= 1300445957 * FuckEnc::CacheRead<_DWORD>(a1 + 760);
                goto LABEL_1037;
            case 0x3D:
                v53 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 360) - 1749888113;
                Calls::FastCall(v53 + 456, &v611, v53);
                goto LABEL_1037;
            case 0x3E:
                v54 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 600i64) + 192i64);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v54) + 640i64);
                v11 = FuckEnc::CacheRead<_DWORD>(v54 + 480) ^ v611;
                goto LABEL_1036;
            case 0x3F:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 584i64) + 72i64) + 368i64) + 144i64) + 872i64) + 1959549089;
                goto LABEL_1037;
            case 0x40:
                v611 = v9 ^ 0xB67A87B8;
                v611 = v9 ^ 0xB67A87B8 ^ FuckEnc::CacheRead<_DWORD>(a1 + 656) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 600) + 696i64) + 696i64) + 88i64);
                goto LABEL_1037;
            case 0x41:
                v55 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 520i64) + 768i64) + 592i64) ^ v9;
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v55 + 832) + 408i64) + 632095425;
                goto LABEL_1036;
            case 0x42:
                v56 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 240i64) + 1229804750;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v56 + 832) + 144i64) + 232i64) + 656i64);
                goto LABEL_1037;
            case 0x43:
                v611 = v9 - 1958137708;
                v57 = a1;
                v611 = (FuckEnc::CacheRead<_DWORD>(a1 + 296) ^ (v9 - 1958137708)) + 1878033202;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v57 + 696) + 48i64) + 320i64);
                goto LABEL_1037;
            case 0x44:
                v11 = v9 + 881292755 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 296i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 144i64) + 64i64);
                goto LABEL_1036;
            case 0x45:
                v58 = a1;
                v611 = v9 + ~FuckEnc::CacheRead<_DWORD>(a1 + 528);
                v611 += FuckEnc::CacheRead<_DWORD>(v58 + 192) ^ 0x939823C2;
                v611 += FuckEnc::CacheRead<_DWORD>(v58 + 424);
                goto LABEL_1037;
            case 0x46:
                v611 = v9 ^ 0xECC71AA3;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 120i64) + 224i64, &v611, a1);
                goto LABEL_1037;
            case 0x47:
                v59 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 128) ^ v9;
                v611 ^= 2103597017 * ~FuckEnc::CacheRead<_DWORD>(v59 + 408);
                v11 = v611 ^ ~FuckEnc::CacheRead<_DWORD>(v59 + 528);
                goto LABEL_1036;
            case 0x48:
                v611 = ~(v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 368) + 816i64) + 296i64) * (FuckEnc::CacheRead<_DWORD>(a1 + 240) ^ 0x2514D65C));
                goto LABEL_1037;
            case 0x49:
                v611 = (unsigned int)0x4EC5D6D ^ v9;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 368) + 512i64) + 816i64) + 376i64) + 128i64) ^ (unsigned int)0x4EC5D6D ^ v9;
                goto LABEL_1037;
            case 0x4A:
                v611 = v9 ^ 0x7897F328;
                v611 = (v9 ^ 0x7897F328) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 56i64) + 232i64) + 288i64) + 656i64);
                goto LABEL_1037;
            case 0x4B:
                v60 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 832i64) + 552i64) ^ v9;
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v60 + 288) + 872i64) + 1;
                goto LABEL_1036;
            case 0x4C:
                v61 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 704);
                v611 -= FuckEnc::CacheRead<_DWORD>(v61 + 552);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v61 + 376) + 72i64) + 296i64);
                goto LABEL_1037;
            case 0x4D:
                v62 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 360);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v62 + 832) + 640i64);
                v611 = (unsigned int)0x12AAECD3 ^ (v611 + FuckEnc::CacheRead<_DWORD>(v62 + 296));
                goto LABEL_1037;
            case 0x4E:
                v63 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 704) ^ v9;
                v611 ^= ((_DWORD)0xBCA23DC + 6 + FuckEnc::CacheRead<_DWORD>(v63 + 888)) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v63 + 600) + 640i64);
                goto LABEL_1037;
            case 0x4F:
                v64 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 592i64) ^ v9;
                v611 -= (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(v64 + 48) + 784i64) ^ 0x8C0B1F5C) & 0xFFFFFFE3;
                goto LABEL_1037;
            case 0x50:
                v65 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 760) ^ v9;
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v65 + 520) + 608i64) + 352i64) + 832i64) + 512i64) + 760i64);
                goto LABEL_1036;
            case 0x51:
                v15 = FuckEnc::CacheRead<_DWORD>(a1 + 296) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 120i64) + 408i64) ^ ~FuckEnc::CacheRead<_DWORD>(a1 + 528);
                goto LABEL_1035;
            case 0x52:
                v611 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 144) + 512i64) + 832i64) + 368i64) + 840i64) + 840i64) + 88i64) ^ v9) - 807714864;
                goto LABEL_1037;
            case 0x53:
                v611 = v9 + 1736434318;
                v66 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 464i64) + 8i64) ^ (v9 + 1736434318);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v66 + 56) + 64i64);
                goto LABEL_1036;
            case 0x54:
                v611 = v9 ^ 0xF75F800E;
                v611 = (v9 ^ 0xF75F800E) - 1204859336 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 72) + 368i64) + 528i64) >> 15);
                goto LABEL_1037;
            case 0x55:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 352i64) + 840i64) + 304i64) + 120i64) + 120i64) + 320i64);
                goto LABEL_1037;
            case 0x56:
                v67 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 408);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v67 + 288) + 664i64, &v611, a1);
                goto LABEL_1037;
            case 0x57:
                v611 = v9 ^ ~(FuckEnc::CacheRead<_DWORD>(a1 + 552) ^ (-1155357385 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 520i64) + 824i64) & 0xFFFFFFF8)));
                goto LABEL_1037;
            case 0x58:
                v611 = v9 ^ 0xC9403014;
                v611 = (v9 ^ 0xC9403014) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 376i64) + 232i64) + 48i64) + 48i64) + 424i64);
                goto LABEL_1037;
            case 0x59:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 144i64) + 288i64) + 792i64, &v611, a1);
                goto LABEL_1037;
            case 0x5A:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 464i64) + 96i64, &v611, a1);
                v611 -= FuckEnc::CacheRead<_DWORD>(a1 + 480);
                goto LABEL_1037;
            case 0x5B:
                v611 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 512i64) + 744i64) + 600i64) + 48i64) + 64i64) ^ v9) - 1442734920;
                goto LABEL_1037;
            case 0x5C:
                v68 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 712);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v68 + 368) + 520i64) + 640i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v68 + 768) + 592i64);
                goto LABEL_1037;
            case 0x5D:
                v69 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 712);
                v611 = v611 - FuckEnc::CacheRead<_DWORD>(v69 + 824) + 1595454812;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v69 + 376) + 656i64);
                goto LABEL_1037;
            case 0x5E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 304i64) + 768i64) + 544i64, &v611, a1);
                goto LABEL_1037;
            case 0x5F:
                v11 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 352i64) + 464i64) + 536i64) + 832i64) + 280i64) + 360i64);
                goto LABEL_1036;
            case 0x60:
                v611 = ~(_DWORD)v9;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 232i64) + 856i64, &v611, a1);
                goto LABEL_1037;
            case 0x61:
                v70 = a1;
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 320) << 30) ^ 0x2A8FAD3F;
                v611 -= 408273633 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v70 + 368) + 480i64);
                goto LABEL_1037;
            case 0x62:
                v71 = a1;
                v611 = ~(v9 - FuckEnc::CacheRead<_DWORD>(a1 + 640));
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v71 + 56) + 376i64) + 584i64) + 464i64) + 88i64);
                goto LABEL_1037;
            case 0x63:
                v72 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 128) ^ v9;
                v611 = v611 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v72 + 840) + 304i64) + 640i64) - FuckEnc::CacheRead<_DWORD>(v72 + 472);
                goto LABEL_1037;
            case 0x64:
                Calls::FastCall(a1 + 112, &v611, a1);
                Calls::FastCall(a1 + 808, &v611, a1);
                goto LABEL_1037;
            case 0x65:
                v73 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 360i64) + 1526087223;
                v11 = v611 ^ (FuckEnc::CacheRead<_DWORD>(v73 + 248) << 24);
                goto LABEL_1036;
            case 0x66:
                v74 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 760);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v74 + 696) + 464i64) + 752i64) + 72i64) + 296i64);
                goto LABEL_1037;
            case 0x67:
                v75 = a1;
                v611 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 704i64) ^ v9) + 711034897;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v75 + 696) + 352i64) + 696i64) + 424i64);
                goto LABEL_1037;
            case 0x68:
                v611 = v9 - 1753473780;
                v76 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 424) ^ (v9 - 1753473780);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v76 + 608) + 136i64) + 600i64) + 8i64);
                goto LABEL_1037;
            case 0x69:
                v77 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 712) ^ v9;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v77 + 280) + 840i64) + 584i64) + 72i64) + 768i64) + 784i64);
                goto LABEL_1037;
            case 0x6A:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 136i64) + 832i64) + 808i64, &v611, a1);
                goto LABEL_1037;
            case 0x6B:
                v78 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 552);
                v11 = v611 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v78) + 768i64) + 832i64) + 288i64) + 240i64) + 700217981);
                goto LABEL_1036;
            case 0x6C:
                v79 = a1;
                v611 = v9 + ((~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 48) + 176i64) | 0x13) ^ 0x547B4C67);
                v11 = v611 - FuckEnc::CacheRead<_DWORD>(v79 + 176);
                goto LABEL_1036;
            case 0x6D:
                v611 = v9 - 1638666633;
                v611 = v9 - 1638666633 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 840) + 352i64) + 600i64) + 536i64) + 608i64) + 712i64);
                goto LABEL_1037;
            case 0x6E:
                v80 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 816i64) + 352i64) + 176i64) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(v80 + 8);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v80 + 296);
                goto LABEL_1037;
            case 0x6F:
                v81 = a1;
                v611 = v9 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 840) + 888i64);
                v611 += (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v81 + 536) + 248i64) + 682737384) | 9;
                goto LABEL_1037;
            case 0x70:
                v611 = v9 - 1588362519;
                v82 = a1;
                v611 = v9 - 1588362519 - FuckEnc::CacheRead<_DWORD>(a1 + 408);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v82 + 832) + 48i64) + 64i64) ^ 0x9D3923E7;
                goto LABEL_1037;
            case 0x71:
                v611 = v9 + 761144129;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 368i64) + 328i64, &v611, a1);
                goto LABEL_1037;
            case 0x72:
                v611 = v9 + 620952027 * (FuckEnc::CacheRead<_DWORD>(a1 + 192) | 0x1D) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 600i64) + 240i64);
                goto LABEL_1037;
            case 0x73:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 56i64) + 368i64) + 80i64, &v611, a1);
                goto LABEL_1037;
            case 0x74:
                v83 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 192);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v83 + 832) + 816i64) + 344i64, &v611, a1);
                goto LABEL_1037;
            case 0x75:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 48i64) + 288i64) + 704i64) - 1681460826 * FuckEnc::CacheRead<_DWORD>(a1 + 888);
                goto LABEL_1037;
            case 0x76:
                v11 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 424) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 288i64) + 872i64) - FuckEnc::CacheRead<_DWORD>(a1 + 888) + 1;
                goto LABEL_1036;
            case 0x77:
                v611 = v9 - ((-1594187045 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 512i64) + 816i64) + 520i64) + 816i64) + 424i64)) ^ 0x90B3D65B);
                goto LABEL_1037;
            case 0x78:
                v84 = a1;
                LODWORD(v9) = FuckEnc::CacheRead<_DWORD>(a1 + 320) ^ v9;
                v611 = v9;
                v15 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v84 + 136) + 48i64) + 464i64) + 464i64) + 360i64) + 571601178;
                goto LABEL_1035;
            case 0x79:
                v85 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 656i64);
                v11 = v611 ^ (FuckEnc::CacheRead<_DWORD>(v85 + 192) * (FuckEnc::CacheRead<_DWORD>(v85 + 88) - 11433297));
                goto LABEL_1036;
            case 0x7A:
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 528) ^ ~FuckEnc::CacheRead<_DWORD>(a1 + 320)) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 176i64) + 2141460057;
                goto LABEL_1037;
            case 0x7B:
                v86 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 88i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v86 + 832) + 792i64, &v611, a1);
                goto LABEL_1037;
            case 0x7C:
                v611 = (unsigned int)0xB44A844 + v9 + 1;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 752i64) + 464i64) + 56i64) + 16i64);
                goto LABEL_1037;
            case 0x7D:
                v87 = a1;
                v611 = v9 ^ (-614942220 * FuckEnc::CacheRead<_DWORD>(a1 + 8));
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v87 + 120) + 656i64);
                v611 += FuckEnc::CacheRead<_DWORD>(v87 + 192);
                goto LABEL_1037;
            case 0x7E:
                v88 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 784) ^ v9;
                v611 = (v611 ^ (FuckEnc::CacheRead<_DWORD>(v88 + 320) - 1598894739)) + 1082719091;
                v611 -= 270277847 * FuckEnc::CacheRead<_DWORD>(v88 + 872);
                goto LABEL_1037;
            case 0x7F:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 776i64, &v611, a1);
                v611 += 392735214;
                goto LABEL_1037;
            case 0x80:
                v89 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 600) + 320i64);
                v611 = v611 - 1111141888 * FuckEnc::CacheRead<_DWORD>(v89 + 872) - (_DWORD)0xF708800;
                goto LABEL_1037;
            case 0x81:
                v11 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 528i64) ^ 0xE19619A7) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 696i64) + 176i64);
                goto LABEL_1036;
            case 0x82:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 600) + 376i64) + 600i64) + 808i64, &v611, a1);
                goto LABEL_1037;
            case 0x83:
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 368) + 232i64) + 360i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 464i64) + 16i64));
                goto LABEL_1037;
            case 0x84:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 72i64) + 288i64) + 536i64) + 64i64) * (FuckEnc::CacheRead<_DWORD>(a1 + 360) - 974172336);
                goto LABEL_1037;
            case 0x85:
                v90 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 464i64) + 760i64) ^ v9;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v90 + 280) + 528i64);
                v611 += FuckEnc::CacheRead<_DWORD>(v90 + 872);
                goto LABEL_1037;
            case 0x86:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 840) + 368i64) + 120i64) + 768i64) + 432i64, &v611, a1);
                goto LABEL_1037;
            case 0x87:
                v91 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 368i64) + 16i64) ^ v9;
                v611 = (v611 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v91 + 72) + 816i64) + 408i64)) ^ 0xE82A9A69;
                goto LABEL_1037;
            case 0x88:
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 48) + 192i64) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 888) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 48) + 784i64)));
                goto LABEL_1037;
            case 0x89:
                v92 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 424i64) - 145806992;
                v11 = v611 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v92 + 376) + 816i64) + 248i64) ^ 0xE2FEF473);
                goto LABEL_1036;
            case 0x8A:
                v93 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 760) - 1259700467;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v93 + 584) + 56i64) + 768i64) + 16i64);
                goto LABEL_1037;
            case 0x8B:
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 600) + 296i64) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 536i64) + 600i64) + 640i64) ^ 0x4C953767));
                goto LABEL_1037;
            case 0x8C:
                v11 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 704) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 120i64) + 816i64) + 768i64) + 552i64) + 2042932495;
                goto LABEL_1036;
            case 0x8D:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 360i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 608i64) + 552i64);
                goto LABEL_1037;
            case 0x8E:
                v94 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 192) + 396722418;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v94 + 584) + 768i64) + 424i64) ^ 0x338FC7BD;
                goto LABEL_1037;
            case 0x8F:
                v95 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 296) ^ v9;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v95 + 832) + 584i64) + 832i64) + 744i64) + 872i64);
                goto LABEL_1037;
            case 0x90:
                v611 = v9 - 930429802;
                v611 = v9 - 930429802 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 600) + 352i64) + 136i64) + 56i64) + 712i64);
                goto LABEL_1037;
            case 0x91:
                v611 = v9 ^ ((FuckEnc::CacheRead<_DWORD>(a1 + 8) >> 28) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 352i64) + 840i64) + 784i64));
                goto LABEL_1037;
            case 0x92:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 144i64) + 376i64) + 560i64, &v611, a1);
                goto LABEL_1037;
            case 0x93:
                v96 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 16) + 1;
                v611 = (FuckEnc::CacheRead<_DWORD>(v96 + 360) ^ v611 ^ 0xD25BD1BC) + 2023396174;
                v611 -= FuckEnc::CacheRead<_DWORD>(v96 + 656);
                goto LABEL_1037;
            case 0x94:
                v97 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 296);
                v11 = v611 + 285633637 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v97 + 816) + 368i64) + 232i64) + 136i64) + 784i64);
                goto LABEL_1036;
            case 0x95:
                v11 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 16) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 368i64) + 552i64) ^ 0x3D87C13F);
                goto LABEL_1036;
            case 0x96:
                v611 = v9 - 1328617832;
                v611 = v9 - 1328617832 + 1053426432 * FuckEnc::CacheRead<_DWORD>(a1 + 320) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 832i64) + 88i64);
                goto LABEL_1037;
            case 0x97:
                v98 = a1;
                v611 = v9 ^ (2052804694 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 232i64) + 280i64) + 240i64));
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v98 + 120) + 128i64);
                goto LABEL_1037;
            case 0x98:
                v99 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 64);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v99 + 144) + 464i64) + 64i64);
                v11 = v611 + (FuckEnc::CacheRead<_DWORD>(v99 + 656) ^ 0xE0CCCD38);
                goto LABEL_1036;
            case 0x99:
                v11 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 704) + (FuckEnc::CacheRead<_DWORD>(a1 + 552) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 48) + 760i64)) + 2;
                goto LABEL_1036;
            case 0x9A:
                v100 = a1;
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 128i64) ^ 0x3F1ACAF4);
                v611 += FuckEnc::CacheRead<_DWORD>(v100 + 760);
                v611 = v611 - FuckEnc::CacheRead<_DWORD>(v100 + 8) + 1831814230;
                goto LABEL_1037;
            case 0x9B:
                v101 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 128) + 409617902;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v101 + 72) + 784i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v101 + 816) + 480i64);
                goto LABEL_1037;
            case 0x9C:
                v102 = a1;
                LODWORD(v9) = FuckEnc::CacheRead<_DWORD>(a1 + 480) ^ v9;
                v611 = v9;
                v15 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v102 + 768) + 512i64) + 784i64) ^ (-331902932 * FuckEnc::CacheRead<_DWORD>(v102 + 240));
                goto LABEL_1035;
            case 0x9D:
                v103 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 360) ^ v9;
                v611 ^= ~((FuckEnc::CacheRead<_DWORD>(v103 + 656) ^ 0xC1CA1962) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v103 + 304) + 712i64));
                goto LABEL_1037;
            case 0x9E:
                v104 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 424);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v104 + 48) + 744i64) + 512i64) + 768i64) + 472i64);
                goto LABEL_1037;
            case 0x9F:
                v105 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 408i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v105 + 464) + 232i64) + 376i64) + 472i64);
                goto LABEL_1037;
            case 0xA0:
                v611 = v9 ^ 0x22982F6E;
                v611 = (v9 ^ 0x22982F6E) - FuckEnc::CacheRead<_DWORD>(a1 + 176) * (FuckEnc::CacheRead<_DWORD>(a1 + 528) ^ 0xDEBC21DF | 0xE);
                goto LABEL_1037;
            case 0xA1:
                v611 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 48) + 136i64) + 192i64) ^ (1004172820 * (FuckEnc::CacheRead<_DWORD>(a1 + 296) ^ 0x650E54CB)));
                goto LABEL_1037;
            case 0xA2:
                v106 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 120i64) + 304i64) + 528i64);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v106 + 584) + 320i64);
                goto LABEL_1036;
            case 0xA3:
                v107 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 296) ^ v9;
                v611 = v611 - 871787400 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v107 + 144) + 136i64) + 816i64) + 8i64) + 600820213;
                goto LABEL_1037;
            case 0xA4:
                v611 = v9 + ((875282877 * FuckEnc::CacheRead<_DWORD>(a1 + 248)) ^ 0x712C1F3F) * (FuckEnc::CacheRead<_DWORD>(a1 + 128) ^ FuckEnc::CacheRead<_DWORD>(a1 + 640) ^ 0x28548D7C);
                goto LABEL_1037;
            case 0xA5:
                v108 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 872) ^ v9;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v108 + 520) + 528i64) ^ 0xBCC0666D;
                v611 ^= FuckEnc::CacheRead<_DWORD>(v108 + 592);
                goto LABEL_1037;
            case 0xA6:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 600i64) + 816i64) + 376i64) + 232i64) + 584i64) + 888i64) ^ v9;
                goto LABEL_1037;
            case 0xA7:
                v611 = v9 ^ 0xFB2B6E14;
                v611 = (v9 ^ 0xFB2B6E14) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 232i64) + 352i64) + 840i64) + 368i64) + 888i64);
                goto LABEL_1037;
            case 0xA8:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 840) + 600i64) + 368i64) + 304i64) + 144i64) + 48i64) + 304i64) + 88i64);
                goto LABEL_1037;
            case 0xA9:
                v611 = ((v9 + 483460029) ^ 0x4CD5ADB1) + 47623192;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 48i64) + 480i64) + 430372640;
                goto LABEL_1037;
            case 0xAA:
                v611 = (v9 + 160857592) ^ 0xE50594CA;
                v11 = v611 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 424) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 288i64) + 248i64));
                goto LABEL_1036;
            case 0xAB:
                v611 = (v9 + FuckEnc::CacheRead<_DWORD>(a1 + 528) * (FuckEnc::CacheRead<_DWORD>(a1 + 704) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 872) | 0x1E))) ^ 0x4393FEDF;
                goto LABEL_1037;
            case 0xAC:
                v109 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 872) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(v109 + 656) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v109 + 304) + 128i64) ^ 0x5F9FEAB6;
                goto LABEL_1037;
            case 0xAD:
                v110 = a1;
                v611 = v9 + 1354672400 * FuckEnc::CacheRead<_DWORD>(a1 + 528) - 47205600;
                v611 ^= FuckEnc::CacheRead<_DWORD>(v110 + 360) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v110 + 512) + 64i64);
                goto LABEL_1037;
            case 0xAE:
                v111 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 16);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v111 + 464) + 376i64) + 304i64) + 240i64);
                goto LABEL_1037;
            case 0xAF:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 464i64) + 512i64) + 744i64) + 352i64) + 768i64) + 520i64) + 64i64) ^ v9;
                goto LABEL_1037;
            case 0xB0:
                v112 = a1;
                v611 = v9 ^ FuckEnc::CacheRead<_DWORD>(a1 + 408) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 832i64) + 360i64);
                v611 += FuckEnc::CacheRead<_DWORD>(v112 + 704);
                goto LABEL_1037;
            case 0xB1:
                v11 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 600i64) + 56i64) + 352i64) + 352i64) + 232i64) + 128i64);
                goto LABEL_1036;
            case 0xB2:
                v113 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 8);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v113 + 600) + 48i64) + 280i64) + 120i64) + 240i64);
                goto LABEL_1037;
            case 0xB3:
                v114 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 784) ^ v9 ^ 0xE15216F9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v114 + 352) + 280i64) + 512i64) + 552i64);
                goto LABEL_1037;
            case 0xB4:
                v115 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 520i64) + 88i64);
                Calls::FastCall(v115 + 200, &v611, v115);
                goto LABEL_1037;
            case 0xB5:
                v116 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 872) ^ v9;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v116 + 120) + 816i64) + 752i64) + 696i64) + 128i64);
                goto LABEL_1037;
            case 0xB6:
                v611 = (v9 - 1515837310) ^ 0xFDCB7289;
                v11 = v611 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 760) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 368) + 832i64) + 240i64));
                goto LABEL_1036;
            case 0xB7:
                v11 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 72i64) + 280i64) + 56i64) + 120i64) + 280i64) + 192i64) - 529774943;
                goto LABEL_1036;
            case 0xB8:
                v117 = a1;
                v611 = v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 552i64) ^ FuckEnc::CacheRead<_DWORD>(a1 + 408) & 0xFFFFFFE2;
                v11 = v611 ^ (FuckEnc::CacheRead<_DWORD>(v117 + 480) << 7);
                goto LABEL_1036;
            case 0xB9:
                v118 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 176);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v118 + 176);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v118 + 368) + 480i64) + 1;
                goto LABEL_1036;
            case 0xBA:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 840) + 72i64) + 608i64) + 352i64) + 896i64, &v611, a1);
                goto LABEL_1037;
            case 0xBB:
                v119 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 232i64) + 304i64) + 760i64) ^ v9;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v119 + 744) + 232i64) + 528i64);
                goto LABEL_1037;
            case 0xBC:
                v120 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 176);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v120 + 744) + 768i64) + 288i64) + 56i64) + 8i64);
                goto LABEL_1037;
            case 0xBD:
                v15 = FuckEnc::CacheRead<_DWORD>(a1 + 760) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 536i64) + 816i64) + 280i64) + 248i64);
                goto LABEL_1035;
            case 0xBE:
                v11 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 360) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 608i64) + 704i64) + 1106096490)) ^ 0x6FA6C3CB;
                goto LABEL_1036;
            case 0xBF:
                v121 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 64);
                v611 -= FuckEnc::CacheRead<_DWORD>(v121 + 176);
                Calls::FastCall(v121 + 224, &v611, v121);
                goto LABEL_1037;
            case 0xC0:
                v611 = ~(_DWORD)v9;
                v122 = a1;
                v611 = ~(_DWORD)v9 + ~FuckEnc::CacheRead<_DWORD>(a1 + 704);
                v611 += FuckEnc::CacheRead<_DWORD>(v122 + 248);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v122 + 128);
                goto LABEL_1037;
            case 0xC1:
                v123 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 296) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v123 + 752) + 424i64);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v123 + 520) + 296i64);
                goto LABEL_1036;
            case 0xC2:
                v611 = v9 - 933684588 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 288i64) + 56i64) + 192i64) - FuckEnc::CacheRead<_DWORD>(a1 + 640);
                goto LABEL_1037;
            case 0xC3:
                v124 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 592i64) ^ v9;
                v611 ^= 858395560 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v124 + 832) + 88i64);
                v611 += FuckEnc::CacheRead<_DWORD>(v124 + 888);
                goto LABEL_1037;
            case 0xC4:
                v125 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 840) + 760i64) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v125 + 144) + 128i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(v125 + 296);
                goto LABEL_1037;
            case 0xC5:
                v611 = v9 - ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 288i64) + 240i64) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 240i64)) << 22);
                goto LABEL_1037;
            case 0xC6:
                v126 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 712);
                v611 = (v611 ^ (FuckEnc::CacheRead<_DWORD>(v126 + 640) + ~FuckEnc::CacheRead<_DWORD>(v126 + 712))) - 729627223;
                goto LABEL_1037;
            case 0xC7:
                v611 = (((unsigned int)0xD1FA16C + 2) ^ v9) - 1337605039;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 144i64) + 424i64);
                goto LABEL_1037;
            case 0xC8:
                v127 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 784);
                v611 += FuckEnc::CacheRead<_DWORD>(v127 + 704);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v127 + 368) + 376i64) + 512i64) + 176i64);
                goto LABEL_1037;
            case 0xC9:
                v128 = a1;
                v611 = (v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 48) + 408i64) | 0xA)) ^ 0x90723DF7;
                Calls::FastCall(v128 + 80, &v611, v128);
                goto LABEL_1037;
            case 0xCA:
                v611 = v9 ^ 0x964F226A;
                v129 = a1;
                v611 = (v9 ^ 0x964F226A) - FuckEnc::CacheRead<_DWORD>(a1 + 192) - 1357290714;
                v611 = v611 - FuckEnc::CacheRead<_DWORD>(v129 + 528) - 1772760719;
                goto LABEL_1037;
            case 0xCB:
                v130 = a1;
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 176i64) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 704) + 1235155708));
                v611 += FuckEnc::CacheRead<_DWORD>(v130 + 640);
                goto LABEL_1037;
            case 0xCC:
                v131 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 888) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 424i64);
                v611 = (FuckEnc::CacheRead<_DWORD>(v131 + 472) ^ v611) - (_DWORD)0x142F827B;
                goto LABEL_1037;
            case 0xCD:
                v611 = v9 - 1084765850;
                v132 = a1;
                v611 = (v9 - 1084765850) ^ (-1036079494 * FuckEnc::CacheRead<_DWORD>(a1 + 824));
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v132 + 832) + 48i64) + 424i64);
                goto LABEL_1037;
            case 0xCE:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 584i64) + 376i64) + 120i64) + 120i64) + 752i64) + 320i64) ^ v9;
                goto LABEL_1037;
            case 0xCF:
                v611 = ~(v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 464i64) + 512i64) + 464i64) + 840i64) + 16i64));
                goto LABEL_1037;
            case 0xD0:
                v133 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 872) + 957208238;
                v611 ^= FuckEnc::CacheRead<_DWORD>(v133 + 296) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v133 + 608) + 128i64);
                goto LABEL_1037;
            case 0xD1:
                v134 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 8);
                v611 = (v611 ^ (FuckEnc::CacheRead<_DWORD>(v134 + 888) * ~FuckEnc::CacheRead<_DWORD>(v134 + 640))) + 1198965922;
                goto LABEL_1037;
            case 0xD2:
                v135 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 120i64) + 192i64);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v135 + 832) + 56i64) + 136i64) + 528i64);
                goto LABEL_1036;
            case 0xD3:
                v136 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 16);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v136 + 584) + 528i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v136 + 512) + 368i64) + 88i64);
                goto LABEL_1037;
            case 0xD4:
                v137 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 424i64) ^ v9;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v137 + 376) + 640i64);
                v11 = FuckEnc::CacheRead<_DWORD>(v137 + 64) ^ v611;
                goto LABEL_1036;
            case 0xD5:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 920i64, &v611, a1);
                v611 += 625201995 - FuckEnc::CacheRead<_DWORD>(a1 + 176);
                goto LABEL_1037;
            case 0xD6:
                v138 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 712) + 2015094329;
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v138 + 48) + 288i64) + 304i64) + 528i64);
                goto LABEL_1036;
            case 0xD7:
                v139 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 824);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v139) + 176i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v139 + 744) + 552i64) & 0xFFFFFFE5;
                goto LABEL_1037;
            case 0xD8:
                v140 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 88);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v140 + 512) + 144i64) + 712i64) * (FuckEnc::CacheRead<_DWORD>(v140 + 192) ^ 0x8647F276);
                goto LABEL_1036;
            case 0xD9:
                v611 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 136i64) + 520i64) + 48i64) + 752i64) + 136i64) + 760i64) ^ v9);
                goto LABEL_1037;
            case 0xDA:
                v611 = v9 - 793007224;
                v141 = a1;
                v611 = v9 - 793007224 - FuckEnc::CacheRead<_DWORD>(a1 + 760);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v141 + 824);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v141 + 288) + 408i64);
                goto LABEL_1037;
            case 0xDB:
                v142 = a1;
                v611 = v9 ^ (949897672 * ~FuckEnc::CacheRead<_DWORD>(a1 + 480));
                v11 = (unsigned int)0x10497538 ^ v611 ^ (~FuckEnc::CacheRead<_DWORD>(v142 + 16) | 0xE);
                goto LABEL_1036;
            case 0xDC:
                v143 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 144) + 352i64) + 288i64) + 376i64) + 840i64) + 8i64);
                v11 = v611 - FuckEnc::CacheRead<_DWORD>(v143 + 8);
                goto LABEL_1036;
            case 0xDD:
                v611 = v9 ^ 0x644D78E4;
                v611 = (v9 ^ 0x644D78E4) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 48i64) + 768i64) + 48i64) + 744i64) + 248i64);
                goto LABEL_1037;
            case 0xDE:
                v611 = v9 - 289058791 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 840) + 408i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 816i64) + 320i64);
                goto LABEL_1037;
            case 0xDF:
                v611 = v9 - 435802132 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 408i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 840i64) + 144i64) + 408i64);
                goto LABEL_1037;
            case 0xE0:
                v144 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 424i64) ^ v9;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v144 + 144) + 96i64, &v611, a1);
                goto LABEL_1037;
            case 0xE1:
                v145 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 16);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v145 + 744) + 304i64) + 8i64) ^ 0x4F48FD40;
                goto LABEL_1037;
            case 0xE2:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 352i64) + 696i64) + 720i64, &v611, a1);
                v611 += 385438859;
                goto LABEL_1037;
            case 0xE3:
                v611 = v9 ^ 0x58C4370;
                v146 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 248) ^ v9 ^ 0x58C4370;
                Calls::FastCall(v146 + 544, &v611, v146);
                goto LABEL_1037;
            case 0xE4:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 512i64) + 768i64) + 520i64) + 600i64) + 120i64) + 136i64) + 704i64);
                goto LABEL_1037;
            case 0xE5:
                v147 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 408) ^ v9;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v147 + 512) + 224i64, &v611, a1);
                goto LABEL_1037;
            case 0xE6:
                v611 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 280i64) + 376i64) + 464i64) + 136i64) + 352i64) + 88i64);
                goto LABEL_1037;
            case 0xE7:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 840i64) + 840i64) + 856i64, &v611, a1);
                goto LABEL_1037;
            case 0xE8:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 840i64) + 144i64) + 720i64, &v611, a1);
                goto LABEL_1037;
            case 0xE9:
                v148 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 704i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v148 + 144) + 288i64) + 376i64) + 376i64) + 128i64);
                goto LABEL_1037;
            case 0xEA:
                v149 = a1;
                LODWORD(v9) = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 144i64) + 816i64) + 592i64);
                v611 = v9;
                v15 = FuckEnc::CacheRead<_DWORD>(v149 + 296) - 882691121;
                goto LABEL_1035;
            case 0xEB:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 816i64) + 744i64) + 64i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 144i64) + 240i64);
                goto LABEL_1037;
            case 0xEC:
                v611 = v9 + 1829974975;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 696i64) + 112i64, &v611, a1);
                goto LABEL_1037;
            case 0xED:
                v150 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 8);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v150 + 136) + 304i64) + 608i64) + 240i64);
                goto LABEL_1037;
            case 0xEE:
                v151 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 128) ^ v9;
                v611 += 959523923 * FuckEnc::CacheRead<_DWORD>(v151 + 128);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v151 + 352) + 88i64) + 1;
                goto LABEL_1036;
            case 0xEF:
                v611 = (v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 640i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 72i64) + 552i64))) ^ 0xD0369AB4;
                goto LABEL_1037;
            case 0xF0:
                v152 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 408i64);
                v11 = v611 ^ FuckEnc::CacheRead<_DWORD>(v152 + 640) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v152 + 752) + 584i64) + 248i64);
                goto LABEL_1036;
            case 0xF1:
                v153 = a1;
                v611 = v9 ^ (1963190634 * FuckEnc::CacheRead<_DWORD>(a1 + 640));
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(v153 + 744) + 760i64);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v153 + 824);
                goto LABEL_1037;
            case 0xF2:
                v611 = v9 - 739325849;
                v154 = a1;
                v611 = v9 - 739325849 + FuckEnc::CacheRead<_DWORD>(a1 + 640) + 464743409;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v154 + 48) + 832i64) + 824i64);
                goto LABEL_1037;
            case 0xF3:
                v155 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 48) + 192i64);
                v11 = v611 + (FuckEnc::CacheRead<_DWORD>(v155 + 592) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v155 + 600) + 368i64) + 320i64));
                goto LABEL_1036;
            case 0xF4:
                v611 = ~(_DWORD)v9;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 56i64) + 600i64) + 232i64) + 840i64) + 480i64) ^ ~(_DWORD)v9;
                goto LABEL_1037;
            case 0xF5:
                v611 = v9 + 1905035075;
                v11 = (v9 + 1905035075) ^ ~(FuckEnc::CacheRead<_DWORD>(a1 + 712) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 744i64) + 408i64));
                goto LABEL_1036;
            case 0xF6:
                v156 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 704) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v156 + 376) + 600i64) + 704i64);
                v11 = v611 + ~FuckEnc::CacheRead<_DWORD>(v156 + 480);
                goto LABEL_1036;
            case 0xF7:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 464i64) + 48i64) + 872i64) - FuckEnc::CacheRead<_DWORD>(a1 + 640) + 1889227865;
                goto LABEL_1037;
            case 0xF8:
                v157 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 528);
                v611 ^= ~(FuckEnc::CacheRead<_DWORD>(v157 + 64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v157 + 56) + 16i64));
                goto LABEL_1037;
            case 0xF9:
                Calls::FastCall(a1 + 200, &v611, a1);
                v611 += 1 + (FuckEnc::CacheRead<_DWORD>(a1 + 408) & 0xFFFFFFFB);
                goto LABEL_1037;
            case 0xFA:
                v158 = a1;
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 360) - (_DWORD)0x1373F46C);
                v611 -= FuckEnc::CacheRead<_DWORD>(v158 + 656);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v158 + 144) + 136i64) + 64i64);
                goto LABEL_1037;
            case 0xFB:
                v159 = a1;
                v611 = ((FuckEnc::CacheRead<_DWORD>(a1 + 784) ^ v9) - 1482945640) ^ 0x764CCBB8;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v159 + 72) + 136i64) + 424i64) + 1;
                goto LABEL_1037;
            case 0xFC:
                v160 = a1;
                v611 = ~(v9 + FuckEnc::CacheRead<_DWORD>(a1 + 552));
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v160 + 72) + 296i64) ^ (FuckEnc::CacheRead<_DWORD>(v160 + 296) + 1781128699);
                goto LABEL_1037;
            case 0xFD:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 48i64) + 224i64, &v611, a1);
                v611 += FuckEnc::CacheRead<_DWORD>(a1 + 8);
                goto LABEL_1037;
            case 0xFE:
                v611 = v9 ^ (~FuckEnc::CacheRead<_DWORD>(a1 + 528) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 232i64) + 296i64));
                goto LABEL_1037;
            case 0xFF:
                v161 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 16);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v161 + 696) + 304i64) + 528i64);
                goto LABEL_1037;
            case 0x100:
                v611 = v9 ^ (~FuckEnc::CacheRead<_DWORD>(a1 + 712) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 840i64) + 136i64) + 744i64) + 784i64));
                goto LABEL_1037;
            case 0x101:
                v11 = ~(v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 136i64) + 64i64) ^ ~(-1026942975 * FuckEnc::CacheRead<_DWORD>(a1 + 784)));
                goto LABEL_1036;
            case 0x102:
                v611 = v9 + 1781207684;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 288i64) + 112i64, &v611, a1);
                goto LABEL_1037;
            case 0x103:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 48i64) + 520i64) + 816i64) + 48i64) + 248i64) + 603623000;
                goto LABEL_1037;
            case 0x104:
                v162 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 592) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 232i64) + 88i64);
                v11 = v611 + ~FuckEnc::CacheRead<_DWORD>(v162 + 408);
                goto LABEL_1036;
            case 0x105:
                v163 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 128) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v163 + 232) + 600i64) + 768i64) + 536i64) + 584i64) + 480i64);
                goto LABEL_1037;
            case 0x106:
                v611 = v9 - 759193366;
                v611 = (v9 - 759193366) ^ (~FuckEnc::CacheRead<_DWORD>(a1 + 240) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 608i64) + 784i64));
                goto LABEL_1037;
            case 0x107:
                v164 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 248) ^ v9 ^ 0x91BCD272;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v164 + 144) + 840i64) + 536i64) + 304i64) + 592i64);
                goto LABEL_1037;
            case 0x108:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 840i64) + 56i64) + 696i64) + 832i64) + 296i64) ^ v9;
                goto LABEL_1037;
            case 0x109:
                v165 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 424) ^ v9;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v165 + 136) + 288i64) + 744i64) + 832i64) + 768i64) + 640i64);
                goto LABEL_1037;
            case 0x10A:
                v166 = a1;
                v611 = v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 512i64) + 280i64) + 824i64) & 0xFFFFFFF0;
                v611 ^= FuckEnc::CacheRead<_DWORD>(v166 + 528);
                goto LABEL_1037;
            case 0x10B:
                v167 = a1;
                v168 = (v9 - FuckEnc::CacheRead<_DWORD>(a1 + 888)) ^ 0x2150DEF9;
                goto LABEL_273;
            case 0x10C:
                v611 = v9 - 424325022;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 48i64) + 560i64, &v611, a1);
                goto LABEL_1037;
            case 0x10D:
                v169 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 288) + 464i64) + 280i64) + 128i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v169) + 472i64);
                goto LABEL_1037;
            case 0x10E:
                v170 = a1;
                v171 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 48i64) + 480i64) + 602597826;
                goto LABEL_277;
            case 0x10F:
                v611 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 752i64) + 8i64) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 608i64) + 408i64));
                goto LABEL_1037;
            case 0x110:
                Calls::FastCall(a1 + 792, &v611, a1);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 784i64) & 0xFFFFFFF6;
                goto LABEL_1037;
            case 0x111:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 280i64) + 280i64) + 368i64) + 752i64) + 520i64) + 280i64) + 888i64);
                goto LABEL_1037;
            case 0x112:
                v611 = (v9 ^ 0xEDDF4BA4) + 1760033780;
                v611 = ~(v611 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 304i64) + 528i64));
                goto LABEL_1037;
            case 0x113:
                v172 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 536i64) + 128i64);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v172 + 464) + 464i64) + 240i64);
                goto LABEL_1037;
            case 0x114:
                v611 = v9 - 1022561763;
                v173 = a1;
                v611 = (v9 - 1022561763) ^ ((FuckEnc::CacheRead<_DWORD>(a1 + 704) | 0xC) + 1427858718);
                v11 = v611 + ~FuckEnc::CacheRead<_DWORD>(v173 + 240);
                goto LABEL_1036;
            case 0x115:
                v174 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 248) ^ v9;
                v611 -= FuckEnc::CacheRead<_DWORD>(v174 + 64);
                Calls::FastCall(v174 + 856, &v611, v174);
                goto LABEL_1037;
            case 0x116:
                v175 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 784) + 1542344911 * FuckEnc::CacheRead<_DWORD>(a1 + 296) + 1;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v175 + 48) + 528i64);
                goto LABEL_1037;
            case 0x117:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 8i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 752i64) + 768i64) + 824i64);
                goto LABEL_1037;
            case 0x118:
                v176 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 48) + 56i64) + 16i64) ^ v9;
                v11 = v611 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v176 + 600) + 744i64) + 592i64) ^ 0xB4F3F225);
                goto LABEL_1036;
            case 0x119:
                v611 = v9 - 2046569286;
                v177 = a1;
                v611 = ~(v9 - 2046569286 + (FuckEnc::CacheRead<_DWORD>(a1 + 704) ^ 0x4DB9D663));
                v611 -= FuckEnc::CacheRead<_DWORD>(v177 + 760) >> 14;
                goto LABEL_1037;
            case 0x11A:
                v178 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 176);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v178 + 712) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v178 + 352) + 88i64);
                v611 += FuckEnc::CacheRead<_DWORD>(v178 + 88);
                goto LABEL_1037;
            case 0x11B:
                v179 = a1;
                v611 = v9 + ~FuckEnc::CacheRead<_DWORD>(a1 + 552);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v179 + 464) + 656i64) + FuckEnc::CacheRead<_DWORD>(v179 + 784) - 1579994105;
                goto LABEL_1037;
            case 0x11C:
                v611 = ~(v9 ^ ((FuckEnc::CacheRead<_DWORD>(a1 + 8) & 0xFFFFFFFA) * (FuckEnc::CacheRead<_DWORD>(a1 + 712) ^ FuckEnc::CacheRead<_DWORD>(a1 + 784) ^ 0x64973503)));
                goto LABEL_1037;
            case 0x11D:
                v611 = (v9 + 2023885612) ^ 0xC89A4E4C;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 560i64, &v611, a1);
                goto LABEL_1037;
            case 0x11E:
                v180 = a1;
                LODWORD(v9) = FuckEnc::CacheRead<_DWORD>(a1 + 592) ^ v9;
                v611 = v9;
                v15 = 1612135435 * FuckEnc::CacheRead<_DWORD>(v180 + 656) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v180 + 512) + 872i64);
                goto LABEL_1035;
            case 0x11F:
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 424i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 72i64) + 424i64)) - 1623999011;
                goto LABEL_1037;
            case 0x120:
                v181 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 888);
                v11 = v611 + (FuckEnc::CacheRead<_DWORD>(v181 + 296) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v181 + 48) + 520i64) + 472i64)) + 1587663062;
                goto LABEL_1036;
            case 0x121:
                v182 = a1;
                v611 = (FuckEnc::CacheRead<_DWORD>(a1 + 888) ^ v9) + 1653245294;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v182 + 280) + 248i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v182 + 752) + 408i64);
                goto LABEL_1037;
            case 0x122:
                v15 = 2122962773 * FuckEnc::CacheRead<_DWORD>(a1 + 552) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 608i64) + 768i64) + 192i64);
                goto LABEL_1035;
            case 0x123:
                v611 = v9 - 112352498;
                v183 = a1;
                v611 = v9 - 112352498 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 784i64);
                Calls::FastCall(v183 + 776, &v611, v183);
                goto LABEL_1037;
            case 0x124:
                v611 = v9 ^ FuckEnc::CacheRead<_DWORD>(a1 + 88) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 144) + 592i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 840) + 872i64)) ^ 0x8F4A6D67;
                goto LABEL_1037;
            case 0x125:
                v184 = a1;
                v611 = v9 + ~FuckEnc::CacheRead<_DWORD>(a1 + 712);
                v611 ^= ~FuckEnc::CacheRead<_DWORD>(v184 + 824);
                v11 = v611 ^ ~FuckEnc::CacheRead<_DWORD>(v184 + 240);
                goto LABEL_1036;
            case 0x126:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 288i64) + 696i64) + 144i64) + 136i64) + 352i64) + 600i64) + 640i64) ^ v9;
                goto LABEL_1037;
            case 0x127:
                v185 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 296);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v185 + 768) + 288i64) + 320i64);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v185 + 248);
                goto LABEL_1037;
            case 0x128:
                v186 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 120i64) + 744i64) + 128i64);
                v11 = v611 + (FuckEnc::CacheRead<_DWORD>(v186 + 88) ^ 0x31E2A07B);
                goto LABEL_1036;
            case 0x129:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 144i64) + 232i64) + 816i64) + 144i64) + 304i64) + 128i64) ^ v9;
                goto LABEL_1037;
            case 0x12A:
                Calls::FastCall(a1 + 896, &v611, a1);
                v611 += 648524675;
                v611 -= 2017453086 * FuckEnc::CacheRead<_DWORD>(a1 + 296);
                goto LABEL_1037;
            case 0x12B:
                v24 = a1;
                v25 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 600) + 464i64) + 64i64) ^ v9);
            LABEL_26:
                v611 = v25;
                Calls::FastCall(v24 + 488, &v611, v24);
                goto LABEL_1037;
            case 0x12C:
                v187 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 368i64) + 888i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v187 + 56) + 368i64) + 608i64) + 712i64);
                goto LABEL_1037;
            case 0x12D:
                v188 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 248);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v188 + 816) + 760i64) & 0xFFFFFFFB;
                v611 ^= FuckEnc::CacheRead<_DWORD>(v188 + 64);
                goto LABEL_1037;
            case 0x12E:
                v611 = v9 ^ 0xBDFA4D97;
                v189 = a1;
                v611 = (v9 ^ 0xBDFA4D97) - 1263888272 * FuckEnc::CacheRead<_DWORD>(a1 + 320);
                v611 -= FuckEnc::CacheRead<_DWORD>(v189 + 784) ^ 0xCA5ECBA7 | 7;
                goto LABEL_1037;
            case 0x12F:
                v190 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 240) - 1514504751;
                v611 -= FuckEnc::CacheRead<_DWORD>(v190 + 176);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v190 + 752) + 832i64) + 64i64);
                goto LABEL_1037;
            case 0x130:
                v611 = v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 704i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 696i64) + 816i64) + 48i64) + 248i64);
                goto LABEL_1037;
            case 0x131:
                v191 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 368i64) + 704i64) + 876894863;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v191 + 752) + 232i64) + 472i64);
                goto LABEL_1037;
            case 0x132:
                v192 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 144) + 464i64) + 144i64) + 888i64);
                v611 = v611 - 81205812 * FuckEnc::CacheRead<_DWORD>(v192 + 320) + 1909943772;
                goto LABEL_1037;
            case 0x133:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 280i64) + 72i64) + 120i64) + 232i64) + 704i64) ^ v9 ^ 0x4F5F751B;
                goto LABEL_1037;
            case 0x134:
                v611 = v9 ^ 0xD3E2F97A;
                v193 = a1;
                v194 = v9 ^ 0xD3E2F97A ^ ~FuckEnc::CacheRead<_DWORD>(a1 + 824);
                v611 = v194;
                v195 = FuckEnc::CacheRead<_QWORD>(v193 + 464);
                goto LABEL_316;
            case 0x135:
                v196 = a1;
                v611 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 424i64) ^ v9) - 170550912;
                v11 = v611 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v196 + 840) + 520i64) + 64i64);
                goto LABEL_1036;
            case 0x136:
                v197 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 8);
                v611 += ~(FuckEnc::CacheRead<_DWORD>(v197 + 128) ^ (~FuckEnc::CacheRead<_DWORD>(v197 + 552) | 0x19));
                goto LABEL_1037;
            case 0x137:
                v611 = v9 + ~(-631132954 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 232i64) + 840i64) + 640i64) ^ 0x5E4D31A5));
                goto LABEL_1037;
            case 0x138:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 144i64) + 352i64) + 304i64) + 624i64, &v611, a1);
                goto LABEL_1037;
            case 0x139:
                v198 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 552i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 8i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(v198 + 64);
                goto LABEL_1037;
            case 0x13A:
                v199 = a1;
                v611 = (v9 - FuckEnc::CacheRead<_DWORD>(a1 + 16)) ^ 0x1F3C0C8E;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v199 + 376) + 352i64) + 872i64);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v199 + 472);
                goto LABEL_1037;
            case 0x13B:
                v611 = v9 ^ 0x21FB5F4C;
                v611 = (v9 ^ 0x21FB5F4C) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 816i64) + 744i64) + 744i64) + 352i64) + 296i64);
                goto LABEL_1037;
            case 0x13C:
                v200 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 480) ^ v9;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v200 + 768) + 552i64) + 1;
                v611 += FuckEnc::CacheRead<_DWORD>(v200 + 760);
                goto LABEL_1037;
            case 0x13D:
                v201 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 784i64) - 743953160;
                v11 = v611 + (~FuckEnc::CacheRead<_DWORD>(v201 + 240) & 0xFFFFFFE0 | 0x11);
                goto LABEL_1036;
            case 0x13E:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 832i64) + 280i64) + 352i64) + 288i64) + 816i64) + 8i64);
                goto LABEL_1037;
            case 0x13F:
                v611 = v9 + 396296275;
                v202 = a1;
                v611 = (v9 + 396296275) ^ FuckEnc::CacheRead<_DWORD>(a1 + 480) & 0xFFFFFFEF;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v202 + 376) + 352i64) + 424i64);
                goto LABEL_1037;
            case 0x140:
                v203 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 176);
                v611 ^= ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v203 + 464) + 592i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v203 + 280) + 824i64));
                goto LABEL_1037;
            case 0x141:
                v204 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 360) ^ v9;
                v611 = (unsigned int)0x523E44 ^ (v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v204 + 832) + 528i64));
                v11 = v611 ^ (FuckEnc::CacheRead<_DWORD>(v204 + 480) - 1742785653);
                goto LABEL_1036;
            case 0x142:
                v205 = a1;
                v611 = (v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 704) - 1744653960)) + 1972336076;
                v611 += FuckEnc::CacheRead<_DWORD>(v205 + 824) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v205 + 464) + 8i64);
                goto LABEL_1037;
            case 0x143:
                v611 = ~(v9 + 372933923);
                v11 = v611 ^ (1257235937 - 2064063435 * FuckEnc::CacheRead<_DWORD>(a1 + 640));
                goto LABEL_1036;
            case 0x144:
                v206 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 368) + 144i64) + 704i64);
                v611 = v611 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v206 + 120) + 784i64) - 1756229448;
                goto LABEL_1037;
            case 0x145:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 464i64) + 840i64) + 288i64) + 144i64) + 528i64) - 1352826787;
                goto LABEL_1037;
            case 0x146:
                v207 = a1;
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 592) + 974989263);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v207 + 608) + 120i64) + 584i64) + 752i64) + 192i64);
                goto LABEL_1037;
            case 0x147:
                v208 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 656);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v208 + 512) + 816i64) + 144i64) + 280i64) + 144i64) + 760i64);
                goto LABEL_1037;
            case 0x148:
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 760) - 1266574990) ^ ~(FuckEnc::CacheRead<_DWORD>(a1 + 888) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 320i64));
                goto LABEL_1037;
            case 0x149:
                v611 = v9 + (~(~FuckEnc::CacheRead<_DWORD>(a1 + 552) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 536i64) + 240i64)) & 0xFFFFFFFA);
                goto LABEL_1037;
            case 0x14A:
                v209 = a1;
                LODWORD(v9) = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 360) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 296i64) ^ 0x97045E81);
                v611 = v9;
                v15 = ~FuckEnc::CacheRead<_DWORD>(v209 + 64);
                goto LABEL_1035;
            case 0x14B:
                v210 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 480) ^ v9;
                v611 += 2105861723 * FuckEnc::CacheRead<_DWORD>(v210 + 824) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v210 + 600) + 320i64) - 1692108799;
                goto LABEL_1037;
            case 0x14C:
                v611 = v9 ^ ((FuckEnc::CacheRead<_DWORD>(a1 + 64) - 152016377) * (FuckEnc::CacheRead<_DWORD>(a1 + 824) + FuckEnc::CacheRead<_DWORD>(a1 + 176) + 1694147750));
                goto LABEL_1037;
            case 0x14D:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 816i64) + 280i64) + 456i64, &v611, a1);
                goto LABEL_1037;
            case 0x14E:
                v211 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 64i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v211 + 584) + 920i64, &v611, a1);
                goto LABEL_1037;
            case 0x14F:
                v212 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 640);
                v611 -= (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v212 + 608) + 552i64) ^ (FuckEnc::CacheRead<_DWORD>(v212 + 888) + 1796528192)) & 0xFFFFFFFD;
                goto LABEL_1037;
            case 0x150:
                v611 = v9 + 560209609;
                Calls::FastCall(a1 + 200, &v611, a1);
                v611 += FuckEnc::CacheRead<_DWORD>(a1 + 320);
                goto LABEL_1037;
            case 0x151:
                v213 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 480) + 1;
                v611 -= FuckEnc::CacheRead<_DWORD>(v213 + 640);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v213 + 840) + 768i64) + 888i64);
                goto LABEL_1037;
            case 0x152:
                v214 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 480) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v214 + 48) + 120i64) + 832i64) + 520i64) + 296i64);
                goto LABEL_1037;
            case 0x153:
                v215 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 584i64) + 120i64) + 88i64);
                v11 = v611 - FuckEnc::CacheRead<_DWORD>(v215 + 192) + 879978555;
                goto LABEL_1036;
            case 0x154:
                v216 = a1;
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 472) + FuckEnc::CacheRead<_DWORD>(a1 + 176) - 745773359);
                v611 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v216 + 48) + 656i64) ^ v611) - 1696394521;
                goto LABEL_1037;
            case 0x155:
                v611 = v9 - 1022709120;
                v611 = v9 - 1022709120 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 232i64) + 48i64) + 288i64) + 696i64) + 760i64);
                goto LABEL_1037;
            case 0x156:
                v217 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 760);
                v611 += FuckEnc::CacheRead<_DWORD>(v217 + 480);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v217 + 72) + 584i64) + 592i64);
                goto LABEL_1037;
            case 0x157:
                v218 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 144) + 824i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v218 + 584) + 256i64, &v611, a1);
                goto LABEL_1037;
            case 0x158:
                v15 = 435358012 * (FuckEnc::CacheRead<_DWORD>(a1 + 704) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 240i64) ^ 0xD8153B40);
                goto LABEL_1035;
            case 0x159:
                v611 = v9 + 1553969029;
                v219 = a1;
                v611 = v9 + 1553969029 + FuckEnc::CacheRead<_DWORD>(a1 + 320);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v219 + 128);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v219 + 144) + 128i64);
                goto LABEL_1036;
            case 0x15A:
                v220 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 232i64) + 240i64) ^ v9;
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v220 + 520) + 536i64) + 56i64) + 592i64);
                goto LABEL_1036;
            case 0x15B:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 144) + 768i64) + 288i64) + 600i64) + 512i64) + 696i64) + 888i64) ^ v9;
                goto LABEL_1037;
            case 0x15C:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 584i64) + 464i64) + 368i64) + 144i64) + 520i64) + 408i64) ^ v9;
                goto LABEL_1037;
            case 0x15D:
                v221 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 176);
                v11 = v611 + ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v221 + 136) + 120i64) + 784i64) & 0x3FFFFF) << 7);
                goto LABEL_1036;
            case 0x15E:
                v222 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 464i64) + 128i64);
                v11 = ~(v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v222 + 608) + 512i64) + 16i64));
                goto LABEL_1036;
            case 0x15F:
                v611 = v9 - 265520519;
                v223 = a1;
                v611 = v9 - 265520519 + 2098682675 * FuckEnc::CacheRead<_DWORD>(a1 + 888) + 1;
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v223 + 232) + 176i64);
                goto LABEL_1036;
            case 0x160:
                v11 = v9 + 816286924 * FuckEnc::CacheRead<_DWORD>(a1 + 64) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 352i64) + 472i64);
                goto LABEL_1036;
            case 0x161:
                v224 = a1;
                v611 = v9 ^ (448611872 * FuckEnc::CacheRead<_DWORD>(a1 + 888));
                v611 = (v611 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v224 + 376) + 584i64) + 592i64) ^ 0x505DF758)) ^ 0x4B440972;
                goto LABEL_1037;
            case 0x162:
                v225 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 872);
                v11 = v611 + ~(FuckEnc::CacheRead<_DWORD>(v225 + 176) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v225 + 144) + 536i64) + 656i64));
                goto LABEL_1036;
            case 0x163:
                v226 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 872);
                Calls::FastCall(v226 + 392, &v611, v226);
                v611 += ~FuckEnc::CacheRead<_DWORD>(a1 + 888);
                goto LABEL_1037;
            case 0x164:
                v227 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 704) ^ v9;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v227) + 128i64);
                v611 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v227 + 368) + 824i64);
                goto LABEL_1037;
            case 0x165:
                v611 = v9 ^ 0x9148CE68;
                v611 = (v9 ^ 0x9148CE68) - ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 872i64) << 31) | 0x1D);
                goto LABEL_1037;
            case 0x166:
                v611 = (v9 ^ 0x94C55C88) - 1284291532;
                Calls::FastCall(a1 + 544, &v611, a1);
                goto LABEL_1037;
            case 0x167:
                v228 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 280i64) + 296i64);
                Calls::FastCall(v228 + 312, &v611, v228);
                v611 += 1627162259;
                goto LABEL_1037;
            case 0x168:
                Calls::FastCall(a1 + 576, &v611, a1);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 696i64) + 480i64);
                goto LABEL_1037;
            case 0x169:
                v229 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 240) ^ v9 ^ 0x26DE66A7;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v229 + 232) + 8i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v229 + 48) + 888i64);
                goto LABEL_1037;
            case 0x16A:
                v611 = v9 ^ (804872340 * FuckEnc::CacheRead<_DWORD>(a1 + 656) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 816i64) + 520i64) + 144i64) + 128i64));
                goto LABEL_1037;
            case 0x16B:
                v230 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 16);
                v611 -= FuckEnc::CacheRead<_DWORD>(v230 + 320);
                v611 -= FuckEnc::CacheRead<_DWORD>(v230 + 16);
                v11 = v611 + ~FuckEnc::CacheRead<_DWORD>(v230 + 704);
                goto LABEL_1036;
            case 0x16C:
                v231 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 16i64) ^ v9 ^ 0x80331354;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v231 + 768) + 464i64) + 608i64) + 360i64);
                goto LABEL_1037;
            case 0x16D:
                v232 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 368i64) + 472i64);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v232 + 304) + 840i64) + 304i64) + 88i64);
                goto LABEL_1036;
            case 0x16E:
                v233 = a1;
                v611 = v9 ^ (131141288 * FuckEnc::CacheRead<_DWORD>(a1 + 128));
                v11 = ~(v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v233 + 136) + 824i64) + 1449502783);
                goto LABEL_1036;
            case 0x16F:
                v234 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 64) + 127611426;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v234 + 376) + 288i64) + 56i64) + 696i64) + 784i64);
                goto LABEL_1037;
            case 0x170:
                v611 = v9 - ((FuckEnc::CacheRead<_DWORD>(a1 + 656) * (FuckEnc::CacheRead<_DWORD>(a1 + 8) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 552i64))) << 29);
                goto LABEL_1037;
            case 0x171:
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 552i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 48) + 768i64) + 64i64)) ^ 0xF988089D;
                goto LABEL_1037;
            case 0x172:
                Calls::FastCall(a1 + 160, &v611, a1);
                v235 = a1;
                v611 ^= FuckEnc::CacheRead<_DWORD>(a1 + 640);
                v611 -= FuckEnc::CacheRead<_DWORD>(v235 + 640);
                goto LABEL_1037;
            case 0x173:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 464i64) + 72i64) + 288i64) + 80i64, &v611, a1);
                goto LABEL_1037;
            case 0x174:
                v236 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 536i64) + 280i64) + 128i64);
                v611 = v611 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v236) + 8i64) + 1645688207;
                goto LABEL_1037;
            case 0x175:
                v237 = a1;
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 768i64) + 8i64) ^ 0x2F16A3A1);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v237 + 520) + 424i64) + 1;
                goto LABEL_1036;
            case 0x176:
                v238 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 360i64) - 1064350833;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v238 + 536) + 232i64) + 760i64);
                goto LABEL_1037;
            case 0x177:
                v239 = a1;
                v611 = (v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 584i64) + 16i64)) ^ 0xBA48C872;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v239 + 368) + 696i64) + 408i64);
                goto LABEL_1037;
            case 0x178:
                v611 = v9 ^ 0x629A2280;
                v240 = a1;
                v611 = (v9 ^ 0x629A2280) + (FuckEnc::CacheRead<_DWORD>(a1 + 712) ^ 0x9B2A322D);
                v611 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v240 + 520) + 872i64) ^ v611) + 1584784585;
                goto LABEL_1037;
            case 0x179:
                v241 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 376i64) + 296i64);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(v241 + 640) * (FuckEnc::CacheRead<_DWORD>(v241 + 192) & 0xFFFFFFFD);
                goto LABEL_1036;
            case 0x17A:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 48i64) + 600i64) + 280i64) + 488i64, &v611, a1);
                goto LABEL_1037;
            case 0x17B:
                v611 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 752i64) + 536i64) + 704i64) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 176) - 1310898873));
                goto LABEL_1037;
            case 0x17C:
                v611 = (v9 ^ 0x918BB1A2) - 1393363847;
                v611 = (v611 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 640) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 824i64))) - 1653238570;
                goto LABEL_1037;
            case 0x17D:
                v242 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 424);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v242 + 712);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v242 + 600) + 888i64) + 1165744506;
                goto LABEL_1037;
            case 0x17E:
                v611 = (v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 592) + FuckEnc::CacheRead<_DWORD>(a1 + 88) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 248i64))) - 1029550336;
                goto LABEL_1037;
            case 0x17F:
                v15 = ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 528i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 464i64) + 248i64);
                goto LABEL_1035;
            case 0x180:
                v243 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 472);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v243 + 72) + 176i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v243 + 352) + 240i64);
                goto LABEL_1037;
            case 0x181:
                v244 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 784);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v244 + 584) + 664i64, &v611, a1);
                v611 ^= 0x5DC0DDB8u;
                goto LABEL_1037;
            case 0x182:
                v245 = a1;
                v611 = v9 + 2 * FuckEnc::CacheRead<_DWORD>(a1 + 248);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v245 + 816) + 200i64, &v611, a1);
                goto LABEL_1037;
            case 0x183:
                v611 = v9 ^ 0x3A4D2FF0;
                v246 = a1;
                v611 = (v9 ^ 0x3A4D2FF0) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 368i64) + 288i64) + 872i64);
                v11 = v611 - FuckEnc::CacheRead<_DWORD>(v246 + 784);
                goto LABEL_1036;
            case 0x184:
                v611 = ~(v9 - FuckEnc::CacheRead<_DWORD>(a1 + 760) * (FuckEnc::CacheRead<_DWORD>(a1 + 248) - 123589351 * FuckEnc::CacheRead<_DWORD>(a1 + 192)));
                goto LABEL_1037;
            case 0x185:
                v247 = a1;
                v248 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 144) + 712i64) ^ v9;
                goto LABEL_398;
            case 0x186:
                v249 = a1;
                v611 = (FuckEnc::CacheRead<_DWORD>(a1 + 640) ^ v9) - 514532934;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v249 + 56) + 368i64) + 176i64) ^ 0xE81AAB16;
                goto LABEL_1037;
            case 0x187:
                v611 = (_DWORD)0x117C11FF + (v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 288i64) + 136i64) + 816i64) + 824i64) >> 4));
                goto LABEL_1037;
            case 0x188:
                v250 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 320);
                v611 += ~FuckEnc::CacheRead<_DWORD>(v250 + 472);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v250 + 232) + 48i64) + 88i64);
                goto LABEL_1037;
            case 0x189:
                v11 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 408) + FuckEnc::CacheRead<_DWORD>(a1 + 192) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 752i64) + 704i64);
                goto LABEL_1036;
            case 0x18A:
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 304i64) + 288i64) + 296i64) ^ (-1324113642 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 712i64)));
                goto LABEL_1037;
            case 0x18B:
                v251 = a1;
                v611 = v9 - 1926437098 * FuckEnc::CacheRead<_DWORD>(a1 + 656) + 1;
                v11 = FuckEnc::CacheRead<_DWORD>(v251 + 760) ^ v611 ^ 0x8A04AC65;
                goto LABEL_1036;
            case 0x18C:
                v252 = a1;
                v611 = v9 - 1155724011 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 600) + 8i64) - 295682165;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v252 + 512) + 536i64) + 704i64);
                goto LABEL_1037;
            case 0x18D:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 352i64) + 584i64) + 304i64) + 160i64, &v611, a1);
                goto LABEL_1037;
            case 0x18E:
                v611 = v9 ^ 0x19295C2C;
                v253 = a1;
                v611 = (v9 ^ 0x19295C2C) - FuckEnc::CacheRead<_DWORD>(a1 + 872);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v253 + 520) + 304i64) + 72i64) + 640i64);
                goto LABEL_1037;
            case 0x18F:
                v254 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 360i64) ^ v9;
                v611 -= FuckEnc::CacheRead<_DWORD>(v254 + 64);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v254 + 744) + 608i64) + 656i64);
                goto LABEL_1037;
            case 0x190:
                v255 = a1;
                v611 = v9 + 1352091492 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 48) + 656i64);
                v611 = v611 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v255 + 144) + 88i64) + 377272637;
                goto LABEL_1037;
            case 0x191:
                v256 = a1;
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 304i64) + 88i64) ^ 0xB1A97708);
                v611 += FuckEnc::CacheRead<_DWORD>(v256 + 824) - 560560851;
                goto LABEL_1037;
            case 0x192:
                v257 = a1;
                v611 = v9 - ((FuckEnc::CacheRead<_DWORD>(a1 + 704) ^ ~FuckEnc::CacheRead<_DWORD>(a1 + 528)) & 0xFFFFFFFC);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v257 + 640);
                goto LABEL_1037;
            case 0x193:
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 288i64) + 872i64) + FuckEnc::CacheRead<_DWORD>(a1 + 192) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 480i64));
                goto LABEL_1037;
            case 0x194:
                v611 = ~(_DWORD)v9;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 696i64) + 608i64) + 600i64) + 72i64) + 240i64) ^ ~(_DWORD)v9;
                goto LABEL_1037;
            case 0x195:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 464i64) + 520i64) + 224i64, &v611, a1);
                goto LABEL_1037;
            case 0x196:
                v11 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 176) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 304i64) + 304i64) + 304i64) + 16i64);
                goto LABEL_1036;
            case 0x197:
                v258 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 824);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v258 + 824) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v258 + 744) + 744i64) + 752i64) + 88i64);
                goto LABEL_1037;
            case 0x198:
                v259 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 640);
                v611 ^= 1116161051 * FuckEnc::CacheRead<_DWORD>(v259 + 128);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v259 + 72) + 768i64) + 320i64);
                goto LABEL_1037;
            case 0x199:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 376i64) + 536i64) + 768i64) + 72i64) + 872i64) + 1;
                goto LABEL_1037;
            case 0x19A:
                v260 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 88) ^ v9;
                v611 -= 1476721558 * FuckEnc::CacheRead<_DWORD>(v260 + 592);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v260 + 696) + 368i64) + 712i64);
                goto LABEL_1037;
            case 0x19B:
                v261 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 872i64) ^ v9;
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v261 + 768) + 760i64) - 2015857771;
                goto LABEL_1036;
            case 0x19C:
                v262 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 528i64) - 65319904;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v262 + 232) + 824i64) >> 12;
                goto LABEL_1037;
            case 0x19D:
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 136i64) + 424i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 768i64) + 656i64));
                goto LABEL_1037;
            case 0x19E:
                v611 = v9 ^ 0xB182A8ED;
                v263 = a1;
                v611 = (v9 ^ 0xB182A8ED) - FuckEnc::CacheRead<_DWORD>(a1 + 64) + 788084280;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v263 + 376) + 136i64) + 824i64);
                goto LABEL_1037;
            case 0x19F:
                v264 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 192i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v264 + 368) + 72i64) + 696i64) + 472i64);
                goto LABEL_1037;
            case 0x1A0:
                v265 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 408);
                v611 -= FuckEnc::CacheRead<_DWORD>(v265 + 424);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v265 + 480);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v265 + 752) + 712i64);
                goto LABEL_1037;
            case 0x1A1:
                v611 = (v9 - 890253103) ^ 0xD4B4B8BA;
                v266 = a1;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 128i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(v266 + 472) & 0xFFFFFFF4;
                goto LABEL_1037;
            case 0x1A2:
                v611 = v9 + 2002487546;
                v267 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 704) ^ (v9 + 2002487546);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v267 + 304) + 144i64) + 696i64) + 88i64);
                goto LABEL_1036;
            case 0x1A3:
                v611 = (v9 ^ 0x5E776DA6) - 1953983764;
                Calls::FastCall(a1 + 256, &v611, a1);
                v611 -= 1068758078;
                goto LABEL_1037;
            case 0x1A4:
                v268 = a1;
                v611 = v9 + ((FuckEnc::CacheRead<_DWORD>(a1 + 360) - 887009980) | 0x1B) + 1;
                v611 = ~(v611 - (FuckEnc::CacheRead<_DWORD>(v268 + 640) ^ 0x3F63BE01));
                goto LABEL_1037;
            case 0x1A5:
                v269 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 472) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(v269 + 592);
                v11 = v611 + ((((unsigned int)0xD8F5DBF + 1) ^ FuckEnc::CacheRead<_DWORD>(v269 + 784)) & 0xFFFFFFE2 | 9);
                goto LABEL_1036;
            case 0x1A6:
                v270 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 192);
                v611 -= FuckEnc::CacheRead<_DWORD>(v270 + 424);
                Calls::FastCall(v270 + 96, &v611, v270);
                goto LABEL_1037;
            case 0x1A7:
                v271 = a1;
                v611 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 8) ^ 0xF63D8DB7);
                v611 += 1014631989 * FuckEnc::CacheRead<_DWORD>(v271 + 16);
                v11 = FuckEnc::CacheRead<_DWORD>(v271 + 704) ^ v611;
                goto LABEL_1036;
            case 0x1A8:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 464i64) + 56i64) + 288i64) + 696i64) + 608i64) + 872i64) ^ v9;
                goto LABEL_1037;
            case 0x1A9:
                v272 = a1;
                v611 = v9 + 1469901227 * FuckEnc::CacheRead<_DWORD>(a1 + 248);
                v611 += 1998078516 * ((722466684 * FuckEnc::CacheRead<_DWORD>(v272 + 192)) ^ 0xB8A96B53);
                goto LABEL_1037;
            case 0x1AA:
                v611 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 64) | 0xF) * (FuckEnc::CacheRead<_DWORD>(a1 + 176) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 192i64) + 1);
                goto LABEL_1037;
            case 0x1AB:
                v273 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 64i64) + 1;
                v11 = v611 ^ (754302839 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v273 + 512) + 584i64) + 640i64));
                goto LABEL_1036;
            case 0x1AC:
                v274 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 888) * (FuckEnc::CacheRead<_DWORD>(a1 + 640) - 367858654);
                Calls::FastCall(v274 + 200, &v611, v274);
                goto LABEL_1037;
            case 0x1AD:
                v275 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 232i64) + 120i64) + 72i64) + 752i64) + 408i64);
                v11 = v611 - FuckEnc::CacheRead<_DWORD>(v275 + 656);
                goto LABEL_1036;
            case 0x1AE:
                v611 = (unsigned int)0xAAC2182 + v9 + 1;
                v276 = a1;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 176i64);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v276 + 752) + 600i64) + 472i64);
                goto LABEL_1037;
            case 0x1AF:
                v277 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 592i64);
                v611 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v277 + 832) + 288i64) + 536i64) + 296i64);
                goto LABEL_1037;
            case 0x1B0:
                Calls::FastCall(a1 + 544, &v611, a1);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 280i64) + 888i64);
                goto LABEL_1037;
            case 0x1B1:
                v278 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 136i64) + 368i64) + 704i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(v278 + 128) ^ 0x1C974B82;
                goto LABEL_1037;
            case 0x1B2:
                v279 = a1;
                v611 = v9 ^ (-919122552 * FuckEnc::CacheRead<_DWORD>(a1 + 248));
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v279) + 640i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v279 + 584) + 176i64);
                goto LABEL_1037;
            case 0x1B3:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 840) + 280i64) + 376i64) + 752i64) + 376i64) + 72i64) + 144i64) + 480i64);
                goto LABEL_1037;
            case 0x1B4:
                v280 = a1;
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 472) - 1031675705);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v280 + 144) + 376i64) + 752i64) + 888i64) >> 22;
                goto LABEL_1037;
            case 0x1B5:
                v281 = a1;
                v611 = v9 ^ ~(FuckEnc::CacheRead<_DWORD>(a1 + 656) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 424i64));
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v281 + 120) + 248i64);
                goto LABEL_1037;
            case 0x1B6:
                v611 = ~(_DWORD)v9;
                v611 = ~(_DWORD)v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 520i64) + 744i64) + 72i64) + 376i64) + 760i64);
                goto LABEL_1037;
            case 0x1B7:
                v282 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 240) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v282 + 232) + 280i64) + 840i64) + 592i64) ^ 0x40930EBA;
                goto LABEL_1037;
            case 0x1B8:
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 760) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 520i64) + 376i64) + 584i64) + 584i64) + 824i64));
                goto LABEL_1037;
            case 0x1B9:
                v283 = a1;
                v611 = v9 ^ (-622355060 * FuckEnc::CacheRead<_DWORD>(a1 + 656)) ^ (34798853 * FuckEnc::CacheRead<_DWORD>(a1 + 760));
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v283 + 584) + 64i64);
                goto LABEL_1036;
            case 0x1BA:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 832i64) + 744i64) + 584i64) + 752i64) + 584i64) + 536i64) + 592i64);
                goto LABEL_1037;
            case 0x1BB:
                v284 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 552) ^ v9;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v284 + 352) + 136i64) + 376i64) + 248i64) | 0x16;
                goto LABEL_1037;
            case 0x1BC:
                v285 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 48) + 888i64);
                v611 = 631389551 - (v611 - FuckEnc::CacheRead<_DWORD>(v285 + 320));
                v611 += FuckEnc::CacheRead<_DWORD>(v285 + 192);
                goto LABEL_1037;
            case 0x1BD:
                v611 = v9 ^ 0xEC79AB4C;
                v611 = v9 ^ 0xEC79AB4C ^ (FuckEnc::CacheRead<_DWORD>(a1 + 480) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 584i64) + 888i64));
                goto LABEL_1037;
            case 0x1BE:
                v286 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 56i64) + 64i64);
                Calls::FastCall(v286 + 896, &v611, v286);
                v611 = ~v611;
                goto LABEL_1037;
            case 0x1BF:
                v287 = a1;
                v194 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 408) + 63112091;
                v611 = v194;
                v195 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v287 + 744) + 72i64) + 520i64);
            LABEL_316:
                v611 = v194 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v195 + 144) + 192i64);
                goto LABEL_1037;
            case 0x1C0:
                v288 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 536i64) + 232i64) + 192i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v288 + 376) + 408i64);
                goto LABEL_1037;
            case 0x1C1:
                v611 = v9 + 2090878943;
                v611 = (v9 + 2090878943) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 72i64) + 584i64) + 72i64) + 408i64) >> 22);
                goto LABEL_1037;
            case 0x1C2:
                v289 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 832i64) + 136i64) + 56i64) + 824i64) ^ v9;
                v611 += FuckEnc::CacheRead<_DWORD>(v289 + 296);
                goto LABEL_1037;
            case 0x1C3:
                v611 = v9 + 891277019;
                v11 = v9 + 891277019 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 608i64) + 352i64) + 768i64) + 16i64);
                goto LABEL_1036;
            case 0x1C4:
                v11 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 232i64) + 240i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 464i64) + 536i64) + 760i64);
                goto LABEL_1036;
            case 0x1C5:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 536i64) + 280i64) + 48i64) + 840i64) + 704i64);
                goto LABEL_1037;
            case 0x1C6:
                v290 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 8) - 1391172800;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v290) + 784i64);
                v11 = FuckEnc::CacheRead<_DWORD>(v290 + 128) ^ v611;
                goto LABEL_1036;
            case 0x1C7:
                v291 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 48i64) + 296i64) + 2117662886;
                v11 = v611 + 1940505596 - FuckEnc::CacheRead<_DWORD>(v291 + 592);
                goto LABEL_1036;
            case 0x1C8:
                v292 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 296) + 2053174991;
                Calls::FastCall(v292 + 792, &v611, v292);
                goto LABEL_1037;
            case 0x1C9:
                v293 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 712i64) - 850812737;
                v611 = (v611 - 595482246 * (FuckEnc::CacheRead<_DWORD>(v293 + 296) ^ 0x3827D980)) ^ 0x956846F0;
                goto LABEL_1037;
            case 0x1CA:
                v294 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 704) - 2120423067;
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(v294 + 296) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v294 + 752) + 608i64) + 408i64);
                goto LABEL_1036;
            case 0x1CB:
                v611 = v9 - 2077175440;
                v611 = (v9 - 2077175440) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 408) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 48i64) + 752i64) + 16i64));
                goto LABEL_1037;
            case 0x1CC:
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 240) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 176i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 280i64) + 360i64));
                goto LABEL_1037;
            case 0x1CD:
                Calls::FastCall(a1 + 392, &v611, a1);
                v295 = a1;
                v611 -= FuckEnc::CacheRead<_DWORD>(a1 + 472);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v295 + 424);
                goto LABEL_1037;
            case 0x1CE:
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 368i64) + 8i64) ^ (365316873 * FuckEnc::CacheRead<_DWORD>(a1 + 528)));
                goto LABEL_1037;
            case 0x1CF:
                v296 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 536i64) + 136i64) + 128i64);
                v11 = v611 + ~FuckEnc::CacheRead<_DWORD>(v296 + 424);
                goto LABEL_1036;
            case 0x1D0:
                v297 = a1;
                v611 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 760) ^ ~FuckEnc::CacheRead<_DWORD>(a1 + 872));
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v297 + 464) + 304i64) + 872i64);
                goto LABEL_1037;
            case 0x1D1:
                v298 = a1;
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 712i64) ^ (1988526246 * FuckEnc::CacheRead<_DWORD>(a1 + 552)));
                v611 += FuckEnc::CacheRead<_DWORD>(v298 + 824);
                goto LABEL_1037;
            case 0x1D2:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 368i64) + 392i64, &v611, a1);
                v611 += 1793589769;
                goto LABEL_1037;
            case 0x1D3:
                v611 = v9 ^ FuckEnc::CacheRead<_DWORD>(a1 + 88) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 320i64) + FuckEnc::CacheRead<_DWORD>(a1 + 888) - 56939607) ^ 0x6932EEA6;
                goto LABEL_1037;
            case 0x1D4:
                v299 = a1;
                v611 = (v9 ^ ~FuckEnc::CacheRead<_DWORD>(a1 + 656)) + 1194752770;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v299) + 816i64) + 608i64) + 424i64);
                goto LABEL_1037;
            case 0x1D5:
                v300 = a1;
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 424i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 320i64));
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v300 + 520) + 88i64);
                goto LABEL_1037;
            case 0x1D6:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 816i64) + 136i64) + 536i64) + 536i64) + 520i64) + 72i64) + 472i64);
                goto LABEL_1037;
            case 0x1D7:
                v611 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 120i64) + 600i64) + 376i64) + 600i64) + 600i64) + 240i64) ^ v9) + 1329963261;
                goto LABEL_1037;
            case 0x1D8:
                v301 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 784) ^ v9;
                v611 -= FuckEnc::CacheRead<_DWORD>(v301 + 712);
                v611 += FuckEnc::CacheRead<_DWORD>(v301 + 248) ^ 0x8626664C;
                v11 = v611 - FuckEnc::CacheRead<_DWORD>(v301 + 424);
                goto LABEL_1036;
            case 0x1D9:
                v302 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 176) ^ v9;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v302 + 304) + 344i64, &v611, a1);
                goto LABEL_1037;
            case 0x1DA:
                v611 = v9 ^ 0xBADC34ED;
                v611 = (v9 ^ 0xBADC34ED) - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 376i64) + 840i64) + 760i64) | 0xB);
                goto LABEL_1037;
            case 0x1DB:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 288i64) + 656i64) + ((917766209 * FuckEnc::CacheRead<_DWORD>(a1 + 248)) ^ 0x7EA90410);
                goto LABEL_1037;
            case 0x1DC:
                v303 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 176) ^ v9;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v303 + 832) + 608i64) + 48i64) + 136i64) + 72i64) + 760i64);
                goto LABEL_1037;
            case 0x1DD:
                v611 = v9 - 362700018;
                v304 = a1;
                v611 = v9 - 362700018 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 600i64) + 192i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(v304 + 704);
                goto LABEL_1037;
            case 0x1DE:
                v305 = a1;
                v611 = 670577354 - (v9 + FuckEnc::CacheRead<_DWORD>(a1 + 552));
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v305 + 512) + 360i64);
                v11 = v611 - FuckEnc::CacheRead<_DWORD>(v305 + 16);
                goto LABEL_1036;
            case 0x1DF:
                v306 = a1;
                v611 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 248) & 0xFFFFFFEA ^ 0x8E978AE6);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v306 + 48) + 72i64) + 128i64);
                goto LABEL_1037;
            case 0x1E0:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 808i64, &v611, a1);
                v611 ^= FuckEnc::CacheRead<_DWORD>(a1 + 472) ^ 0x6397250E;
                goto LABEL_1037;
            case 0x1E1:
                v307 = a1;
                v611 = (v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 368) + 352i64) + 592i64)) ^ 0xE36F0CF0;
                v611 = v611 - FuckEnc::CacheRead<_DWORD>(v307 + 656) + 1574037919;
                goto LABEL_1037;
            case 0x1E2:
                v308 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 192) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(v308 + 296);
                v611 ^= ~(1930043895 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v308 + 600) + 240i64));
                goto LABEL_1037;
            case 0x1E3:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 376i64) + 320i64) * (~FuckEnc::CacheRead<_DWORD>(a1 + 888) | 0x12);
                goto LABEL_1037;
            case 0x1E4:
                v15 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 72i64) + 16i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 56i64) + 320i64);
                goto LABEL_1035;
            case 0x1E5:
                v309 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 248);
                v611 -= FuckEnc::CacheRead<_DWORD>(v309 + 472) * ((unsigned int)~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v309 + 696) + 360i64) >> 6);
                goto LABEL_1037;
            case 0x1E6:
                v611 = v9 - 1057860962;
                v611 = (v9 - 1057860962) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 712i64) ^ (408357013 * (FuckEnc::CacheRead<_DWORD>(a1 + 592) ^ 0x5F16A29F));
                goto LABEL_1037;
            case 0x1E7:
                Calls::FastCall(a1 + 720, &v611, a1);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 288i64) + 640i64);
                goto LABEL_1037;
            case 0x1E8:
                v310 = a1;
                v611 = (v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 144) + 888i64)) ^ 0x63BDEA5F;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v310 + 840) + 768i64) + 288i64) + 704i64);
                goto LABEL_1037;
            case 0x1E9:
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 280i64) + 176i64) * (-1359718162 - 1242591473 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 600) + 128i64)));
                goto LABEL_1037;
            case 0x1EA:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 232i64) + 824i64) * (FuckEnc::CacheRead<_DWORD>(a1 + 824) - 1907885807);
                goto LABEL_1037;
            case 0x1EB:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 288i64) + 280i64) + 752i64) + 872i64) - 1886126172 * FuckEnc::CacheRead<_DWORD>(a1 + 408);
                goto LABEL_1037;
            case 0x1EC:
                v611 = v9 + 2094102986;
                v611 = (v9 + 2094102986) ^ ((FuckEnc::CacheRead<_DWORD>(a1 + 480) | 7) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 512i64) + 712i64));
                goto LABEL_1037;
            case 0x1ED:
                v311 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 232i64) + 712i64) ^ v9 ^ 0xAC2810F5;
                v611 += 1156633844 * FuckEnc::CacheRead<_DWORD>(v311 + 424) + 1;
                goto LABEL_1037;
            case 0x1EE:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(a1 + 368) + 224i64, &v611, a1);
                v611 += (int)0x14086812;
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(a1 + 192);
                goto LABEL_1036;
            case 0x1EF:
                v11 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 768i64) + 320i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 840i64) + 712i64));
                goto LABEL_1036;
            case 0x1F0:
                v312 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 768i64) + 136i64) + 872i64) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v312 + 840) + 296i64);
                goto LABEL_1037;
            case 0x1F1:
                v11 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 128) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 72i64) + 408i64) - FuckEnc::CacheRead<_DWORD>(a1 + 16) + 1;
                goto LABEL_1036;
            case 0x1F2:
                v313 = a1;
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 248i64) - 822137242);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v313 + 176);
                v611 -= FuckEnc::CacheRead<_DWORD>(v313 + 824);
                goto LABEL_1037;
            case 0x1F3:
                v314 = a1;
                LODWORD(v9) = ~(v9 - FuckEnc::CacheRead<_DWORD>(a1 + 192));
                v611 = v9;
                v15 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v314 + 600) + 120i64) + 64i64) + 1468846820;
                goto LABEL_1035;
            case 0x1F4:
                v611 = v9 ^ ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 64i64) >> 12) - FuckEnc::CacheRead<_DWORD>(a1 + 472) + 1252039361);
                goto LABEL_1037;
            case 0x1F5:
                v15 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 752i64) + 760i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 696i64) + 520i64) + 128i64);
                goto LABEL_1035;
            case 0x1F6:
                v611 = v9 ^ 0xB31A3424;
                v611 = (v9 ^ 0xB31A3424) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 288i64) + 144i64) + 376i64) + 120i64) + 712i64);
                goto LABEL_1037;
            case 0x1F7:
                v315 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 352i64) + 360i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v315 + 56) + 840i64) + 176i64);
                goto LABEL_1037;
            case 0x1F8:
                v316 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 296) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v316 + 144) + 72i64) + 304i64) + 280i64) + 368i64) + 528i64);
                goto LABEL_1037;
            case 0x1F9:
                v317 = a1;
                v611 = v9 + 2107006893 * FuckEnc::CacheRead<_DWORD>(a1 + 472) * FuckEnc::CacheRead<_DWORD>(a1 + 592);
                v611 += FuckEnc::CacheRead<_DWORD>(v317 + 240) + 1;
                goto LABEL_1037;
            case 0x1FA:
                v318 = a1;
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 296i64) * (FuckEnc::CacheRead<_DWORD>(a1 + 824) - 1602388702));
                v611 -= FuckEnc::CacheRead<_DWORD>(v318 + 656) ^ 0x6E8A3A40;
                goto LABEL_1037;
            case 0x1FB:
                v319 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 16);
                v611 ^= ~FuckEnc::CacheRead<_DWORD>(v319 + 704);
                v11 = v611 + (FuckEnc::CacheRead<_DWORD>(v319 + 592) >> 22);
                goto LABEL_1036;
            case 0x1FC:
                v320 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 368i64) + 368i64) + 520i64) + 248i64) ^ v9;
                v11 = v611 + ~FuckEnc::CacheRead<_DWORD>(v320 + 552);
                goto LABEL_1036;
            case 0x1FD:
                v321 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 824);
                v11 = v611 + (FuckEnc::CacheRead<_DWORD>(v321 + 88) ^ 0xD6E828D0) - 1212495088;
                goto LABEL_1036;
            case 0x1FE:
                v322 = a1;
                v611 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 176) | 0x1A);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v322 + 48) + 768i64) + 192i64) ^ 0x2CE74C73;
                goto LABEL_1037;
            case 0x1FF:
                v323 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 528) ^ v9;
                v611 -= FuckEnc::CacheRead<_DWORD>(v323 + 320);
                v611 = v611 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v323 + 288) + 120i64) + 760i64) + 1162869736;
                goto LABEL_1037;
            case 0x200:
                v324 = a1;
                v611 = v9 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 640i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v324 + 376) + 608i64) + 64i64);
                goto LABEL_1037;
            case 0x201:
                v611 = v9 - 1059842758;
                v325 = a1;
                v611 = v9 - 1059842758 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 704i64);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v325 + 368) + 368i64) + 16i64);
                goto LABEL_1037;
            case 0x202:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 144i64) + 232i64) + 488i64, &v611, a1);
                goto LABEL_1037;
            case 0x203:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 752i64) + 464i64) + 776i64, &v611, a1);
                goto LABEL_1037;
            case 0x204:
                v326 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 352i64) + 712i64) + 1;
                v11 = (v611 ^ (FuckEnc::CacheRead<_DWORD>(v326 + 296) - 81482303)) + 431097618;
                goto LABEL_1036;
            case 0x205:
                Calls::FastCall(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 464i64) + 624i64, &v611, a1);
                goto LABEL_1037;
            case 0x206:
                v11 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 520i64) + 232i64) + 816i64) + 832i64) + 304i64) + 760i64);
                goto LABEL_1036;
            case 0x207:
                v611 = (v9 ^ 0xBC6F19BA) - 779930311;
                v327 = a1;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 872i64);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v327 + 248) ^ 0x113BDA6E;
                goto LABEL_1037;
            case 0x208:
                v611 = v9 + 874903615;
                v328 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 584i64) + 472i64) ^ (v9 + 874903615);
                v11 = v611 + ~FuckEnc::CacheRead<_DWORD>(v328 + 88);
                goto LABEL_1036;
            case 0x209:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 120i64) + 48i64) + 312i64, &v611, a1);
                v611 ^= 0xCCC35AB3;
                goto LABEL_1037;
            case 0x20A:
                v329 = a1;
                v611 = v9 ^ (1699658577 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 824i64));
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v329 + 464) + 512i64) + 320i64);
                goto LABEL_1037;
            case 0x20B:
                v330 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 8) ^ v9;
                v11 = v611 + ((unsigned int)0xF25FE06 ^ FuckEnc::CacheRead<_DWORD>(v330 + 424)) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v330 + 752) + 192i64) - 1963119488;
                goto LABEL_1036;
            case 0x20C:
                v331 = a1;
                v611 = v9 + 229787630 * FuckEnc::CacheRead<_DWORD>(a1 + 128);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v331 + 288) + 8i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(v331 + 872);
                goto LABEL_1037;
            case 0x20D:
                v332 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 424i64);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v332 + 584) + 72i64) + 816i64) + 376i64) + 888i64);
                goto LABEL_1037;
            case 0x20E:
                v611 = (v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 608i64) + 840i64) + 368i64) + 144i64) + 120i64) + 128i64)) ^ 0xA0CF02B5;
                goto LABEL_1037;
            case 0x20F:
                v333 = a1;
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 552) ^ 0x924D820B);
                v611 += (-695827238 * FuckEnc::CacheRead<_DWORD>(v333 + 592)) ^ 0xB0A2028D;
                v611 += FuckEnc::CacheRead<_DWORD>(v333 + 248);
                goto LABEL_1037;
            case 0x210:
                v15 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 600) + 136i64) + 136i64) + 144i64) + 744i64) + 296i64) - 1820811169;
                goto LABEL_1035;
            case 0x211:
                v334 = a1;
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 704) ^ 0x9328D6B7);
                v611 -= 1993329397 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v334 + 584) + 232i64) + 144i64) + 528i64);
                goto LABEL_1037;
            case 0x212:
                v335 = a1;
                v611 = v9 - 962095404 * FuckEnc::CacheRead<_DWORD>(a1 + 472) + 1;
                v11 = v611 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v335 + 768) + 56i64) + 240i64) << 25);
                goto LABEL_1036;
            case 0x213:
                v336 = a1;
                v611 = (v9 ^ ~FuckEnc::CacheRead<_DWORD>(a1 + 784)) - 1628200778;
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v336 + 144) + 600i64) + 248i64);
                goto LABEL_1036;
            case 0x214:
                v337 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 192);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v337 + 304) + 752i64) + 608i64) + 280i64) + 192i64);
                goto LABEL_1037;
            case 0x215:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 376i64) + 768i64) + 280i64) + 120i64) + 744i64) + 584i64) + 176i64) ^ v9;
                goto LABEL_1037;
            case 0x216:
                v338 = a1;
                v611 = (unsigned int)0x11F0C247 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 48) + 528i64) ^ v9);
                v611 = v611 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v338 + 816) + 816i64) + 480i64) + 271710937;
                goto LABEL_1037;
            case 0x217:
                v339 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 360);
                v611 += FuckEnc::CacheRead<_DWORD>(v339 + 296);
                v11 = v611 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v339 + 608) + 520i64) + 480i64) >> 7);
                goto LABEL_1036;
            case 0x218:
                v340 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 816i64) + 240i64);
                v611 = ~(v611 - (FuckEnc::CacheRead<_DWORD>(v340 + 656) & 0xFFFFFFE1) + 1927475339);
                goto LABEL_1037;
            case 0x219:
                v341 = a1;
                v611 = (FuckEnc::CacheRead<_DWORD>(a1 + 248) ^ v9) - 1159168221;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v341 + 608) + 72i64) + 192i64) | 2;
                goto LABEL_1037;
            case 0x21A:
                v342 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 16i64) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 320i64) + v9;
                v11 = FuckEnc::CacheRead<_DWORD>(v342 + 784) ^ v611;
                goto LABEL_1036;
            case 0x21B:
                v343 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 424);
                v611 = (v611 + FuckEnc::CacheRead<unsigned __int16>(v343 + 874)) ^ 0x54A88666;
                v11 = v611 ^ ~FuckEnc::CacheRead<_DWORD>(v343 + 8);
                goto LABEL_1036;
            case 0x21C:
                v611 = v9 + 1356327680;
                v611 = (v9 + 1356327680) ^ ~((FuckEnc::CacheRead<_DWORD>(a1 + 248) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 176i64)) ^ 0x552B0432);
                goto LABEL_1037;
            case 0x21D:
                v247 = a1;
                v248 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 608i64) + 656i64);
                goto LABEL_398;
            case 0x21E:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 840i64) + 352i64) + 816i64) + 352i64) + 512i64) + 8i64);
                goto LABEL_1037;
            case 0x21F:
                v11 = (v9 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 144) + 816i64) + 584i64) + 48i64) + 280i64) + 240i64)) + 1032460525;
                goto LABEL_1036;
            case 0x220:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 48) + 120i64) + 312i64, &v611, a1);
                v611 ^= FuckEnc::CacheRead<_DWORD>(a1 + 784);
                goto LABEL_1037;
            case 0x221:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 304i64) + 512i64) + 304i64) + 392i64, &v611, a1);
                goto LABEL_1037;
            case 0x222:
                v344 = a1;
                v611 = (FuckEnc::CacheRead<_DWORD>(a1 + 712) ^ v9) - 345985961;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v344 + 512) + 128i64);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v344 + 752) + 656i64);
                goto LABEL_1036;
            case 0x223:
                v345 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 760);
                v11 = v611 ^ (355606687 * FuckEnc::CacheRead<_DWORD>(v345 + 656) - 1905666789 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v345 + 304) + 16i64));
                goto LABEL_1036;
            case 0x224:
                v15 = -149731485 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 8i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 512i64) + 408i64);
                goto LABEL_1035;
            case 0x225:
                v346 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 128) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(v346 + 888) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v346 + 584) + 368i64) + 120i64) + 64i64);
                goto LABEL_1037;
            case 0x226:
                v347 = a1;
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 320) | 0x19);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v347 + 512) + 752i64) + 584i64) + 464i64) + 640i64);
                goto LABEL_1037;
            case 0x227:
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 840i64) + 608i64) + 16i64) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 784i64) & 0xFFFFFFF7));
                goto LABEL_1037;
            case 0x228:
                v348 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 656) ^ v9 ^ 0x7B67569C;
                v611 ^= FuckEnc::CacheRead<_DWORD>(v348 + 784);
                v11 = v611 + ~FuckEnc::CacheRead<_DWORD>(v348 + 424);
                goto LABEL_1036;
            case 0x229:
                v349 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 72i64) + 352i64) + 888i64);
                v611 -= 1835786826 * FuckEnc::CacheRead<_DWORD>(v349 + 408);
                goto LABEL_1037;
            case 0x22A:
                v350 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 8) ^ v9;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v350 + 840) + 280i64) + 512i64) + 584i64) + 584i64) + 16i64);
                goto LABEL_1037;
            case 0x22B:
                v15 = FuckEnc::CacheRead<_DWORD>(a1 + 888) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 120i64) + 48i64) + 840i64) + 640i64);
                goto LABEL_1035;
            case 0x22C:
                v170 = a1;
                v171 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 368i64) + 296i64) ^ v9;
            LABEL_277:
                v611 = v171;
                Calls::FastCall(v170 + 328, &v611, v170);
                goto LABEL_1037;
            case 0x22D:
                v611 = v9 ^ 0x5FBB355A;
                v351 = a1;
                v611 = (v9 ^ 0x5FBB355A) - FuckEnc::CacheRead<_DWORD>(a1 + 872);
                v611 = ~(v611 + (FuckEnc::CacheRead<_DWORD>(v351 + 8) & 0xFFFFFFE4)) - ((_DWORD)0xB403533 + 3);
                goto LABEL_1037;
            case 0x22E:
                v11 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 752i64) + 232i64) + 464i64) + 280i64) + 144i64) + 408i64);
                goto LABEL_1036;
            case 0x22F:
                v352 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 480) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(v352 + 528);
                Calls::FastCall(v352 + 920, &v611, v352);
                goto LABEL_1037;
            case 0x230:
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 8) * ((FuckEnc::CacheRead<_DWORD>(a1 + 320) | 0xE) ^ (1323761145 * FuckEnc::CacheRead<_DWORD>(a1 + 872)) & 0xFFFFFFFE));
                goto LABEL_1037;
            case 0x231:
                v15 = 1107976140 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 352i64) + 360i64) * (FuckEnc::CacheRead<_DWORD>(a1 + 360) & 0xFFFFFFF5);
                goto LABEL_1035;
            case 0x232:
                v611 = v9 + 373825960;
                v611 = (v9 + 373825960) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 360) | 2) ^ FuckEnc::CacheRead<_DWORD>(a1 + 656) & 0xFFFFFFE5;
                goto LABEL_1037;
            case 0x233:
                v353 = a1;
                LODWORD(v9) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 232i64) + 144i64) + 592i64) ^ v9;
                v611 = v9;
                v15 = 2045970574 * FuckEnc::CacheRead<_DWORD>(v353 + 64);
                goto LABEL_1035;
            case 0x234:
                v354 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 600) + 552i64) ^ v9;
                v611 += (_DWORD)0xE75E7BB + FuckEnc::CacheRead<_DWORD>(v354 + 704);
                v611 -= FuckEnc::CacheRead<_DWORD>(v354 + 88);
                goto LABEL_1037;
            case 0x235:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 56i64) + 752i64) + 344i64, &v611, a1);
                v611 += 1191076007;
                goto LABEL_1037;
            case 0x236:
                v355 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 128);
                v611 = (v611 + ((~FuckEnc::CacheRead<_DWORD>(v355 + 64) | 0x1D) ^ 0x22BE9F09)) ^ 0x6124E02B;
                goto LABEL_1037;
            case 0x237:
                v356 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 368) + 608i64) + 240i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v356 + 120) + 512i64) + 840i64) + 592i64);
                goto LABEL_1037;
            case 0x238:
                v611 = 1261372641 - v9;
                v611 = 1261372641 - v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 48) + 536i64) + 584i64) + 696i64) + 824i64);
                goto LABEL_1037;
            case 0x239:
                v357 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 552);
                v611 -= FuckEnc::CacheRead<_DWORD>(v357 + 472);
                v611 = (v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v357) + 64i64)) ^ 0x6E285EDD;
                goto LABEL_1037;
            case 0x23A:
                v358 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 368i64) + 512i64) + 464i64) + 824i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(v358 + 88);
                goto LABEL_1037;
            case 0x23B:
                v359 = a1;
                v611 = v9 ^ ~(-1255082492 * FuckEnc::CacheRead<_DWORD>(a1 + 8));
                v611 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v359 + 536) + 832i64) + 240i64) ^ v611) - 366289036;
                goto LABEL_1037;
            case 0x23C:
                v611 = v9 - 1936599335;
                v11 = (v9 - 1936599335) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 232i64) + 760i64) * ~FuckEnc::CacheRead<_DWORD>(a1 + 656));
                goto LABEL_1036;
            case 0x23D:
                v360 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 520i64) + 240i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(v360 + 480);
                v611 -= FuckEnc::CacheRead<_DWORD>(v360 + 64);
                goto LABEL_1037;
            case 0x23E:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 144i64) + 840i64) + 744i64) + 280i64) + 464i64) + 512i64) + 872i64);
                goto LABEL_1037;
            case 0x23F:
                v361 = a1;
                v611 = (FuckEnc::CacheRead<_DWORD>(a1 + 704) ^ v9) - 296492012;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v361 + 816) + 296i64) * ~FuckEnc::CacheRead<_DWORD>(v361 + 16);
                goto LABEL_1037;
            case 0x240:
                Calls::FastCall(a1 + 24, &v611, a1);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 512i64) + 176i64);
                goto LABEL_1037;
            case 0x241:
                v362 = a1;
                v611 = v9 + 16 * FuckEnc::CacheRead<_DWORD>(a1 + 64);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v362 + 352) + 520i64) + 232i64) + 592i64);
                goto LABEL_1037;
            case 0x242:
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 472i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 424i64)) - FuckEnc::CacheRead<_DWORD>(a1 + 784) + 1348207920;
                goto LABEL_1037;
            case 0x243:
                v363 = a1;
                v611 = (v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 472i64)) ^ 0xD1795377;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v363 + 536) + 584i64) + 8i64);
                goto LABEL_1037;
            case 0x244:
                v364 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 600) + 832i64) + 656i64) ^ v9;
                v611 = v611 - FuckEnc::CacheRead<_DWORD>(v364 + 64) - 1817444760;
                goto LABEL_1037;
            case 0x245:
                v365 = a1;
                v611 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 760i64) ^ 0xCF5F6BB7) + 1;
                v611 += FuckEnc::CacheRead<_DWORD>(v365 + 16);
                goto LABEL_1037;
            case 0x246:
                v366 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 752i64) + 784i64) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v366 + 72) + 832i64) + 512i64) + 656i64);
                goto LABEL_1037;
            case 0x247:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 280) + 304i64) + 600i64) + 776i64, &v611, a1);
                goto LABEL_1037;
            case 0x248:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 584i64) + 832i64) + 280i64) + 368i64) + 512i64) + 696i64) + 760i64);
                goto LABEL_1037;
            case 0x249:
                v367 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 592);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v367 + 352) + 248i64) ^ 0x1C9BB84B;
                v611 -= FuckEnc::CacheRead<_DWORD>(v367 + 128) ^ 0x99170B96;
                goto LABEL_1037;
            case 0x24A:
                v368 = a1;
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 640) + 906108218);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v368) + 472i64) - 37266355;
                goto LABEL_1036;
            case 0x24B:
                v369 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 8) ^ v9;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v369 + 744) + 136i64) + 872i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v369 + 464) + 240i64);
                goto LABEL_1037;
            case 0x24C:
                v370 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 240);
                v611 = (v611 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v370 + 280) + 744i64) + 376i64) + 472i64) & 0xFFFFFFE3)) ^ 0xF62EE78D;
                goto LABEL_1037;
            case 0x24D:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 752i64) + 752i64) + 280i64) + 232i64) + 48i64) + 832i64) + 240i64) ^ v9;
                goto LABEL_1037;
            case 0x24E:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 760i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 368i64) + 744i64) + 592i64);
                goto LABEL_1037;
            case 0x24F:
                v611 = v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 784i64) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 368i64) + 528i64);
                goto LABEL_1037;
            case 0x250:
                v371 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 656) - 302156808;
                v11 = v611 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v371 + 512) + 352i64) + 472i64);
                goto LABEL_1036;
            case 0x251:
                v11 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 888) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 600) + 760i64) * (FuckEnc::CacheRead<_DWORD>(a1 + 528) + 1) - 1763874164;
                goto LABEL_1036;
            case 0x252:
                v372 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 592) ^ v9;
                v611 -= FuckEnc::CacheRead<_DWORD>(v372 + 552);
                Calls::FastCall(v372 + 200, &v611, v372);
                goto LABEL_1037;
            case 0x253:
                v15 = FuckEnc::CacheRead<_DWORD>(a1 + 88) * (FuckEnc::CacheRead<_DWORD>(a1 + 408) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 768i64) + 824i64));
                goto LABEL_1035;
            case 0x254:
                v373 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 64i64);
                v11 = v611 + ((FuckEnc::CacheRead<_DWORD>(v373 + 240) + 1) << 15);
                goto LABEL_1036;
            case 0x255:
                v374 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 128);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v374 + 368) + 536i64) + 776i64, &v611, a1);
                goto LABEL_1037;
            case 0x256:
                v375 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 600) + 744i64) + 536i64) + 608i64) + 592i64) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v375 + 120) + 872i64);
                goto LABEL_1037;
            case 0x257:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 120i64) + 512i64) + 288i64) + 376i64) + 376i64) + 72i64) + 824i64);
                goto LABEL_1037;
            case 0x258:
                v376 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 744) + 8i64) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v376) + 368i64) + 832i64) + 640i64);
                goto LABEL_1037;
            case 0x259:
                v377 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 872i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v377 + 352) + 600i64) + 368i64) + 744i64) + 592i64);
                goto LABEL_1037;
            case 0x25A:
                v378 = a1;
                v611 = v9 + ~(FuckEnc::CacheRead<_DWORD>(a1 + 712) | 0x1D);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v378 + 512) + 144i64) + 144i64) + 192i64);
                goto LABEL_1037;
            case 0x25B:
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 472) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 304) + 768i64) + 352i64) + 280i64) + 16i64));
                goto LABEL_1037;
            case 0x25C:
                v611 = (unsigned int)0x1094D2E6 + v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(a1 + 424) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 600i64) + 352i64) + 472i64);
                goto LABEL_1037;
            case 0x25D:
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 824) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 408i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 768i64) + 704i64));
                goto LABEL_1037;
            case 0x25E:
                v379 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 840) + 872i64) + 525434950;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v379 + 840) + 816i64) + 128i64);
                goto LABEL_1037;
            case 0x25F:
                v380 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 640i64);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v380 + 784) ^ 0x1376D9;
                v11 = v611 + 1015141692 * FuckEnc::CacheRead<_DWORD>(v380 + 192);
                goto LABEL_1036;
            case 0x260:
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 304i64) + 56i64) + 352i64) + 464i64) + 88i64) | 0x12);
                goto LABEL_1037;
            case 0x261:
                v381 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 816i64) + 528i64) ^ v9;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v381 + 696) + 536i64) + 640i64) + 1;
                goto LABEL_1037;
            case 0x262:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 56i64) + 224i64, &v611, a1);
                v611 ^= FuckEnc::CacheRead<_DWORD>(a1 + 592);
                goto LABEL_1037;
            case 0x263:
                v382 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 712);
                v611 += FuckEnc::CacheRead<_DWORD>(v382 + 240);
                v11 = ~((v611 ^ (FuckEnc::CacheRead<_DWORD>(v382 + 8) - 1494304122)) + 1050433306);
                goto LABEL_1036;
            case 0x264:
                v167 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 424) ^ v9;
                v168 = FuckEnc::CacheRead<_DWORD>(v167 + 640) ^ v611;
            LABEL_273:
                v611 = v168;
                Calls::FastCall(v167 + 664, &v611, v167);
                goto LABEL_1037;
            case 0x265:
                v383 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 872i64);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v383 + 368) + 424i64) & 0xFFFFFFF3 ^ 0x354338E5;
                goto LABEL_1037;
            case 0x266:
                v384 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 744i64) + 536i64) + 712i64) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v384 + 376) + 824i64);
                goto LABEL_1037;
            case 0x267:
                v611 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 136i64) + 72i64) + 48i64) + 584i64) + 72i64) + 248i64);
                goto LABEL_1037;
            case 0x268:
                v385 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 48) + 248i64);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(v385 + 824) + ((FuckEnc::CacheRead<_DWORD>(v385 + 712) - 1137905428) | 0x1F);
                goto LABEL_1036;
            case 0x269:
                v386 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 192);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v386 + 232) + 48i64) + 80i64, &v611, a1);
                goto LABEL_1037;
            case 0x26A:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 840) + 536i64) + 72i64) + 600i64) + 584i64) + 768i64) + 832i64) + 16i64);
                goto LABEL_1037;
            case 0x26B:
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 408) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 368i64) + 120i64) + 512i64) + 232i64) + 472i64));
                goto LABEL_1037;
            case 0x26C:
                v387 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 48i64) + 760i64) ^ v9 ^ 0x6D4E2B6F;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v387 + 608) + 136i64) + 248i64);
                goto LABEL_1037;
            case 0x26D:
                v15 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 816i64) + 832i64) + 520i64) + 744i64) + 592i64) - 933286002;
                goto LABEL_1035;
            case 0x26E:
                v388 = a1;
                v611 = v9 + ~((unsigned int)0x12D9B9A5 ^ FuckEnc::CacheRead<_DWORD>(a1 + 640));
                v611 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v388 + 696) + 88i64);
                goto LABEL_1037;
            case 0x26F:
                v611 = v9 - 1882682023;
                v11 = ((v9 - 1882682023) ^ (1153685775 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 376i64) + 144i64) + 472i64))) - 1198062556;
                goto LABEL_1036;
            case 0x270:
                v611 = v9 + 1639311541 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 840) + 64i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 72i64) + 56i64) + 712i64);
                goto LABEL_1037;
            case 0x271:
                v389 = a1;
                v611 = (v9 - FuckEnc::CacheRead<_DWORD>(a1 + 176)) ^ 0x1A48BBA2;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v389 + 56) + 352i64) + 768i64) + 744i64) + 424i64);
                goto LABEL_1037;
            case 0x272:
                v11 = ~(v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 304i64) + 584i64) + 144i64) + 120i64) + 320i64) ^ 0xBC0B0D25));
                goto LABEL_1036;
            case 0x273:
                v15 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 840) + 232i64) + 552i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 696i64) + 240i64);
                goto LABEL_1035;
            case 0x274:
                v611 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 704) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 768i64) + 752i64) + 528i64) ^ 0x92892A9A);
                goto LABEL_1037;
            case 0x275:
                v390 = a1;
                v611 = ((v9 + FuckEnc::CacheRead<_DWORD>(a1 + 784)) ^ 0x7E1F19FF) - 416733177;
                v611 -= FuckEnc::CacheRead<_DWORD>(v390 + 552);
                v11 = v611 + (FuckEnc::CacheRead<_DWORD>(v390 + 360) | 0xA);
                goto LABEL_1036;
            case 0x276:
                v11 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 608i64) + 816i64) + 120i64) + 696i64) + 472i64) ^ 0x6637E399);
                goto LABEL_1036;
            case 0x277:
                v391 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 872i64) ^ v9;
                v611 += FuckEnc::CacheRead<_DWORD>(v391 + 408);
                v11 = v611 ^ (FuckEnc::CacheRead<_DWORD>(v391 + 408) - 1225792997);
                goto LABEL_1036;
            case 0x278:
                Calls::FastCall(a1 + 896, &v611, a1);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 840i64) + 824i64);
                goto LABEL_1037;
            case 0x279:
                v392 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 472);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v392 + 376) + 536i64) + 832i64) + 840i64) + 584i64) + 64i64);
                goto LABEL_1037;
            case 0x27A:
                v393 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 8i64) + 1;
                Calls::FastCall(v393 + 256, &v611, v393);
                goto LABEL_1037;
            case 0x27B:
                v394 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 192) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v394 + 72) + 64i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v394 + 368) + 248i64);
                goto LABEL_1037;
            case 0x27C:
                v395 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 704);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v395 + 872) ^ 0xBE69E794;
                v11 = v611 + (FuckEnc::CacheRead<_DWORD>(v395 + 704) & 0xFFFFFFFE);
                goto LABEL_1036;
            case 0x27D:
                Calls::FastCall(a1 + 344, &v611, a1);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 16i64) ^ 0x7C0D970A;
                goto LABEL_1037;
            case 0x27E:
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 760) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 408) + (FuckEnc::CacheRead<_DWORD>(a1 + 16) << 23)));
                goto LABEL_1037;
            case 0x27F:
                v396 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 480) ^ v9;
                v611 += 106506693 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v396 + 48) + 72i64) + 464i64) + 240i64);
                goto LABEL_1037;
            case 0x280:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 288i64) + 768i64) + 664i64, &v611, a1);
                goto LABEL_1037;
            case 0x281:
                v397 = a1;
                v611 = (v9 ^ FuckEnc::CacheRead<_DWORD>(a1 + 480) & 0xFFFFFFF7) - 1859419440;
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v397 + 696) + 8i64) + 1;
                goto LABEL_1036;
            case 0x282:
                v611 = v9 - 1348478032;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 144i64) + 688i64, &v611, a1);
                goto LABEL_1037;
            case 0x283:
                v398 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 248);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v398 + 584) + 608i64) + 512i64) + 64i64) | 0x1E;
                goto LABEL_1037;
            case 0x284:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 56i64) + 368i64) + 120i64) + 280i64) + 56i64) + 72i64) + 528i64);
                goto LABEL_1037;
            case 0x285:
                v11 = v9 ^ FuckEnc::CacheRead<_DWORD>(a1 + 64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 816i64) + 512i64) + 840i64) + 640i64) ^ 0x4659EA63;
                goto LABEL_1036;
            case 0x286:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 520i64) + 136i64) + 232i64) + 432i64, &v611, a1);
                goto LABEL_1037;
            case 0x287:
                v611 = v9 + 1370542665;
                v399 = a1;
                v611 = v9 + 1370542665 + 4 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 232i64) + 8i64);
                v611 += FuckEnc::CacheRead<_DWORD>(v399 + 640);
                goto LABEL_1037;
            case 0x288:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 520i64) + 304i64) + 768i64) + 376i64) + 352i64) + 240i64);
                goto LABEL_1037;
            case 0x289:
                v611 = v9 + 1136217394;
                v400 = a1;
                v611 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 472i64) ^ (v9 + 1136217394));
                v611 = ~(v611 - FuckEnc::CacheRead<_DWORD>(v400 + 712));
                goto LABEL_1037;
            case 0x28A:
                LODWORD(v9) = v9 ^ 0x37E781B1;
                v611 = v9;
                v15 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 840i64) + 248i64) * ~FuckEnc::CacheRead<_DWORD>(a1 + 320);
                goto LABEL_1035;
            case 0x28B:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 120i64) + 72i64) + 288i64) + 768i64) + 600i64) + 88i64);
                goto LABEL_1037;
            case 0x28C:
                v611 = v9 - ((FuckEnc::CacheRead<_DWORD>(a1 + 888) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 48i64) + 376i64) + 520i64) + 248i64)) << 21);
                goto LABEL_1037;
            case 0x28D:
                v611 = (v9 + 1285477405) ^ 0x35058E2B;
                v11 = v611 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 232i64) + 464i64) + 480i64) & 0xFFFFFFEA);
                goto LABEL_1036;
            case 0x28E:
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 520i64) + 176i64) ^ (756599717 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 472i64)));
                goto LABEL_1037;
            case 0x28F:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 376i64) + 368i64) + 536i64) + 232i64) + 144i64) + 8i64) ^ v9;
                goto LABEL_1037;
            case 0x290:
                v401 = a1;
                LODWORD(v9) = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 248);
                v611 = v9;
                v15 = FuckEnc::CacheRead<_DWORD>(v401 + 88) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v401 + 768) + 512i64) + 360i64);
                goto LABEL_1035;
            case 0x291:
                v402 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 656);
                v11 = v611 + (FuckEnc::CacheRead<_DWORD>(v402 + 192) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v402 + 304) + 8i64)) - 1863748639;
                goto LABEL_1036;
            case 0x292:
                v403 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 760) + 1209295149;
                v611 ^= FuckEnc::CacheRead<_DWORD>(v403 + 128);
                v11 = FuckEnc::CacheRead<_DWORD>(v403 + 64) ^ v611;
                goto LABEL_1036;
            case 0x293:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 832i64) + 768i64) + 512i64) + 368i64) + 144i64) + 320i64) ^ v9;
                goto LABEL_1037;
            case 0x294:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 136i64) + 832i64) + 664i64, &v611, a1);
                v611 += 1027403847;
                goto LABEL_1037;
            case 0x295:
                v404 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 128);
                v611 ^= 177686735 * FuckEnc::CacheRead<_DWORD>(v404 + 528);
                v11 = (v611 - FuckEnc::CacheRead<_DWORD>(v404 + 16)) ^ 0x504B2C01;
                goto LABEL_1036;
            case 0x296:
                v611 = v9 + 1258160744;
                v405 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 296) ^ (v9 + 1258160744);
                v611 = (FuckEnc::CacheRead<_DWORD>(v405 + 592) ^ v611) - 444560447;
                v611 ^= FuckEnc::CacheRead<_DWORD>(v405 + 592);
                goto LABEL_1037;
            case 0x297:
                v406 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 248);
                v611 -= 258016140 * FuckEnc::CacheRead<_DWORD>(v406 + 552);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v406 + 536) + 840i64) + 176i64);
                goto LABEL_1037;
            case 0x298:
                v407 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 704i64);
                Calls::FastCall(v407 + 312, &v611, v407);
                goto LABEL_1037;
            case 0x299:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 696i64) + 120i64) + 56i64) + 160i64, &v611, a1);
                goto LABEL_1037;
            case 0x29A:
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 784) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 288i64) + 56i64) + 408i64) - 375409793));
                goto LABEL_1037;
            case 0x29B:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 696i64) + 768i64) + 432i64, &v611, a1);
                goto LABEL_1037;
            case 0x29C:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 768i64) + 512i64) + 776i64, &v611, a1);
                goto LABEL_1037;
            case 0x29D:
                v11 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 600) + 368i64) + 528i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 48) + 840i64) + 872i64));
                goto LABEL_1036;
            case 0x29E:
                v408 = a1;
                v611 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(a1 + 712);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v408 + 72) + 8i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v408 + 584) + 480i64);
                goto LABEL_1037;
            case 0x29F:
                v15 = ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 696i64) + 520i64) + 584i64) + 584i64) + 824i64);
                goto LABEL_1035;
            case 0x2A0:
                v409 = a1;
                v611 = ((v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 592) + 1848064371)) - ((_DWORD)0xD3B885B + 3)) ^ 0x4CD97BD7;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v409 + 232) + 296i64);
                goto LABEL_1037;
            case 0x2A1:
                v611 = v9 - 2081596408;
                v11 = (v9 - 2081596408) ^ FuckEnc::CacheRead<_DWORD>(a1 + 528) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 600i64) + 424i64) + 1274090668);
                goto LABEL_1036;
            case 0x2A2:
                v410 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 760);
                v611 += 2104391874 * FuckEnc::CacheRead<_DWORD>(v410 + 760) + 1;
                v611 = v611 - FuckEnc::CacheRead<_DWORD>(v410 + 712) + 2012613688;
                goto LABEL_1037;
            case 0x2A3:
                v611 = v9 - 1080280858;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 56i64) + 120i64) + 712i64) ^ (v9 - 1080280858) ^ 0xF64DF0F8;
                goto LABEL_1037;
            case 0x2A4:
                v411 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 816i64) + 64i64) ^ v9;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v411 + 136) + 232i64) + 888i64);
                goto LABEL_1037;
            case 0x2A5:
                v611 = ~(v9 - 1637209678);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 352i64) + 304i64) + 760i64);
                goto LABEL_1037;
            case 0x2A6:
                v412 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 408) - 1405986828;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v412 + 48) + 528i64) ^ 0xAF6368BD;
                goto LABEL_1037;
            case 0x2A7:
                v611 = v9 - 1847236225;
                v413 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 872) ^ (v9 - 1847236225);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v413 + 16);
                v11 = v611 + (FuckEnc::CacheRead<_DWORD>(v413 + 128) ^ 0xD8180D7B);
                goto LABEL_1036;
            case 0x2A8:
                Calls::FastCall(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 280i64) + 120i64) + 456i64, &v611, a1);
                goto LABEL_1037;
            case 0x2A9:
                v611 = v9 + 1316698171;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 696i64) + 160i64, &v611, a1);
                goto LABEL_1037;
            case 0x2AA:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 840) + 144i64) + 840i64) + 696i64) + 56i64) + 48i64) + 592i64) ^ v9;
                goto LABEL_1037;
            case 0x2AB:
                v414 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 872) - 1302512683;
                v611 = (v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v414 + 696) + 784i64)) ^ 0x86E6AE96;
                goto LABEL_1037;
            case 0x2AC:
                v611 = (v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 248) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 784i64) ^ ~FuckEnc::CacheRead<_DWORD>(a1 + 824)))) + 990336969;
                goto LABEL_1037;
            case 0x2AD:
                v611 = (v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 280i64) + 520i64) + 376i64) + 600i64) + 424i64) >> 15)) ^ 0x99A20DE5;
                goto LABEL_1037;
            case 0x2AE:
                v11 = (v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 136i64) + 304i64) + 48i64) + 72i64) + 704i64) & 0xFFFFFFF1) + 1514103887;
                goto LABEL_1036;
            case 0x2AF:
                v415 = a1;
                v611 = ~(v9 + (_DWORD)0x53E6315 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 816i64) + 464i64) + 320i64));
                v11 = FuckEnc::CacheRead<_DWORD>(v415 + 552) ^ v611;
                goto LABEL_1036;
            case 0x2B0:
                v611 = ~(v9 ^ 0x69EE0985);
                v416 = a1;
                v611 ^= FuckEnc::CacheRead<_DWORD>(a1 + 872);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v416 + 464) + 464i64) + 712i64);
                goto LABEL_1037;
            case 0x2B1:
                v417 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 368) + 840i64) + 712i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v417) + 840i64) + 288i64) + 424i64);
                goto LABEL_1037;
            case 0x2B2:
                v611 = v9 + 148728854;
                v418 = a1;
                v611 = v9 + 148728854 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 712i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v418 + 584) + 744i64) + 824i64);
                goto LABEL_1037;
            case 0x2B3:
                v419 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 240);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(v419 + 408) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v419 + 136) + 352i64) + 408i64);
                goto LABEL_1036;
            case 0x2B4:
                v611 = v9 - 926688420;
                v420 = a1;
                v611 = v9 - 926688420 - FuckEnc::CacheRead<_DWORD>(a1 + 8);
                v611 -= FuckEnc::CacheRead<_DWORD>(v420 + 640);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v420 + 304) + 320i64);
                goto LABEL_1037;
            case 0x2B5:
                v611 = v9 - 917291596;
                v421 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 88i64) ^ (v9 - 917291596);
                v11 = v611 + ((FuckEnc::CacheRead<_DWORD>(v421 + 16) + 27080) << 17);
                goto LABEL_1036;
            case 0x2B6:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 144) + 520i64) + 144i64) + 280i64) + 608i64) + 816i64) + 520i64) + 88i64);
                goto LABEL_1037;
            case 0x2B7:
                v611 = v9 + 781025920;
                Calls::FastCall(a1 + 200, &v611, a1);
                v611 += FuckEnc::CacheRead<_DWORD>(a1 + 712);
                goto LABEL_1037;
            case 0x2B8:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 768i64) + 520i64) + 536i64) + 752i64) + 512i64) + 368i64) + 320i64);
                goto LABEL_1037;
            case 0x2B9:
                v422 = a1;
                v611 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(a1 + 64);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v422) + 376i64) + 376i64) + 64i64) ^ 0xC733D527;
                goto LABEL_1037;
            case 0x2BA:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 376i64) + 696i64) + 696i64) + 896i64, &v611, a1);
                goto LABEL_1037;
            case 0x2BB:
                v423 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 176) + 1753676200;
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v423 + 752) + 304i64) + 232i64) + 176i64);
                goto LABEL_1036;
            case 0x2BC:
                v424 = a1;
                v611 = v9 ^ (-1030798420 * ~FuckEnc::CacheRead<_DWORD>(a1 + 712));
                v611 += FuckEnc::CacheRead<_DWORD>(v424 + 248) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v424 + 56) + 480i64);
                goto LABEL_1037;
            case 0x2BD:
                v425 = a1;
                v611 = v9 ^ FuckEnc::CacheRead<_DWORD>(a1 + 408) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 192) + 1997612684);
                v611 -= FuckEnc::CacheRead<_DWORD>(v425 + 640) & 0xFFFFFFF9;
                goto LABEL_1037;
            case 0x2BE:
                v426 = a1;
                v611 = (unsigned int)0xD9951CD + ((v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 480) ^ 0x63C1962B)) ^ 0xB67026F1) + 3;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v426 + 520) + 136i64) + 8i64);
                goto LABEL_1037;
            case 0x2BF:
                v427 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 368i64) + 768i64) + 376i64) + 888i64) + 1;
                v611 ^= FuckEnc::CacheRead<_DWORD>(v427 + 552);
                goto LABEL_1037;
            case 0x2C0:
                v428 = a1;
                v611 = v9 - 560189404 * FuckEnc::CacheRead<_DWORD>(a1 + 480);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v428 + 280) + 256i64, &v611, a1);
                goto LABEL_1037;
            case 0x2C1:
                v429 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 128);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v429 + 744) + 832i64) + 744i64) + 656i64) + 1347700791;
                goto LABEL_1037;
            case 0x2C2:
                v611 = v9 - 1784834954;
                Calls::FastCall(a1 + 624, &v611, a1);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 472i64);
                goto LABEL_1037;
            case 0x2C3:
                v611 = (v9 ^ 0x2B90C463) + 2081617326;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 704i64);
                goto LABEL_1037;
            case 0x2C4:
                v15 = ~(FuckEnc::CacheRead<_DWORD>(a1 + 760) ^ (168823368 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 536i64) + 824i64)));
                goto LABEL_1035;
            case 0x2C5:
                v430 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 704i64) ^ v9 ^ 0xEB3E12E9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v430 + 840) + 608i64) + 696i64) + 296i64);
                goto LABEL_1037;
            case 0x2C6:
                v611 = ~(_DWORD)v9;
                v611 = ~(_DWORD)v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 584i64) + 696i64) + 832i64) + 464i64) + 176i64);
                goto LABEL_1037;
            case 0x2C7:
                v611 = ((v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 72i64) + 744i64) + 248i64) ^ 0x4920351A) + 1415355500) ^ 0x18F8256D) + 1156241866;
                goto LABEL_1037;
            case 0x2C8:
                Calls::FastCall(a1 + 576, &v611, a1);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 840) + 464i64) + 704i64);
                goto LABEL_1037;
            case 0x2C9:
                v611 = v9 - 868759294;
                v431 = a1;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 768i64) + 824i64) & 0xFFFFFFF2;
                v611 += FuckEnc::CacheRead<_DWORD>(v431 + 192);
                goto LABEL_1037;
            case 0x2CA:
                v611 = v9 - 3102880;
                v611 = (v9 - 3102880) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 48) + 320i64) + FuckEnc::CacheRead<_DWORD>(a1 + 656) + 151632051);
                goto LABEL_1037;
            case 0x2CB:
                v432 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 16) - 1232567405;
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v432 + 816) + 464i64) + 584i64) + 872i64) + 1;
                goto LABEL_1036;
            case 0x2CC:
                v433 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 176) - 2051460000;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v433 + 752) + 144i64) + 768i64) + 72i64) + 128i64);
                goto LABEL_1037;
            case 0x2CD:
                v11 = (v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 608i64) + 816i64) + 600i64) + 304i64) + 480i64) >> 4)) + 1202798889;
                goto LABEL_1036;
            case 0x2CE:
                v434 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 712i64) ^ v9;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v434 + 136) + 376i64) + 304i64) + 768i64) + 552i64);
                goto LABEL_1037;
            case 0x2CF:
                v611 = v9 - 908106087;
                v611 = v9 - 908106087 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 48i64) + 832i64) + 288i64) + 640i64) | 0xF);
                goto LABEL_1037;
            case 0x2D0:
                v435 = a1;
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 832i64) + 304i64) + 704i64) - 1519354883);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v435 + 584) + 16i64);
                goto LABEL_1036;
            case 0x2D1:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 304i64) + 120i64) + 520i64) + 232i64) + 136i64) + 352i64) + 424i64);
                goto LABEL_1037;
            case 0x2D2:
                v611 = (unsigned int)0x136FEAB3 + v9;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 408i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 8i64);
                goto LABEL_1037;
            case 0x2D3:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 840) + 304i64) + 696i64) + 376i64) + 280i64) + 520i64) + 816i64) + 760i64) ^ v9;
                goto LABEL_1037;
            case 0x2D4:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 760i64) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 56i64) + 528i64) + 369883462);
                goto LABEL_1037;
            case 0x2D5:
                v436 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 760) ^ v9;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v436 + 280) + 64i64) + 1;
                v11 = FuckEnc::CacheRead<_DWORD>(v436 + 320) ^ v611 ^ 0x20681E8F;
                goto LABEL_1036;
            case 0x2D6:
                v437 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 712);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v437 + 696) + 376i64) + 96i64, &v611, a1);
                goto LABEL_1037;
            case 0x2D7:
                v438 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 480);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v438 + 536) + 176i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v438 + 768) + 840i64) + 784i64);
                goto LABEL_1037;
            case 0x2D8:
                v439 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 704);
                v611 = ~((unsigned int)0xF1F04A4 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v439 + 752) + 232i64) + 296i64) ^ v611);
                goto LABEL_1037;
            case 0x2D9:
                v440 = a1;
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 704) & 0xFFFFFFE5);
                LODWORD(v9) = v611 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v440 + 584) + 760i64);
                v611 = v9;
                v15 = FuckEnc::CacheRead<_DWORD>(v440 + 424) + 1463504231;
                goto LABEL_1035;
            case 0x2DA:
                v441 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 656) - 60260897;
                v611 -= ~(96529065 * FuckEnc::CacheRead<_DWORD>(v441 + 704)) | 6;
                goto LABEL_1037;
            case 0x2DB:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 232i64) + 840i64) + 768i64) + 520i64) + 320i64);
                goto LABEL_1037;
            case 0x2DC:
                v442 = a1;
                v611 = (v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 888i64) + 1733123408) ^ 0x334D7092;
                v611 -= (FuckEnc::CacheRead<_DWORD>(v442 + 472) + 1268376789) ^ 0xC96E79A0;
                goto LABEL_1037;
            case 0x2DD:
                v443 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 472) - 1412326537;
                v611 += FuckEnc::CacheRead<_DWORD>(v443 + 296);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v443 + 512) + 744i64) + 552i64);
                goto LABEL_1037;
            case 0x2DE:
                v11 = 1953092389 - (v9 + ~(69713107 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 600i64) + 288i64) + 528i64)));
                goto LABEL_1036;
            case 0x2DF:
                v444 = a1;
                v611 = (FuckEnc::CacheRead<_DWORD>(a1 + 320) ^ v9) - 81050224;
                v611 ^= FuckEnc::CacheRead<_DWORD>(v444 + 552);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v444 + 512) + 248i64) ^ 0x6FC31A1D;
                goto LABEL_1037;
            case 0x2E0:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 696i64) + 744i64) + 840i64) + 520i64) + 352i64) + 288i64) + 712i64);
                goto LABEL_1037;
            case 0x2E1:
                v445 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 480);
                v611 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v445 + 464) + 768i64) + 696i64) + 320i64) ^ v611 ^ 0xE56688CC);
                goto LABEL_1037;
            case 0x2E2:
                v446 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 424);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v446 + 368) + 368i64) + 712i64);
                v11 = v611 ^ (-1060180694 * FuckEnc::CacheRead<_DWORD>(v446 + 784));
                goto LABEL_1036;
            case 0x2E3:
                v447 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 784);
                v611 += FuckEnc::CacheRead<_DWORD>(v447 + 888);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v447 + 280) + 744i64) + 408i64);
                goto LABEL_1037;
            case 0x2E4:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 832i64) + 840i64) + 696i64) + 528i64) - 943611320;
                goto LABEL_1037;
            case 0x2E5:
                v448 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 888i64) ^ v9;
                v611 += 61713096 * FuckEnc::CacheRead<_DWORD>(v448 + 784);
                v11 = v611 - FuckEnc::CacheRead<_DWORD>(v448 + 424);
                goto LABEL_1036;
            case 0x2E6:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 752i64) + 816i64) + 776i64, &v611, a1);
                goto LABEL_1037;
            case 0x2E7:
                v449 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 128) ^ v9;
                v611 = (v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v449 + 520) + 280i64) + 144i64) + 592i64)) ^ 0x64C103F9;
                goto LABEL_1037;
            case 0x2E8:
                v450 = a1;
                v611 = v9 - 1264327903 * FuckEnc::CacheRead<_DWORD>(a1 + 592) - 942308075;
                v611 -= FuckEnc::CacheRead<_DWORD>(v450 + 592);
                v11 = FuckEnc::CacheRead<_DWORD>(v450 + 528) ^ v611;
                goto LABEL_1036;
            case 0x2E9:
                v611 = v9 + 1246548377;
                v451 = a1;
                v611 = (v9 + 1246548377 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 704i64) + 1723410467) ^ 0x3B9F2BB7;
                v11 = FuckEnc::CacheRead<_DWORD>(v451 + 16) ^ v611;
                goto LABEL_1036;
            case 0x2EA:
                v452 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 712i64);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v452 + 376) + 768i64) + 128i64) + 1867069096;
                goto LABEL_1037;
            case 0x2EB:
                v15 = 348073494 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 784i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 280i64) + 72i64) + 240i64);
                goto LABEL_1035;
            case 0x2EC:
                v453 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 248);
                v11 = ~(v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v453 + 464) + 752i64) + 584i64) + 128i64) + 1);
                goto LABEL_1036;
            case 0x2ED:
                v611 = v9 + 477668104;
                v611 = (v9 + 477668104) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 824i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 352i64) + 704i64);
                goto LABEL_1037;
            case 0x2EE:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 512i64) + 48i64) + 824i64) * FuckEnc::CacheRead<unsigned __int8>(a1 + 11);
                goto LABEL_1037;
            case 0x2EF:
                v454 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 608i64) + 752i64) + 552i64);
                v11 = FuckEnc::CacheRead<_DWORD>(v454 + 128) ^ v611;
                goto LABEL_1036;
            case 0x2F0:
                v455 = a1;
                v611 = v9 - 1971067869 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 128i64) ^ 0x74A563CD);
                v611 += 884618658 * FuckEnc::CacheRead<_DWORD>(v455 + 824) - 1791424476;
                goto LABEL_1037;
            case 0x2F1:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 696i64) + 232i64) + 464i64) + 512i64) + 120i64) + 192i64) ^ v9;
                goto LABEL_1037;
            case 0x2F2:
                v456 = a1;
                v457 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 176) ^ 0xAE019A94);
                goto LABEL_764;
            case 0x2F3:
                v611 = v9 - 416578233;
                v458 = a1;
                LODWORD(v9) = v9 - 416578233 + 498714045 * FuckEnc::CacheRead<unsigned __int16>(a1 + 786);
                v611 = v9;
                v15 = FuckEnc::CacheRead<_DWORD>(v458 + 128) + 1852422332;
                goto LABEL_1035;
            case 0x2F4:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 744i64) + 608i64) + 288i64) + 856i64, &v611, a1);
                goto LABEL_1037;
            case 0x2F5:
                v611 = v9 ^ 0xB540901A;
                v611 = (v9 ^ 0xB540901A) + FuckEnc::CacheRead<_DWORD>(a1 + 64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 368) + 768i64) + 280i64) + 128i64);
                goto LABEL_1037;
            case 0x2F6:
                v611 = ~(v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 240i64) ^ ((_DWORD)0xF1E9FEE + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 376i64) + 8i64))));
                goto LABEL_1037;
            case 0x2F7:
                v459 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 64i64) ^ v9;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v459 + 288) + 752i64) + 752i64) + 536i64) + 248i64);
                goto LABEL_1037;
            case 0x2F8:
                v460 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 592) ^ v9;
                v611 ^= 1743729029 * FuckEnc::CacheRead<_DWORD>(v460 + 552) * (FuckEnc::CacheRead<_DWORD>(v460 + 704) >> 6) + 1853959300;
                goto LABEL_1037;
            case 0x2F9:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 320) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 512i64) + 464i64) + 584i64) + 248i64);
                goto LABEL_1037;
            case 0x2FA:
                v11 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 368) + 600i64) + 368i64) + 288i64) + 600i64) + 296i64);
                goto LABEL_1036;
            case 0x2FB:
                v461 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 56i64) + 56i64) + 304i64) + 48i64) + 64i64);
                v11 = FuckEnc::CacheRead<_DWORD>(v461 + 64) ^ v611;
                goto LABEL_1036;
            case 0x2FC:
                v462 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 760i64) + 1325643737;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v462 + 376) + 304i64) + 608i64) + 704i64);
                goto LABEL_1037;
            case 0x2FD:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 696i64) + 768i64) + 776i64, &v611, a1);
                goto LABEL_1037;
            case 0x2FE:
                v463 = a1;
                v611 = v9 + ~(FuckEnc::CacheRead<_DWORD>(a1 + 8) ^ 0x2EA662A4);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v463 + 832) + 536i64) + 88i64);
                goto LABEL_1037;
            case 0x2FF:
                v464 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 280i64) + 832i64) + 16i64);
                v611 ^= -437825488 * (FuckEnc::CacheRead<_DWORD>(v464 + 528) ^ 0x68AA4A03);
                goto LABEL_1037;
            case 0x300:
                v11 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 768i64) + 376i64) + 840i64) + 600i64) + 520i64) + 360i64);
                goto LABEL_1036;
            case 0x301:
                v465 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 360);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v465 + 72) + 840i64) + 520i64) + 752i64) + 72i64) + 296i64);
                goto LABEL_1037;
            case 0x302:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 856i64, &v611, a1);
                v611 -= 1094481914;
                goto LABEL_1037;
            case 0x303:
                v466 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 592i64) + 1;
                v611 += FuckEnc::CacheRead<_DWORD>(v466 + 16);
                v611 -= FuckEnc::CacheRead<_DWORD>(v466 + 424) | 0x10;
                goto LABEL_1037;
            case 0x304:
                v467 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 64) ^ v9;
                v611 ^= 445279420 * FuckEnc::CacheRead<_DWORD>(v467 + 552);
                v11 = v611 + (FuckEnc::CacheRead<_DWORD>(v467 + 656) << 13);
                goto LABEL_1036;
            case 0x305:
                v468 = a1;
                v611 = (v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 752i64) + 512i64) + 816i64) + 552i64)) ^ 0x6BC84DE4;
                v611 -= FuckEnc::CacheRead<_DWORD>(v468 + 784);
                goto LABEL_1037;
            case 0x306:
                v469 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 472);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v469 + 512) + 464i64) + 56i64) + 72i64) + 408i64);
                goto LABEL_1037;
            case 0x307:
                v611 = ((unsigned int)0xE6B033F + v9) ^ 0x9EE981CB;
                Calls::FastCall(a1 + 432, &v611, a1);
                v611 += FuckEnc::CacheRead<_DWORD>(a1 + 656);
                goto LABEL_1037;
            case 0x308:
                v470 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 640) ^ v9;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v470 + 56) + 752i64) + 352i64) + 48i64) + 608i64) + 760i64);
                goto LABEL_1037;
            case 0x309:
                v611 = v9 ^ 0x29D8FC09;
                Calls::FastCall(a1 + 24, &v611, a1);
                v611 += 706835710;
                goto LABEL_1037;
            case 0x30A:
                v471 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 144i64) + 536i64) + 584i64) + 240i64);
                v611 += FuckEnc::CacheRead<_DWORD>(v471 + 528);
                goto LABEL_1037;
            case 0x30B:
                v472 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 320);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v472 + 608) + 704i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v472 + 768) + 120i64) + 408i64);
                goto LABEL_1037;
            case 0x30C:
                v473 = a1;
                v611 = (v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 888) >> 6)) ^ 0x2EFCEF02;
                v611 ^= FuckEnc::CacheRead<_DWORD>(v473 + 480) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v473 + 768) + 128i64);
                goto LABEL_1037;
            case 0x30D:
                v474 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 408) + 1;
                v611 += FuckEnc::CacheRead<_DWORD>(v474 + 712) ^ 0xF94A47FA;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v474 + 304) + 480i64);
                goto LABEL_1037;
            case 0x30E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 368i64) + 144i64) + 96i64, &v611, a1);
                goto LABEL_1037;
            case 0x30F:
                v475 = a1;
                v611 = (v9 + ~FuckEnc::CacheRead<_DWORD>(a1 + 16)) ^ 0x3C91D382;
                v611 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v475 + 136) + 8i64) | 0x19;
                goto LABEL_1037;
            case 0x310:
                v476 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 704) ^ v9 ^ 0x9EBDA31E;
                v611 = v611 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v476 + 136) + 512i64) + 832i64) + 408i64) - 1172794326;
                goto LABEL_1037;
            case 0x311:
                v477 = a1;
                v611 = (v9 + FuckEnc::CacheRead<_DWORD>(a1 + 480)) ^ 0x96A24BDA;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v477 + 120) + 536i64) + 536i64) + 704i64);
                goto LABEL_1037;
            case 0x312:
                v478 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 16);
                v611 += ~FuckEnc::CacheRead<_DWORD>(v478 + 360) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v478 + 56) + 712i64) ^ 0xCBCC507A);
                goto LABEL_1037;
            case 0x313:
                v611 = v9 + 1308475938;
                v611 = (v9 + 1308475938 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 768i64) + 520i64) + 480i64) + 471052708) ^ 0xF1F7AB65;
                goto LABEL_1037;
            case 0x314:
                v479 = a1;
                LODWORD(v9) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 744i64) + 744i64) + 360i64) ^ v9;
                v611 = v9;
                v480 = FuckEnc::CacheRead<_QWORD>(v479 + 280);
                goto LABEL_799;
            case 0x315:
                v481 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 128) - 1467361947;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v481 + 352) + 600i64) + 824i64);
                goto LABEL_1037;
            case 0x316:
                v611 = v9 + 1085651649;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 488i64, &v611, a1);
                v611 += 1413659907;
                goto LABEL_1037;
            case 0x317:
                v482 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 128) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v482 + 56) + 552i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v482 + 608) + 64i64);
                goto LABEL_1037;
            case 0x318:
                v483 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 368) + 176i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(v483 + 408);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v483 + 768) + 744i64) + 128i64);
                goto LABEL_1037;
            case 0x319:
                v484 = a1;
                v611 = ((unsigned int)0xC03C576 + 2) ^ v9 ^ ((FuckEnc::CacheRead<_DWORD>(a1 + 592) | 0xFFFFFFF2) << 27);
                Calls::FastCall(v484 + 160, &v611, v484);
                goto LABEL_1037;
            case 0x31A:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 696i64) + 512i64) + 344i64, &v611, a1);
                v611 -= 2080374154;
                goto LABEL_1037;
            case 0x31B:
                v611 = v9 - 1274562002;
                v485 = a1;
                v611 = v9 - 1274562002 - (FuckEnc::CacheRead<_DWORD>(a1 + 712) ^ 0x340A0103);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v485 + 48) + 888i64);
                goto LABEL_1037;
            case 0x31C:
                v611 = v9 + 525648892;
                v486 = a1;
                v611 = v9 + 525648892 + FuckEnc::CacheRead<_DWORD>(a1 + 760);
                v611 = ~(v611 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v486) + 320i64) | 8));
                goto LABEL_1037;
            case 0x31D:
                v487 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 480);
                v611 -= FuckEnc::CacheRead<_DWORD>(v487 + 424) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v487 + 464) + 744i64) + 352i64) + 784i64);
                goto LABEL_1037;
            case 0x31E:
                v488 = a1;
                LODWORD(v9) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 696i64) + 784i64) ^ v9;
                v611 = v9;
                v15 = ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v488 + 520) + 376i64) + 360i64);
                goto LABEL_1035;
            case 0x31F:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 816i64) + 48i64) + 376i64) + 744i64) + 744i64) + 232i64) + 552i64);
                goto LABEL_1037;
            case 0x320:
                v489 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 240) ^ v9;
                v611 ^= ~FuckEnc::CacheRead<_DWORD>(v489 + 8);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v489 + 600) + 608i64) + 592i64);
                goto LABEL_1037;
            case 0x321:
                v490 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 16) ^ v9;
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(v490 + 296) * ((FuckEnc::CacheRead<_DWORD>(v490 + 640) & 0xFFFFFFE8) + 1);
                goto LABEL_1036;
            case 0x322:
                v491 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 360);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v491 + 840) + 424i64) * (FuckEnc::CacheRead<_DWORD>(v491 + 16) + 998146387);
                goto LABEL_1037;
            case 0x323:
                v492 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 528);
                v611 -= FuckEnc::CacheRead<_DWORD>(v492 + 760);
                v11 = v611 + ~((1906996297 * FuckEnc::CacheRead<_DWORD>(v492 + 472)) ^ 0xD7F8B037);
                goto LABEL_1036;
            case 0x324:
                v493 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 368) + 696i64) + 320i64) ^ v9;
                v611 += 1130860416 * FuckEnc::CacheRead<_DWORD>(v493 + 784) - 1903494252;
                goto LABEL_1037;
            case 0x325:
                v494 = a1;
                LODWORD(v9) = ~(FuckEnc::CacheRead<_DWORD>(a1 + 872) ^ v9);
                v611 = v9;
                v15 = 130405243 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v494 + 512) + 784i64) >> 26);
                goto LABEL_1035;
            case 0x326:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 832i64) + 464i64) + 840i64) + 696i64) + 136i64) + 304i64) + 712i64);
                goto LABEL_1037;
            case 0x327:
                v611 = v9 ^ 0xF0E6230B;
                v495 = a1;
                v611 = (v9 ^ 0xF0E6230B) + FuckEnc::CacheRead<_DWORD>(a1 + 528);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v495 + 696) + 56i64) + 640i64) + 1482366196;
                goto LABEL_1037;
            case 0x328:
                v496 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 472) - 1319358779;
                v611 -= FuckEnc::CacheRead<_DWORD>(v496 + 592);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v496 + 48) + 48i64) + 320i64);
                goto LABEL_1037;
            case 0x329:
                v497 = a1;
                v611 = v9 + ~FuckEnc::CacheRead<_DWORD>(a1 + 824);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v497) + 640i64) + ~FuckEnc::CacheRead<_DWORD>(v497 + 528);
                goto LABEL_1037;
            case 0x32A:
                v611 = v9 - 830277725;
                Calls::FastCall(FuckEnc::CacheReadPlural<_QWORD>(a1 + 768) + 688i64, &v611, a1);
                goto LABEL_1037;
            case 0x32B:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 376i64) + 280i64) + 608i64) + 144i64) + 232i64) + 752i64) + 760i64) ^ v9;
                goto LABEL_1037;
            case 0x32C:
                v498 = a1;
                v611 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 376i64) + 520i64) + 128i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v498 + 376) + 760i64);
                goto LABEL_1037;
            case 0x32D:
                v499 = a1;
                v611 = v9 - 108624040 * FuckEnc::CacheRead<_DWORD>(a1 + 472) - 2081055608;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v499 + 376) + 320i64);
                goto LABEL_1037;
            case 0x32E:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 144) + 424i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 520i64) + 464i64) + 8i64);
                goto LABEL_1037;
            case 0x32F:
                v611 = (v9 - 686148531) ^ 0x7E292C29;
                v11 = v611 + 1474346679 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 840) + 520i64) + 472i64) + 1);
                goto LABEL_1036;
            case 0x330:
                v500 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 248i64);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v500 + 232) + 832i64) + 280i64) + 824i64) ^ 0x85CE61A8;
                goto LABEL_1037;
            case 0x331:
                v501 = a1;
                v611 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 408) ^ 0x5211E980);
                v11 = v611 ^ (FuckEnc::CacheRead<_DWORD>(v501 + 592) + ~FuckEnc::CacheRead<_DWORD>(v501 + 760));
                goto LABEL_1036;
            case 0x332:
                v611 = v9 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 520i64) + 600i64) + 464i64) + 48i64) + 768i64) + 888i64);
                goto LABEL_1037;
            case 0x333:
                v502 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 872) + 1;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v502 + 608) + 808i64, &v611, a1);
                goto LABEL_1037;
            case 0x334:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 832i64) + 840i64) + 744i64) + 832i64) + 352i64) + 704i64) ^ v9;
                goto LABEL_1037;
            case 0x335:
                v611 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 424) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 136i64) + 744i64) + 528i64));
                goto LABEL_1037;
            case 0x336:
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 872) ^ (2 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 48i64) + 176i64) & 0xFFFFFFF0)));
                goto LABEL_1037;
            case 0x337:
                v611 = v9 + 1569556007 * FuckEnc::CacheRead<_DWORD>(a1 + 824) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 120i64) + 120i64) + 584i64) + 240i64);
                goto LABEL_1037;
            case 0x338:
                v503 = a1;
                v611 = (FuckEnc::CacheRead<_DWORD>(a1 + 16) ^ v9) - 383030583;
                v611 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v503 + 304) + 888i64);
                v611 += FuckEnc::CacheRead<_DWORD>(v503 + 784);
                goto LABEL_1037;
            case 0x339:
                v11 = ~(v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 48) + 816i64) + 248i64) ^ (1985554204 * FuckEnc::CacheRead<_DWORD>(a1 + 16))));
                goto LABEL_1036;
            case 0x33A:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 816i64) + 520i64) + 840i64) + 464i64) + 512i64) + 552i64) ^ v9;
                goto LABEL_1037;
            case 0x33B:
                v504 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 368i64) + 832i64) + 240i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v504 + 832) + 584i64) + 240i64);
                goto LABEL_1037;
            case 0x33C:
                v15 = ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 424i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 48i64) + 552i64);
                goto LABEL_1035;
            case 0x33D:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 464i64) + 232i64) + 696i64) + 816i64) + 368i64) + 840i64) + 552i64);
                goto LABEL_1037;
            case 0x33E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 600i64) + 536i64) + 832i64) + 80i64, &v611, a1);
                goto LABEL_1037;
            case 0x33F:
                v505 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 744i64) + 752i64) + 640i64) ^ v9;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v505 + 72) + 64i64);
                goto LABEL_1037;
            case 0x340:
                v611 = v9 ^ 0x4BFFB1;
                v611 = (v9 ^ 0x4BFFB1) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 424i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 352) + 832i64) + 704i64);
                goto LABEL_1037;
            case 0x341:
                v611 = (unsigned int)0x13318C7F + v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(a1 + 656) * (1963009568 - 879940308 * FuckEnc::CacheRead<_DWORD>(a1 + 552));
                goto LABEL_1037;
            case 0x342:
                v11 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 144) + 696i64) + 744i64) + 48i64) + 464i64) + 144i64) + 704i64);
                goto LABEL_1036;
            case 0x343:
                v11 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 136i64) + 888i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 136i64) + 584i64) + 360i64);
                goto LABEL_1036;
            case 0x344:
                v611 = v9 ^ 0xF5F17153;
                v611 = v9 ^ 0xF5F17153 ^ (-603152578 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 832i64) + 376i64) + 232i64) + 296i64));
                goto LABEL_1037;
            case 0x345:
                v611 = v9 - 2 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 696i64) + 296i64) & 0xFFFFFFF0) - 2047003644;
                goto LABEL_1037;
            case 0x346:
                v506 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 472) ^ v9;
                v611 -= FuckEnc::CacheRead<_DWORD>(v506 + 872) ^ (FuckEnc::CacheRead<_DWORD>(v506 + 872) | 0x16);
                v611 += FuckEnc::CacheRead<_DWORD>(v506 + 240);
                goto LABEL_1037;
            case 0x347:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 840i64) + 600i64) + 464i64) + 96i64, &v611, a1);
                goto LABEL_1037;
            case 0x348:
                v507 = a1;
                LODWORD(v9) = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 872i64);
                v611 = v9;
                v15 = ~(FuckEnc::CacheRead<_DWORD>(v507 + 128) * (FuckEnc::CacheRead<_DWORD>(v507 + 872) << 7));
                goto LABEL_1035;
            case 0x349:
                v508 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 512i64) + 584i64) + 352i64) + 704i64);
                v611 = v611 - FuckEnc::CacheRead<_DWORD>(v508 + 408) - 1672910212;
                goto LABEL_1037;
            case 0x34A:
                v611 = v9 - 1097124612;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 584) + 72i64) + 576i64, &v611, a1);
                goto LABEL_1037;
            case 0x34B:
                v611 = (_DWORD)0xC568B43 + 4 + ~(v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 472i64) ^ (-1645166310 * FuckEnc::CacheRead<_DWORD>(a1 + 888)));
                goto LABEL_1037;
            case 0x34C:
                v509 = a1;
                v611 = (v9 ^ (8 * FuckEnc::CacheRead<_DWORD>(a1 + 360))) + 785564123;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v509 + 696) + 752i64) + 512i64) + 824i64);
                goto LABEL_1037;
            case 0x34D:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 176) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 600i64) + 600i64) + 536i64) + 176i64);
                goto LABEL_1037;
            case 0x34E:
                v510 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 304i64) + 240i64) ^ v9;
                v611 -= FuckEnc::CacheRead<_DWORD>(v510 + 248) ^ 0x89A6310;
                goto LABEL_1037;
            case 0x34F:
                v511 = a1;
                v611 = v9 + 365967961 * FuckEnc::CacheRead<_DWORD>(a1 + 8);
                v611 -= FuckEnc::CacheRead<_DWORD>(v511 + 872) | 5;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v511 + 584) + 240i64);
                goto LABEL_1037;
            case 0x350:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 752i64) + 816i64) + 824i64) * (FuckEnc::CacheRead<_DWORD>(a1 + 296) - 858585426);
                goto LABEL_1037;
            case 0x351:
                v512 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 320) - 1307257076;
                v611 -= FuckEnc::CacheRead<_DWORD>(v512 + 424) * (FuckEnc::CacheRead<_DWORD>(v512 + 88) << 31);
                goto LABEL_1037;
            case 0x352:
                v513 = a1;
                v611 = ~(FuckEnc::CacheRead<_DWORD>(a1 + 592) ^ v9);
                v611 += FuckEnc::CacheRead<_DWORD>(v513 + 704) + 1;
                v611 -= FuckEnc::CacheRead<_DWORD>(v513 + 704) ^ 0xEF4FD9AF;
                goto LABEL_1037;
            case 0x353:
                v514 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 128) ^ v9;
                LODWORD(v9) = FuckEnc::CacheRead<_DWORD>(v514 + 16) ^ v611;
                v611 = v9;
                v15 = ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v514) + 464i64) + 656i64);
                goto LABEL_1035;
            case 0x354:
                v515 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 176i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v515) + 160i64, &v611, a1);
                goto LABEL_1037;
            case 0x355:
                v516 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 888);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v516 + 72) + 8i64) + 996690285;
                v611 -= FuckEnc::CacheRead<_DWORD>(v516 + 360);
                goto LABEL_1037;
            case 0x356:
                v517 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 424) ^ v9;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v517 + 752) + 512i64) + 176i64);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v517 + 472);
                goto LABEL_1037;
            case 0x357:
                v611 = v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 64i64) ^ (480528721 * FuckEnc::CacheRead<_DWORD>(a1 + 424) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 8i64));
                goto LABEL_1037;
            case 0x358:
                v11 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 304i64) + 584i64) + 144i64) + 464i64) + 608i64) + 248i64);
                goto LABEL_1036;
            case 0x359:
                v518 = a1;
                v611 = v9 ^ ((FuckEnc::CacheRead<_DWORD>(a1 + 424) + 1942044177) * ~FuckEnc::CacheRead<_DWORD>(a1 + 360));
                v611 -= FuckEnc::CacheRead<_DWORD>(v518 + 64) << 19;
                goto LABEL_1037;
            case 0x35A:
                v519 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 520i64) + 376i64) + 88i64) ^ v9;
                v611 = (v611 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v519 + 464) + 824i64)) ^ 0x161F76A4;
                goto LABEL_1037;
            case 0x35B:
                v520 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 784);
                v611 += FuckEnc::CacheRead<_DWORD>(v520 + 296);
                v611 = v611 - (FuckEnc::CacheRead<_DWORD>(v520 + 760) >> 3) - 32839465;
                goto LABEL_1037;
            case 0x35C:
                v521 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 640);
                Calls::FastCall(v521 + 624, &v611, v521);
                v611 -= FuckEnc::CacheRead<_DWORD>(a1 + 176);
                goto LABEL_1037;
            case 0x35D:
                Calls::FastCall(a1 + 688, &v611, a1);
                v611 ^= FuckEnc::CacheRead<_DWORD>(a1 + 824);
                goto LABEL_1037;
            case 0x35E:
                v611 = ~((v9 + 1761294780) ^ 0xB6744DAB);
                v611 += 663976337 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 368) + 584i64) + 424i64);
                goto LABEL_1037;
            case 0x35F:
                v522 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 472);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v522 + 144) + 120i64) + 528i64) - FuckEnc::CacheRead<_DWORD>(v522 + 656) + 1;
                goto LABEL_1036;
            case 0x360:
                v523 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 16) ^ v9;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v523 + 368) + 720i64, &v611, a1);
                goto LABEL_1037;
            case 0x361:
                v611 = v9 ^ 0x51093A98;
                v11 = (v9 ^ 0x51093A98) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 48) + 512i64) + 832i64) + 752i64) + 872i64);
                goto LABEL_1036;
            case 0x362:
                v524 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 8) + 1252830015;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v524 + 752) + 744i64) + 520i64) + 712i64) >> 5;
                goto LABEL_1037;
            case 0x363:
                v611 = v9 + ((FuckEnc::CacheRead<_DWORD>(a1 + 176) ^ 0x77B197D0) & 0xFFFFFFF0 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 528) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 240i64)));
                goto LABEL_1037;
            case 0x364:
                v611 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 656i64) ^ 0x3AD5790C) * (FuckEnc::CacheRead<_DWORD>(a1 + 320) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 408i64));
                goto LABEL_1037;
            case 0x365:
                v525 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 296) - 704230311;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v525 + 232) + 792i64, &v611, a1);
                goto LABEL_1037;
            case 0x366:
                v526 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 480i64);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v526 + 584) + 64i64);
                v11 = v611 - FuckEnc::CacheRead<_DWORD>(v526 + 128);
                goto LABEL_1036;
            case 0x367:
                v15 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 48i64) + 8i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 136i64) + 176i64);
                goto LABEL_1035;
            case 0x368:
                v527 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 408);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v527 + 832) + 232i64) + 832i64) + 584i64) + 520i64) + 472i64);
                goto LABEL_1036;
            case 0x369:
                v528 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 760);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v528 + 512) + 512i64) + 520i64) + 352i64) + 8i64) ^ 0xF5821F84;
                goto LABEL_1037;
            case 0x36A:
                v611 = v9 - 1033944048;
                v529 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 120i64) + 608i64) + 360i64) ^ (v9 - 1033944048);
                v611 += FuckEnc::CacheRead<_DWORD>(v529 + 424);
                goto LABEL_1037;
            case 0x36B:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 120) + 752i64) + 712i64) - ((unsigned int)(FuckEnc::CacheRead<_DWORD>(a1 + 16) + 62025600) >> 27);
                goto LABEL_1037;
            case 0x36C:
                v611 = v9 - 1332288911;
                v611 = v9 - 1332288911 - 1881530606 * FuckEnc::CacheRead<_DWORD>(a1 + 296) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 816i64) + 16i64);
                goto LABEL_1037;
            case 0x36D:
                v530 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 552i64);
                v611 ^= (-1257576752 * FuckEnc::CacheRead<_DWORD>(v530 + 656)) ^ 0x978F3C62;
                v611 += FuckEnc::CacheRead<_DWORD>(v530 + 592);
                goto LABEL_1037;
            case 0x36E:
                v11 = v9 + (FuckEnc::CacheRead<_DWORD>(a1 + 704) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 88) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 824i64))) - 808422804;
                goto LABEL_1036;
            case 0x36F:
                v611 = v9 + 1387510198;
                v611 = v9 + 1387510198 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 120i64) + 608i64) + 352i64) + 464i64) + 88i64);
                goto LABEL_1037;
            case 0x370:
                v531 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 368i64) + 72i64) + 304i64) + 88i64);
                v11 = v611 + ~FuckEnc::CacheRead<_DWORD>(v531 + 472);
                goto LABEL_1036;
            case 0x371:
                v532 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 192) ^ v9;
                v611 -= FuckEnc::CacheRead<_DWORD>(v532 + 472);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v532 + 696) + 512i64) + 72i64) + 64i64);
                goto LABEL_1037;
            case 0x372:
                v533 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 656) ^ v9;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v533 + 584) + 120i64) + 560i64, &v611, a1);
                goto LABEL_1037;
            case 0x373:
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 608i64) + 88i64) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 56i64) + 872i64));
                goto LABEL_1037;
            case 0x374:
                v534 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 176);
                v611 += FuckEnc::CacheRead<_DWORD>(v534 + 128);
                v611 = v611 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v534 + 840) + 360i64) - FuckEnc::CacheRead<_DWORD>(v534 + 88);
                goto LABEL_1037;
            case 0x375:
                v611 = (v9 ^ 0xBEF280C3) + 1770236273;
                v535 = a1;
                v611 ^= FuckEnc::CacheRead<_DWORD>(a1 + 888);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v535 + 360);
                v611 -= FuckEnc::CacheRead<_DWORD>(v535 + 192);
                goto LABEL_1037;
            case 0x376:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 464i64) + 816i64) + 376i64) + 840i64) + 48i64) + 120i64) + 872i64);
                goto LABEL_1037;
            case 0x377:
                v611 = v9 - 1500336971;
                v536 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 552) + 1863367121 + v9 - 1500336971;
                Calls::FastCall(v536 + 432, &v611, v536);
                goto LABEL_1037;
            case 0x378:
                v537 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 528);
                v11 = v611 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v537 + 840) + 464i64) + 752i64) + 704i64) ^ 0x5668B067) + 1;
                goto LABEL_1036;
            case 0x379:
                v611 = v9 + 904010529;
                v11 = v9 + 904010529 + 1645346763 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 512i64) + 696i64) + 704i64);
                goto LABEL_1036;
            case 0x37A:
                v538 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 48) + 480i64) - (FuckEnc::CacheRead<_DWORD>(a1 + 240) >> 12);
                v611 += FuckEnc::CacheRead<_DWORD>(v538 + 592);
                goto LABEL_1037;
            case 0x37B:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 280i64) + 696i64) + 368i64) + 288i64) + 72i64) + 136i64) + 592i64);
                goto LABEL_1037;
            case 0x37C:
                v539 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 360) ^ v9;
                v611 += FuckEnc::CacheRead<_DWORD>(v539 + 296);
                v611 += FuckEnc::CacheRead<_DWORD>(v539 + 712) + 964352326;
                goto LABEL_1037;
            case 0x37D:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 696i64) + 352i64) + 376i64) + 744i64) + 816i64) + 120i64) + 360i64);
                goto LABEL_1037;
            case 0x37E:
                v611 = v9 ^ 0xAFCD4C3A;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 600i64) + 752i64) + 608i64) + 608i64) + 192i64) ^ v9 ^ 0xAFCD4C3A;
                goto LABEL_1037;
            case 0x37F:
                v540 = a1;
                v611 = v9 ^ (1968940765 - FuckEnc::CacheRead<_DWORD>(a1 + 640));
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v540 + 56) + 600i64) + 56i64) + 472i64);
                goto LABEL_1037;
            case 0x380:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 520i64) + 280i64) + 56i64) + 456i64, &v611, a1);
                goto LABEL_1037;
            case 0x381:
                v611 = v9 + 1350279548;
                v541 = a1;
                v611 = v9 + 1350279548 - (FuckEnc::CacheRead<_DWORD>(a1 + 712) ^ 0x7DA8B456);
                v611 = v611 - FuckEnc::CacheRead<_DWORD>(v541 + 424) + 1154710932;
                goto LABEL_1037;
            case 0x382:
                v542 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 832i64) + 232i64) + 704i64);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v542 + 176);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v542 + 704);
                goto LABEL_1037;
            case 0x383:
                v611 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 480i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 696i64) + 376i64) + 176i64));
                goto LABEL_1037;
            case 0x384:
                v543 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 360i64);
                v611 = v611 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v543 + 120) + 56i64) + 320i64) - 824222234;
                goto LABEL_1037;
            case 0x385:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 408i64) ^ v9;
                goto LABEL_1037;
            case 0x386:
                v544 = a1;
                v611 = v9 ^ FuckEnc::CacheRead<_DWORD>(a1 + 424) ^ FuckEnc::CacheRead<_DWORD>(a1 + 704);
                v611 = ~(FuckEnc::CacheRead<_DWORD>(v544 + 552) ^ v611);
                goto LABEL_1037;
            case 0x387:
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 88i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 288i64) + 304i64) + 536i64) + 192i64));
                goto LABEL_1037;
            case 0x388:
                v545 = a1;
                v611 = (v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 528) >> 4)) + 1960432306;
                Calls::FastCall(v545 + 96, &v611, v545);
                v611 = ~v611;
                goto LABEL_1037;
            case 0x389:
                v546 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 472) ^ v9;
                Calls::FastCall(v546 + 200, &v611, v546);
                v611 -= FuckEnc::CacheRead<_DWORD>(a1 + 640);
                goto LABEL_1037;
            case 0x38A:
                v547 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 424) + 1168303549;
                v611 += FuckEnc::CacheRead<_DWORD>(v547 + 760);
                v11 = v611 ^ (FuckEnc::CacheRead<_DWORD>(v547 + 528) << 26);
                goto LABEL_1036;
            case 0x38B:
                v548 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 712);
                v11 = v611 + ((FuckEnc::CacheRead<_DWORD>(v548 + 552) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v548 + 768) + 56i64) + 472i64)) ^ 0x430D1140);
                goto LABEL_1036;
            case 0x38C:
                Calls::FastCall(a1 + 792, &v611, a1);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 288i64) + 472i64);
                goto LABEL_1037;
            case 0x38D:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 888i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 696i64) + 888i64) - 1713644303;
                goto LABEL_1037;
            case 0x38E:
                Calls::FastCall(a1 + 200, &v611, a1);
                v611 ^= -454029878 - 1975325623 * FuckEnc::CacheRead<_DWORD>(a1 + 528);
                goto LABEL_1037;
            case 0x38F:
                v15 = ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 352i64) + 520i64) + 232i64) + 512i64) + 192i64) - ((_DWORD)0x53DD80 + 4);
                goto LABEL_1035;
            case 0x390:
                v611 = v9 - 1249341093;
                v549 = a1;
                v611 = v9 - 1249341093 + FuckEnc::CacheRead<_DWORD>(a1 + 192);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v549 + 520) + 840i64) + 600i64) + 480i64);
                goto LABEL_1036;
            case 0x391:
                v550 = a1;
                v611 = v9 + ~FuckEnc::CacheRead<_DWORD>(a1 + 760);
                v11 = v611 ^ (FuckEnc::CacheRead<_DWORD>(v550 + 824) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v550 + 48) + 368i64) + 760i64));
                goto LABEL_1036;
            case 0x392:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 600) + 744i64) + 832i64) + 288i64) + 72i64) + 816i64) + 832i64) + 760i64) ^ v9;
                goto LABEL_1037;
            case 0x393:
                v551 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 552) ^ v9;
                v611 -= FuckEnc::CacheRead<_DWORD>(v551 + 296);
                v611 -= (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v551 + 304) + 408i64) | 9) ^ 0x40E5F66B;
                goto LABEL_1037;
            case 0x394:
                v552 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 128i64);
                Calls::FastCall(v552 + 544, &v611, v552);
                goto LABEL_1037;
            case 0x395:
                v611 = v9 ^ 0x34576B7E;
                v611 = v9 ^ 0x34576B7E ^ FuckEnc::CacheRead<_DWORD>(a1 + 872) ^ (1736623725 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 360i64));
                goto LABEL_1037;
            case 0x396:
                v611 = (v9 - FuckEnc::CacheRead<_DWORD>(a1 + 16) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 288i64) + 352i64) + 288i64) + 592i64)) ^ 0xE9CB2FF7;
                goto LABEL_1037;
            case 0x397:
                v553 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 296);
                Calls::FastCall(v553 + 920, &v611, v553);
                v611 -= 699292112;
                goto LABEL_1037;
            case 0x398:
                v554 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 408);
                v611 ^= -290720783 * (FuckEnc::CacheRead<_DWORD>(v554 + 192) ^ 0x94FF49A1);
                v611 -= FuckEnc::CacheRead<_DWORD>(v554 + 8);
                goto LABEL_1037;
            case 0x399:
                v11 = v9 + 1519023894 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 72i64) + 376i64) + 584i64) + 768i64) + 888i64);
                goto LABEL_1036;
            case 0x39A:
                v555 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 592);
                v611 -= FuckEnc::CacheRead<_DWORD>(v555 + 64);
                v611 += FuckEnc::CacheRead<_DWORD>(v555 + 528) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v555 + 48) + 824i64);
                goto LABEL_1037;
            case 0x39B:
                v556 = a1;
                v611 = (v9 + FuckEnc::CacheRead<_DWORD>(a1 + 8)) ^ 0x97E9FBA8;
                v11 = (v611 + FuckEnc::CacheRead<_DWORD>(v556 + 704) * ~FuckEnc::CacheRead<_DWORD>(v556 + 408)) ^ 0x890160A0;
                goto LABEL_1036;
            case 0x39C:
                v557 = a1;
                v611 = ((v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 704i64)) ^ 0x1CE25F9B) - 366841687;
                v11 = v611 + (FuckEnc::CacheRead<_DWORD>(v557 + 128) << 11);
                goto LABEL_1036;
            case 0x39D:
                v558 = a1;
                v611 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 840) + 696i64) + 840i64) + 840i64) + 176i64) ^ v9);
                v611 += FuckEnc::CacheRead<_DWORD>(v558 + 360);
                goto LABEL_1037;
            case 0x39E:
                v559 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 464i64) + 360i64) ^ v9;
                Calls::FastCall(v559 + 896, &v611, v559);
                goto LABEL_1037;
            case 0x39F:
                v560 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 352i64) + 520i64) + 584i64) + 472i64);
                v611 = v611 - FuckEnc::CacheRead<_DWORD>(v560 + 552) + 1226917684;
                goto LABEL_1037;
            case 0x3A0:
                v480 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 56i64) + 376i64) + 56i64) + 520i64) + 744i64);
            LABEL_799:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v480 + 136) + 640i64);
                goto LABEL_1037;
            case 0x3A1:
                v561 = a1;
                v611 = v9 + (_DWORD)0x1160C810 + FuckEnc::CacheRead<_DWORD>(a1 + 712);
                Calls::FastCall(v561 + 488, &v611, v561);
                goto LABEL_1037;
            case 0x3A2:
                v611 = ~(_DWORD)v9;
                v611 = ~(_DWORD)v9 ^ (1669737837 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 368) + 816i64) + 840i64) + 72i64) + 592i64));
                goto LABEL_1037;
            case 0x3A3:
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 768i64) + 120i64) + 752i64) + 600i64) + 512i64) + 704i64) | 0x1C);
                goto LABEL_1037;
            case 0x3A4:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 600) + 744i64) + 232i64) + 144i64) + 896i64, &v611, a1);
                goto LABEL_1037;
            case 0x3A5:
                v562 = a1;
                v611 = v9 + 1613129178 * FuckEnc::CacheRead<_DWORD>(a1 + 592);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v562 + 536) + 600i64) + 768i64) + 240i64);
                goto LABEL_1037;
            case 0x3A6:
                v563 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 88) - 559607657;
                Calls::FastCall(v563 + 664, &v611, v563);
                v611 ^= 0x86C78C00;
                goto LABEL_1037;
            case 0x3A7:
                v611 = v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 16i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 280) + 832i64) + 360i64);
                goto LABEL_1037;
            case 0x3A8:
                v611 = v9 + 847086458;
                v611 = v9 + 847086458 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 120) + 768i64) + 520i64) + 640i64);
                goto LABEL_1037;
            case 0x3A9:
                v11 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 304) + 536i64) + 608i64) + 512i64) + 464i64) + 480i64);
                goto LABEL_1036;
            case 0x3AA:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 720i64, &v611, a1);
                v611 += 1593753041 + FuckEnc::CacheRead<_DWORD>(a1 + 528);
                goto LABEL_1037;
            case 0x3AB:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 232i64) + 288i64) + 536i64) + 744i64) + 320i64) ^ v9;
                goto LABEL_1037;
            case 0x3AC:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 280i64) + 232i64) + 288i64) + 352i64) + 696i64) + 248i64);
                goto LABEL_1037;
            case 0x3AD:
                v611 = v9 + 783503024;
                v564 = a1;
                v611 = (v9 + 783503024) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 656) - 592169374);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v564 + 144) + 280i64) + 472i64);
                goto LABEL_1037;
            case 0x3AE:
                v611 = v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 368i64) + 592i64) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 480i64) + 1657677261);
                goto LABEL_1037;
            case 0x3AF:
                v565 = a1;
                LODWORD(v9) = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 528i64);
                v611 = v9;
                v15 = (FuckEnc::CacheRead<_DWORD>(v565 + 480) ^ (unsigned int)~FuckEnc::CacheRead<_DWORD>(v565 + 760)) >> 25;
                goto LABEL_1035;
            case 0x3B0:
                v566 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 760i64) ^ v9 ^ 0x7F637006;
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v566 + 840) + 840i64) + 176i64);
                goto LABEL_1037;
            case 0x3B1:
                v456 = a1;
                v457 = v9 ^ (1192511397 * FuckEnc::CacheRead<_DWORD>(a1 + 552)) ^ 0x2F95500B;
            LABEL_764:
                v611 = v457;
                Calls::FastCall(v456 + 544, &v611, v456);
                goto LABEL_1037;
            case 0x3B2:
                v567 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(a1 + 320);
                v11 = ~(v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v567 + 280) + 120i64) + 536i64) + 872i64) + 1);
                goto LABEL_1036;
            case 0x3B3:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 56i64) + 304i64) + 48i64) + 688i64, &v611, a1);
                goto LABEL_1037;
            case 0x3B4:
                v568 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 760) + 1614933301;
                Calls::FastCall(v568 + 720, &v611, v568);
                goto LABEL_1037;
            case 0x3B5:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 768i64) + 816i64) + 72i64) + 64i64) - FuckEnc::CacheRead<_DWORD>(a1 + 872);
                goto LABEL_1037;
            case 0x3B6:
                v611 = v9 ^ 0x1A2AAC18;
                v611 = (v9 ^ 0x1A2AAC18) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 752i64) + 888i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 528i64);
                goto LABEL_1037;
            case 0x3B7:
                v569 = a1;
                v611 = v9 + ~FuckEnc::CacheRead<_DWORD>(a1 + 192);
                v611 = (v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v569 + 144) + 832i64) + 784i64)) ^ 0xF0389F9D;
                goto LABEL_1037;
            case 0x3B8:
                v570 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 64);
                v611 += FuckEnc::CacheRead<_DWORD>(v570 + 128);
                v11 = -(v611 ^ ~FuckEnc::CacheRead<_DWORD>(v570 + 424)) - 1182907251;
                goto LABEL_1036;
            case 0x3B9:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 352i64) + 280i64) + 368i64) + 232i64) + 288i64) + 600i64) + 640i64);
                goto LABEL_1037;
            case 0x3BA:
                v611 = ~(v9 - ((1810791579 * FuckEnc::CacheRead<_DWORD>(a1 + 704)) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 536) + 832i64) + 760i64)));
                goto LABEL_1037;
            case 0x3BB:
                v571 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 840) + 584i64) + 48i64) + 464i64) + 64i64) ^ v9;
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v571 + 72) + 704i64);
                goto LABEL_1036;
            case 0x3BC:
                v611 = (unsigned int)0x15037356 ^ (v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 464) + 696i64) + 56i64) + 120i64) + 832i64) + 608i64) + 88i64));
                goto LABEL_1037;
            case 0x3BD:
                v15 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 144) + 352i64) + 88i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 288) + 360i64);
                goto LABEL_1035;
            case 0x3BE:
                v611 = v9 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 520i64) + 16i64) + (FuckEnc::CacheRead<_DWORD>(a1 + 360) | 5);
                goto LABEL_1037;
            case 0x3BF:
                v572 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 248);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v572 + 72) + 584i64) + 600i64) + 288i64) + 376i64) + 424i64);
                goto LABEL_1036;
            case 0x3C0:
                v611 = v9 - 1771778555;
                v573 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 48i64) + 656i64) ^ (v9 - 1771778555);
                v611 = (FuckEnc::CacheRead<_DWORD>(v573 + 16) ^ v611) + 1198477289;
                goto LABEL_1037;
            case 0x3C1:
                v574 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 528);
                v611 -= (FuckEnc::CacheRead<_DWORD>(v574 + 360) ^ (2 * FuckEnc::CacheRead<_DWORD>(v574 + 424))) << 19;
                goto LABEL_1037;
            case 0x3C2:
                v611 = v9 - ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 464i64) + 816i64) + 192i64) << 16) ^ 0xF81BE422) - FuckEnc::CacheRead<_DWORD>(a1 + 16);
                goto LABEL_1037;
            case 0x3C3:
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 760) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 840) + 88i64) * ~FuckEnc::CacheRead<_DWORD>(a1 + 296));
                goto LABEL_1037;
            case 0x3C4:
                v611 = v9 ^ (-1179720738 * FuckEnc::CacheRead<_DWORD>(a1 + 240)) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 248) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 752) + 248i64) ^ 0x7ABBD9B0));
                goto LABEL_1037;
            case 0x3C5:
                v575 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 640) ^ v9;
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v575 + 520) + 48i64) + 304i64) + 352i64) + 176i64);
                goto LABEL_1037;
            case 0x3C6:
                v576 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 592);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v576 + 744) + 288i64) + 608i64) + 712i64);
                v611 += FuckEnc::CacheRead<_DWORD>(v576 + 248);
                goto LABEL_1037;
            case 0x3C7:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 368) + 288i64) + 744i64) + 136i64) + 72i64) + 232i64) + 768i64) + 824i64) ^ v9;
                goto LABEL_1037;
            case 0x3C8:
                v577 = a1;
                v611 = (v9 + FuckEnc::CacheRead<_DWORD>(a1 + 552)) ^ 0xC569643C;
                v611 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v577 + 376) + 72i64) + 464i64) + 8i64);
                goto LABEL_1037;
            case 0x3C9:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 840i64) + 120i64) + 608i64) + 352i64) + 608i64) + 128i64);
                goto LABEL_1037;
            case 0x3CA:
                v578 = a1;
                v611 = v9 + (((unsigned int)0xAA0FE60 + 2) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 584i64) + 832i64) + 360i64));
                v611 -= FuckEnc::CacheRead<_DWORD>(v578 + 872) ^ 0xEE65EB1C;
                goto LABEL_1037;
            case 0x3CB:
                v579 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 768) + 176i64) + 2140716746;
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v579 + 608) + 696i64) + 368i64) + 248i64);
                goto LABEL_1036;
            case 0x3CC:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 16) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 128i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 8i64) + 1);
                goto LABEL_1037;
            case 0x3CD:
                v580 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 192) ^ v9;
                v611 += FuckEnc::CacheRead<_DWORD>(v580 + 360) * ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v580 + 512) + 656i64) >> 23) + 1);
                goto LABEL_1037;
            case 0x3CE:
                v611 = v9 ^ 0x2FE04218;
                v611 = (v9 ^ 0x2FE04218) - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 872i64) ^ (-358878253 * FuckEnc::CacheRead<_DWORD>(a1 + 712)) ^ 0x91017A14);
                goto LABEL_1037;
            case 0x3CF:
                v581 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(a1 + 280) + 888i64) ^ v9;
                v11 = v611 + (FuckEnc::CacheRead<_DWORD>(v581 + 64) >> 10) - 944177888;
                goto LABEL_1036;
            case 0x3D0:
                v15 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 816i64) + 552i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 280) + 840i64) + 712i64);
                goto LABEL_1035;
            case 0x3D1:
                v582 = a1;
                v611 = v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 248) + 507433115);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v582 + 144) + 232i64) + 816i64) + 592i64);
                goto LABEL_1037;
            case 0x3D2:
                v583 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 192) - 1346467087;
                v611 ^= FuckEnc::CacheRead<_DWORD>(v583 + 656);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v583 + 280) + 704i64);
                goto LABEL_1037;
            case 0x3D3:
                v584 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 840) + 600i64) + 760i64);
                v611 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v584 + 280) + 592i64);
                v611 ^= FuckEnc::CacheRead<_DWORD>(v584 + 640);
                goto LABEL_1037;
            case 0x3D4:
                v585 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 528);
                v611 -= 311937184 * FuckEnc::CacheRead<_DWORD>(v585 + 16) * FuckEnc::CacheRead<_DWORD>(v585 + 64) * FuckEnc::CacheRead<_DWORD>(v585 + 360);
                goto LABEL_1037;
            case 0x3D5:
                v586 = a1;
                v611 = (v9 ^ ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 144) + 64i64) ^ 0xFF069E36) + 437589018)) + 1943845698;
                v11 = v611 + (FuckEnc::CacheRead<_DWORD>(v586 + 528) | 0x1F);
                goto LABEL_1036;
            case 0x3D6:
                v587 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 712) ^ v9;
                Calls::FastCall(v587 + 488, &v611, v587);
                v611 -= FuckEnc::CacheRead<_DWORD>(a1 + 296);
                goto LABEL_1037;
            case 0x3D7:
                v611 = v9 - 1777565828 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 376) + 232i64) + 72i64) + 360i64) - 2012245886;
                goto LABEL_1037;
            case 0x3D8:
                v588 = a1;
                v611 = v9 + (((unsigned int)0xD8A4A14 + 1) ^ FuckEnc::CacheRead<_DWORD>(a1 + 640));
                v611 += (unsigned int)~(-1988774805 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v588 + 136) + 824i64)) >> 1;
                goto LABEL_1037;
            case 0x3D9:
                v589 = a1;
                v611 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 640i64) ^ v9 ^ 0xE9703122) + 1616587873;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v589 + 136) + 352i64) + 128i64);
                goto LABEL_1037;
            case 0x3DA:
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 304i64) + 744i64) + 232i64) + 832i64) + 840i64) + 376i64) + 176i64);
                goto LABEL_1037;
            case 0x3DB:
                v590 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 144) + 816i64) + 528i64);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v590) + 840i64) + 424i64);
                goto LABEL_1037;
            case 0x3DC:
                v611 = v9 ^ 0x4C7CBD60;
                v611 = (v9 ^ 0x4C7CBD60) - 1171411703 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 136) + 144i64) + 352i64) + 872i64) >> 6);
                goto LABEL_1037;
            case 0x3DD:
                v591 = a1;
                v611 = (v9 ^ (780536749 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 552i64))) + 579254758;
                v611 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v591 + 280) + 320i64);
                goto LABEL_1037;
            case 0x3DE:
                v611 = v9 ^ 0xCC68D8F9;
                v611 = (v9 ^ 0xCC68D8F9) + FuckEnc::CacheRead<_DWORD>(a1 + 16) * (1041898130 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 512) + 296i64) - 585631822);
                goto LABEL_1037;
            case 0x3DF:
                v611 = v9 - 948539244;
                v611 = v9 - 948539244 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 600) + 608i64) + 536i64) + 232i64) + 464i64) + 712i64);
                goto LABEL_1037;
            case 0x3E0:
                v611 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 232i64) + 280i64) + 608i64) + 832i64) + 232i64) + 584i64) + 480i64) ^ v9;
                goto LABEL_1037;
            case 0x3E1:
                v592 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 240) ^ v9;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v592 + 136) + 512i64) + 432i64, &v611, a1);
                goto LABEL_1037;
            case 0x3E2:
                v593 = a1;
                v611 = v9 - (FuckEnc::CacheRead<_DWORD>(a1 + 760) ^ 0xB7C5C155);
                v611 = (FuckEnc::CacheRead<_DWORD>(v593 + 480) ^ v611) + 604032335;
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v593 + 144) + 592i64);
                goto LABEL_1037;
            case 0x3E3:
                v611 = v9 ^ 0xFC2AF9F6;
                v594 = a1;
                v611 = (v9 ^ 0xFC2AF9F6) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 56i64) + 72i64) + 592i64);
                v11 = FuckEnc::CacheRead<_DWORD>(v594 + 176) ^ v611;
                goto LABEL_1036;
            case 0x3E4:
                v611 = v9 + 1042358341;
                v611 = v9 + 1042358341 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1) + 760i64) ^ (FuckEnc::CacheRead<_DWORD>(a1 + 592) + 1346496355));
                goto LABEL_1037;
            case 0x3E5:
                v11 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 760) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 72i64) + 640i64) - 1372738291;
                goto LABEL_1036;
            case 0x3E6:
                v611 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 528i64) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 832) + 120i64) + 888i64));
                goto LABEL_1037;
            case 0x3E7:
                v595 = a1;
                v611 = (v9 + FuckEnc::CacheRead<_DWORD>(a1 + 704)) ^ 0xAD2756FF;
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v595 + 288) + 608i64) + 56i64) + 192i64);
                goto LABEL_1036;
            case 0x3E8:
                v247 = a1;
                v248 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 824i64) - 611345712;
            LABEL_398:
                v611 = v248;
                Calls::FastCall(v247 + 560, &v611, v247);
                goto LABEL_1037;
            case 0x3E9:
                v11 = (v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 304) + 696i64) + 464i64) + 240i64)) ^ 0x489F5B6B;
                goto LABEL_1036;
            case 0x3EA:
                v596 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 608) + 696i64) + 472i64);
                v611 += FuckEnc::CacheRead<_DWORD>(v596 + 64) + 1336126191;
                goto LABEL_1037;
            case 0x3EB:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 744) + 352i64) + 288i64) + 696i64) + 816i64) + 696i64) + 376i64) + 88i64);
                goto LABEL_1037;
            case 0x3EC:
                v611 = v9 + 688147713;
                v597 = a1;
                v611 = v9 + 688147713 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 232) + 744i64) + 816i64) + 296i64);
                v11 = v611 - FuckEnc::CacheRead<_DWORD>(v597 + 592);
                goto LABEL_1036;
            case 0x3ED:
                Calls::FastCall(a1 + 224, &v611, a1);
                v611 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 520) + 368i64) + 64i64);
                goto LABEL_1037;
            case 0x3EE:
                v611 = v9 ^ 0x7C3859E4;
                v611 = (v9 ^ 0x7C3859E4) - (FuckEnc::CacheRead<_DWORD>(a1 + 424) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 288) + 304i64) + 48i64) + 888i64));
                goto LABEL_1037;
            case 0x3EF:
                v598 = a1;
                v611 = (FuckEnc::CacheRead<_DWORD>(a1 + 760) ^ v9) - 258882375;
                v611 -= FuckEnc::CacheRead<_DWORD>(v598 + 88);
                v611 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v598 + 584) + 608i64) + 888i64);
                goto LABEL_1037;
            case 0x3F0:
                v611 = v9 - 1359809225;
                v611 = v9 - 1359809225 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 816) + 176i64) ^ (-451144708 * FuckEnc::CacheRead<_DWORD>(a1 + 712)));
                goto LABEL_1037;
            case 0x3F1:
                v599 = a1;
                v611 = v9 + ~FuckEnc::CacheRead<_DWORD>(a1 + 88);
                v11 = v611 ^ (FuckEnc::CacheRead<_DWORD>(v599 + 360) + 868912147) ^ 0x9BFC2237;
                goto LABEL_1036;
            case 0x3F2:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 72) + 536i64) + 536i64) + 808i64, &v611, a1);
                v611 -= 1146582658;
                goto LABEL_1037;
            case 0x3F3:
                v600 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 128) ^ v9;
                v611 -= FuckEnc::CacheRead<_DWORD>(v600 + 704) ^ (FuckEnc::CacheRead<_DWORD>(v600 + 712) + FuckEnc::CacheRead<_DWORD>(v600 + 192) - 117345680);
                goto LABEL_1037;
            case 0x3F4:
                v601 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 888i64);
                v611 -= FuckEnc::CacheRead<_DWORD>(v601 + 656);
                v611 = (FuckEnc::CacheRead<_DWORD>(v601 + 640) ^ v611) + 1281310786;
                goto LABEL_1037;
            case 0x3F5:
                v602 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 120) + 16i64);
                v11 = v611 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v602 + 520) + 520i64) + 16i64) ^ 0xA9022B4C);
                goto LABEL_1036;
            case 0x3F6:
                v603 = a1;
                v611 = v9 - ((FuckEnc::CacheRead<_DWORD>(a1 + 240) >> 10) ^ 0xE0B01C2F) - 98729007;
                v611 -= 452674601 * FuckEnc::CacheRead<_DWORD>(v603 + 64);
                goto LABEL_1037;
            case 0x3F7:
                v604 = a1;
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 608i64) + 888i64);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v604 + 352) + 120i64) + 536i64) + 592i64);
                goto LABEL_1036;
            case 0x3F8:
                v611 = (unsigned int)0x54115F7 + v9;
                v611 += -2 * FuckEnc::CacheRead<_DWORD>(a1 + 784) - 1552245698 * FuckEnc::CacheRead<_DWORD>(a1 + 472);
                goto LABEL_1037;
            case 0x3F9:
                v605 = a1;
                v611 = v9 + 4 * FuckEnc::CacheRead<_DWORD>(a1 + 88);
                v11 = v611 + FuckEnc::CacheRead<_DWORD>(v605 + 640) + (FuckEnc::CacheRead<_DWORD>(v605 + 552) >> 9);
                goto LABEL_1036;
            case 0x3FA:
                v611 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 56) + 816i64) + 832i64) + 48i64) + 608i64) + 472i64) + 1731705654;
                goto LABEL_1037;
            case 0x3FB:
                v606 = a1;
                v611 = ~(v9 ^ (FuckEnc::CacheRead<_DWORD>(a1 + 16) + (FuckEnc::CacheRead<_DWORD>(a1 + 704) | 0xE)));
                v611 += FuckEnc::CacheRead<_DWORD>(v606 + 240);
                goto LABEL_1037;
            case 0x3FC:
                v607 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 360);
                v611 += FuckEnc::CacheRead<_DWORD>(v607 + 408);
                v611 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v607 + 136) + 128i64);
                goto LABEL_1037;
            case 0x3FD:
                v608 = a1;
                v611 = FuckEnc::CacheRead<_DWORD>(a1 + 888) ^ v9;
                v611 -= 1414115685 * (FuckEnc::CacheRead<_DWORD>(v608 + 176) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v608 + 464) + 368i64) + 16i64));
                goto LABEL_1037;
            case 0x3FE:
                v609 = a1;
                v611 = v9 + FuckEnc::CacheRead<_DWORD>(a1 + 88) + 1634978053;
                Calls::FastCall(v609 + 896, &v611, v609);
                v611 += FuckEnc::CacheRead<_DWORD>(a1 + 408);
                goto LABEL_1037;
            case 0x3FF:
                v610 = a1;
                LODWORD(v9) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a1 + 696) + 744i64) + 712i64) ^ v9;
                v611 = v9;
                v15 = (FuckEnc::CacheRead<_DWORD>(v610 + 192) | 0x18) + 2118735885;
            LABEL_1035:
                v11 = v9 ^ v15;
            LABEL_1036:
                v611 = v11;
            LABEL_1037:
                v8 += 4;
                *a2++ = v611;
                if (v8 + 3 >= a3)
                    return;
                continue;
            }
        }
    }
}
