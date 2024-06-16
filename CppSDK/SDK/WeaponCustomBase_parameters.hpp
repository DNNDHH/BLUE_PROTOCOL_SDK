#pragma once

 

// Package: WeaponCustomBase

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WeaponCustomBase.WeaponCustomBase_C.ExecuteUbergraph_WeaponCustomBase
// 0x0118 (0x0118 - 0x0000)
struct WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D7A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bSuccess)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bSuccess)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_2;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate_3;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue; // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue_1; // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_3;      // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bSuccess_1;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D7B[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue_2; // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_4;      // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_5;      // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue_3; // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue_4; // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_6;      // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D7C[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue_5; // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableESCKey_ReturnValue;               // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D7D[0x1];                                     // 0x00DB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InTextId;                       // 0x00DC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D7E[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00F8(0x0018)()
	class UBP_Dialog_C*                           CallFunc_CreateDialogYesNo_OutDialog;              // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase) == 0x000008, "Wrong alignment on WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase");
static_assert(sizeof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase) == 0x000118, "Wrong size on WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, EntryPoint) == 0x000000, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x000010, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, K2Node_CreateDelegate_OutputDelegate_2) == 0x000038, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, K2Node_CreateDelegate_OutputDelegate_3) == 0x000048, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, K2Node_CreateDelegate_OutputDelegate_4) == 0x000058, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000068, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x000070, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, CallFunc_GetWeaponEnhancementComponent_ReturnValue) == 0x000078, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::CallFunc_GetWeaponEnhancementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, CallFunc_GetWeaponEnhancementComponent_ReturnValue_1) == 0x000080, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::CallFunc_GetWeaponEnhancementComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, CallFunc_GetSBPlayerController_ReturnValue_3) == 0x000088, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::CallFunc_GetSBPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, K2Node_CustomEvent_bSuccess_1) == 0x000090, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::K2Node_CustomEvent_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, CallFunc_GetWeaponEnhancementComponent_ReturnValue_2) == 0x000098, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::CallFunc_GetWeaponEnhancementComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, CallFunc_GetSBPlayerController_ReturnValue_4) == 0x0000A0, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::CallFunc_GetSBPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, CallFunc_GetSBPlayerController_ReturnValue_5) == 0x0000A8, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::CallFunc_GetSBPlayerController_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, CallFunc_GetWeaponEnhancementComponent_ReturnValue_3) == 0x0000B0, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::CallFunc_GetWeaponEnhancementComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, CallFunc_GetWeaponEnhancementComponent_ReturnValue_4) == 0x0000B8, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::CallFunc_GetWeaponEnhancementComponent_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, CallFunc_GetSBPlayerController_ReturnValue_6) == 0x0000C0, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::CallFunc_GetSBPlayerController_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, K2Node_CustomEvent_bSuccess) == 0x0000C8, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::K2Node_CustomEvent_bSuccess' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, CallFunc_GetWeaponEnhancementComponent_ReturnValue_5) == 0x0000D0, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::CallFunc_GetWeaponEnhancementComponent_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, CallFunc_IsEnableESCKey_ReturnValue) == 0x0000D8, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::CallFunc_IsEnableESCKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, K2Node_CustomEvent_Result) == 0x0000D9, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000DA, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, K2Node_CustomEvent_InTextId) == 0x0000DC, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::K2Node_CustomEvent_InTextId' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000E0, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, K2Node_CustomEvent_InRetCode) == 0x0000F0, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, CallFunc_Conv_StringToText_ReturnValue) == 0x0000F8, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase, CallFunc_CreateDialogYesNo_OutDialog) == 0x000110, "Member 'WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase::CallFunc_CreateDialogYesNo_OutDialog' has a wrong offset!");

