#pragma once

 

// Package: WeaponRebuilder

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WeaponRebuilder.WeaponRebuilder_C.ExecuteUbergraph_WeaponRebuilder
// 0x0450 (0x0450 - 0x0000)
struct WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DB2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetUseConfirmDialogText_ReturnValue;      // 0x0008(0x0018)()
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_ErrorCode;                      // 0x0030(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0034(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DB3[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_CustomEvent_Info;                           // 0x0038(0x0118)(ConstParm)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_1;            // 0x0150(0x0010)(ZeroConstructor, NoDestructor)
	class UBP_Dialog_C*                           CallFunc_CreateDialogYesNo_OutDialog;              // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue; // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue_1; // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetRequestParameter_OutWeaponID;          // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRequestParameter_OutTuning_Token_ID;   // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRequestParameter_OutProtect_Token_ID;  // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_GetRequestParameter_OutLockSlots;         // 0x01A8(0x0010)(ReferenceParm)
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue_2; // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_ProtectNum;             // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DB4[0x4];                                     // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x01C8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           K2Node_ComponentBoundEvent_SelectItem;             // 0x01D0(0x0118)()
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DB5[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x02F0(0x0118)(ConstParm)
	EDialogResult                                 K2Node_CustomEvent_Result_1;                       // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DB6[0x7];                                     // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UProbabilityDisplay_C*                  CallFunc_Create_ReturnValue;                       // 0x0410(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0419(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DB7[0x2];                                     // 0x041A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 ErrorCode, bool bWasSuccessful, struct FOwnItemInfo& Info)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x041C(0x0010)(ZeroConstructor, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x042C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x042D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DB8[0x2];                                     // 0x042E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetTokenConfirmDialogText_ReturnValue;    // 0x0430(0x0018)()
	class UBP_Dialog_C*                           CallFunc_CreateDialogYesNo_OutDialog_1;            // 0x0448(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder) == 0x000008, "Wrong alignment on WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder");
static_assert(sizeof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder) == 0x000450, "Wrong size on WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, EntryPoint) == 0x000000, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, CallFunc_GetUseConfirmDialogText_ReturnValue) == 0x000008, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::CallFunc_GetUseConfirmDialogText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, K2Node_CustomEvent_ErrorCode) == 0x000030, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::K2Node_CustomEvent_ErrorCode' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, K2Node_CustomEvent_bWasSuccessful) == 0x000034, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, K2Node_CustomEvent_Info) == 0x000038, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::K2Node_CustomEvent_Info' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, K2Node_CreateDelegate_OutputDelegate_1) == 0x000150, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, CallFunc_CreateDialogYesNo_OutDialog) == 0x000160, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::CallFunc_CreateDialogYesNo_OutDialog' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, CallFunc_GetSBPlayerController_ReturnValue) == 0x000168, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000170, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, CallFunc_GetWeaponEnhancementComponent_ReturnValue) == 0x000178, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::CallFunc_GetWeaponEnhancementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, CallFunc_GetWeaponEnhancementComponent_ReturnValue_1) == 0x000180, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::CallFunc_GetWeaponEnhancementComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x000188, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, CallFunc_GetRequestParameter_OutWeaponID) == 0x000190, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::CallFunc_GetRequestParameter_OutWeaponID' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, CallFunc_GetRequestParameter_OutTuning_Token_ID) == 0x0001A0, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::CallFunc_GetRequestParameter_OutTuning_Token_ID' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, CallFunc_GetRequestParameter_OutProtect_Token_ID) == 0x0001A4, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::CallFunc_GetRequestParameter_OutProtect_Token_ID' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, CallFunc_GetRequestParameter_OutLockSlots) == 0x0001A8, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::CallFunc_GetRequestParameter_OutLockSlots' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, CallFunc_GetWeaponEnhancementComponent_ReturnValue_2) == 0x0001B8, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::CallFunc_GetWeaponEnhancementComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, K2Node_ComponentBoundEvent_ProtectNum) == 0x0001C0, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::K2Node_ComponentBoundEvent_ProtectNum' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, K2Node_Event_Animation) == 0x0001C8, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, K2Node_ComponentBoundEvent_SelectItem) == 0x0001D0, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::K2Node_ComponentBoundEvent_SelectItem' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0002E8, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, CallFunc_GetSelectedWeapon_ReturnValue) == 0x0002F0, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, K2Node_CustomEvent_Result_1) == 0x000408, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, CallFunc_Create_ReturnValue) == 0x000410, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000418, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, CallFunc_Not_PreBool_ReturnValue) == 0x000419, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, K2Node_CreateDelegate_OutputDelegate_2) == 0x00041C, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, K2Node_CustomEvent_Result) == 0x00042C, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00042D, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, CallFunc_GetTokenConfirmDialogText_ReturnValue) == 0x000430, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::CallFunc_GetTokenConfirmDialogText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder, CallFunc_CreateDialogYesNo_OutDialog_1) == 0x000448, "Member 'WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder::CallFunc_CreateDialogYesNo_OutDialog_1' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.CustomEvent
// 0x0001 (0x0001 - 0x0000)
struct WeaponRebuilder_C_CustomEvent final
{
public:
	EDialogResult                                 Param_Result;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponRebuilder_C_CustomEvent) == 0x000001, "Wrong alignment on WeaponRebuilder_C_CustomEvent");
