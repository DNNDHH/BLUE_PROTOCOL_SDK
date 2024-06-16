#pragma once

 

// Package: TelopGameOver

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function TelopGameOver.TelopGameOver_C.ExecuteUbergraph_TelopGameOver
// 0x00C0 (0x00C0 - 0x0000)
struct TelopGameOver_C_ExecuteUbergraph_TelopGameOver final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DB9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DBA[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0014(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOutCheckDebugMode_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DBB[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0058(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00A8(0x0018)()
};
static_assert(alignof(TelopGameOver_C_ExecuteUbergraph_TelopGameOver) == 0x000008, "Wrong alignment on TelopGameOver_C_ExecuteUbergraph_TelopGameOver");
static_assert(sizeof(TelopGameOver_C_ExecuteUbergraph_TelopGameOver) == 0x0000C0, "Wrong size on TelopGameOver_C_ExecuteUbergraph_TelopGameOver");
static_assert(offsetof(TelopGameOver_C_ExecuteUbergraph_TelopGameOver, EntryPoint) == 0x000000, "Member 'TelopGameOver_C_ExecuteUbergraph_TelopGameOver::EntryPoint' has a wrong offset!");
static_assert(offsetof(TelopGameOver_C_ExecuteUbergraph_TelopGameOver, K2Node_Event_Animation) == 0x000008, "Member 'TelopGameOver_C_ExecuteUbergraph_TelopGameOver::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(TelopGameOver_C_ExecuteUbergraph_TelopGameOver, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'TelopGameOver_C_ExecuteUbergraph_TelopGameOver::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopGameOver_C_ExecuteUbergraph_TelopGameOver, K2Node_Event_MyGeometry) == 0x000014, "Member 'TelopGameOver_C_ExecuteUbergraph_TelopGameOver::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(TelopGameOver_C_ExecuteUbergraph_TelopGameOver, K2Node_Event_InDeltaTime) == 0x00004C, "Member 'TelopGameOver_C_ExecuteUbergraph_TelopGameOver::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(TelopGameOver_C_ExecuteUbergraph_TelopGameOver, CallFunc_IsOutCheckDebugMode_ReturnValue) == 0x000050, "Member 'TelopGameOver_C_ExecuteUbergraph_TelopGameOver::CallFunc_IsOutCheckDebugMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopGameOver_C_ExecuteUbergraph_TelopGameOver, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000054, "Member 'TelopGameOver_C_ExecuteUbergraph_TelopGameOver::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopGameOver_C_ExecuteUbergraph_TelopGameOver, K2Node_MakeStruct_FormatArgumentData) == 0x000058, "Member 'TelopGameOver_C_ExecuteUbergraph_TelopGameOver::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(TelopGameOver_C_ExecuteUbergraph_TelopGameOver, K2Node_MakeArray_Array) == 0x000098, "Member 'TelopGameOver_C_ExecuteUbergraph_TelopGameOver::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(TelopGameOver_C_ExecuteUbergraph_TelopGameOver, CallFunc_Format_ReturnValue) == 0x0000A8, "Member 'TelopGameOver_C_ExecuteUbergraph_TelopGameOver::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function TelopGameOver.TelopGameOver_C.Tick
// 0x003C (0x003C - 0x0000)
struct TelopGameOver_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopGameOver_C_Tick) == 0x000004, "Wrong alignment on TelopGameOver_C_Tick");
static_assert(sizeof(TelopGameOver_C_Tick) == 0x00003C, "Wrong size on TelopGameOver_C_Tick");
static_assert(offsetof(TelopGameOver_C_Tick, MyGeometry) == 0x000000, "Member 'TelopGameOver_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(TelopGameOver_C_Tick, InDeltaTime) == 0x000038, "Member 'TelopGameOver_C_Tick::InDeltaTime' has a wrong offset!");

// Function TelopGameOver.TelopGameOver_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct TelopGameOver_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopGameOver_C_OnAnimationFinished) == 0x000008, "Wrong alignment on TelopGameOver_C_OnAnimationFinished");
static_assert(sizeof(TelopGameOver_C_OnAnimationFinished) == 0x000008, "Wrong size on TelopGameOver_C_OnAnimationFinished");
static_assert(offsetof(TelopGameOver_C_OnAnimationFinished, Animation) == 0x000000, "Member 'TelopGameOver_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function TelopGameOver.TelopGameOver_C.PlayAnim
// 0x0008 (0x0008 - 0x0000)
struct TelopGameOver_C_PlayAnim final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopGameOver_C_PlayAnim) == 0x000008, "Wrong alignment on TelopGameOver_C_PlayAnim");
static_assert(sizeof(TelopGameOver_C_PlayAnim) == 0x000008, "Wrong size on TelopGameOver_C_PlayAnim");
static_assert(offsetof(TelopGameOver_C_PlayAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'TelopGameOver_C_PlayAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function TelopGameOver.TelopGameOver_C.PlayBGM
// 0x0068 (0x0068 - 0x0000)
struct TelopGameOver_C_PlayBGM final
{
public:
	struct FSBTelopPlayParam                      CallFunc_GetParam_ReturnValue;                     // 0x0000(0x0060)(ConstParm)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopGameOver_C_PlayBGM) == 0x000008, "Wrong alignment on TelopGameOver_C_PlayBGM");
static_assert(sizeof(TelopGameOver_C_PlayBGM) == 0x000068, "Wrong size on TelopGameOver_C_PlayBGM");
static_assert(offsetof(TelopGameOver_C_PlayBGM, CallFunc_GetParam_ReturnValue) == 0x000000, "Member 'TelopGameOver_C_PlayBGM::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopGameOver_C_PlayBGM, CallFunc_NotEqual_NameName_ReturnValue) == 0x000060, "Member 'TelopGameOver_C_PlayBGM::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");

// Function TelopGameOver.TelopGameOver_C.PlaySE
// 0x0010 (0x0010 - 0x0000)
struct TelopGameOver_C_PlaySE final
{
public:
	class UAkAudioEvent*                          SE;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopGameOver_C_PlaySE) == 0x000008, "Wrong alignment on TelopGameOver_C_PlaySE");
static_assert(sizeof(TelopGameOver_C_PlaySE) == 0x000010, "Wrong size on TelopGameOver_C_PlaySE");
static_assert(offsetof(TelopGameOver_C_PlaySE, SE) == 0x000000, "Member 'TelopGameOver_C_PlaySE::SE' has a wrong offset!");
static_assert(offsetof(TelopGameOver_C_PlaySE, CallFunc_PlaySE_ReturnValue) == 0x000008, "Member 'TelopGameOver_C_PlaySE::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopGameOver_C_PlaySE, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'TelopGameOver_C_PlaySE::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function TelopGameOver.TelopGameOver_C.IsPlayAnim
// 0x0002 (0x0002 - 0x0000)
struct TelopGameOver_C_IsPlayAnim final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TelopGameOver_C_IsPlayAnim) == 0x000001, "Wrong alignment on TelopGameOver_C_IsPlayAnim");
static_assert(sizeof(TelopGameOver_C_IsPlayAnim) == 0x000002, "Wrong size on TelopGameOver_C_IsPlayAnim");
static_assert(offsetof(TelopGameOver_C_IsPlayAnim, ReturnValue) == 0x000000, "Member 'TelopGameOver_C_IsPlayAnim::ReturnValue' has a wrong offset!");
static_assert(offsetof(TelopGameOver_C_IsPlayAnim, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000001, "Member 'TelopGameOver_C_IsPlayAnim::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function TelopGameOver.TelopGameOver_C.GetText
// 0x0008 (0x0008 - 0x0000)
struct TelopGameOver_C_GetText final
{
public:
	class USBRuntimeTextBlock*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TelopGameOver_C_GetText) == 0x000008, "Wrong alignment on TelopGameOver_C_GetText");
static_assert(sizeof(TelopGameOver_C_GetText) == 0x000008, "Wrong size on TelopGameOver_C_GetText");
static_assert(offsetof(TelopGameOver_C_GetText, ReturnValue) == 0x000000, "Member 'TelopGameOver_C_GetText::ReturnValue' has a wrong offset!");

}