// Function WeaponCustomBase.WeaponCustomBase_C.OnRequest_GetRewardBoost_cmpl
// 0x0004 (0x0004 - 0x0000)
struct WeaponCustomBase_C_OnRequest_GetRewardBoost_cmpl final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomBase_C_OnRequest_GetRewardBoost_cmpl) == 0x000004, "Wrong alignment on WeaponCustomBase_C_OnRequest_GetRewardBoost_cmpl");
static_assert(sizeof(WeaponCustomBase_C_OnRequest_GetRewardBoost_cmpl) == 0x000004, "Wrong size on WeaponCustomBase_C_OnRequest_GetRewardBoost_cmpl");
static_assert(offsetof(WeaponCustomBase_C_OnRequest_GetRewardBoost_cmpl, InRetCode) == 0x000000, "Member 'WeaponCustomBase_C_OnRequest_GetRewardBoost_cmpl::InRetCode' has a wrong offset!");

// Function WeaponCustomBase.WeaponCustomBase_C.CreateConfirmDialog
// 0x0004 (0x0004 - 0x0000)
struct WeaponCustomBase_C_CreateConfirmDialog final
{
public:
	int32                                         InTextID;                                          // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomBase_C_CreateConfirmDialog) == 0x000004, "Wrong alignment on WeaponCustomBase_C_CreateConfirmDialog");
static_assert(sizeof(WeaponCustomBase_C_CreateConfirmDialog) == 0x000004, "Wrong size on WeaponCustomBase_C_CreateConfirmDialog");
static_assert(offsetof(WeaponCustomBase_C_CreateConfirmDialog, InTextID) == 0x000000, "Member 'WeaponCustomBase_C_CreateConfirmDialog::InTextID' has a wrong offset!");

// Function WeaponCustomBase.WeaponCustomBase_C.OnCompletedConfirmDialog
// 0x0001 (0x0001 - 0x0000)
struct WeaponCustomBase_C_OnCompletedConfirmDialog final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomBase_C_OnCompletedConfirmDialog) == 0x000001, "Wrong alignment on WeaponCustomBase_C_OnCompletedConfirmDialog");
static_assert(sizeof(WeaponCustomBase_C_OnCompletedConfirmDialog) == 0x000001, "Wrong size on WeaponCustomBase_C_OnCompletedConfirmDialog");
static_assert(offsetof(WeaponCustomBase_C_OnCompletedConfirmDialog, Result) == 0x000000, "Member 'WeaponCustomBase_C_OnCompletedConfirmDialog::Result' has a wrong offset!");

// Function WeaponCustomBase.WeaponCustomBase_C.OnCompleteMasterFusionTicket
// 0x0001 (0x0001 - 0x0000)
struct WeaponCustomBase_C_OnCompleteMasterFusionTicket final
{
public:
	bool                                          bSuccess;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponCustomBase_C_OnCompleteMasterFusionTicket) == 0x000001, "Wrong alignment on WeaponCustomBase_C_OnCompleteMasterFusionTicket");
static_assert(sizeof(WeaponCustomBase_C_OnCompleteMasterFusionTicket) == 0x000001, "Wrong size on WeaponCustomBase_C_OnCompleteMasterFusionTicket");
static_assert(offsetof(WeaponCustomBase_C_OnCompleteMasterFusionTicket, bSuccess) == 0x000000, "Member 'WeaponCustomBase_C_OnCompleteMasterFusionTicket::bSuccess' has a wrong offset!");

// Function WeaponCustomBase.WeaponCustomBase_C.OnCompleteMasterFusionCost
// 0x0001 (0x0001 - 0x0000)
struct WeaponCustomBase_C_OnCompleteMasterFusionCost final
{
public:
	bool                                          bSuccess;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponCustomBase_C_OnCompleteMasterFusionCost) == 0x000001, "Wrong alignment on WeaponCustomBase_C_OnCompleteMasterFusionCost");
static_assert(sizeof(WeaponCustomBase_C_OnCompleteMasterFusionCost) == 0x000001, "Wrong size on WeaponCustomBase_C_OnCompleteMasterFusionCost");
static_assert(offsetof(WeaponCustomBase_C_OnCompleteMasterFusionCost, bSuccess) == 0x000000, "Member 'WeaponCustomBase_C_OnCompleteMasterFusionCost::bSuccess' has a wrong offset!");

