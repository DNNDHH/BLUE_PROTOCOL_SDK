#pragma once

 

// Package: ResultMenuBase

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ResultMenuBase.ResultMenuBase_C.ExecuteUbergraph_ResultMenuBase
// 0x0150 (0x0150 - 0x0000)
struct ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D00[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLetter                              CallFunc_GetResultLetter_OutLetter;                // 0x0008(0x0028)()
	bool                                          CallFunc_GetResultLetter_ReturnValue;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isVisibleResultWindow_ReturnValue;        // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D01[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyEvent                              K2Node_Event_Event_1;                              // 0x0038(0x0038)(ConstParm)
	struct FKeyEvent                              K2Node_Event_Event;                                // 0x0070(0x0038)(ConstParm)
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x00A8(0x0018)(HasGetValueTypeHash)
	struct FKey                                   CallFunc_GetKey_ReturnValue_1;                     // 0x00C0(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isOpenShortcutRing_ReturnValue;           // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D02[0x1];                                     // 0x00DB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00DC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D03[0x3];                                     // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBShortcutRingWidget*                  K2Node_Event_InShortcutRing_1;                     // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBShortcutRingWidget*                  K2Node_Event_InShortcutRing;                       // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSBTelopManager_IsValid;                // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D04[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTelopManager*                        CallFunc_GetSBTelopManager_ReturnValue;            // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayTelop_ReturnValue;                  // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRegist_ReturnValue;                     // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSBTelopManager_IsValid_1;              // 0x0113(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D05[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTelopManager*                        CallFunc_GetSBTelopManager_ReturnValue_1;          // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_isLearningAbility_ReturnValue;            // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isVisibleResultWindow_ReturnValue_1;      // 0x0122(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isVisibleFooter_ReturnValue;              // 0x0123(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0125(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0126(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0127(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBOverLimit                           CallFunc_GetResultOverLimit_OutOverLimit;          // 0x0128(0x0020)()
	bool                                          CallFunc_GetResultOverLimit_ReturnValue;           // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase) == 0x000008, "Wrong alignment on ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase");
static_assert(sizeof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase) == 0x000150, "Wrong size on ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, EntryPoint) == 0x000000, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_GetResultLetter_OutLetter) == 0x000008, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_GetResultLetter_OutLetter' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_GetResultLetter_ReturnValue) == 0x000030, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_GetResultLetter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_isVisibleResultWindow_ReturnValue) == 0x000031, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_isVisibleResultWindow_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, K2Node_Event_Event_1) == 0x000038, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::K2Node_Event_Event_1' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, K2Node_Event_Event) == 0x000070, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::K2Node_Event_Event' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_GetKey_ReturnValue) == 0x0000A8, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_GetKey_ReturnValue_1) == 0x0000C0, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_GetKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x0000D8, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_EqualEqual_KeyKey_ReturnValue_1) == 0x0000D9, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_EqualEqual_KeyKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_isOpenShortcutRing_ReturnValue) == 0x0000DA, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_isOpenShortcutRing_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, K2Node_CreateDelegate_OutputDelegate) == 0x0000DC, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_BooleanAND_ReturnValue) == 0x0000EC, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, K2Node_Event_InShortcutRing_1) == 0x0000F0, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::K2Node_Event_InShortcutRing_1' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, K2Node_Event_InShortcutRing) == 0x0000F8, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::K2Node_Event_InShortcutRing' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_GetSBTelopManager_IsValid) == 0x000100, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_GetSBTelopManager_IsValid' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_GetSBTelopManager_ReturnValue) == 0x000108, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_GetSBTelopManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_IsPlayTelop_ReturnValue) == 0x000110, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_IsPlayTelop_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_IsRegist_ReturnValue) == 0x000111, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_IsRegist_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_BooleanOR_ReturnValue) == 0x000112, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_GetSBTelopManager_IsValid_1) == 0x000113, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_GetSBTelopManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_GetSBTelopManager_ReturnValue_1) == 0x000118, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_GetSBTelopManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_isLearningAbility_ReturnValue) == 0x000120, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_isLearningAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_BooleanAND_ReturnValue_1) == 0x000121, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_isVisibleResultWindow_ReturnValue_1) == 0x000122, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_isVisibleResultWindow_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_isVisibleFooter_ReturnValue) == 0x000123, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_isVisibleFooter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_Not_PreBool_ReturnValue) == 0x000124, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_Not_PreBool_ReturnValue_1) == 0x000125, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_BooleanAND_ReturnValue_2) == 0x000126, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_BooleanAND_ReturnValue_3) == 0x000127, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_GetResultOverLimit_OutOverLimit) == 0x000128, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_GetResultOverLimit_OutOverLimit' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_GetResultOverLimit_ReturnValue) == 0x000148, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_GetResultOverLimit_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase, CallFunc_BooleanOR_ReturnValue_1) == 0x000149, "Member 'ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.UnbindShortcutRing
// 0x0008 (0x0008 - 0x0000)
struct ResultMenuBase_C_UnbindShortcutRing final
{
public:
	class USBShortcutRingWidget*                  InShortcutRing;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultMenuBase_C_UnbindShortcutRing) == 0x000008, "Wrong alignment on ResultMenuBase_C_UnbindShortcutRing");
