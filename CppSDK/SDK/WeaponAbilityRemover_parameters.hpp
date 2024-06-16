#pragma once

 

// Package: WeaponAbilityRemover

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.ExecuteUbergraph_WeaponAbilityRemover
// 0x0320 (0x0320 - 0x0000)
struct WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_462F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetUseConfirmDialogText_ReturnValue;      // 0x0008(0x0018)()
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_1;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_CreateDialogYesNo_OutDialog;              // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ErrorCode;                      // 0x0058(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x005C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4630[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_CustomEvent_Info;                           // 0x0060(0x0118)(ConstParm)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue_1; // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetRequestParameter_OutWeaponID;          // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRequestParameter_OutTokenID;           // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4631[0x4];                                     // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GetRequestParameter_OutSlots;             // 0x01A8(0x0010)(ReferenceParm)
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue_2; // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x01C0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           K2Node_ComponentBoundEvent_SelectItem;             // 0x01C8(0x0118)()
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4632[0x3];                                     // 0x02E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_SlotNo;                 // 0x02E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result_1;                       // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x02E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4633[0x2];                                     // 0x02EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 ErrorCode, bool bWasSuccessful, struct FOwnItemInfo& Info)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x02EC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x02FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x02FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x02FE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4634[0x1];                                     // 0x02FF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetTokenConfirmDialogText_ReturnValue;    // 0x0300(0x0018)()
	class UBP_Dialog_C*                           CallFunc_CreateDialogYesNo_OutDialog_1;            // 0x0318(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover) == 0x000008, "Wrong alignment on WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover");
static_assert(sizeof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover) == 0x000320, "Wrong size on WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, EntryPoint) == 0x000000, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, CallFunc_GetUseConfirmDialogText_ReturnValue) == 0x000008, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::CallFunc_GetUseConfirmDialogText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, K2Node_CreateDelegate_OutputDelegate_1) == 0x000030, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, CallFunc_GetSBPlayerController_ReturnValue) == 0x000040, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, CallFunc_CreateDialogYesNo_OutDialog) == 0x000048, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::CallFunc_CreateDialogYesNo_OutDialog' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, CallFunc_GetWeaponEnhancementComponent_ReturnValue) == 0x000050, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::CallFunc_GetWeaponEnhancementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, K2Node_CustomEvent_ErrorCode) == 0x000058, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::K2Node_CustomEvent_ErrorCode' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, K2Node_CustomEvent_bWasSuccessful) == 0x00005C, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, K2Node_CustomEvent_Info) == 0x000060, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::K2Node_CustomEvent_Info' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000178, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, CallFunc_GetWeaponEnhancementComponent_ReturnValue_1) == 0x000180, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::CallFunc_GetWeaponEnhancementComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x000188, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, CallFunc_GetRequestParameter_OutWeaponID) == 0x000190, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::CallFunc_GetRequestParameter_OutWeaponID' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, CallFunc_GetRequestParameter_OutTokenID) == 0x0001A0, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::CallFunc_GetRequestParameter_OutTokenID' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, CallFunc_GetRequestParameter_OutSlots) == 0x0001A8, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::CallFunc_GetRequestParameter_OutSlots' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, CallFunc_GetWeaponEnhancementComponent_ReturnValue_2) == 0x0001B8, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::CallFunc_GetWeaponEnhancementComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, K2Node_Event_Animation) == 0x0001C0, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, K2Node_ComponentBoundEvent_SelectItem) == 0x0001C8, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::K2Node_ComponentBoundEvent_SelectItem' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0002E0, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, K2Node_ComponentBoundEvent_SlotNo) == 0x0002E4, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::K2Node_ComponentBoundEvent_SlotNo' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, K2Node_CustomEvent_Result_1) == 0x0002E8, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0002E9, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, K2Node_CreateDelegate_OutputDelegate_2) == 0x0002EC, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, CallFunc_Not_PreBool_ReturnValue) == 0x0002FC, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, K2Node_CustomEvent_Result) == 0x0002FD, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0002FE, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, CallFunc_GetTokenConfirmDialogText_ReturnValue) == 0x000300, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::CallFunc_GetTokenConfirmDialogText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover, CallFunc_CreateDialogYesNo_OutDialog_1) == 0x000318, "Member 'WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover::CallFunc_CreateDialogYesNo_OutDialog_1' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.CustomEvent
// 0x0001 (0x0001 - 0x0000)
struct WeaponAbilityRemover_C_CustomEvent final
{
public:
	EDialogResult                                 Param_Result;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAbilityRemover_C_CustomEvent) == 0x000001, "Wrong alignment on WeaponAbilityRemover_C_CustomEvent");
static_assert(sizeof(WeaponAbilityRemover_C_CustomEvent) == 0x000001, "Wrong size on WeaponAbilityRemover_C_CustomEvent");
static_assert(offsetof(WeaponAbilityRemover_C_CustomEvent, Param_Result) == 0x000000, "Member 'WeaponAbilityRemover_C_CustomEvent::Param_Result' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.CustomEvent_0
// 0x0001 (0x0001 - 0x0000)
struct WeaponAbilityRemover_C_CustomEvent_0 final
{
public:
	EDialogResult                                 Param_Result;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAbilityRemover_C_CustomEvent_0) == 0x000001, "Wrong alignment on WeaponAbilityRemover_C_CustomEvent_0");
static_assert(sizeof(WeaponAbilityRemover_C_CustomEvent_0) == 0x000001, "Wrong size on WeaponAbilityRemover_C_CustomEvent_0");
static_assert(offsetof(WeaponAbilityRemover_C_CustomEvent_0, Param_Result) == 0x000000, "Member 'WeaponAbilityRemover_C_CustomEvent_0::Param_Result' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.BndEvt__WeaponAbilityRemover_WeaponStatusWindow_K2Node_ComponentBoundEvent_6_OnClickedPerkSlot__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WeaponAbilityRemover_C_BndEvt__WeaponAbilityRemover_WeaponStatusWindow_K2Node_ComponentBoundEvent_6_OnClickedPerkSlot__DelegateSignature final
{
public:
	int32                                         SlotNo;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAbilityRemover_C_BndEvt__WeaponAbilityRemover_WeaponStatusWindow_K2Node_ComponentBoundEvent_6_OnClickedPerkSlot__DelegateSignature) == 0x000004, "Wrong alignment on WeaponAbilityRemover_C_BndEvt__WeaponAbilityRemover_WeaponStatusWindow_K2Node_ComponentBoundEvent_6_OnClickedPerkSlot__DelegateSignature");
