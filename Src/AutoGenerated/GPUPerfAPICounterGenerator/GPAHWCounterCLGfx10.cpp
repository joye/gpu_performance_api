//==============================================================================
// Copyright (c) 2010-2019 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  CL counter definitions for GFX10
//==============================================================================

#include "GPACounter.h"
#include "GPAHWCounterGfx10.h"
#include "GPAHWExposedCountersGfx10.h"
#include "GPAHWCounterCLGfx10.h"

// This file is autogenerated by the ConvertHWEnums project

namespace CounterGfx10
{
    GPA_HardwareCounterDesc* CLCounterGroupArrayGfx10[] = {
        CB0countersGfx10,
        CB1countersGfx10,
        CB2countersGfx10,
        CB3countersGfx10,
        CPFcountersGfx10,
        DB0countersGfx10,
        DB1countersGfx10,
        DB2countersGfx10,
        DB3countersGfx10,
        GRBMcountersGfx10,
        GRBMSE0countersGfx10,
        PA_SU0countersGfx10,
        PA_SC0countersGfx10,
        PA_SC1countersGfx10,
        SPI0countersGfx10,
        SQ0countersGfx10,
        SQ_ES0countersGfx10,
        SQ_GS0countersGfx10,
        SQ_VS0countersGfx10,
        SQ_PS0countersGfx10,
        SQ_LS0countersGfx10,
        SQ_HS0countersGfx10,
        SQ_CS0countersGfx10,
        SX0countersGfx10,
        TA0countersGfx10,
        TA1countersGfx10,
        TA2countersGfx10,
        TA3countersGfx10,
        TA4countersGfx10,
        TA5countersGfx10,
        TA6countersGfx10,
        TA7countersGfx10,
        TA8countersGfx10,
        TA9countersGfx10,
        TA10countersGfx10,
        TA11countersGfx10,
        TA12countersGfx10,
        TA13countersGfx10,
        TA14countersGfx10,
        TA15countersGfx10,
        TD0countersGfx10,
        TD1countersGfx10,
        TD2countersGfx10,
        TD3countersGfx10,
        TD4countersGfx10,
        TD5countersGfx10,
        TD6countersGfx10,
        TD7countersGfx10,
        TD8countersGfx10,
        TD9countersGfx10,
        TD10countersGfx10,
        TD11countersGfx10,
        TD12countersGfx10,
        TD13countersGfx10,
        TD14countersGfx10,
        TD15countersGfx10,
        TCP0countersGfx10,
        TCP1countersGfx10,
        TCP2countersGfx10,
        TCP3countersGfx10,
        TCP4countersGfx10,
        TCP5countersGfx10,
        TCP6countersGfx10,
        TCP7countersGfx10,
        TCP8countersGfx10,
        TCP9countersGfx10,
        TCP10countersGfx10,
        TCP11countersGfx10,
        TCP12countersGfx10,
        TCP13countersGfx10,
        TCP14countersGfx10,
        TCP15countersGfx10,
        GDScountersGfx10,
        CPGcountersGfx10,
        CPCcountersGfx10,
        ATCcountersGfx10,
        ATCL2countersGfx10,
        MCVML2countersGfx10,
        GCEA0countersGfx10,
        GCEA1countersGfx10,
        GCEA2countersGfx10,
        GCEA3countersGfx10,
        GCEA4countersGfx10,
        GCEA5countersGfx10,
        GCEA6countersGfx10,
        GCEA7countersGfx10,
        GCEA8countersGfx10,
        GCEA9countersGfx10,
        GCEA10countersGfx10,
        GCEA11countersGfx10,
        GCEA12countersGfx10,
        GCEA13countersGfx10,
        GCEA14countersGfx10,
        GCEA15countersGfx10,
        RPBcountersGfx10,
        RMI0countersGfx10,
        RMI1countersGfx10,
        GEcountersGfx10,
        GL1A0countersGfx10,
        GL1C0countersGfx10,
        GL1CG0countersGfx10,
        GL1CG1countersGfx10,
        GL1CG2countersGfx10,
        GL1CG3countersGfx10,
        GL2A0countersGfx10,
        GL2A1countersGfx10,
        GL2A2countersGfx10,
        GL2A3countersGfx10,
        GL2C0countersGfx10,
        GL2C1countersGfx10,
        GL2C2countersGfx10,
        GL2C3countersGfx10,
        GL2C4countersGfx10,
        GL2C5countersGfx10,
        GL2C6countersGfx10,
        GL2C7countersGfx10,
        GL2C8countersGfx10,
        GL2C9countersGfx10,
        GL2C10countersGfx10,
        GL2C11countersGfx10,
        GL2C12countersGfx10,
        GL2C13countersGfx10,
        GL2C14countersGfx10,
        GL2C15countersGfx10,
        GL2C16countersGfx10,
        GL2C17countersGfx10,
        GL2C18countersGfx10,
        GL2C19countersGfx10,
        GL2C20countersGfx10,
        GL2C21countersGfx10,
        GL2C22countersGfx10,
        GL2C23countersGfx10,
        CHAcountersGfx10,
        CHC0countersGfx10,
        CHCGcountersGfx10,
        GUScountersGfx10,
        GCRcountersGfx10,
        PA_PHcountersGfx10,
        UTCL10countersGfx10,
    };

