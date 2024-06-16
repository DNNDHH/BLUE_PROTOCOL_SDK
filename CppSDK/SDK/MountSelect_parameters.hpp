#pragma once

 

// Package: MountSelect

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MountSelect.MountSelect_C.ImagineSelectApply__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct MountSelect_C_ImagineSelectApply__DelegateSignature final
{
public:
	struct FOwnItemInfo                           ItemInfo;                                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MountSelect_C_ImagineSelectApply__DelegateSignature) == 0x000008, "Wrong alignment on MountSelect_C_ImagineSelectApply__DelegateSignature");
static_assert(sizeof(MountSelect_C_ImagineSelectApply__DelegateSignature) == 0x000118, "Wrong size on MountSelect_C_ImagineSelectApply__DelegateSignature");
static_assert(offsetof(MountSelect_C_ImagineSelectApply__DelegateSignature, ItemInfo) == 0x000000, "Member 'MountSelect_C_ImagineSelectApply__DelegateSignature::ItemInfo' has a wrong offset!");

// Function MountSelect.MountSelect_C.ExecuteUbergraph_MountSelect
// 0x0250 (0x0250 - 0x0000)
struct MountSelect_C_ExecuteUbergraph_MountSelect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E4B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_ComponentBoundEvent_SelectItem;             // 0x0008(0x0118)()
	class FString                                 CallFunc_GetItemName_OutName;                      // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue;                  // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E4C[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0138(0x0018)()
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0150(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0168(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0190(0x0028)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBPPtExchangable_ReturnValue;            // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E4D[0x6];                                     // 0x01CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableUsedCheckDialog_ReturnValue;      // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E4E[0x1];                                     // 0x01DB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x01DC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E4F[0x3];                                     // 0x01ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0210(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0228(0x0018)()
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E50[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MountSelect_C_ExecuteUbergraph_MountSelect) == 0x000008, "Wrong alignment on MountSelect_C_ExecuteUbergraph_MountSelect");
static_assert(sizeof(MountSelect_C_ExecuteUbergraph_MountSelect) == 0x000250, "Wrong size on MountSelect_C_ExecuteUbergraph_MountSelect");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, EntryPoint) == 0x000000, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::EntryPoint' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, K2Node_ComponentBoundEvent_SelectItem) == 0x000008, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::K2Node_ComponentBoundEvent_SelectItem' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, CallFunc_GetItemName_OutName) == 0x000120, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::CallFunc_GetItemName_OutName' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, CallFunc_GetItemName_ReturnValue) == 0x000130, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::CallFunc_GetItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, CallFunc_Conv_StringToText_ReturnValue) == 0x000138, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, K2Node_CreateDelegate_OutputDelegate) == 0x000150, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, CallFunc_PlayAnimation_ReturnValue) == 0x000160, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, K2Node_MakeStruct_SlateColor) == 0x000168, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, K2Node_MakeStruct_SlateColor_1) == 0x000190, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, CallFunc_PlayAnimationForward_ReturnValue) == 0x0001B8, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, CallFunc_Create_ReturnValue) == 0x0001C0, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, CallFunc_IsBPPtExchangable_ReturnValue) == 0x0001C8, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::CallFunc_IsBPPtExchangable_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, CallFunc_GetConfigSaveManager_IsValid) == 0x0001C9, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, CallFunc_GetConfigSaveManager_ReturnValue) == 0x0001D0, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, K2Node_CustomEvent_Result) == 0x0001D8, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, CallFunc_IsEnableUsedCheckDialog_ReturnValue) == 0x0001D9, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::CallFunc_IsEnableUsedCheckDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001DA, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001DC, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, CallFunc_Not_PreBool_ReturnValue) == 0x0001EC, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, CallFunc_GetTextFromAsset_ReturnValue) == 0x0001F0, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000200, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000210, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000228, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000240, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(MountSelect_C_ExecuteUbergraph_MountSelect, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000248, "Member 'MountSelect_C_ExecuteUbergraph_MountSelect::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");

// Function MountSelect.MountSelect_C.End
// 0x0001 (0x0001 - 0x0000)
struct MountSelect_C_End final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MountSelect_C_End) == 0x000001, "Wrong alignment on MountSelect_C_End");
static_assert(sizeof(MountSelect_C_End) == 0x000001, "Wrong size on MountSelect_C_End");
static_assert(offsetof(MountSelect_C_End, Result) == 0x000000, "Member 'MountSelect_C_End::Result' has a wrong offset!");

// Function MountSelect.MountSelect_C.BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct MountSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature final
{
public:
	struct FOwnItemInfo                           SelectItem;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MountSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature) == 0x000008, "Wrong alignment on MountSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature");
static_assert(sizeof(MountSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature) == 0x000118, "Wrong size on MountSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature");
static_assert(offsetof(MountSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature, SelectItem) == 0x000000, "Member 'MountSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature::SelectItem' has a wrong offset!");

// Function MountSelect.MountSelect_C.Initialize
// 0x0008 (0x0008 - 0x0000)
struct MountSelect_C_Initialize final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MountSelect_C_Initialize) == 0x000008, "Wrong alignment on MountSelect_C_Initialize");
static_assert(sizeof(MountSelect_C_Initialize) == 0x000008, "Wrong size on MountSelect_C_Initialize");
static_assert(offsetof(MountSelect_C_Initialize, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'MountSelect_C_Initialize::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function MountSelect.MountSelect_C.Terminate
// 0x0001 (0x0001 - 0x0000)
struct MountSelect_C_Terminate final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MountSelect_C_Terminate) == 0x000001, "Wrong alignment on MountSelect_C_Terminate");
static_assert(sizeof(MountSelect_C_Terminate) == 0x000001, "Wrong size on MountSelect_C_Terminate");
static_assert(offsetof(MountSelect_C_Terminate, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'MountSelect_C_Terminate::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MountSelect.MountSelect_C.UpdateSelectBtn
// 0x0003 (0x0003 - 0x0000)
struct MountSelect_C_UpdateSelectBtn final
{
public:
	bool                                          CallFunc_IsStackBMax_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidOwnItem_ReturnValue;               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MountSelect_C_UpdateSelectBtn) == 0x000001, "Wrong alignment on MountSelect_C_UpdateSelectBtn");
static_assert(sizeof(MountSelect_C_UpdateSelectBtn) == 0x000003, "Wrong size on MountSelect_C_UpdateSelectBtn");
static_assert(offsetof(MountSelect_C_UpdateSelectBtn, CallFunc_IsStackBMax_ReturnValue) == 0x000000, "Member 'MountSelect_C_UpdateSelectBtn::CallFunc_IsStackBMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountSelect_C_UpdateSelectBtn, CallFunc_IsValidOwnItem_ReturnValue) == 0x000001, "Member 'MountSelect_C_UpdateSelectBtn::CallFunc_IsValidOwnItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountSelect_C_UpdateSelectBtn, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'MountSelect_C_UpdateSelectBtn::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