static_assert(sizeof(WeaponRebuilder_C_CustomEvent) == 0x000001, "Wrong size on WeaponRebuilder_C_CustomEvent");
static_assert(offsetof(WeaponRebuilder_C_CustomEvent, Param_Result) == 0x000000, "Member 'WeaponRebuilder_C_CustomEvent::Param_Result' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.CustomEvent_0
// 0x0001 (0x0001 - 0x0000)
struct WeaponRebuilder_C_CustomEvent_0 final
{
public:
	EDialogResult                                 Param_Result;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponRebuilder_C_CustomEvent_0) == 0x000001, "Wrong alignment on WeaponRebuilder_C_CustomEvent_0");
static_assert(sizeof(WeaponRebuilder_C_CustomEvent_0) == 0x000001, "Wrong size on WeaponRebuilder_C_CustomEvent_0");
static_assert(offsetof(WeaponRebuilder_C_CustomEvent_0, Param_Result) == 0x000000, "Member 'WeaponRebuilder_C_CustomEvent_0::Param_Result' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.BndEvt__WeaponRebuilder_Selector_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct WeaponRebuilder_C_BndEvt__WeaponRebuilder_Selector_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature final
{
public:
	struct FOwnItemInfo                           SelectItem;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponRebuilder_C_BndEvt__WeaponRebuilder_Selector_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature) == 0x000008, "Wrong alignment on WeaponRebuilder_C_BndEvt__WeaponRebuilder_Selector_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature");
