#pragma once

 

// Package: TelopNormal

#include "Basic.hpp"


namespace SDK::Params
{

// Function TelopNormal.TelopNormal_C.ExecuteUbergraph_TelopNormal
// 0x0018 (0x0018 - 0x0000)
struct TelopNormal_C_ExecuteUbergraph_TelopNormal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47D8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopNormal_C_ExecuteUbergraph_TelopNormal) == 0x000008, "Wrong alignment on TelopNormal_C_ExecuteUbergraph_TelopNormal");
static_assert(sizeof(TelopNormal_C_ExecuteUbergraph_TelopNormal) == 0x000018, "Wrong size on TelopNormal_C_ExecuteUbergraph_TelopNormal");
static_assert(offsetof(TelopNormal_C_ExecuteUbergraph_TelopNormal, EntryPoint) == 0x000000, "Member 'TelopNormal_C_ExecuteUbergraph_TelopNormal::EntryPoint' has a wrong offset!");
static_assert(offsetof(TelopNormal_C_ExecuteUbergraph_TelopNormal, K2Node_Event_Animation) == 0x000008, "Member 'TelopNormal_C_ExecuteUbergraph_TelopNormal::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(TelopNormal_C_ExecuteUbergraph_TelopNormal, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'TelopNormal_C_ExecuteUbergraph_TelopNormal::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function TelopNormal.TelopNormal_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct TelopNormal_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopNormal_C_OnAnimationFinished) == 0x000008, "Wrong alignment on TelopNormal_C_OnAnimationFinished");
static_assert(sizeof(TelopNormal_C_OnAnimationFinished) == 0x000008, "Wrong size on TelopNormal_C_OnAnimationFinished");
static_assert(offsetof(TelopNormal_C_OnAnimationFinished, Animation) == 0x000000, "Member 'TelopNormal_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function TelopNormal.TelopNormal_C.PlayAnim
// 0x0008 (0x0008 - 0x0000)
struct TelopNormal_C_PlayAnim final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopNormal_C_PlayAnim) == 0x000008, "Wrong alignment on TelopNormal_C_PlayAnim");
static_assert(sizeof(TelopNormal_C_PlayAnim) == 0x000008, "Wrong size on TelopNormal_C_PlayAnim");
static_assert(offsetof(TelopNormal_C_PlayAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'TelopNormal_C_PlayAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function TelopNormal.TelopNormal_C.PlaySE
// 0x0010 (0x0010 - 0x0000)
struct TelopNormal_C_PlaySE final
{
public:
	class UAkAudioEvent*                          SE;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopNormal_C_PlaySE) == 0x000008, "Wrong alignment on TelopNormal_C_PlaySE");
static_assert(sizeof(TelopNormal_C_PlaySE) == 0x000010, "Wrong size on TelopNormal_C_PlaySE");
static_assert(offsetof(TelopNormal_C_PlaySE, SE) == 0x000000, "Member 'TelopNormal_C_PlaySE::SE' has a wrong offset!");
static_assert(offsetof(TelopNormal_C_PlaySE, CallFunc_PlaySE_ReturnValue) == 0x000008, "Member 'TelopNormal_C_PlaySE::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopNormal_C_PlaySE, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'TelopNormal_C_PlaySE::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function TelopNormal.TelopNormal_C.IsPlayAnim
// 0x0002 (0x0002 - 0x0000)
struct TelopNormal_C_IsPlayAnim final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopNormal_C_IsPlayAnim) == 0x000001, "Wrong alignment on TelopNormal_C_IsPlayAnim");
static_assert(sizeof(TelopNormal_C_IsPlayAnim) == 0x000002, "Wrong size on TelopNormal_C_IsPlayAnim");
static_assert(offsetof(TelopNormal_C_IsPlayAnim, ReturnValue) == 0x000000, "Member 'TelopNormal_C_IsPlayAnim::ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopNormal_C_IsPlayAnim, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000001, "Member 'TelopNormal_C_IsPlayAnim::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function TelopNormal.TelopNormal_C.GetText
// 0x0008 (0x0008 - 0x0000)
struct TelopNormal_C_GetText final
{
public:
	class USBRuntimeTextBlock*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopNormal_C_GetText) == 0x000008, "Wrong alignment on TelopNormal_C_GetText");
static_assert(sizeof(TelopNormal_C_GetText) == 0x000008, "Wrong size on TelopNormal_C_GetText");
static_assert(offsetof(TelopNormal_C_GetText, ReturnValue) == 0x000000, "Member 'TelopNormal_C_GetText::ReturnValue' has a wrong offset!");

}

