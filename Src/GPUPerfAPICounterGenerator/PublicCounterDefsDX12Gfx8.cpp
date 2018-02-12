//==============================================================================
// Copyright (c) 2010-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief PublicCounterDefinitions for DX12GFX8
//==============================================================================

#include "PublicCounterDefsDX12Gfx8.h"

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

void AutoDefinePublicCountersDX12Gfx8(GPA_PublicCounters& p)
{
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(51131);

        p.DefinePublicCounter("GPUTime", "Timing", "Time this API call took to execute on the GPU in milliseconds. Does not include time that draw calls are processed in parallel.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, internalCounters, "0,TS_FREQ,/,(1000),*", "00bfa9cd-5512-48e8-7055-7b592113b8cb" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(49743);
        internalCounters.push_back(49741);

        p.DefinePublicCounter("GPUBusy", "Timing", "The percentage of time GPU was busy.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,/,(100),*,(100),min", "bef38bf3-1167-0844-81f0-67d2d28ddbc5" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(49743);

        p.DefinePublicCounter("GPUBusyCycles", "Timing", "Number of GPU cycles that the GPU was busy.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0", "1e84970d-7014-2b8d-d61e-388b5f782691" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(191);
        internalCounters.push_back(338);
        internalCounters.push_back(485);
        internalCounters.push_back(632);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("TessellatorBusy", "Timing", "The percentage of time the tessellation engine is busy.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,max,2,max,3,max,4,/,(100),*", "36af6c72-dcfb-8102-4fd4-ce8ddc573365" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(191);
        internalCounters.push_back(338);
        internalCounters.push_back(485);
        internalCounters.push_back(632);

        p.DefinePublicCounter("TessellatorBusyCycles", "Timing", "Number of GPU cycles that the tessellation engine is busy.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,max,2,max,3,max", "60289dcb-7b33-46e7-26d1-8a2121605543" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(2856);
        internalCounters.push_back(3053);
        internalCounters.push_back(3250);
        internalCounters.push_back(3447);
        internalCounters.push_back(2881);
        internalCounters.push_back(3078);
        internalCounters.push_back(3275);
        internalCounters.push_back(3472);
        internalCounters.push_back(2903);
        internalCounters.push_back(3100);
        internalCounters.push_back(3297);
        internalCounters.push_back(3494);
        internalCounters.push_back(2925);
        internalCounters.push_back(3122);
        internalCounters.push_back(3319);
        internalCounters.push_back(3516);
        internalCounters.push_back(2865);
        internalCounters.push_back(3062);
        internalCounters.push_back(3259);
        internalCounters.push_back(3456);
        internalCounters.push_back(2887);
        internalCounters.push_back(3084);
        internalCounters.push_back(3281);
        internalCounters.push_back(3478);
        internalCounters.push_back(2909);
        internalCounters.push_back(3106);
        internalCounters.push_back(3303);
        internalCounters.push_back(3500);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("VSBusy", "Timing", "The percentage of time the ShaderUnit has vertex shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,16,ifnotzero,4,20,ifnotzero,8,24,ifnotzero,(0),1,17,ifnotzero,5,21,ifnotzero,9,25,ifnotzero,max,(0),2,18,ifnotzero,6,22,ifnotzero,10,26,ifnotzero,max,(0),3,19,ifnotzero,7,23,ifnotzero,11,27,ifnotzero,max,28,/,(100),*,(100),min", "94caad5e-867c-6c09-cf3a-d05b51df8f3b" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(2856);
        internalCounters.push_back(3053);
        internalCounters.push_back(3250);
        internalCounters.push_back(3447);
        internalCounters.push_back(2881);
        internalCounters.push_back(3078);
        internalCounters.push_back(3275);
        internalCounters.push_back(3472);
        internalCounters.push_back(2903);
        internalCounters.push_back(3100);
        internalCounters.push_back(3297);
        internalCounters.push_back(3494);
        internalCounters.push_back(2925);
        internalCounters.push_back(3122);
        internalCounters.push_back(3319);
        internalCounters.push_back(3516);
        internalCounters.push_back(2865);
        internalCounters.push_back(3062);
        internalCounters.push_back(3259);
        internalCounters.push_back(3456);
        internalCounters.push_back(2887);
        internalCounters.push_back(3084);
        internalCounters.push_back(3281);
        internalCounters.push_back(3478);
        internalCounters.push_back(2909);
        internalCounters.push_back(3106);
        internalCounters.push_back(3303);
        internalCounters.push_back(3500);

        p.DefinePublicCounter("VSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has vertex shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "(0),0,16,ifnotzero,4,20,ifnotzero,8,24,ifnotzero,(0),1,17,ifnotzero,5,21,ifnotzero,9,25,ifnotzero,max,(0),2,18,ifnotzero,6,22,ifnotzero,10,26,ifnotzero,max,(0),3,19,ifnotzero,7,23,ifnotzero,11,27,ifnotzero,max", "a2086d4e-274b-48a8-3e08-a4ab76ac15dd" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(51131);
        internalCounters.push_back(2856);
        internalCounters.push_back(3053);
        internalCounters.push_back(3250);
        internalCounters.push_back(3447);
        internalCounters.push_back(2881);
        internalCounters.push_back(3078);
        internalCounters.push_back(3275);
        internalCounters.push_back(3472);
        internalCounters.push_back(2903);
        internalCounters.push_back(3100);
        internalCounters.push_back(3297);
        internalCounters.push_back(3494);
        internalCounters.push_back(2925);
        internalCounters.push_back(3122);
        internalCounters.push_back(3319);
        internalCounters.push_back(3516);
        internalCounters.push_back(2865);
        internalCounters.push_back(3062);
        internalCounters.push_back(3259);
        internalCounters.push_back(3456);
        internalCounters.push_back(2887);
        internalCounters.push_back(3084);
        internalCounters.push_back(3281);
        internalCounters.push_back(3478);
        internalCounters.push_back(2909);
        internalCounters.push_back(3106);
        internalCounters.push_back(3303);
        internalCounters.push_back(3500);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("VSTime", "Timing", "Time vertex shaders are busy in milliseconds.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, internalCounters, "(0),1,17,ifnotzero,5,21,ifnotzero,9,25,ifnotzero,(0),2,18,ifnotzero,6,22,ifnotzero,10,26,ifnotzero,max,(0),3,19,ifnotzero,7,23,ifnotzero,11,27,ifnotzero,max,(0),4,20,ifnotzero,8,24,ifnotzero,12,28,ifnotzero,max,29,/,(1),min,0,TS_FREQ,/,(1000),*,*", "fee660c7-8e01-4dc5-e5d0-fcb61c17fb2c" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(2893);
        internalCounters.push_back(3090);
        internalCounters.push_back(3287);
        internalCounters.push_back(3484);
        internalCounters.push_back(2899);
        internalCounters.push_back(3096);
        internalCounters.push_back(3293);
        internalCounters.push_back(3490);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("HSBusy", "Timing", "The percentage of time the ShaderUnit has hull shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,8,/,(100),*,(100),min", "16f30a0b-4cbf-eccd-b13f-ab68dd254d32" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(2893);
        internalCounters.push_back(3090);
        internalCounters.push_back(3287);
        internalCounters.push_back(3484);
        internalCounters.push_back(2899);
        internalCounters.push_back(3096);
        internalCounters.push_back(3293);
        internalCounters.push_back(3490);

        p.DefinePublicCounter("HSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has hull shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max", "753e76ef-8ef8-3f13-b511-4bd9f3589fdb" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(51131);
        internalCounters.push_back(2893);
        internalCounters.push_back(3090);
        internalCounters.push_back(3287);
        internalCounters.push_back(3484);
        internalCounters.push_back(2899);
        internalCounters.push_back(3096);
        internalCounters.push_back(3293);
        internalCounters.push_back(3490);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("HSTime", "Timing", "Time hull shaders are busy in milliseconds.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, internalCounters, "(0),1,5,ifnotzero,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,(0),4,8,ifnotzero,max,9,/,(1),min,0,TS_FREQ,/,(1000),*,*", "8792e9f1-fb39-b92a-b230-f33df4c8a0de" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(2856);
        internalCounters.push_back(3053);
        internalCounters.push_back(3250);
        internalCounters.push_back(3447);
        internalCounters.push_back(2881);
        internalCounters.push_back(3078);
        internalCounters.push_back(3275);
        internalCounters.push_back(3472);
        internalCounters.push_back(2925);
        internalCounters.push_back(3122);
        internalCounters.push_back(3319);
        internalCounters.push_back(3516);
        internalCounters.push_back(2887);
        internalCounters.push_back(3084);
        internalCounters.push_back(3281);
        internalCounters.push_back(3478);
        internalCounters.push_back(2909);
        internalCounters.push_back(3106);
        internalCounters.push_back(3303);
        internalCounters.push_back(3500);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("DSBusy", "Timing", "The percentage of time the ShaderUnit has domain shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,4,12,ifnotzero,16,ifnotzero,(0),1,5,13,ifnotzero,17,ifnotzero,max,(0),2,6,14,ifnotzero,18,ifnotzero,max,(0),3,7,15,ifnotzero,19,ifnotzero,max,20,/,(100),*,(100),min", "0c626e8a-9b82-b6d4-d9a3-578509316301" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(2856);
        internalCounters.push_back(3053);
        internalCounters.push_back(3250);
        internalCounters.push_back(3447);
        internalCounters.push_back(2881);
        internalCounters.push_back(3078);
        internalCounters.push_back(3275);
        internalCounters.push_back(3472);
        internalCounters.push_back(2925);
        internalCounters.push_back(3122);
        internalCounters.push_back(3319);
        internalCounters.push_back(3516);
        internalCounters.push_back(2887);
        internalCounters.push_back(3084);
        internalCounters.push_back(3281);
        internalCounters.push_back(3478);
        internalCounters.push_back(2909);
        internalCounters.push_back(3106);
        internalCounters.push_back(3303);
        internalCounters.push_back(3500);

        p.DefinePublicCounter("DSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has domain shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "(0),0,4,12,ifnotzero,16,ifnotzero,(0),1,5,13,ifnotzero,17,ifnotzero,max,(0),2,6,14,ifnotzero,18,ifnotzero,max,(0),3,7,15,ifnotzero,19,ifnotzero,max", "2f3f7561-0549-2232-536d-129ffc5f7703" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(51131);
        internalCounters.push_back(2856);
        internalCounters.push_back(3053);
        internalCounters.push_back(3250);
        internalCounters.push_back(3447);
        internalCounters.push_back(2881);
        internalCounters.push_back(3078);
        internalCounters.push_back(3275);
        internalCounters.push_back(3472);
        internalCounters.push_back(2925);
        internalCounters.push_back(3122);
        internalCounters.push_back(3319);
        internalCounters.push_back(3516);
        internalCounters.push_back(2887);
        internalCounters.push_back(3084);
        internalCounters.push_back(3281);
        internalCounters.push_back(3478);
        internalCounters.push_back(2909);
        internalCounters.push_back(3106);
        internalCounters.push_back(3303);
        internalCounters.push_back(3500);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("DSTime", "Timing", "Time domain shaders are busy in milliseconds.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, internalCounters, "(0),1,5,13,ifnotzero,17,ifnotzero,(0),2,6,14,ifnotzero,18,ifnotzero,max,(0),3,7,15,ifnotzero,19,ifnotzero,max,(0),4,8,16,ifnotzero,20,ifnotzero,max,21,/,(1),min,0,TS_FREQ,/,(1000),*,*", "f050e495-f511-ecc9-9c46-c96516bddeb2" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(2872);
        internalCounters.push_back(3069);
        internalCounters.push_back(3266);
        internalCounters.push_back(3463);
        internalCounters.push_back(2875);
        internalCounters.push_back(3072);
        internalCounters.push_back(3269);
        internalCounters.push_back(3466);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("GSBusy", "Timing", "The percentage of time the ShaderUnit has geometry shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,8,/,(100),*,(100),min", "876f36d8-d046-833f-7832-673cbffd0a45" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(2872);
        internalCounters.push_back(3069);
        internalCounters.push_back(3266);
        internalCounters.push_back(3463);
        internalCounters.push_back(2875);
        internalCounters.push_back(3072);
        internalCounters.push_back(3269);
        internalCounters.push_back(3466);

        p.DefinePublicCounter("GSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has geometry shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max", "48203b6b-8983-c067-d63e-05da8be5111b" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(51131);
        internalCounters.push_back(2872);
        internalCounters.push_back(3069);
        internalCounters.push_back(3266);
        internalCounters.push_back(3463);
        internalCounters.push_back(2875);
        internalCounters.push_back(3072);
        internalCounters.push_back(3269);
        internalCounters.push_back(3466);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("GSTime", "Timing", "Time geometry shaders are busy in milliseconds.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, internalCounters, "(0),1,5,ifnotzero,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,(0),4,8,ifnotzero,max,9,/,(1),min,0,TS_FREQ,/,(1000),*,*", "86d56794-f391-b601-9388-851b646d346c" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(2925);
        internalCounters.push_back(3122);
        internalCounters.push_back(3319);
        internalCounters.push_back(3516);
        internalCounters.push_back(2930);
        internalCounters.push_back(3127);
        internalCounters.push_back(3324);
        internalCounters.push_back(3521);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("PSBusy", "Timing", "The percentage of time the ShaderUnit has pixel shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,8,/,(100),*", "7e772beb-d82c-bd9a-aed0-fe504d416ce5" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(2925);
        internalCounters.push_back(3122);
        internalCounters.push_back(3319);
        internalCounters.push_back(3516);
        internalCounters.push_back(2930);
        internalCounters.push_back(3127);
        internalCounters.push_back(3324);
        internalCounters.push_back(3521);

        p.DefinePublicCounter("PSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has pixel shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max", "b58bea04-ce8e-2984-80f4-8aba7d4c817b" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(51131);
        internalCounters.push_back(2925);
        internalCounters.push_back(3122);
        internalCounters.push_back(3319);
        internalCounters.push_back(3516);
        internalCounters.push_back(2930);
        internalCounters.push_back(3127);
        internalCounters.push_back(3324);
        internalCounters.push_back(3521);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("PSTime", "Timing", "Time pixel shaders are busy in milliseconds.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, internalCounters, "(0),1,5,ifnotzero,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,(0),4,8,ifnotzero,max,9,/,0,TS_FREQ,/,(1000),*,*", "f564ee00-ffcf-f7f6-fcbf-f200205cd0cc" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(2913);
        internalCounters.push_back(3110);
        internalCounters.push_back(3307);
        internalCounters.push_back(3504);
        internalCounters.push_back(2917);
        internalCounters.push_back(3114);
        internalCounters.push_back(3311);
        internalCounters.push_back(3508);
        internalCounters.push_back(2919);
        internalCounters.push_back(3116);
        internalCounters.push_back(3313);
        internalCounters.push_back(3510);
        internalCounters.push_back(2923);
        internalCounters.push_back(3120);
        internalCounters.push_back(3317);
        internalCounters.push_back(3514);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("CSBusy", "Timing", "The percentage of time the ShaderUnit has compute shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,4,5,6,7,comparemax4,8,9,10,11,12,13,14,15,comparemax4,max,16,/,(100),*,(100),min", "493fdd90-8d2b-a055-5e4e-2d29c3396b8c" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(2913);
        internalCounters.push_back(3110);
        internalCounters.push_back(3307);
        internalCounters.push_back(3504);
        internalCounters.push_back(2917);
        internalCounters.push_back(3114);
        internalCounters.push_back(3311);
        internalCounters.push_back(3508);
        internalCounters.push_back(2919);
        internalCounters.push_back(3116);
        internalCounters.push_back(3313);
        internalCounters.push_back(3510);
        internalCounters.push_back(2923);
        internalCounters.push_back(3120);
        internalCounters.push_back(3317);
        internalCounters.push_back(3514);

        p.DefinePublicCounter("CSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has compute shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,4,5,6,7,comparemax4,8,9,10,11,12,13,14,15,comparemax4,max", "39bcf1b8-f6b2-4c37-f9af-0a2bb59512f9" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(51131);
        internalCounters.push_back(2913);
        internalCounters.push_back(3110);
        internalCounters.push_back(3307);
        internalCounters.push_back(3504);
        internalCounters.push_back(2917);
        internalCounters.push_back(3114);
        internalCounters.push_back(3311);
        internalCounters.push_back(3508);
        internalCounters.push_back(2919);
        internalCounters.push_back(3116);
        internalCounters.push_back(3313);
        internalCounters.push_back(3510);
        internalCounters.push_back(2923);
        internalCounters.push_back(3120);
        internalCounters.push_back(3317);
        internalCounters.push_back(3514);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("CSTime", "Timing", "Time compute shaders are busy in milliseconds.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, internalCounters, "1,2,3,4,5,6,7,8,comparemax4,9,10,11,12,13,14,15,16,comparemax4,max,17,/,(1),min,0,TS_FREQ,/,(1000),*,*", "5177faaf-f59d-ee23-6e36-0ea087dca9dc" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(87);
        internalCounters.push_back(234);
        internalCounters.push_back(381);
        internalCounters.push_back(528);
        internalCounters.push_back(68);
        internalCounters.push_back(215);
        internalCounters.push_back(362);
        internalCounters.push_back(509);
        internalCounters.push_back(163);
        internalCounters.push_back(310);
        internalCounters.push_back(457);
        internalCounters.push_back(604);

        p.DefinePublicCounter("VSVerticesIn", "VertexShader", "The number of vertices processed by the VS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,4,5,6,7,sum4,ifnotzero,8,9,10,11,sum4,8,9,10,11,sum4,ifnotzero", "810a04c8-2ff4-081d-766d-bfa2bd4ad916" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7257);
        internalCounters.push_back(7556);
        internalCounters.push_back(7855);
        internalCounters.push_back(8154);
        internalCounters.push_back(7235);
        internalCounters.push_back(7534);
        internalCounters.push_back(7833);
        internalCounters.push_back(8132);
        internalCounters.push_back(4865);
        internalCounters.push_back(5164);
        internalCounters.push_back(5463);
        internalCounters.push_back(5762);
        internalCounters.push_back(4843);
        internalCounters.push_back(5142);
        internalCounters.push_back(5441);
        internalCounters.push_back(5740);
        internalCounters.push_back(4853);
        internalCounters.push_back(5152);
        internalCounters.push_back(5451);
        internalCounters.push_back(5750);
        internalCounters.push_back(9649);
        internalCounters.push_back(9948);
        internalCounters.push_back(10247);
        internalCounters.push_back(10546);
        internalCounters.push_back(9627);
        internalCounters.push_back(9926);
        internalCounters.push_back(10225);
        internalCounters.push_back(10524);
        internalCounters.push_back(9637);
        internalCounters.push_back(9936);
        internalCounters.push_back(10235);
        internalCounters.push_back(10534);

        p.DefinePublicCounter("VSVALUInstCount", "VertexShader", "Average number of vector ALU instructions executed in the VS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,12,13,14,15,sum4,/,16,17,18,19,sum4,ifnotzero,20,21,22,23,sum4,24,25,26,27,sum4,/,28,29,30,31,sum4,ifnotzero", "8ec604e4-63f5-e6b5-4558-c38f0b26d4b1" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7261);
        internalCounters.push_back(7560);
        internalCounters.push_back(7859);
        internalCounters.push_back(8158);
        internalCounters.push_back(7235);
        internalCounters.push_back(7534);
        internalCounters.push_back(7833);
        internalCounters.push_back(8132);
        internalCounters.push_back(4869);
        internalCounters.push_back(5168);
        internalCounters.push_back(5467);
        internalCounters.push_back(5766);
        internalCounters.push_back(4843);
        internalCounters.push_back(5142);
        internalCounters.push_back(5441);
        internalCounters.push_back(5740);
        internalCounters.push_back(4853);
        internalCounters.push_back(5152);
        internalCounters.push_back(5451);
        internalCounters.push_back(5750);
        internalCounters.push_back(9653);
        internalCounters.push_back(9952);
        internalCounters.push_back(10251);
        internalCounters.push_back(10550);
        internalCounters.push_back(9627);
        internalCounters.push_back(9926);
        internalCounters.push_back(10225);
        internalCounters.push_back(10524);
        internalCounters.push_back(9637);
        internalCounters.push_back(9936);
        internalCounters.push_back(10235);
        internalCounters.push_back(10534);

        p.DefinePublicCounter("VSSALUInstCount", "VertexShader", "Average number of scalar ALU instructions executed in the VS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,12,13,14,15,sum4,/,16,17,18,19,sum4,ifnotzero,20,21,22,23,sum4,24,25,26,27,sum4,/,28,29,30,31,sum4,ifnotzero", "e3da0383-7322-7f65-8cf2-3ce641578e54" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7312);
        internalCounters.push_back(7611);
        internalCounters.push_back(7910);
        internalCounters.push_back(8209);
        internalCounters.push_back(4920);
        internalCounters.push_back(5219);
        internalCounters.push_back(5518);
        internalCounters.push_back(5817);
        internalCounters.push_back(4853);
        internalCounters.push_back(5152);
        internalCounters.push_back(5451);
        internalCounters.push_back(5750);
        internalCounters.push_back(49743);
        internalCounters.push_back(9704);
        internalCounters.push_back(10003);
        internalCounters.push_back(10302);
        internalCounters.push_back(10601);
        internalCounters.push_back(9637);
        internalCounters.push_back(9936);
        internalCounters.push_back(10235);
        internalCounters.push_back(10534);

        p.DefinePublicCounter("VSVALUBusy", "VertexShader", "The percentage of GPUTime vector ALU instructions are being processed by the VS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,13,14,15,16,sum4,17,18,19,20,sum4,ifnotzero,(4),*,NUM_SIMDS,/,12,/,(100),*", "8b3572f7-fda0-eddf-6c93-2ab145b8754b" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7312);
        internalCounters.push_back(7611);
        internalCounters.push_back(7910);
        internalCounters.push_back(8209);
        internalCounters.push_back(4920);
        internalCounters.push_back(5219);
        internalCounters.push_back(5518);
        internalCounters.push_back(5817);
        internalCounters.push_back(4853);
        internalCounters.push_back(5152);
        internalCounters.push_back(5451);
        internalCounters.push_back(5750);
        internalCounters.push_back(9704);
        internalCounters.push_back(10003);
        internalCounters.push_back(10302);
        internalCounters.push_back(10601);
        internalCounters.push_back(9637);
        internalCounters.push_back(9936);
        internalCounters.push_back(10235);
        internalCounters.push_back(10534);

        p.DefinePublicCounter("VSVALUBusyCycles", "VertexShader", "Number of GPU cycles where vector ALU instructions are being processed by the VS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,12,13,14,15,sum4,16,17,18,19,sum4,ifnotzero,(4),*,NUM_SIMDS,/", "0af1686e-6d77-2f6e-2862-7bb8e869a776" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7317);
        internalCounters.push_back(7616);
        internalCounters.push_back(7915);
        internalCounters.push_back(8214);
        internalCounters.push_back(4925);
        internalCounters.push_back(5224);
        internalCounters.push_back(5523);
        internalCounters.push_back(5822);
        internalCounters.push_back(4853);
        internalCounters.push_back(5152);
        internalCounters.push_back(5451);
        internalCounters.push_back(5750);
        internalCounters.push_back(49743);
        internalCounters.push_back(9709);
        internalCounters.push_back(10008);
        internalCounters.push_back(10307);
        internalCounters.push_back(10606);
        internalCounters.push_back(9637);
        internalCounters.push_back(9936);
        internalCounters.push_back(10235);
        internalCounters.push_back(10534);

        p.DefinePublicCounter("VSSALUBusy", "VertexShader", "The percentage of GPUTime scalar ALU instructions are being processed by the VS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,13,14,15,16,sum4,17,18,19,20,sum4,ifnotzero,(4),*,NUM_SIMDS,/,12,/,(100),*", "3bc8730c-e3bc-e2f0-7d24-36974064c25a" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7317);
        internalCounters.push_back(7616);
        internalCounters.push_back(7915);
        internalCounters.push_back(8214);
        internalCounters.push_back(4925);
        internalCounters.push_back(5224);
        internalCounters.push_back(5523);
        internalCounters.push_back(5822);
        internalCounters.push_back(4853);
        internalCounters.push_back(5152);
        internalCounters.push_back(5451);
        internalCounters.push_back(5750);
        internalCounters.push_back(9709);
        internalCounters.push_back(10008);
        internalCounters.push_back(10307);
        internalCounters.push_back(10606);
        internalCounters.push_back(9637);
        internalCounters.push_back(9936);
        internalCounters.push_back(10235);
        internalCounters.push_back(10534);

        p.DefinePublicCounter("VSSALUBusyCycles", "VertexShader", "Number of GPU cycles where scalar ALU instructions are being processed by the VS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,12,13,14,15,sum4,16,17,18,19,sum4,ifnotzero,(4),*,NUM_SIMDS,/", "357ac7cd-2e1c-dcb0-77f6-37527237f35b" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(172);
        internalCounters.push_back(319);
        internalCounters.push_back(466);
        internalCounters.push_back(613);

        p.DefinePublicCounter("HSPatches", "HullShader", "The number of patches processed by the HS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4", "d1bbd27d-d591-4509-df52-d329fb73a98f" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(10845);
        internalCounters.push_back(11144);
        internalCounters.push_back(11443);
        internalCounters.push_back(11742);
        internalCounters.push_back(10823);
        internalCounters.push_back(11122);
        internalCounters.push_back(11421);
        internalCounters.push_back(11720);

        p.DefinePublicCounter("HSVALUInstCount", "HullShader", "Average number of vector ALU instructions executed in the HS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "786673bf-d58f-9895-3a37-9d6efb5e5804" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(10849);
        internalCounters.push_back(11148);
        internalCounters.push_back(11447);
        internalCounters.push_back(11746);
        internalCounters.push_back(10823);
        internalCounters.push_back(11122);
        internalCounters.push_back(11421);
        internalCounters.push_back(11720);

        p.DefinePublicCounter("HSSALUInstCount", "HullShader", "Average number of scalar ALU instructions executed in the HS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "1af675c4-cb0b-c4c5-c131-2796750f683e" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(10900);
        internalCounters.push_back(11199);
        internalCounters.push_back(11498);
        internalCounters.push_back(11797);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("HSVALUBusy", "HullShader", "The percentage of GPUTime vector ALU instructions are being processed by the HS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*", "7880d192-8015-0311-d43e-fb0b7a4df179" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(10900);
        internalCounters.push_back(11199);
        internalCounters.push_back(11498);
        internalCounters.push_back(11797);

        p.DefinePublicCounter("HSVALUBusyCycles", "HullShader", "Number of GPU cycles vector where ALU instructions are being processed by the HS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/", "3afb94e4-e937-5730-0cc9-41d3113ba012" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(10905);
        internalCounters.push_back(11204);
        internalCounters.push_back(11503);
        internalCounters.push_back(11802);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("HSSALUBusy", "HullShader", "The percentage of GPUTime scalar ALU instructions are being processed by the HS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*", "34748a4b-9148-0b06-b7b9-5700d6631bde" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(10905);
        internalCounters.push_back(11204);
        internalCounters.push_back(11503);
        internalCounters.push_back(11802);

        p.DefinePublicCounter("HSSALUBusyCycles", "HullShader", "Number of GPU cycles where scalar ALU instructions are being processed by the HS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/", "9bceabf7-3f01-2fd9-7b1d-8fe46c729efc" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(87);
        internalCounters.push_back(234);
        internalCounters.push_back(381);
        internalCounters.push_back(528);
        internalCounters.push_back(68);
        internalCounters.push_back(215);
        internalCounters.push_back(362);
        internalCounters.push_back(509);
        internalCounters.push_back(163);
        internalCounters.push_back(310);
        internalCounters.push_back(457);
        internalCounters.push_back(604);

        p.DefinePublicCounter("DSVerticesIn", "DomainShader", "The number of vertices processed by the DS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,4,5,6,7,sum4,ifnotzero,8,9,10,11,sum4,ifnotzero", "b88d9d05-2418-e639-4e3d-3a5815855f8d" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7257);
        internalCounters.push_back(7556);
        internalCounters.push_back(7855);
        internalCounters.push_back(8154);
        internalCounters.push_back(7235);
        internalCounters.push_back(7534);
        internalCounters.push_back(7833);
        internalCounters.push_back(8132);
        internalCounters.push_back(4865);
        internalCounters.push_back(5164);
        internalCounters.push_back(5463);
        internalCounters.push_back(5762);
        internalCounters.push_back(4843);
        internalCounters.push_back(5142);
        internalCounters.push_back(5441);
        internalCounters.push_back(5740);
        internalCounters.push_back(4853);
        internalCounters.push_back(5152);
        internalCounters.push_back(5451);
        internalCounters.push_back(5750);
        internalCounters.push_back(9637);
        internalCounters.push_back(9936);
        internalCounters.push_back(10235);
        internalCounters.push_back(10534);

        p.DefinePublicCounter("DSVALUInstCount", "DomainShader", "Average number of vector ALU instructions executed in the DS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,12,13,14,15,sum4,/,16,17,18,19,sum4,ifnotzero,20,21,22,23,sum4,ifnotzero", "03a3e949-82f9-be4d-7228-5eb5ad80915a" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7261);
        internalCounters.push_back(7560);
        internalCounters.push_back(7859);
        internalCounters.push_back(8158);
        internalCounters.push_back(7235);
        internalCounters.push_back(7534);
        internalCounters.push_back(7833);
        internalCounters.push_back(8132);
        internalCounters.push_back(4869);
        internalCounters.push_back(5168);
        internalCounters.push_back(5467);
        internalCounters.push_back(5766);
        internalCounters.push_back(4843);
        internalCounters.push_back(5142);
        internalCounters.push_back(5441);
        internalCounters.push_back(5740);
        internalCounters.push_back(4853);
        internalCounters.push_back(5152);
        internalCounters.push_back(5451);
        internalCounters.push_back(5750);
        internalCounters.push_back(9637);
        internalCounters.push_back(9936);
        internalCounters.push_back(10235);
        internalCounters.push_back(10534);

        p.DefinePublicCounter("DSSALUInstCount", "DomainShader", "Average number of scalar ALU instructions executed in the DS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,12,13,14,15,sum4,/,16,17,18,19,sum4,ifnotzero,20,21,22,23,sum4,ifnotzero", "73daa728-483e-95d0-5b40-504719aadc1c" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7312);
        internalCounters.push_back(7611);
        internalCounters.push_back(7910);
        internalCounters.push_back(8209);
        internalCounters.push_back(4920);
        internalCounters.push_back(5219);
        internalCounters.push_back(5518);
        internalCounters.push_back(5817);
        internalCounters.push_back(49743);
        internalCounters.push_back(4853);
        internalCounters.push_back(5152);
        internalCounters.push_back(5451);
        internalCounters.push_back(5750);
        internalCounters.push_back(9637);
        internalCounters.push_back(9936);
        internalCounters.push_back(10235);
        internalCounters.push_back(10534);

        p.DefinePublicCounter("DSVALUBusy", "DomainShader", "The percentage of GPUTime vector ALU instructions are being processed by the DS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,9,10,11,12,sum4,ifnotzero,13,14,15,16,sum4,ifnotzero,(4),*,NUM_SIMDS,/,8,/,(100),*", "ddc0dd0c-0c73-b831-a410-cfea8b9713d9" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7312);
        internalCounters.push_back(7611);
        internalCounters.push_back(7910);
        internalCounters.push_back(8209);
        internalCounters.push_back(4920);
        internalCounters.push_back(5219);
        internalCounters.push_back(5518);
        internalCounters.push_back(5817);
        internalCounters.push_back(4853);
        internalCounters.push_back(5152);
        internalCounters.push_back(5451);
        internalCounters.push_back(5750);
        internalCounters.push_back(9637);
        internalCounters.push_back(9936);
        internalCounters.push_back(10235);
        internalCounters.push_back(10534);

        p.DefinePublicCounter("DSVALUBusyCycles", "DomainShader", "Number of GPU cycles where vector ALU instructions are being processed by the DS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,12,13,14,15,sum4,ifnotzero,(4),*,NUM_SIMDS,/", "1e280912-81ee-a684-823b-94c468d8ebda" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7317);
        internalCounters.push_back(7616);
        internalCounters.push_back(7915);
        internalCounters.push_back(8214);
        internalCounters.push_back(4925);
        internalCounters.push_back(5224);
        internalCounters.push_back(5523);
        internalCounters.push_back(5822);
        internalCounters.push_back(49743);
        internalCounters.push_back(4853);
        internalCounters.push_back(5152);
        internalCounters.push_back(5451);
        internalCounters.push_back(5750);
        internalCounters.push_back(9637);
        internalCounters.push_back(9936);
        internalCounters.push_back(10235);
        internalCounters.push_back(10534);

        p.DefinePublicCounter("DSSALUBusy", "DomainShader", "The percentage of GPUTime scalar ALU instructions are being processed by the DS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,9,10,11,12,sum4,ifnotzero,13,14,15,16,sum4,ifnotzero,(4),*,NUM_SIMDS,/,8,/,(100),*", "b639f64c-24af-348f-6439-43c701b4fc07" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7317);
        internalCounters.push_back(7616);
        internalCounters.push_back(7915);
        internalCounters.push_back(8214);
        internalCounters.push_back(4925);
        internalCounters.push_back(5224);
        internalCounters.push_back(5523);
        internalCounters.push_back(5822);
        internalCounters.push_back(4853);
        internalCounters.push_back(5152);
        internalCounters.push_back(5451);
        internalCounters.push_back(5750);
        internalCounters.push_back(9637);
        internalCounters.push_back(9936);
        internalCounters.push_back(10235);
        internalCounters.push_back(10534);

        p.DefinePublicCounter("DSSALUBusyCycles", "DomainShader", "Number of GPU cycles where scalar ALU instructions are being processed by the DS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,12,13,14,15,sum4,ifnotzero,(4),*,NUM_SIMDS,/", "b5bf8a0c-e682-1aa6-23d7-c6c6784ffa5c" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(76);
        internalCounters.push_back(223);
        internalCounters.push_back(370);
        internalCounters.push_back(517);

        p.DefinePublicCounter("GSPrimsIn", "GeometryShader", "The number of primitives passed into the GS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4", "20c29866-509a-aaab-2697-6b2c38f79953" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(87);
        internalCounters.push_back(234);
        internalCounters.push_back(381);
        internalCounters.push_back(528);
        internalCounters.push_back(68);
        internalCounters.push_back(215);
        internalCounters.push_back(362);
        internalCounters.push_back(509);

        p.DefinePublicCounter("GSVerticesOut", "GeometryShader", "The number of vertices output by the GS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,ifnotzero", "775b9736-319a-bd8a-48c9-68db9c91d978" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6061);
        internalCounters.push_back(6360);
        internalCounters.push_back(6659);
        internalCounters.push_back(6958);
        internalCounters.push_back(6039);
        internalCounters.push_back(6338);
        internalCounters.push_back(6637);
        internalCounters.push_back(6936);

        p.DefinePublicCounter("GSVALUInstCount", "GeometryShader", "Average number of vector ALU instructions executed in the GS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "21b12bfa-b8cd-2e71-a2d5-f9e9f1d65d61" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6065);
        internalCounters.push_back(6364);
        internalCounters.push_back(6663);
        internalCounters.push_back(6962);
        internalCounters.push_back(6039);
        internalCounters.push_back(6338);
        internalCounters.push_back(6637);
        internalCounters.push_back(6936);

        p.DefinePublicCounter("GSSALUInstCount", "GeometryShader", "Average number of scalar ALU instructions executed in the GS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "a8562594-d335-ca43-61bf-03b72d2b98a5" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6116);
        internalCounters.push_back(6415);
        internalCounters.push_back(6714);
        internalCounters.push_back(7013);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("GSVALUBusy", "GeometryShader", "The percentage of GPUTime vector ALU instructions are being processed by the GS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*", "228a4818-1e56-cebb-0720-3b2cdc057a6f" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6116);
        internalCounters.push_back(6415);
        internalCounters.push_back(6714);
        internalCounters.push_back(7013);

        p.DefinePublicCounter("GSVALUBusyCycles", "GeometryShader", "Number of GPU cycles where vector ALU instructions are being processed by the GS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/", "be217edd-226f-bd97-9a48-46e2809b1933" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6121);
        internalCounters.push_back(6420);
        internalCounters.push_back(6719);
        internalCounters.push_back(7018);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("GSSALUBusy", "GeometryShader", "The percentage of GPUTime scalar ALU instructions are being processed by the GS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,4,/,(100),*", "f28ce300-800e-9822-39e4-f48528bdb935" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6121);
        internalCounters.push_back(6420);
        internalCounters.push_back(6719);
        internalCounters.push_back(7018);

        p.DefinePublicCounter("GSSALUBusyCycles", "GeometryShader", "Number of GPU cycles where scalar ALU instructions are being processed by the GS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/", "b3eace7c-3bc4-0107-887f-923851dc8ea7" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(760);
        internalCounters.push_back(913);
        internalCounters.push_back(1066);
        internalCounters.push_back(1219);
        internalCounters.push_back(764);
        internalCounters.push_back(917);
        internalCounters.push_back(1070);
        internalCounters.push_back(1223);
        internalCounters.push_back(716);
        internalCounters.push_back(869);
        internalCounters.push_back(1022);
        internalCounters.push_back(1175);
        internalCounters.push_back(728);
        internalCounters.push_back(881);
        internalCounters.push_back(1034);
        internalCounters.push_back(1187);
        internalCounters.push_back(717);
        internalCounters.push_back(870);
        internalCounters.push_back(1023);
        internalCounters.push_back(1176);
        internalCounters.push_back(729);
        internalCounters.push_back(882);
        internalCounters.push_back(1035);
        internalCounters.push_back(1188);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("PrimitiveAssemblyBusy", "Timing", "The percentage of GPUTime that primitive assembly (clipping and culling) is busy. High values may be caused by having many small primitives; mid to low values may indicate pixel shader or output buffer bottleneck.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,4,-,8,12,+,16,+,20,(2),*,+,SU_CLOCKS_PRIM,*,-,1,5,-,9,13,+,17,+,21,(2),*,+,SU_CLOCKS_PRIM,*,-,max,2,6,-,10,14,+,18,+,22,(2),*,+,SU_CLOCKS_PRIM,*,-,max,3,7,-,11,15,+,19,+,23,(2),*,+,SU_CLOCKS_PRIM,*,-,max,(0),max,24,/,(100),*,(100),min", "54ac5640-c4d7-95e2-20e0-6a9fdfc07333" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(760);
        internalCounters.push_back(913);
        internalCounters.push_back(1066);
        internalCounters.push_back(1219);
        internalCounters.push_back(764);
        internalCounters.push_back(917);
        internalCounters.push_back(1070);
        internalCounters.push_back(1223);
        internalCounters.push_back(716);
        internalCounters.push_back(869);
        internalCounters.push_back(1022);
        internalCounters.push_back(1175);
        internalCounters.push_back(728);
        internalCounters.push_back(881);
        internalCounters.push_back(1034);
        internalCounters.push_back(1187);
        internalCounters.push_back(717);
        internalCounters.push_back(870);
        internalCounters.push_back(1023);
        internalCounters.push_back(1176);
        internalCounters.push_back(729);
        internalCounters.push_back(882);
        internalCounters.push_back(1035);
        internalCounters.push_back(1188);

        p.DefinePublicCounter("PrimitiveAssemblyBusyCycles", "Timing", "Number of GPU cycles the primitive assembly (clipping and culling) is busy. High values may be caused by having many small primitives; mid to low values may indicate pixel shader or output buffer bottleneck.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,4,-,8,12,+,16,+,20,(2),*,+,SU_CLOCKS_PRIM,*,-,1,5,-,9,13,+,17,+,21,(2),*,+,SU_CLOCKS_PRIM,*,-,max,2,6,-,10,14,+,18,+,22,(2),*,+,SU_CLOCKS_PRIM,*,-,max,3,7,-,11,15,+,19,+,23,(2),*,+,SU_CLOCKS_PRIM,*,-,max,(0),max", "99777f2d-9626-c78a-a97c-c4505eba1e5f" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(663);
        internalCounters.push_back(816);
        internalCounters.push_back(969);
        internalCounters.push_back(1122);

        p.DefinePublicCounter("PrimitivesIn", "PrimitiveAssembly", "The number of primitives received by the hardware. This includes primitives generated by tessellation.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4", "a515b80d-75c3-c7d2-0d2f-d7766b4759a6" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(669);
        internalCounters.push_back(822);
        internalCounters.push_back(975);
        internalCounters.push_back(1128);
        internalCounters.push_back(709);
        internalCounters.push_back(862);
        internalCounters.push_back(1015);
        internalCounters.push_back(1168);
        internalCounters.push_back(710);
        internalCounters.push_back(863);
        internalCounters.push_back(1016);
        internalCounters.push_back(1169);
        internalCounters.push_back(711);
        internalCounters.push_back(864);
        internalCounters.push_back(1017);
        internalCounters.push_back(1170);
        internalCounters.push_back(712);
        internalCounters.push_back(865);
        internalCounters.push_back(1018);
        internalCounters.push_back(1171);

        p.DefinePublicCounter("CulledPrims", "PrimitiveAssembly", "The number of culled primitives. Typical reasons include scissor, the primitive having zero area, and back or front face culling.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,+,2,+,3,+,4,+,5,+,6,+,7,+,8,+,9,+,10,+,11,+,12,+,13,+,14,+,15,+,16,+,17,+,18,+,19,+", "589bdf55-9192-280a-41c3-584bc94f2562" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(676);
        internalCounters.push_back(829);
        internalCounters.push_back(982);
        internalCounters.push_back(1135);

        p.DefinePublicCounter("ClippedPrims", "PrimitiveAssembly", "The number of primitives that required one or more clipping operations due to intersecting the view volume or user clip planes.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4", "5ef6f9d5-155e-5baa-163f-8359d9ea9bbf" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(764);
        internalCounters.push_back(917);
        internalCounters.push_back(1070);
        internalCounters.push_back(1223);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("PAStalledOnRasterizer", "PrimitiveAssembly", "Percentage of GPUTime that primitive assembly waits for rasterization to be ready to accept data. This roughly indicates for what percentage of time the pipeline is bottlenecked by pixel operations.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,max,2,max,3,max,4,/,(100),*", "6f9f416b-53c1-0457-f88c-7b6ba8973974" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(764);
        internalCounters.push_back(917);
        internalCounters.push_back(1070);
        internalCounters.push_back(1223);

        p.DefinePublicCounter("PAStalledOnRasterizerCycles", "PrimitiveAssembly", "Number of GPU cycles the primitive assembly waits for rasterization to be ready to accept data. Indicates the number of GPU cycles the pipeline is bottlenecked by pixel operations.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,max,2,max,3,max", "7a8c492a-c566-9328-6805-760dbff5c0f2" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(13223);
        internalCounters.push_back(13257);
        internalCounters.push_back(13291);
        internalCounters.push_back(13325);
        internalCounters.push_back(13228);
        internalCounters.push_back(13262);
        internalCounters.push_back(13296);
        internalCounters.push_back(13330);
        internalCounters.push_back(13233);
        internalCounters.push_back(13267);
        internalCounters.push_back(13301);
        internalCounters.push_back(13335);
        internalCounters.push_back(13238);
        internalCounters.push_back(13272);
        internalCounters.push_back(13306);
        internalCounters.push_back(13340);

        p.DefinePublicCounter("PSPixelsOut", "PixelShader", "Pixels exported from shader to colour buffers. Does not include killed or alpha tested pixels; if there are multiple rendertargets, each rendertarget receives one export, so this will be 2 for 1 pixel written to two RTs.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,12,13,14,15,sum4,sum4", "181f5ca1-ec90-61a3-fd73-d8e3722af9e9" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(13225);
        internalCounters.push_back(13259);
        internalCounters.push_back(13293);
        internalCounters.push_back(13327);
        internalCounters.push_back(13230);
        internalCounters.push_back(13264);
        internalCounters.push_back(13298);
        internalCounters.push_back(13332);
        internalCounters.push_back(13235);
        internalCounters.push_back(13269);
        internalCounters.push_back(13303);
        internalCounters.push_back(13337);
        internalCounters.push_back(13240);
        internalCounters.push_back(13274);
        internalCounters.push_back(13308);
        internalCounters.push_back(13342);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("PSExportStalls", "PixelShader", "Pixel shader output stalls. Percentage of GPUBusy. Should be zero for PS or further upstream limited cases; if not zero, indicates a bottleneck in late Z testing or in the colour buffer.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,max,12,max,13,max,14,max,15,max,16,/,(100),*", "996ce2b4-55ce-25c1-afb7-575bd9b4ce90" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(13225);
        internalCounters.push_back(13259);
        internalCounters.push_back(13293);
        internalCounters.push_back(13327);
        internalCounters.push_back(13230);
        internalCounters.push_back(13264);
        internalCounters.push_back(13298);
        internalCounters.push_back(13332);
        internalCounters.push_back(13235);
        internalCounters.push_back(13269);
        internalCounters.push_back(13303);
        internalCounters.push_back(13337);
        internalCounters.push_back(13240);
        internalCounters.push_back(13274);
        internalCounters.push_back(13308);
        internalCounters.push_back(13342);

        p.DefinePublicCounter("PSExportStallsCycles", "PixelShader", "Number of GPU cycles the pixel shader output stalls. Should be zero for PS or further upstream limited cases; if not zero, indicates a bottleneck in late Z testing or in the colour buffer.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,max,12,max,13,max,14,max,15,max", "5e58e8ae-1854-e662-b460-a4a31f7fb493" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(8453);
        internalCounters.push_back(8752);
        internalCounters.push_back(9051);
        internalCounters.push_back(9350);
        internalCounters.push_back(8431);
        internalCounters.push_back(8730);
        internalCounters.push_back(9029);
        internalCounters.push_back(9328);

        p.DefinePublicCounter("PSVALUInstCount", "PixelShader", "Average number of vector ALU instructions executed in the PS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "eb74389e-435c-4137-ecf1-39eb5bc1cbfe" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(8457);
        internalCounters.push_back(8756);
        internalCounters.push_back(9055);
        internalCounters.push_back(9354);
        internalCounters.push_back(8431);
        internalCounters.push_back(8730);
        internalCounters.push_back(9029);
        internalCounters.push_back(9328);

        p.DefinePublicCounter("PSSALUInstCount", "PixelShader", "Average number of scalar ALU instructions executed in the PS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "e6a06580-8a82-96d6-976c-acc121fc5516" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(8508);
        internalCounters.push_back(8807);
        internalCounters.push_back(9106);
        internalCounters.push_back(9405);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("PSVALUBusy", "PixelShader", "The percentage of GPUTime vector ALU instructions are being processed by the PS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*", "6ce6fef7-8e33-10b4-f351-af755e177e85" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(8508);
        internalCounters.push_back(8807);
        internalCounters.push_back(9106);
        internalCounters.push_back(9405);

        p.DefinePublicCounter("PSVALUBusyCycles", "PixelShader", "Number of GPU cycles where vector ALU instructions are being processed by the PS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/", "1e276f86-cd2a-72e7-fc9d-004f666f2981" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(8513);
        internalCounters.push_back(8812);
        internalCounters.push_back(9111);
        internalCounters.push_back(9410);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("PSSALUBusy", "PixelShader", "The percentage of GPUTime scalar ALU instructions are being processed by the PS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,4,/,(100),*", "2ff9f34f-e94b-af4d-18c2-5fbbf6d1727a" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(8513);
        internalCounters.push_back(8812);
        internalCounters.push_back(9111);
        internalCounters.push_back(9410);

        p.DefinePublicCounter("PSSALUBusyCycles", "PixelShader", "Number of GPU cycles where scalar ALU instructions are being processed by the PS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/", "29808906-f128-b078-fc79-820a4b3b3b8d" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(2914);
        internalCounters.push_back(3111);
        internalCounters.push_back(3308);
        internalCounters.push_back(3505);
        internalCounters.push_back(2920);
        internalCounters.push_back(3117);
        internalCounters.push_back(3314);
        internalCounters.push_back(3511);

        p.DefinePublicCounter("CSThreadGroups", "ComputeShader", "Total number of thread groups.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,sum8", "8ce3fc80-56b2-97f9-8e70-2e8c747cea68" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(2917);
        internalCounters.push_back(3114);
        internalCounters.push_back(3311);
        internalCounters.push_back(3508);
        internalCounters.push_back(2923);
        internalCounters.push_back(3120);
        internalCounters.push_back(3317);
        internalCounters.push_back(3514);

        p.DefinePublicCounter("CSWavefronts", "ComputeShader", "The total number of wavefronts used for the CS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,sum8", "42379c6e-369b-c237-8b25-cdb9cdc65c4d" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(2914);
        internalCounters.push_back(3111);
        internalCounters.push_back(3308);
        internalCounters.push_back(3505);
        internalCounters.push_back(2920);
        internalCounters.push_back(3117);
        internalCounters.push_back(3314);
        internalCounters.push_back(3511);
        internalCounters.push_back(3657);
        internalCounters.push_back(3956);
        internalCounters.push_back(4255);
        internalCounters.push_back(4554);

        p.DefinePublicCounter("CSThreads", "ComputeShader", "The number of CS threads processed by the hardware.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,2,3,4,5,6,7,sum8,8,9,10,11,sum4,ifnotzero", "7a648013-6eac-2665-ac36-13c6f4ac9c26" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(12041);
        internalCounters.push_back(12340);
        internalCounters.push_back(12639);
        internalCounters.push_back(12938);
        internalCounters.push_back(12019);
        internalCounters.push_back(12318);
        internalCounters.push_back(12617);
        internalCounters.push_back(12916);
        internalCounters.push_back(2914);
        internalCounters.push_back(3111);
        internalCounters.push_back(3308);
        internalCounters.push_back(3505);
        internalCounters.push_back(2920);
        internalCounters.push_back(3117);
        internalCounters.push_back(3314);
        internalCounters.push_back(3511);

        p.DefinePublicCounter("CSVALUInsts", "ComputeShader", "The average number of vector ALU instructions executed per work-item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,12,13,14,15,sum8,ifnotzero", "376cb1cc-5a40-9d1d-404c-f1736c0c5084" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(12104);
        internalCounters.push_back(12403);
        internalCounters.push_back(12702);
        internalCounters.push_back(13001);
        internalCounters.push_back(12096);
        internalCounters.push_back(12395);
        internalCounters.push_back(12694);
        internalCounters.push_back(12993);
        internalCounters.push_back(2914);
        internalCounters.push_back(3111);
        internalCounters.push_back(3308);
        internalCounters.push_back(3505);
        internalCounters.push_back(2920);
        internalCounters.push_back(3117);
        internalCounters.push_back(3314);
        internalCounters.push_back(3511);

        p.DefinePublicCounter("CSVALUUtilization", "ComputeShader", "The percentage of active vector ALU threads in a wave. A lower number can mean either more thread divergence in a wave or that the work-group size is not a multiple of 64. Value range: 0% (bad), 100% (ideal - no thread divergence).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,(64),*,/,(100),*,8,9,10,11,12,13,14,15,sum8,ifnotzero,(100),min", "4476879e-cdc0-d602-b24e-9b4a8d38438f" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(12045);
        internalCounters.push_back(12344);
        internalCounters.push_back(12643);
        internalCounters.push_back(12942);
        internalCounters.push_back(12019);
        internalCounters.push_back(12318);
        internalCounters.push_back(12617);
        internalCounters.push_back(12916);
        internalCounters.push_back(2914);
        internalCounters.push_back(3111);
        internalCounters.push_back(3308);
        internalCounters.push_back(3505);
        internalCounters.push_back(2920);
        internalCounters.push_back(3117);
        internalCounters.push_back(3314);
        internalCounters.push_back(3511);

        p.DefinePublicCounter("CSSALUInsts", "ComputeShader", "The average number of scalar ALU instructions executed per work-item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,12,13,14,15,sum8,ifnotzero", "eb211144-8136-ff86-e8bf-4d0493a904cb" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(12043);
        internalCounters.push_back(12342);
        internalCounters.push_back(12641);
        internalCounters.push_back(12940);
        internalCounters.push_back(13448);
        internalCounters.push_back(13567);
        internalCounters.push_back(13686);
        internalCounters.push_back(13805);
        internalCounters.push_back(13924);
        internalCounters.push_back(14043);
        internalCounters.push_back(14162);
        internalCounters.push_back(14281);
        internalCounters.push_back(14400);
        internalCounters.push_back(14519);
        internalCounters.push_back(14638);
        internalCounters.push_back(14757);
        internalCounters.push_back(14876);
        internalCounters.push_back(14995);
        internalCounters.push_back(15114);
        internalCounters.push_back(15233);
        internalCounters.push_back(15352);
        internalCounters.push_back(15471);
        internalCounters.push_back(15590);
        internalCounters.push_back(15709);
        internalCounters.push_back(15828);
        internalCounters.push_back(15947);
        internalCounters.push_back(16066);
        internalCounters.push_back(16185);
        internalCounters.push_back(16304);
        internalCounters.push_back(16423);
        internalCounters.push_back(16542);
        internalCounters.push_back(16661);
        internalCounters.push_back(16780);
        internalCounters.push_back(16899);
        internalCounters.push_back(17018);
        internalCounters.push_back(17137);
        internalCounters.push_back(17256);
        internalCounters.push_back(17375);
        internalCounters.push_back(17494);
        internalCounters.push_back(17613);
        internalCounters.push_back(17732);
        internalCounters.push_back(17851);
        internalCounters.push_back(17970);
        internalCounters.push_back(18089);
        internalCounters.push_back(18208);
        internalCounters.push_back(18327);
        internalCounters.push_back(18446);
        internalCounters.push_back(18565);
        internalCounters.push_back(18684);
        internalCounters.push_back(18803);
        internalCounters.push_back(18922);
        internalCounters.push_back(19041);
        internalCounters.push_back(19160);
        internalCounters.push_back(19279);
        internalCounters.push_back(19398);
        internalCounters.push_back(19517);
        internalCounters.push_back(19636);
        internalCounters.push_back(19755);
        internalCounters.push_back(19874);
        internalCounters.push_back(19993);
        internalCounters.push_back(20112);
        internalCounters.push_back(20231);
        internalCounters.push_back(20350);
        internalCounters.push_back(20469);
        internalCounters.push_back(20588);
        internalCounters.push_back(20707);
        internalCounters.push_back(20826);
        internalCounters.push_back(20945);
        internalCounters.push_back(12019);
        internalCounters.push_back(12318);
        internalCounters.push_back(12617);
        internalCounters.push_back(12916);
        internalCounters.push_back(2914);
        internalCounters.push_back(3111);
        internalCounters.push_back(3308);
        internalCounters.push_back(3505);
        internalCounters.push_back(2920);
        internalCounters.push_back(3117);
        internalCounters.push_back(3314);
        internalCounters.push_back(3511);

        p.DefinePublicCounter("CSVFetchInsts", "ComputeShader", "The average number of vector fetch instructions from the video memory executed per work-item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,sum64,-,68,69,70,71,sum4,/,72,73,74,75,76,77,78,79,sum8,ifnotzero", "3e2829c0-6215-783b-c271-6d57ff2c520e" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(12046);
        internalCounters.push_back(12345);
        internalCounters.push_back(12644);
        internalCounters.push_back(12943);
        internalCounters.push_back(12019);
        internalCounters.push_back(12318);
        internalCounters.push_back(12617);
        internalCounters.push_back(12916);
        internalCounters.push_back(2914);
        internalCounters.push_back(3111);
        internalCounters.push_back(3308);
        internalCounters.push_back(3505);
        internalCounters.push_back(2920);
        internalCounters.push_back(3117);
        internalCounters.push_back(3314);
        internalCounters.push_back(3511);

        p.DefinePublicCounter("CSSFetchInsts", "ComputeShader", "The average number of scalar fetch instructions from the video memory executed per work-item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,12,13,14,15,sum8,ifnotzero", "da09171c-6a0a-584f-fddc-dc5062d63a3e" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(12042);
        internalCounters.push_back(12341);
        internalCounters.push_back(12640);
        internalCounters.push_back(12939);
        internalCounters.push_back(13449);
        internalCounters.push_back(13568);
        internalCounters.push_back(13687);
        internalCounters.push_back(13806);
        internalCounters.push_back(13925);
        internalCounters.push_back(14044);
        internalCounters.push_back(14163);
        internalCounters.push_back(14282);
        internalCounters.push_back(14401);
        internalCounters.push_back(14520);
        internalCounters.push_back(14639);
        internalCounters.push_back(14758);
        internalCounters.push_back(14877);
        internalCounters.push_back(14996);
        internalCounters.push_back(15115);
        internalCounters.push_back(15234);
        internalCounters.push_back(15353);
        internalCounters.push_back(15472);
        internalCounters.push_back(15591);
        internalCounters.push_back(15710);
        internalCounters.push_back(15829);
        internalCounters.push_back(15948);
        internalCounters.push_back(16067);
        internalCounters.push_back(16186);
        internalCounters.push_back(16305);
        internalCounters.push_back(16424);
        internalCounters.push_back(16543);
        internalCounters.push_back(16662);
        internalCounters.push_back(16781);
        internalCounters.push_back(16900);
        internalCounters.push_back(17019);
        internalCounters.push_back(17138);
        internalCounters.push_back(17257);
        internalCounters.push_back(17376);
        internalCounters.push_back(17495);
        internalCounters.push_back(17614);
        internalCounters.push_back(17733);
        internalCounters.push_back(17852);
        internalCounters.push_back(17971);
        internalCounters.push_back(18090);
        internalCounters.push_back(18209);
        internalCounters.push_back(18328);
        internalCounters.push_back(18447);
        internalCounters.push_back(18566);
        internalCounters.push_back(18685);
        internalCounters.push_back(18804);
        internalCounters.push_back(18923);
        internalCounters.push_back(19042);
        internalCounters.push_back(19161);
        internalCounters.push_back(19280);
        internalCounters.push_back(19399);
        internalCounters.push_back(19518);
        internalCounters.push_back(19637);
        internalCounters.push_back(19756);
        internalCounters.push_back(19875);
        internalCounters.push_back(19994);
        internalCounters.push_back(20113);
        internalCounters.push_back(20232);
        internalCounters.push_back(20351);
        internalCounters.push_back(20470);
        internalCounters.push_back(20589);
        internalCounters.push_back(20708);
        internalCounters.push_back(20827);
        internalCounters.push_back(20946);
        internalCounters.push_back(12019);
        internalCounters.push_back(12318);
        internalCounters.push_back(12617);
        internalCounters.push_back(12916);
        internalCounters.push_back(2914);
        internalCounters.push_back(3111);
        internalCounters.push_back(3308);
        internalCounters.push_back(3505);
        internalCounters.push_back(2920);
        internalCounters.push_back(3117);
        internalCounters.push_back(3314);
        internalCounters.push_back(3511);

        p.DefinePublicCounter("CSVWriteInsts", "ComputeShader", "The average number of vector write instructions to the video memory executed per work-item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,sum64,-,68,69,70,71,sum4,/,72,73,74,75,76,77,78,79,sum8,ifnotzero", "43438c22-e910-b377-b767-b32902e0df0d" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(12047);
        internalCounters.push_back(12346);
        internalCounters.push_back(12645);
        internalCounters.push_back(12944);
        internalCounters.push_back(12048);
        internalCounters.push_back(12347);
        internalCounters.push_back(12646);
        internalCounters.push_back(12945);
        internalCounters.push_back(12019);
        internalCounters.push_back(12318);
        internalCounters.push_back(12617);
        internalCounters.push_back(12916);
        internalCounters.push_back(2914);
        internalCounters.push_back(3111);
        internalCounters.push_back(3308);
        internalCounters.push_back(3505);
        internalCounters.push_back(2920);
        internalCounters.push_back(3117);
        internalCounters.push_back(3314);
        internalCounters.push_back(3511);

        p.DefinePublicCounter("CSFlatVMemInsts", "ComputeShader", "The average number of FLAT instructions that read from or write to the video memory executed per work item (affected by flow control). Includes FLAT instructions that read from or write to scratch.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,-,8,9,10,11,sum4,/,12,13,14,15,16,17,18,19,sum8,ifnotzero", "2570b477-13e3-f5b6-e6ff-7159373bc74d" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(12096);
        internalCounters.push_back(12395);
        internalCounters.push_back(12694);
        internalCounters.push_back(12993);
        internalCounters.push_back(49743);
        internalCounters.push_back(2914);
        internalCounters.push_back(3111);
        internalCounters.push_back(3308);
        internalCounters.push_back(3505);
        internalCounters.push_back(2920);
        internalCounters.push_back(3117);
        internalCounters.push_back(3314);
        internalCounters.push_back(3511);

        p.DefinePublicCounter("CSVALUBusy", "ComputeShader", "The percentage of GPUTime vector ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*,5,6,7,8,9,10,11,12,sum8,ifnotzero", "f1e64815-f6a8-c277-d4f9-d054b443e205" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(12096);
        internalCounters.push_back(12395);
        internalCounters.push_back(12694);
        internalCounters.push_back(12993);

        p.DefinePublicCounter("CSVALUBusyCycles", "ComputeShader", "Number of GPU cycles where vector ALU instructions are processed.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/", "2d0d5852-2658-eb73-68d2-f23f7118c9c3" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(12101);
        internalCounters.push_back(12400);
        internalCounters.push_back(12699);
        internalCounters.push_back(12998);
        internalCounters.push_back(49743);
        internalCounters.push_back(2914);
        internalCounters.push_back(3111);
        internalCounters.push_back(3308);
        internalCounters.push_back(3505);
        internalCounters.push_back(2920);
        internalCounters.push_back(3117);
        internalCounters.push_back(3314);
        internalCounters.push_back(3511);

        p.DefinePublicCounter("CSSALUBusy", "ComputeShader", "The percentage of GPUTime scalar ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,1,2,3,sum4,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,4,/,(100),*,5,6,7,8,9,10,11,12,sum8,ifnotzero", "3fc35f4e-9882-94e3-6f5f-4e81cd97082a" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(12101);
        internalCounters.push_back(12400);
        internalCounters.push_back(12699);
        internalCounters.push_back(12998);

        p.DefinePublicCounter("CSSALUBusyCycles", "ComputeShader", "Number of GPU cycles where scalar ALU instructions are processed.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/", "de58f8fc-8ed4-a799-648d-62ded7b1c4c4" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(13362);
        internalCounters.push_back(13481);
        internalCounters.push_back(13600);
        internalCounters.push_back(13719);
        internalCounters.push_back(13838);
        internalCounters.push_back(13957);
        internalCounters.push_back(14076);
        internalCounters.push_back(14195);
        internalCounters.push_back(14314);
        internalCounters.push_back(14433);
        internalCounters.push_back(14552);
        internalCounters.push_back(14671);
        internalCounters.push_back(14790);
        internalCounters.push_back(14909);
        internalCounters.push_back(15028);
        internalCounters.push_back(15147);
        internalCounters.push_back(15266);
        internalCounters.push_back(15385);
        internalCounters.push_back(15504);
        internalCounters.push_back(15623);
        internalCounters.push_back(15742);
        internalCounters.push_back(15861);
        internalCounters.push_back(15980);
        internalCounters.push_back(16099);
        internalCounters.push_back(16218);
        internalCounters.push_back(16337);
        internalCounters.push_back(16456);
        internalCounters.push_back(16575);
        internalCounters.push_back(16694);
        internalCounters.push_back(16813);
        internalCounters.push_back(16932);
        internalCounters.push_back(17051);
        internalCounters.push_back(17170);
        internalCounters.push_back(17289);
        internalCounters.push_back(17408);
        internalCounters.push_back(17527);
        internalCounters.push_back(17646);
        internalCounters.push_back(17765);
        internalCounters.push_back(17884);
        internalCounters.push_back(18003);
        internalCounters.push_back(18122);
        internalCounters.push_back(18241);
        internalCounters.push_back(18360);
        internalCounters.push_back(18479);
        internalCounters.push_back(18598);
        internalCounters.push_back(18717);
        internalCounters.push_back(18836);
        internalCounters.push_back(18955);
        internalCounters.push_back(19074);
        internalCounters.push_back(19193);
        internalCounters.push_back(19312);
        internalCounters.push_back(19431);
        internalCounters.push_back(19550);
        internalCounters.push_back(19669);
        internalCounters.push_back(19788);
        internalCounters.push_back(19907);
        internalCounters.push_back(20026);
        internalCounters.push_back(20145);
        internalCounters.push_back(20264);
        internalCounters.push_back(20383);
        internalCounters.push_back(20502);
        internalCounters.push_back(20621);
        internalCounters.push_back(20740);
        internalCounters.push_back(20859);
        internalCounters.push_back(49743);
        internalCounters.push_back(2914);
        internalCounters.push_back(3111);
        internalCounters.push_back(3308);
        internalCounters.push_back(3505);
        internalCounters.push_back(2920);
        internalCounters.push_back(3117);
        internalCounters.push_back(3314);
        internalCounters.push_back(3511);

        p.DefinePublicCounter("CSMemUnitBusy", "ComputeShader", "The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64,64,/,(100),*,65,66,67,68,69,70,71,72,sum8,ifnotzero", "42ab96e1-0a24-96c8-c4ff-098fa267d78e" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(13362);
        internalCounters.push_back(13481);
        internalCounters.push_back(13600);
        internalCounters.push_back(13719);
        internalCounters.push_back(13838);
        internalCounters.push_back(13957);
        internalCounters.push_back(14076);
        internalCounters.push_back(14195);
        internalCounters.push_back(14314);
        internalCounters.push_back(14433);
        internalCounters.push_back(14552);
        internalCounters.push_back(14671);
        internalCounters.push_back(14790);
        internalCounters.push_back(14909);
        internalCounters.push_back(15028);
        internalCounters.push_back(15147);
        internalCounters.push_back(15266);
        internalCounters.push_back(15385);
        internalCounters.push_back(15504);
        internalCounters.push_back(15623);
        internalCounters.push_back(15742);
        internalCounters.push_back(15861);
        internalCounters.push_back(15980);
        internalCounters.push_back(16099);
        internalCounters.push_back(16218);
        internalCounters.push_back(16337);
        internalCounters.push_back(16456);
        internalCounters.push_back(16575);
        internalCounters.push_back(16694);
        internalCounters.push_back(16813);
        internalCounters.push_back(16932);
        internalCounters.push_back(17051);
        internalCounters.push_back(17170);
        internalCounters.push_back(17289);
        internalCounters.push_back(17408);
        internalCounters.push_back(17527);
        internalCounters.push_back(17646);
        internalCounters.push_back(17765);
        internalCounters.push_back(17884);
        internalCounters.push_back(18003);
        internalCounters.push_back(18122);
        internalCounters.push_back(18241);
        internalCounters.push_back(18360);
        internalCounters.push_back(18479);
        internalCounters.push_back(18598);
        internalCounters.push_back(18717);
        internalCounters.push_back(18836);
        internalCounters.push_back(18955);
        internalCounters.push_back(19074);
        internalCounters.push_back(19193);
        internalCounters.push_back(19312);
        internalCounters.push_back(19431);
        internalCounters.push_back(19550);
        internalCounters.push_back(19669);
        internalCounters.push_back(19788);
        internalCounters.push_back(19907);
        internalCounters.push_back(20026);
        internalCounters.push_back(20145);
        internalCounters.push_back(20264);
        internalCounters.push_back(20383);
        internalCounters.push_back(20502);
        internalCounters.push_back(20621);
        internalCounters.push_back(20740);
        internalCounters.push_back(20859);

        p.DefinePublicCounter("CSMemUnitBusyCycles", "ComputeShader", "Number of GPU cycles the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64", "39d5687f-c727-7c0c-af82-bb711d3897ed" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(24486);
        internalCounters.push_back(24666);
        internalCounters.push_back(24846);
        internalCounters.push_back(25026);
        internalCounters.push_back(25206);
        internalCounters.push_back(25386);
        internalCounters.push_back(25566);
        internalCounters.push_back(25746);
        internalCounters.push_back(25926);
        internalCounters.push_back(26106);
        internalCounters.push_back(26286);
        internalCounters.push_back(26466);
        internalCounters.push_back(26646);
        internalCounters.push_back(26826);
        internalCounters.push_back(27006);
        internalCounters.push_back(27186);
        internalCounters.push_back(27366);
        internalCounters.push_back(27546);
        internalCounters.push_back(27726);
        internalCounters.push_back(27906);
        internalCounters.push_back(28086);
        internalCounters.push_back(28266);
        internalCounters.push_back(28446);
        internalCounters.push_back(28626);
        internalCounters.push_back(28806);
        internalCounters.push_back(28986);
        internalCounters.push_back(29166);
        internalCounters.push_back(29346);
        internalCounters.push_back(29526);
        internalCounters.push_back(29706);
        internalCounters.push_back(29886);
        internalCounters.push_back(30066);
        internalCounters.push_back(30246);
        internalCounters.push_back(30426);
        internalCounters.push_back(30606);
        internalCounters.push_back(30786);
        internalCounters.push_back(30966);
        internalCounters.push_back(31146);
        internalCounters.push_back(31326);
        internalCounters.push_back(31506);
        internalCounters.push_back(31686);
        internalCounters.push_back(31866);
        internalCounters.push_back(32046);
        internalCounters.push_back(32226);
        internalCounters.push_back(32406);
        internalCounters.push_back(32586);
        internalCounters.push_back(32766);
        internalCounters.push_back(32946);
        internalCounters.push_back(33126);
        internalCounters.push_back(33306);
        internalCounters.push_back(33486);
        internalCounters.push_back(33666);
        internalCounters.push_back(33846);
        internalCounters.push_back(34026);
        internalCounters.push_back(34206);
        internalCounters.push_back(34386);
        internalCounters.push_back(34566);
        internalCounters.push_back(34746);
        internalCounters.push_back(34926);
        internalCounters.push_back(35106);
        internalCounters.push_back(35286);
        internalCounters.push_back(35466);
        internalCounters.push_back(35646);
        internalCounters.push_back(35826);
        internalCounters.push_back(49743);
        internalCounters.push_back(2914);
        internalCounters.push_back(3111);
        internalCounters.push_back(3308);
        internalCounters.push_back(3505);
        internalCounters.push_back(2920);
        internalCounters.push_back(3117);
        internalCounters.push_back(3314);
        internalCounters.push_back(3511);

        p.DefinePublicCounter("CSMemUnitStalled", "ComputeShader", "The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64,64,/,(100),*,65,66,67,68,69,70,71,72,sum8,ifnotzero", "f18e8679-1511-d533-d9ee-4365197f7d0c" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(24486);
        internalCounters.push_back(24666);
        internalCounters.push_back(24846);
        internalCounters.push_back(25026);
        internalCounters.push_back(25206);
        internalCounters.push_back(25386);
        internalCounters.push_back(25566);
        internalCounters.push_back(25746);
        internalCounters.push_back(25926);
        internalCounters.push_back(26106);
        internalCounters.push_back(26286);
        internalCounters.push_back(26466);
        internalCounters.push_back(26646);
        internalCounters.push_back(26826);
        internalCounters.push_back(27006);
        internalCounters.push_back(27186);
        internalCounters.push_back(27366);
        internalCounters.push_back(27546);
        internalCounters.push_back(27726);
        internalCounters.push_back(27906);
        internalCounters.push_back(28086);
        internalCounters.push_back(28266);
        internalCounters.push_back(28446);
        internalCounters.push_back(28626);
        internalCounters.push_back(28806);
        internalCounters.push_back(28986);
        internalCounters.push_back(29166);
        internalCounters.push_back(29346);
        internalCounters.push_back(29526);
        internalCounters.push_back(29706);
        internalCounters.push_back(29886);
        internalCounters.push_back(30066);
        internalCounters.push_back(30246);
        internalCounters.push_back(30426);
        internalCounters.push_back(30606);
        internalCounters.push_back(30786);
        internalCounters.push_back(30966);
        internalCounters.push_back(31146);
        internalCounters.push_back(31326);
        internalCounters.push_back(31506);
        internalCounters.push_back(31686);
        internalCounters.push_back(31866);
        internalCounters.push_back(32046);
        internalCounters.push_back(32226);
        internalCounters.push_back(32406);
        internalCounters.push_back(32586);
        internalCounters.push_back(32766);
        internalCounters.push_back(32946);
        internalCounters.push_back(33126);
        internalCounters.push_back(33306);
        internalCounters.push_back(33486);
        internalCounters.push_back(33666);
        internalCounters.push_back(33846);
        internalCounters.push_back(34026);
        internalCounters.push_back(34206);
        internalCounters.push_back(34386);
        internalCounters.push_back(34566);
        internalCounters.push_back(34746);
        internalCounters.push_back(34926);
        internalCounters.push_back(35106);
        internalCounters.push_back(35286);
        internalCounters.push_back(35466);
        internalCounters.push_back(35646);
        internalCounters.push_back(35826);

        p.DefinePublicCounter("CSMemUnitStalledCycles", "ComputeShader", "Number of GPU cycles the memory unit is stalled. Try reducing the number or size of fetches and writes if possible.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64", "51991c84-ed2b-bf31-c4ab-8f8e9eb8f29f" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(36031);
        internalCounters.push_back(36223);
        internalCounters.push_back(36415);
        internalCounters.push_back(36607);
        internalCounters.push_back(36799);
        internalCounters.push_back(36991);
        internalCounters.push_back(37183);
        internalCounters.push_back(37375);
        internalCounters.push_back(37567);
        internalCounters.push_back(37759);
        internalCounters.push_back(37951);
        internalCounters.push_back(38143);
        internalCounters.push_back(38335);
        internalCounters.push_back(38527);
        internalCounters.push_back(38719);
        internalCounters.push_back(38911);

        p.DefinePublicCounter("CSWriteUnitStalledCycles", "ComputeShader", "Number of GPU cycles the write unit is stalled.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16", "be164c60-5e48-acac-9622-29616d09aa9a" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(12050);
        internalCounters.push_back(12349);
        internalCounters.push_back(12648);
        internalCounters.push_back(12947);
        internalCounters.push_back(12019);
        internalCounters.push_back(12318);
        internalCounters.push_back(12617);
        internalCounters.push_back(12916);
        internalCounters.push_back(2914);
        internalCounters.push_back(3111);
        internalCounters.push_back(3308);
        internalCounters.push_back(3505);
        internalCounters.push_back(2920);
        internalCounters.push_back(3117);
        internalCounters.push_back(3314);
        internalCounters.push_back(3511);

        p.DefinePublicCounter("CSGDSInsts", "ComputeShader", "The average number of GDS read or GDS write instructions executed per work item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,12,13,14,15,sum8,ifnotzero", "2a867f3e-4a37-ad16-55d1-f03d74707819" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(12049);
        internalCounters.push_back(12348);
        internalCounters.push_back(12647);
        internalCounters.push_back(12946);
        internalCounters.push_back(12047);
        internalCounters.push_back(12346);
        internalCounters.push_back(12645);
        internalCounters.push_back(12944);
        internalCounters.push_back(12019);
        internalCounters.push_back(12318);
        internalCounters.push_back(12617);
        internalCounters.push_back(12916);
        internalCounters.push_back(2914);
        internalCounters.push_back(3111);
        internalCounters.push_back(3308);
        internalCounters.push_back(3505);
        internalCounters.push_back(2920);
        internalCounters.push_back(3117);
        internalCounters.push_back(3314);
        internalCounters.push_back(3511);

        p.DefinePublicCounter("CSLDSInsts", "ComputeShader", "The average number of LDS read/write instructions executed per work-item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,-,8,9,10,11,sum4,/,12,13,14,15,16,17,18,19,sum8,ifnotzero", "61b0b351-7e06-ef8e-a8e0-7a9e3200a836" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(12048);
        internalCounters.push_back(12347);
        internalCounters.push_back(12646);
        internalCounters.push_back(12945);
        internalCounters.push_back(12019);
        internalCounters.push_back(12318);
        internalCounters.push_back(12617);
        internalCounters.push_back(12916);
        internalCounters.push_back(2914);
        internalCounters.push_back(3111);
        internalCounters.push_back(3308);
        internalCounters.push_back(3505);
        internalCounters.push_back(2920);
        internalCounters.push_back(3117);
        internalCounters.push_back(3314);
        internalCounters.push_back(3511);

        p.DefinePublicCounter("CSFlatLDSInsts", "ComputeShader", "The average number of FLAT instructions that read from or write to LDS executed per work item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,12,13,14,15,sum8,ifnotzero", "99672cda-de2b-014c-482e-cf73b90068d5" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(12076);
        internalCounters.push_back(12375);
        internalCounters.push_back(12674);
        internalCounters.push_back(12973);
        internalCounters.push_back(12019);
        internalCounters.push_back(12318);
        internalCounters.push_back(12617);
        internalCounters.push_back(12916);
        internalCounters.push_back(49743);
        internalCounters.push_back(2914);
        internalCounters.push_back(3111);
        internalCounters.push_back(3308);
        internalCounters.push_back(3505);
        internalCounters.push_back(2920);
        internalCounters.push_back(3117);
        internalCounters.push_back(3314);
        internalCounters.push_back(3511);

        p.DefinePublicCounter("CSALUStalledByLDS", "ComputeShader", "The percentage of GPUTime ALU units are stalled by the LDS input queue being full or the output queue being not ready. If there are LDS bank conflicts, reduce them. Otherwise, try reducing the number of LDS accesses if possible. Value range: 0% (optimal) to 100% (bad).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,/,NUM_SHADER_ENGINES,/,(100),*,9,10,11,12,13,14,15,16,sum8,ifnotzero", "6dc4f1c2-bad0-c9ff-156e-883b319a752a" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(12076);
        internalCounters.push_back(12375);
        internalCounters.push_back(12674);
        internalCounters.push_back(12973);

        p.DefinePublicCounter("CSALUStalledByLDSCycles", "ComputeShader", "Number of GPU cycles the ALU units are stalled by the LDS input queue being full or the output queue being not ready. If there are LDS bank conflicts, reduce them. Otherwise, try reducing the number of LDS accesses if possible.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,sum4,NUM_SHADER_ENGINES,/", "8f3d5f25-2159-0374-fafe-e26a7799b6c8" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(12112);
        internalCounters.push_back(12411);
        internalCounters.push_back(12710);
        internalCounters.push_back(13009);
        internalCounters.push_back(49743);
        internalCounters.push_back(2914);
        internalCounters.push_back(3111);
        internalCounters.push_back(3308);
        internalCounters.push_back(3505);
        internalCounters.push_back(2920);
        internalCounters.push_back(3117);
        internalCounters.push_back(3314);
        internalCounters.push_back(3511);

        p.DefinePublicCounter("CSLDSBankConflict", "ComputeShader", "The percentage of GPUTime LDS is stalled by bank conflicts. Value range: 0% (optimal) to 100% (bad).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,1,2,3,sum4,4,/,NUM_SIMDS,/,(100),*,5,6,7,8,9,10,11,12,sum8,ifnotzero", "1065ee10-2e41-ea41-1eb3-b61b491752f4" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(12112);
        internalCounters.push_back(12411);
        internalCounters.push_back(12710);
        internalCounters.push_back(13009);

        p.DefinePublicCounter("CSLDSBankConflictCycles", "ComputeShader", "Number of GPU cycles the LDS is stalled by bank conflicts. Value range: 0 (optimal) to GPUBusyCycles (bad).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,sum4,NUM_SIMDS,/", "1fd1adf3-c51e-94fd-083e-c482a0a0809e" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(13362);
        internalCounters.push_back(13481);
        internalCounters.push_back(13600);
        internalCounters.push_back(13719);
        internalCounters.push_back(13838);
        internalCounters.push_back(13957);
        internalCounters.push_back(14076);
        internalCounters.push_back(14195);
        internalCounters.push_back(14314);
        internalCounters.push_back(14433);
        internalCounters.push_back(14552);
        internalCounters.push_back(14671);
        internalCounters.push_back(14790);
        internalCounters.push_back(14909);
        internalCounters.push_back(15028);
        internalCounters.push_back(15147);
        internalCounters.push_back(15266);
        internalCounters.push_back(15385);
        internalCounters.push_back(15504);
        internalCounters.push_back(15623);
        internalCounters.push_back(15742);
        internalCounters.push_back(15861);
        internalCounters.push_back(15980);
        internalCounters.push_back(16099);
        internalCounters.push_back(16218);
        internalCounters.push_back(16337);
        internalCounters.push_back(16456);
        internalCounters.push_back(16575);
        internalCounters.push_back(16694);
        internalCounters.push_back(16813);
        internalCounters.push_back(16932);
        internalCounters.push_back(17051);
        internalCounters.push_back(17170);
        internalCounters.push_back(17289);
        internalCounters.push_back(17408);
        internalCounters.push_back(17527);
        internalCounters.push_back(17646);
        internalCounters.push_back(17765);
        internalCounters.push_back(17884);
        internalCounters.push_back(18003);
        internalCounters.push_back(18122);
        internalCounters.push_back(18241);
        internalCounters.push_back(18360);
        internalCounters.push_back(18479);
        internalCounters.push_back(18598);
        internalCounters.push_back(18717);
        internalCounters.push_back(18836);
        internalCounters.push_back(18955);
        internalCounters.push_back(19074);
        internalCounters.push_back(19193);
        internalCounters.push_back(19312);
        internalCounters.push_back(19431);
        internalCounters.push_back(19550);
        internalCounters.push_back(19669);
        internalCounters.push_back(19788);
        internalCounters.push_back(19907);
        internalCounters.push_back(20026);
        internalCounters.push_back(20145);
        internalCounters.push_back(20264);
        internalCounters.push_back(20383);
        internalCounters.push_back(20502);
        internalCounters.push_back(20621);
        internalCounters.push_back(20740);
        internalCounters.push_back(20859);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("TexUnitBusy", "Timing", "The percentage of GPUTime the texture unit is active. This is measured with all extra fetches and any cache or memory effects taken into account.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64,64,/,(100),*", "36afb8d9-42fc-aafe-66c5-449542153b2c" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(13362);
        internalCounters.push_back(13481);
        internalCounters.push_back(13600);
        internalCounters.push_back(13719);
        internalCounters.push_back(13838);
        internalCounters.push_back(13957);
        internalCounters.push_back(14076);
        internalCounters.push_back(14195);
        internalCounters.push_back(14314);
        internalCounters.push_back(14433);
        internalCounters.push_back(14552);
        internalCounters.push_back(14671);
        internalCounters.push_back(14790);
        internalCounters.push_back(14909);
        internalCounters.push_back(15028);
        internalCounters.push_back(15147);
        internalCounters.push_back(15266);
        internalCounters.push_back(15385);
        internalCounters.push_back(15504);
        internalCounters.push_back(15623);
        internalCounters.push_back(15742);
        internalCounters.push_back(15861);
        internalCounters.push_back(15980);
        internalCounters.push_back(16099);
        internalCounters.push_back(16218);
        internalCounters.push_back(16337);
        internalCounters.push_back(16456);
        internalCounters.push_back(16575);
        internalCounters.push_back(16694);
        internalCounters.push_back(16813);
        internalCounters.push_back(16932);
        internalCounters.push_back(17051);
        internalCounters.push_back(17170);
        internalCounters.push_back(17289);
        internalCounters.push_back(17408);
        internalCounters.push_back(17527);
        internalCounters.push_back(17646);
        internalCounters.push_back(17765);
        internalCounters.push_back(17884);
        internalCounters.push_back(18003);
        internalCounters.push_back(18122);
        internalCounters.push_back(18241);
        internalCounters.push_back(18360);
        internalCounters.push_back(18479);
        internalCounters.push_back(18598);
        internalCounters.push_back(18717);
        internalCounters.push_back(18836);
        internalCounters.push_back(18955);
        internalCounters.push_back(19074);
        internalCounters.push_back(19193);
        internalCounters.push_back(19312);
        internalCounters.push_back(19431);
        internalCounters.push_back(19550);
        internalCounters.push_back(19669);
        internalCounters.push_back(19788);
        internalCounters.push_back(19907);
        internalCounters.push_back(20026);
        internalCounters.push_back(20145);
        internalCounters.push_back(20264);
        internalCounters.push_back(20383);
        internalCounters.push_back(20502);
        internalCounters.push_back(20621);
        internalCounters.push_back(20740);
        internalCounters.push_back(20859);

        p.DefinePublicCounter("TexUnitBusyCycles", "Timing", "Number of GPU cycles the texture unit is active. This is measured with all extra fetches and any cache or memory effects taken into account.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64", "c68761f2-248c-4f39-6528-c308b1c0807c" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(13416);
        internalCounters.push_back(13535);
        internalCounters.push_back(13654);
        internalCounters.push_back(13773);
        internalCounters.push_back(13892);
        internalCounters.push_back(14011);
        internalCounters.push_back(14130);
        internalCounters.push_back(14249);
        internalCounters.push_back(14368);
        internalCounters.push_back(14487);
        internalCounters.push_back(14606);
        internalCounters.push_back(14725);
        internalCounters.push_back(14844);
        internalCounters.push_back(14963);
        internalCounters.push_back(15082);
        internalCounters.push_back(15201);
        internalCounters.push_back(15320);
        internalCounters.push_back(15439);
        internalCounters.push_back(15558);
        internalCounters.push_back(15677);
        internalCounters.push_back(15796);
        internalCounters.push_back(15915);
        internalCounters.push_back(16034);
        internalCounters.push_back(16153);
        internalCounters.push_back(16272);
        internalCounters.push_back(16391);
        internalCounters.push_back(16510);
        internalCounters.push_back(16629);
        internalCounters.push_back(16748);
        internalCounters.push_back(16867);
        internalCounters.push_back(16986);
        internalCounters.push_back(17105);
        internalCounters.push_back(17224);
        internalCounters.push_back(17343);
        internalCounters.push_back(17462);
        internalCounters.push_back(17581);
        internalCounters.push_back(17700);
        internalCounters.push_back(17819);
        internalCounters.push_back(17938);
        internalCounters.push_back(18057);
        internalCounters.push_back(18176);
        internalCounters.push_back(18295);
        internalCounters.push_back(18414);
        internalCounters.push_back(18533);
        internalCounters.push_back(18652);
        internalCounters.push_back(18771);
        internalCounters.push_back(18890);
        internalCounters.push_back(19009);
        internalCounters.push_back(19128);
        internalCounters.push_back(19247);
        internalCounters.push_back(19366);
        internalCounters.push_back(19485);
        internalCounters.push_back(19604);
        internalCounters.push_back(19723);
        internalCounters.push_back(19842);
        internalCounters.push_back(19961);
        internalCounters.push_back(20080);
        internalCounters.push_back(20199);
        internalCounters.push_back(20318);
        internalCounters.push_back(20437);
        internalCounters.push_back(20556);
        internalCounters.push_back(20675);
        internalCounters.push_back(20794);
        internalCounters.push_back(20913);
        internalCounters.push_back(13415);
        internalCounters.push_back(13534);
        internalCounters.push_back(13653);
        internalCounters.push_back(13772);
        internalCounters.push_back(13891);
        internalCounters.push_back(14010);
        internalCounters.push_back(14129);
        internalCounters.push_back(14248);
        internalCounters.push_back(14367);
        internalCounters.push_back(14486);
        internalCounters.push_back(14605);
        internalCounters.push_back(14724);
        internalCounters.push_back(14843);
        internalCounters.push_back(14962);
        internalCounters.push_back(15081);
        internalCounters.push_back(15200);
        internalCounters.push_back(15319);
        internalCounters.push_back(15438);
        internalCounters.push_back(15557);
        internalCounters.push_back(15676);
        internalCounters.push_back(15795);
        internalCounters.push_back(15914);
        internalCounters.push_back(16033);
        internalCounters.push_back(16152);
        internalCounters.push_back(16271);
        internalCounters.push_back(16390);
        internalCounters.push_back(16509);
        internalCounters.push_back(16628);
        internalCounters.push_back(16747);
        internalCounters.push_back(16866);
        internalCounters.push_back(16985);
        internalCounters.push_back(17104);
        internalCounters.push_back(17223);
        internalCounters.push_back(17342);
        internalCounters.push_back(17461);
        internalCounters.push_back(17580);
        internalCounters.push_back(17699);
        internalCounters.push_back(17818);
        internalCounters.push_back(17937);
        internalCounters.push_back(18056);
        internalCounters.push_back(18175);
        internalCounters.push_back(18294);
        internalCounters.push_back(18413);
        internalCounters.push_back(18532);
        internalCounters.push_back(18651);
        internalCounters.push_back(18770);
        internalCounters.push_back(18889);
        internalCounters.push_back(19008);
        internalCounters.push_back(19127);
        internalCounters.push_back(19246);
        internalCounters.push_back(19365);
        internalCounters.push_back(19484);
        internalCounters.push_back(19603);
        internalCounters.push_back(19722);
        internalCounters.push_back(19841);
        internalCounters.push_back(19960);
        internalCounters.push_back(20079);
        internalCounters.push_back(20198);
        internalCounters.push_back(20317);
        internalCounters.push_back(20436);
        internalCounters.push_back(20555);
        internalCounters.push_back(20674);
        internalCounters.push_back(20793);
        internalCounters.push_back(20912);

        p.DefinePublicCounter("TexTriFilteringPct", "TextureUnit", "Percentage of pixels that received trilinear filtering. Note that not all pixels for which trilinear filtering is enabled will receive it (e.g. if the texture is magnified).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,sum64,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,+,/,(100),*", "1affc3c8-b917-5c81-622b-7004527208ae" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(13416);
        internalCounters.push_back(13535);
        internalCounters.push_back(13654);
        internalCounters.push_back(13773);
        internalCounters.push_back(13892);
        internalCounters.push_back(14011);
        internalCounters.push_back(14130);
        internalCounters.push_back(14249);
        internalCounters.push_back(14368);
        internalCounters.push_back(14487);
        internalCounters.push_back(14606);
        internalCounters.push_back(14725);
        internalCounters.push_back(14844);
        internalCounters.push_back(14963);
        internalCounters.push_back(15082);
        internalCounters.push_back(15201);
        internalCounters.push_back(15320);
        internalCounters.push_back(15439);
        internalCounters.push_back(15558);
        internalCounters.push_back(15677);
        internalCounters.push_back(15796);
        internalCounters.push_back(15915);
        internalCounters.push_back(16034);
        internalCounters.push_back(16153);
        internalCounters.push_back(16272);
        internalCounters.push_back(16391);
        internalCounters.push_back(16510);
        internalCounters.push_back(16629);
        internalCounters.push_back(16748);
        internalCounters.push_back(16867);
        internalCounters.push_back(16986);
        internalCounters.push_back(17105);
        internalCounters.push_back(17224);
        internalCounters.push_back(17343);
        internalCounters.push_back(17462);
        internalCounters.push_back(17581);
        internalCounters.push_back(17700);
        internalCounters.push_back(17819);
        internalCounters.push_back(17938);
        internalCounters.push_back(18057);
        internalCounters.push_back(18176);
        internalCounters.push_back(18295);
        internalCounters.push_back(18414);
        internalCounters.push_back(18533);
        internalCounters.push_back(18652);
        internalCounters.push_back(18771);
        internalCounters.push_back(18890);
        internalCounters.push_back(19009);
        internalCounters.push_back(19128);
        internalCounters.push_back(19247);
        internalCounters.push_back(19366);
        internalCounters.push_back(19485);
        internalCounters.push_back(19604);
        internalCounters.push_back(19723);
        internalCounters.push_back(19842);
        internalCounters.push_back(19961);
        internalCounters.push_back(20080);
        internalCounters.push_back(20199);
        internalCounters.push_back(20318);
        internalCounters.push_back(20437);
        internalCounters.push_back(20556);
        internalCounters.push_back(20675);
        internalCounters.push_back(20794);
        internalCounters.push_back(20913);

        p.DefinePublicCounter("TexTriFilteringCount", "TextureUnit", "Count of pixels that received trilinear filtering. Note that not all pixels for which trilinear filtering is enabled will receive it (e.g. if the texture is magnified).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64", "5785b3a1-a513-18db-4b1c-bdeef75bb2b6" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(13415);
        internalCounters.push_back(13534);
        internalCounters.push_back(13653);
        internalCounters.push_back(13772);
        internalCounters.push_back(13891);
        internalCounters.push_back(14010);
        internalCounters.push_back(14129);
        internalCounters.push_back(14248);
        internalCounters.push_back(14367);
        internalCounters.push_back(14486);
        internalCounters.push_back(14605);
        internalCounters.push_back(14724);
        internalCounters.push_back(14843);
        internalCounters.push_back(14962);
        internalCounters.push_back(15081);
        internalCounters.push_back(15200);
        internalCounters.push_back(15319);
        internalCounters.push_back(15438);
        internalCounters.push_back(15557);
        internalCounters.push_back(15676);
        internalCounters.push_back(15795);
        internalCounters.push_back(15914);
        internalCounters.push_back(16033);
        internalCounters.push_back(16152);
        internalCounters.push_back(16271);
        internalCounters.push_back(16390);
        internalCounters.push_back(16509);
        internalCounters.push_back(16628);
        internalCounters.push_back(16747);
        internalCounters.push_back(16866);
        internalCounters.push_back(16985);
        internalCounters.push_back(17104);
        internalCounters.push_back(17223);
        internalCounters.push_back(17342);
        internalCounters.push_back(17461);
        internalCounters.push_back(17580);
        internalCounters.push_back(17699);
        internalCounters.push_back(17818);
        internalCounters.push_back(17937);
        internalCounters.push_back(18056);
        internalCounters.push_back(18175);
        internalCounters.push_back(18294);
        internalCounters.push_back(18413);
        internalCounters.push_back(18532);
        internalCounters.push_back(18651);
        internalCounters.push_back(18770);
        internalCounters.push_back(18889);
        internalCounters.push_back(19008);
        internalCounters.push_back(19127);
        internalCounters.push_back(19246);
        internalCounters.push_back(19365);
        internalCounters.push_back(19484);
        internalCounters.push_back(19603);
        internalCounters.push_back(19722);
        internalCounters.push_back(19841);
        internalCounters.push_back(19960);
        internalCounters.push_back(20079);
        internalCounters.push_back(20198);
        internalCounters.push_back(20317);
        internalCounters.push_back(20436);
        internalCounters.push_back(20555);
        internalCounters.push_back(20674);
        internalCounters.push_back(20793);
        internalCounters.push_back(20912);

        p.DefinePublicCounter("NoTexTriFilteringCount", "TextureUnit", "Count of pixels that did not receive trilinear filtering.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64", "179da29a-81af-c06e-ce8c-a0a731ea030d" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(13418);
        internalCounters.push_back(13537);
        internalCounters.push_back(13656);
        internalCounters.push_back(13775);
        internalCounters.push_back(13894);
        internalCounters.push_back(14013);
        internalCounters.push_back(14132);
        internalCounters.push_back(14251);
        internalCounters.push_back(14370);
        internalCounters.push_back(14489);
        internalCounters.push_back(14608);
        internalCounters.push_back(14727);
        internalCounters.push_back(14846);
        internalCounters.push_back(14965);
        internalCounters.push_back(15084);
        internalCounters.push_back(15203);
        internalCounters.push_back(15322);
        internalCounters.push_back(15441);
        internalCounters.push_back(15560);
        internalCounters.push_back(15679);
        internalCounters.push_back(15798);
        internalCounters.push_back(15917);
        internalCounters.push_back(16036);
        internalCounters.push_back(16155);
        internalCounters.push_back(16274);
        internalCounters.push_back(16393);
        internalCounters.push_back(16512);
        internalCounters.push_back(16631);
        internalCounters.push_back(16750);
        internalCounters.push_back(16869);
        internalCounters.push_back(16988);
        internalCounters.push_back(17107);
        internalCounters.push_back(17226);
        internalCounters.push_back(17345);
        internalCounters.push_back(17464);
        internalCounters.push_back(17583);
        internalCounters.push_back(17702);
        internalCounters.push_back(17821);
        internalCounters.push_back(17940);
        internalCounters.push_back(18059);
        internalCounters.push_back(18178);
        internalCounters.push_back(18297);
        internalCounters.push_back(18416);
        internalCounters.push_back(18535);
        internalCounters.push_back(18654);
        internalCounters.push_back(18773);
        internalCounters.push_back(18892);
        internalCounters.push_back(19011);
        internalCounters.push_back(19130);
        internalCounters.push_back(19249);
        internalCounters.push_back(19368);
        internalCounters.push_back(19487);
        internalCounters.push_back(19606);
        internalCounters.push_back(19725);
        internalCounters.push_back(19844);
        internalCounters.push_back(19963);
        internalCounters.push_back(20082);
        internalCounters.push_back(20201);
        internalCounters.push_back(20320);
        internalCounters.push_back(20439);
        internalCounters.push_back(20558);
        internalCounters.push_back(20677);
        internalCounters.push_back(20796);
        internalCounters.push_back(20915);
        internalCounters.push_back(13417);
        internalCounters.push_back(13536);
        internalCounters.push_back(13655);
        internalCounters.push_back(13774);
        internalCounters.push_back(13893);
        internalCounters.push_back(14012);
        internalCounters.push_back(14131);
        internalCounters.push_back(14250);
        internalCounters.push_back(14369);
        internalCounters.push_back(14488);
        internalCounters.push_back(14607);
        internalCounters.push_back(14726);
        internalCounters.push_back(14845);
        internalCounters.push_back(14964);
        internalCounters.push_back(15083);
        internalCounters.push_back(15202);
        internalCounters.push_back(15321);
        internalCounters.push_back(15440);
        internalCounters.push_back(15559);
        internalCounters.push_back(15678);
        internalCounters.push_back(15797);
        internalCounters.push_back(15916);
        internalCounters.push_back(16035);
        internalCounters.push_back(16154);
        internalCounters.push_back(16273);
        internalCounters.push_back(16392);
        internalCounters.push_back(16511);
        internalCounters.push_back(16630);
        internalCounters.push_back(16749);
        internalCounters.push_back(16868);
        internalCounters.push_back(16987);
        internalCounters.push_back(17106);
        internalCounters.push_back(17225);
        internalCounters.push_back(17344);
        internalCounters.push_back(17463);
        internalCounters.push_back(17582);
        internalCounters.push_back(17701);
        internalCounters.push_back(17820);
        internalCounters.push_back(17939);
        internalCounters.push_back(18058);
        internalCounters.push_back(18177);
        internalCounters.push_back(18296);
        internalCounters.push_back(18415);
        internalCounters.push_back(18534);
        internalCounters.push_back(18653);
        internalCounters.push_back(18772);
        internalCounters.push_back(18891);
        internalCounters.push_back(19010);
        internalCounters.push_back(19129);
        internalCounters.push_back(19248);
        internalCounters.push_back(19367);
        internalCounters.push_back(19486);
        internalCounters.push_back(19605);
        internalCounters.push_back(19724);
        internalCounters.push_back(19843);
        internalCounters.push_back(19962);
        internalCounters.push_back(20081);
        internalCounters.push_back(20200);
        internalCounters.push_back(20319);
        internalCounters.push_back(20438);
        internalCounters.push_back(20557);
        internalCounters.push_back(20676);
        internalCounters.push_back(20795);
        internalCounters.push_back(20914);

        p.DefinePublicCounter("TexVolFilteringPct", "TextureUnit", "Percentage of pixels that received volume filtering.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,sum64,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,+,/,(100),*", "b5ff6bed-3178-aee4-42dd-c74391c02a2d" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(13418);
        internalCounters.push_back(13537);
        internalCounters.push_back(13656);
        internalCounters.push_back(13775);
        internalCounters.push_back(13894);
        internalCounters.push_back(14013);
        internalCounters.push_back(14132);
        internalCounters.push_back(14251);
        internalCounters.push_back(14370);
        internalCounters.push_back(14489);
        internalCounters.push_back(14608);
        internalCounters.push_back(14727);
        internalCounters.push_back(14846);
        internalCounters.push_back(14965);
        internalCounters.push_back(15084);
        internalCounters.push_back(15203);
        internalCounters.push_back(15322);
        internalCounters.push_back(15441);
        internalCounters.push_back(15560);
        internalCounters.push_back(15679);
        internalCounters.push_back(15798);
        internalCounters.push_back(15917);
        internalCounters.push_back(16036);
        internalCounters.push_back(16155);
        internalCounters.push_back(16274);
        internalCounters.push_back(16393);
        internalCounters.push_back(16512);
        internalCounters.push_back(16631);
        internalCounters.push_back(16750);
        internalCounters.push_back(16869);
        internalCounters.push_back(16988);
        internalCounters.push_back(17107);
        internalCounters.push_back(17226);
        internalCounters.push_back(17345);
        internalCounters.push_back(17464);
        internalCounters.push_back(17583);
        internalCounters.push_back(17702);
        internalCounters.push_back(17821);
        internalCounters.push_back(17940);
        internalCounters.push_back(18059);
        internalCounters.push_back(18178);
        internalCounters.push_back(18297);
        internalCounters.push_back(18416);
        internalCounters.push_back(18535);
        internalCounters.push_back(18654);
        internalCounters.push_back(18773);
        internalCounters.push_back(18892);
        internalCounters.push_back(19011);
        internalCounters.push_back(19130);
        internalCounters.push_back(19249);
        internalCounters.push_back(19368);
        internalCounters.push_back(19487);
        internalCounters.push_back(19606);
        internalCounters.push_back(19725);
        internalCounters.push_back(19844);
        internalCounters.push_back(19963);
        internalCounters.push_back(20082);
        internalCounters.push_back(20201);
        internalCounters.push_back(20320);
        internalCounters.push_back(20439);
        internalCounters.push_back(20558);
        internalCounters.push_back(20677);
        internalCounters.push_back(20796);
        internalCounters.push_back(20915);

        p.DefinePublicCounter("TexVolFilteringCount", "TextureUnit", "Count of pixels that received volume filtering.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64", "4bddc587-d589-8128-e18c-762eab2c871f" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(13417);
        internalCounters.push_back(13536);
        internalCounters.push_back(13655);
        internalCounters.push_back(13774);
        internalCounters.push_back(13893);
        internalCounters.push_back(14012);
        internalCounters.push_back(14131);
        internalCounters.push_back(14250);
        internalCounters.push_back(14369);
        internalCounters.push_back(14488);
        internalCounters.push_back(14607);
        internalCounters.push_back(14726);
        internalCounters.push_back(14845);
        internalCounters.push_back(14964);
        internalCounters.push_back(15083);
        internalCounters.push_back(15202);
        internalCounters.push_back(15321);
        internalCounters.push_back(15440);
        internalCounters.push_back(15559);
        internalCounters.push_back(15678);
        internalCounters.push_back(15797);
        internalCounters.push_back(15916);
        internalCounters.push_back(16035);
        internalCounters.push_back(16154);
        internalCounters.push_back(16273);
        internalCounters.push_back(16392);
        internalCounters.push_back(16511);
        internalCounters.push_back(16630);
        internalCounters.push_back(16749);
        internalCounters.push_back(16868);
        internalCounters.push_back(16987);
        internalCounters.push_back(17106);
        internalCounters.push_back(17225);
        internalCounters.push_back(17344);
        internalCounters.push_back(17463);
        internalCounters.push_back(17582);
        internalCounters.push_back(17701);
        internalCounters.push_back(17820);
        internalCounters.push_back(17939);
        internalCounters.push_back(18058);
        internalCounters.push_back(18177);
        internalCounters.push_back(18296);
        internalCounters.push_back(18415);
        internalCounters.push_back(18534);
        internalCounters.push_back(18653);
        internalCounters.push_back(18772);
        internalCounters.push_back(18891);
        internalCounters.push_back(19010);
        internalCounters.push_back(19129);
        internalCounters.push_back(19248);
        internalCounters.push_back(19367);
        internalCounters.push_back(19486);
        internalCounters.push_back(19605);
        internalCounters.push_back(19724);
        internalCounters.push_back(19843);
        internalCounters.push_back(19962);
        internalCounters.push_back(20081);
        internalCounters.push_back(20200);
        internalCounters.push_back(20319);
        internalCounters.push_back(20438);
        internalCounters.push_back(20557);
        internalCounters.push_back(20676);
        internalCounters.push_back(20795);
        internalCounters.push_back(20914);

        p.DefinePublicCounter("NoTexVolFilteringCount", "TextureUnit", "Count of pixels that did not receive volume filtering.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64", "9fe1a854-17c6-9d26-b2b9-80610cd5827d" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(13436);
        internalCounters.push_back(13555);
        internalCounters.push_back(13674);
        internalCounters.push_back(13793);
        internalCounters.push_back(13912);
        internalCounters.push_back(14031);
        internalCounters.push_back(14150);
        internalCounters.push_back(14269);
        internalCounters.push_back(14388);
        internalCounters.push_back(14507);
        internalCounters.push_back(14626);
        internalCounters.push_back(14745);
        internalCounters.push_back(14864);
        internalCounters.push_back(14983);
        internalCounters.push_back(15102);
        internalCounters.push_back(15221);
        internalCounters.push_back(15340);
        internalCounters.push_back(15459);
        internalCounters.push_back(15578);
        internalCounters.push_back(15697);
        internalCounters.push_back(15816);
        internalCounters.push_back(15935);
        internalCounters.push_back(16054);
        internalCounters.push_back(16173);
        internalCounters.push_back(16292);
        internalCounters.push_back(16411);
        internalCounters.push_back(16530);
        internalCounters.push_back(16649);
        internalCounters.push_back(16768);
        internalCounters.push_back(16887);
        internalCounters.push_back(17006);
        internalCounters.push_back(17125);
        internalCounters.push_back(17244);
        internalCounters.push_back(17363);
        internalCounters.push_back(17482);
        internalCounters.push_back(17601);
        internalCounters.push_back(17720);
        internalCounters.push_back(17839);
        internalCounters.push_back(17958);
        internalCounters.push_back(18077);
        internalCounters.push_back(18196);
        internalCounters.push_back(18315);
        internalCounters.push_back(18434);
        internalCounters.push_back(18553);
        internalCounters.push_back(18672);
        internalCounters.push_back(18791);
        internalCounters.push_back(18910);
        internalCounters.push_back(19029);
        internalCounters.push_back(19148);
        internalCounters.push_back(19267);
        internalCounters.push_back(19386);
        internalCounters.push_back(19505);
        internalCounters.push_back(19624);
        internalCounters.push_back(19743);
        internalCounters.push_back(19862);
        internalCounters.push_back(19981);
        internalCounters.push_back(20100);
        internalCounters.push_back(20219);
        internalCounters.push_back(20338);
        internalCounters.push_back(20457);
        internalCounters.push_back(20576);
        internalCounters.push_back(20695);
        internalCounters.push_back(20814);
        internalCounters.push_back(20933);
        internalCounters.push_back(13437);
        internalCounters.push_back(13556);
        internalCounters.push_back(13675);
        internalCounters.push_back(13794);
        internalCounters.push_back(13913);
        internalCounters.push_back(14032);
        internalCounters.push_back(14151);
        internalCounters.push_back(14270);
        internalCounters.push_back(14389);
        internalCounters.push_back(14508);
        internalCounters.push_back(14627);
        internalCounters.push_back(14746);
        internalCounters.push_back(14865);
        internalCounters.push_back(14984);
        internalCounters.push_back(15103);
        internalCounters.push_back(15222);
        internalCounters.push_back(15341);
        internalCounters.push_back(15460);
        internalCounters.push_back(15579);
        internalCounters.push_back(15698);
        internalCounters.push_back(15817);
        internalCounters.push_back(15936);
        internalCounters.push_back(16055);
        internalCounters.push_back(16174);
        internalCounters.push_back(16293);
        internalCounters.push_back(16412);
        internalCounters.push_back(16531);
        internalCounters.push_back(16650);
        internalCounters.push_back(16769);
        internalCounters.push_back(16888);
        internalCounters.push_back(17007);
        internalCounters.push_back(17126);
        internalCounters.push_back(17245);
        internalCounters.push_back(17364);
        internalCounters.push_back(17483);
        internalCounters.push_back(17602);
        internalCounters.push_back(17721);
        internalCounters.push_back(17840);
        internalCounters.push_back(17959);
        internalCounters.push_back(18078);
        internalCounters.push_back(18197);
        internalCounters.push_back(18316);
        internalCounters.push_back(18435);
        internalCounters.push_back(18554);
        internalCounters.push_back(18673);
        internalCounters.push_back(18792);
        internalCounters.push_back(18911);
        internalCounters.push_back(19030);
        internalCounters.push_back(19149);
        internalCounters.push_back(19268);
        internalCounters.push_back(19387);
        internalCounters.push_back(19506);
        internalCounters.push_back(19625);
        internalCounters.push_back(19744);
        internalCounters.push_back(19863);
        internalCounters.push_back(19982);
        internalCounters.push_back(20101);
        internalCounters.push_back(20220);
        internalCounters.push_back(20339);
        internalCounters.push_back(20458);
        internalCounters.push_back(20577);
        internalCounters.push_back(20696);
        internalCounters.push_back(20815);
        internalCounters.push_back(20934);
        internalCounters.push_back(13438);
        internalCounters.push_back(13557);
        internalCounters.push_back(13676);
        internalCounters.push_back(13795);
        internalCounters.push_back(13914);
        internalCounters.push_back(14033);
        internalCounters.push_back(14152);
        internalCounters.push_back(14271);
        internalCounters.push_back(14390);
        internalCounters.push_back(14509);
        internalCounters.push_back(14628);
        internalCounters.push_back(14747);
        internalCounters.push_back(14866);
        internalCounters.push_back(14985);
        internalCounters.push_back(15104);
        internalCounters.push_back(15223);
        internalCounters.push_back(15342);
        internalCounters.push_back(15461);
        internalCounters.push_back(15580);
        internalCounters.push_back(15699);
        internalCounters.push_back(15818);
        internalCounters.push_back(15937);
        internalCounters.push_back(16056);
        internalCounters.push_back(16175);
        internalCounters.push_back(16294);
        internalCounters.push_back(16413);
        internalCounters.push_back(16532);
        internalCounters.push_back(16651);
        internalCounters.push_back(16770);
        internalCounters.push_back(16889);
        internalCounters.push_back(17008);
        internalCounters.push_back(17127);
        internalCounters.push_back(17246);
        internalCounters.push_back(17365);
        internalCounters.push_back(17484);
        internalCounters.push_back(17603);
        internalCounters.push_back(17722);
        internalCounters.push_back(17841);
        internalCounters.push_back(17960);
        internalCounters.push_back(18079);
        internalCounters.push_back(18198);
        internalCounters.push_back(18317);
        internalCounters.push_back(18436);
        internalCounters.push_back(18555);
        internalCounters.push_back(18674);
        internalCounters.push_back(18793);
        internalCounters.push_back(18912);
        internalCounters.push_back(19031);
        internalCounters.push_back(19150);
        internalCounters.push_back(19269);
        internalCounters.push_back(19388);
        internalCounters.push_back(19507);
        internalCounters.push_back(19626);
        internalCounters.push_back(19745);
        internalCounters.push_back(19864);
        internalCounters.push_back(19983);
        internalCounters.push_back(20102);
        internalCounters.push_back(20221);
        internalCounters.push_back(20340);
        internalCounters.push_back(20459);
        internalCounters.push_back(20578);
        internalCounters.push_back(20697);
        internalCounters.push_back(20816);
        internalCounters.push_back(20935);
        internalCounters.push_back(13439);
        internalCounters.push_back(13558);
        internalCounters.push_back(13677);
        internalCounters.push_back(13796);
        internalCounters.push_back(13915);
        internalCounters.push_back(14034);
        internalCounters.push_back(14153);
        internalCounters.push_back(14272);
        internalCounters.push_back(14391);
        internalCounters.push_back(14510);
        internalCounters.push_back(14629);
        internalCounters.push_back(14748);
        internalCounters.push_back(14867);
        internalCounters.push_back(14986);
        internalCounters.push_back(15105);
        internalCounters.push_back(15224);
        internalCounters.push_back(15343);
        internalCounters.push_back(15462);
        internalCounters.push_back(15581);
        internalCounters.push_back(15700);
        internalCounters.push_back(15819);
        internalCounters.push_back(15938);
        internalCounters.push_back(16057);
        internalCounters.push_back(16176);
        internalCounters.push_back(16295);
        internalCounters.push_back(16414);
        internalCounters.push_back(16533);
        internalCounters.push_back(16652);
        internalCounters.push_back(16771);
        internalCounters.push_back(16890);
        internalCounters.push_back(17009);
        internalCounters.push_back(17128);
        internalCounters.push_back(17247);
        internalCounters.push_back(17366);
        internalCounters.push_back(17485);
        internalCounters.push_back(17604);
        internalCounters.push_back(17723);
        internalCounters.push_back(17842);
        internalCounters.push_back(17961);
        internalCounters.push_back(18080);
        internalCounters.push_back(18199);
        internalCounters.push_back(18318);
        internalCounters.push_back(18437);
        internalCounters.push_back(18556);
        internalCounters.push_back(18675);
        internalCounters.push_back(18794);
        internalCounters.push_back(18913);
        internalCounters.push_back(19032);
        internalCounters.push_back(19151);
        internalCounters.push_back(19270);
        internalCounters.push_back(19389);
        internalCounters.push_back(19508);
        internalCounters.push_back(19627);
        internalCounters.push_back(19746);
        internalCounters.push_back(19865);
        internalCounters.push_back(19984);
        internalCounters.push_back(20103);
        internalCounters.push_back(20222);
        internalCounters.push_back(20341);
        internalCounters.push_back(20460);
        internalCounters.push_back(20579);
        internalCounters.push_back(20698);
        internalCounters.push_back(20817);
        internalCounters.push_back(20936);
        internalCounters.push_back(13440);
        internalCounters.push_back(13559);
        internalCounters.push_back(13678);
        internalCounters.push_back(13797);
        internalCounters.push_back(13916);
        internalCounters.push_back(14035);
        internalCounters.push_back(14154);
        internalCounters.push_back(14273);
        internalCounters.push_back(14392);
        internalCounters.push_back(14511);
        internalCounters.push_back(14630);
        internalCounters.push_back(14749);
        internalCounters.push_back(14868);
        internalCounters.push_back(14987);
        internalCounters.push_back(15106);
        internalCounters.push_back(15225);
        internalCounters.push_back(15344);
        internalCounters.push_back(15463);
        internalCounters.push_back(15582);
        internalCounters.push_back(15701);
        internalCounters.push_back(15820);
        internalCounters.push_back(15939);
        internalCounters.push_back(16058);
        internalCounters.push_back(16177);
        internalCounters.push_back(16296);
        internalCounters.push_back(16415);
        internalCounters.push_back(16534);
        internalCounters.push_back(16653);
        internalCounters.push_back(16772);
        internalCounters.push_back(16891);
        internalCounters.push_back(17010);
        internalCounters.push_back(17129);
        internalCounters.push_back(17248);
        internalCounters.push_back(17367);
        internalCounters.push_back(17486);
        internalCounters.push_back(17605);
        internalCounters.push_back(17724);
        internalCounters.push_back(17843);
        internalCounters.push_back(17962);
        internalCounters.push_back(18081);
        internalCounters.push_back(18200);
        internalCounters.push_back(18319);
        internalCounters.push_back(18438);
        internalCounters.push_back(18557);
        internalCounters.push_back(18676);
        internalCounters.push_back(18795);
        internalCounters.push_back(18914);
        internalCounters.push_back(19033);
        internalCounters.push_back(19152);
        internalCounters.push_back(19271);
        internalCounters.push_back(19390);
        internalCounters.push_back(19509);
        internalCounters.push_back(19628);
        internalCounters.push_back(19747);
        internalCounters.push_back(19866);
        internalCounters.push_back(19985);
        internalCounters.push_back(20104);
        internalCounters.push_back(20223);
        internalCounters.push_back(20342);
        internalCounters.push_back(20461);
        internalCounters.push_back(20580);
        internalCounters.push_back(20699);
        internalCounters.push_back(20818);
        internalCounters.push_back(20937);
        internalCounters.push_back(13441);
        internalCounters.push_back(13560);
        internalCounters.push_back(13679);
        internalCounters.push_back(13798);
        internalCounters.push_back(13917);
        internalCounters.push_back(14036);
        internalCounters.push_back(14155);
        internalCounters.push_back(14274);
        internalCounters.push_back(14393);
        internalCounters.push_back(14512);
        internalCounters.push_back(14631);
        internalCounters.push_back(14750);
        internalCounters.push_back(14869);
        internalCounters.push_back(14988);
        internalCounters.push_back(15107);
        internalCounters.push_back(15226);
        internalCounters.push_back(15345);
        internalCounters.push_back(15464);
        internalCounters.push_back(15583);
        internalCounters.push_back(15702);
        internalCounters.push_back(15821);
        internalCounters.push_back(15940);
        internalCounters.push_back(16059);
        internalCounters.push_back(16178);
        internalCounters.push_back(16297);
        internalCounters.push_back(16416);
        internalCounters.push_back(16535);
        internalCounters.push_back(16654);
        internalCounters.push_back(16773);
        internalCounters.push_back(16892);
        internalCounters.push_back(17011);
        internalCounters.push_back(17130);
        internalCounters.push_back(17249);
        internalCounters.push_back(17368);
        internalCounters.push_back(17487);
        internalCounters.push_back(17606);
        internalCounters.push_back(17725);
        internalCounters.push_back(17844);
        internalCounters.push_back(17963);
        internalCounters.push_back(18082);
        internalCounters.push_back(18201);
        internalCounters.push_back(18320);
        internalCounters.push_back(18439);
        internalCounters.push_back(18558);
        internalCounters.push_back(18677);
        internalCounters.push_back(18796);
        internalCounters.push_back(18915);
        internalCounters.push_back(19034);
        internalCounters.push_back(19153);
        internalCounters.push_back(19272);
        internalCounters.push_back(19391);
        internalCounters.push_back(19510);
        internalCounters.push_back(19629);
        internalCounters.push_back(19748);
        internalCounters.push_back(19867);
        internalCounters.push_back(19986);
        internalCounters.push_back(20105);
        internalCounters.push_back(20224);
        internalCounters.push_back(20343);
        internalCounters.push_back(20462);
        internalCounters.push_back(20581);
        internalCounters.push_back(20700);
        internalCounters.push_back(20819);
        internalCounters.push_back(20938);
        internalCounters.push_back(13442);
        internalCounters.push_back(13561);
        internalCounters.push_back(13680);
        internalCounters.push_back(13799);
        internalCounters.push_back(13918);
        internalCounters.push_back(14037);
        internalCounters.push_back(14156);
        internalCounters.push_back(14275);
        internalCounters.push_back(14394);
        internalCounters.push_back(14513);
        internalCounters.push_back(14632);
        internalCounters.push_back(14751);
        internalCounters.push_back(14870);
        internalCounters.push_back(14989);
        internalCounters.push_back(15108);
        internalCounters.push_back(15227);
        internalCounters.push_back(15346);
        internalCounters.push_back(15465);
        internalCounters.push_back(15584);
        internalCounters.push_back(15703);
        internalCounters.push_back(15822);
        internalCounters.push_back(15941);
        internalCounters.push_back(16060);
        internalCounters.push_back(16179);
        internalCounters.push_back(16298);
        internalCounters.push_back(16417);
        internalCounters.push_back(16536);
        internalCounters.push_back(16655);
        internalCounters.push_back(16774);
        internalCounters.push_back(16893);
        internalCounters.push_back(17012);
        internalCounters.push_back(17131);
        internalCounters.push_back(17250);
        internalCounters.push_back(17369);
        internalCounters.push_back(17488);
        internalCounters.push_back(17607);
        internalCounters.push_back(17726);
        internalCounters.push_back(17845);
        internalCounters.push_back(17964);
        internalCounters.push_back(18083);
        internalCounters.push_back(18202);
        internalCounters.push_back(18321);
        internalCounters.push_back(18440);
        internalCounters.push_back(18559);
        internalCounters.push_back(18678);
        internalCounters.push_back(18797);
        internalCounters.push_back(18916);
        internalCounters.push_back(19035);
        internalCounters.push_back(19154);
        internalCounters.push_back(19273);
        internalCounters.push_back(19392);
        internalCounters.push_back(19511);
        internalCounters.push_back(19630);
        internalCounters.push_back(19749);
        internalCounters.push_back(19868);
        internalCounters.push_back(19987);
        internalCounters.push_back(20106);
        internalCounters.push_back(20225);
        internalCounters.push_back(20344);
        internalCounters.push_back(20463);
        internalCounters.push_back(20582);
        internalCounters.push_back(20701);
        internalCounters.push_back(20820);
        internalCounters.push_back(20939);
        internalCounters.push_back(13443);
        internalCounters.push_back(13562);
        internalCounters.push_back(13681);
        internalCounters.push_back(13800);
        internalCounters.push_back(13919);
        internalCounters.push_back(14038);
        internalCounters.push_back(14157);
        internalCounters.push_back(14276);
        internalCounters.push_back(14395);
        internalCounters.push_back(14514);
        internalCounters.push_back(14633);
        internalCounters.push_back(14752);
        internalCounters.push_back(14871);
        internalCounters.push_back(14990);
        internalCounters.push_back(15109);
        internalCounters.push_back(15228);
        internalCounters.push_back(15347);
        internalCounters.push_back(15466);
        internalCounters.push_back(15585);
        internalCounters.push_back(15704);
        internalCounters.push_back(15823);
        internalCounters.push_back(15942);
        internalCounters.push_back(16061);
        internalCounters.push_back(16180);
        internalCounters.push_back(16299);
        internalCounters.push_back(16418);
        internalCounters.push_back(16537);
        internalCounters.push_back(16656);
        internalCounters.push_back(16775);
        internalCounters.push_back(16894);
        internalCounters.push_back(17013);
        internalCounters.push_back(17132);
        internalCounters.push_back(17251);
        internalCounters.push_back(17370);
        internalCounters.push_back(17489);
        internalCounters.push_back(17608);
        internalCounters.push_back(17727);
        internalCounters.push_back(17846);
        internalCounters.push_back(17965);
        internalCounters.push_back(18084);
        internalCounters.push_back(18203);
        internalCounters.push_back(18322);
        internalCounters.push_back(18441);
        internalCounters.push_back(18560);
        internalCounters.push_back(18679);
        internalCounters.push_back(18798);
        internalCounters.push_back(18917);
        internalCounters.push_back(19036);
        internalCounters.push_back(19155);
        internalCounters.push_back(19274);
        internalCounters.push_back(19393);
        internalCounters.push_back(19512);
        internalCounters.push_back(19631);
        internalCounters.push_back(19750);
        internalCounters.push_back(19869);
        internalCounters.push_back(19988);
        internalCounters.push_back(20107);
        internalCounters.push_back(20226);
        internalCounters.push_back(20345);
        internalCounters.push_back(20464);
        internalCounters.push_back(20583);
        internalCounters.push_back(20702);
        internalCounters.push_back(20821);
        internalCounters.push_back(20940);
        internalCounters.push_back(13444);
        internalCounters.push_back(13563);
        internalCounters.push_back(13682);
        internalCounters.push_back(13801);
        internalCounters.push_back(13920);
        internalCounters.push_back(14039);
        internalCounters.push_back(14158);
        internalCounters.push_back(14277);
        internalCounters.push_back(14396);
        internalCounters.push_back(14515);
        internalCounters.push_back(14634);
        internalCounters.push_back(14753);
        internalCounters.push_back(14872);
        internalCounters.push_back(14991);
        internalCounters.push_back(15110);
        internalCounters.push_back(15229);
        internalCounters.push_back(15348);
        internalCounters.push_back(15467);
        internalCounters.push_back(15586);
        internalCounters.push_back(15705);
        internalCounters.push_back(15824);
        internalCounters.push_back(15943);
        internalCounters.push_back(16062);
        internalCounters.push_back(16181);
        internalCounters.push_back(16300);
        internalCounters.push_back(16419);
        internalCounters.push_back(16538);
        internalCounters.push_back(16657);
        internalCounters.push_back(16776);
        internalCounters.push_back(16895);
        internalCounters.push_back(17014);
        internalCounters.push_back(17133);
        internalCounters.push_back(17252);
        internalCounters.push_back(17371);
        internalCounters.push_back(17490);
        internalCounters.push_back(17609);
        internalCounters.push_back(17728);
        internalCounters.push_back(17847);
        internalCounters.push_back(17966);
        internalCounters.push_back(18085);
        internalCounters.push_back(18204);
        internalCounters.push_back(18323);
        internalCounters.push_back(18442);
        internalCounters.push_back(18561);
        internalCounters.push_back(18680);
        internalCounters.push_back(18799);
        internalCounters.push_back(18918);
        internalCounters.push_back(19037);
        internalCounters.push_back(19156);
        internalCounters.push_back(19275);
        internalCounters.push_back(19394);
        internalCounters.push_back(19513);
        internalCounters.push_back(19632);
        internalCounters.push_back(19751);
        internalCounters.push_back(19870);
        internalCounters.push_back(19989);
        internalCounters.push_back(20108);
        internalCounters.push_back(20227);
        internalCounters.push_back(20346);
        internalCounters.push_back(20465);
        internalCounters.push_back(20584);
        internalCounters.push_back(20703);
        internalCounters.push_back(20822);
        internalCounters.push_back(20941);

        p.DefinePublicCounter("TexAveAnisotropy", "TextureUnit", "The average degree of anisotropy applied. A number between 1 and 16. The anisotropic filtering algorithm only applies samples where they are required (e.g. there will be no extra anisotropic samples if the view vector is perpendicular to the surface) so this can be much lower than the requested anisotropy.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,(2),64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,sum64,*,+,(4),128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,sum64,*,+,(6),192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,sum64,*,+,(8),256,257,258,259,260,261,262,263,264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298,299,300,301,302,303,304,305,306,307,308,309,310,311,312,313,314,315,316,317,318,319,sum64,*,+,(10),320,321,322,323,324,325,326,327,328,329,330,331,332,333,334,335,336,337,338,339,340,341,342,343,344,345,346,347,348,349,350,351,352,353,354,355,356,357,358,359,360,361,362,363,364,365,366,367,368,369,370,371,372,373,374,375,376,377,378,379,380,381,382,383,sum64,*,+,(12),384,385,386,387,388,389,390,391,392,393,394,395,396,397,398,399,400,401,402,403,404,405,406,407,408,409,410,411,412,413,414,415,416,417,418,419,420,421,422,423,424,425,426,427,428,429,430,431,432,433,434,435,436,437,438,439,440,441,442,443,444,445,446,447,sum64,*,+,(14),448,449,450,451,452,453,454,455,456,457,458,459,460,461,462,463,464,465,466,467,468,469,470,471,472,473,474,475,476,477,478,479,480,481,482,483,484,485,486,487,488,489,490,491,492,493,494,495,496,497,498,499,500,501,502,503,504,505,506,507,508,509,510,511,sum64,*,+,(16),512,513,514,515,516,517,518,519,520,521,522,523,524,525,526,527,528,529,530,531,532,533,534,535,536,537,538,539,540,541,542,543,544,545,546,547,548,549,550,551,552,553,554,555,556,557,558,559,560,561,562,563,564,565,566,567,568,569,570,571,572,573,574,575,sum64,*,+,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,sum64,+,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,sum64,+,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,sum64,+,256,257,258,259,260,261,262,263,264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298,299,300,301,302,303,304,305,306,307,308,309,310,311,312,313,314,315,316,317,318,319,sum64,+,320,321,322,323,324,325,326,327,328,329,330,331,332,333,334,335,336,337,338,339,340,341,342,343,344,345,346,347,348,349,350,351,352,353,354,355,356,357,358,359,360,361,362,363,364,365,366,367,368,369,370,371,372,373,374,375,376,377,378,379,380,381,382,383,sum64,+,384,385,386,387,388,389,390,391,392,393,394,395,396,397,398,399,400,401,402,403,404,405,406,407,408,409,410,411,412,413,414,415,416,417,418,419,420,421,422,423,424,425,426,427,428,429,430,431,432,433,434,435,436,437,438,439,440,441,442,443,444,445,446,447,sum64,+,448,449,450,451,452,453,454,455,456,457,458,459,460,461,462,463,464,465,466,467,468,469,470,471,472,473,474,475,476,477,478,479,480,481,482,483,484,485,486,487,488,489,490,491,492,493,494,495,496,497,498,499,500,501,502,503,504,505,506,507,508,509,510,511,sum64,+,512,513,514,515,516,517,518,519,520,521,522,523,524,525,526,527,528,529,530,531,532,533,534,535,536,537,538,539,540,541,542,543,544,545,546,547,548,549,550,551,552,553,554,555,556,557,558,559,560,561,562,563,564,565,566,567,568,569,570,571,572,573,574,575,sum64,+,/", "7ca2a2b9-a4eb-ce23-d163-59147e672396" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(39289);
        internalCounters.push_back(39546);
        internalCounters.push_back(39803);
        internalCounters.push_back(40060);
        internalCounters.push_back(40317);
        internalCounters.push_back(40574);
        internalCounters.push_back(40831);
        internalCounters.push_back(41088);
        internalCounters.push_back(41345);
        internalCounters.push_back(41602);
        internalCounters.push_back(41859);
        internalCounters.push_back(42116);
        internalCounters.push_back(42373);
        internalCounters.push_back(42630);
        internalCounters.push_back(42887);
        internalCounters.push_back(43144);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("DepthStencilTestBusy", "Timing", "Percentage of time GPU spent performing depth and stencil tests relative to GPUBusy.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,(100),*", "6834fb52-42e8-bb50-fd48-ec2f2904e7e0" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(39289);
        internalCounters.push_back(39546);
        internalCounters.push_back(39803);
        internalCounters.push_back(40060);
        internalCounters.push_back(40317);
        internalCounters.push_back(40574);
        internalCounters.push_back(40831);
        internalCounters.push_back(41088);
        internalCounters.push_back(41345);
        internalCounters.push_back(41602);
        internalCounters.push_back(41859);
        internalCounters.push_back(42116);
        internalCounters.push_back(42373);
        internalCounters.push_back(42630);
        internalCounters.push_back(42887);
        internalCounters.push_back(43144);

        p.DefinePublicCounter("DepthStencilTestBusyCount", "Timing", "Number of GPU cycles spent performing depth and stencil tests.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16", "e02860fa-c7bd-90ea-2149-69b4e98a636c" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(39160);
        internalCounters.push_back(39417);
        internalCounters.push_back(39674);
        internalCounters.push_back(39931);
        internalCounters.push_back(40188);
        internalCounters.push_back(40445);
        internalCounters.push_back(40702);
        internalCounters.push_back(40959);
        internalCounters.push_back(41216);
        internalCounters.push_back(41473);
        internalCounters.push_back(41730);
        internalCounters.push_back(41987);
        internalCounters.push_back(42244);
        internalCounters.push_back(42501);
        internalCounters.push_back(42758);
        internalCounters.push_back(43015);
        internalCounters.push_back(39149);
        internalCounters.push_back(39406);
        internalCounters.push_back(39663);
        internalCounters.push_back(39920);
        internalCounters.push_back(40177);
        internalCounters.push_back(40434);
        internalCounters.push_back(40691);
        internalCounters.push_back(40948);
        internalCounters.push_back(41205);
        internalCounters.push_back(41462);
        internalCounters.push_back(41719);
        internalCounters.push_back(41976);
        internalCounters.push_back(42233);
        internalCounters.push_back(42490);
        internalCounters.push_back(42747);
        internalCounters.push_back(43004);

        p.DefinePublicCounter("HiZTilesAccepted", "DepthAndStencil", "Percentage of tiles accepted by HiZ and will be rendered to the depth or color buffers.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,/,(100),*", "56176f45-d7ff-813d-4f05-3b2f046067e7" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(39149);
        internalCounters.push_back(39406);
        internalCounters.push_back(39663);
        internalCounters.push_back(39920);
        internalCounters.push_back(40177);
        internalCounters.push_back(40434);
        internalCounters.push_back(40691);
        internalCounters.push_back(40948);
        internalCounters.push_back(41205);
        internalCounters.push_back(41462);
        internalCounters.push_back(41719);
        internalCounters.push_back(41976);
        internalCounters.push_back(42233);
        internalCounters.push_back(42490);
        internalCounters.push_back(42747);
        internalCounters.push_back(43004);

        p.DefinePublicCounter("HiZTilesAcceptedCount", "DepthAndStencil", "Count of tiles accepted by HiZ and will be rendered to the depth or color buffers.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "95d4e3f6-b2f0-f26e-8423-aacdfaf79ea3" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(39160);
        internalCounters.push_back(39417);
        internalCounters.push_back(39674);
        internalCounters.push_back(39931);
        internalCounters.push_back(40188);
        internalCounters.push_back(40445);
        internalCounters.push_back(40702);
        internalCounters.push_back(40959);
        internalCounters.push_back(41216);
        internalCounters.push_back(41473);
        internalCounters.push_back(41730);
        internalCounters.push_back(41987);
        internalCounters.push_back(42244);
        internalCounters.push_back(42501);
        internalCounters.push_back(42758);
        internalCounters.push_back(43015);

        p.DefinePublicCounter("HiZTilesRejectedCount", "DepthAndStencil", "Count of tiles not accepted by HiZ.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "156ba142-7eeb-aa6e-a00a-f8aea4e41e0b" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(39149);
        internalCounters.push_back(39406);
        internalCounters.push_back(39663);
        internalCounters.push_back(39920);
        internalCounters.push_back(40177);
        internalCounters.push_back(40434);
        internalCounters.push_back(40691);
        internalCounters.push_back(40948);
        internalCounters.push_back(41205);
        internalCounters.push_back(41462);
        internalCounters.push_back(41719);
        internalCounters.push_back(41976);
        internalCounters.push_back(42233);
        internalCounters.push_back(42490);
        internalCounters.push_back(42747);
        internalCounters.push_back(43004);
        internalCounters.push_back(39173);
        internalCounters.push_back(39430);
        internalCounters.push_back(39687);
        internalCounters.push_back(39944);
        internalCounters.push_back(40201);
        internalCounters.push_back(40458);
        internalCounters.push_back(40715);
        internalCounters.push_back(40972);
        internalCounters.push_back(41229);
        internalCounters.push_back(41486);
        internalCounters.push_back(41743);
        internalCounters.push_back(42000);
        internalCounters.push_back(42257);
        internalCounters.push_back(42514);
        internalCounters.push_back(42771);
        internalCounters.push_back(43028);

        p.DefinePublicCounter("PreZTilesDetailCulled", "DepthAndStencil", "Percentage of tiles rejected because the associated prim had no contributing area.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,/,(100),*", "cad7f54d-a044-7574-c472-6f2065cbeeac" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(39173);
        internalCounters.push_back(39430);
        internalCounters.push_back(39687);
        internalCounters.push_back(39944);
        internalCounters.push_back(40201);
        internalCounters.push_back(40458);
        internalCounters.push_back(40715);
        internalCounters.push_back(40972);
        internalCounters.push_back(41229);
        internalCounters.push_back(41486);
        internalCounters.push_back(41743);
        internalCounters.push_back(42000);
        internalCounters.push_back(42257);
        internalCounters.push_back(42514);
        internalCounters.push_back(42771);
        internalCounters.push_back(43028);

        p.DefinePublicCounter("PreZTilesDetailCulledCount", "DepthAndStencil", "Count of tiles rejected because the associated primitive had no contributing area.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "49262c8a-b1e6-90dd-f096-0fc4921715e9" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(39149);
        internalCounters.push_back(39406);
        internalCounters.push_back(39663);
        internalCounters.push_back(39920);
        internalCounters.push_back(40177);
        internalCounters.push_back(40434);
        internalCounters.push_back(40691);
        internalCounters.push_back(40948);
        internalCounters.push_back(41205);
        internalCounters.push_back(41462);
        internalCounters.push_back(41719);
        internalCounters.push_back(41976);
        internalCounters.push_back(42233);
        internalCounters.push_back(42490);
        internalCounters.push_back(42747);
        internalCounters.push_back(43004);

        p.DefinePublicCounter("PreZTilesDetailSurvivingCount", "DepthAndStencil", "Count of tiles surviving because the associated primitive had contributing area.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "f803eaa4-bbed-bd39-775f-a64df92e2c08" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1430);
        internalCounters.push_back(1827);
        internalCounters.push_back(2224);
        internalCounters.push_back(2621);
        internalCounters.push_back(1431);
        internalCounters.push_back(1828);
        internalCounters.push_back(2225);
        internalCounters.push_back(2622);
        internalCounters.push_back(1432);
        internalCounters.push_back(1829);
        internalCounters.push_back(2226);
        internalCounters.push_back(2623);
        internalCounters.push_back(1433);
        internalCounters.push_back(1830);
        internalCounters.push_back(2227);
        internalCounters.push_back(2624);
        internalCounters.push_back(1506);
        internalCounters.push_back(1903);
        internalCounters.push_back(2300);
        internalCounters.push_back(2697);
        internalCounters.push_back(1507);
        internalCounters.push_back(1904);
        internalCounters.push_back(2301);
        internalCounters.push_back(2698);
        internalCounters.push_back(1508);
        internalCounters.push_back(1905);
        internalCounters.push_back(2302);
        internalCounters.push_back(2699);
        internalCounters.push_back(1509);
        internalCounters.push_back(1906);
        internalCounters.push_back(2303);
        internalCounters.push_back(2700);

        p.DefinePublicCounter("HiZQuadsCulled", "DepthAndStencil", "Percentage of quads that did not have to continue on in the pipeline after HiZ. They may be written directly to the depth buffer, or culled completely. Consistently low values here may suggest that the Z-range is not being fully utilized.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,-,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,/,(100),*", "fa0e319b-5573-6d34-5bab-904769925036" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1506);
        internalCounters.push_back(1903);
        internalCounters.push_back(2300);
        internalCounters.push_back(2697);
        internalCounters.push_back(1507);
        internalCounters.push_back(1904);
        internalCounters.push_back(2301);
        internalCounters.push_back(2698);
        internalCounters.push_back(1508);
        internalCounters.push_back(1905);
        internalCounters.push_back(2302);
        internalCounters.push_back(2699);
        internalCounters.push_back(1509);
        internalCounters.push_back(1906);
        internalCounters.push_back(2303);
        internalCounters.push_back(2700);

        p.DefinePublicCounter("HiZQuadsCulledCount", "DepthAndStencil", "Count of quads that did not have to continue on in the pipeline after HiZ. They may be written directly to the depth buffer, or culled completely. Consistently low values here may suggest that the Z-range is not being fully utilized.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "73b0b39d-6df2-3e24-0b5c-7cb0ac8b6f39" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1430);
        internalCounters.push_back(1827);
        internalCounters.push_back(2224);
        internalCounters.push_back(2621);
        internalCounters.push_back(1431);
        internalCounters.push_back(1828);
        internalCounters.push_back(2225);
        internalCounters.push_back(2622);
        internalCounters.push_back(1432);
        internalCounters.push_back(1829);
        internalCounters.push_back(2226);
        internalCounters.push_back(2623);
        internalCounters.push_back(1433);
        internalCounters.push_back(1830);
        internalCounters.push_back(2227);
        internalCounters.push_back(2624);
        internalCounters.push_back(1506);
        internalCounters.push_back(1903);
        internalCounters.push_back(2300);
        internalCounters.push_back(2697);
        internalCounters.push_back(1507);
        internalCounters.push_back(1904);
        internalCounters.push_back(2301);
        internalCounters.push_back(2698);
        internalCounters.push_back(1508);
        internalCounters.push_back(1905);
        internalCounters.push_back(2302);
        internalCounters.push_back(2699);
        internalCounters.push_back(1509);
        internalCounters.push_back(1906);
        internalCounters.push_back(2303);
        internalCounters.push_back(2700);

        p.DefinePublicCounter("HiZQuadsSurvivingCount", "DepthAndStencil", "Count of quads that survive in the pipeline after HiZ.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,-,(0),max", "5a2cd556-acb9-c81e-92bc-7ceef6012b42" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1430);
        internalCounters.push_back(1827);
        internalCounters.push_back(2224);
        internalCounters.push_back(2621);
        internalCounters.push_back(1431);
        internalCounters.push_back(1828);
        internalCounters.push_back(2225);
        internalCounters.push_back(2622);
        internalCounters.push_back(1432);
        internalCounters.push_back(1829);
        internalCounters.push_back(2226);
        internalCounters.push_back(2623);
        internalCounters.push_back(1433);
        internalCounters.push_back(1830);
        internalCounters.push_back(2227);
        internalCounters.push_back(2624);
        internalCounters.push_back(1530);
        internalCounters.push_back(1927);
        internalCounters.push_back(2324);
        internalCounters.push_back(2721);
        internalCounters.push_back(1506);
        internalCounters.push_back(1903);
        internalCounters.push_back(2300);
        internalCounters.push_back(2697);
        internalCounters.push_back(1507);
        internalCounters.push_back(1904);
        internalCounters.push_back(2301);
        internalCounters.push_back(2698);
        internalCounters.push_back(1508);
        internalCounters.push_back(1905);
        internalCounters.push_back(2302);
        internalCounters.push_back(2699);
        internalCounters.push_back(1509);
        internalCounters.push_back(1906);
        internalCounters.push_back(2303);
        internalCounters.push_back(2700);

        p.DefinePublicCounter("PreZQuadsCulled", "DepthAndStencil", "Percentage of quads rejected based on the detailZ and earlyZ tests.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,sum16,16,17,18,19,sum4,-,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,/,(100),*", "4e77547b-ec55-5663-f034-af59be66d77d" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1530);
        internalCounters.push_back(1927);
        internalCounters.push_back(2324);
        internalCounters.push_back(2721);
        internalCounters.push_back(1506);
        internalCounters.push_back(1903);
        internalCounters.push_back(2300);
        internalCounters.push_back(2697);
        internalCounters.push_back(1507);
        internalCounters.push_back(1904);
        internalCounters.push_back(2301);
        internalCounters.push_back(2698);
        internalCounters.push_back(1508);
        internalCounters.push_back(1905);
        internalCounters.push_back(2302);
        internalCounters.push_back(2699);
        internalCounters.push_back(1509);
        internalCounters.push_back(1906);
        internalCounters.push_back(2303);
        internalCounters.push_back(2700);

        p.DefinePublicCounter("PreZQuadsCulledCount", "DepthAndStencil", "Count of quads rejected based on the detailZ and earlyZ tests.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,sum4,+", "1bf169e6-9304-834e-df5f-0c44d7890a08" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1430);
        internalCounters.push_back(1827);
        internalCounters.push_back(2224);
        internalCounters.push_back(2621);
        internalCounters.push_back(1431);
        internalCounters.push_back(1828);
        internalCounters.push_back(2225);
        internalCounters.push_back(2622);
        internalCounters.push_back(1432);
        internalCounters.push_back(1829);
        internalCounters.push_back(2226);
        internalCounters.push_back(2623);
        internalCounters.push_back(1433);
        internalCounters.push_back(1830);
        internalCounters.push_back(2227);
        internalCounters.push_back(2624);
        internalCounters.push_back(1506);
        internalCounters.push_back(1903);
        internalCounters.push_back(2300);
        internalCounters.push_back(2697);
        internalCounters.push_back(1507);
        internalCounters.push_back(1904);
        internalCounters.push_back(2301);
        internalCounters.push_back(2698);
        internalCounters.push_back(1508);
        internalCounters.push_back(1905);
        internalCounters.push_back(2302);
        internalCounters.push_back(2699);
        internalCounters.push_back(1509);
        internalCounters.push_back(1906);
        internalCounters.push_back(2303);
        internalCounters.push_back(2700);

        p.DefinePublicCounter("PreZQuadsSurvivingCount", "DepthAndStencil", "Count of quads surviving detailZ and earlyZ tests.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,-,(0),max", "50e25e51-3713-89cb-7f92-559cde5e5532" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1530);
        internalCounters.push_back(1927);
        internalCounters.push_back(2324);
        internalCounters.push_back(2721);
        internalCounters.push_back(1430);
        internalCounters.push_back(1827);
        internalCounters.push_back(2224);
        internalCounters.push_back(2621);
        internalCounters.push_back(1431);
        internalCounters.push_back(1828);
        internalCounters.push_back(2225);
        internalCounters.push_back(2622);
        internalCounters.push_back(1432);
        internalCounters.push_back(1829);
        internalCounters.push_back(2226);
        internalCounters.push_back(2623);
        internalCounters.push_back(1433);
        internalCounters.push_back(1830);
        internalCounters.push_back(2227);
        internalCounters.push_back(2624);

        p.DefinePublicCounter("PostZQuads", "DepthAndStencil", "Percentage of quads for which the pixel shader will run and may be postZ tested.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,sum4,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,sum16,/,(100),*", "58f0d34b-eeb8-e8db-abce-cb72584144be" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1530);
        internalCounters.push_back(1927);
        internalCounters.push_back(2324);
        internalCounters.push_back(2721);

        p.DefinePublicCounter("PostZQuadCount", "DepthAndStencil", "Count of quads for which the pixel shader will run and may be postZ tested.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4", "08404526-ce35-939b-34c8-a7a35a0ff4d6" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(39322);
        internalCounters.push_back(39579);
        internalCounters.push_back(39836);
        internalCounters.push_back(40093);
        internalCounters.push_back(40350);
        internalCounters.push_back(40607);
        internalCounters.push_back(40864);
        internalCounters.push_back(41121);
        internalCounters.push_back(41378);
        internalCounters.push_back(41635);
        internalCounters.push_back(41892);
        internalCounters.push_back(42149);
        internalCounters.push_back(42406);
        internalCounters.push_back(42663);
        internalCounters.push_back(42920);
        internalCounters.push_back(43177);

        p.DefinePublicCounter("PreZSamplesPassing", "DepthAndStencil", "Number of samples tested for Z before shading and passed.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "3bfe6c4d-7422-ca03-7ea5-e67ff1a00136" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(39324);
        internalCounters.push_back(39581);
        internalCounters.push_back(39838);
        internalCounters.push_back(40095);
        internalCounters.push_back(40352);
        internalCounters.push_back(40609);
        internalCounters.push_back(40866);
        internalCounters.push_back(41123);
        internalCounters.push_back(41380);
        internalCounters.push_back(41637);
        internalCounters.push_back(41894);
        internalCounters.push_back(42151);
        internalCounters.push_back(42408);
        internalCounters.push_back(42665);
        internalCounters.push_back(42922);
        internalCounters.push_back(43179);

        p.DefinePublicCounter("PreZSamplesFailingS", "DepthAndStencil", "Number of samples tested for Z before shading and failed stencil test.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "df7f705e-5162-d3b5-da8b-63466cf9c4e5" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(39323);
        internalCounters.push_back(39580);
        internalCounters.push_back(39837);
        internalCounters.push_back(40094);
        internalCounters.push_back(40351);
        internalCounters.push_back(40608);
        internalCounters.push_back(40865);
        internalCounters.push_back(41122);
        internalCounters.push_back(41379);
        internalCounters.push_back(41636);
        internalCounters.push_back(41893);
        internalCounters.push_back(42150);
        internalCounters.push_back(42407);
        internalCounters.push_back(42664);
        internalCounters.push_back(42921);
        internalCounters.push_back(43178);

        p.DefinePublicCounter("PreZSamplesFailingZ", "DepthAndStencil", "Number of samples tested for Z before shading and failed Z test.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "4484e950-f7a4-3800-bc74-78dd297f017e" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(39319);
        internalCounters.push_back(39576);
        internalCounters.push_back(39833);
        internalCounters.push_back(40090);
        internalCounters.push_back(40347);
        internalCounters.push_back(40604);
        internalCounters.push_back(40861);
        internalCounters.push_back(41118);
        internalCounters.push_back(41375);
        internalCounters.push_back(41632);
        internalCounters.push_back(41889);
        internalCounters.push_back(42146);
        internalCounters.push_back(42403);
        internalCounters.push_back(42660);
        internalCounters.push_back(42917);
        internalCounters.push_back(43174);

        p.DefinePublicCounter("PostZSamplesPassing", "DepthAndStencil", "Number of samples tested for Z after shading and passed.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "4995d5d6-2330-b986-508b-fae24856f44c" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(39321);
        internalCounters.push_back(39578);
        internalCounters.push_back(39835);
        internalCounters.push_back(40092);
        internalCounters.push_back(40349);
        internalCounters.push_back(40606);
        internalCounters.push_back(40863);
        internalCounters.push_back(41120);
        internalCounters.push_back(41377);
        internalCounters.push_back(41634);
        internalCounters.push_back(41891);
        internalCounters.push_back(42148);
        internalCounters.push_back(42405);
        internalCounters.push_back(42662);
        internalCounters.push_back(42919);
        internalCounters.push_back(43176);

        p.DefinePublicCounter("PostZSamplesFailingS", "DepthAndStencil", "Number of samples tested for Z after shading and failed stencil test.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "ae558af4-f4be-3dd4-7316-b2c4dcf0def8" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(39320);
        internalCounters.push_back(39577);
        internalCounters.push_back(39834);
        internalCounters.push_back(40091);
        internalCounters.push_back(40348);
        internalCounters.push_back(40605);
        internalCounters.push_back(40862);
        internalCounters.push_back(41119);
        internalCounters.push_back(41376);
        internalCounters.push_back(41633);
        internalCounters.push_back(41890);
        internalCounters.push_back(42147);
        internalCounters.push_back(42404);
        internalCounters.push_back(42661);
        internalCounters.push_back(42918);
        internalCounters.push_back(43175);

        p.DefinePublicCounter("PostZSamplesFailingZ", "DepthAndStencil", "Number of samples tested for Z after shading and failed Z test.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "b3684c94-814a-c695-c85d-a5b6ab798b35" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(39191);
        internalCounters.push_back(39448);
        internalCounters.push_back(39705);
        internalCounters.push_back(39962);
        internalCounters.push_back(40219);
        internalCounters.push_back(40476);
        internalCounters.push_back(40733);
        internalCounters.push_back(40990);
        internalCounters.push_back(41247);
        internalCounters.push_back(41504);
        internalCounters.push_back(41761);
        internalCounters.push_back(42018);
        internalCounters.push_back(42275);
        internalCounters.push_back(42532);
        internalCounters.push_back(42789);
        internalCounters.push_back(43046);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("ZUnitStalled", "DepthAndStencil", "The percentage of GPUTime the depth buffer spends waiting for the color buffer to be ready to accept data. High figures here indicate a bottleneck in color buffer operations.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,(100),*", "5e86c3ad-1726-3157-1d01-7ed188bf854d" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(39191);
        internalCounters.push_back(39448);
        internalCounters.push_back(39705);
        internalCounters.push_back(39962);
        internalCounters.push_back(40219);
        internalCounters.push_back(40476);
        internalCounters.push_back(40733);
        internalCounters.push_back(40990);
        internalCounters.push_back(41247);
        internalCounters.push_back(41504);
        internalCounters.push_back(41761);
        internalCounters.push_back(42018);
        internalCounters.push_back(42275);
        internalCounters.push_back(42532);
        internalCounters.push_back(42789);
        internalCounters.push_back(43046);

        p.DefinePublicCounter("ZUnitStalledCycles", "DepthAndStencil", "Number of GPU cycles the depth buffer spends waiting for the color buffer to be ready to accept data. Larger numbers indicate a bottleneck in color buffer operations.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16", "4351fa7f-6737-2c3e-3ffb-b3addbdceedd" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(39193);
        internalCounters.push_back(39450);
        internalCounters.push_back(39707);
        internalCounters.push_back(39964);
        internalCounters.push_back(40221);
        internalCounters.push_back(40478);
        internalCounters.push_back(40735);
        internalCounters.push_back(40992);
        internalCounters.push_back(41249);
        internalCounters.push_back(41506);
        internalCounters.push_back(41763);
        internalCounters.push_back(42020);
        internalCounters.push_back(42277);
        internalCounters.push_back(42534);
        internalCounters.push_back(42791);
        internalCounters.push_back(43048);
        internalCounters.push_back(39200);
        internalCounters.push_back(39457);
        internalCounters.push_back(39714);
        internalCounters.push_back(39971);
        internalCounters.push_back(40228);
        internalCounters.push_back(40485);
        internalCounters.push_back(40742);
        internalCounters.push_back(40999);
        internalCounters.push_back(41256);
        internalCounters.push_back(41513);
        internalCounters.push_back(41770);
        internalCounters.push_back(42027);
        internalCounters.push_back(42284);
        internalCounters.push_back(42541);
        internalCounters.push_back(42798);
        internalCounters.push_back(43055);

        p.DefinePublicCounter("DBMemRead", "DepthAndStencil", "Number of bytes read from the depth buffer.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(256),*,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,(32),*,+", "dcdb4ee7-bd50-00f7-c028-9e5f4ce888c0" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(39205);
        internalCounters.push_back(39462);
        internalCounters.push_back(39719);
        internalCounters.push_back(39976);
        internalCounters.push_back(40233);
        internalCounters.push_back(40490);
        internalCounters.push_back(40747);
        internalCounters.push_back(41004);
        internalCounters.push_back(41261);
        internalCounters.push_back(41518);
        internalCounters.push_back(41775);
        internalCounters.push_back(42032);
        internalCounters.push_back(42289);
        internalCounters.push_back(42546);
        internalCounters.push_back(42803);
        internalCounters.push_back(43060);
        internalCounters.push_back(39208);
        internalCounters.push_back(39465);
        internalCounters.push_back(39722);
        internalCounters.push_back(39979);
        internalCounters.push_back(40236);
        internalCounters.push_back(40493);
        internalCounters.push_back(40750);
        internalCounters.push_back(41007);
        internalCounters.push_back(41264);
        internalCounters.push_back(41521);
        internalCounters.push_back(41778);
        internalCounters.push_back(42035);
        internalCounters.push_back(42292);
        internalCounters.push_back(42549);
        internalCounters.push_back(42806);
        internalCounters.push_back(43063);

        p.DefinePublicCounter("DBMemWritten", "DepthAndStencil", "Number of bytes written to the depth buffer.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,(32),*,+", "de5717f8-8a49-ee44-4645-10de51b37dcf" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(43385);
        internalCounters.push_back(43781);
        internalCounters.push_back(44177);
        internalCounters.push_back(44573);
        internalCounters.push_back(44969);
        internalCounters.push_back(45365);
        internalCounters.push_back(45761);
        internalCounters.push_back(46157);
        internalCounters.push_back(46553);
        internalCounters.push_back(46949);
        internalCounters.push_back(47345);
        internalCounters.push_back(47741);
        internalCounters.push_back(48137);
        internalCounters.push_back(48533);
        internalCounters.push_back(48929);
        internalCounters.push_back(49325);

        p.DefinePublicCounter("CBMemRead", "ColorBuffer", "Number of bytes read from the color buffer.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*", "84b531d8-a1f8-7f49-7c27-7bc97801f1e6" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(43516);
        internalCounters.push_back(43912);
        internalCounters.push_back(44308);
        internalCounters.push_back(44704);
        internalCounters.push_back(45100);
        internalCounters.push_back(45496);
        internalCounters.push_back(45892);
        internalCounters.push_back(46288);
        internalCounters.push_back(46684);
        internalCounters.push_back(47080);
        internalCounters.push_back(47476);
        internalCounters.push_back(47872);
        internalCounters.push_back(48268);
        internalCounters.push_back(48664);
        internalCounters.push_back(49060);
        internalCounters.push_back(49456);
        internalCounters.push_back(43383);
        internalCounters.push_back(43779);
        internalCounters.push_back(44175);
        internalCounters.push_back(44571);
        internalCounters.push_back(44967);
        internalCounters.push_back(45363);
        internalCounters.push_back(45759);
        internalCounters.push_back(46155);
        internalCounters.push_back(46551);
        internalCounters.push_back(46947);
        internalCounters.push_back(47343);
        internalCounters.push_back(47739);
        internalCounters.push_back(48135);
        internalCounters.push_back(48531);
        internalCounters.push_back(48927);
        internalCounters.push_back(49323);
        internalCounters.push_back(43384);
        internalCounters.push_back(43780);
        internalCounters.push_back(44176);
        internalCounters.push_back(44572);
        internalCounters.push_back(44968);
        internalCounters.push_back(45364);
        internalCounters.push_back(45760);
        internalCounters.push_back(46156);
        internalCounters.push_back(46552);
        internalCounters.push_back(46948);
        internalCounters.push_back(47344);
        internalCounters.push_back(47740);
        internalCounters.push_back(48136);
        internalCounters.push_back(48532);
        internalCounters.push_back(48928);
        internalCounters.push_back(49324);
        internalCounters.push_back(43385);
        internalCounters.push_back(43781);
        internalCounters.push_back(44177);
        internalCounters.push_back(44573);
        internalCounters.push_back(44969);
        internalCounters.push_back(45365);
        internalCounters.push_back(45761);
        internalCounters.push_back(46157);
        internalCounters.push_back(46553);
        internalCounters.push_back(46949);
        internalCounters.push_back(47345);
        internalCounters.push_back(47741);
        internalCounters.push_back(48137);
        internalCounters.push_back(48533);
        internalCounters.push_back(48929);
        internalCounters.push_back(49325);

        p.DefinePublicCounter("CBColorAndMaskRead", "ColorBuffer", "Total number of bytes read from the color and mask buffers.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,(32),*", "da41660e-eb6f-32ec-8a64-b32ca17bd7eb" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(43375);
        internalCounters.push_back(43771);
        internalCounters.push_back(44167);
        internalCounters.push_back(44563);
        internalCounters.push_back(44959);
        internalCounters.push_back(45355);
        internalCounters.push_back(45751);
        internalCounters.push_back(46147);
        internalCounters.push_back(46543);
        internalCounters.push_back(46939);
        internalCounters.push_back(47335);
        internalCounters.push_back(47731);
        internalCounters.push_back(48127);
        internalCounters.push_back(48523);
        internalCounters.push_back(48919);
        internalCounters.push_back(49315);

        p.DefinePublicCounter("CBMemWritten", "ColorBuffer", "Number of bytes written to the color buffer.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*", "550f8ff8-60b6-a6bf-87d0-25ac9e87de70" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(43514);
        internalCounters.push_back(43910);
        internalCounters.push_back(44306);
        internalCounters.push_back(44702);
        internalCounters.push_back(45098);
        internalCounters.push_back(45494);
        internalCounters.push_back(45890);
        internalCounters.push_back(46286);
        internalCounters.push_back(46682);
        internalCounters.push_back(47078);
        internalCounters.push_back(47474);
        internalCounters.push_back(47870);
        internalCounters.push_back(48266);
        internalCounters.push_back(48662);
        internalCounters.push_back(49058);
        internalCounters.push_back(49454);
        internalCounters.push_back(43373);
        internalCounters.push_back(43769);
        internalCounters.push_back(44165);
        internalCounters.push_back(44561);
        internalCounters.push_back(44957);
        internalCounters.push_back(45353);
        internalCounters.push_back(45749);
        internalCounters.push_back(46145);
        internalCounters.push_back(46541);
        internalCounters.push_back(46937);
        internalCounters.push_back(47333);
        internalCounters.push_back(47729);
        internalCounters.push_back(48125);
        internalCounters.push_back(48521);
        internalCounters.push_back(48917);
        internalCounters.push_back(49313);
        internalCounters.push_back(43374);
        internalCounters.push_back(43770);
        internalCounters.push_back(44166);
        internalCounters.push_back(44562);
        internalCounters.push_back(44958);
        internalCounters.push_back(45354);
        internalCounters.push_back(45750);
        internalCounters.push_back(46146);
        internalCounters.push_back(46542);
        internalCounters.push_back(46938);
        internalCounters.push_back(47334);
        internalCounters.push_back(47730);
        internalCounters.push_back(48126);
        internalCounters.push_back(48522);
        internalCounters.push_back(48918);
        internalCounters.push_back(49314);
        internalCounters.push_back(43375);
        internalCounters.push_back(43771);
        internalCounters.push_back(44167);
        internalCounters.push_back(44563);
        internalCounters.push_back(44959);
        internalCounters.push_back(45355);
        internalCounters.push_back(45751);
        internalCounters.push_back(46147);
        internalCounters.push_back(46543);
        internalCounters.push_back(46939);
        internalCounters.push_back(47335);
        internalCounters.push_back(47731);
        internalCounters.push_back(48127);
        internalCounters.push_back(48523);
        internalCounters.push_back(48919);
        internalCounters.push_back(49315);

        p.DefinePublicCounter("CBColorAndMaskWritten", "ColorBuffer", "Total number of bytes written to the color and mask buffers.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,(32),*", "29a04b69-8f5f-b770-a0f2-3453e2c99e49" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(43419);
        internalCounters.push_back(43815);
        internalCounters.push_back(44211);
        internalCounters.push_back(44607);
        internalCounters.push_back(45003);
        internalCounters.push_back(45399);
        internalCounters.push_back(45795);
        internalCounters.push_back(46191);
        internalCounters.push_back(46587);
        internalCounters.push_back(46983);
        internalCounters.push_back(47379);
        internalCounters.push_back(47775);
        internalCounters.push_back(48171);
        internalCounters.push_back(48567);
        internalCounters.push_back(48963);
        internalCounters.push_back(49359);
        internalCounters.push_back(43264);
        internalCounters.push_back(43660);
        internalCounters.push_back(44056);
        internalCounters.push_back(44452);
        internalCounters.push_back(44848);
        internalCounters.push_back(45244);
        internalCounters.push_back(45640);
        internalCounters.push_back(46036);
        internalCounters.push_back(46432);
        internalCounters.push_back(46828);
        internalCounters.push_back(47224);
        internalCounters.push_back(47620);
        internalCounters.push_back(48016);
        internalCounters.push_back(48412);
        internalCounters.push_back(48808);
        internalCounters.push_back(49204);

        p.DefinePublicCounter("CBSlowPixelPct", "ColorBuffer", "Percentage of pixels written to the color buffer using a half-rate or quarter-rate format.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,/,(100),*,(100),min", "5775943f-0313-7e52-9638-b24a449197bc" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(43419);
        internalCounters.push_back(43815);
        internalCounters.push_back(44211);
        internalCounters.push_back(44607);
        internalCounters.push_back(45003);
        internalCounters.push_back(45399);
        internalCounters.push_back(45795);
        internalCounters.push_back(46191);
        internalCounters.push_back(46587);
        internalCounters.push_back(46983);
        internalCounters.push_back(47379);
        internalCounters.push_back(47775);
        internalCounters.push_back(48171);
        internalCounters.push_back(48567);
        internalCounters.push_back(48963);
        internalCounters.push_back(49359);

        p.DefinePublicCounter("CBSlowPixelCount", "ColorBuffer", "Number of pixels written to the color buffer using a half-rate or quarter-rate format.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "47eacbb0-28c8-22b4-5c69-c00d5813bb1c" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(36038);
        internalCounters.push_back(36230);
        internalCounters.push_back(36422);
        internalCounters.push_back(36614);
        internalCounters.push_back(36806);
        internalCounters.push_back(36998);
        internalCounters.push_back(37190);
        internalCounters.push_back(37382);
        internalCounters.push_back(37574);
        internalCounters.push_back(37766);
        internalCounters.push_back(37958);
        internalCounters.push_back(38150);
        internalCounters.push_back(38342);
        internalCounters.push_back(38534);
        internalCounters.push_back(38726);
        internalCounters.push_back(38918);

        p.DefinePublicCounter("FetchSize", "GlobalMemory", "The total bytes fetched from the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_KILOBYTES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*", "664bb3ef-6eca-86b1-1e2d-30cb897b5fa9" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(36029);
        internalCounters.push_back(36221);
        internalCounters.push_back(36413);
        internalCounters.push_back(36605);
        internalCounters.push_back(36797);
        internalCounters.push_back(36989);
        internalCounters.push_back(37181);
        internalCounters.push_back(37373);
        internalCounters.push_back(37565);
        internalCounters.push_back(37757);
        internalCounters.push_back(37949);
        internalCounters.push_back(38141);
        internalCounters.push_back(38333);
        internalCounters.push_back(38525);
        internalCounters.push_back(38717);
        internalCounters.push_back(38909);

        p.DefinePublicCounter("WriteSize", "GlobalMemory", "The total bytes written to the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_KILOBYTES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*", "f96f2c16-b1b4-4ec4-229c-fc82e6f80a82" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(36021);
        internalCounters.push_back(36213);
        internalCounters.push_back(36405);
        internalCounters.push_back(36597);
        internalCounters.push_back(36789);
        internalCounters.push_back(36981);
        internalCounters.push_back(37173);
        internalCounters.push_back(37365);
        internalCounters.push_back(37557);
        internalCounters.push_back(37749);
        internalCounters.push_back(37941);
        internalCounters.push_back(38133);
        internalCounters.push_back(38325);
        internalCounters.push_back(38517);
        internalCounters.push_back(38709);
        internalCounters.push_back(38901);
        internalCounters.push_back(36022);
        internalCounters.push_back(36214);
        internalCounters.push_back(36406);
        internalCounters.push_back(36598);
        internalCounters.push_back(36790);
        internalCounters.push_back(36982);
        internalCounters.push_back(37174);
        internalCounters.push_back(37366);
        internalCounters.push_back(37558);
        internalCounters.push_back(37750);
        internalCounters.push_back(37942);
        internalCounters.push_back(38134);
        internalCounters.push_back(38326);
        internalCounters.push_back(38518);
        internalCounters.push_back(38710);
        internalCounters.push_back(38902);

        p.DefinePublicCounter("CacheHit", "GlobalMemory", "The percentage of fetch, write, atomic, and other instructions that hit the data cache. Value range: 0% (no hit) to 100% (optimal).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,+,/,(100),*", "dfbeebab-f7c1-1211-e502-4aae361e2ad7" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(36021);
        internalCounters.push_back(36213);
        internalCounters.push_back(36405);
        internalCounters.push_back(36597);
        internalCounters.push_back(36789);
        internalCounters.push_back(36981);
        internalCounters.push_back(37173);
        internalCounters.push_back(37365);
        internalCounters.push_back(37557);
        internalCounters.push_back(37749);
        internalCounters.push_back(37941);
        internalCounters.push_back(38133);
        internalCounters.push_back(38325);
        internalCounters.push_back(38517);
        internalCounters.push_back(38709);
        internalCounters.push_back(38901);
        internalCounters.push_back(36022);
        internalCounters.push_back(36214);
        internalCounters.push_back(36406);
        internalCounters.push_back(36598);
        internalCounters.push_back(36790);
        internalCounters.push_back(36982);
        internalCounters.push_back(37174);
        internalCounters.push_back(37366);
        internalCounters.push_back(37558);
        internalCounters.push_back(37750);
        internalCounters.push_back(37942);
        internalCounters.push_back(38134);
        internalCounters.push_back(38326);
        internalCounters.push_back(38518);
        internalCounters.push_back(38710);
        internalCounters.push_back(38902);

        p.DefinePublicCounter("CacheMiss", "GlobalMemory", "The percentage of fetch, write, atomic, and other instructions that miss the data cache. Value range: 0% (optimal) to 100% (all miss).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,+,/,(100),*", "aebc0a53-7f87-60bd-4c4b-2b956846ef83" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(36021);
        internalCounters.push_back(36213);
        internalCounters.push_back(36405);
        internalCounters.push_back(36597);
        internalCounters.push_back(36789);
        internalCounters.push_back(36981);
        internalCounters.push_back(37173);
        internalCounters.push_back(37365);
        internalCounters.push_back(37557);
        internalCounters.push_back(37749);
        internalCounters.push_back(37941);
        internalCounters.push_back(38133);
        internalCounters.push_back(38325);
        internalCounters.push_back(38517);
        internalCounters.push_back(38709);
        internalCounters.push_back(38901);

        p.DefinePublicCounter("CacheHitCount", "GlobalMemory", "Count of fetch, write, atomic, and other instructions that hit the data cache.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "43437652-1024-9737-2eb0-0899c0c1feae" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(36022);
        internalCounters.push_back(36214);
        internalCounters.push_back(36406);
        internalCounters.push_back(36598);
        internalCounters.push_back(36790);
        internalCounters.push_back(36982);
        internalCounters.push_back(37174);
        internalCounters.push_back(37366);
        internalCounters.push_back(37558);
        internalCounters.push_back(37750);
        internalCounters.push_back(37942);
        internalCounters.push_back(38134);
        internalCounters.push_back(38326);
        internalCounters.push_back(38518);
        internalCounters.push_back(38710);
        internalCounters.push_back(38902);

        p.DefinePublicCounter("CacheMissCount", "GlobalMemory", "Count of fetch, write, atomic, and other instructions that miss the data cache.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "d0f8a812-f41b-644f-09d1-14ee03ea3671" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(13362);
        internalCounters.push_back(13481);
        internalCounters.push_back(13600);
        internalCounters.push_back(13719);
        internalCounters.push_back(13838);
        internalCounters.push_back(13957);
        internalCounters.push_back(14076);
        internalCounters.push_back(14195);
        internalCounters.push_back(14314);
        internalCounters.push_back(14433);
        internalCounters.push_back(14552);
        internalCounters.push_back(14671);
        internalCounters.push_back(14790);
        internalCounters.push_back(14909);
        internalCounters.push_back(15028);
        internalCounters.push_back(15147);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("MemUnitBusy", "GlobalMemory", "The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,NUM_SHADER_ENGINES,/,(100),*", "a1efa380-4a72-e066-e06a-2ab71a488521" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(24486);
        internalCounters.push_back(24666);
        internalCounters.push_back(24846);
        internalCounters.push_back(25026);
        internalCounters.push_back(25206);
        internalCounters.push_back(25386);
        internalCounters.push_back(25566);
        internalCounters.push_back(25746);
        internalCounters.push_back(25926);
        internalCounters.push_back(26106);
        internalCounters.push_back(26286);
        internalCounters.push_back(26466);
        internalCounters.push_back(26646);
        internalCounters.push_back(26826);
        internalCounters.push_back(27006);
        internalCounters.push_back(27186);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("MemUnitStalled", "GlobalMemory", "The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,NUM_SHADER_ENGINES,/,(100),*", "465ba54f-d250-1453-790a-731b10d230b1" );
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(36031);
        internalCounters.push_back(36223);
        internalCounters.push_back(36415);
        internalCounters.push_back(36607);
        internalCounters.push_back(36799);
        internalCounters.push_back(36991);
        internalCounters.push_back(37183);
        internalCounters.push_back(37375);
        internalCounters.push_back(37567);
        internalCounters.push_back(37759);
        internalCounters.push_back(37951);
        internalCounters.push_back(38143);
        internalCounters.push_back(38335);
        internalCounters.push_back(38527);
        internalCounters.push_back(38719);
        internalCounters.push_back(38911);
        internalCounters.push_back(49743);

        p.DefinePublicCounter("WriteUnitStalled", "GlobalMemory", "The percentage of GPUTime the Write unit is stalled. Value range: 0% to 100% (bad).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,(100),*", "594ad3ce-d1ec-10fc-7d59-25738e397d72" );
    }
}