    GPA_HardwareCounterDesc* CLExposedCountersGroupArrayGfx10[] = {
        CB0ExposedCountersGfx10,
        CB1ExposedCountersGfx10,
        CB2ExposedCountersGfx10,
        CB3ExposedCountersGfx10,
        CPFExposedCountersGfx10,
        DB0ExposedCountersGfx10,
        DB1ExposedCountersGfx10,
        DB2ExposedCountersGfx10,
        DB3ExposedCountersGfx10,
        GRBMExposedCountersGfx10,
        PA_SU0ExposedCountersGfx10,
        PA_SC0ExposedCountersGfx10,
        PA_SC1ExposedCountersGfx10,
        SPI0ExposedCountersGfx10,
        SQ0ExposedCountersGfx10,
        SQ_ES0ExposedCountersGfx10,
        SQ_GS0ExposedCountersGfx10,
        SQ_VS0ExposedCountersGfx10,
        SQ_PS0ExposedCountersGfx10,
        SQ_LS0ExposedCountersGfx10,
        SQ_HS0ExposedCountersGfx10,
        SQ_CS0ExposedCountersGfx10,
        SX0ExposedCountersGfx10,
        TA0ExposedCountersGfx10,
        TA1ExposedCountersGfx10,
        TA2ExposedCountersGfx10,
        TA3ExposedCountersGfx10,
        TA4ExposedCountersGfx10,
        TA5ExposedCountersGfx10,
        TA6ExposedCountersGfx10,
        TA7ExposedCountersGfx10,
        TA8ExposedCountersGfx10,
        TA9ExposedCountersGfx10,
        TA10ExposedCountersGfx10,
        TA11ExposedCountersGfx10,
        TA12ExposedCountersGfx10,
        TA13ExposedCountersGfx10,
        TA14ExposedCountersGfx10,
        TA15ExposedCountersGfx10,
        TCP0ExposedCountersGfx10,
        TCP1ExposedCountersGfx10,
        TCP2ExposedCountersGfx10,
        TCP3ExposedCountersGfx10,
        TCP4ExposedCountersGfx10,
        TCP5ExposedCountersGfx10,
        TCP6ExposedCountersGfx10,
        TCP7ExposedCountersGfx10,
        TCP8ExposedCountersGfx10,
        TCP9ExposedCountersGfx10,
        TCP10ExposedCountersGfx10,
        TCP11ExposedCountersGfx10,
        TCP12ExposedCountersGfx10,
        TCP13ExposedCountersGfx10,
        TCP14ExposedCountersGfx10,
        TCP15ExposedCountersGfx10,
        GCEA0ExposedCountersGfx10,
        GCEA1ExposedCountersGfx10,
        GCEA2ExposedCountersGfx10,
        GCEA3ExposedCountersGfx10,
        GCEA4ExposedCountersGfx10,
        GCEA5ExposedCountersGfx10,
        GCEA6ExposedCountersGfx10,
        GCEA7ExposedCountersGfx10,
        GCEA8ExposedCountersGfx10,
        GCEA9ExposedCountersGfx10,
        GCEA10ExposedCountersGfx10,
        GCEA11ExposedCountersGfx10,
        GCEA12ExposedCountersGfx10,
        GCEA13ExposedCountersGfx10,
        GCEA14ExposedCountersGfx10,
        GCEA15ExposedCountersGfx10,
        GEExposedCountersGfx10,
        GL1C0ExposedCountersGfx10,
        GL2C0ExposedCountersGfx10,
        GL2C1ExposedCountersGfx10,
        GL2C2ExposedCountersGfx10,
        GL2C3ExposedCountersGfx10,
        GL2C4ExposedCountersGfx10,
        GL2C5ExposedCountersGfx10,
        GL2C6ExposedCountersGfx10,
        GL2C7ExposedCountersGfx10,
        GL2C8ExposedCountersGfx10,
        GL2C9ExposedCountersGfx10,
        GL2C10ExposedCountersGfx10,
        GL2C11ExposedCountersGfx10,
        GL2C12ExposedCountersGfx10,
        GL2C13ExposedCountersGfx10,
        GL2C14ExposedCountersGfx10,
        GL2C15ExposedCountersGfx10,
        GL2C16ExposedCountersGfx10,
        GL2C17ExposedCountersGfx10,
        GL2C18ExposedCountersGfx10,
        GL2C19ExposedCountersGfx10,
        GL2C20ExposedCountersGfx10,
        GL2C21ExposedCountersGfx10,
        GL2C22ExposedCountersGfx10,
        GL2C23ExposedCountersGfx10,
    };

