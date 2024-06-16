#pragma once

 

// Package: TelopChallenge

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function TelopChallenge.TelopChallenge_C.ExecuteUbergraph_TelopChallenge
// 0x0018 (0x0018 - 0x0000)
struct TelopChallenge_C_ExecuteUbergraph_TelopChallenge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_140E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopChallenge_C_ExecuteUbergraph_TelopChallenge) == 0x000008, "Wrong alignment on TelopChallenge_C_ExecuteUbergraph_TelopChallenge");
static_assert(sizeof(TelopChallenge_C_ExecuteUbergraph_TelopChallenge) == 0x000018, "Wrong size on TelopChallenge_C_ExecuteUbergraph_TelopChallenge");
static_assert(offsetof(TelopChallenge_C_ExecuteUbergraph_TelopChallenge, EntryPoint) == 0x000000, "Member 'TelopChallenge_C_ExecuteUbergraph_TelopChallenge::EntryPoint' has a wrong offset!");
static_assert(offsetof(TelopChallenge_C_ExecuteUbergraph_TelopChallenge, K2Node_Event_Animation) == 0x000008, "Member 'TelopChallenge_C_ExecuteUbergraph_TelopChallenge::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(TelopChallenge_C_ExecuteUbergraph_TelopChallenge, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'TelopChallenge_C_ExecuteUbergraph_TelopChallenge::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function TelopChallenge.TelopChallenge_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct TelopChallenge_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopChallenge_C_OnAnimationFinished) == 0x000008, "Wrong alignment on TelopChallenge_C_OnAnimationFinished");
static_assert(sizeof(TelopChallenge_C_OnAnimationFinished) == 0x000008, "Wrong size on TelopChallenge_C_OnAnimationFinished");
static_assert(offsetof(TelopChallenge_C_OnAnimationFinished, Animation) == 0x000000, "Member 'TelopChallenge_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function TelopChallenge.TelopChallenge_C.PlayAnim
// 0x0008 (0x0008 - 0x0000)
struct TelopChallenge_C_PlayAnim final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopChallenge_C_PlayAnim) == 0x000008, "Wrong alignment on TelopChallenge_C_PlayAnim");
static_assert(sizeof(TelopChallenge_C_PlayAnim) == 0x000008, "Wrong size on TelopChallenge_C_PlayAnim");
static_assert(offsetof(TelopChallenge_C_PlayAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'TelopChallenge_C_PlayAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function TelopChallenge.TelopChallenge_C.PlaySE
// 0x0058 (0x0058 - 0x0000)
struct TelopChallenge_C_PlaySE final
{
public:
	class UAkAudioEvent*                          SE;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_140F[0x1];                                     // 0x000B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1410[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTelopDataParam                      CallFunc_GetData_ReturnValue;                      // 0x0028(0x0020)(ConstParm)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopChallenge_C_PlaySE) == 0x000008, "Wrong alignment on TelopChallenge_C_PlaySE");
static_assert(sizeof(TelopChallenge_C_PlaySE) == 0x000058, "Wrong size on TelopChallenge_C_PlaySE");
static_assert(offsetof(TelopChallenge_C_PlaySE, SE) == 0x000000, "Member 'TelopChallenge_C_PlaySE::SE' has a wrong offset!");
static_assert(offsetof(TelopChallenge_C_PlaySE, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'TelopChallenge_C_PlaySE::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopChallenge_C_PlaySE, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000009, "Member 'TelopChallenge_C_PlaySE::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopChallenge_C_PlaySE, CallFunc_Not_PreBool_ReturnValue) == 0x00000A, "Member 'TelopChallenge_C_PlaySE::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopChallenge_C_PlaySE, CallFunc_PlaySE_ReturnValue) == 0x00000C, "Member 'TelopChallenge_C_PlaySE::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopChallenge_C_PlaySE, CallFunc_PlaySE_ReturnValue_1) == 0x000010, "Member 'TelopChallenge_C_PlaySE::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TelopChallenge_C_PlaySE, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'TelopChallenge_C_PlaySE::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TelopChallenge_C_PlaySE, CallFunc_GetData_ReturnValue) == 0x000028, "Member 'TelopChallenge_C_PlaySE::CallFunc_GetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopChallenge_C_PlaySE, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000048, "Member 'TelopChallenge_C_PlaySE::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopChallenge_C_PlaySE, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000050, "Member 'TelopChallenge_C_PlaySE::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function TelopChallenge.TelopChallenge_C.SetBG
// 0x0008 (0x0008 - 0x0000)
struct TelopChallenge_C_SetBG final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopChallenge_C_SetBG) == 0x000004, "Wrong alignment on TelopChallenge_C_SetBG");
static_assert(sizeof(TelopChallenge_C_SetBG) == 0x000008, "Wrong size on TelopChallenge_C_SetBG");
static_assert(offsetof(TelopChallenge_C_SetBG, Param_Index) == 0x000000, "Member 'TelopChallenge_C_SetBG::Param_Index' has a wrong offset!");
static_assert(offsetof(TelopChallenge_C_SetBG, CallFunc_Clamp_ReturnValue) == 0x000004, "Member 'TelopChallenge_C_SetBG::CallFunc_Clamp_ReturnValue' has a wrong offset!");

// Function TelopChallenge.TelopChallenge_C.IsPlayAnim
// 0x0002 (0x0002 - 0x0000)
struct TelopChallenge_C_IsPlayAnim final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopChallenge_C_IsPlayAnim) == 0x000001, "Wrong alignment on TelopChallenge_C_IsPlayAnim");
static_assert(sizeof(TelopChallenge_C_IsPlayAnim) == 0x000002, "Wrong size on TelopChallenge_C_IsPlayAnim");
static_assert(offsetof(TelopChallenge_C_IsPlayAnim, ReturnValue) == 0x000000, "Member 'TelopChallenge_C_IsPlayAnim::ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopChallenge_C_IsPlayAnim, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000001, "Member 'TelopChallenge_C_IsPlayAnim::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function TelopChallenge.TelopChallenge_C.GetText
// 0x0008 (0x0008 - 0x0000)
struct TelopChallenge_C_GetText final
{
public:
	class USBRuntimeTextBlock*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopChallenge_C_GetText) == 0x000008, "Wrong alignment on TelopChallenge_C_GetText");
static_assert(sizeof(TelopChallenge_C_GetText) == 0x000008, "Wrong size on TelopChallenge_C_GetText");
static_assert(offsetof(TelopChallenge_C_GetText, ReturnValue) == 0x000000, "Member 'TelopChallenge_C_GetText::ReturnValue' has a wrong offset!");

// Function TelopChallenge.TelopChallenge_C.GetSubText
// 0x0008 (0x0008 - 0x0000)
struct TelopChallenge_C_GetSubText final
{
public:
	class UTextBlock*                             ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopChallenge_C_GetSubText) == 0x000008, "Wrong alignment on TelopChallenge_C_GetSubText");
static_assert(sizeof(TelopChallenge_C_GetSubText) == 0x000008, "Wrong size on TelopChallenge_C_GetSubText");
static_assert(offsetof(TelopChallenge_C_GetSubText, ReturnValue) == 0x000000, "Member 'TelopChallenge_C_GetSubText::ReturnValue' has a wrong offset!");

}

