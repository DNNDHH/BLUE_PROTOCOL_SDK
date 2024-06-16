#pragma once

 

// Package: TelopMission

#include "Basic.hpp"


namespace SDK::Params
{

// Function TelopMission.TelopMission_C.ExecuteUbergraph_TelopMission
// 0x0018 (0x0018 - 0x0000)
struct TelopMission_C_ExecuteUbergraph_TelopMission final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DB8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopMission_C_ExecuteUbergraph_TelopMission) == 0x000008, "Wrong alignment on TelopMission_C_ExecuteUbergraph_TelopMission");
static_assert(sizeof(TelopMission_C_ExecuteUbergraph_TelopMission) == 0x000018, "Wrong size on TelopMission_C_ExecuteUbergraph_TelopMission");
static_assert(offsetof(TelopMission_C_ExecuteUbergraph_TelopMission, EntryPoint) == 0x000000, "Member 'TelopMission_C_ExecuteUbergraph_TelopMission::EntryPoint' has a wrong offset!");
static_assert(offsetof(TelopMission_C_ExecuteUbergraph_TelopMission, K2Node_Event_Animation) == 0x000008, "Member 'TelopMission_C_ExecuteUbergraph_TelopMission::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(TelopMission_C_ExecuteUbergraph_TelopMission, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'TelopMission_C_ExecuteUbergraph_TelopMission::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function TelopMission.TelopMission_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct TelopMission_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopMission_C_OnAnimationFinished) == 0x000008, "Wrong alignment on TelopMission_C_OnAnimationFinished");
static_assert(sizeof(TelopMission_C_OnAnimationFinished) == 0x000008, "Wrong size on TelopMission_C_OnAnimationFinished");
static_assert(offsetof(TelopMission_C_OnAnimationFinished, Animation) == 0x000000, "Member 'TelopMission_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function TelopMission.TelopMission_C.PlayAnim
// 0x0008 (0x0008 - 0x0000)
struct TelopMission_C_PlayAnim final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopMission_C_PlayAnim) == 0x000008, "Wrong alignment on TelopMission_C_PlayAnim");
static_assert(sizeof(TelopMission_C_PlayAnim) == 0x000008, "Wrong size on TelopMission_C_PlayAnim");
static_assert(offsetof(TelopMission_C_PlayAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'TelopMission_C_PlayAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function TelopMission.TelopMission_C.PlaySE
// 0x0010 (0x0010 - 0x0000)
struct TelopMission_C_PlaySE final
{
public:
	class UAkAudioEvent*                          SE;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopMission_C_PlaySE) == 0x000008, "Wrong alignment on TelopMission_C_PlaySE");
static_assert(sizeof(TelopMission_C_PlaySE) == 0x000010, "Wrong size on TelopMission_C_PlaySE");
static_assert(offsetof(TelopMission_C_PlaySE, SE) == 0x000000, "Member 'TelopMission_C_PlaySE::SE' has a wrong offset!");
static_assert(offsetof(TelopMission_C_PlaySE, CallFunc_PlaySE_ReturnValue) == 0x000008, "Member 'TelopMission_C_PlaySE::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopMission_C_PlaySE, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'TelopMission_C_PlaySE::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function TelopMission.TelopMission_C.SetBG
// 0x0008 (0x0008 - 0x0000)
struct TelopMission_C_SetBG final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopMission_C_SetBG) == 0x000004, "Wrong alignment on TelopMission_C_SetBG");
static_assert(sizeof(TelopMission_C_SetBG) == 0x000008, "Wrong size on TelopMission_C_SetBG");
static_assert(offsetof(TelopMission_C_SetBG, Param_Index) == 0x000000, "Member 'TelopMission_C_SetBG::Param_Index' has a wrong offset!");
static_assert(offsetof(TelopMission_C_SetBG, CallFunc_Clamp_ReturnValue) == 0x000004, "Member 'TelopMission_C_SetBG::CallFunc_Clamp_ReturnValue' has a wrong offset!");

// Function TelopMission.TelopMission_C.IsPlayAnim
// 0x0002 (0x0002 - 0x0000)
struct TelopMission_C_IsPlayAnim final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopMission_C_IsPlayAnim) == 0x000001, "Wrong alignment on TelopMission_C_IsPlayAnim");
static_assert(sizeof(TelopMission_C_IsPlayAnim) == 0x000002, "Wrong size on TelopMission_C_IsPlayAnim");
static_assert(offsetof(TelopMission_C_IsPlayAnim, ReturnValue) == 0x000000, "Member 'TelopMission_C_IsPlayAnim::ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopMission_C_IsPlayAnim, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000001, "Member 'TelopMission_C_IsPlayAnim::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function TelopMission.TelopMission_C.GetText
// 0x0008 (0x0008 - 0x0000)
struct TelopMission_C_GetText final
{
public:
	class USBRuntimeTextBlock*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopMission_C_GetText) == 0x000008, "Wrong alignment on TelopMission_C_GetText");
static_assert(sizeof(TelopMission_C_GetText) == 0x000008, "Wrong size on TelopMission_C_GetText");
static_assert(offsetof(TelopMission_C_GetText, ReturnValue) == 0x000000, "Member 'TelopMission_C_GetText::ReturnValue' has a wrong offset!");

}

