#pragma once

 

// Package: WeaponSelect

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WeaponSelect.WeaponSelect_C.WeaponSelectApply__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct WeaponSelect_C_WeaponSelectApply__DelegateSignature final
{
public:
	struct FOwnItemInfo                           ItemInfo;                                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponSelect_C_WeaponSelectApply__DelegateSignature) == 0x000008, "Wrong alignment on WeaponSelect_C_WeaponSelectApply__DelegateSignature");
static_assert(sizeof(WeaponSelect_C_WeaponSelectApply__DelegateSignature) == 0x000118, "Wrong size on WeaponSelect_C_WeaponSelectApply__DelegateSignature");
static_assert(offsetof(WeaponSelect_C_WeaponSelectApply__DelegateSignature, ItemInfo) == 0x000000, "Member 'WeaponSelect_C_WeaponSelectApply__DelegateSignature::ItemInfo' has a wrong offset!");

// Function WeaponSelect.WeaponSelect_C.ExecuteUbergraph_WeaponSelect
// 0x0248 (0x0248 - 0x0000)
struct WeaponSelect_C_ExecuteUbergraph_WeaponSelect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetSlotInfo_bHasValidAbility;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69BB[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0058(0x0028)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBPPtExchangable_ReturnValue;            // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69BC[0x6];                                     // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableUsedCheckDialog_ReturnValue;      // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69BD[0x5];                                     // 0x00AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_ComponentBoundEvent_SelectItem;             // 0x00B0(0x0118)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69BE[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01F0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0208(0x0018)()
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69BF[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0234(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect) == 0x000008, "Wrong alignment on WeaponSelect_C_ExecuteUbergraph_WeaponSelect");
static_assert(sizeof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect) == 0x000248, "Wrong size on WeaponSelect_C_ExecuteUbergraph_WeaponSelect");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, EntryPoint) == 0x000000, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, CallFunc_SetSlotInfo_bHasValidAbility) == 0x000004, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::CallFunc_SetSlotInfo_bHasValidAbility' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, K2Node_MakeStruct_SlateColor_2) == 0x000058, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, CallFunc_PlayAnimation_ReturnValue) == 0x000080, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, CallFunc_PlayAnimationForward_ReturnValue) == 0x000088, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, CallFunc_Create_ReturnValue) == 0x000090, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, CallFunc_IsBPPtExchangable_ReturnValue) == 0x000098, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::CallFunc_IsBPPtExchangable_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, CallFunc_GetConfigSaveManager_IsValid) == 0x000099, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, CallFunc_GetConfigSaveManager_ReturnValue) == 0x0000A0, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, K2Node_CustomEvent_Result) == 0x0000A8, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, CallFunc_IsEnableUsedCheckDialog_ReturnValue) == 0x0000A9, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::CallFunc_IsEnableUsedCheckDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000AA, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, K2Node_ComponentBoundEvent_SelectItem) == 0x0000B0, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::K2Node_ComponentBoundEvent_SelectItem' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, CallFunc_Not_PreBool_ReturnValue) == 0x0001C8, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, CallFunc_GetTextFromAsset_ReturnValue) == 0x0001D0, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0001E0, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, CallFunc_Conv_StringToText_ReturnValue) == 0x0001F0, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000208, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000220, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000228, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, CallFunc_PlaySE_ReturnValue) == 0x000230, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_ExecuteUbergraph_WeaponSelect, K2Node_CreateDelegate_OutputDelegate) == 0x000234, "Member 'WeaponSelect_C_ExecuteUbergraph_WeaponSelect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WeaponSelect.WeaponSelect_C.End
// 0x0001 (0x0001 - 0x0000)
struct WeaponSelect_C_End final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSelect_C_End) == 0x000001, "Wrong alignment on WeaponSelect_C_End");
static_assert(sizeof(WeaponSelect_C_End) == 0x000001, "Wrong size on WeaponSelect_C_End");
static_assert(offsetof(WeaponSelect_C_End, Result) == 0x000000, "Member 'WeaponSelect_C_End::Result' has a wrong offset!");

// Function WeaponSelect.WeaponSelect_C.BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct WeaponSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature final
{
public:
	struct FOwnItemInfo                           SelectItem;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature) == 0x000008, "Wrong alignment on WeaponSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature");
static_assert(sizeof(WeaponSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature) == 0x000118, "Wrong size on WeaponSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature");
static_assert(offsetof(WeaponSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature, SelectItem) == 0x000000, "Member 'WeaponSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature::SelectItem' has a wrong offset!");

// Function WeaponSelect.WeaponSelect_C.Initialize
// 0x0040 (0x0040 - 0x0000)
struct WeaponSelect_C_Initialize final
{
public:
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0000(0x0028)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(WeaponSelect_C_Initialize) == 0x000008, "Wrong alignment on WeaponSelect_C_Initialize");
static_assert(sizeof(WeaponSelect_C_Initialize) == 0x000040, "Wrong size on WeaponSelect_C_Initialize");
static_assert(offsetof(WeaponSelect_C_Initialize, K2Node_MakeStruct_SlateColor) == 0x000000, "Member 'WeaponSelect_C_Initialize::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_Initialize, CallFunc_PlayAnimationForward_ReturnValue) == 0x000028, "Member 'WeaponSelect_C_Initialize::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSelect_C_Initialize, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'WeaponSelect_C_Initialize::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WeaponSelect.WeaponSelect_C.Terminate
// 0x0001 (0x0001 - 0x0000)
struct WeaponSelect_C_Terminate final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSelect_C_Terminate) == 0x000001, "Wrong alignment on WeaponSelect_C_Terminate");
static_assert(sizeof(WeaponSelect_C_Terminate) == 0x000001, "Wrong size on WeaponSelect_C_Terminate");
static_assert(offsetof(WeaponSelect_C_Terminate, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WeaponSelect_C_Terminate::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

