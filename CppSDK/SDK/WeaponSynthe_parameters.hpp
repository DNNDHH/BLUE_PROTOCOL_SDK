#pragma once

 

// Package: WeaponSynthe

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WeaponSynthe.WeaponSynthe_C.ExecuteUbergraph_WeaponSynthe
// 0x09F0 (0x09F0 - 0x0000)
struct WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D8D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 ErrorCode, bool bWasSuccessful, struct FOwnItemInfo& Info)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_2;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	struct FOwnItemInfo                           K2Node_ComponentBoundEvent_SelectItem;             // 0x0040(0x0118)()
	struct FOwnItemInfo                           K2Node_ComponentBoundEvent_Item;                   // 0x0158(0x0118)()
	class UProbabilityDisplay_C*                  CallFunc_Create_ReturnValue;                       // 0x0270(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D8E[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterFusionItem_Exists;           // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D8F[0x3];                                     // 0x0289(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_BP_FindMasterFusionItem_ReturnValue;      // 0x028C(0x0018)(NoDestructor)
	uint8                                         Pad_5D90[0x4];                                     // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue; // 0x02B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bSuccess;                       // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAllMasterDataLoaded_ReturnValue;        // 0x02B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result_2;                       // 0x02BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x02BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D91[0x3];                                     // 0x02BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_3;            // 0x02C0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result_1;                       // 0x02D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x02D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D92[0x5];                                     // 0x02D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x02D8(0x0118)(ConstParm)
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue_1;          // 0x03F0(0x0118)(ConstParm)
	bool                                          CallFunc_Is_BPPChange_Item_bChange;                // 0x0508(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D93[0x3];                                     // 0x0509(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x050C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0510(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0520(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0530(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0548(0x0018)()
	class UBP_Dialog_C*                           CallFunc_CreateDialogYesNo_OutDialog;              // 0x0560(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_CreateDialogYesNo_OutDialog_1;            // 0x0568(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0570(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue_1; // 0x0578(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShow_Result;                            // 0x0580(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D94[0x3];                                     // 0x0581(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ErrorCode;                      // 0x0584(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0588(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D95[0x7];                                     // 0x0589(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_CustomEvent_Info;                           // 0x0590(0x0118)(ConstParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x06A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D96[0x7];                                     // 0x06A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x06B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_3;      // 0x06B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue_2; // 0x06C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue_3; // 0x06C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_4;      // 0x06D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue_2;          // 0x06D8(0x0118)(ConstParm)
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue_4; // 0x07F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x07F8(0x0010)(ConstParm, ReferenceParm)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0808(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0810(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D97[0x7];                                     // 0x0811(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0818(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0828(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0840(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_CreateDialog_OutDialog;                   // 0x0850(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0858(0x0018)()
	class UBP_Dialog_C*                           CallFunc_CreateDialog_OutDialog_1;                 // 0x0870(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x0878(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D98[0x7];                                     // 0x0879(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x0880(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_Event_Result;                               // 0x0890(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D99[0x7];                                     // 0x0891(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0898(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x08B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D9A[0x7];                                     // 0x08B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_CreateDialogwithDelegate_OutDialog;       // 0x08B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bSuccess)>                K2Node_CreateDelegate_OutputDelegate_4;            // 0x08C0(0x0010)(ZeroConstructor, NoDestructor)
	struct FOwnItemInfo                           CallFunc_GetAfterWeapon_ReturnValue;               // 0x08D0(0x0118)(ConstParm)
	bool                                          CallFunc_IsFusionAbleWeapon_ReturnValue;           // 0x09E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe) == 0x000008, "Wrong alignment on WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe");
static_assert(sizeof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe) == 0x0009F0, "Wrong size on WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, EntryPoint) == 0x000000, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, Temp_bool_Variable) == 0x000004, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, Temp_int_Variable) == 0x000018, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, Temp_int_Variable_1) == 0x00001C, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, K2Node_CreateDelegate_OutputDelegate_2) == 0x000030, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, K2Node_ComponentBoundEvent_SelectItem) == 0x000040, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::K2Node_ComponentBoundEvent_SelectItem' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, K2Node_ComponentBoundEvent_Item) == 0x000158, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::K2Node_ComponentBoundEvent_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_Create_ReturnValue) == 0x000270, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_GetMasterDataManager_IsValid) == 0x000278, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_GetMasterDataManager_ReturnValue) == 0x000280, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_BP_FindMasterFusionItem_Exists) == 0x000288, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_BP_FindMasterFusionItem_Exists' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_BP_FindMasterFusionItem_ReturnValue) == 0x00028C, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_BP_FindMasterFusionItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_GetSBPlayerController_ReturnValue) == 0x0002A8, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_GetWeaponEnhancementComponent_ReturnValue) == 0x0002B0, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_GetWeaponEnhancementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, K2Node_CustomEvent_bSuccess) == 0x0002B8, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::K2Node_CustomEvent_bSuccess' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_IsAllMasterDataLoaded_ReturnValue) == 0x0002B9, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_IsAllMasterDataLoaded_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, K2Node_CustomEvent_Result_2) == 0x0002BA, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::K2Node_CustomEvent_Result_2' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0002BB, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_IsValid_ReturnValue) == 0x0002BC, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, K2Node_CreateDelegate_OutputDelegate_3) == 0x0002C0, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_IsValid_ReturnValue_1) == 0x0002D0, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, K2Node_CustomEvent_Result_1) == 0x0002D1, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0002D2, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_GetSelectedWeapon_ReturnValue) == 0x0002D8, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_GetSelectedWeapon_ReturnValue_1) == 0x0003F0, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_GetSelectedWeapon_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_Is_BPPChange_Item_bChange) == 0x000508, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_Is_BPPChange_Item_bChange' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, K2Node_Select_Default) == 0x00050C, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_GetTextFromAsset_ReturnValue) == 0x000510, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000520, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_Conv_StringToText_ReturnValue) == 0x000530, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000548, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_CreateDialogYesNo_OutDialog) == 0x000560, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_CreateDialogYesNo_OutDialog' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_CreateDialogYesNo_OutDialog_1) == 0x000568, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_CreateDialogYesNo_OutDialog_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000570, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_GetWeaponEnhancementComponent_ReturnValue_1) == 0x000578, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_GetWeaponEnhancementComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_IsShow_Result) == 0x000580, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_IsShow_Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, K2Node_CustomEvent_ErrorCode) == 0x000584, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::K2Node_CustomEvent_ErrorCode' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, K2Node_CustomEvent_bWasSuccessful) == 0x000588, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, K2Node_CustomEvent_Info) == 0x000590, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::K2Node_CustomEvent_Info' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_Not_PreBool_ReturnValue) == 0x0006A8, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x0006B0, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_GetSBPlayerController_ReturnValue_3) == 0x0006B8, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_GetSBPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_GetWeaponEnhancementComponent_ReturnValue_2) == 0x0006C0, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_GetWeaponEnhancementComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_GetWeaponEnhancementComponent_ReturnValue_3) == 0x0006C8, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_GetWeaponEnhancementComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_GetSBPlayerController_ReturnValue_4) == 0x0006D0, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_GetSBPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_GetSelectedWeapon_ReturnValue_2) == 0x0006D8, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_GetSelectedWeapon_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_GetWeaponEnhancementComponent_ReturnValue_4) == 0x0007F0, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_GetWeaponEnhancementComponent_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, K2Node_MakeArray_Array) == 0x0007F8, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, K2Node_Event_Animation) == 0x000808, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000810, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000818, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000828, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000840, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_CreateDialog_OutDialog) == 0x000850, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_CreateDialog_OutDialog' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000858, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_CreateDialog_OutDialog_1) == 0x000870, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_CreateDialog_OutDialog_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, K2Node_CustomEvent_Result) == 0x000878, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x000880, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, K2Node_Event_Result) == 0x000890, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::K2Node_Event_Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000898, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0008B0, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_CreateDialogwithDelegate_OutDialog) == 0x0008B8, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_CreateDialogwithDelegate_OutDialog' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, K2Node_CreateDelegate_OutputDelegate_4) == 0x0008C0, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_GetAfterWeapon_ReturnValue) == 0x0008D0, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_GetAfterWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe, CallFunc_IsFusionAbleWeapon_ReturnValue) == 0x0009E8, "Member 'WeaponSynthe_C_ExecuteUbergraph_WeaponSynthe::CallFunc_IsFusionAbleWeapon_ReturnValue' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.OnCloseError
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthe_C_OnCloseError final
{
public:
	EDialogResult                                 Param_Result;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_OnCloseError) == 0x000001, "Wrong alignment on WeaponSynthe_C_OnCloseError");