// Function WeaponCustomBase.WeaponCustomBase_C.CompleteMasterData
// 0x0040 (0x0040 - 0x0000)
struct WeaponCustomBase_C_CompleteMasterData final
{
public:
	bool                                          IsSuccess;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D7F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D80[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_CreateDialog_OutDialog;                   // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomBase_C_CompleteMasterData) == 0x000008, "Wrong alignment on WeaponCustomBase_C_CompleteMasterData");
static_assert(sizeof(WeaponCustomBase_C_CompleteMasterData) == 0x000040, "Wrong size on WeaponCustomBase_C_CompleteMasterData");
static_assert(offsetof(WeaponCustomBase_C_CompleteMasterData, IsSuccess) == 0x000000, "Member 'WeaponCustomBase_C_CompleteMasterData::IsSuccess' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_CompleteMasterData, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'WeaponCustomBase_C_CompleteMasterData::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_CompleteMasterData, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'WeaponCustomBase_C_CompleteMasterData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_CompleteMasterData, CallFunc_BooleanAND_ReturnValue) == 0x000030, "Member 'WeaponCustomBase_C_CompleteMasterData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_CompleteMasterData, CallFunc_CreateDialog_OutDialog) == 0x000038, "Member 'WeaponCustomBase_C_CompleteMasterData::CallFunc_CreateDialog_OutDialog' has a wrong offset!");

// Function WeaponCustomBase.WeaponCustomBase_C.CompletedRewardBoost
// 0x0004 (0x0004 - 0x0000)
struct WeaponCustomBase_C_CompletedRewardBoost final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomBase_C_CompletedRewardBoost) == 0x000004, "Wrong alignment on WeaponCustomBase_C_CompletedRewardBoost");
static_assert(sizeof(WeaponCustomBase_C_CompletedRewardBoost) == 0x000004, "Wrong size on WeaponCustomBase_C_CompletedRewardBoost");
static_assert(offsetof(WeaponCustomBase_C_CompletedRewardBoost, InRetCode) == 0x000000, "Member 'WeaponCustomBase_C_CompletedRewardBoost::InRetCode' has a wrong offset!");

// Function WeaponCustomBase.WeaponCustomBase_C.SetEnableDecide
// 0x0001 (0x0001 - 0x0000)
struct WeaponCustomBase_C_SetEnableDecide final
{
public:
	bool                                          InEnabled;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponCustomBase_C_SetEnableDecide) == 0x000001, "Wrong alignment on WeaponCustomBase_C_SetEnableDecide");
static_assert(sizeof(WeaponCustomBase_C_SetEnableDecide) == 0x000001, "Wrong size on WeaponCustomBase_C_SetEnableDecide");
static_assert(offsetof(WeaponCustomBase_C_SetEnableDecide, InEnabled) == 0x000000, "Member 'WeaponCustomBase_C_SetEnableDecide::InEnabled' has a wrong offset!");

// Function WeaponCustomBase.WeaponCustomBase_C.SetVisibleWeaponStatusWindow
// 0x0001 (0x0001 - 0x0000)
struct WeaponCustomBase_C_SetVisibleWeaponStatusWindow final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponCustomBase_C_SetVisibleWeaponStatusWindow) == 0x000001, "Wrong alignment on WeaponCustomBase_C_SetVisibleWeaponStatusWindow");
static_assert(sizeof(WeaponCustomBase_C_SetVisibleWeaponStatusWindow) == 0x000001, "Wrong size on WeaponCustomBase_C_SetVisibleWeaponStatusWindow");
static_assert(offsetof(WeaponCustomBase_C_SetVisibleWeaponStatusWindow, InVisible) == 0x000000, "Member 'WeaponCustomBase_C_SetVisibleWeaponStatusWindow::InVisible' has a wrong offset!");

