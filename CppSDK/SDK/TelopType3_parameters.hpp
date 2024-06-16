#pragma once

 

// Package: TelopType3

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function TelopType3.TelopType3_C.ExecuteUbergraph_TelopType3
// 0x0018 (0x0018 - 0x0000)
struct TelopType3_C_ExecuteUbergraph_TelopType3 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4808[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopType3_C_ExecuteUbergraph_TelopType3) == 0x000008, "Wrong alignment on TelopType3_C_ExecuteUbergraph_TelopType3");
static_assert(sizeof(TelopType3_C_ExecuteUbergraph_TelopType3) == 0x000018, "Wrong size on TelopType3_C_ExecuteUbergraph_TelopType3");
static_assert(offsetof(TelopType3_C_ExecuteUbergraph_TelopType3, EntryPoint) == 0x000000, "Member 'TelopType3_C_ExecuteUbergraph_TelopType3::EntryPoint' has a wrong offset!");
static_assert(offsetof(TelopType3_C_ExecuteUbergraph_TelopType3, K2Node_Event_Animation) == 0x000008, "Member 'TelopType3_C_ExecuteUbergraph_TelopType3::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(TelopType3_C_ExecuteUbergraph_TelopType3, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'TelopType3_C_ExecuteUbergraph_TelopType3::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function TelopType3.TelopType3_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct TelopType3_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopType3_C_OnAnimationFinished) == 0x000008, "Wrong alignment on TelopType3_C_OnAnimationFinished");
static_assert(sizeof(TelopType3_C_OnAnimationFinished) == 0x000008, "Wrong size on TelopType3_C_OnAnimationFinished");
static_assert(offsetof(TelopType3_C_OnAnimationFinished, Animation) == 0x000000, "Member 'TelopType3_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function TelopType3.TelopType3_C.PlayAnim
// 0x0008 (0x0008 - 0x0000)
struct TelopType3_C_PlayAnim final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopType3_C_PlayAnim) == 0x000008, "Wrong alignment on TelopType3_C_PlayAnim");
static_assert(sizeof(TelopType3_C_PlayAnim) == 0x000008, "Wrong size on TelopType3_C_PlayAnim");
static_assert(offsetof(TelopType3_C_PlayAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'TelopType3_C_PlayAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function TelopType3.TelopType3_C.PlayBGM
// 0x0068 (0x0068 - 0x0000)
struct TelopType3_C_PlayBGM final
{
public:
	struct FSBTelopPlayParam                      CallFunc_GetParam_ReturnValue;                     // 0x0000(0x0060)(ConstParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopType3_C_PlayBGM) == 0x000008, "Wrong alignment on TelopType3_C_PlayBGM");
static_assert(sizeof(TelopType3_C_PlayBGM) == 0x000068, "Wrong size on TelopType3_C_PlayBGM");
static_assert(offsetof(TelopType3_C_PlayBGM, CallFunc_GetParam_ReturnValue) == 0x000000, "Member 'TelopType3_C_PlayBGM::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopType3_C_PlayBGM, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000060, "Member 'TelopType3_C_PlayBGM::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopType3_C_PlayBGM, CallFunc_NotEqual_NameName_ReturnValue) == 0x000061, "Member 'TelopType3_C_PlayBGM::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopType3_C_PlayBGM, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000062, "Member 'TelopType3_C_PlayBGM::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function TelopType3.TelopType3_C.PlaySE
// 0x0010 (0x0010 - 0x0000)
struct TelopType3_C_PlaySE final
{
public:
	class UAkAudioEvent*                          SE;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopType3_C_PlaySE) == 0x000008, "Wrong alignment on TelopType3_C_PlaySE");
static_assert(sizeof(TelopType3_C_PlaySE) == 0x000010, "Wrong size on TelopType3_C_PlaySE");
static_assert(offsetof(TelopType3_C_PlaySE, SE) == 0x000000, "Member 'TelopType3_C_PlaySE::SE' has a wrong offset!");
static_assert(offsetof(TelopType3_C_PlaySE, CallFunc_PlaySE_ReturnValue) == 0x000008, "Member 'TelopType3_C_PlaySE::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopType3_C_PlaySE, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'TelopType3_C_PlaySE::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function TelopType3.TelopType3_C.SetBG
// 0x0008 (0x0008 - 0x0000)
struct TelopType3_C_SetBG final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopType3_C_SetBG) == 0x000004, "Wrong alignment on TelopType3_C_SetBG");
static_assert(sizeof(TelopType3_C_SetBG) == 0x000008, "Wrong size on TelopType3_C_SetBG");
static_assert(offsetof(TelopType3_C_SetBG, Param_Index) == 0x000000, "Member 'TelopType3_C_SetBG::Param_Index' has a wrong offset!");
static_assert(offsetof(TelopType3_C_SetBG, CallFunc_Clamp_ReturnValue) == 0x000004, "Member 'TelopType3_C_SetBG::CallFunc_Clamp_ReturnValue' has a wrong offset!");

// Function TelopType3.TelopType3_C.IsPlayAnim
// 0x0002 (0x0002 - 0x0000)
struct TelopType3_C_IsPlayAnim final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopType3_C_IsPlayAnim) == 0x000001, "Wrong alignment on TelopType3_C_IsPlayAnim");
static_assert(sizeof(TelopType3_C_IsPlayAnim) == 0x000002, "Wrong size on TelopType3_C_IsPlayAnim");
static_assert(offsetof(TelopType3_C_IsPlayAnim, ReturnValue) == 0x000000, "Member 'TelopType3_C_IsPlayAnim::ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopType3_C_IsPlayAnim, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000001, "Member 'TelopType3_C_IsPlayAnim::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function TelopType3.TelopType3_C.GetText
// 0x0008 (0x0008 - 0x0000)
struct TelopType3_C_GetText final
{
public:
	class USBRuntimeTextBlock*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopType3_C_GetText) == 0x000008, "Wrong alignment on TelopType3_C_GetText");
static_assert(sizeof(TelopType3_C_GetText) == 0x000008, "Wrong size on TelopType3_C_GetText");
static_assert(offsetof(TelopType3_C_GetText, ReturnValue) == 0x000000, "Member 'TelopType3_C_GetText::ReturnValue' has a wrong offset!");

// Function TelopType3.TelopType3_C.GetTextEffect
// 0x0008 (0x0008 - 0x0000)
struct TelopType3_C_GetTextEffect final
{
public:
	class USBRuntimeTextBlock*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopType3_C_GetTextEffect) == 0x000008, "Wrong alignment on TelopType3_C_GetTextEffect");
static_assert(sizeof(TelopType3_C_GetTextEffect) == 0x000008, "Wrong size on TelopType3_C_GetTextEffect");
static_assert(offsetof(TelopType3_C_GetTextEffect, ReturnValue) == 0x000000, "Member 'TelopType3_C_GetTextEffect::ReturnValue' has a wrong offset!");

}