static_assert(sizeof(WeaponAbilityRemover_C_BndEvt__WeaponAbilityRemover_WeaponStatusWindow_K2Node_ComponentBoundEvent_6_OnClickedPerkSlot__DelegateSignature) == 0x000004, "Wrong size on WeaponAbilityRemover_C_BndEvt__WeaponAbilityRemover_WeaponStatusWindow_K2Node_ComponentBoundEvent_6_OnClickedPerkSlot__DelegateSignature");
static_assert(offsetof(WeaponAbilityRemover_C_BndEvt__WeaponAbilityRemover_WeaponStatusWindow_K2Node_ComponentBoundEvent_6_OnClickedPerkSlot__DelegateSignature, SlotNo) == 0x000000, "Member 'WeaponAbilityRemover_C_BndEvt__WeaponAbilityRemover_WeaponStatusWindow_K2Node_ComponentBoundEvent_6_OnClickedPerkSlot__DelegateSignature::SlotNo' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.BndEvt__WeaponAbilityRemover_Selector_1_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct WeaponAbilityRemover_C_BndEvt__WeaponAbilityRemover_Selector_1_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature final
{
public:
	struct FOwnItemInfo                           SelectItem;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponAbilityRemover_C_BndEvt__WeaponAbilityRemover_Selector_1_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature) == 0x000008, "Wrong alignment on WeaponAbilityRemover_C_BndEvt__WeaponAbilityRemover_Selector_1_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature");