static_assert(sizeof(ResultMenuBase_C_UnbindShortcutRing) == 0x000008, "Wrong size on ResultMenuBase_C_UnbindShortcutRing");
static_assert(offsetof(ResultMenuBase_C_UnbindShortcutRing, InShortcutRing) == 0x000000, "Member 'ResultMenuBase_C_UnbindShortcutRing::InShortcutRing' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.BindShortcutRing
// 0x0008 (0x0008 - 0x0000)
struct ResultMenuBase_C_BindShortcutRing final
{
public:
	class USBShortcutRingWidget*                  InShortcutRing;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultMenuBase_C_BindShortcutRing) == 0x000008, "Wrong alignment on ResultMenuBase_C_BindShortcutRing");
static_assert(sizeof(ResultMenuBase_C_BindShortcutRing) == 0x000008, "Wrong size on ResultMenuBase_C_BindShortcutRing");
static_assert(offsetof(ResultMenuBase_C_BindShortcutRing, InShortcutRing) == 0x000000, "Member 'ResultMenuBase_C_BindShortcutRing::InShortcutRing' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.OnEventKeyUp
// 0x0038 (0x0038 - 0x0000)
struct ResultMenuBase_C_OnEventKeyUp final
{
public:
	struct FKeyEvent                              Event;                                             // 0x0000(0x0038)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ResultMenuBase_C_OnEventKeyUp) == 0x000008, "Wrong alignment on ResultMenuBase_C_OnEventKeyUp");
static_assert(sizeof(ResultMenuBase_C_OnEventKeyUp) == 0x000038, "Wrong size on ResultMenuBase_C_OnEventKeyUp");
static_assert(offsetof(ResultMenuBase_C_OnEventKeyUp, Event) == 0x000000, "Member 'ResultMenuBase_C_OnEventKeyUp::Event' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.OnEventKeyDown
// 0x0038 (0x0038 - 0x0000)
struct ResultMenuBase_C_OnEventKeyDown final
{
public:
	struct FKeyEvent                              Event;                                             // 0x0000(0x0038)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ResultMenuBase_C_OnEventKeyDown) == 0x000008, "Wrong alignment on ResultMenuBase_C_OnEventKeyDown");
static_assert(sizeof(ResultMenuBase_C_OnEventKeyDown) == 0x000038, "Wrong size on ResultMenuBase_C_OnEventKeyDown");
static_assert(offsetof(ResultMenuBase_C_OnEventKeyDown, Event) == 0x000000, "Member 'ResultMenuBase_C_OnEventKeyDown::Event' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.EnableControl
// 0x0010 (0x0010 - 0x0000)
struct ResultMenuBase_C_EnableControl final
{
public:
	class USBShortcutRingWidget*                  CallFunc_GetResultShortcutRing_ReturnValue;        // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultMenuBase_C_EnableControl) == 0x000008, "Wrong alignment on ResultMenuBase_C_EnableControl");
static_assert(sizeof(ResultMenuBase_C_EnableControl) == 0x000010, "Wrong size on ResultMenuBase_C_EnableControl");
static_assert(offsetof(ResultMenuBase_C_EnableControl, CallFunc_GetResultShortcutRing_ReturnValue) == 0x000000, "Member 'ResultMenuBase_C_EnableControl::CallFunc_GetResultShortcutRing_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_EnableControl, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'ResultMenuBase_C_EnableControl::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.OnInitializeKeyGuide
// 0x0028 (0x0028 - 0x0000)
struct ResultMenuBase_C_OnInitializeKeyGuide final
{
public:
	struct FKey                                   CallFunc_GetKeyMenu_ReturnValue;                   // 0x0000(0x0018)(HasGetValueTypeHash)
	class USBResultKeyGuide*                      CallFunc_GetResultKeyGuide_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultMenuBase_C_OnInitializeKeyGuide) == 0x000008, "Wrong alignment on ResultMenuBase_C_OnInitializeKeyGuide");
static_assert(sizeof(ResultMenuBase_C_OnInitializeKeyGuide) == 0x000028, "Wrong size on ResultMenuBase_C_OnInitializeKeyGuide");
static_assert(offsetof(ResultMenuBase_C_OnInitializeKeyGuide, CallFunc_GetKeyMenu_ReturnValue) == 0x000000, "Member 'ResultMenuBase_C_OnInitializeKeyGuide::CallFunc_GetKeyMenu_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_OnInitializeKeyGuide, CallFunc_GetResultKeyGuide_ReturnValue) == 0x000018, "Member 'ResultMenuBase_C_OnInitializeKeyGuide::CallFunc_GetResultKeyGuide_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_OnInitializeKeyGuide, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'ResultMenuBase_C_OnInitializeKeyGuide::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.OpenDialogAbility
// 0x05C8 (0x05C8 - 0x0000)
struct ResultMenuBase_C_OpenDialogAbility final
{
public:
	TArray<struct FSBSkillParam>                  LearningAbility;                                   // 0x0000(0x0010)(Edit, BlueprintVisible)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDialog_TacticalAbilityLearning_C*      CallFunc_GetDialogAbility_OutDialog;               // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D06[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDungeonClearRewardInfo              CallFunc_GetDungeonClearRewardInfo_ReturnValue;    // 0x0030(0x0578)(ConstParm)
	class UDialog_TacticalAbilityLearning_C*      CallFunc_GetDialogAbility_OutDialog_1;             // 0x05A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x05B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D07[0x7];                                     // 0x05B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDialog_TacticalAbilityLearning_C*      CallFunc_GetDialogAbility_OutDialog_2;             // 0x05B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDialog_TacticalAbilityLearning_C*      CallFunc_GetDialogAbility_OutDialog_3;             // 0x05C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultMenuBase_C_OpenDialogAbility) == 0x000008, "Wrong alignment on ResultMenuBase_C_OpenDialogAbility");
static_assert(sizeof(ResultMenuBase_C_OpenDialogAbility) == 0x0005C8, "Wrong size on ResultMenuBase_C_OpenDialogAbility");
static_assert(offsetof(ResultMenuBase_C_OpenDialogAbility, LearningAbility) == 0x000000, "Member 'ResultMenuBase_C_OpenDialogAbility::LearningAbility' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_OpenDialogAbility, CallFunc_GetGameState_ReturnValue) == 0x000010, "Member 'ResultMenuBase_C_OpenDialogAbility::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_OpenDialogAbility, CallFunc_GetDialogAbility_OutDialog) == 0x000018, "Member 'ResultMenuBase_C_OpenDialogAbility::CallFunc_GetDialogAbility_OutDialog' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_OpenDialogAbility, K2Node_DynamicCast_AsSBGame_State_Dungeon) == 0x000020, "Member 'ResultMenuBase_C_OpenDialogAbility::K2Node_DynamicCast_AsSBGame_State_Dungeon' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_OpenDialogAbility, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'ResultMenuBase_C_OpenDialogAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_OpenDialogAbility, CallFunc_GetDungeonClearRewardInfo_ReturnValue) == 0x000030, "Member 'ResultMenuBase_C_OpenDialogAbility::CallFunc_GetDungeonClearRewardInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_OpenDialogAbility, CallFunc_GetDialogAbility_OutDialog_1) == 0x0005A8, "Member 'ResultMenuBase_C_OpenDialogAbility::CallFunc_GetDialogAbility_OutDialog_1' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_OpenDialogAbility, CallFunc_IsValid_ReturnValue) == 0x0005B0, "Member 'ResultMenuBase_C_OpenDialogAbility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_OpenDialogAbility, CallFunc_GetDialogAbility_OutDialog_2) == 0x0005B8, "Member 'ResultMenuBase_C_OpenDialogAbility::CallFunc_GetDialogAbility_OutDialog_2' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_OpenDialogAbility, CallFunc_GetDialogAbility_OutDialog_3) == 0x0005C0, "Member 'ResultMenuBase_C_OpenDialogAbility::CallFunc_GetDialogAbility_OutDialog_3' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.isKeyDownShortcutRing
// 0x0004 (0x0004 - 0x0000)
struct ResultMenuBase_C_IsKeyDownShortcutRing final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnableControlShortcutRing_ReturnValue;  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsKeyDownAll_Result;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsKeyDownAll_Result_1;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultMenuBase_C_IsKeyDownShortcutRing) == 0x000001, "Wrong alignment on ResultMenuBase_C_IsKeyDownShortcutRing");
static_assert(sizeof(ResultMenuBase_C_IsKeyDownShortcutRing) == 0x000004, "Wrong size on ResultMenuBase_C_IsKeyDownShortcutRing");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownShortcutRing, Result) == 0x000000, "Member 'ResultMenuBase_C_IsKeyDownShortcutRing::Result' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownShortcutRing, CallFunc_IsEnableControlShortcutRing_ReturnValue) == 0x000001, "Member 'ResultMenuBase_C_IsKeyDownShortcutRing::CallFunc_IsEnableControlShortcutRing_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownShortcutRing, CallFunc_IsKeyDownAll_Result) == 0x000002, "Member 'ResultMenuBase_C_IsKeyDownShortcutRing::CallFunc_IsKeyDownAll_Result' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownShortcutRing, CallFunc_IsKeyDownAll_Result_1) == 0x000003, "Member 'ResultMenuBase_C_IsKeyDownShortcutRing::CallFunc_IsKeyDownAll_Result_1' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.SetVisibleScreenOver
// 0x0018 (0x0018 - 0x0000)
struct ResultMenuBase_C_SetVisibleScreenOver final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D08[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetSwitcher*                        CallFunc_GetScreenOverWidget_OutWidget;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultMenuBase_C_SetVisibleScreenOver) == 0x000008, "Wrong alignment on ResultMenuBase_C_SetVisibleScreenOver");
static_assert(sizeof(ResultMenuBase_C_SetVisibleScreenOver) == 0x000018, "Wrong size on ResultMenuBase_C_SetVisibleScreenOver");
static_assert(offsetof(ResultMenuBase_C_SetVisibleScreenOver, Param_IsVisible) == 0x000000, "Member 'ResultMenuBase_C_SetVisibleScreenOver::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_SetVisibleScreenOver, Temp_byte_Variable) == 0x000001, "Member 'ResultMenuBase_C_SetVisibleScreenOver::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_SetVisibleScreenOver, Temp_byte_Variable_1) == 0x000002, "Member 'ResultMenuBase_C_SetVisibleScreenOver::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_SetVisibleScreenOver, Temp_bool_Variable) == 0x000003, "Member 'ResultMenuBase_C_SetVisibleScreenOver::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_SetVisibleScreenOver, CallFunc_GetScreenOverWidget_OutWidget) == 0x000008, "Member 'ResultMenuBase_C_SetVisibleScreenOver::CallFunc_GetScreenOverWidget_OutWidget' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_SetVisibleScreenOver, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'ResultMenuBase_C_SetVisibleScreenOver::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_SetVisibleScreenOver, K2Node_Select_Default) == 0x000011, "Member 'ResultMenuBase_C_SetVisibleScreenOver::K2Node_Select_Default' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.SetActiveScreenOver
// 0x0048 (0x0048 - 0x0000)
struct ResultMenuBase_C_SetActiveScreenOver final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D09[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDialog_TacticalAbilityLearning_C*      CallFunc_GetDialogAbility_OutDialog;               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D0A[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetSwitcher*                        CallFunc_GetScreenOverWidget_OutWidget;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D0B[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UResultDialog_Letter_C*                 CallFunc_GetDialogLetter_OutDialog;                // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D0C[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetSwitcher*                        CallFunc_GetScreenOverWidget_OutWidget_1;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                        CallFunc_GetScreenOverWidget_OutWidget_2;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultMenuBase_C_SetActiveScreenOver) == 0x000008, "Wrong alignment on ResultMenuBase_C_SetActiveScreenOver");
static_assert(sizeof(ResultMenuBase_C_SetActiveScreenOver) == 0x000048, "Wrong size on ResultMenuBase_C_SetActiveScreenOver");
static_assert(offsetof(ResultMenuBase_C_SetActiveScreenOver, InIndex) == 0x000000, "Member 'ResultMenuBase_C_SetActiveScreenOver::InIndex' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_SetActiveScreenOver, CallFunc_GetDialogAbility_OutDialog) == 0x000008, "Member 'ResultMenuBase_C_SetActiveScreenOver::CallFunc_GetDialogAbility_OutDialog' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_SetActiveScreenOver, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'ResultMenuBase_C_SetActiveScreenOver::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_SetActiveScreenOver, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'ResultMenuBase_C_SetActiveScreenOver::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_SetActiveScreenOver, CallFunc_GetScreenOverWidget_OutWidget) == 0x000018, "Member 'ResultMenuBase_C_SetActiveScreenOver::CallFunc_GetScreenOverWidget_OutWidget' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_SetActiveScreenOver, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'ResultMenuBase_C_SetActiveScreenOver::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_SetActiveScreenOver, CallFunc_GetDialogLetter_OutDialog) == 0x000028, "Member 'ResultMenuBase_C_SetActiveScreenOver::CallFunc_GetDialogLetter_OutDialog' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_SetActiveScreenOver, CallFunc_IsValid_ReturnValue_2) == 0x000030, "Member 'ResultMenuBase_C_SetActiveScreenOver::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_SetActiveScreenOver, CallFunc_GetScreenOverWidget_OutWidget_1) == 0x000038, "Member 'ResultMenuBase_C_SetActiveScreenOver::CallFunc_GetScreenOverWidget_OutWidget_1' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_SetActiveScreenOver, CallFunc_GetScreenOverWidget_OutWidget_2) == 0x000040, "Member 'ResultMenuBase_C_SetActiveScreenOver::CallFunc_GetScreenOverWidget_OutWidget_2' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.ExecuteShortcutRing
// 0x0005 (0x0005 - 0x0000)
struct ResultMenuBase_C_ExecuteShortcutRing final
{
public:
	bool                                          CallFunc_IsSimpleMode_Result;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSimpleMode_Result_1;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isKeyDownShortcutRing_Result;             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultMenuBase_C_ExecuteShortcutRing) == 0x000001, "Wrong alignment on ResultMenuBase_C_ExecuteShortcutRing");
static_assert(sizeof(ResultMenuBase_C_ExecuteShortcutRing) == 0x000005, "Wrong size on ResultMenuBase_C_ExecuteShortcutRing");
static_assert(offsetof(ResultMenuBase_C_ExecuteShortcutRing, CallFunc_IsSimpleMode_Result) == 0x000000, "Member 'ResultMenuBase_C_ExecuteShortcutRing::CallFunc_IsSimpleMode_Result' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteShortcutRing, CallFunc_IsSimpleMode_Result_1) == 0x000001, "Member 'ResultMenuBase_C_ExecuteShortcutRing::CallFunc_IsSimpleMode_Result_1' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteShortcutRing, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'ResultMenuBase_C_ExecuteShortcutRing::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteShortcutRing, CallFunc_isKeyDownShortcutRing_Result) == 0x000003, "Member 'ResultMenuBase_C_ExecuteShortcutRing::CallFunc_isKeyDownShortcutRing_Result' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteShortcutRing, CallFunc_Not_PreBool_ReturnValue_1) == 0x000004, "Member 'ResultMenuBase_C_ExecuteShortcutRing::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.ExecuteMenu
// 0x0004 (0x0004 - 0x0000)
struct ResultMenuBase_C_ExecuteMenu final
{
public:
	bool                                          CallFunc_IsShowDetailWindow_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isOpenShortcutRing_ReturnValue;           // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isKeyDownMenu_Result;                     // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultMenuBase_C_ExecuteMenu) == 0x000001, "Wrong alignment on ResultMenuBase_C_ExecuteMenu");
static_assert(sizeof(ResultMenuBase_C_ExecuteMenu) == 0x000004, "Wrong size on ResultMenuBase_C_ExecuteMenu");
static_assert(offsetof(ResultMenuBase_C_ExecuteMenu, CallFunc_IsShowDetailWindow_ReturnValue) == 0x000000, "Member 'ResultMenuBase_C_ExecuteMenu::CallFunc_IsShowDetailWindow_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'ResultMenuBase_C_ExecuteMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteMenu, CallFunc_isOpenShortcutRing_ReturnValue) == 0x000002, "Member 'ResultMenuBase_C_ExecuteMenu::CallFunc_isOpenShortcutRing_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_ExecuteMenu, CallFunc_isKeyDownMenu_Result) == 0x000003, "Member 'ResultMenuBase_C_ExecuteMenu::CallFunc_isKeyDownMenu_Result' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.SetVisibleMouseCursor
// 0x0018 (0x0018 - 0x0000)
struct ResultMenuBase_C_SetVisibleMouseCursor final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D0D[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultMenuBase_C_SetVisibleMouseCursor) == 0x000008, "Wrong alignment on ResultMenuBase_C_SetVisibleMouseCursor");
static_assert(sizeof(ResultMenuBase_C_SetVisibleMouseCursor) == 0x000018, "Wrong size on ResultMenuBase_C_SetVisibleMouseCursor");
static_assert(offsetof(ResultMenuBase_C_SetVisibleMouseCursor, Param_IsVisible) == 0x000000, "Member 'ResultMenuBase_C_SetVisibleMouseCursor::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_SetVisibleMouseCursor, CallFunc_GetUIManager_IsValid) == 0x000001, "Member 'ResultMenuBase_C_SetVisibleMouseCursor::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_SetVisibleMouseCursor, CallFunc_GetUIManager_ReturnValue) == 0x000008, "Member 'ResultMenuBase_C_SetVisibleMouseCursor::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_SetVisibleMouseCursor, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'ResultMenuBase_C_SetVisibleMouseCursor::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.OpenDialogLetter
// 0x00C8 (0x00C8 - 0x0000)
struct ResultMenuBase_C_OpenDialogLetter final
{
public:
	struct FSBLetter                              Letter;                                            // 0x0000(0x0028)(Edit, BlueprintVisible)
	struct FSBOverLimit                           OverLimit;                                         // 0x0028(0x0020)(Edit, BlueprintVisible)
	struct FSBLetter                              CallFunc_GetResultLetter_OutLetter;                // 0x0048(0x0028)()
	bool                                          CallFunc_GetResultLetter_ReturnValue;              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D0E[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBOverLimit                           CallFunc_GetResultOverLimit_OutOverLimit;          // 0x0078(0x0020)()
	bool                                          CallFunc_GetResultOverLimit_ReturnValue;           // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D0F[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UResultDialog_Letter_C*                 CallFunc_GetDialogLetter_OutDialog;                // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResultDialog_Letter_C*                 CallFunc_GetDialogLetter_OutDialog_1;              // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D10[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UResultDialog_Letter_C*                 CallFunc_GetDialogLetter_OutDialog_2;              // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResultDialog_Letter_C*                 CallFunc_GetDialogLetter_OutDialog_3;              // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultMenuBase_C_OpenDialogLetter) == 0x000008, "Wrong alignment on ResultMenuBase_C_OpenDialogLetter");
static_assert(sizeof(ResultMenuBase_C_OpenDialogLetter) == 0x0000C8, "Wrong size on ResultMenuBase_C_OpenDialogLetter");
static_assert(offsetof(ResultMenuBase_C_OpenDialogLetter, Letter) == 0x000000, "Member 'ResultMenuBase_C_OpenDialogLetter::Letter' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_OpenDialogLetter, OverLimit) == 0x000028, "Member 'ResultMenuBase_C_OpenDialogLetter::OverLimit' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_OpenDialogLetter, CallFunc_GetResultLetter_OutLetter) == 0x000048, "Member 'ResultMenuBase_C_OpenDialogLetter::CallFunc_GetResultLetter_OutLetter' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_OpenDialogLetter, CallFunc_GetResultLetter_ReturnValue) == 0x000070, "Member 'ResultMenuBase_C_OpenDialogLetter::CallFunc_GetResultLetter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_OpenDialogLetter, CallFunc_GetResultOverLimit_OutOverLimit) == 0x000078, "Member 'ResultMenuBase_C_OpenDialogLetter::CallFunc_GetResultOverLimit_OutOverLimit' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_OpenDialogLetter, CallFunc_GetResultOverLimit_ReturnValue) == 0x000098, "Member 'ResultMenuBase_C_OpenDialogLetter::CallFunc_GetResultOverLimit_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_OpenDialogLetter, CallFunc_GetDialogLetter_OutDialog) == 0x0000A0, "Member 'ResultMenuBase_C_OpenDialogLetter::CallFunc_GetDialogLetter_OutDialog' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_OpenDialogLetter, CallFunc_GetDialogLetter_OutDialog_1) == 0x0000A8, "Member 'ResultMenuBase_C_OpenDialogLetter::CallFunc_GetDialogLetter_OutDialog_1' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_OpenDialogLetter, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'ResultMenuBase_C_OpenDialogLetter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_OpenDialogLetter, CallFunc_GetDialogLetter_OutDialog_2) == 0x0000B8, "Member 'ResultMenuBase_C_OpenDialogLetter::CallFunc_GetDialogLetter_OutDialog_2' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_OpenDialogLetter, CallFunc_GetDialogLetter_OutDialog_3) == 0x0000C0, "Member 'ResultMenuBase_C_OpenDialogLetter::CallFunc_GetDialogLetter_OutDialog_3' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.isKeyDownMenu
// 0x0004 (0x0004 - 0x0000)
struct ResultMenuBase_C_IsKeyDownMenu final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsKeyDownJust_Result;                     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsKeyDownJust_Result_1;                   // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnableControlMenu_ReturnValue;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultMenuBase_C_IsKeyDownMenu) == 0x000001, "Wrong alignment on ResultMenuBase_C_IsKeyDownMenu");
static_assert(sizeof(ResultMenuBase_C_IsKeyDownMenu) == 0x000004, "Wrong size on ResultMenuBase_C_IsKeyDownMenu");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownMenu, Result) == 0x000000, "Member 'ResultMenuBase_C_IsKeyDownMenu::Result' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownMenu, CallFunc_IsKeyDownJust_Result) == 0x000001, "Member 'ResultMenuBase_C_IsKeyDownMenu::CallFunc_IsKeyDownJust_Result' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownMenu, CallFunc_IsKeyDownJust_Result_1) == 0x000002, "Member 'ResultMenuBase_C_IsKeyDownMenu::CallFunc_IsKeyDownJust_Result_1' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownMenu, CallFunc_IsEnableControlMenu_ReturnValue) == 0x000003, "Member 'ResultMenuBase_C_IsKeyDownMenu::CallFunc_IsEnableControlMenu_ReturnValue' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.GetKeyMenu
// 0x0080 (0x0080 - 0x0000)
struct ResultMenuBase_C_GetKeyMenu final
{
public:
	struct FKey                                   ReturnValue;                                       // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReturnParm, HasGetValueTypeHash)
	ESBOperateMode                                Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D11[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   Temp_struct_Variable;                              // 0x0020(0x0018)(ConstParm, HasGetValueTypeHash)
	struct FKey                                   K2Node_MakeStruct_Key;                             // 0x0038(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D12[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D13[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_Select_Default;                             // 0x0068(0x0018)(ConstParm, HasGetValueTypeHash)
};
static_assert(alignof(ResultMenuBase_C_GetKeyMenu) == 0x000008, "Wrong alignment on ResultMenuBase_C_GetKeyMenu");
static_assert(sizeof(ResultMenuBase_C_GetKeyMenu) == 0x000080, "Wrong size on ResultMenuBase_C_GetKeyMenu");
static_assert(offsetof(ResultMenuBase_C_GetKeyMenu, ReturnValue) == 0x000000, "Member 'ResultMenuBase_C_GetKeyMenu::ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_GetKeyMenu, Temp_byte_Variable) == 0x000018, "Member 'ResultMenuBase_C_GetKeyMenu::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_GetKeyMenu, Temp_struct_Variable) == 0x000020, "Member 'ResultMenuBase_C_GetKeyMenu::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_GetKeyMenu, K2Node_MakeStruct_Key) == 0x000038, "Member 'ResultMenuBase_C_GetKeyMenu::K2Node_MakeStruct_Key' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_GetKeyMenu, CallFunc_GetConfigSaveManager_IsValid) == 0x000050, "Member 'ResultMenuBase_C_GetKeyMenu::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_GetKeyMenu, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000058, "Member 'ResultMenuBase_C_GetKeyMenu::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_GetKeyMenu, CallFunc_GetOperateMode_ReturnValue) == 0x000060, "Member 'ResultMenuBase_C_GetKeyMenu::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_GetKeyMenu, K2Node_Select_Default) == 0x000068, "Member 'ResultMenuBase_C_GetKeyMenu::K2Node_Select_Default' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.GetScreenOverWidget
// 0x0008 (0x0008 - 0x0000)
struct ResultMenuBase_C_GetScreenOverWidget final
{
public:
	class UWidgetSwitcher*                        OutWidget;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultMenuBase_C_GetScreenOverWidget) == 0x000008, "Wrong alignment on ResultMenuBase_C_GetScreenOverWidget");
static_assert(sizeof(ResultMenuBase_C_GetScreenOverWidget) == 0x000008, "Wrong size on ResultMenuBase_C_GetScreenOverWidget");
static_assert(offsetof(ResultMenuBase_C_GetScreenOverWidget, OutWidget) == 0x000000, "Member 'ResultMenuBase_C_GetScreenOverWidget::OutWidget' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.GetDialogLetter
// 0x0008 (0x0008 - 0x0000)
struct ResultMenuBase_C_GetDialogLetter final
{
public:
	class UResultDialog_Letter_C*                 OutDialog;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultMenuBase_C_GetDialogLetter) == 0x000008, "Wrong alignment on ResultMenuBase_C_GetDialogLetter");
static_assert(sizeof(ResultMenuBase_C_GetDialogLetter) == 0x000008, "Wrong size on ResultMenuBase_C_GetDialogLetter");
static_assert(offsetof(ResultMenuBase_C_GetDialogLetter, OutDialog) == 0x000000, "Member 'ResultMenuBase_C_GetDialogLetter::OutDialog' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.GetDialogAbility
// 0x0008 (0x0008 - 0x0000)
struct ResultMenuBase_C_GetDialogAbility final
{
public:
	class UDialog_TacticalAbilityLearning_C*      OutDialog;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultMenuBase_C_GetDialogAbility) == 0x000008, "Wrong alignment on ResultMenuBase_C_GetDialogAbility");
static_assert(sizeof(ResultMenuBase_C_GetDialogAbility) == 0x000008, "Wrong size on ResultMenuBase_C_GetDialogAbility");
static_assert(offsetof(ResultMenuBase_C_GetDialogAbility, OutDialog) == 0x000000, "Member 'ResultMenuBase_C_GetDialogAbility::OutDialog' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.IsKeyDownAll
// 0x0080 (0x0080 - 0x0000)
struct ResultMenuBase_C_IsKeyDownAll final
{
public:
	TArray<struct FKey>                           InKeyList;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Result;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TmpCheckGamepadFaceButtonRight;                    // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TmpIsKeyDown;                                      // 0x0012(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D14[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FKey>                           TmpKeyList;                                        // 0x0018(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D15[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D16[0x1];                                     // 0x003B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D17[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_Array_Get_Item;                           // 0x0050(0x0018)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue;               // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D18[0x2];                                     // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInputKeyTimeDown_ReturnValue;          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultMenuBase_C_IsKeyDownAll) == 0x000008, "Wrong alignment on ResultMenuBase_C_IsKeyDownAll");
static_assert(sizeof(ResultMenuBase_C_IsKeyDownAll) == 0x000080, "Wrong size on ResultMenuBase_C_IsKeyDownAll");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, InKeyList) == 0x000000, "Member 'ResultMenuBase_C_IsKeyDownAll::InKeyList' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, Result) == 0x000010, "Member 'ResultMenuBase_C_IsKeyDownAll::Result' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, TmpCheckGamepadFaceButtonRight) == 0x000011, "Member 'ResultMenuBase_C_IsKeyDownAll::TmpCheckGamepadFaceButtonRight' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, TmpIsKeyDown) == 0x000012, "Member 'ResultMenuBase_C_IsKeyDownAll::TmpIsKeyDown' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, TmpKeyList) == 0x000018, "Member 'ResultMenuBase_C_IsKeyDownAll::TmpKeyList' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, Temp_bool_Variable) == 0x000028, "Member 'ResultMenuBase_C_IsKeyDownAll::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'ResultMenuBase_C_IsKeyDownAll::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'ResultMenuBase_C_IsKeyDownAll::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'ResultMenuBase_C_IsKeyDownAll::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, Temp_bool_Variable_1) == 0x000038, "Member 'ResultMenuBase_C_IsKeyDownAll::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, CallFunc_Array_RemoveItem_ReturnValue) == 0x000039, "Member 'ResultMenuBase_C_IsKeyDownAll::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, K2Node_Select_Default) == 0x00003A, "Member 'ResultMenuBase_C_IsKeyDownAll::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, CallFunc_Array_Find_ReturnValue) == 0x00003C, "Member 'ResultMenuBase_C_IsKeyDownAll::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, CallFunc_GetPlayerController_ReturnValue) == 0x000040, "Member 'ResultMenuBase_C_IsKeyDownAll::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000048, "Member 'ResultMenuBase_C_IsKeyDownAll::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, CallFunc_BooleanAND_ReturnValue) == 0x000049, "Member 'ResultMenuBase_C_IsKeyDownAll::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, CallFunc_Array_Get_Item) == 0x000050, "Member 'ResultMenuBase_C_IsKeyDownAll::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'ResultMenuBase_C_IsKeyDownAll::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, CallFunc_IsInputKeyDown_ReturnValue) == 0x00006C, "Member 'ResultMenuBase_C_IsKeyDownAll::CallFunc_IsInputKeyDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, CallFunc_Less_IntInt_ReturnValue) == 0x00006D, "Member 'ResultMenuBase_C_IsKeyDownAll::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, CallFunc_GetPlayerController_ReturnValue_1) == 0x000070, "Member 'ResultMenuBase_C_IsKeyDownAll::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, CallFunc_GetInputKeyTimeDown_ReturnValue) == 0x000078, "Member 'ResultMenuBase_C_IsKeyDownAll::CallFunc_GetInputKeyTimeDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, CallFunc_Less_FloatFloat_ReturnValue) == 0x00007C, "Member 'ResultMenuBase_C_IsKeyDownAll::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownAll, CallFunc_BooleanAND_ReturnValue_1) == 0x00007D, "Member 'ResultMenuBase_C_IsKeyDownAll::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.IsSimpleMode
// 0x0018 (0x0018 - 0x0000)
struct ResultMenuBase_C_IsSimpleMode final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBShortcutRingMode                           Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D19[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBShortcutRingMode                           CallFunc_GetShortcutRingMode_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultMenuBase_C_IsSimpleMode) == 0x000008, "Wrong alignment on ResultMenuBase_C_IsSimpleMode");
static_assert(sizeof(ResultMenuBase_C_IsSimpleMode) == 0x000018, "Wrong size on ResultMenuBase_C_IsSimpleMode");
static_assert(offsetof(ResultMenuBase_C_IsSimpleMode, Result) == 0x000000, "Member 'ResultMenuBase_C_IsSimpleMode::Result' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsSimpleMode, Temp_byte_Variable) == 0x000001, "Member 'ResultMenuBase_C_IsSimpleMode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsSimpleMode, Temp_bool_Variable) == 0x000002, "Member 'ResultMenuBase_C_IsSimpleMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsSimpleMode, Temp_bool_Variable_1) == 0x000003, "Member 'ResultMenuBase_C_IsSimpleMode::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsSimpleMode, CallFunc_GetConfigSaveManager_IsValid) == 0x000004, "Member 'ResultMenuBase_C_IsSimpleMode::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsSimpleMode, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'ResultMenuBase_C_IsSimpleMode::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsSimpleMode, CallFunc_GetShortcutRingMode_ReturnValue) == 0x000010, "Member 'ResultMenuBase_C_IsSimpleMode::CallFunc_GetShortcutRingMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsSimpleMode, K2Node_Select_Default) == 0x000011, "Member 'ResultMenuBase_C_IsSimpleMode::K2Node_Select_Default' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.IsKeyDownJust
// 0x0030 (0x0030 - 0x0000)
struct ResultMenuBase_C_IsKeyDownJust final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TmpIsKeyDown;                                      // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D1A[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_WasInputKeyJustPressed_ReturnValue;       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultMenuBase_C_IsKeyDownJust) == 0x000008, "Wrong alignment on ResultMenuBase_C_IsKeyDownJust");
static_assert(sizeof(ResultMenuBase_C_IsKeyDownJust) == 0x000030, "Wrong size on ResultMenuBase_C_IsKeyDownJust");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownJust, Key) == 0x000000, "Member 'ResultMenuBase_C_IsKeyDownJust::Key' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownJust, Result) == 0x000018, "Member 'ResultMenuBase_C_IsKeyDownJust::Result' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownJust, TmpIsKeyDown) == 0x000019, "Member 'ResultMenuBase_C_IsKeyDownJust::TmpIsKeyDown' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownJust, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'ResultMenuBase_C_IsKeyDownJust::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultMenuBase_C_IsKeyDownJust, CallFunc_WasInputKeyJustPressed_ReturnValue) == 0x000028, "Member 'ResultMenuBase_C_IsKeyDownJust::CallFunc_WasInputKeyJustPressed_ReturnValue' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.GetResultShortcutRing
// 0x0008 (0x0008 - 0x0000)
struct ResultMenuBase_C_GetResultShortcutRing final
{
public:
	class USBShortcutRingWidget*                  ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultMenuBase_C_GetResultShortcutRing) == 0x000008, "Wrong alignment on ResultMenuBase_C_GetResultShortcutRing");