    GPA_CounterGroupDesc HWCLGroupsGfx10[] = {
        {0, "CB0", 0, 461, 4, 4},
        {1, "CB1", 1, 461, 4, 4},
        {2, "CB2", 2, 461, 4, 4},
        {3, "CB3", 3, 461, 4, 4},
        {4, "CPF", 0, 40, 2, 4},
        {5, "DB0", 0, 370, 4, 8},
        {6, "DB1", 1, 370, 4, 8},
        {7, "DB2", 2, 370, 4, 8},
        {8, "DB3", 3, 370, 4, 8},
        {9, "GRBM", 0, 47, 2, 0},
        {10, "GRBMSE", 0, 19, 4, 0},
        {11, "PA_SU", 0, 266, 4, 16},
        {12, "PA_SC0", 0, 552, 8, 4},
        {13, "PA_SC1", 1, 552, 8, 4},
        {14, "SPI", 0, 329, 6, 16},
        {15, "SQ", 0, 512, 16, 16},
        {16, "SQ_ES", 0, 512, 16, 16},
        {17, "SQ_GS", 0, 512, 16, 16},
        {18, "SQ_VS", 0, 512, 16, 16},
        {19, "SQ_PS", 0, 512, 16, 16},
        {20, "SQ_LS", 0, 512, 16, 16},
        {21, "SQ_HS", 0, 512, 16, 16},
        {22, "SQ_CS", 0, 512, 16, 16},
        {23, "SX", 0, 225, 4, 8},
        {24, "TA0", 0, 226, 2, 4},
        {25, "TA1", 1, 226, 2, 4},
        {26, "TA2", 2, 226, 2, 4},
        {27, "TA3", 3, 226, 2, 4},
        {28, "TA4", 4, 226, 2, 4},
        {29, "TA5", 5, 226, 2, 4},
        {30, "TA6", 6, 226, 2, 4},
        {31, "TA7", 7, 226, 2, 4},
        {32, "TA8", 8, 226, 2, 4},
        {33, "TA9", 9, 226, 2, 4},
        {34, "TA10", 10, 226, 2, 4},
        {35, "TA11", 11, 226, 2, 4},
        {36, "TA12", 12, 226, 2, 4},
        {37, "TA13", 13, 226, 2, 4},
        {38, "TA14", 14, 226, 2, 4},
        {39, "TA15", 15, 226, 2, 4},
        {40, "TD0", 0, 61, 2, 4},
        {41, "TD1", 1, 61, 2, 4},
        {42, "TD2", 2, 61, 2, 4},
        {43, "TD3", 3, 61, 2, 4},
        {44, "TD4", 4, 61, 2, 4},
        {45, "TD5", 5, 61, 2, 4},
        {46, "TD6", 6, 61, 2, 4},
        {47, "TD7", 7, 61, 2, 4},
        {48, "TD8", 8, 61, 2, 4},
        {49, "TD9", 9, 61, 2, 4},
        {50, "TD10", 10, 61, 2, 4},
        {51, "TD11", 11, 61, 2, 4},
        {52, "TD12", 12, 61, 2, 4},
        {53, "TD13", 13, 61, 2, 4},
        {54, "TD14", 14, 61, 2, 4},
        {55, "TD15", 15, 61, 2, 4},
        {56, "TCP0", 0, 77, 4, 8},
        {57, "TCP1", 1, 77, 4, 8},
        {58, "TCP2", 2, 77, 4, 8},
        {59, "TCP3", 3, 77, 4, 8},
        {60, "TCP4", 4, 77, 4, 8},
        {61, "TCP5", 5, 77, 4, 8},
        {62, "TCP6", 6, 77, 4, 8},
        {63, "TCP7", 7, 77, 4, 8},
        {64, "TCP8", 8, 77, 4, 8},
        {65, "TCP9", 9, 77, 4, 8},
        {66, "TCP10", 10, 77, 4, 8},
        {67, "TCP11", 11, 77, 4, 8},
        {68, "TCP12", 12, 77, 4, 8},
        {69, "TCP13", 13, 77, 4, 8},
        {70, "TCP14", 14, 77, 4, 8},
        {71, "TCP15", 15, 77, 4, 8},
        {72, "GDS", 0, 123, 4, 4},
        {73, "CPG", 0, 82, 2, 4},
        {74, "CPC", 0, 47, 2, 4},
        {75, "ATC", 0, 24, 4, 0},
        {76, "ATCL2", 0, 12, 2, 4},
        {77, "MCVML2", 0, 21, 8, 0},
        {78, "GCEA0", 0, 89, 2, 4},
        {79, "GCEA1", 1, 89, 2, 4},
        {80, "GCEA2", 2, 89, 2, 4},
        {81, "GCEA3", 3, 89, 2, 4},
        {82, "GCEA4", 4, 89, 2, 4},
        {83, "GCEA5", 5, 89, 2, 4},
        {84, "GCEA6", 6, 89, 2, 4},
        {85, "GCEA7", 7, 89, 2, 4},
        {86, "GCEA8", 8, 89, 2, 4},
        {87, "GCEA9", 9, 89, 2, 4},
        {88, "GCEA10", 10, 89, 2, 4},
        {89, "GCEA11", 11, 89, 2, 4},
        {90, "GCEA12", 12, 89, 2, 4},
        {91, "GCEA13", 13, 89, 2, 4},
        {92, "GCEA14", 14, 89, 2, 4},
        {93, "GCEA15", 15, 89, 2, 4},
        {94, "RPB", 0, 63, 4, 0},
        {95, "RMI0", 0, 258, 4, 4},
        {96, "RMI1", 1, 258, 4, 4},
        {97, "GE", 0, 315, 12, 0},
        {98, "GL1A", 0, 36, 4, 0},
        {99, "GL1C", 0, 64, 4, 0},
        {100, "GL1CG0", 0, 38, 4, 0},
        {101, "GL1CG1", 1, 38, 4, 0},
        {102, "GL1CG2", 2, 38, 4, 0},
        {103, "GL1CG3", 3, 38, 4, 0},
        {104, "GL2A0", 0, 91, 4, 0},
        {105, "GL2A1", 1, 91, 4, 0},
        {106, "GL2A2", 2, 91, 4, 0},
        {107, "GL2A3", 3, 91, 4, 0},
        {108, "GL2C0", 0, 235, 4, 0},
        {109, "GL2C1", 1, 235, 4, 0},
        {110, "GL2C2", 2, 235, 4, 0},
        {111, "GL2C3", 3, 235, 4, 0},
        {112, "GL2C4", 4, 235, 4, 0},
        {113, "GL2C5", 5, 235, 4, 0},
        {114, "GL2C6", 6, 235, 4, 0},
        {115, "GL2C7", 7, 235, 4, 0},
        {116, "GL2C8", 8, 235, 4, 0},
        {117, "GL2C9", 9, 235, 4, 0},
        {118, "GL2C10", 10, 235, 4, 0},
        {119, "GL2C11", 11, 235, 4, 0},
        {120, "GL2C12", 12, 235, 4, 0},
        {121, "GL2C13", 13, 235, 4, 0},
        {122, "GL2C14", 14, 235, 4, 0},
        {123, "GL2C15", 15, 235, 4, 0},
        {124, "GL2C16", 16, 235, 4, 0},
        {125, "GL2C17", 17, 235, 4, 0},
        {126, "GL2C18", 18, 235, 4, 0},
        {127, "GL2C19", 19, 235, 4, 0},
        {128, "GL2C20", 20, 235, 4, 0},
        {129, "GL2C21", 21, 235, 4, 0},
        {130, "GL2C22", 22, 235, 4, 0},
        {131, "GL2C23", 23, 235, 4, 0},
        {132, "CHA", 0, 45, 4, 0},
        {133, "CHC", 0, 35, 4, 0},
        {134, "CHCG", 0, 35, 4, 0},
        {135, "GUS", 0, 176, 2, 0},
        {136, "GCR", 0, 94, 2, 0},
        {137, "PA_PH", 0, 960, 8, 0},
        {138, "UTCL1", 0, 15, 2, 0},
    };