static_assert(sizeof(WeaponAbilityRemover_C_BndEvt__WeaponAbilityRemover_Selector_1_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature) == 0x000118, "Wrong size on WeaponAbilityRemover_C_BndEvt__WeaponAbilityRemover_Selector_1_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature");
static_assert(offsetof(WeaponAbilityRemover_C_BndEvt__WeaponAbilityRemover_Selector_1_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature, SelectItem) == 0x000000, "Member 'WeaponAbilityRemover_C_BndEvt__WeaponAbilityRemover_Selector_1_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature::SelectItem' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WeaponAbilityRemover_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAbilityRemover_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WeaponAbilityRemover_C_OnAnimationFinished");
static_assert(sizeof(WeaponAbilityRemover_C_OnAnimationFinished) == 0x000008, "Wrong size on WeaponAbilityRemover_C_OnAnimationFinished");
static_assert(offsetof(WeaponAbilityRemover_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WeaponAbilityRemover_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.EventOnFinishedAbilityRemoved
// 0x0120 (0x0120 - 0x0000)
struct WeaponAbilityRemover_C_EventOnFinishedAbilityRemoved final
{
public:
	int32                                         ErrorCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWasSuccessful;                                    // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4635[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           Info;                                              // 0x0008(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WeaponAbilityRemover_C_EventOnFinishedAbilityRemoved) == 0x000008, "Wrong alignment on WeaponAbilityRemover_C_EventOnFinishedAbilityRemoved");
static_assert(sizeof(WeaponAbilityRemover_C_EventOnFinishedAbilityRemoved) == 0x000120, "Wrong size on WeaponAbilityRemover_C_EventOnFinishedAbilityRemoved");
static_assert(offsetof(WeaponAbilityRemover_C_EventOnFinishedAbilityRemoved, ErrorCode) == 0x000000, "Member 'WeaponAbilityRemover_C_EventOnFinishedAbilityRemoved::ErrorCode' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_EventOnFinishedAbilityRemoved, bWasSuccessful) == 0x000004, "Member 'WeaponAbilityRemover_C_EventOnFinishedAbilityRemoved::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_EventOnFinishedAbilityRemoved, Info) == 0x000008, "Member 'WeaponAbilityRemover_C_EventOnFinishedAbilityRemoved::Info' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.OnSelectWeapon
// 0x0118 (0x0118 - 0x0000)
struct WeaponAbilityRemover_C_OnSelectWeapon final
{
public:
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x0000(0x0118)(ConstParm)
};
static_assert(alignof(WeaponAbilityRemover_C_OnSelectWeapon) == 0x000008, "Wrong alignment on WeaponAbilityRemover_C_OnSelectWeapon");
static_assert(sizeof(WeaponAbilityRemover_C_OnSelectWeapon) == 0x000118, "Wrong size on WeaponAbilityRemover_C_OnSelectWeapon");
static_assert(offsetof(WeaponAbilityRemover_C_OnSelectWeapon, CallFunc_GetSelectedWeapon_ReturnValue) == 0x000000, "Member 'WeaponAbilityRemover_C_OnSelectWeapon::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.GenerateTokens
// 0x0258 (0x0258 - 0x0000)
struct WeaponAbilityRemover_C_GenerateTokens final
{
public:
	int32                                         CallFunc_GetCreateNum_ReturnValue;                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4636[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x0008(0x0118)(ConstParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4637[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue_1;          // 0x0128(0x0118)(ConstParm)
	int32                                         CallFunc_GetItemLevel_ReturnValue_1;               // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4638[0x4];                                     // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_TokenBoxItem_C*       CallFunc_GenerateToken_TokenBoxItem;               // 0x0248(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_TokenBoxItem_C*       CallFunc_GenerateToken_TokenBoxItem_1;             // 0x0250(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAbilityRemover_C_GenerateTokens) == 0x000008, "Wrong alignment on WeaponAbilityRemover_C_GenerateTokens");
static_assert(sizeof(WeaponAbilityRemover_C_GenerateTokens) == 0x000258, "Wrong size on WeaponAbilityRemover_C_GenerateTokens");
static_assert(offsetof(WeaponAbilityRemover_C_GenerateTokens, CallFunc_GetCreateNum_ReturnValue) == 0x000000, "Member 'WeaponAbilityRemover_C_GenerateTokens::CallFunc_GetCreateNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GenerateTokens, CallFunc_GetSelectedWeapon_ReturnValue) == 0x000008, "Member 'WeaponAbilityRemover_C_GenerateTokens::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GenerateTokens, CallFunc_Less_IntInt_ReturnValue) == 0x000120, "Member 'WeaponAbilityRemover_C_GenerateTokens::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GenerateTokens, CallFunc_GetItemLevel_ReturnValue) == 0x000124, "Member 'WeaponAbilityRemover_C_GenerateTokens::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GenerateTokens, CallFunc_GetSelectedWeapon_ReturnValue_1) == 0x000128, "Member 'WeaponAbilityRemover_C_GenerateTokens::CallFunc_GetSelectedWeapon_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GenerateTokens, CallFunc_GetItemLevel_ReturnValue_1) == 0x000240, "Member 'WeaponAbilityRemover_C_GenerateTokens::CallFunc_GetItemLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GenerateTokens, CallFunc_GenerateToken_TokenBoxItem) == 0x000248, "Member 'WeaponAbilityRemover_C_GenerateTokens::CallFunc_GenerateToken_TokenBoxItem' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GenerateTokens, CallFunc_GenerateToken_TokenBoxItem_1) == 0x000250, "Member 'WeaponAbilityRemover_C_GenerateTokens::CallFunc_GenerateToken_TokenBoxItem_1' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.SelectToken
// 0x0018 (0x0018 - 0x0000)
struct WeaponAbilityRemover_C_SelectToken final
{
public:
	class UWeaponSynthePart_TokenBoxItem_C*       SelectItem;                                        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_TokenBoxItem_C*       CallFunc_GetSelectedItem_TokenBoxItem;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSelected_IsSelected;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4639[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTokenID_Id;                            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAbilityRemover_C_SelectToken) == 0x000008, "Wrong alignment on WeaponAbilityRemover_C_SelectToken");
static_assert(sizeof(WeaponAbilityRemover_C_SelectToken) == 0x000018, "Wrong size on WeaponAbilityRemover_C_SelectToken");
static_assert(offsetof(WeaponAbilityRemover_C_SelectToken, SelectItem) == 0x000000, "Member 'WeaponAbilityRemover_C_SelectToken::SelectItem' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SelectToken, CallFunc_GetSelectedItem_TokenBoxItem) == 0x000008, "Member 'WeaponAbilityRemover_C_SelectToken::CallFunc_GetSelectedItem_TokenBoxItem' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SelectToken, CallFunc_IsSelected_IsSelected) == 0x000010, "Member 'WeaponAbilityRemover_C_SelectToken::CallFunc_IsSelected_IsSelected' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SelectToken, CallFunc_GetTokenID_Id) == 0x000014, "Member 'WeaponAbilityRemover_C_SelectToken::CallFunc_GetTokenID_Id' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.PlayAnimIn
// 0x0010 (0x0010 - 0x0000)
struct WeaponAbilityRemover_C_PlayAnimIn final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_463A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAbilityRemover_C_PlayAnimIn) == 0x000008, "Wrong alignment on WeaponAbilityRemover_C_PlayAnimIn");
static_assert(sizeof(WeaponAbilityRemover_C_PlayAnimIn) == 0x000010, "Wrong size on WeaponAbilityRemover_C_PlayAnimIn");
static_assert(offsetof(WeaponAbilityRemover_C_PlayAnimIn, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'WeaponAbilityRemover_C_PlayAnimIn::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_PlayAnimIn, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WeaponAbilityRemover_C_PlayAnimIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.PlayAnimOut
// 0x0010 (0x0010 - 0x0000)
struct WeaponAbilityRemover_C_PlayAnimOut final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_463B[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAbilityRemover_C_PlayAnimOut) == 0x000008, "Wrong alignment on WeaponAbilityRemover_C_PlayAnimOut");
static_assert(sizeof(WeaponAbilityRemover_C_PlayAnimOut) == 0x000010, "Wrong size on WeaponAbilityRemover_C_PlayAnimOut");
static_assert(offsetof(WeaponAbilityRemover_C_PlayAnimOut, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'WeaponAbilityRemover_C_PlayAnimOut::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_PlayAnimOut, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000004, "Member 'WeaponAbilityRemover_C_PlayAnimOut::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_PlayAnimOut, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'WeaponAbilityRemover_C_PlayAnimOut::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_PlayAnimOut, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WeaponAbilityRemover_C_PlayAnimOut::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.PlayAnimDetailIn
// 0x0008 (0x0008 - 0x0000)
struct WeaponAbilityRemover_C_PlayAnimDetailIn final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAbilityRemover_C_PlayAnimDetailIn) == 0x000008, "Wrong alignment on WeaponAbilityRemover_C_PlayAnimDetailIn");
static_assert(sizeof(WeaponAbilityRemover_C_PlayAnimDetailIn) == 0x000008, "Wrong size on WeaponAbilityRemover_C_PlayAnimDetailIn");
static_assert(offsetof(WeaponAbilityRemover_C_PlayAnimDetailIn, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'WeaponAbilityRemover_C_PlayAnimDetailIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.UpdateDecide
// 0x0028 (0x0028 - 0x0000)
struct WeaponAbilityRemover_C_UpdateDecide final
{
public:
	bool                                          CallFunc_IsSelected_IsSelected;                    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_463C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_PerkSlotBox_C*        CallFunc_GetPerkSlotBox_PerkSlotBox;               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPerkSlotSelect_Result;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_463D[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_TokenBoxItem_C*       CallFunc_GetSelectedItem_TokenBoxItem;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidCost_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSelected_IsSelected_1;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponAbilityRemover_C_UpdateDecide) == 0x000008, "Wrong alignment on WeaponAbilityRemover_C_UpdateDecide");
static_assert(sizeof(WeaponAbilityRemover_C_UpdateDecide) == 0x000028, "Wrong size on WeaponAbilityRemover_C_UpdateDecide");
static_assert(offsetof(WeaponAbilityRemover_C_UpdateDecide, CallFunc_IsSelected_IsSelected) == 0x000000, "Member 'WeaponAbilityRemover_C_UpdateDecide::CallFunc_IsSelected_IsSelected' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_UpdateDecide, CallFunc_GetPerkSlotBox_PerkSlotBox) == 0x000008, "Member 'WeaponAbilityRemover_C_UpdateDecide::CallFunc_GetPerkSlotBox_PerkSlotBox' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_UpdateDecide, CallFunc_IsPerkSlotSelect_Result) == 0x000010, "Member 'WeaponAbilityRemover_C_UpdateDecide::CallFunc_IsPerkSlotSelect_Result' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_UpdateDecide, CallFunc_GetSelectedItem_TokenBoxItem) == 0x000018, "Member 'WeaponAbilityRemover_C_UpdateDecide::CallFunc_GetSelectedItem_TokenBoxItem' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_UpdateDecide, CallFunc_IsValidCost_ReturnValue) == 0x000020, "Member 'WeaponAbilityRemover_C_UpdateDecide::CallFunc_IsValidCost_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_UpdateDecide, CallFunc_IsSelected_IsSelected_1) == 0x000021, "Member 'WeaponAbilityRemover_C_UpdateDecide::CallFunc_IsSelected_IsSelected_1' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_UpdateDecide, CallFunc_BooleanAND_ReturnValue) == 0x000022, "Member 'WeaponAbilityRemover_C_UpdateDecide::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.UpdateEnableRecycleCheckBox
// 0x0120 (0x0120 - 0x0000)
struct WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox final
{
public:
	int32                                         Amount;                                            // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountMax;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_463E[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_463F[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterWeaponPerkData             CallFunc_GetSelectedPerk_ReturnValue;              // 0x0024(0x001C)(ConstParm, NoDestructor)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4640[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0048(0x00D0)()
	int32                                         CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue; // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox) == 0x000008, "Wrong alignment on WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox");
static_assert(sizeof(WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox) == 0x000120, "Wrong size on WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox");
static_assert(offsetof(WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox, Amount) == 0x000000, "Member 'WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox::Amount' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox, AmountMax) == 0x000004, "Member 'WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox::AmountMax' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox, CallFunc_GetCharacterStorage_ReturnValue) == 0x000008, "Member 'WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox, CallFunc_Less_IntInt_ReturnValue) == 0x000010, "Member 'WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox, CallFunc_GetMasterDataManager_IsValid) == 0x000011, "Member 'WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox, CallFunc_GetMasterDataManager_ReturnValue) == 0x000018, "Member 'WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox, CallFunc_Not_PreBool_ReturnValue) == 0x000020, "Member 'WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox, CallFunc_GetSelectedPerk_ReturnValue) == 0x000024, "Member 'WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox::CallFunc_GetSelectedPerk_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox, CallFunc_GetItemMasterData_IsExists) == 0x000040, "Member 'WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox, CallFunc_GetItemMasterData_ReturnValue) == 0x000048, "Member 'WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox, CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue) == 0x000118, "Member 'WeaponAbilityRemover_C_UpdateEnableRecycleCheckBox::CallFunc_BP_GetItemAmount_ByItemIndex_ReturnValue' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.SetEnableRecycleCheckBox
// 0x0028 (0x0028 - 0x0000)
struct WeaponAbilityRemover_C_SetEnableRecycleCheckBox final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4641[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetFullStorageDialogText_ReturnValue;     // 0x0008(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponAbilityRemover_C_SetEnableRecycleCheckBox) == 0x000008, "Wrong alignment on WeaponAbilityRemover_C_SetEnableRecycleCheckBox");
static_assert(sizeof(WeaponAbilityRemover_C_SetEnableRecycleCheckBox) == 0x000028, "Wrong size on WeaponAbilityRemover_C_SetEnableRecycleCheckBox");
static_assert(offsetof(WeaponAbilityRemover_C_SetEnableRecycleCheckBox, bInIsEnabled) == 0x000000, "Member 'WeaponAbilityRemover_C_SetEnableRecycleCheckBox::bInIsEnabled' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetEnableRecycleCheckBox, CallFunc_GetFullStorageDialogText_ReturnValue) == 0x000008, "Member 'WeaponAbilityRemover_C_SetEnableRecycleCheckBox::CallFunc_GetFullStorageDialogText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetEnableRecycleCheckBox, CallFunc_Not_PreBool_ReturnValue) == 0x000020, "Member 'WeaponAbilityRemover_C_SetEnableRecycleCheckBox::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.OnInit
// 0x0030 (0x0030 - 0x0000)
struct WeaponAbilityRemover_C_OnInit final
{
public:
	struct FFilterGroup                           K2Node_MakeStruct_FilterGroup;                     // 0x0000(0x0010)()
	struct FFilterGroup                           CallFunc_AddFilter_ReturnValue;                    // 0x0010(0x0010)()
	TArray<struct FFilterGroup>                   K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ReferenceParm)
};
static_assert(alignof(WeaponAbilityRemover_C_OnInit) == 0x000008, "Wrong alignment on WeaponAbilityRemover_C_OnInit");
static_assert(sizeof(WeaponAbilityRemover_C_OnInit) == 0x000030, "Wrong size on WeaponAbilityRemover_C_OnInit");
static_assert(offsetof(WeaponAbilityRemover_C_OnInit, K2Node_MakeStruct_FilterGroup) == 0x000000, "Member 'WeaponAbilityRemover_C_OnInit::K2Node_MakeStruct_FilterGroup' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OnInit, CallFunc_AddFilter_ReturnValue) == 0x000010, "Member 'WeaponAbilityRemover_C_OnInit::CallFunc_AddFilter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OnInit, K2Node_MakeArray_Array) == 0x000020, "Member 'WeaponAbilityRemover_C_OnInit::K2Node_MakeArray_Array' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.OnComplete
// 0x01D0 (0x01D0 - 0x0000)
struct WeaponAbilityRemover_C_OnComplete final
{
public:
	int32                                         ErrorCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4642[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0010(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4643[0x5];                                     // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x0040(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0050(0x0018)()
	bool                                          CallFunc_isUpdateEquipWeapon_ReturnValue;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4644[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue;             // 0x0070(0x0028)(ConstParm)
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x0098(0x0118)(ConstParm)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4645[0x6];                                     // 0x01B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetFullStorageDialogText_ReturnValue;     // 0x01B8(0x0018)()
};
static_assert(alignof(WeaponAbilityRemover_C_OnComplete) == 0x000008, "Wrong alignment on WeaponAbilityRemover_C_OnComplete");
static_assert(sizeof(WeaponAbilityRemover_C_OnComplete) == 0x0001D0, "Wrong size on WeaponAbilityRemover_C_OnComplete");
static_assert(offsetof(WeaponAbilityRemover_C_OnComplete, ErrorCode) == 0x000000, "Member 'WeaponAbilityRemover_C_OnComplete::ErrorCode' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OnComplete, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'WeaponAbilityRemover_C_OnComplete::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OnComplete, CallFunc_GetSBRetMessage_ReturnValue) == 0x000010, "Member 'WeaponAbilityRemover_C_OnComplete::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OnComplete, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'WeaponAbilityRemover_C_OnComplete::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OnComplete, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'WeaponAbilityRemover_C_OnComplete::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OnComplete, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000039, "Member 'WeaponAbilityRemover_C_OnComplete::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OnComplete, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00003A, "Member 'WeaponAbilityRemover_C_OnComplete::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OnComplete, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x000040, "Member 'WeaponAbilityRemover_C_OnComplete::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OnComplete, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000050, "Member 'WeaponAbilityRemover_C_OnComplete::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OnComplete, CallFunc_isUpdateEquipWeapon_ReturnValue) == 0x000068, "Member 'WeaponAbilityRemover_C_OnComplete::CallFunc_isUpdateEquipWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OnComplete, CallFunc_Not_PreBool_ReturnValue) == 0x000069, "Member 'WeaponAbilityRemover_C_OnComplete::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OnComplete, CallFunc_GetEquipItemInfo_ReturnValue) == 0x000070, "Member 'WeaponAbilityRemover_C_OnComplete::CallFunc_GetEquipItemInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OnComplete, CallFunc_GetSelectedWeapon_ReturnValue) == 0x000098, "Member 'WeaponAbilityRemover_C_OnComplete::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OnComplete, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0001B0, "Member 'WeaponAbilityRemover_C_OnComplete::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OnComplete, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0001B1, "Member 'WeaponAbilityRemover_C_OnComplete::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OnComplete, CallFunc_GetFullStorageDialogText_ReturnValue) == 0x0001B8, "Member 'WeaponAbilityRemover_C_OnComplete::CallFunc_GetFullStorageDialogText_ReturnValue' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.SetEnableDecide
// 0x0001 (0x0001 - 0x0000)
struct WeaponAbilityRemover_C_SetEnableDecide final
{
public:
	bool                                          InEnabled;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponAbilityRemover_C_SetEnableDecide) == 0x000001, "Wrong alignment on WeaponAbilityRemover_C_SetEnableDecide");
static_assert(sizeof(WeaponAbilityRemover_C_SetEnableDecide) == 0x000001, "Wrong size on WeaponAbilityRemover_C_SetEnableDecide");
static_assert(offsetof(WeaponAbilityRemover_C_SetEnableDecide, InEnabled) == 0x000000, "Member 'WeaponAbilityRemover_C_SetEnableDecide::InEnabled' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.SetVisibleWeaponStatusWindow
// 0x0005 (0x0005 - 0x0000)
struct WeaponAbilityRemover_C_SetVisibleWeaponStatusWindow final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAbilityRemover_C_SetVisibleWeaponStatusWindow) == 0x000001, "Wrong alignment on WeaponAbilityRemover_C_SetVisibleWeaponStatusWindow");
static_assert(sizeof(WeaponAbilityRemover_C_SetVisibleWeaponStatusWindow) == 0x000005, "Wrong size on WeaponAbilityRemover_C_SetVisibleWeaponStatusWindow");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleWeaponStatusWindow, InVisible) == 0x000000, "Member 'WeaponAbilityRemover_C_SetVisibleWeaponStatusWindow::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleWeaponStatusWindow, Temp_bool_Variable) == 0x000001, "Member 'WeaponAbilityRemover_C_SetVisibleWeaponStatusWindow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleWeaponStatusWindow, Temp_byte_Variable) == 0x000002, "Member 'WeaponAbilityRemover_C_SetVisibleWeaponStatusWindow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleWeaponStatusWindow, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponAbilityRemover_C_SetVisibleWeaponStatusWindow::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleWeaponStatusWindow, K2Node_Select_Default) == 0x000004, "Member 'WeaponAbilityRemover_C_SetVisibleWeaponStatusWindow::K2Node_Select_Default' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.SetVisibleTokenBox
// 0x0005 (0x0005 - 0x0000)
struct WeaponAbilityRemover_C_SetVisibleTokenBox final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAbilityRemover_C_SetVisibleTokenBox) == 0x000001, "Wrong alignment on WeaponAbilityRemover_C_SetVisibleTokenBox");
static_assert(sizeof(WeaponAbilityRemover_C_SetVisibleTokenBox) == 0x000005, "Wrong size on WeaponAbilityRemover_C_SetVisibleTokenBox");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleTokenBox, InVisible) == 0x000000, "Member 'WeaponAbilityRemover_C_SetVisibleTokenBox::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleTokenBox, Temp_bool_Variable) == 0x000001, "Member 'WeaponAbilityRemover_C_SetVisibleTokenBox::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleTokenBox, Temp_byte_Variable) == 0x000002, "Member 'WeaponAbilityRemover_C_SetVisibleTokenBox::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleTokenBox, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponAbilityRemover_C_SetVisibleTokenBox::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleTokenBox, K2Node_Select_Default) == 0x000004, "Member 'WeaponAbilityRemover_C_SetVisibleTokenBox::K2Node_Select_Default' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.SetVisibleInfomation
// 0x0005 (0x0005 - 0x0000)
struct WeaponAbilityRemover_C_SetVisibleInfomation final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAbilityRemover_C_SetVisibleInfomation) == 0x000001, "Wrong alignment on WeaponAbilityRemover_C_SetVisibleInfomation");
static_assert(sizeof(WeaponAbilityRemover_C_SetVisibleInfomation) == 0x000005, "Wrong size on WeaponAbilityRemover_C_SetVisibleInfomation");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleInfomation, InVisible) == 0x000000, "Member 'WeaponAbilityRemover_C_SetVisibleInfomation::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleInfomation, Temp_bool_Variable) == 0x000001, "Member 'WeaponAbilityRemover_C_SetVisibleInfomation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleInfomation, Temp_byte_Variable) == 0x000002, "Member 'WeaponAbilityRemover_C_SetVisibleInfomation::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleInfomation, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponAbilityRemover_C_SetVisibleInfomation::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleInfomation, K2Node_Select_Default) == 0x000004, "Member 'WeaponAbilityRemover_C_SetVisibleInfomation::K2Node_Select_Default' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.SetVisibleDecide
// 0x0005 (0x0005 - 0x0000)
struct WeaponAbilityRemover_C_SetVisibleDecide final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAbilityRemover_C_SetVisibleDecide) == 0x000001, "Wrong alignment on WeaponAbilityRemover_C_SetVisibleDecide");
static_assert(sizeof(WeaponAbilityRemover_C_SetVisibleDecide) == 0x000005, "Wrong size on WeaponAbilityRemover_C_SetVisibleDecide");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleDecide, InVisible) == 0x000000, "Member 'WeaponAbilityRemover_C_SetVisibleDecide::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleDecide, Temp_bool_Variable) == 0x000001, "Member 'WeaponAbilityRemover_C_SetVisibleDecide::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleDecide, Temp_byte_Variable) == 0x000002, "Member 'WeaponAbilityRemover_C_SetVisibleDecide::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleDecide, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponAbilityRemover_C_SetVisibleDecide::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleDecide, K2Node_Select_Default) == 0x000004, "Member 'WeaponAbilityRemover_C_SetVisibleDecide::K2Node_Select_Default' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.SetVisibleBlocker
// 0x0005 (0x0005 - 0x0000)
struct WeaponAbilityRemover_C_SetVisibleBlocker final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAbilityRemover_C_SetVisibleBlocker) == 0x000001, "Wrong alignment on WeaponAbilityRemover_C_SetVisibleBlocker");
static_assert(sizeof(WeaponAbilityRemover_C_SetVisibleBlocker) == 0x000005, "Wrong size on WeaponAbilityRemover_C_SetVisibleBlocker");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleBlocker, InVisible) == 0x000000, "Member 'WeaponAbilityRemover_C_SetVisibleBlocker::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleBlocker, Temp_bool_Variable) == 0x000001, "Member 'WeaponAbilityRemover_C_SetVisibleBlocker::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleBlocker, Temp_byte_Variable) == 0x000002, "Member 'WeaponAbilityRemover_C_SetVisibleBlocker::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleBlocker, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponAbilityRemover_C_SetVisibleBlocker::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleBlocker, K2Node_Select_Default) == 0x000004, "Member 'WeaponAbilityRemover_C_SetVisibleBlocker::K2Node_Select_Default' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.SetVisibleLoading
// 0x0005 (0x0005 - 0x0000)
struct WeaponAbilityRemover_C_SetVisibleLoading final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAbilityRemover_C_SetVisibleLoading) == 0x000001, "Wrong alignment on WeaponAbilityRemover_C_SetVisibleLoading");
static_assert(sizeof(WeaponAbilityRemover_C_SetVisibleLoading) == 0x000005, "Wrong size on WeaponAbilityRemover_C_SetVisibleLoading");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleLoading, InVisible) == 0x000000, "Member 'WeaponAbilityRemover_C_SetVisibleLoading::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleLoading, Temp_bool_Variable) == 0x000001, "Member 'WeaponAbilityRemover_C_SetVisibleLoading::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleLoading, Temp_byte_Variable) == 0x000002, "Member 'WeaponAbilityRemover_C_SetVisibleLoading::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleLoading, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponAbilityRemover_C_SetVisibleLoading::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleLoading, K2Node_Select_Default) == 0x000004, "Member 'WeaponAbilityRemover_C_SetVisibleLoading::K2Node_Select_Default' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.SetVisibleSuccess
// 0x0005 (0x0005 - 0x0000)
struct WeaponAbilityRemover_C_SetVisibleSuccess final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAbilityRemover_C_SetVisibleSuccess) == 0x000001, "Wrong alignment on WeaponAbilityRemover_C_SetVisibleSuccess");
static_assert(sizeof(WeaponAbilityRemover_C_SetVisibleSuccess) == 0x000005, "Wrong size on WeaponAbilityRemover_C_SetVisibleSuccess");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleSuccess, InVisible) == 0x000000, "Member 'WeaponAbilityRemover_C_SetVisibleSuccess::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleSuccess, Temp_bool_Variable) == 0x000001, "Member 'WeaponAbilityRemover_C_SetVisibleSuccess::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleSuccess, Temp_byte_Variable) == 0x000002, "Member 'WeaponAbilityRemover_C_SetVisibleSuccess::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleSuccess, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponAbilityRemover_C_SetVisibleSuccess::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleSuccess, K2Node_Select_Default) == 0x000004, "Member 'WeaponAbilityRemover_C_SetVisibleSuccess::K2Node_Select_Default' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.SetVisibleResult
// 0x0005 (0x0005 - 0x0000)
struct WeaponAbilityRemover_C_SetVisibleResult final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAbilityRemover_C_SetVisibleResult) == 0x000001, "Wrong alignment on WeaponAbilityRemover_C_SetVisibleResult");
static_assert(sizeof(WeaponAbilityRemover_C_SetVisibleResult) == 0x000005, "Wrong size on WeaponAbilityRemover_C_SetVisibleResult");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleResult, InVisible) == 0x000000, "Member 'WeaponAbilityRemover_C_SetVisibleResult::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleResult, Temp_bool_Variable) == 0x000001, "Member 'WeaponAbilityRemover_C_SetVisibleResult::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleResult, Temp_byte_Variable) == 0x000002, "Member 'WeaponAbilityRemover_C_SetVisibleResult::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleResult, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponAbilityRemover_C_SetVisibleResult::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_SetVisibleResult, K2Node_Select_Default) == 0x000004, "Member 'WeaponAbilityRemover_C_SetVisibleResult::K2Node_Select_Default' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.OpenSuccess
// 0x0070 (0x0070 - 0x0000)
struct WeaponAbilityRemover_C_OpenSuccess final
{
public:
	ESBFusionTicketType                           Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4646[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_2;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_3;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_4;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_5;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_6;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_7;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_8;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_TokenBoxItem_C*       CallFunc_GetSelectedItem_TokenBoxItem;             // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBFusionTicketType                           CallFunc_GetType_Ticket_Type;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4647[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          K2Node_Select_Default;                             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAbilityRemover_C_OpenSuccess) == 0x000008, "Wrong alignment on WeaponAbilityRemover_C_OpenSuccess");
static_assert(sizeof(WeaponAbilityRemover_C_OpenSuccess) == 0x000070, "Wrong size on WeaponAbilityRemover_C_OpenSuccess");
static_assert(offsetof(WeaponAbilityRemover_C_OpenSuccess, Temp_byte_Variable) == 0x000000, "Member 'WeaponAbilityRemover_C_OpenSuccess::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OpenSuccess, Temp_object_Variable) == 0x000008, "Member 'WeaponAbilityRemover_C_OpenSuccess::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OpenSuccess, Temp_object_Variable_1) == 0x000010, "Member 'WeaponAbilityRemover_C_OpenSuccess::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OpenSuccess, Temp_object_Variable_2) == 0x000018, "Member 'WeaponAbilityRemover_C_OpenSuccess::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OpenSuccess, Temp_object_Variable_3) == 0x000020, "Member 'WeaponAbilityRemover_C_OpenSuccess::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OpenSuccess, Temp_object_Variable_4) == 0x000028, "Member 'WeaponAbilityRemover_C_OpenSuccess::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OpenSuccess, Temp_object_Variable_5) == 0x000030, "Member 'WeaponAbilityRemover_C_OpenSuccess::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OpenSuccess, Temp_object_Variable_6) == 0x000038, "Member 'WeaponAbilityRemover_C_OpenSuccess::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OpenSuccess, Temp_object_Variable_7) == 0x000040, "Member 'WeaponAbilityRemover_C_OpenSuccess::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OpenSuccess, Temp_object_Variable_8) == 0x000048, "Member 'WeaponAbilityRemover_C_OpenSuccess::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OpenSuccess, CallFunc_GetSelectedItem_TokenBoxItem) == 0x000050, "Member 'WeaponAbilityRemover_C_OpenSuccess::CallFunc_GetSelectedItem_TokenBoxItem' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OpenSuccess, CallFunc_GetType_Ticket_Type) == 0x000058, "Member 'WeaponAbilityRemover_C_OpenSuccess::CallFunc_GetType_Ticket_Type' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OpenSuccess, K2Node_Select_Default) == 0x000060, "Member 'WeaponAbilityRemover_C_OpenSuccess::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OpenSuccess, CallFunc_PlaySE_ReturnValue) == 0x000068, "Member 'WeaponAbilityRemover_C_OpenSuccess::CallFunc_PlaySE_ReturnValue' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.OpenResult
// 0x0250 (0x0250 - 0x0000)
struct WeaponAbilityRemover_C_OpenResult final
{
public:
	int32                                         CallFunc_GetSelectedPerkSlotNo_ReturnValue;        // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4648[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_TokenBoxItem_C*       CallFunc_GetSelectedItem_TokenBoxItem;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_GetAfterWeapon_ReturnValue;               // 0x0010(0x0118)(ConstParm)
	ESBFusionTicketType                           CallFunc_GetType_Ticket_Type;                      // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4649[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x0130(0x0118)(ConstParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponAbilityRemover_C_OpenResult) == 0x000008, "Wrong alignment on WeaponAbilityRemover_C_OpenResult");
static_assert(sizeof(WeaponAbilityRemover_C_OpenResult) == 0x000250, "Wrong size on WeaponAbilityRemover_C_OpenResult");
static_assert(offsetof(WeaponAbilityRemover_C_OpenResult, CallFunc_GetSelectedPerkSlotNo_ReturnValue) == 0x000000, "Member 'WeaponAbilityRemover_C_OpenResult::CallFunc_GetSelectedPerkSlotNo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OpenResult, CallFunc_GetSelectedItem_TokenBoxItem) == 0x000008, "Member 'WeaponAbilityRemover_C_OpenResult::CallFunc_GetSelectedItem_TokenBoxItem' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OpenResult, CallFunc_GetAfterWeapon_ReturnValue) == 0x000010, "Member 'WeaponAbilityRemover_C_OpenResult::CallFunc_GetAfterWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OpenResult, CallFunc_GetType_Ticket_Type) == 0x000128, "Member 'WeaponAbilityRemover_C_OpenResult::CallFunc_GetType_Ticket_Type' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OpenResult, CallFunc_GetSelectedWeapon_ReturnValue) == 0x000130, "Member 'WeaponAbilityRemover_C_OpenResult::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_OpenResult, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000248, "Member 'WeaponAbilityRemover_C_OpenResult::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.GetFullStorageDialogText
// 0x0040 (0x0040 - 0x0000)
struct WeaponAbilityRemover_C_GetFullStorageDialogText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
};
static_assert(alignof(WeaponAbilityRemover_C_GetFullStorageDialogText) == 0x000008, "Wrong alignment on WeaponAbilityRemover_C_GetFullStorageDialogText");
static_assert(sizeof(WeaponAbilityRemover_C_GetFullStorageDialogText) == 0x000040, "Wrong size on WeaponAbilityRemover_C_GetFullStorageDialogText");
static_assert(offsetof(WeaponAbilityRemover_C_GetFullStorageDialogText, ReturnValue) == 0x000000, "Member 'WeaponAbilityRemover_C_GetFullStorageDialogText::ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetFullStorageDialogText, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'WeaponAbilityRemover_C_GetFullStorageDialogText::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetFullStorageDialogText, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'WeaponAbilityRemover_C_GetFullStorageDialogText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.GetRequestParameter
// 0x0160 (0x0160 - 0x0000)
struct WeaponAbilityRemover_C_GetRequestParameter final
{
public:
	class FString                                 OutWeaponID;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         OutTokenID;                                        // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_464A[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 OutSlots;                                          // 0x0018(0x0010)(Parm, OutParm)
	TArray<int32>                                 Slots;                                             // 0x0028(0x0010)(Edit, BlueprintVisible)
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x0038(0x0118)(ConstParm)
	int32                                         CallFunc_GetSelectedTokenID_ReturnValue;           // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedPerkSlotNo_ReturnValue;        // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAbilityRemover_C_GetRequestParameter) == 0x000008, "Wrong alignment on WeaponAbilityRemover_C_GetRequestParameter");
static_assert(sizeof(WeaponAbilityRemover_C_GetRequestParameter) == 0x000160, "Wrong size on WeaponAbilityRemover_C_GetRequestParameter");
static_assert(offsetof(WeaponAbilityRemover_C_GetRequestParameter, OutWeaponID) == 0x000000, "Member 'WeaponAbilityRemover_C_GetRequestParameter::OutWeaponID' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetRequestParameter, OutTokenID) == 0x000010, "Member 'WeaponAbilityRemover_C_GetRequestParameter::OutTokenID' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetRequestParameter, OutSlots) == 0x000018, "Member 'WeaponAbilityRemover_C_GetRequestParameter::OutSlots' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetRequestParameter, Slots) == 0x000028, "Member 'WeaponAbilityRemover_C_GetRequestParameter::Slots' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetRequestParameter, CallFunc_GetSelectedWeapon_ReturnValue) == 0x000038, "Member 'WeaponAbilityRemover_C_GetRequestParameter::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetRequestParameter, CallFunc_GetSelectedTokenID_ReturnValue) == 0x000150, "Member 'WeaponAbilityRemover_C_GetRequestParameter::CallFunc_GetSelectedTokenID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetRequestParameter, CallFunc_GetSelectedPerkSlotNo_ReturnValue) == 0x000154, "Member 'WeaponAbilityRemover_C_GetRequestParameter::CallFunc_GetSelectedPerkSlotNo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetRequestParameter, CallFunc_Array_Add_ReturnValue) == 0x000158, "Member 'WeaponAbilityRemover_C_GetRequestParameter::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.GetItemName
// 0x0118 (0x0118 - 0x0000)
struct WeaponAbilityRemover_C_GetItemName final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_464B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutName;                                           // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_464C[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_464D[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0030(0x00D0)()
	class FString                                 CallFunc_GetItemName_OutName;                      // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue;                  // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponAbilityRemover_C_GetItemName) == 0x000008, "Wrong alignment on WeaponAbilityRemover_C_GetItemName");