static_assert(sizeof(WeaponRebuilder_C_BndEvt__WeaponRebuilder_Selector_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature) == 0x000118, "Wrong size on WeaponRebuilder_C_BndEvt__WeaponRebuilder_Selector_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature");
static_assert(offsetof(WeaponRebuilder_C_BndEvt__WeaponRebuilder_Selector_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature, SelectItem) == 0x000000, "Member 'WeaponRebuilder_C_BndEvt__WeaponRebuilder_Selector_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature::SelectItem' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WeaponRebuilder_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponRebuilder_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WeaponRebuilder_C_OnAnimationFinished");
static_assert(sizeof(WeaponRebuilder_C_OnAnimationFinished) == 0x000008, "Wrong size on WeaponRebuilder_C_OnAnimationFinished");
static_assert(offsetof(WeaponRebuilder_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WeaponRebuilder_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.BndEvt__RebuldWeaponDesc_K2Node_ComponentBoundEvent_3_OnProtectNumChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WeaponRebuilder_C_BndEvt__RebuldWeaponDesc_K2Node_ComponentBoundEvent_3_OnProtectNumChanged__DelegateSignature final
{
public:
	int32                                         ProtectNum;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponRebuilder_C_BndEvt__RebuldWeaponDesc_K2Node_ComponentBoundEvent_3_OnProtectNumChanged__DelegateSignature) == 0x000004, "Wrong alignment on WeaponRebuilder_C_BndEvt__RebuldWeaponDesc_K2Node_ComponentBoundEvent_3_OnProtectNumChanged__DelegateSignature");
static_assert(sizeof(WeaponRebuilder_C_BndEvt__RebuldWeaponDesc_K2Node_ComponentBoundEvent_3_OnProtectNumChanged__DelegateSignature) == 0x000004, "Wrong size on WeaponRebuilder_C_BndEvt__RebuldWeaponDesc_K2Node_ComponentBoundEvent_3_OnProtectNumChanged__DelegateSignature");
static_assert(offsetof(WeaponRebuilder_C_BndEvt__RebuldWeaponDesc_K2Node_ComponentBoundEvent_3_OnProtectNumChanged__DelegateSignature, ProtectNum) == 0x000000, "Member 'WeaponRebuilder_C_BndEvt__RebuldWeaponDesc_K2Node_ComponentBoundEvent_3_OnProtectNumChanged__DelegateSignature::ProtectNum' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.EventOnFinishedWeaponTuning
// 0x0120 (0x0120 - 0x0000)
struct WeaponRebuilder_C_EventOnFinishedWeaponTuning final
{
public:
	int32                                         ErrorCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWasSuccessful;                                    // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DB9[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           Info;                                              // 0x0008(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WeaponRebuilder_C_EventOnFinishedWeaponTuning) == 0x000008, "Wrong alignment on WeaponRebuilder_C_EventOnFinishedWeaponTuning");
static_assert(sizeof(WeaponRebuilder_C_EventOnFinishedWeaponTuning) == 0x000120, "Wrong size on WeaponRebuilder_C_EventOnFinishedWeaponTuning");
static_assert(offsetof(WeaponRebuilder_C_EventOnFinishedWeaponTuning, ErrorCode) == 0x000000, "Member 'WeaponRebuilder_C_EventOnFinishedWeaponTuning::ErrorCode' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_EventOnFinishedWeaponTuning, bWasSuccessful) == 0x000004, "Member 'WeaponRebuilder_C_EventOnFinishedWeaponTuning::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_EventOnFinishedWeaponTuning, Info) == 0x000008, "Member 'WeaponRebuilder_C_EventOnFinishedWeaponTuning::Info' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.OnSelectWeapon
// 0x0138 (0x0138 - 0x0000)
struct WeaponRebuilder_C_OnSelectWeapon final
{
public:
	int32                                         CallFunc_GetCreateNum_ReturnValue;                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DBA[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_PerkSlotBox_C*        CallFunc_GetPerkSlotBox_PerkSlotBox;               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidCostAll_Result;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPerkSlotLockAll_Result;                 // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DBB[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x0018(0x0118)(ConstParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponRebuilder_C_OnSelectWeapon) == 0x000008, "Wrong alignment on WeaponRebuilder_C_OnSelectWeapon");
static_assert(sizeof(WeaponRebuilder_C_OnSelectWeapon) == 0x000138, "Wrong size on WeaponRebuilder_C_OnSelectWeapon");
static_assert(offsetof(WeaponRebuilder_C_OnSelectWeapon, CallFunc_GetCreateNum_ReturnValue) == 0x000000, "Member 'WeaponRebuilder_C_OnSelectWeapon::CallFunc_GetCreateNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_OnSelectWeapon, CallFunc_Less_IntInt_ReturnValue) == 0x000004, "Member 'WeaponRebuilder_C_OnSelectWeapon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_OnSelectWeapon, CallFunc_GetPerkSlotBox_PerkSlotBox) == 0x000008, "Member 'WeaponRebuilder_C_OnSelectWeapon::CallFunc_GetPerkSlotBox_PerkSlotBox' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_OnSelectWeapon, CallFunc_IsValidCostAll_Result) == 0x000010, "Member 'WeaponRebuilder_C_OnSelectWeapon::CallFunc_IsValidCostAll_Result' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_OnSelectWeapon, CallFunc_IsPerkSlotLockAll_Result) == 0x000011, "Member 'WeaponRebuilder_C_OnSelectWeapon::CallFunc_IsPerkSlotLockAll_Result' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_OnSelectWeapon, CallFunc_GetSelectedWeapon_ReturnValue) == 0x000018, "Member 'WeaponRebuilder_C_OnSelectWeapon::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_OnSelectWeapon, CallFunc_Not_PreBool_ReturnValue) == 0x000130, "Member 'WeaponRebuilder_C_OnSelectWeapon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_OnSelectWeapon, CallFunc_BooleanAND_ReturnValue) == 0x000131, "Member 'WeaponRebuilder_C_OnSelectWeapon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.GenerateTokens
// 0x0268 (0x0268 - 0x0000)
struct WeaponRebuilder_C_GenerateTokens final
{
public:
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x0000(0x0118)(ConstParm)
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue_1;          // 0x0118(0x0118)(ConstParm)
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemLevel_ReturnValue_1;               // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_TokenBoxItem_C*       CallFunc_GenerateToken_TokenBoxItem;               // 0x0238(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_PerkSlotBox_C*        CallFunc_GetPerkSlotBox_PerkSlotBox;               // 0x0240(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_GetPerkSlotLockList_LockList;             // 0x0248(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DBC[0x4];                                     // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_TokenBoxItem_C*       CallFunc_GenerateToken_TokenBoxItem_1;             // 0x0260(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponRebuilder_C_GenerateTokens) == 0x000008, "Wrong alignment on WeaponRebuilder_C_GenerateTokens");
static_assert(sizeof(WeaponRebuilder_C_GenerateTokens) == 0x000268, "Wrong size on WeaponRebuilder_C_GenerateTokens");
static_assert(offsetof(WeaponRebuilder_C_GenerateTokens, CallFunc_GetSelectedWeapon_ReturnValue) == 0x000000, "Member 'WeaponRebuilder_C_GenerateTokens::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GenerateTokens, CallFunc_GetSelectedWeapon_ReturnValue_1) == 0x000118, "Member 'WeaponRebuilder_C_GenerateTokens::CallFunc_GetSelectedWeapon_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GenerateTokens, CallFunc_GetItemLevel_ReturnValue) == 0x000230, "Member 'WeaponRebuilder_C_GenerateTokens::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GenerateTokens, CallFunc_GetItemLevel_ReturnValue_1) == 0x000234, "Member 'WeaponRebuilder_C_GenerateTokens::CallFunc_GetItemLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GenerateTokens, CallFunc_GenerateToken_TokenBoxItem) == 0x000238, "Member 'WeaponRebuilder_C_GenerateTokens::CallFunc_GenerateToken_TokenBoxItem' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GenerateTokens, CallFunc_GetPerkSlotBox_PerkSlotBox) == 0x000240, "Member 'WeaponRebuilder_C_GenerateTokens::CallFunc_GetPerkSlotBox_PerkSlotBox' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GenerateTokens, CallFunc_GetPerkSlotLockList_LockList) == 0x000248, "Member 'WeaponRebuilder_C_GenerateTokens::CallFunc_GetPerkSlotLockList_LockList' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GenerateTokens, CallFunc_Array_Length_ReturnValue) == 0x000258, "Member 'WeaponRebuilder_C_GenerateTokens::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GenerateTokens, CallFunc_GenerateToken_TokenBoxItem_1) == 0x000260, "Member 'WeaponRebuilder_C_GenerateTokens::CallFunc_GenerateToken_TokenBoxItem_1' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.PlayAnimIn
// 0x0010 (0x0010 - 0x0000)
struct WeaponRebuilder_C_PlayAnimIn final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DBD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponRebuilder_C_PlayAnimIn) == 0x000008, "Wrong alignment on WeaponRebuilder_C_PlayAnimIn");
static_assert(sizeof(WeaponRebuilder_C_PlayAnimIn) == 0x000010, "Wrong size on WeaponRebuilder_C_PlayAnimIn");
static_assert(offsetof(WeaponRebuilder_C_PlayAnimIn, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'WeaponRebuilder_C_PlayAnimIn::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_PlayAnimIn, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WeaponRebuilder_C_PlayAnimIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.PlayAnimOut
// 0x0010 (0x0010 - 0x0000)
struct WeaponRebuilder_C_PlayAnimOut final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DBE[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponRebuilder_C_PlayAnimOut) == 0x000008, "Wrong alignment on WeaponRebuilder_C_PlayAnimOut");
static_assert(sizeof(WeaponRebuilder_C_PlayAnimOut) == 0x000010, "Wrong size on WeaponRebuilder_C_PlayAnimOut");
static_assert(offsetof(WeaponRebuilder_C_PlayAnimOut, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'WeaponRebuilder_C_PlayAnimOut::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_PlayAnimOut, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000004, "Member 'WeaponRebuilder_C_PlayAnimOut::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_PlayAnimOut, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'WeaponRebuilder_C_PlayAnimOut::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_PlayAnimOut, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WeaponRebuilder_C_PlayAnimOut::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.PlayAnimDetailIn
// 0x0008 (0x0008 - 0x0000)
struct WeaponRebuilder_C_PlayAnimDetailIn final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponRebuilder_C_PlayAnimDetailIn) == 0x000008, "Wrong alignment on WeaponRebuilder_C_PlayAnimDetailIn");
static_assert(sizeof(WeaponRebuilder_C_PlayAnimDetailIn) == 0x000008, "Wrong size on WeaponRebuilder_C_PlayAnimDetailIn");
static_assert(offsetof(WeaponRebuilder_C_PlayAnimDetailIn, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'WeaponRebuilder_C_PlayAnimDetailIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.GetRequestParameter
// 0x0188 (0x0188 - 0x0000)
struct WeaponRebuilder_C_GetRequestParameter final
{
public:
	class FString                                 OutWeaponID;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         OutTuning_Token_ID;                                // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutProtect_Token_ID;                               // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 OutLockSlots;                                      // 0x0018(0x0010)(Parm, OutParm)
	int32                                         LockTokenID;                                       // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TuningTokenID;                                     // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_TokenBoxItem_C*       CallFunc_GetTypeItem_TokenBoxItem;                 // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DBF[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTokenID_Id;                            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_TokenBoxItem_C*       CallFunc_GetTypeItem_TokenBoxItem_1;               // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_PerkSlotBox_C*        CallFunc_GetPerkSlotBox_PerkSlotBox;               // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DC0[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GetPerkSlotLockList_LockList;             // 0x0058(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetTokenID_Id_1;                          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DC1[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x0070(0x0118)(ConstParm)
};
static_assert(alignof(WeaponRebuilder_C_GetRequestParameter) == 0x000008, "Wrong alignment on WeaponRebuilder_C_GetRequestParameter");
static_assert(sizeof(WeaponRebuilder_C_GetRequestParameter) == 0x000188, "Wrong size on WeaponRebuilder_C_GetRequestParameter");
static_assert(offsetof(WeaponRebuilder_C_GetRequestParameter, OutWeaponID) == 0x000000, "Member 'WeaponRebuilder_C_GetRequestParameter::OutWeaponID' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetRequestParameter, OutTuning_Token_ID) == 0x000010, "Member 'WeaponRebuilder_C_GetRequestParameter::OutTuning_Token_ID' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetRequestParameter, OutProtect_Token_ID) == 0x000014, "Member 'WeaponRebuilder_C_GetRequestParameter::OutProtect_Token_ID' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetRequestParameter, OutLockSlots) == 0x000018, "Member 'WeaponRebuilder_C_GetRequestParameter::OutLockSlots' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetRequestParameter, LockTokenID) == 0x000028, "Member 'WeaponRebuilder_C_GetRequestParameter::LockTokenID' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetRequestParameter, TuningTokenID) == 0x00002C, "Member 'WeaponRebuilder_C_GetRequestParameter::TuningTokenID' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetRequestParameter, CallFunc_GetTypeItem_TokenBoxItem) == 0x000030, "Member 'WeaponRebuilder_C_GetRequestParameter::CallFunc_GetTypeItem_TokenBoxItem' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetRequestParameter, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'WeaponRebuilder_C_GetRequestParameter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetRequestParameter, CallFunc_GetTokenID_Id) == 0x00003C, "Member 'WeaponRebuilder_C_GetRequestParameter::CallFunc_GetTokenID_Id' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetRequestParameter, CallFunc_GetTypeItem_TokenBoxItem_1) == 0x000040, "Member 'WeaponRebuilder_C_GetRequestParameter::CallFunc_GetTypeItem_TokenBoxItem_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetRequestParameter, CallFunc_GetPerkSlotBox_PerkSlotBox) == 0x000048, "Member 'WeaponRebuilder_C_GetRequestParameter::CallFunc_GetPerkSlotBox_PerkSlotBox' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetRequestParameter, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'WeaponRebuilder_C_GetRequestParameter::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetRequestParameter, CallFunc_GetPerkSlotLockList_LockList) == 0x000058, "Member 'WeaponRebuilder_C_GetRequestParameter::CallFunc_GetPerkSlotLockList_LockList' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetRequestParameter, CallFunc_GetTokenID_Id_1) == 0x000068, "Member 'WeaponRebuilder_C_GetRequestParameter::CallFunc_GetTokenID_Id_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetRequestParameter, CallFunc_GetSelectedWeapon_ReturnValue) == 0x000070, "Member 'WeaponRebuilder_C_GetRequestParameter::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.SetSlotTextColor
// 0x0080 (0x0080 - 0x0000)
struct WeaponRebuilder_C_SetSlotTextColor final
{
public:
	bool                                          Param_IsHovered;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DC2[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0058(0x0028)()
};
static_assert(alignof(WeaponRebuilder_C_SetSlotTextColor) == 0x000008, "Wrong alignment on WeaponRebuilder_C_SetSlotTextColor");
static_assert(sizeof(WeaponRebuilder_C_SetSlotTextColor) == 0x000080, "Wrong size on WeaponRebuilder_C_SetSlotTextColor");
static_assert(offsetof(WeaponRebuilder_C_SetSlotTextColor, Param_IsHovered) == 0x000000, "Member 'WeaponRebuilder_C_SetSlotTextColor::Param_IsHovered' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetSlotTextColor, Temp_bool_Variable) == 0x000001, "Member 'WeaponRebuilder_C_SetSlotTextColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetSlotTextColor, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'WeaponRebuilder_C_SetSlotTextColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetSlotTextColor, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'WeaponRebuilder_C_SetSlotTextColor::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetSlotTextColor, K2Node_Select_Default) == 0x000058, "Member 'WeaponRebuilder_C_SetSlotTextColor::K2Node_Select_Default' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.ClickedLock
// 0x0018 (0x0018 - 0x0000)
struct WeaponRebuilder_C_ClickedLock final
{
public:
	int32                                         LockNum;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DC3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_PerkSlotBox_C*        CallFunc_GetPerkSlotBox_PerkSlotBox;               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidCostAll_Result;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPerkSlotLockAll_Result;                 // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponRebuilder_C_ClickedLock) == 0x000008, "Wrong alignment on WeaponRebuilder_C_ClickedLock");
static_assert(sizeof(WeaponRebuilder_C_ClickedLock) == 0x000018, "Wrong size on WeaponRebuilder_C_ClickedLock");
static_assert(offsetof(WeaponRebuilder_C_ClickedLock, LockNum) == 0x000000, "Member 'WeaponRebuilder_C_ClickedLock::LockNum' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ClickedLock, CallFunc_GetPerkSlotBox_PerkSlotBox) == 0x000008, "Member 'WeaponRebuilder_C_ClickedLock::CallFunc_GetPerkSlotBox_PerkSlotBox' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ClickedLock, CallFunc_IsValidCostAll_Result) == 0x000010, "Member 'WeaponRebuilder_C_ClickedLock::CallFunc_IsValidCostAll_Result' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ClickedLock, CallFunc_IsPerkSlotLockAll_Result) == 0x000011, "Member 'WeaponRebuilder_C_ClickedLock::CallFunc_IsPerkSlotLockAll_Result' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ClickedLock, CallFunc_Not_PreBool_ReturnValue) == 0x000012, "Member 'WeaponRebuilder_C_ClickedLock::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_ClickedLock, CallFunc_BooleanAND_ReturnValue) == 0x000013, "Member 'WeaponRebuilder_C_ClickedLock::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.SetVisibleBtnProbability
// 0x0005 (0x0005 - 0x0000)
struct WeaponRebuilder_C_SetVisibleBtnProbability final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponRebuilder_C_SetVisibleBtnProbability) == 0x000001, "Wrong alignment on WeaponRebuilder_C_SetVisibleBtnProbability");
static_assert(sizeof(WeaponRebuilder_C_SetVisibleBtnProbability) == 0x000005, "Wrong size on WeaponRebuilder_C_SetVisibleBtnProbability");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleBtnProbability, Param_IsVisible) == 0x000000, "Member 'WeaponRebuilder_C_SetVisibleBtnProbability::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleBtnProbability, Temp_bool_Variable) == 0x000001, "Member 'WeaponRebuilder_C_SetVisibleBtnProbability::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleBtnProbability, Temp_byte_Variable) == 0x000002, "Member 'WeaponRebuilder_C_SetVisibleBtnProbability::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleBtnProbability, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponRebuilder_C_SetVisibleBtnProbability::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleBtnProbability, K2Node_Select_Default) == 0x000004, "Member 'WeaponRebuilder_C_SetVisibleBtnProbability::K2Node_Select_Default' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.OnInit
// 0x0030 (0x0030 - 0x0000)
struct WeaponRebuilder_C_OnInit final
{
public:
	struct FFilterGroup                           K2Node_MakeStruct_FilterGroup;                     // 0x0000(0x0010)()
	struct FFilterGroup                           CallFunc_AddFilter_ReturnValue;                    // 0x0010(0x0010)()
	TArray<struct FFilterGroup>                   K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ReferenceParm)
};
static_assert(alignof(WeaponRebuilder_C_OnInit) == 0x000008, "Wrong alignment on WeaponRebuilder_C_OnInit");
static_assert(sizeof(WeaponRebuilder_C_OnInit) == 0x000030, "Wrong size on WeaponRebuilder_C_OnInit");
static_assert(offsetof(WeaponRebuilder_C_OnInit, K2Node_MakeStruct_FilterGroup) == 0x000000, "Member 'WeaponRebuilder_C_OnInit::K2Node_MakeStruct_FilterGroup' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_OnInit, CallFunc_AddFilter_ReturnValue) == 0x000010, "Member 'WeaponRebuilder_C_OnInit::CallFunc_AddFilter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_OnInit, K2Node_MakeArray_Array) == 0x000020, "Member 'WeaponRebuilder_C_OnInit::K2Node_MakeArray_Array' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.SetEnableDecide
// 0x0001 (0x0001 - 0x0000)
struct WeaponRebuilder_C_SetEnableDecide final
{
public:
	bool                                          InEnabled;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponRebuilder_C_SetEnableDecide) == 0x000001, "Wrong alignment on WeaponRebuilder_C_SetEnableDecide");
