#pragma once

 

// Package: WeaponExtender

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WeaponExtender.WeaponExtender_C.ExecuteUbergraph_WeaponExtender
// 0x0308 (0x0308 - 0x0000)
struct WeaponExtender_C_ExecuteUbergraph_WeaponExtender final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_503A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetUseConfirmDialogText_ReturnValue;      // 0x0008(0x0018)()
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_1;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_CreateDialogYesNo_OutDialog;              // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ErrorCode;                      // 0x0058(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x005C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_503B[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_CustomEvent_Info;                           // 0x0060(0x0118)(ConstParm)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue_1; // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetRequestParameter_WeaponID;             // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRequestParameter_TokenId;              // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_503C[0x4];                                     // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue_2; // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x01B0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           K2Node_ComponentBoundEvent_SelectItem;             // 0x01B8(0x0118)()
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result_1;                       // 0x02D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x02D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_503D[0x1];                                     // 0x02D3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 ErrorCode, bool bWasSuccessful, struct FOwnItemInfo& Info)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x02D4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x02E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x02E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x02E6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_503E[0x1];                                     // 0x02E7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetTokenConfirmDialogText_ReturnValue;    // 0x02E8(0x0018)()
	class UBP_Dialog_C*                           CallFunc_CreateDialogYesNo_OutDialog_1;            // 0x0300(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender) == 0x000008, "Wrong alignment on WeaponExtender_C_ExecuteUbergraph_WeaponExtender");
static_assert(sizeof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender) == 0x000308, "Wrong size on WeaponExtender_C_ExecuteUbergraph_WeaponExtender");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, EntryPoint) == 0x000000, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, CallFunc_GetUseConfirmDialogText_ReturnValue) == 0x000008, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::CallFunc_GetUseConfirmDialogText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, CallFunc_GetSBPlayerController_ReturnValue) == 0x000030, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, K2Node_CreateDelegate_OutputDelegate_1) == 0x000038, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, CallFunc_GetWeaponEnhancementComponent_ReturnValue) == 0x000048, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::CallFunc_GetWeaponEnhancementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, CallFunc_CreateDialogYesNo_OutDialog) == 0x000050, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::CallFunc_CreateDialogYesNo_OutDialog' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, K2Node_CustomEvent_ErrorCode) == 0x000058, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::K2Node_CustomEvent_ErrorCode' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, K2Node_CustomEvent_bWasSuccessful) == 0x00005C, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, K2Node_CustomEvent_Info) == 0x000060, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::K2Node_CustomEvent_Info' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000178, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, CallFunc_GetWeaponEnhancementComponent_ReturnValue_1) == 0x000180, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::CallFunc_GetWeaponEnhancementComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x000188, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, CallFunc_GetRequestParameter_WeaponID) == 0x000190, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::CallFunc_GetRequestParameter_WeaponID' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, CallFunc_GetRequestParameter_TokenId) == 0x0001A0, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::CallFunc_GetRequestParameter_TokenId' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, CallFunc_GetWeaponEnhancementComponent_ReturnValue_2) == 0x0001A8, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::CallFunc_GetWeaponEnhancementComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, K2Node_Event_Animation) == 0x0001B0, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, K2Node_ComponentBoundEvent_SelectItem) == 0x0001B8, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::K2Node_ComponentBoundEvent_SelectItem' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0002D0, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, K2Node_CustomEvent_Result_1) == 0x0002D1, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0002D2, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, K2Node_CreateDelegate_OutputDelegate_2) == 0x0002D4, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, CallFunc_Not_PreBool_ReturnValue) == 0x0002E4, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, K2Node_CustomEvent_Result) == 0x0002E5, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0002E6, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, CallFunc_GetTokenConfirmDialogText_ReturnValue) == 0x0002E8, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::CallFunc_GetTokenConfirmDialogText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_ExecuteUbergraph_WeaponExtender, CallFunc_CreateDialogYesNo_OutDialog_1) == 0x000300, "Member 'WeaponExtender_C_ExecuteUbergraph_WeaponExtender::CallFunc_CreateDialogYesNo_OutDialog_1' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.CustomEvent
// 0x0001 (0x0001 - 0x0000)
struct WeaponExtender_C_CustomEvent final
{
public:
	EDialogResult                                 Param_Result;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponExtender_C_CustomEvent) == 0x000001, "Wrong alignment on WeaponExtender_C_CustomEvent");