static_assert(sizeof(WeaponAbilityRemover_C_GetItemName) == 0x000118, "Wrong size on WeaponAbilityRemover_C_GetItemName");
static_assert(offsetof(WeaponAbilityRemover_C_GetItemName, ItemId) == 0x000000, "Member 'WeaponAbilityRemover_C_GetItemName::ItemId' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetItemName, OutName) == 0x000008, "Member 'WeaponAbilityRemover_C_GetItemName::OutName' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetItemName, CallFunc_GetMasterDataManager_IsValid) == 0x000018, "Member 'WeaponAbilityRemover_C_GetItemName::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetItemName, CallFunc_GetMasterDataManager_ReturnValue) == 0x000020, "Member 'WeaponAbilityRemover_C_GetItemName::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetItemName, CallFunc_GetItemMasterData_IsExists) == 0x000028, "Member 'WeaponAbilityRemover_C_GetItemName::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetItemName, CallFunc_GetItemMasterData_ReturnValue) == 0x000030, "Member 'WeaponAbilityRemover_C_GetItemName::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetItemName, CallFunc_GetItemName_OutName) == 0x000100, "Member 'WeaponAbilityRemover_C_GetItemName::CallFunc_GetItemName_OutName' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetItemName, CallFunc_GetItemName_ReturnValue) == 0x000110, "Member 'WeaponAbilityRemover_C_GetItemName::CallFunc_GetItemName_ReturnValue' has a wrong offset!");

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.GetTokenConfirmDialogText
// 0x0138 (0x0138 - 0x0000)
struct WeaponAbilityRemover_C_GetTokenConfirmDialogText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   Text;                                              // 0x0018(0x0018)(Edit, BlueprintVisible)
	bool                                          IsRecycle;                                         // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_464E[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Cost;                                              // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TokenID;                                           // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_464F[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0040(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0048(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterWeaponPerkData             CallFunc_GetSelectedPerk_ReturnValue;              // 0x0050(0x001C)(ConstParm, NoDestructor)
	uint8                                         Pad_4650[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName;                      // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x0080(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0088(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00A0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_GetTokenUseText_ReturnValue;              // 0x00F0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0108(0x0018)()
	class UWeaponSynthePart_TokenBoxItem_C*       CallFunc_GetSelectedItem_TokenBoxItem;             // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenID_Id;                            // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBFusionTicketType                           CallFunc_GetType_Ticket_Type;                      // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x012D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4651[0x2];                                     // 0x012E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCost_NeedCount;                        // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponAbilityRemover_C_GetTokenConfirmDialogText) == 0x000008, "Wrong alignment on WeaponAbilityRemover_C_GetTokenConfirmDialogText");
static_assert(sizeof(WeaponAbilityRemover_C_GetTokenConfirmDialogText) == 0x000138, "Wrong size on WeaponAbilityRemover_C_GetTokenConfirmDialogText");
static_assert(offsetof(WeaponAbilityRemover_C_GetTokenConfirmDialogText, ReturnValue) == 0x000000, "Member 'WeaponAbilityRemover_C_GetTokenConfirmDialogText::ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetTokenConfirmDialogText, Text) == 0x000018, "Member 'WeaponAbilityRemover_C_GetTokenConfirmDialogText::Text' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetTokenConfirmDialogText, IsRecycle) == 0x000030, "Member 'WeaponAbilityRemover_C_GetTokenConfirmDialogText::IsRecycle' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetTokenConfirmDialogText, Cost) == 0x000034, "Member 'WeaponAbilityRemover_C_GetTokenConfirmDialogText::Cost' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetTokenConfirmDialogText, TokenID) == 0x000038, "Member 'WeaponAbilityRemover_C_GetTokenConfirmDialogText::TokenID' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetTokenConfirmDialogText, Temp_bool_Variable) == 0x00003C, "Member 'WeaponAbilityRemover_C_GetTokenConfirmDialogText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetTokenConfirmDialogText, Temp_name_Variable) == 0x000040, "Member 'WeaponAbilityRemover_C_GetTokenConfirmDialogText::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetTokenConfirmDialogText, Temp_name_Variable_1) == 0x000048, "Member 'WeaponAbilityRemover_C_GetTokenConfirmDialogText::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetTokenConfirmDialogText, CallFunc_GetSelectedPerk_ReturnValue) == 0x000050, "Member 'WeaponAbilityRemover_C_GetTokenConfirmDialogText::CallFunc_GetSelectedPerk_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetTokenConfirmDialogText, CallFunc_GetItemName_OutName) == 0x000070, "Member 'WeaponAbilityRemover_C_GetTokenConfirmDialogText::CallFunc_GetItemName_OutName' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetTokenConfirmDialogText, K2Node_Select_Default) == 0x000080, "Member 'WeaponAbilityRemover_C_GetTokenConfirmDialogText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetTokenConfirmDialogText, CallFunc_Conv_StringToText_ReturnValue) == 0x000088, "Member 'WeaponAbilityRemover_C_GetTokenConfirmDialogText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetTokenConfirmDialogText, K2Node_MakeStruct_FormatArgumentData) == 0x0000A0, "Member 'WeaponAbilityRemover_C_GetTokenConfirmDialogText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetTokenConfirmDialogText, K2Node_MakeArray_Array) == 0x0000E0, "Member 'WeaponAbilityRemover_C_GetTokenConfirmDialogText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetTokenConfirmDialogText, CallFunc_GetTokenUseText_ReturnValue) == 0x0000F0, "Member 'WeaponAbilityRemover_C_GetTokenConfirmDialogText::CallFunc_GetTokenUseText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetTokenConfirmDialogText, CallFunc_Format_ReturnValue) == 0x000108, "Member 'WeaponAbilityRemover_C_GetTokenConfirmDialogText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetTokenConfirmDialogText, CallFunc_GetSelectedItem_TokenBoxItem) == 0x000120, "Member 'WeaponAbilityRemover_C_GetTokenConfirmDialogText::CallFunc_GetSelectedItem_TokenBoxItem' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetTokenConfirmDialogText, CallFunc_GetTokenID_Id) == 0x000128, "Member 'WeaponAbilityRemover_C_GetTokenConfirmDialogText::CallFunc_GetTokenID_Id' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetTokenConfirmDialogText, CallFunc_GetType_Ticket_Type) == 0x00012C, "Member 'WeaponAbilityRemover_C_GetTokenConfirmDialogText::CallFunc_GetType_Ticket_Type' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetTokenConfirmDialogText, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00012D, "Member 'WeaponAbilityRemover_C_GetTokenConfirmDialogText::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponAbilityRemover_C_GetTokenConfirmDialogText, CallFunc_GetCost_NeedCount) == 0x000130, "Member 'WeaponAbilityRemover_C_GetTokenConfirmDialogText::CallFunc_GetCost_NeedCount' has a wrong offset!");

}