static_assert(sizeof(WeaponRebuilder_C_SetEnableDecide) == 0x000001, "Wrong size on WeaponRebuilder_C_SetEnableDecide");
static_assert(offsetof(WeaponRebuilder_C_SetEnableDecide, InEnabled) == 0x000000, "Member 'WeaponRebuilder_C_SetEnableDecide::InEnabled' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.SetVisibleWeaponStatusWindow
// 0x0005 (0x0005 - 0x0000)
struct WeaponRebuilder_C_SetVisibleWeaponStatusWindow final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponRebuilder_C_SetVisibleWeaponStatusWindow) == 0x000001, "Wrong alignment on WeaponRebuilder_C_SetVisibleWeaponStatusWindow");
static_assert(sizeof(WeaponRebuilder_C_SetVisibleWeaponStatusWindow) == 0x000005, "Wrong size on WeaponRebuilder_C_SetVisibleWeaponStatusWindow");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleWeaponStatusWindow, InVisible) == 0x000000, "Member 'WeaponRebuilder_C_SetVisibleWeaponStatusWindow::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleWeaponStatusWindow, Temp_byte_Variable) == 0x000001, "Member 'WeaponRebuilder_C_SetVisibleWeaponStatusWindow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleWeaponStatusWindow, Temp_byte_Variable_1) == 0x000002, "Member 'WeaponRebuilder_C_SetVisibleWeaponStatusWindow::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleWeaponStatusWindow, Temp_bool_Variable) == 0x000003, "Member 'WeaponRebuilder_C_SetVisibleWeaponStatusWindow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleWeaponStatusWindow, K2Node_Select_Default) == 0x000004, "Member 'WeaponRebuilder_C_SetVisibleWeaponStatusWindow::K2Node_Select_Default' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.SetVisibleTokenBox
// 0x0005 (0x0005 - 0x0000)
struct WeaponRebuilder_C_SetVisibleTokenBox final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponRebuilder_C_SetVisibleTokenBox) == 0x000001, "Wrong alignment on WeaponRebuilder_C_SetVisibleTokenBox");
static_assert(sizeof(WeaponRebuilder_C_SetVisibleTokenBox) == 0x000005, "Wrong size on WeaponRebuilder_C_SetVisibleTokenBox");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleTokenBox, InVisible) == 0x000000, "Member 'WeaponRebuilder_C_SetVisibleTokenBox::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleTokenBox, Temp_bool_Variable) == 0x000001, "Member 'WeaponRebuilder_C_SetVisibleTokenBox::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleTokenBox, Temp_byte_Variable) == 0x000002, "Member 'WeaponRebuilder_C_SetVisibleTokenBox::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleTokenBox, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponRebuilder_C_SetVisibleTokenBox::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleTokenBox, K2Node_Select_Default) == 0x000004, "Member 'WeaponRebuilder_C_SetVisibleTokenBox::K2Node_Select_Default' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.SetVisibleInfomation
// 0x0005 (0x0005 - 0x0000)
struct WeaponRebuilder_C_SetVisibleInfomation final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponRebuilder_C_SetVisibleInfomation) == 0x000001, "Wrong alignment on WeaponRebuilder_C_SetVisibleInfomation");
static_assert(sizeof(WeaponRebuilder_C_SetVisibleInfomation) == 0x000005, "Wrong size on WeaponRebuilder_C_SetVisibleInfomation");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleInfomation, InVisible) == 0x000000, "Member 'WeaponRebuilder_C_SetVisibleInfomation::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleInfomation, Temp_bool_Variable) == 0x000001, "Member 'WeaponRebuilder_C_SetVisibleInfomation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleInfomation, Temp_byte_Variable) == 0x000002, "Member 'WeaponRebuilder_C_SetVisibleInfomation::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleInfomation, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponRebuilder_C_SetVisibleInfomation::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleInfomation, K2Node_Select_Default) == 0x000004, "Member 'WeaponRebuilder_C_SetVisibleInfomation::K2Node_Select_Default' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.SetVisibleDecide
// 0x0005 (0x0005 - 0x0000)
struct WeaponRebuilder_C_SetVisibleDecide final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponRebuilder_C_SetVisibleDecide) == 0x000001, "Wrong alignment on WeaponRebuilder_C_SetVisibleDecide");
static_assert(sizeof(WeaponRebuilder_C_SetVisibleDecide) == 0x000005, "Wrong size on WeaponRebuilder_C_SetVisibleDecide");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleDecide, InVisible) == 0x000000, "Member 'WeaponRebuilder_C_SetVisibleDecide::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleDecide, Temp_bool_Variable) == 0x000001, "Member 'WeaponRebuilder_C_SetVisibleDecide::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleDecide, Temp_byte_Variable) == 0x000002, "Member 'WeaponRebuilder_C_SetVisibleDecide::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleDecide, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponRebuilder_C_SetVisibleDecide::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleDecide, K2Node_Select_Default) == 0x000004, "Member 'WeaponRebuilder_C_SetVisibleDecide::K2Node_Select_Default' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.SetVisibleBlocker
// 0x0005 (0x0005 - 0x0000)
struct WeaponRebuilder_C_SetVisibleBlocker final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponRebuilder_C_SetVisibleBlocker) == 0x000001, "Wrong alignment on WeaponRebuilder_C_SetVisibleBlocker");
static_assert(sizeof(WeaponRebuilder_C_SetVisibleBlocker) == 0x000005, "Wrong size on WeaponRebuilder_C_SetVisibleBlocker");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleBlocker, InVisible) == 0x000000, "Member 'WeaponRebuilder_C_SetVisibleBlocker::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleBlocker, Temp_bool_Variable) == 0x000001, "Member 'WeaponRebuilder_C_SetVisibleBlocker::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleBlocker, Temp_byte_Variable) == 0x000002, "Member 'WeaponRebuilder_C_SetVisibleBlocker::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleBlocker, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponRebuilder_C_SetVisibleBlocker::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleBlocker, K2Node_Select_Default) == 0x000004, "Member 'WeaponRebuilder_C_SetVisibleBlocker::K2Node_Select_Default' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.SetVisibleLoading
// 0x0005 (0x0005 - 0x0000)
struct WeaponRebuilder_C_SetVisibleLoading final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponRebuilder_C_SetVisibleLoading) == 0x000001, "Wrong alignment on WeaponRebuilder_C_SetVisibleLoading");
static_assert(sizeof(WeaponRebuilder_C_SetVisibleLoading) == 0x000005, "Wrong size on WeaponRebuilder_C_SetVisibleLoading");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleLoading, InVisible) == 0x000000, "Member 'WeaponRebuilder_C_SetVisibleLoading::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleLoading, Temp_bool_Variable) == 0x000001, "Member 'WeaponRebuilder_C_SetVisibleLoading::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleLoading, Temp_byte_Variable) == 0x000002, "Member 'WeaponRebuilder_C_SetVisibleLoading::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleLoading, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponRebuilder_C_SetVisibleLoading::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleLoading, K2Node_Select_Default) == 0x000004, "Member 'WeaponRebuilder_C_SetVisibleLoading::K2Node_Select_Default' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.SetVisibleSuccess
// 0x0005 (0x0005 - 0x0000)
struct WeaponRebuilder_C_SetVisibleSuccess final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponRebuilder_C_SetVisibleSuccess) == 0x000001, "Wrong alignment on WeaponRebuilder_C_SetVisibleSuccess");
static_assert(sizeof(WeaponRebuilder_C_SetVisibleSuccess) == 0x000005, "Wrong size on WeaponRebuilder_C_SetVisibleSuccess");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleSuccess, InVisible) == 0x000000, "Member 'WeaponRebuilder_C_SetVisibleSuccess::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleSuccess, Temp_bool_Variable) == 0x000001, "Member 'WeaponRebuilder_C_SetVisibleSuccess::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleSuccess, Temp_byte_Variable) == 0x000002, "Member 'WeaponRebuilder_C_SetVisibleSuccess::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleSuccess, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponRebuilder_C_SetVisibleSuccess::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleSuccess, K2Node_Select_Default) == 0x000004, "Member 'WeaponRebuilder_C_SetVisibleSuccess::K2Node_Select_Default' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.SetVisibleResult
// 0x0005 (0x0005 - 0x0000)
struct WeaponRebuilder_C_SetVisibleResult final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponRebuilder_C_SetVisibleResult) == 0x000001, "Wrong alignment on WeaponRebuilder_C_SetVisibleResult");
static_assert(sizeof(WeaponRebuilder_C_SetVisibleResult) == 0x000005, "Wrong size on WeaponRebuilder_C_SetVisibleResult");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleResult, InVisible) == 0x000000, "Member 'WeaponRebuilder_C_SetVisibleResult::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleResult, Temp_bool_Variable) == 0x000001, "Member 'WeaponRebuilder_C_SetVisibleResult::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleResult, Temp_byte_Variable) == 0x000002, "Member 'WeaponRebuilder_C_SetVisibleResult::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleResult, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponRebuilder_C_SetVisibleResult::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_SetVisibleResult, K2Node_Select_Default) == 0x000004, "Member 'WeaponRebuilder_C_SetVisibleResult::K2Node_Select_Default' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.OpenResult
// 0x0248 (0x0248 - 0x0000)
struct WeaponRebuilder_C_OpenResult final
{
public:
	struct FOwnItemInfo                           CallFunc_GetAfterWeapon_ReturnValue;               // 0x0000(0x0118)(ConstParm)
	class UWeaponSynthePart_PerkSlotBox_C*        CallFunc_GetPerkSlotBox_PerkSlotBox;               // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x0120(0x0118)(ConstParm)
	TArray<int32>                                 CallFunc_GetPerkSlotLockList_LockList;             // 0x0238(0x0010)(ReferenceParm)
};
static_assert(alignof(WeaponRebuilder_C_OpenResult) == 0x000008, "Wrong alignment on WeaponRebuilder_C_OpenResult");
static_assert(sizeof(WeaponRebuilder_C_OpenResult) == 0x000248, "Wrong size on WeaponRebuilder_C_OpenResult");
static_assert(offsetof(WeaponRebuilder_C_OpenResult, CallFunc_GetAfterWeapon_ReturnValue) == 0x000000, "Member 'WeaponRebuilder_C_OpenResult::CallFunc_GetAfterWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_OpenResult, CallFunc_GetPerkSlotBox_PerkSlotBox) == 0x000118, "Member 'WeaponRebuilder_C_OpenResult::CallFunc_GetPerkSlotBox_PerkSlotBox' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_OpenResult, CallFunc_GetSelectedWeapon_ReturnValue) == 0x000120, "Member 'WeaponRebuilder_C_OpenResult::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_OpenResult, CallFunc_GetPerkSlotLockList_LockList) == 0x000238, "Member 'WeaponRebuilder_C_OpenResult::CallFunc_GetPerkSlotLockList_LockList' has a wrong offset!");