static_assert(sizeof(WeaponSynthe_C_OnCloseError) == 0x000001, "Wrong size on WeaponSynthe_C_OnCloseError");
static_assert(offsetof(WeaponSynthe_C_OnCloseError, Param_Result) == 0x000000, "Member 'WeaponSynthe_C_OnCloseError::Param_Result' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WeaponSynthe_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WeaponSynthe_C_OnAnimationFinished");
static_assert(sizeof(WeaponSynthe_C_OnAnimationFinished) == 0x000008, "Wrong size on WeaponSynthe_C_OnAnimationFinished");
static_assert(offsetof(WeaponSynthe_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WeaponSynthe_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.EventOnFinishedWeaponMerge
// 0x0120 (0x0120 - 0x0000)
struct WeaponSynthe_C_EventOnFinishedWeaponMerge final
{
public:
	int32                                         ErrorCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWasSuccessful;                                    // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D9B[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           Info;                                              // 0x0008(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WeaponSynthe_C_EventOnFinishedWeaponMerge) == 0x000008, "Wrong alignment on WeaponSynthe_C_EventOnFinishedWeaponMerge");
static_assert(sizeof(WeaponSynthe_C_EventOnFinishedWeaponMerge) == 0x000120, "Wrong size on WeaponSynthe_C_EventOnFinishedWeaponMerge");
static_assert(offsetof(WeaponSynthe_C_EventOnFinishedWeaponMerge, ErrorCode) == 0x000000, "Member 'WeaponSynthe_C_EventOnFinishedWeaponMerge::ErrorCode' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_EventOnFinishedWeaponMerge, bWasSuccessful) == 0x000004, "Member 'WeaponSynthe_C_EventOnFinishedWeaponMerge::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_EventOnFinishedWeaponMerge, Info) == 0x000008, "Member 'WeaponSynthe_C_EventOnFinishedWeaponMerge::Info' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.OnNewWeaponUseChecked
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthe_C_OnNewWeaponUseChecked final
{
public:
	EDialogResult                                 Param_Result;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_OnNewWeaponUseChecked) == 0x000001, "Wrong alignment on WeaponSynthe_C_OnNewWeaponUseChecked");
static_assert(sizeof(WeaponSynthe_C_OnNewWeaponUseChecked) == 0x000001, "Wrong size on WeaponSynthe_C_OnNewWeaponUseChecked");
static_assert(offsetof(WeaponSynthe_C_OnNewWeaponUseChecked, Param_Result) == 0x000000, "Member 'WeaponSynthe_C_OnNewWeaponUseChecked::Param_Result' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.OnCheckedItemLock
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthe_C_OnCheckedItemLock final
{
public:
	EDialogResult                                 Param_Result;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_OnCheckedItemLock) == 0x000001, "Wrong alignment on WeaponSynthe_C_OnCheckedItemLock");
static_assert(sizeof(WeaponSynthe_C_OnCheckedItemLock) == 0x000001, "Wrong size on WeaponSynthe_C_OnCheckedItemLock");
static_assert(offsetof(WeaponSynthe_C_OnCheckedItemLock, Param_Result) == 0x000000, "Member 'WeaponSynthe_C_OnCheckedItemLock::Param_Result' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.OnCostLoaded
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthe_C_OnCostLoaded final
{
public:
	bool                                          bSuccess;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthe_C_OnCostLoaded) == 0x000001, "Wrong alignment on WeaponSynthe_C_OnCostLoaded");
static_assert(sizeof(WeaponSynthe_C_OnCostLoaded) == 0x000001, "Wrong size on WeaponSynthe_C_OnCostLoaded");
static_assert(offsetof(WeaponSynthe_C_OnCostLoaded, bSuccess) == 0x000000, "Member 'WeaponSynthe_C_OnCostLoaded::bSuccess' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.BndEvt__WeaponSynthe_FusionItemList_K2Node_ComponentBoundEvent_1_OnSelectItemData__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct WeaponSynthe_C_BndEvt__WeaponSynthe_FusionItemList_K2Node_ComponentBoundEvent_1_OnSelectItemData__DelegateSignature final
{
public:
	struct FOwnItemInfo                           Item;                                              // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponSynthe_C_BndEvt__WeaponSynthe_FusionItemList_K2Node_ComponentBoundEvent_1_OnSelectItemData__DelegateSignature) == 0x000008, "Wrong alignment on WeaponSynthe_C_BndEvt__WeaponSynthe_FusionItemList_K2Node_ComponentBoundEvent_1_OnSelectItemData__DelegateSignature");
static_assert(sizeof(WeaponSynthe_C_BndEvt__WeaponSynthe_FusionItemList_K2Node_ComponentBoundEvent_1_OnSelectItemData__DelegateSignature) == 0x000118, "Wrong size on WeaponSynthe_C_BndEvt__WeaponSynthe_FusionItemList_K2Node_ComponentBoundEvent_1_OnSelectItemData__DelegateSignature");
static_assert(offsetof(WeaponSynthe_C_BndEvt__WeaponSynthe_FusionItemList_K2Node_ComponentBoundEvent_1_OnSelectItemData__DelegateSignature, Item) == 0x000000, "Member 'WeaponSynthe_C_BndEvt__WeaponSynthe_FusionItemList_K2Node_ComponentBoundEvent_1_OnSelectItemData__DelegateSignature::Item' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.BndEvt__WeaponSynthe_WeaponCustomStorageView_K2Node_ComponentBoundEvent_0_OnSelectListItem__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct WeaponSynthe_C_BndEvt__WeaponSynthe_WeaponCustomStorageView_K2Node_ComponentBoundEvent_0_OnSelectListItem__DelegateSignature final
{
public:
	struct FOwnItemInfo                           SelectItem;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponSynthe_C_BndEvt__WeaponSynthe_WeaponCustomStorageView_K2Node_ComponentBoundEvent_0_OnSelectListItem__DelegateSignature) == 0x000008, "Wrong alignment on WeaponSynthe_C_BndEvt__WeaponSynthe_WeaponCustomStorageView_K2Node_ComponentBoundEvent_0_OnSelectListItem__DelegateSignature");
static_assert(sizeof(WeaponSynthe_C_BndEvt__WeaponSynthe_WeaponCustomStorageView_K2Node_ComponentBoundEvent_0_OnSelectListItem__DelegateSignature) == 0x000118, "Wrong size on WeaponSynthe_C_BndEvt__WeaponSynthe_WeaponCustomStorageView_K2Node_ComponentBoundEvent_0_OnSelectListItem__DelegateSignature");
static_assert(offsetof(WeaponSynthe_C_BndEvt__WeaponSynthe_WeaponCustomStorageView_K2Node_ComponentBoundEvent_0_OnSelectListItem__DelegateSignature, SelectItem) == 0x000000, "Member 'WeaponSynthe_C_BndEvt__WeaponSynthe_WeaponCustomStorageView_K2Node_ComponentBoundEvent_0_OnSelectListItem__DelegateSignature::SelectItem' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.SetActiveDecideButton
// 0x0010 (0x0010 - 0x0000)
struct WeaponSynthe_C_SetActiveDecideButton final
{
public:
	bool                                          IsActiveApply;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D9C[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_SetActiveDecideButton) == 0x000008, "Wrong alignment on WeaponSynthe_C_SetActiveDecideButton");
static_assert(sizeof(WeaponSynthe_C_SetActiveDecideButton) == 0x000010, "Wrong size on WeaponSynthe_C_SetActiveDecideButton");
static_assert(offsetof(WeaponSynthe_C_SetActiveDecideButton, IsActiveApply) == 0x000000, "Member 'WeaponSynthe_C_SetActiveDecideButton::IsActiveApply' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetActiveDecideButton, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthe_C_SetActiveDecideButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetActiveDecideButton, K2Node_Select_Default) == 0x000008, "Member 'WeaponSynthe_C_SetActiveDecideButton::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.ClickedBtnApplyUpgrade
// 0x0278 (0x0278 - 0x0000)
struct WeaponSynthe_C_ClickedBtnApplyUpgrade final
{
public:
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D9D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x0010(0x0118)(ConstParm)
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue_1;          // 0x0128(0x0118)(ConstParm)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue; // 0x0248(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterFusionItem_Exists;           // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D9E[0x3];                                     // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_BP_FindMasterFusionItem_ReturnValue;      // 0x0254(0x0018)(NoDestructor)
	int32                                         CallFunc_CalculateFusionPrice_ReturnValue;         // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMoney_ReturnValue;                     // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_isStorageItemLocked_OutRequiredCnt;       // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isStorageItemLocked_ReturnValue;          // 0x0275(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0276(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0277(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthe_C_ClickedBtnApplyUpgrade) == 0x000008, "Wrong alignment on WeaponSynthe_C_ClickedBtnApplyUpgrade");
static_assert(sizeof(WeaponSynthe_C_ClickedBtnApplyUpgrade) == 0x000278, "Wrong size on WeaponSynthe_C_ClickedBtnApplyUpgrade");
static_assert(offsetof(WeaponSynthe_C_ClickedBtnApplyUpgrade, CallFunc_GetMasterDataManager_IsValid) == 0x000000, "Member 'WeaponSynthe_C_ClickedBtnApplyUpgrade::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ClickedBtnApplyUpgrade, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'WeaponSynthe_C_ClickedBtnApplyUpgrade::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ClickedBtnApplyUpgrade, CallFunc_GetSelectedWeapon_ReturnValue) == 0x000010, "Member 'WeaponSynthe_C_ClickedBtnApplyUpgrade::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ClickedBtnApplyUpgrade, CallFunc_GetSelectedWeapon_ReturnValue_1) == 0x000128, "Member 'WeaponSynthe_C_ClickedBtnApplyUpgrade::CallFunc_GetSelectedWeapon_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ClickedBtnApplyUpgrade, CallFunc_GetSBPlayerController_ReturnValue) == 0x000240, "Member 'WeaponSynthe_C_ClickedBtnApplyUpgrade::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ClickedBtnApplyUpgrade, CallFunc_GetWeaponEnhancementComponent_ReturnValue) == 0x000248, "Member 'WeaponSynthe_C_ClickedBtnApplyUpgrade::CallFunc_GetWeaponEnhancementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ClickedBtnApplyUpgrade, CallFunc_BP_FindMasterFusionItem_Exists) == 0x000250, "Member 'WeaponSynthe_C_ClickedBtnApplyUpgrade::CallFunc_BP_FindMasterFusionItem_Exists' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ClickedBtnApplyUpgrade, CallFunc_BP_FindMasterFusionItem_ReturnValue) == 0x000254, "Member 'WeaponSynthe_C_ClickedBtnApplyUpgrade::CallFunc_BP_FindMasterFusionItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ClickedBtnApplyUpgrade, CallFunc_CalculateFusionPrice_ReturnValue) == 0x00026C, "Member 'WeaponSynthe_C_ClickedBtnApplyUpgrade::CallFunc_CalculateFusionPrice_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ClickedBtnApplyUpgrade, CallFunc_GetMoney_ReturnValue) == 0x000270, "Member 'WeaponSynthe_C_ClickedBtnApplyUpgrade::CallFunc_GetMoney_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ClickedBtnApplyUpgrade, CallFunc_isStorageItemLocked_OutRequiredCnt) == 0x000274, "Member 'WeaponSynthe_C_ClickedBtnApplyUpgrade::CallFunc_isStorageItemLocked_OutRequiredCnt' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ClickedBtnApplyUpgrade, CallFunc_isStorageItemLocked_ReturnValue) == 0x000275, "Member 'WeaponSynthe_C_ClickedBtnApplyUpgrade::CallFunc_isStorageItemLocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ClickedBtnApplyUpgrade, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000276, "Member 'WeaponSynthe_C_ClickedBtnApplyUpgrade::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_ClickedBtnApplyUpgrade, CallFunc_BooleanOR_ReturnValue) == 0x000277, "Member 'WeaponSynthe_C_ClickedBtnApplyUpgrade::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.UpdateEnableApplyButton
// 0x0280 (0x0280 - 0x0000)
struct WeaponSynthe_C_UpdateEnableApplyButton final
{
public:
	int32                                         CallFunc_GetMoney_ReturnValue;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D9F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x0018(0x0118)(ConstParm)
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue_1;          // 0x0130(0x0118)(ConstParm)
	int32                                         CallFunc_CalculateFusionPrice_ReturnValue;         // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x024D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DA0[0x2];                                     // 0x024E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterFusionItem_Exists;           // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DA1[0x3];                                     // 0x0259(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_BP_FindMasterFusionItem_ReturnValue;      // 0x025C(0x0018)(NoDestructor)
	bool                                          CallFunc_IsFusionAbleItem_ReturnValue;             // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DA2[0x3];                                     // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAllStoragesAmount_ReturnValue;         // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x027C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x027D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthe_C_UpdateEnableApplyButton) == 0x000008, "Wrong alignment on WeaponSynthe_C_UpdateEnableApplyButton");
static_assert(sizeof(WeaponSynthe_C_UpdateEnableApplyButton) == 0x000280, "Wrong size on WeaponSynthe_C_UpdateEnableApplyButton");
static_assert(offsetof(WeaponSynthe_C_UpdateEnableApplyButton, CallFunc_GetMoney_ReturnValue) == 0x000000, "Member 'WeaponSynthe_C_UpdateEnableApplyButton::CallFunc_GetMoney_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateEnableApplyButton, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'WeaponSynthe_C_UpdateEnableApplyButton::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateEnableApplyButton, CallFunc_GetWeaponEnhancementComponent_ReturnValue) == 0x000010, "Member 'WeaponSynthe_C_UpdateEnableApplyButton::CallFunc_GetWeaponEnhancementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateEnableApplyButton, CallFunc_GetSelectedWeapon_ReturnValue) == 0x000018, "Member 'WeaponSynthe_C_UpdateEnableApplyButton::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateEnableApplyButton, CallFunc_GetSelectedWeapon_ReturnValue_1) == 0x000130, "Member 'WeaponSynthe_C_UpdateEnableApplyButton::CallFunc_GetSelectedWeapon_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateEnableApplyButton, CallFunc_CalculateFusionPrice_ReturnValue) == 0x000248, "Member 'WeaponSynthe_C_UpdateEnableApplyButton::CallFunc_CalculateFusionPrice_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateEnableApplyButton, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00024C, "Member 'WeaponSynthe_C_UpdateEnableApplyButton::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateEnableApplyButton, CallFunc_GetMasterDataManager_IsValid) == 0x00024D, "Member 'WeaponSynthe_C_UpdateEnableApplyButton::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateEnableApplyButton, CallFunc_GetMasterDataManager_ReturnValue) == 0x000250, "Member 'WeaponSynthe_C_UpdateEnableApplyButton::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateEnableApplyButton, CallFunc_BP_FindMasterFusionItem_Exists) == 0x000258, "Member 'WeaponSynthe_C_UpdateEnableApplyButton::CallFunc_BP_FindMasterFusionItem_Exists' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateEnableApplyButton, CallFunc_BP_FindMasterFusionItem_ReturnValue) == 0x00025C, "Member 'WeaponSynthe_C_UpdateEnableApplyButton::CallFunc_BP_FindMasterFusionItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateEnableApplyButton, CallFunc_IsFusionAbleItem_ReturnValue) == 0x000274, "Member 'WeaponSynthe_C_UpdateEnableApplyButton::CallFunc_IsFusionAbleItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateEnableApplyButton, CallFunc_GetAllStoragesAmount_ReturnValue) == 0x000278, "Member 'WeaponSynthe_C_UpdateEnableApplyButton::CallFunc_GetAllStoragesAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateEnableApplyButton, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00027C, "Member 'WeaponSynthe_C_UpdateEnableApplyButton::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateEnableApplyButton, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00027D, "Member 'WeaponSynthe_C_UpdateEnableApplyButton::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.UpdateVisibleProbabilityButton
// 0x0030 (0x0030 - 0x0000)
struct WeaponSynthe_C_UpdateVisibleProbabilityButton final
{
public:
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DA3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterFusionItem_Exists;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DA4[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_BP_FindMasterFusionItem_ReturnValue;      // 0x0014(0x0018)(NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_UpdateVisibleProbabilityButton) == 0x000008, "Wrong alignment on WeaponSynthe_C_UpdateVisibleProbabilityButton");
static_assert(sizeof(WeaponSynthe_C_UpdateVisibleProbabilityButton) == 0x000030, "Wrong size on WeaponSynthe_C_UpdateVisibleProbabilityButton");
static_assert(offsetof(WeaponSynthe_C_UpdateVisibleProbabilityButton, CallFunc_MakeLiteralByte_ReturnValue) == 0x000000, "Member 'WeaponSynthe_C_UpdateVisibleProbabilityButton::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateVisibleProbabilityButton, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000001, "Member 'WeaponSynthe_C_UpdateVisibleProbabilityButton::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateVisibleProbabilityButton, Temp_bool_Variable) == 0x000002, "Member 'WeaponSynthe_C_UpdateVisibleProbabilityButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateVisibleProbabilityButton, CallFunc_GetMasterDataManager_IsValid) == 0x000003, "Member 'WeaponSynthe_C_UpdateVisibleProbabilityButton::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateVisibleProbabilityButton, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'WeaponSynthe_C_UpdateVisibleProbabilityButton::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateVisibleProbabilityButton, CallFunc_BP_FindMasterFusionItem_Exists) == 0x000010, "Member 'WeaponSynthe_C_UpdateVisibleProbabilityButton::CallFunc_BP_FindMasterFusionItem_Exists' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateVisibleProbabilityButton, CallFunc_BP_FindMasterFusionItem_ReturnValue) == 0x000014, "Member 'WeaponSynthe_C_UpdateVisibleProbabilityButton::CallFunc_BP_FindMasterFusionItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateVisibleProbabilityButton, K2Node_Select_Default) == 0x00002C, "Member 'WeaponSynthe_C_UpdateVisibleProbabilityButton::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.SetVisibleItemBox
// 0x0005 (0x0005 - 0x0000)
struct WeaponSynthe_C_SetVisibleItemBox final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_SetVisibleItemBox) == 0x000001, "Wrong alignment on WeaponSynthe_C_SetVisibleItemBox");
static_assert(sizeof(WeaponSynthe_C_SetVisibleItemBox) == 0x000005, "Wrong size on WeaponSynthe_C_SetVisibleItemBox");
static_assert(offsetof(WeaponSynthe_C_SetVisibleItemBox, InVisible) == 0x000000, "Member 'WeaponSynthe_C_SetVisibleItemBox::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleItemBox, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthe_C_SetVisibleItemBox::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleItemBox, Temp_byte_Variable) == 0x000002, "Member 'WeaponSynthe_C_SetVisibleItemBox::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleItemBox, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponSynthe_C_SetVisibleItemBox::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleItemBox, K2Node_Select_Default) == 0x000004, "Member 'WeaponSynthe_C_SetVisibleItemBox::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.SetVisibleMoney
// 0x0005 (0x0005 - 0x0000)
struct WeaponSynthe_C_SetVisibleMoney final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_SetVisibleMoney) == 0x000001, "Wrong alignment on WeaponSynthe_C_SetVisibleMoney");
static_assert(sizeof(WeaponSynthe_C_SetVisibleMoney) == 0x000005, "Wrong size on WeaponSynthe_C_SetVisibleMoney");
static_assert(offsetof(WeaponSynthe_C_SetVisibleMoney, InVisible) == 0x000000, "Member 'WeaponSynthe_C_SetVisibleMoney::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleMoney, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthe_C_SetVisibleMoney::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleMoney, Temp_byte_Variable) == 0x000002, "Member 'WeaponSynthe_C_SetVisibleMoney::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleMoney, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponSynthe_C_SetVisibleMoney::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleMoney, K2Node_Select_Default) == 0x000004, "Member 'WeaponSynthe_C_SetVisibleMoney::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.UpdateMoney
// 0x01B0 (0x01B0 - 0x0000)
struct WeaponSynthe_C_UpdateMoney final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DA5[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMoney_ReturnValue;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            CallFunc_GetImpossibleColor_ReturnValue;           // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0030(0x0028)()
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x0068(0x0118)(ConstParm)
	int32                                         CallFunc_CalculateFusionPrice_ReturnValue;         // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DA6[0x3];                                     // 0x0185(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0188(0x0028)()
};
static_assert(alignof(WeaponSynthe_C_UpdateMoney) == 0x000008, "Wrong alignment on WeaponSynthe_C_UpdateMoney");
static_assert(sizeof(WeaponSynthe_C_UpdateMoney) == 0x0001B0, "Wrong size on WeaponSynthe_C_UpdateMoney");
static_assert(offsetof(WeaponSynthe_C_UpdateMoney, Temp_bool_Variable) == 0x000000, "Member 'WeaponSynthe_C_UpdateMoney::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateMoney, CallFunc_GetMoney_ReturnValue) == 0x000004, "Member 'WeaponSynthe_C_UpdateMoney::CallFunc_GetMoney_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateMoney, CallFunc_GetImpossibleColor_ReturnValue) == 0x000008, "Member 'WeaponSynthe_C_UpdateMoney::CallFunc_GetImpossibleColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateMoney, K2Node_MakeStruct_SlateColor) == 0x000030, "Member 'WeaponSynthe_C_UpdateMoney::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateMoney, CallFunc_GetSBPlayerController_ReturnValue) == 0x000058, "Member 'WeaponSynthe_C_UpdateMoney::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateMoney, CallFunc_GetWeaponEnhancementComponent_ReturnValue) == 0x000060, "Member 'WeaponSynthe_C_UpdateMoney::CallFunc_GetWeaponEnhancementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateMoney, CallFunc_GetSelectedWeapon_ReturnValue) == 0x000068, "Member 'WeaponSynthe_C_UpdateMoney::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateMoney, CallFunc_CalculateFusionPrice_ReturnValue) == 0x000180, "Member 'WeaponSynthe_C_UpdateMoney::CallFunc_CalculateFusionPrice_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateMoney, CallFunc_Greater_IntInt_ReturnValue) == 0x000184, "Member 'WeaponSynthe_C_UpdateMoney::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_UpdateMoney, K2Node_Select_Default) == 0x000188, "Member 'WeaponSynthe_C_UpdateMoney::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.SetVisibleLiquidMemory
// 0x0005 (0x0005 - 0x0000)
struct WeaponSynthe_C_SetVisibleLiquidMemory final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_SetVisibleLiquidMemory) == 0x000001, "Wrong alignment on WeaponSynthe_C_SetVisibleLiquidMemory");
static_assert(sizeof(WeaponSynthe_C_SetVisibleLiquidMemory) == 0x000005, "Wrong size on WeaponSynthe_C_SetVisibleLiquidMemory");
static_assert(offsetof(WeaponSynthe_C_SetVisibleLiquidMemory, InVisible) == 0x000000, "Member 'WeaponSynthe_C_SetVisibleLiquidMemory::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleLiquidMemory, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthe_C_SetVisibleLiquidMemory::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleLiquidMemory, Temp_byte_Variable) == 0x000002, "Member 'WeaponSynthe_C_SetVisibleLiquidMemory::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleLiquidMemory, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponSynthe_C_SetVisibleLiquidMemory::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleLiquidMemory, K2Node_Select_Default) == 0x000004, "Member 'WeaponSynthe_C_SetVisibleLiquidMemory::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.UpdateVisibleLiquidMemory
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthe_C_UpdateVisibleLiquidMemory final
{
public:
	bool                                          CallFunc_IsActiveLiquidMemory_bActive;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthe_C_UpdateVisibleLiquidMemory) == 0x000001, "Wrong alignment on WeaponSynthe_C_UpdateVisibleLiquidMemory");
static_assert(sizeof(WeaponSynthe_C_UpdateVisibleLiquidMemory) == 0x000001, "Wrong size on WeaponSynthe_C_UpdateVisibleLiquidMemory");
static_assert(offsetof(WeaponSynthe_C_UpdateVisibleLiquidMemory, CallFunc_IsActiveLiquidMemory_bActive) == 0x000000, "Member 'WeaponSynthe_C_UpdateVisibleLiquidMemory::CallFunc_IsActiveLiquidMemory_bActive' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.BackWeaponSelect
// 0x0238 (0x0238 - 0x0000)
struct WeaponSynthe_C_BackWeaponSelect final
{
public:
	bool                                          CallFunc_IsShow_Result;                            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DA7[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_MakeStruct_OwnItemInfo;                     // 0x0008(0x0118)()
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x0120(0x0118)(ConstParm)
};
static_assert(alignof(WeaponSynthe_C_BackWeaponSelect) == 0x000008, "Wrong alignment on WeaponSynthe_C_BackWeaponSelect");
static_assert(sizeof(WeaponSynthe_C_BackWeaponSelect) == 0x000238, "Wrong size on WeaponSynthe_C_BackWeaponSelect");
static_assert(offsetof(WeaponSynthe_C_BackWeaponSelect, CallFunc_IsShow_Result) == 0x000000, "Member 'WeaponSynthe_C_BackWeaponSelect::CallFunc_IsShow_Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_BackWeaponSelect, K2Node_MakeStruct_OwnItemInfo) == 0x000008, "Member 'WeaponSynthe_C_BackWeaponSelect::K2Node_MakeStruct_OwnItemInfo' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_BackWeaponSelect, CallFunc_GetSelectedWeapon_ReturnValue) == 0x000120, "Member 'WeaponSynthe_C_BackWeaponSelect::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.CheckInvalidFusionItem
// 0x0150 (0x0150 - 0x0000)
struct WeaponSynthe_C_CheckInvalidFusionItem final
{
public:
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x0000(0x0118)(ConstParm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0128(0x0018)()
	bool                                          CallFunc_IsInvalidFusionItem_ReturnValue;          // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DA8[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_CreateDialog_OutDialog;                   // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_CheckInvalidFusionItem) == 0x000008, "Wrong alignment on WeaponSynthe_C_CheckInvalidFusionItem");
static_assert(sizeof(WeaponSynthe_C_CheckInvalidFusionItem) == 0x000150, "Wrong size on WeaponSynthe_C_CheckInvalidFusionItem");
static_assert(offsetof(WeaponSynthe_C_CheckInvalidFusionItem, CallFunc_GetSelectedWeapon_ReturnValue) == 0x000000, "Member 'WeaponSynthe_C_CheckInvalidFusionItem::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_CheckInvalidFusionItem, CallFunc_GetTextFromAsset_ReturnValue) == 0x000118, "Member 'WeaponSynthe_C_CheckInvalidFusionItem::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_CheckInvalidFusionItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000128, "Member 'WeaponSynthe_C_CheckInvalidFusionItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_CheckInvalidFusionItem, CallFunc_IsInvalidFusionItem_ReturnValue) == 0x000140, "Member 'WeaponSynthe_C_CheckInvalidFusionItem::CallFunc_IsInvalidFusionItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_CheckInvalidFusionItem, CallFunc_CreateDialog_OutDialog) == 0x000148, "Member 'WeaponSynthe_C_CheckInvalidFusionItem::CallFunc_CreateDialog_OutDialog' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.PlayAnimIn
// 0x0010 (0x0010 - 0x0000)
struct WeaponSynthe_C_PlayAnimIn final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DA9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_PlayAnimIn) == 0x000008, "Wrong alignment on WeaponSynthe_C_PlayAnimIn");
static_assert(sizeof(WeaponSynthe_C_PlayAnimIn) == 0x000010, "Wrong size on WeaponSynthe_C_PlayAnimIn");
static_assert(offsetof(WeaponSynthe_C_PlayAnimIn, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'WeaponSynthe_C_PlayAnimIn::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_PlayAnimIn, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WeaponSynthe_C_PlayAnimIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.PlayAnimOut
// 0x0010 (0x0010 - 0x0000)
struct WeaponSynthe_C_PlayAnimOut final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DAA[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_PlayAnimOut) == 0x000008, "Wrong alignment on WeaponSynthe_C_PlayAnimOut");
static_assert(sizeof(WeaponSynthe_C_PlayAnimOut) == 0x000010, "Wrong size on WeaponSynthe_C_PlayAnimOut");
static_assert(offsetof(WeaponSynthe_C_PlayAnimOut, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'WeaponSynthe_C_PlayAnimOut::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_PlayAnimOut, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000004, "Member 'WeaponSynthe_C_PlayAnimOut::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_PlayAnimOut, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'WeaponSynthe_C_PlayAnimOut::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_PlayAnimOut, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WeaponSynthe_C_PlayAnimOut::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.PlayAnimDetailIn
// 0x0008 (0x0008 - 0x0000)
struct WeaponSynthe_C_PlayAnimDetailIn final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_PlayAnimDetailIn) == 0x000008, "Wrong alignment on WeaponSynthe_C_PlayAnimDetailIn");
static_assert(sizeof(WeaponSynthe_C_PlayAnimDetailIn) == 0x000008, "Wrong size on WeaponSynthe_C_PlayAnimDetailIn");
static_assert(offsetof(WeaponSynthe_C_PlayAnimDetailIn, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'WeaponSynthe_C_PlayAnimDetailIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.PlayAnimChangeList
// 0x0010 (0x0010 - 0x0000)
struct WeaponSynthe_C_PlayAnimChangeList final
{
public:
	EUMGSequencePlayMode                          PlayMode;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DAB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_PlayAnimChangeList) == 0x000008, "Wrong alignment on WeaponSynthe_C_PlayAnimChangeList");
static_assert(sizeof(WeaponSynthe_C_PlayAnimChangeList) == 0x000010, "Wrong size on WeaponSynthe_C_PlayAnimChangeList");
static_assert(offsetof(WeaponSynthe_C_PlayAnimChangeList, PlayMode) == 0x000000, "Member 'WeaponSynthe_C_PlayAnimChangeList::PlayMode' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_PlayAnimChangeList, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WeaponSynthe_C_PlayAnimChangeList::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.OnSelectWeapon
// 0x0240 (0x0240 - 0x0000)
struct WeaponSynthe_C_OnSelectWeapon final
{
public:
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DAC[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x0008(0x0118)(ConstParm)
	bool                                          CallFunc_IsFusionAbleWeapon_ReturnValue;           // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DAD[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue_1;          // 0x0128(0x0118)(ConstParm)
};
static_assert(alignof(WeaponSynthe_C_OnSelectWeapon) == 0x000008, "Wrong alignment on WeaponSynthe_C_OnSelectWeapon");
static_assert(sizeof(WeaponSynthe_C_OnSelectWeapon) == 0x000240, "Wrong size on WeaponSynthe_C_OnSelectWeapon");
static_assert(offsetof(WeaponSynthe_C_OnSelectWeapon, Temp_bool_Has_Been_Initd_Variable) == 0x000000, "Member 'WeaponSynthe_C_OnSelectWeapon::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_OnSelectWeapon, Temp_bool_IsClosed_Variable) == 0x000001, "Member 'WeaponSynthe_C_OnSelectWeapon::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_OnSelectWeapon, CallFunc_GetSelectedWeapon_ReturnValue) == 0x000008, "Member 'WeaponSynthe_C_OnSelectWeapon::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_OnSelectWeapon, CallFunc_IsFusionAbleWeapon_ReturnValue) == 0x000120, "Member 'WeaponSynthe_C_OnSelectWeapon::CallFunc_IsFusionAbleWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_OnSelectWeapon, CallFunc_GetSelectedWeapon_ReturnValue_1) == 0x000128, "Member 'WeaponSynthe_C_OnSelectWeapon::CallFunc_GetSelectedWeapon_ReturnValue_1' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.PlayAnimBtn
// 0x0008 (0x0008 - 0x0000)
struct WeaponSynthe_C_PlayAnimBtn final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_PlayAnimBtn) == 0x000008, "Wrong alignment on WeaponSynthe_C_PlayAnimBtn");
static_assert(sizeof(WeaponSynthe_C_PlayAnimBtn) == 0x000008, "Wrong size on WeaponSynthe_C_PlayAnimBtn");
static_assert(offsetof(WeaponSynthe_C_PlayAnimBtn, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'WeaponSynthe_C_PlayAnimBtn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.BackItemSelect
// 0x0118 (0x0118 - 0x0000)
struct WeaponSynthe_C_BackItemSelect final
{
public:
	struct FOwnItemInfo                           CallFunc_GetAfterWeapon_ReturnValue;               // 0x0000(0x0118)(ConstParm)
};
static_assert(alignof(WeaponSynthe_C_BackItemSelect) == 0x000008, "Wrong alignment on WeaponSynthe_C_BackItemSelect");
static_assert(sizeof(WeaponSynthe_C_BackItemSelect) == 0x000118, "Wrong size on WeaponSynthe_C_BackItemSelect");
static_assert(offsetof(WeaponSynthe_C_BackItemSelect, CallFunc_GetAfterWeapon_ReturnValue) == 0x000000, "Member 'WeaponSynthe_C_BackItemSelect::CallFunc_GetAfterWeapon_ReturnValue' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.OnCompletedConfirmDialog
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthe_C_OnCompletedConfirmDialog final
{
public:
	EDialogResult                                 Param_Result;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_OnCompletedConfirmDialog) == 0x000001, "Wrong alignment on WeaponSynthe_C_OnCompletedConfirmDialog");
static_assert(sizeof(WeaponSynthe_C_OnCompletedConfirmDialog) == 0x000001, "Wrong size on WeaponSynthe_C_OnCompletedConfirmDialog");
static_assert(offsetof(WeaponSynthe_C_OnCompletedConfirmDialog, Param_Result) == 0x000000, "Member 'WeaponSynthe_C_OnCompletedConfirmDialog::Param_Result' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.OnInit
// 0x0038 (0x0038 - 0x0000)
struct WeaponSynthe_C_OnInit final
{
public:
	struct FFilterGroup                           K2Node_MakeStruct_FilterGroup;                     // 0x0000(0x0010)()
	struct FFilterGroup                           CallFunc_AddFilter_ReturnValue;                    // 0x0010(0x0010)()
	TArray<struct FFilterGroup>                   K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ReferenceParm)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_OnInit) == 0x000008, "Wrong alignment on WeaponSynthe_C_OnInit");
static_assert(sizeof(WeaponSynthe_C_OnInit) == 0x000038, "Wrong size on WeaponSynthe_C_OnInit");
static_assert(offsetof(WeaponSynthe_C_OnInit, K2Node_MakeStruct_FilterGroup) == 0x000000, "Member 'WeaponSynthe_C_OnInit::K2Node_MakeStruct_FilterGroup' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_OnInit, CallFunc_AddFilter_ReturnValue) == 0x000010, "Member 'WeaponSynthe_C_OnInit::CallFunc_AddFilter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_OnInit, K2Node_MakeArray_Array) == 0x000020, "Member 'WeaponSynthe_C_OnInit::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_OnInit, CallFunc_GetSBPlayerController_ReturnValue) == 0x000030, "Member 'WeaponSynthe_C_OnInit::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.OnTerm
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthe_C_OnTerm final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthe_C_OnTerm) == 0x000001, "Wrong alignment on WeaponSynthe_C_OnTerm");
static_assert(sizeof(WeaponSynthe_C_OnTerm) == 0x000001, "Wrong size on WeaponSynthe_C_OnTerm");
static_assert(offsetof(WeaponSynthe_C_OnTerm, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WeaponSynthe_C_OnTerm::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.Reset
// 0x0120 (0x0120 - 0x0000)
struct WeaponSynthe_C_Reset final
{
public:
	bool                                          CallFunc_IsShow_Result;                            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DAE[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x0008(0x0118)(ConstParm)
};
static_assert(alignof(WeaponSynthe_C_Reset) == 0x000008, "Wrong alignment on WeaponSynthe_C_Reset");
static_assert(sizeof(WeaponSynthe_C_Reset) == 0x000120, "Wrong size on WeaponSynthe_C_Reset");
static_assert(offsetof(WeaponSynthe_C_Reset, CallFunc_IsShow_Result) == 0x000000, "Member 'WeaponSynthe_C_Reset::CallFunc_IsShow_Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_Reset, CallFunc_GetSelectedWeapon_ReturnValue) == 0x000008, "Member 'WeaponSynthe_C_Reset::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.SetEnableDecide
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthe_C_SetEnableDecide final
{
public:
	bool                                          InEnabled;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthe_C_SetEnableDecide) == 0x000001, "Wrong alignment on WeaponSynthe_C_SetEnableDecide");
static_assert(sizeof(WeaponSynthe_C_SetEnableDecide) == 0x000001, "Wrong size on WeaponSynthe_C_SetEnableDecide");
static_assert(offsetof(WeaponSynthe_C_SetEnableDecide, InEnabled) == 0x000000, "Member 'WeaponSynthe_C_SetEnableDecide::InEnabled' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.SetVisibleWeaponStatusWindow
// 0x0005 (0x0005 - 0x0000)
struct WeaponSynthe_C_SetVisibleWeaponStatusWindow final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_SetVisibleWeaponStatusWindow) == 0x000001, "Wrong alignment on WeaponSynthe_C_SetVisibleWeaponStatusWindow");
static_assert(sizeof(WeaponSynthe_C_SetVisibleWeaponStatusWindow) == 0x000005, "Wrong size on WeaponSynthe_C_SetVisibleWeaponStatusWindow");
static_assert(offsetof(WeaponSynthe_C_SetVisibleWeaponStatusWindow, InVisible) == 0x000000, "Member 'WeaponSynthe_C_SetVisibleWeaponStatusWindow::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleWeaponStatusWindow, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthe_C_SetVisibleWeaponStatusWindow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleWeaponStatusWindow, Temp_byte_Variable) == 0x000002, "Member 'WeaponSynthe_C_SetVisibleWeaponStatusWindow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleWeaponStatusWindow, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponSynthe_C_SetVisibleWeaponStatusWindow::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleWeaponStatusWindow, K2Node_Select_Default) == 0x000004, "Member 'WeaponSynthe_C_SetVisibleWeaponStatusWindow::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.SetVisibleInfomation
// 0x0005 (0x0005 - 0x0000)
struct WeaponSynthe_C_SetVisibleInfomation final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_SetVisibleInfomation) == 0x000001, "Wrong alignment on WeaponSynthe_C_SetVisibleInfomation");
static_assert(sizeof(WeaponSynthe_C_SetVisibleInfomation) == 0x000005, "Wrong size on WeaponSynthe_C_SetVisibleInfomation");
static_assert(offsetof(WeaponSynthe_C_SetVisibleInfomation, InVisible) == 0x000000, "Member 'WeaponSynthe_C_SetVisibleInfomation::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleInfomation, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthe_C_SetVisibleInfomation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleInfomation, Temp_byte_Variable) == 0x000002, "Member 'WeaponSynthe_C_SetVisibleInfomation::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleInfomation, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponSynthe_C_SetVisibleInfomation::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleInfomation, K2Node_Select_Default) == 0x000004, "Member 'WeaponSynthe_C_SetVisibleInfomation::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.SetVisibleLoading
// 0x0006 (0x0006 - 0x0000)
struct WeaponSynthe_C_SetVisibleLoading final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_SetVisibleLoading) == 0x000001, "Wrong alignment on WeaponSynthe_C_SetVisibleLoading");
static_assert(sizeof(WeaponSynthe_C_SetVisibleLoading) == 0x000006, "Wrong size on WeaponSynthe_C_SetVisibleLoading");
static_assert(offsetof(WeaponSynthe_C_SetVisibleLoading, InVisible) == 0x000000, "Member 'WeaponSynthe_C_SetVisibleLoading::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleLoading, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthe_C_SetVisibleLoading::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleLoading, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000002, "Member 'WeaponSynthe_C_SetVisibleLoading::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleLoading, Temp_byte_Variable) == 0x000003, "Member 'WeaponSynthe_C_SetVisibleLoading::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleLoading, Temp_byte_Variable_1) == 0x000004, "Member 'WeaponSynthe_C_SetVisibleLoading::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleLoading, K2Node_Select_Default) == 0x000005, "Member 'WeaponSynthe_C_SetVisibleLoading::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.SetVisibleSuccess
// 0x0005 (0x0005 - 0x0000)
struct WeaponSynthe_C_SetVisibleSuccess final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_SetVisibleSuccess) == 0x000001, "Wrong alignment on WeaponSynthe_C_SetVisibleSuccess");
static_assert(sizeof(WeaponSynthe_C_SetVisibleSuccess) == 0x000005, "Wrong size on WeaponSynthe_C_SetVisibleSuccess");
static_assert(offsetof(WeaponSynthe_C_SetVisibleSuccess, InVisible) == 0x000000, "Member 'WeaponSynthe_C_SetVisibleSuccess::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleSuccess, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthe_C_SetVisibleSuccess::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleSuccess, Temp_byte_Variable) == 0x000002, "Member 'WeaponSynthe_C_SetVisibleSuccess::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleSuccess, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponSynthe_C_SetVisibleSuccess::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleSuccess, K2Node_Select_Default) == 0x000004, "Member 'WeaponSynthe_C_SetVisibleSuccess::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.SetVisibleResult
// 0x0005 (0x0005 - 0x0000)
struct WeaponSynthe_C_SetVisibleResult final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_SetVisibleResult) == 0x000001, "Wrong alignment on WeaponSynthe_C_SetVisibleResult");
static_assert(sizeof(WeaponSynthe_C_SetVisibleResult) == 0x000005, "Wrong size on WeaponSynthe_C_SetVisibleResult");
static_assert(offsetof(WeaponSynthe_C_SetVisibleResult, InVisible) == 0x000000, "Member 'WeaponSynthe_C_SetVisibleResult::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleResult, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthe_C_SetVisibleResult::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleResult, Temp_byte_Variable) == 0x000002, "Member 'WeaponSynthe_C_SetVisibleResult::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleResult, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponSynthe_C_SetVisibleResult::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_SetVisibleResult, K2Node_Select_Default) == 0x000004, "Member 'WeaponSynthe_C_SetVisibleResult::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.OpenResult
// 0x0468 (0x0468 - 0x0000)
struct WeaponSynthe_C_OpenResult final
{
public:
	struct FOwnItemInfo                           TmpAfter;                                          // 0x0000(0x0118)(Edit, BlueprintVisible)
	struct FOwnItemInfo                           TmpBefore;                                         // 0x0118(0x0118)(Edit, BlueprintVisible)
	struct FOwnItemInfo                           CallFunc_GetAfterWeapon_ReturnValue;               // 0x0230(0x0118)(ConstParm)
	struct FOwnItemInfo                           CallFunc_GetSelectedWeapon_ReturnValue;            // 0x0348(0x0118)(ConstParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0460(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0464(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthe_C_OpenResult) == 0x000008, "Wrong alignment on WeaponSynthe_C_OpenResult");
static_assert(sizeof(WeaponSynthe_C_OpenResult) == 0x000468, "Wrong size on WeaponSynthe_C_OpenResult");
static_assert(offsetof(WeaponSynthe_C_OpenResult, TmpAfter) == 0x000000, "Member 'WeaponSynthe_C_OpenResult::TmpAfter' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_OpenResult, TmpBefore) == 0x000118, "Member 'WeaponSynthe_C_OpenResult::TmpBefore' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_OpenResult, CallFunc_GetAfterWeapon_ReturnValue) == 0x000230, "Member 'WeaponSynthe_C_OpenResult::CallFunc_GetAfterWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_OpenResult, CallFunc_GetSelectedWeapon_ReturnValue) == 0x000348, "Member 'WeaponSynthe_C_OpenResult::CallFunc_GetSelectedWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_OpenResult, CallFunc_Array_Length_ReturnValue) == 0x000460, "Member 'WeaponSynthe_C_OpenResult::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_OpenResult, CallFunc_Subtract_IntInt_ReturnValue) == 0x000464, "Member 'WeaponSynthe_C_OpenResult::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function WeaponSynthe.WeaponSynthe_C.IsActiveLiquidMemory
// 0x0078 (0x0078 - 0x0000)
struct WeaponSynthe_C_IsActiveLiquidMemory final
{
public:
	bool                                          bActive;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DAF[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DB0[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue; // 0x0018(0x0028)(NoDestructor)
	bool                                          CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_1; // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DB1[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_1; // 0x0048(0x0028)(NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthe_C_IsActiveLiquidMemory) == 0x000008, "Wrong alignment on WeaponSynthe_C_IsActiveLiquidMemory");
static_assert(sizeof(WeaponSynthe_C_IsActiveLiquidMemory) == 0x000078, "Wrong size on WeaponSynthe_C_IsActiveLiquidMemory");
static_assert(offsetof(WeaponSynthe_C_IsActiveLiquidMemory, bActive) == 0x000000, "Member 'WeaponSynthe_C_IsActiveLiquidMemory::bActive' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_IsActiveLiquidMemory, CallFunc_GetNetworkDataCache_IsValid) == 0x000001, "Member 'WeaponSynthe_C_IsActiveLiquidMemory::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_IsActiveLiquidMemory, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000008, "Member 'WeaponSynthe_C_IsActiveLiquidMemory::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_IsActiveLiquidMemory, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists) == 0x000010, "Member 'WeaponSynthe_C_IsActiveLiquidMemory::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_IsActiveLiquidMemory, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue) == 0x000018, "Member 'WeaponSynthe_C_IsActiveLiquidMemory::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_IsActiveLiquidMemory, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_1) == 0x000040, "Member 'WeaponSynthe_C_IsActiveLiquidMemory::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_IsActiveLiquidMemory, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_1) == 0x000048, "Member 'WeaponSynthe_C_IsActiveLiquidMemory::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthe_C_IsActiveLiquidMemory, CallFunc_BooleanOR_ReturnValue) == 0x000070, "Member 'WeaponSynthe_C_IsActiveLiquidMemory::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