    GPA_CounterGroupExposedCounterDesc HWCLExposedCountersByGroupGfx10[] = {
        {0, 0, {7, 116, 117, 118, 126, 127, 128, 162, 257, 259}},
        {1, 461, {7, 116, 117, 118, 126, 127, 128, 162, 257, 259}},
        {2, 922, {7, 116, 117, 118, 126, 127, 128, 162, 257, 259}},
        {3, 1383, {7, 116, 117, 118, 126, 127, 128, 162, 257, 259}},
        {4, 1844, {0, 24}},
        {5, 1884, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {6, 2254, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {7, 2624, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {8, 2994, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {9, 3364, {0, 2}},
        {11, 3430, {8, 14, 21, 54, 55, 56, 57, 61, 62, 73, 74, 105, 109}},
        {12, 3696, {159, 160, 161, 162, 235, 236, 237, 238, 259}},
        {13, 4248, {159, 160, 161, 162, 235, 236, 237, 238, 259}},
        {14, 4800, {1, 9, 18, 21, 34, 41, 45, 46, 49, 51, 52, 55, 60, 61, 62, 63, 80, 81, 82, 83, 308, 314, 320, 326}},
        {15, 5129, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285}},
        {16, 5641, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285}},
        {17, 6153, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285}},
        {18, 6665, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285}},
        {19, 7177, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285}},
        {20, 7689, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285}},
        {21, 8201, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285}},
        {22, 8713, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285}},
        {23, 9225, {12, 14, 17, 19, 22, 24, 27, 29}},
        {24, 9450, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {25, 9676, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {26, 9902, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {27, 10128, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {28, 10354, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {29, 10580, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {30, 10806, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {31, 11032, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {32, 11258, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {33, 11484, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {34, 11710, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {35, 11936, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {36, 12162, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {37, 12388, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {38, 12614, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {39, 12840, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {56, 14042, {9, 18, 36}},
        {57, 14119, {9, 18, 36}},
        {58, 14196, {9, 18, 36}},
        {59, 14273, {9, 18, 36}},
        {60, 14350, {9, 18, 36}},
        {61, 14427, {9, 18, 36}},
        {62, 14504, {9, 18, 36}},
        {63, 14581, {9, 18, 36}},
        {64, 14658, {9, 18, 36}},
        {65, 14735, {9, 18, 36}},
        {66, 14812, {9, 18, 36}},
        {67, 14889, {9, 18, 36}},
        {68, 14966, {9, 18, 36}},
        {69, 15043, {9, 18, 36}},
        {70, 15120, {9, 18, 36}},
        {71, 15197, {9, 18, 36}},
        {78, 15583, {55, 57}},
        {79, 15672, {55, 57}},
        {80, 15761, {55, 57}},
        {81, 15850, {55, 57}},
        {82, 15939, {55, 57}},
        {83, 16028, {55, 57}},
        {84, 16117, {55, 57}},
        {85, 16206, {55, 57}},
        {86, 16295, {55, 57}},
        {87, 16384, {55, 57}},
        {88, 16473, {55, 57}},
        {89, 16562, {55, 57}},
        {90, 16651, {55, 57}},
        {91, 16740, {55, 57}},
        {92, 16829, {55, 57}},
        {93, 16918, {55, 57}},
        {97, 17586, {211, 221, 227, 233, 275}},
        {99, 17937, {14, 18}},
        {108, 18517, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {109, 18752, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {110, 18987, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {111, 19222, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {112, 19457, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {113, 19692, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {114, 19927, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {115, 20162, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {116, 20397, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {117, 20632, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {118, 20867, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {119, 21102, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {120, 21337, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {121, 21572, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {122, 21807, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {123, 22042, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {124, 22277, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {125, 22512, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {126, 22747, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {127, 22982, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {128, 23217, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {129, 23452, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {130, 23687, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {131, 23922, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
    };

    GPA_PaddedCounterDesc CLPaddedCounterByGroupGfx10[] = {
    {}
    };

    GPA_SQCounterGroupDesc HWCLSQGroupsGfx10[] = {
        {15, 0, SQ_ALL},
        {16, 0, SQ_ES},
        {17, 0, SQ_GS},
        {18, 0, SQ_VS},
        {19, 0, SQ_PS},
        {20, 0, SQ_LS},
        {21, 0, SQ_HS},
        {22, 0, SQ_CS},
    };


    unsigned int HWCLSQIsolatedGroupsGfx10[] = {
        24, // Ta
        25, // Ta
        26, // Ta
        27, // Ta
        28, // Ta
        29, // Ta
        30, // Ta
        31, // Ta
        32, // Ta
        33, // Ta
        34, // Ta
        35, // Ta
        36, // Ta
        37, // Ta
        38, // Ta
        39, // Ta
        40, // Td
        41, // Td
        42, // Td
        43, // Td
        44, // Td
        45, // Td
        46, // Td
        47, // Td
        48, // Td
        49, // Td
        50, // Td
        51, // Td
        52, // Td
        53, // Td
        54, // Td
        55, // Td
        56, // Tcp
        57, // Tcp
        58, // Tcp
        59, // Tcp
        60, // Tcp
        61, // Tcp
        62, // Tcp
        63, // Tcp
        64, // Tcp
        65, // Tcp
        66, // Tcp
        67, // Tcp
        68, // Tcp
        69, // Tcp
        70, // Tcp
        71, // Tcp
    };

    const std::set<unsigned int> HWCLTimestampBlockIdsGfx10 =       {}; ///< Timestamp block id's for CL for Gfx10 family
    const std::set<unsigned int> HWCLTimeCounterIndicesGfx10 =      {}; ///< Timestamp counter indices for CL for Gfx10 family
    const unsigned int           HWCLGroupCountGfx10                = sizeof(HWCLGroupsGfx10) / sizeof(GPA_CounterGroupDesc);
    const unsigned int           HWCLExposedCountersGroupCountGfx10 = 97;
    const unsigned int           CLPaddedCounterGroupCountGfx10 = 0;
    const unsigned int           HWCLSQGroupCountGfx10              = sizeof(HWCLSQGroupsGfx10) / sizeof(GPA_SQCounterGroupDesc);
    const unsigned int           HWCLSQIsolatedGroupCountGfx10      = sizeof(HWCLSQIsolatedGroupsGfx10) / sizeof(unsigned int);
}; // namespace