// Function WeaponRebuilder.WeaponRebuilder_C.GetTokenConfirmDialogText
// 0x0098 (0x0098 - 0x0000)
struct WeaponRebuilder_C_GetTokenConfirmDialogText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class UWeaponSynthePart_TokenBoxItem_C*       ProtectTokenItem;                                  // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_TokenBoxItem_C*       TuningTokenItem;                                   // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_PerkSlotBox_C*        CallFunc_GetPerkSlotBox_PerkSlotBox;               // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCost_NeedCount;                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPerkSlotLock_Result;                    // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DC4[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTokenID_Id;                            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenID_Id_1;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenID_Id_2;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCost_NeedCount_1;                      // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCost_NeedCount_2;                      // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DC5[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetTokenUseText_ReturnValue;              // 0x0050(0x0018)()
	class FText                                   CallFunc_GetTokenUseText2_ReturnValue;             // 0x0068(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DC6[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_TokenBoxItem_C*       CallFunc_GetTypeItem_TokenBoxItem;                 // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_TokenBoxItem_C*       CallFunc_GetTypeItem_TokenBoxItem_1;               // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponRebuilder_C_GetTokenConfirmDialogText) == 0x000008, "Wrong alignment on WeaponRebuilder_C_GetTokenConfirmDialogText");