static_assert(sizeof(WeaponExtender_C_CustomEvent) == 0x000001, "Wrong size on WeaponExtender_C_CustomEvent");
static_assert(offsetof(WeaponExtender_C_CustomEvent, Param_Result) == 0x000000, "Member 'WeaponExtender_C_CustomEvent::Param_Result' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.CustomEvent_0
// 0x0001 (0x0001 - 0x0000)
struct WeaponExtender_C_CustomEvent_0 final
{
public:
	EDialogResult                                 Param_Result;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponExtender_C_CustomEvent_0) == 0x000001, "Wrong alignment on WeaponExtender_C_CustomEvent_0");
static_assert(sizeof(WeaponExtender_C_CustomEvent_0) == 0x000001, "Wrong size on WeaponExtender_C_CustomEvent_0");
static_assert(offsetof(WeaponExtender_C_CustomEvent_0, Param_Result) == 0x000000, "Member 'WeaponExtender_C_CustomEvent_0::Param_Result' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.BndEvt__WeaponExtender_Selector2_K2Node_ComponentBoundEvent_3_OnSelectListItem__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct WeaponExtender_C_BndEvt__WeaponExtender_Selector2_K2Node_ComponentBoundEvent_3_OnSelectListItem__DelegateSignature final
{
public:
	struct FOwnItemInfo                           SelectItem;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponExtender_C_BndEvt__WeaponExtender_Selector2_K2Node_ComponentBoundEvent_3_OnSelectListItem__DelegateSignature) == 0x000008, "Wrong alignment on WeaponExtender_C_BndEvt__WeaponExtender_Selector2_K2Node_ComponentBoundEvent_3_OnSelectListItem__DelegateSignature");