// Function WeaponCustomBase.WeaponCustomBase_C.SetVisibleTokenBox
// 0x0001 (0x0001 - 0x0000)
struct WeaponCustomBase_C_SetVisibleTokenBox final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponCustomBase_C_SetVisibleTokenBox) == 0x000001, "Wrong alignment on WeaponCustomBase_C_SetVisibleTokenBox");
static_assert(sizeof(WeaponCustomBase_C_SetVisibleTokenBox) == 0x000001, "Wrong size on WeaponCustomBase_C_SetVisibleTokenBox");
static_assert(offsetof(WeaponCustomBase_C_SetVisibleTokenBox, InVisible) == 0x000000, "Member 'WeaponCustomBase_C_SetVisibleTokenBox::InVisible' has a wrong offset!");

// Function WeaponCustomBase.WeaponCustomBase_C.SetVisibleInfomation
// 0x0001 (0x0001 - 0x0000)
struct WeaponCustomBase_C_SetVisibleInfomation final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponCustomBase_C_SetVisibleInfomation) == 0x000001, "Wrong alignment on WeaponCustomBase_C_SetVisibleInfomation");
static_assert(sizeof(WeaponCustomBase_C_SetVisibleInfomation) == 0x000001, "Wrong size on WeaponCustomBase_C_SetVisibleInfomation");
static_assert(offsetof(WeaponCustomBase_C_SetVisibleInfomation, InVisible) == 0x000000, "Member 'WeaponCustomBase_C_SetVisibleInfomation::InVisible' has a wrong offset!");

// Function WeaponCustomBase.WeaponCustomBase_C.SetVisibleDecide
// 0x0001 (0x0001 - 0x0000)
struct WeaponCustomBase_C_SetVisibleDecide final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponCustomBase_C_SetVisibleDecide) == 0x000001, "Wrong alignment on WeaponCustomBase_C_SetVisibleDecide");
static_assert(sizeof(WeaponCustomBase_C_SetVisibleDecide) == 0x000001, "Wrong size on WeaponCustomBase_C_SetVisibleDecide");
static_assert(offsetof(WeaponCustomBase_C_SetVisibleDecide, InVisible) == 0x000000, "Member 'WeaponCustomBase_C_SetVisibleDecide::InVisible' has a wrong offset!");

// Function WeaponCustomBase.WeaponCustomBase_C.SetVisibleBlocker
// 0x0001 (0x0001 - 0x0000)
struct WeaponCustomBase_C_SetVisibleBlocker final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponCustomBase_C_SetVisibleBlocker) == 0x000001, "Wrong alignment on WeaponCustomBase_C_SetVisibleBlocker");
static_assert(sizeof(WeaponCustomBase_C_SetVisibleBlocker) == 0x000001, "Wrong size on WeaponCustomBase_C_SetVisibleBlocker");
static_assert(offsetof(WeaponCustomBase_C_SetVisibleBlocker, InVisible) == 0x000000, "Member 'WeaponCustomBase_C_SetVisibleBlocker::InVisible' has a wrong offset!");

// Function WeaponCustomBase.WeaponCustomBase_C.SetVisibleLoading
// 0x0001 (0x0001 - 0x0000)
struct WeaponCustomBase_C_SetVisibleLoading final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponCustomBase_C_SetVisibleLoading) == 0x000001, "Wrong alignment on WeaponCustomBase_C_SetVisibleLoading");
static_assert(sizeof(WeaponCustomBase_C_SetVisibleLoading) == 0x000001, "Wrong size on WeaponCustomBase_C_SetVisibleLoading");
static_assert(offsetof(WeaponCustomBase_C_SetVisibleLoading, InVisible) == 0x000000, "Member 'WeaponCustomBase_C_SetVisibleLoading::InVisible' has a wrong offset!");

