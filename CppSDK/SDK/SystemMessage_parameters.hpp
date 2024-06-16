#pragma once

 

// Package: SystemMessage

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function SystemMessage.SystemMessage_C.ExecuteUbergraph_SystemMessage
// 0x0098 (0x0098 - 0x0000)
struct SystemMessage_C_ExecuteUbergraph_SystemMessage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70B7[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70B8[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsSkipMode;                     // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70B9[0x1];                                     // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0024(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70BA[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0068(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70BB[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_Message;                              // 0x0078(0x0018)(ConstParm)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDemoPlaying_ReturnValue;                // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bDoNotSkip;                     // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SystemMessage_C_ExecuteUbergraph_SystemMessage) == 0x000008, "Wrong alignment on SystemMessage_C_ExecuteUbergraph_SystemMessage");
static_assert(sizeof(SystemMessage_C_ExecuteUbergraph_SystemMessage) == 0x000098, "Wrong size on SystemMessage_C_ExecuteUbergraph_SystemMessage");
static_assert(offsetof(SystemMessage_C_ExecuteUbergraph_SystemMessage, EntryPoint) == 0x000000, "Member 'SystemMessage_C_ExecuteUbergraph_SystemMessage::EntryPoint' has a wrong offset!");
static_assert(offsetof(SystemMessage_C_ExecuteUbergraph_SystemMessage, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'SystemMessage_C_ExecuteUbergraph_SystemMessage::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SystemMessage_C_ExecuteUbergraph_SystemMessage, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SystemMessage_C_ExecuteUbergraph_SystemMessage::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SystemMessage_C_ExecuteUbergraph_SystemMessage, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000010, "Member 'SystemMessage_C_ExecuteUbergraph_SystemMessage::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SystemMessage_C_ExecuteUbergraph_SystemMessage, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'SystemMessage_C_ExecuteUbergraph_SystemMessage::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SystemMessage_C_ExecuteUbergraph_SystemMessage, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000020, "Member 'SystemMessage_C_ExecuteUbergraph_SystemMessage::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SystemMessage_C_ExecuteUbergraph_SystemMessage, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000021, "Member 'SystemMessage_C_ExecuteUbergraph_SystemMessage::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SystemMessage_C_ExecuteUbergraph_SystemMessage, K2Node_CustomEvent_IsSkipMode) == 0x000022, "Member 'SystemMessage_C_ExecuteUbergraph_SystemMessage::K2Node_CustomEvent_IsSkipMode' has a wrong offset!");
static_assert(offsetof(SystemMessage_C_ExecuteUbergraph_SystemMessage, K2Node_Event_MyGeometry) == 0x000024, "Member 'SystemMessage_C_ExecuteUbergraph_SystemMessage::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(SystemMessage_C_ExecuteUbergraph_SystemMessage, K2Node_Event_InDeltaTime) == 0x00005C, "Member 'SystemMessage_C_ExecuteUbergraph_SystemMessage::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(SystemMessage_C_ExecuteUbergraph_SystemMessage, CallFunc_BooleanAND_ReturnValue) == 0x000060, "Member 'SystemMessage_C_ExecuteUbergraph_SystemMessage::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SystemMessage_C_ExecuteUbergraph_SystemMessage, CallFunc_Not_PreBool_ReturnValue_1) == 0x000061, "Member 'SystemMessage_C_ExecuteUbergraph_SystemMessage::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SystemMessage_C_ExecuteUbergraph_SystemMessage, K2Node_Event_Animation) == 0x000068, "Member 'SystemMessage_C_ExecuteUbergraph_SystemMessage::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(SystemMessage_C_ExecuteUbergraph_SystemMessage, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000070, "Member 'SystemMessage_C_ExecuteUbergraph_SystemMessage::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(SystemMessage_C_ExecuteUbergraph_SystemMessage, K2Node_Event_Message) == 0x000078, "Member 'SystemMessage_C_ExecuteUbergraph_SystemMessage::K2Node_Event_Message' has a wrong offset!");
static_assert(offsetof(SystemMessage_C_ExecuteUbergraph_SystemMessage, CallFunc_PlaySE_ReturnValue) == 0x000090, "Member 'SystemMessage_C_ExecuteUbergraph_SystemMessage::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(SystemMessage_C_ExecuteUbergraph_SystemMessage, CallFunc_IsDemoPlaying_ReturnValue) == 0x000094, "Member 'SystemMessage_C_ExecuteUbergraph_SystemMessage::CallFunc_IsDemoPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(SystemMessage_C_ExecuteUbergraph_SystemMessage, K2Node_CustomEvent_bDoNotSkip) == 0x000095, "Member 'SystemMessage_C_ExecuteUbergraph_SystemMessage::K2Node_CustomEvent_bDoNotSkip' has a wrong offset!");

// Function SystemMessage.SystemMessage_C.SetDoNotSkip
// 0x0001 (0x0001 - 0x0000)
struct SystemMessage_C_SetDoNotSkip final
{
public:
	bool                                          Param_bDoNotSkip;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SystemMessage_C_SetDoNotSkip) == 0x000001, "Wrong alignment on SystemMessage_C_SetDoNotSkip");
static_assert(sizeof(SystemMessage_C_SetDoNotSkip) == 0x000001, "Wrong size on SystemMessage_C_SetDoNotSkip");
static_assert(offsetof(SystemMessage_C_SetDoNotSkip, Param_bDoNotSkip) == 0x000000, "Member 'SystemMessage_C_SetDoNotSkip::Param_bDoNotSkip' has a wrong offset!");

// Function SystemMessage.SystemMessage_C.StartMessage
// 0x0018 (0x0018 - 0x0000)
struct SystemMessage_C_StartMessage final
{
public:
	class FText                                   Param_Message;                                     // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(SystemMessage_C_StartMessage) == 0x000008, "Wrong alignment on SystemMessage_C_StartMessage");
static_assert(sizeof(SystemMessage_C_StartMessage) == 0x000018, "Wrong size on SystemMessage_C_StartMessage");
static_assert(offsetof(SystemMessage_C_StartMessage, Param_Message) == 0x000000, "Member 'SystemMessage_C_StartMessage::Param_Message' has a wrong offset!");

// Function SystemMessage.SystemMessage_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct SystemMessage_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SystemMessage_C_OnAnimationFinished) == 0x000008, "Wrong alignment on SystemMessage_C_OnAnimationFinished");
static_assert(sizeof(SystemMessage_C_OnAnimationFinished) == 0x000008, "Wrong size on SystemMessage_C_OnAnimationFinished");
static_assert(offsetof(SystemMessage_C_OnAnimationFinished, Animation) == 0x000000, "Member 'SystemMessage_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function SystemMessage.SystemMessage_C.Tick
// 0x003C (0x003C - 0x0000)
struct SystemMessage_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SystemMessage_C_Tick) == 0x000004, "Wrong alignment on SystemMessage_C_Tick");
static_assert(sizeof(SystemMessage_C_Tick) == 0x00003C, "Wrong size on SystemMessage_C_Tick");
static_assert(offsetof(SystemMessage_C_Tick, MyGeometry) == 0x000000, "Member 'SystemMessage_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(SystemMessage_C_Tick, InDeltaTime) == 0x000038, "Member 'SystemMessage_C_Tick::InDeltaTime' has a wrong offset!");

// Function SystemMessage.SystemMessage_C.SetSkipMessage
// 0x0001 (0x0001 - 0x0000)
struct SystemMessage_C_SetSkipMessage final
{
public:
	bool                                          Param_IsSkipMode;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SystemMessage_C_SetSkipMessage) == 0x000001, "Wrong alignment on SystemMessage_C_SetSkipMessage");
static_assert(sizeof(SystemMessage_C_SetSkipMessage) == 0x000001, "Wrong size on SystemMessage_C_SetSkipMessage");
static_assert(offsetof(SystemMessage_C_SetSkipMessage, Param_IsSkipMode) == 0x000000, "Member 'SystemMessage_C_SetSkipMessage::Param_IsSkipMode' has a wrong offset!");

// Function SystemMessage.SystemMessage_C.SetToDefaultPosition
// 0x0008 (0x0008 - 0x0000)
struct SystemMessage_C_SetToDefaultPosition final
{
public:
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SystemMessage_C_SetToDefaultPosition) == 0x000008, "Wrong alignment on SystemMessage_C_SetToDefaultPosition");
static_assert(sizeof(SystemMessage_C_SetToDefaultPosition) == 0x000008, "Wrong size on SystemMessage_C_SetToDefaultPosition");
static_assert(offsetof(SystemMessage_C_SetToDefaultPosition, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000000, "Member 'SystemMessage_C_SetToDefaultPosition::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function SystemMessage.SystemMessage_C.SetToLowerPosition
// 0x0008 (0x0008 - 0x0000)
struct SystemMessage_C_SetToLowerPosition final
{
public:
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SystemMessage_C_SetToLowerPosition) == 0x000008, "Wrong alignment on SystemMessage_C_SetToLowerPosition");
static_assert(sizeof(SystemMessage_C_SetToLowerPosition) == 0x000008, "Wrong size on SystemMessage_C_SetToLowerPosition");
static_assert(offsetof(SystemMessage_C_SetToLowerPosition, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000000, "Member 'SystemMessage_C_SetToLowerPosition::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function SystemMessage.SystemMessage_C.SetThisDeletedEndAnim
// 0x0001 (0x0001 - 0x0000)
struct SystemMessage_C_SetThisDeletedEndAnim final
{
public:
	bool                                          Param_bThisDeletedEndAnim;                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SystemMessage_C_SetThisDeletedEndAnim) == 0x000001, "Wrong alignment on SystemMessage_C_SetThisDeletedEndAnim");
static_assert(sizeof(SystemMessage_C_SetThisDeletedEndAnim) == 0x000001, "Wrong size on SystemMessage_C_SetThisDeletedEndAnim");
static_assert(offsetof(SystemMessage_C_SetThisDeletedEndAnim, Param_bThisDeletedEndAnim) == 0x000000, "Member 'SystemMessage_C_SetThisDeletedEndAnim::Param_bThisDeletedEndAnim' has a wrong offset!");

}