static_assert(sizeof(WeaponRebuilder_C_GetTokenConfirmDialogText) == 0x000098, "Wrong size on WeaponRebuilder_C_GetTokenConfirmDialogText");
static_assert(offsetof(WeaponRebuilder_C_GetTokenConfirmDialogText, ReturnValue) == 0x000000, "Member 'WeaponRebuilder_C_GetTokenConfirmDialogText::ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetTokenConfirmDialogText, ProtectTokenItem) == 0x000018, "Member 'WeaponRebuilder_C_GetTokenConfirmDialogText::ProtectTokenItem' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetTokenConfirmDialogText, TuningTokenItem) == 0x000020, "Member 'WeaponRebuilder_C_GetTokenConfirmDialogText::TuningTokenItem' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetTokenConfirmDialogText, CallFunc_GetPerkSlotBox_PerkSlotBox) == 0x000028, "Member 'WeaponRebuilder_C_GetTokenConfirmDialogText::CallFunc_GetPerkSlotBox_PerkSlotBox' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetTokenConfirmDialogText, CallFunc_GetCost_NeedCount) == 0x000030, "Member 'WeaponRebuilder_C_GetTokenConfirmDialogText::CallFunc_GetCost_NeedCount' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetTokenConfirmDialogText, CallFunc_IsPerkSlotLock_Result) == 0x000034, "Member 'WeaponRebuilder_C_GetTokenConfirmDialogText::CallFunc_IsPerkSlotLock_Result' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetTokenConfirmDialogText, CallFunc_GetTokenID_Id) == 0x000038, "Member 'WeaponRebuilder_C_GetTokenConfirmDialogText::CallFunc_GetTokenID_Id' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetTokenConfirmDialogText, CallFunc_GetTokenID_Id_1) == 0x00003C, "Member 'WeaponRebuilder_C_GetTokenConfirmDialogText::CallFunc_GetTokenID_Id_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetTokenConfirmDialogText, CallFunc_GetTokenID_Id_2) == 0x000040, "Member 'WeaponRebuilder_C_GetTokenConfirmDialogText::CallFunc_GetTokenID_Id_2' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetTokenConfirmDialogText, CallFunc_GetCost_NeedCount_1) == 0x000044, "Member 'WeaponRebuilder_C_GetTokenConfirmDialogText::CallFunc_GetCost_NeedCount_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetTokenConfirmDialogText, CallFunc_GetCost_NeedCount_2) == 0x000048, "Member 'WeaponRebuilder_C_GetTokenConfirmDialogText::CallFunc_GetCost_NeedCount_2' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetTokenConfirmDialogText, CallFunc_GetTokenUseText_ReturnValue) == 0x000050, "Member 'WeaponRebuilder_C_GetTokenConfirmDialogText::CallFunc_GetTokenUseText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetTokenConfirmDialogText, CallFunc_GetTokenUseText2_ReturnValue) == 0x000068, "Member 'WeaponRebuilder_C_GetTokenConfirmDialogText::CallFunc_GetTokenUseText2_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetTokenConfirmDialogText, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'WeaponRebuilder_C_GetTokenConfirmDialogText::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetTokenConfirmDialogText, CallFunc_IsValid_ReturnValue_1) == 0x000081, "Member 'WeaponRebuilder_C_GetTokenConfirmDialogText::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetTokenConfirmDialogText, CallFunc_GetTypeItem_TokenBoxItem) == 0x000088, "Member 'WeaponRebuilder_C_GetTokenConfirmDialogText::CallFunc_GetTypeItem_TokenBoxItem' has a wrong offset!");
static_assert(offsetof(WeaponRebuilder_C_GetTokenConfirmDialogText, CallFunc_GetTypeItem_TokenBoxItem_1) == 0x000090, "Member 'WeaponRebuilder_C_GetTokenConfirmDialogText::CallFunc_GetTypeItem_TokenBoxItem_1' has a wrong offset!");

}

