#pragma once

 

// Package: ScriptTalkModeViewParameter

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct ScriptTalkModeViewParameter.ScriptTalkModeViewParameter
// 0x0024 (0x0024 - 0x0000)
struct FScriptTalkModeViewParameter final
{
public:
	struct FVector                                PlayerLocation_6_ADF4095C423217BD8D4F10B8FC3C7327; // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CameraLocation_7_235175B44E7E066F1227448D6848D92A; // 0x000C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ViewTargetLocation_8_9DF3962246DB25060A0B148F513FD2DE; // 0x0018(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FScriptTalkModeViewParameter) == 0x000004, "Wrong alignment on FScriptTalkModeViewParameter");
static_assert(sizeof(FScriptTalkModeViewParameter) == 0x000024, "Wrong size on FScriptTalkModeViewParameter");
static_assert(offsetof(FScriptTalkModeViewParameter, PlayerLocation_6_ADF4095C423217BD8D4F10B8FC3C7327) == 0x000000, "Member 'FScriptTalkModeViewParameter::PlayerLocation_6_ADF4095C423217BD8D4F10B8FC3C7327' has a wrong offset!");
static_assert(offsetof(FScriptTalkModeViewParameter, CameraLocation_7_235175B44E7E066F1227448D6848D92A) == 0x00000C, "Member 'FScriptTalkModeViewParameter::CameraLocation_7_235175B44E7E066F1227448D6848D92A' has a wrong offset!");
static_assert(offsetof(FScriptTalkModeViewParameter, ViewTargetLocation_8_9DF3962246DB25060A0B148F513FD2DE) == 0x000018, "Member 'FScriptTalkModeViewParameter::ViewTargetLocation_8_9DF3962246DB25060A0B148F513FD2DE' has a wrong offset!");

}