static_assert(sizeof(ResultMenuBase_C_GetResultShortcutRing) == 0x000008, "Wrong size on ResultMenuBase_C_GetResultShortcutRing");
static_assert(offsetof(ResultMenuBase_C_GetResultShortcutRing, ReturnValue) == 0x000000, "Member 'ResultMenuBase_C_GetResultShortcutRing::ReturnValue' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.GetResultKeyGuide
// 0x0008 (0x0008 - 0x0000)
struct ResultMenuBase_C_GetResultKeyGuide final
{
public:
	class USBResultKeyGuide*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultMenuBase_C_GetResultKeyGuide) == 0x000008, "Wrong alignment on ResultMenuBase_C_GetResultKeyGuide");
static_assert(sizeof(ResultMenuBase_C_GetResultKeyGuide) == 0x000008, "Wrong size on ResultMenuBase_C_GetResultKeyGuide");
static_assert(offsetof(ResultMenuBase_C_GetResultKeyGuide, ReturnValue) == 0x000000, "Member 'ResultMenuBase_C_GetResultKeyGuide::ReturnValue' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.GetResultWidget
// 0x0008 (0x0008 - 0x0000)
struct ResultMenuBase_C_GetResultWidget final
{
public:
	class USBResultPanelBaseWidget*               ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultMenuBase_C_GetResultWidget) == 0x000008, "Wrong alignment on ResultMenuBase_C_GetResultWidget");
static_assert(sizeof(ResultMenuBase_C_GetResultWidget) == 0x000008, "Wrong size on ResultMenuBase_C_GetResultWidget");
static_assert(offsetof(ResultMenuBase_C_GetResultWidget, ReturnValue) == 0x000000, "Member 'ResultMenuBase_C_GetResultWidget::ReturnValue' has a wrong offset!");

// Function ResultMenuBase.ResultMenuBase_C.GetFooter
// 0x0008 (0x0008 - 0x0000)
struct ResultMenuBase_C_GetFooter final
{
public:
	class USBResultFooter*                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultMenuBase_C_GetFooter) == 0x000008, "Wrong alignment on ResultMenuBase_C_GetFooter");
static_assert(sizeof(ResultMenuBase_C_GetFooter) == 0x000008, "Wrong size on ResultMenuBase_C_GetFooter");
static_assert(offsetof(ResultMenuBase_C_GetFooter, ReturnValue) == 0x000000, "Member 'ResultMenuBase_C_GetFooter::ReturnValue' has a wrong offset!");

}