// Function WeaponCustomBase.WeaponCustomBase_C.SetVisibleSuccess
// 0x0001 (0x0001 - 0x0000)
struct WeaponCustomBase_C_SetVisibleSuccess final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponCustomBase_C_SetVisibleSuccess) == 0x000001, "Wrong alignment on WeaponCustomBase_C_SetVisibleSuccess");
static_assert(sizeof(WeaponCustomBase_C_SetVisibleSuccess) == 0x000001, "Wrong size on WeaponCustomBase_C_SetVisibleSuccess");
static_assert(offsetof(WeaponCustomBase_C_SetVisibleSuccess, InVisible) == 0x000000, "Member 'WeaponCustomBase_C_SetVisibleSuccess::InVisible' has a wrong offset!");

// Function WeaponCustomBase.WeaponCustomBase_C.SetVisibleResult
// 0x0001 (0x0001 - 0x0000)
struct WeaponCustomBase_C_SetVisibleResult final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponCustomBase_C_SetVisibleResult) == 0x000001, "Wrong alignment on WeaponCustomBase_C_SetVisibleResult");
static_assert(sizeof(WeaponCustomBase_C_SetVisibleResult) == 0x000001, "Wrong size on WeaponCustomBase_C_SetVisibleResult");
static_assert(offsetof(WeaponCustomBase_C_SetVisibleResult, InVisible) == 0x000000, "Member 'WeaponCustomBase_C_SetVisibleResult::InVisible' has a wrong offset!");

// Function WeaponCustomBase.WeaponCustomBase_C.CreateDialog
// 0x0030 (0x0030 - 0x0000)
struct WeaponCustomBase_C_CreateDialog final
{
public:
	class FText                                   Message;                                           // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UBP_Dialog_C*                           OutDialog;                                         // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           Dialog;                                            // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomBase_C_CreateDialog) == 0x000008, "Wrong alignment on WeaponCustomBase_C_CreateDialog");
static_assert(sizeof(WeaponCustomBase_C_CreateDialog) == 0x000030, "Wrong size on WeaponCustomBase_C_CreateDialog");
static_assert(offsetof(WeaponCustomBase_C_CreateDialog, Message) == 0x000000, "Member 'WeaponCustomBase_C_CreateDialog::Message' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_CreateDialog, OutDialog) == 0x000018, "Member 'WeaponCustomBase_C_CreateDialog::OutDialog' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_CreateDialog, Dialog) == 0x000020, "Member 'WeaponCustomBase_C_CreateDialog::Dialog' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_CreateDialog, CallFunc_Create_ReturnValue) == 0x000028, "Member 'WeaponCustomBase_C_CreateDialog::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function WeaponCustomBase.WeaponCustomBase_C.CreateDialogwithDelegate
// 0x0040 (0x0040 - 0x0000)
struct WeaponCustomBase_C_CreateDialogwithDelegate final
{
public:
	class FText                                   Message;                                           // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TDelegate<void(EDialogResult Result)>         End_Dynamic_Delegate;                              // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	class UBP_Dialog_C*                           OutDialog;                                         // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           Dialog;                                            // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_CreateDialog_OutDialog;                   // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomBase_C_CreateDialogwithDelegate) == 0x000008, "Wrong alignment on WeaponCustomBase_C_CreateDialogwithDelegate");
static_assert(sizeof(WeaponCustomBase_C_CreateDialogwithDelegate) == 0x000040, "Wrong size on WeaponCustomBase_C_CreateDialogwithDelegate");
static_assert(offsetof(WeaponCustomBase_C_CreateDialogwithDelegate, Message) == 0x000000, "Member 'WeaponCustomBase_C_CreateDialogwithDelegate::Message' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_CreateDialogwithDelegate, End_Dynamic_Delegate) == 0x000018, "Member 'WeaponCustomBase_C_CreateDialogwithDelegate::End_Dynamic_Delegate' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_CreateDialogwithDelegate, OutDialog) == 0x000028, "Member 'WeaponCustomBase_C_CreateDialogwithDelegate::OutDialog' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_CreateDialogwithDelegate, Dialog) == 0x000030, "Member 'WeaponCustomBase_C_CreateDialogwithDelegate::Dialog' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_CreateDialogwithDelegate, CallFunc_CreateDialog_OutDialog) == 0x000038, "Member 'WeaponCustomBase_C_CreateDialogwithDelegate::CallFunc_CreateDialog_OutDialog' has a wrong offset!");