static_assert(sizeof(WeaponExtender_C_BndEvt__WeaponExtender_Selector2_K2Node_ComponentBoundEvent_3_OnSelectListItem__DelegateSignature) == 0x000118, "Wrong size on WeaponExtender_C_BndEvt__WeaponExtender_Selector2_K2Node_ComponentBoundEvent_3_OnSelectListItem__DelegateSignature");
static_assert(offsetof(WeaponExtender_C_BndEvt__WeaponExtender_Selector2_K2Node_ComponentBoundEvent_3_OnSelectListItem__DelegateSignature, SelectItem) == 0x000000, "Member 'WeaponExtender_C_BndEvt__WeaponExtender_Selector2_K2Node_ComponentBoundEvent_3_OnSelectListItem__DelegateSignature::SelectItem' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WeaponExtender_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponExtender_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WeaponExtender_C_OnAnimationFinished");
static_assert(sizeof(WeaponExtender_C_OnAnimationFinished) == 0x000008, "Wrong size on WeaponExtender_C_OnAnimationFinished");
static_assert(offsetof(WeaponExtender_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WeaponExtender_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.EventOnFinishedUnlockPerkSlot
// 0x0120 (0x0120 - 0x0000)
struct WeaponExtender_C_EventOnFinishedUnlockPerkSlot final
{
public:
	int32                                         ErrorCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWasSuccessful;                                    // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_503F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           Info;                                              // 0x0008(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WeaponExtender_C_EventOnFinishedUnlockPerkSlot) == 0x000008, "Wrong alignment on WeaponExtender_C_EventOnFinishedUnlockPerkSlot");
static_assert(sizeof(WeaponExtender_C_EventOnFinishedUnlockPerkSlot) == 0x000120, "Wrong size on WeaponExtender_C_EventOnFinishedUnlockPerkSlot");
static_assert(offsetof(WeaponExtender_C_EventOnFinishedUnlockPerkSlot, ErrorCode) == 0x000000, "Member 'WeaponExtender_C_EventOnFinishedUnlockPerkSlot::ErrorCode' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_EventOnFinishedUnlockPerkSlot, bWasSuccessful) == 0x000004, "Member 'WeaponExtender_C_EventOnFinishedUnlockPerkSlot::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_EventOnFinishedUnlockPerkSlot, Info) == 0x000008, "Member 'WeaponExtender_C_EventOnFinishedUnlockPerkSlot::Info' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.OnSelectWeapon
// 0x0128 (0x0128 - 0x0000)
struct WeaponExtender_C_OnSelectWeapon final
{
public:
	bool                                          CallFunc_IsValidCostAll_Result;                    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5040[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x0008(0x0118)(ConstParm)
	int32                                         CallFunc_GetCreateNum_ReturnValue;                 // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponExtender_C_OnSelectWeapon) == 0x000008, "Wrong alignment on WeaponExtender_C_OnSelectWeapon");
static_assert(sizeof(WeaponExtender_C_OnSelectWeapon) == 0x000128, "Wrong size on WeaponExtender_C_OnSelectWeapon");
static_assert(offsetof(WeaponExtender_C_OnSelectWeapon, CallFunc_IsValidCostAll_Result) == 0x000000, "Member 'WeaponExtender_C_OnSelectWeapon::CallFunc_IsValidCostAll_Result' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_OnSelectWeapon, CallFunc_GetSelectedWeapon_ReturnValue) == 0x000008, "Member 'WeaponExtender_C_OnSelectWeapon::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_OnSelectWeapon, CallFunc_GetCreateNum_ReturnValue) == 0x000120, "Member 'WeaponExtender_C_OnSelectWeapon::CallFunc_GetCreateNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_OnSelectWeapon, CallFunc_Less_IntInt_ReturnValue) == 0x000124, "Member 'WeaponExtender_C_OnSelectWeapon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.GenerateTokens
// 0x0250 (0x0250 - 0x0000)
struct WeaponExtender_C_GenerateTokens final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBFusionTicketType                           Temp_byte_Variable;                                // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBFusionTicketType                           Temp_byte_Variable_1;                              // 0x0005(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBFusionTicketType                           Temp_byte_Variable_2;                              // 0x0006(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBFusionTicketType                           Temp_byte_Variable_3;                              // 0x0007(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x0008(0x0118)(ConstParm)
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5041[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue_1;          // 0x0128(0x0118)(ConstParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBFusionTicketType                           K2Node_Select_Default;                             // 0x0241(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5042[0x6];                                     // 0x0242(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_TokenBoxItem_C*       CallFunc_GenerateToken_TokenBoxItem;               // 0x0248(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponExtender_C_GenerateTokens) == 0x000008, "Wrong alignment on WeaponExtender_C_GenerateTokens");
static_assert(sizeof(WeaponExtender_C_GenerateTokens) == 0x000250, "Wrong size on WeaponExtender_C_GenerateTokens");
static_assert(offsetof(WeaponExtender_C_GenerateTokens, Temp_int_Variable) == 0x000000, "Member 'WeaponExtender_C_GenerateTokens::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_GenerateTokens, Temp_byte_Variable) == 0x000004, "Member 'WeaponExtender_C_GenerateTokens::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_GenerateTokens, Temp_byte_Variable_1) == 0x000005, "Member 'WeaponExtender_C_GenerateTokens::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_GenerateTokens, Temp_byte_Variable_2) == 0x000006, "Member 'WeaponExtender_C_GenerateTokens::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_GenerateTokens, Temp_byte_Variable_3) == 0x000007, "Member 'WeaponExtender_C_GenerateTokens::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_GenerateTokens, CallFunc_GetSelectedWeapon_ReturnValue) == 0x000008, "Member 'WeaponExtender_C_GenerateTokens::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_GenerateTokens, CallFunc_GetItemLevel_ReturnValue) == 0x000120, "Member 'WeaponExtender_C_GenerateTokens::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_GenerateTokens, CallFunc_GetSelectedWeapon_ReturnValue_1) == 0x000128, "Member 'WeaponExtender_C_GenerateTokens::CallFunc_GetSelectedWeapon_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_GenerateTokens, CallFunc_Less_IntInt_ReturnValue) == 0x000240, "Member 'WeaponExtender_C_GenerateTokens::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_GenerateTokens, K2Node_Select_Default) == 0x000241, "Member 'WeaponExtender_C_GenerateTokens::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_GenerateTokens, CallFunc_GenerateToken_TokenBoxItem) == 0x000248, "Member 'WeaponExtender_C_GenerateTokens::CallFunc_GenerateToken_TokenBoxItem' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.PlayAnimIn
// 0x0010 (0x0010 - 0x0000)
struct WeaponExtender_C_PlayAnimIn final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5043[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponExtender_C_PlayAnimIn) == 0x000008, "Wrong alignment on WeaponExtender_C_PlayAnimIn");
static_assert(sizeof(WeaponExtender_C_PlayAnimIn) == 0x000010, "Wrong size on WeaponExtender_C_PlayAnimIn");
static_assert(offsetof(WeaponExtender_C_PlayAnimIn, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'WeaponExtender_C_PlayAnimIn::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_PlayAnimIn, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WeaponExtender_C_PlayAnimIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.PlayAnimOut
// 0x0010 (0x0010 - 0x0000)
struct WeaponExtender_C_PlayAnimOut final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5044[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponExtender_C_PlayAnimOut) == 0x000008, "Wrong alignment on WeaponExtender_C_PlayAnimOut");
static_assert(sizeof(WeaponExtender_C_PlayAnimOut) == 0x000010, "Wrong size on WeaponExtender_C_PlayAnimOut");
static_assert(offsetof(WeaponExtender_C_PlayAnimOut, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'WeaponExtender_C_PlayAnimOut::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_PlayAnimOut, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000004, "Member 'WeaponExtender_C_PlayAnimOut::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_PlayAnimOut, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'WeaponExtender_C_PlayAnimOut::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_PlayAnimOut, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WeaponExtender_C_PlayAnimOut::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.PlayAnimDetailIn
// 0x0008 (0x0008 - 0x0000)
struct WeaponExtender_C_PlayAnimDetailIn final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponExtender_C_PlayAnimDetailIn) == 0x000008, "Wrong alignment on WeaponExtender_C_PlayAnimDetailIn");
static_assert(sizeof(WeaponExtender_C_PlayAnimDetailIn) == 0x000008, "Wrong size on WeaponExtender_C_PlayAnimDetailIn");
static_assert(offsetof(WeaponExtender_C_PlayAnimDetailIn, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'WeaponExtender_C_PlayAnimDetailIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.GetRequestParameter
// 0x0140 (0x0140 - 0x0000)
struct WeaponExtender_C_GetRequestParameter final
{
public:
	class FString                                 WeaponID;                                          // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         TokenID;                                           // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5045[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x0018(0x0118)(ConstParm)
	class UWeaponSynthePart_TokenBoxItem_C*       CallFunc_GetTypeItem_TokenBoxItem;                 // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenID_Id;                            // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponExtender_C_GetRequestParameter) == 0x000008, "Wrong alignment on WeaponExtender_C_GetRequestParameter");
static_assert(sizeof(WeaponExtender_C_GetRequestParameter) == 0x000140, "Wrong size on WeaponExtender_C_GetRequestParameter");
static_assert(offsetof(WeaponExtender_C_GetRequestParameter, WeaponID) == 0x000000, "Member 'WeaponExtender_C_GetRequestParameter::WeaponID' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_GetRequestParameter, TokenID) == 0x000010, "Member 'WeaponExtender_C_GetRequestParameter::TokenID' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_GetRequestParameter, CallFunc_GetSelectedWeapon_ReturnValue) == 0x000018, "Member 'WeaponExtender_C_GetRequestParameter::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_GetRequestParameter, CallFunc_GetTypeItem_TokenBoxItem) == 0x000130, "Member 'WeaponExtender_C_GetRequestParameter::CallFunc_GetTypeItem_TokenBoxItem' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_GetRequestParameter, CallFunc_GetTokenID_Id) == 0x000138, "Member 'WeaponExtender_C_GetRequestParameter::CallFunc_GetTokenID_Id' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.OnInit
// 0x0030 (0x0030 - 0x0000)
struct WeaponExtender_C_OnInit final
{
public:
	struct FFilterGroup                           K2Node_MakeStruct_FilterGroup;                     // 0x0000(0x0010)()
	struct FFilterGroup                           CallFunc_AddFilter_ReturnValue;                    // 0x0010(0x0010)()
	TArray<struct FFilterGroup>                   K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ReferenceParm)
};
static_assert(alignof(WeaponExtender_C_OnInit) == 0x000008, "Wrong alignment on WeaponExtender_C_OnInit");
static_assert(sizeof(WeaponExtender_C_OnInit) == 0x000030, "Wrong size on WeaponExtender_C_OnInit");
static_assert(offsetof(WeaponExtender_C_OnInit, K2Node_MakeStruct_FilterGroup) == 0x000000, "Member 'WeaponExtender_C_OnInit::K2Node_MakeStruct_FilterGroup' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_OnInit, CallFunc_AddFilter_ReturnValue) == 0x000010, "Member 'WeaponExtender_C_OnInit::CallFunc_AddFilter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_OnInit, K2Node_MakeArray_Array) == 0x000020, "Member 'WeaponExtender_C_OnInit::K2Node_MakeArray_Array' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.SetEnableDecide
// 0x0001 (0x0001 - 0x0000)
struct WeaponExtender_C_SetEnableDecide final
{
public:
	bool                                          InEnabled;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponExtender_C_SetEnableDecide) == 0x000001, "Wrong alignment on WeaponExtender_C_SetEnableDecide");
static_assert(sizeof(WeaponExtender_C_SetEnableDecide) == 0x000001, "Wrong size on WeaponExtender_C_SetEnableDecide");
static_assert(offsetof(WeaponExtender_C_SetEnableDecide, InEnabled) == 0x000000, "Member 'WeaponExtender_C_SetEnableDecide::InEnabled' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.SetVisibleWeaponStatusWindow
// 0x0005 (0x0005 - 0x0000)
struct WeaponExtender_C_SetVisibleWeaponStatusWindow final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponExtender_C_SetVisibleWeaponStatusWindow) == 0x000001, "Wrong alignment on WeaponExtender_C_SetVisibleWeaponStatusWindow");
static_assert(sizeof(WeaponExtender_C_SetVisibleWeaponStatusWindow) == 0x000005, "Wrong size on WeaponExtender_C_SetVisibleWeaponStatusWindow");
static_assert(offsetof(WeaponExtender_C_SetVisibleWeaponStatusWindow, InVisible) == 0x000000, "Member 'WeaponExtender_C_SetVisibleWeaponStatusWindow::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleWeaponStatusWindow, Temp_bool_Variable) == 0x000001, "Member 'WeaponExtender_C_SetVisibleWeaponStatusWindow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleWeaponStatusWindow, Temp_byte_Variable) == 0x000002, "Member 'WeaponExtender_C_SetVisibleWeaponStatusWindow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleWeaponStatusWindow, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponExtender_C_SetVisibleWeaponStatusWindow::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleWeaponStatusWindow, K2Node_Select_Default) == 0x000004, "Member 'WeaponExtender_C_SetVisibleWeaponStatusWindow::K2Node_Select_Default' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.SetVisibleTokenBox
// 0x0005 (0x0005 - 0x0000)
struct WeaponExtender_C_SetVisibleTokenBox final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponExtender_C_SetVisibleTokenBox) == 0x000001, "Wrong alignment on WeaponExtender_C_SetVisibleTokenBox");
static_assert(sizeof(WeaponExtender_C_SetVisibleTokenBox) == 0x000005, "Wrong size on WeaponExtender_C_SetVisibleTokenBox");
static_assert(offsetof(WeaponExtender_C_SetVisibleTokenBox, InVisible) == 0x000000, "Member 'WeaponExtender_C_SetVisibleTokenBox::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleTokenBox, Temp_bool_Variable) == 0x000001, "Member 'WeaponExtender_C_SetVisibleTokenBox::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleTokenBox, Temp_byte_Variable) == 0x000002, "Member 'WeaponExtender_C_SetVisibleTokenBox::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleTokenBox, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponExtender_C_SetVisibleTokenBox::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleTokenBox, K2Node_Select_Default) == 0x000004, "Member 'WeaponExtender_C_SetVisibleTokenBox::K2Node_Select_Default' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.SetVisibleInfomation
// 0x0005 (0x0005 - 0x0000)
struct WeaponExtender_C_SetVisibleInfomation final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponExtender_C_SetVisibleInfomation) == 0x000001, "Wrong alignment on WeaponExtender_C_SetVisibleInfomation");
static_assert(sizeof(WeaponExtender_C_SetVisibleInfomation) == 0x000005, "Wrong size on WeaponExtender_C_SetVisibleInfomation");
static_assert(offsetof(WeaponExtender_C_SetVisibleInfomation, InVisible) == 0x000000, "Member 'WeaponExtender_C_SetVisibleInfomation::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleInfomation, Temp_bool_Variable) == 0x000001, "Member 'WeaponExtender_C_SetVisibleInfomation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleInfomation, Temp_byte_Variable) == 0x000002, "Member 'WeaponExtender_C_SetVisibleInfomation::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleInfomation, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponExtender_C_SetVisibleInfomation::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleInfomation, K2Node_Select_Default) == 0x000004, "Member 'WeaponExtender_C_SetVisibleInfomation::K2Node_Select_Default' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.SetVisibleDecide
// 0x0005 (0x0005 - 0x0000)
struct WeaponExtender_C_SetVisibleDecide final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponExtender_C_SetVisibleDecide) == 0x000001, "Wrong alignment on WeaponExtender_C_SetVisibleDecide");
static_assert(sizeof(WeaponExtender_C_SetVisibleDecide) == 0x000005, "Wrong size on WeaponExtender_C_SetVisibleDecide");
static_assert(offsetof(WeaponExtender_C_SetVisibleDecide, InVisible) == 0x000000, "Member 'WeaponExtender_C_SetVisibleDecide::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleDecide, Temp_bool_Variable) == 0x000001, "Member 'WeaponExtender_C_SetVisibleDecide::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleDecide, Temp_byte_Variable) == 0x000002, "Member 'WeaponExtender_C_SetVisibleDecide::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleDecide, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponExtender_C_SetVisibleDecide::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleDecide, K2Node_Select_Default) == 0x000004, "Member 'WeaponExtender_C_SetVisibleDecide::K2Node_Select_Default' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.SetVisibleBlocker
// 0x0005 (0x0005 - 0x0000)
struct WeaponExtender_C_SetVisibleBlocker final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponExtender_C_SetVisibleBlocker) == 0x000001, "Wrong alignment on WeaponExtender_C_SetVisibleBlocker");
static_assert(sizeof(WeaponExtender_C_SetVisibleBlocker) == 0x000005, "Wrong size on WeaponExtender_C_SetVisibleBlocker");
static_assert(offsetof(WeaponExtender_C_SetVisibleBlocker, InVisible) == 0x000000, "Member 'WeaponExtender_C_SetVisibleBlocker::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleBlocker, Temp_bool_Variable) == 0x000001, "Member 'WeaponExtender_C_SetVisibleBlocker::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleBlocker, Temp_byte_Variable) == 0x000002, "Member 'WeaponExtender_C_SetVisibleBlocker::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleBlocker, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponExtender_C_SetVisibleBlocker::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleBlocker, K2Node_Select_Default) == 0x000004, "Member 'WeaponExtender_C_SetVisibleBlocker::K2Node_Select_Default' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.SetVisibleLoading
// 0x0005 (0x0005 - 0x0000)
struct WeaponExtender_C_SetVisibleLoading final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponExtender_C_SetVisibleLoading) == 0x000001, "Wrong alignment on WeaponExtender_C_SetVisibleLoading");
static_assert(sizeof(WeaponExtender_C_SetVisibleLoading) == 0x000005, "Wrong size on WeaponExtender_C_SetVisibleLoading");
static_assert(offsetof(WeaponExtender_C_SetVisibleLoading, InVisible) == 0x000000, "Member 'WeaponExtender_C_SetVisibleLoading::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleLoading, Temp_bool_Variable) == 0x000001, "Member 'WeaponExtender_C_SetVisibleLoading::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleLoading, Temp_byte_Variable) == 0x000002, "Member 'WeaponExtender_C_SetVisibleLoading::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleLoading, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponExtender_C_SetVisibleLoading::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleLoading, K2Node_Select_Default) == 0x000004, "Member 'WeaponExtender_C_SetVisibleLoading::K2Node_Select_Default' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.SetVisibleSuccess
// 0x0005 (0x0005 - 0x0000)
struct WeaponExtender_C_SetVisibleSuccess final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponExtender_C_SetVisibleSuccess) == 0x000001, "Wrong alignment on WeaponExtender_C_SetVisibleSuccess");
static_assert(sizeof(WeaponExtender_C_SetVisibleSuccess) == 0x000005, "Wrong size on WeaponExtender_C_SetVisibleSuccess");
static_assert(offsetof(WeaponExtender_C_SetVisibleSuccess, InVisible) == 0x000000, "Member 'WeaponExtender_C_SetVisibleSuccess::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleSuccess, Temp_bool_Variable) == 0x000001, "Member 'WeaponExtender_C_SetVisibleSuccess::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleSuccess, Temp_byte_Variable) == 0x000002, "Member 'WeaponExtender_C_SetVisibleSuccess::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleSuccess, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponExtender_C_SetVisibleSuccess::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleSuccess, K2Node_Select_Default) == 0x000004, "Member 'WeaponExtender_C_SetVisibleSuccess::K2Node_Select_Default' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.SetVisibleResult
// 0x0005 (0x0005 - 0x0000)
struct WeaponExtender_C_SetVisibleResult final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponExtender_C_SetVisibleResult) == 0x000001, "Wrong alignment on WeaponExtender_C_SetVisibleResult");
static_assert(sizeof(WeaponExtender_C_SetVisibleResult) == 0x000005, "Wrong size on WeaponExtender_C_SetVisibleResult");
static_assert(offsetof(WeaponExtender_C_SetVisibleResult, InVisible) == 0x000000, "Member 'WeaponExtender_C_SetVisibleResult::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleResult, Temp_bool_Variable) == 0x000001, "Member 'WeaponExtender_C_SetVisibleResult::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleResult, Temp_byte_Variable) == 0x000002, "Member 'WeaponExtender_C_SetVisibleResult::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleResult, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponExtender_C_SetVisibleResult::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_SetVisibleResult, K2Node_Select_Default) == 0x000004, "Member 'WeaponExtender_C_SetVisibleResult::K2Node_Select_Default' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.OpenResult
// 0x0230 (0x0230 - 0x0000)
struct WeaponExtender_C_OpenResult final
{
public:
	struct FOwnItemInfo                           CallFunc_GetAfterWeapon_ReturnValue;               // 0x0000(0x0118)(ConstParm)
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x0118(0x0118)(ConstParm)
};
static_assert(alignof(WeaponExtender_C_OpenResult) == 0x000008, "Wrong alignment on WeaponExtender_C_OpenResult");
static_assert(sizeof(WeaponExtender_C_OpenResult) == 0x000230, "Wrong size on WeaponExtender_C_OpenResult");
static_assert(offsetof(WeaponExtender_C_OpenResult, CallFunc_GetAfterWeapon_ReturnValue) == 0x000000, "Member 'WeaponExtender_C_OpenResult::CallFunc_GetAfterWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_OpenResult, CallFunc_GetSelectedWeapon_ReturnValue) == 0x000118, "Member 'WeaponExtender_C_OpenResult::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");

// Function WeaponExtender.WeaponExtender_C.GetTokenConfirmDialogText
// 0x0040 (0x0040 - 0x0000)
struct WeaponExtender_C_GetTokenConfirmDialogText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class UWeaponSynthePart_TokenBoxItem_C*       CallFunc_GetTypeItem_TokenBoxItem;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCost_NeedCount;                        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenID_Id;                            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetTokenUseText_ReturnValue;              // 0x0028(0x0018)()
};
static_assert(alignof(WeaponExtender_C_GetTokenConfirmDialogText) == 0x000008, "Wrong alignment on WeaponExtender_C_GetTokenConfirmDialogText");
static_assert(sizeof(WeaponExtender_C_GetTokenConfirmDialogText) == 0x000040, "Wrong size on WeaponExtender_C_GetTokenConfirmDialogText");
static_assert(offsetof(WeaponExtender_C_GetTokenConfirmDialogText, ReturnValue) == 0x000000, "Member 'WeaponExtender_C_GetTokenConfirmDialogText::ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_GetTokenConfirmDialogText, CallFunc_GetTypeItem_TokenBoxItem) == 0x000018, "Member 'WeaponExtender_C_GetTokenConfirmDialogText::CallFunc_GetTypeItem_TokenBoxItem' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_GetTokenConfirmDialogText, CallFunc_GetCost_NeedCount) == 0x000020, "Member 'WeaponExtender_C_GetTokenConfirmDialogText::CallFunc_GetCost_NeedCount' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_GetTokenConfirmDialogText, CallFunc_GetTokenID_Id) == 0x000024, "Member 'WeaponExtender_C_GetTokenConfirmDialogText::CallFunc_GetTokenID_Id' has a wrong offset!");
static_assert(offsetof(WeaponExtender_C_GetTokenConfirmDialogText, CallFunc_GetTokenUseText_ReturnValue) == 0x000028, "Member 'WeaponExtender_C_GetTokenConfirmDialogText::CallFunc_GetTokenUseText_ReturnValue' has a wrong offset!");

}

