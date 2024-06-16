#pragma once

 

// Package: P021_Noise

#include "Basic.hpp"


namespace SDK::Params
{

// Function P021_Noise.P021_Noise_C.ExecuteUbergraph_P021_Noise
// 0x0004 (0x0004 - 0x0000)
struct P021_Noise_C_ExecuteUbergraph_P021_Noise final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P021_Noise_C_ExecuteUbergraph_P021_Noise) == 0x000004, "Wrong alignment on P021_Noise_C_ExecuteUbergraph_P021_Noise");
static_assert(sizeof(P021_Noise_C_ExecuteUbergraph_P021_Noise) == 0x000004, "Wrong size on P021_Noise_C_ExecuteUbergraph_P021_Noise");
static_assert(offsetof(P021_Noise_C_ExecuteUbergraph_P021_Noise, EntryPoint) == 0x000000, "Member 'P021_Noise_C_ExecuteUbergraph_P021_Noise::EntryPoint' has a wrong offset!");

// Function P021_Noise.P021_Noise_C.PlayAnimForwardNoise
// 0x0008 (0x0008 - 0x0000)
struct P021_Noise_C_PlayAnimForwardNoise final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P021_Noise_C_PlayAnimForwardNoise) == 0x000008, "Wrong alignment on P021_Noise_C_PlayAnimForwardNoise");
static_assert(sizeof(P021_Noise_C_PlayAnimForwardNoise) == 0x000008, "Wrong size on P021_Noise_C_PlayAnimForwardNoise");
static_assert(offsetof(P021_Noise_C_PlayAnimForwardNoise, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'P021_Noise_C_PlayAnimForwardNoise::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function P021_Noise.P021_Noise_C.PlayAnimReverseNoise
// 0x0008 (0x0008 - 0x0000)
struct P021_Noise_C_PlayAnimReverseNoise final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P021_Noise_C_PlayAnimReverseNoise) == 0x000008, "Wrong alignment on P021_Noise_C_PlayAnimReverseNoise");
static_assert(sizeof(P021_Noise_C_PlayAnimReverseNoise) == 0x000008, "Wrong size on P021_Noise_C_PlayAnimReverseNoise");
static_assert(offsetof(P021_Noise_C_PlayAnimReverseNoise, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'P021_Noise_C_PlayAnimReverseNoise::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