// Function WeaponCustomBase.WeaponCustomBase_C.CreateDialogYesNo
// 0x0040 (0x0040 - 0x0000)
struct WeaponCustomBase_C_CreateDialogYesNo final
{
public:
	class FText                                   Message;                                           // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TDelegate<void(EDialogResult Result)>         EndDynamicDelegate;                                // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	class UBP_Dialog_C*                           OutDialog;                                         // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           Dialog;                                            // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomBase_C_CreateDialogYesNo) == 0x000008, "Wrong alignment on WeaponCustomBase_C_CreateDialogYesNo");
static_assert(sizeof(WeaponCustomBase_C_CreateDialogYesNo) == 0x000040, "Wrong size on WeaponCustomBase_C_CreateDialogYesNo");
static_assert(offsetof(WeaponCustomBase_C_CreateDialogYesNo, Message) == 0x000000, "Member 'WeaponCustomBase_C_CreateDialogYesNo::Message' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_CreateDialogYesNo, EndDynamicDelegate) == 0x000018, "Member 'WeaponCustomBase_C_CreateDialogYesNo::EndDynamicDelegate' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_CreateDialogYesNo, OutDialog) == 0x000028, "Member 'WeaponCustomBase_C_CreateDialogYesNo::OutDialog' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_CreateDialogYesNo, Dialog) == 0x000030, "Member 'WeaponCustomBase_C_CreateDialogYesNo::Dialog' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_CreateDialogYesNo, CallFunc_Create_ReturnValue) == 0x000038, "Member 'WeaponCustomBase_C_CreateDialogYesNo::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function WeaponCustomBase.WeaponCustomBase_C.OnComplete
// 0x01C0 (0x01C0 - 0x0000)
struct WeaponCustomBase_C_OnComplete final
{
public:
	int32                                         ErrorCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D81[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0010(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D82[0x5];                                     // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x0040(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_isUpdateEquipWeapon_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D83[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0058(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D84[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue;             // 0x0078(0x0028)(ConstParm)
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x00A0(0x0118)(ConstParm)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponCustomBase_C_OnComplete) == 0x000008, "Wrong alignment on WeaponCustomBase_C_OnComplete");
static_assert(sizeof(WeaponCustomBase_C_OnComplete) == 0x0001C0, "Wrong size on WeaponCustomBase_C_OnComplete");
static_assert(offsetof(WeaponCustomBase_C_OnComplete, ErrorCode) == 0x000000, "Member 'WeaponCustomBase_C_OnComplete::ErrorCode' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_OnComplete, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'WeaponCustomBase_C_OnComplete::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_OnComplete, CallFunc_GetSBRetMessage_ReturnValue) == 0x000010, "Member 'WeaponCustomBase_C_OnComplete::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_OnComplete, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'WeaponCustomBase_C_OnComplete::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_OnComplete, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'WeaponCustomBase_C_OnComplete::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_OnComplete, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000039, "Member 'WeaponCustomBase_C_OnComplete::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_OnComplete, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00003A, "Member 'WeaponCustomBase_C_OnComplete::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_OnComplete, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x000040, "Member 'WeaponCustomBase_C_OnComplete::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_OnComplete, CallFunc_isUpdateEquipWeapon_ReturnValue) == 0x000050, "Member 'WeaponCustomBase_C_OnComplete::CallFunc_isUpdateEquipWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_OnComplete, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000058, "Member 'WeaponCustomBase_C_OnComplete::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_OnComplete, CallFunc_Not_PreBool_ReturnValue) == 0x000070, "Member 'WeaponCustomBase_C_OnComplete::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_OnComplete, CallFunc_GetEquipItemInfo_ReturnValue) == 0x000078, "Member 'WeaponCustomBase_C_OnComplete::CallFunc_GetEquipItemInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_OnComplete, CallFunc_GetSelectedWeapon_ReturnValue) == 0x0000A0, "Member 'WeaponCustomBase_C_OnComplete::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_OnComplete, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0001B8, "Member 'WeaponCustomBase_C_OnComplete::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function WeaponCustomBase.WeaponCustomBase_C.GetUseConfirmDialogText
// 0x01B0 (0x01B0 - 0x0000)
struct WeaponCustomBase_C_GetUseConfirmDialogText final
{
public:
	struct FOwnItemInfo                           Param_SelectWeapon;                                // 0x0000(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   ReturnValue;                                       // 0x0118(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          IsBPPointExchange;                                 // 0x0130(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D85[0x2];                                     // 0x0132(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0134(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x013C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable;                                // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_1;                              // 0x0145(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_2;                              // 0x0146(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_3;                              // 0x0147(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_4;                              // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_5;                              // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_6;                              // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_7;                              // 0x014B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_8;                              // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             K2Node_Select_Default;                             // 0x014D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D86[0x2];                                     // 0x014E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_1;                           // 0x0150(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D87[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists; // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D88[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBBPPtExchangeMasterData              CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue; // 0x017C(0x0018)(NoDestructor)
	uint8                                         Pad_5D89[0x4];                                     // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0198(0x0018)()
};
static_assert(alignof(WeaponCustomBase_C_GetUseConfirmDialogText) == 0x000008, "Wrong alignment on WeaponCustomBase_C_GetUseConfirmDialogText");
static_assert(sizeof(WeaponCustomBase_C_GetUseConfirmDialogText) == 0x0001B0, "Wrong size on WeaponCustomBase_C_GetUseConfirmDialogText");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, Param_SelectWeapon) == 0x000000, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::Param_SelectWeapon' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, ReturnValue) == 0x000118, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, IsBPPointExchange) == 0x000130, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::IsBPPointExchange' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, Temp_bool_Variable) == 0x000131, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, Temp_name_Variable) == 0x000134, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, Temp_name_Variable_1) == 0x00013C, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, Temp_byte_Variable) == 0x000144, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, Temp_byte_Variable_1) == 0x000145, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, Temp_byte_Variable_2) == 0x000146, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, Temp_byte_Variable_3) == 0x000147, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, Temp_byte_Variable_4) == 0x000148, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, Temp_byte_Variable_5) == 0x000149, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, Temp_byte_Variable_6) == 0x00014A, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, Temp_byte_Variable_7) == 0x00014B, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, Temp_byte_Variable_8) == 0x00014C, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, K2Node_Select_Default) == 0x00014D, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, K2Node_Select_Default_1) == 0x000150, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, CallFunc_GetMasterDataManager_IsValid) == 0x000158, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, CallFunc_GetMasterDataManager_ReturnValue) == 0x000160, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000168, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists) == 0x000178, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue) == 0x00017C, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomBase_C_GetUseConfirmDialogText, CallFunc_Conv_StringToText_ReturnValue) == 0x000198, "Member 'WeaponCustomBase_C_GetUseConfirmDialogText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WeaponCustomBase.WeaponCustomBase_C.GetTokenConfirmDialogText
// 0x0018 (0x0018 - 0x0000)
struct WeaponCustomBase_C_GetTokenConfirmDialogText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(WeaponCustomBase_C_GetTokenConfirmDialogText) == 0x000008, "Wrong alignment on WeaponCustomBase_C_GetTokenConfirmDialogText");
static_assert(sizeof(WeaponCustomBase_C_GetTokenConfirmDialogText) == 0x000018, "Wrong size on WeaponCustomBase_C_GetTokenConfirmDialogText");
static_assert(offsetof(WeaponCustomBase_C_GetTokenConfirmDialogText, ReturnValue) == 0x000000, "Member 'WeaponCustomBase_C_GetTokenConfirmDialogText::ReturnValue' has a wrong offset!");

}

