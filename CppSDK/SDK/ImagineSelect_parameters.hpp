#pragma once

 

// Package: ImagineSelect

#include "Basic.hpp"

#include "Filter_Type_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ImagineSelect.ImagineSelect_C.ImagineSelectApply__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct ImagineSelect_C_ImagineSelectApply__DelegateSignature final
{
public:
	struct FOwnItemInfo                           ItemInfo;                                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ImagineSelect_C_ImagineSelectApply__DelegateSignature) == 0x000008, "Wrong alignment on ImagineSelect_C_ImagineSelectApply__DelegateSignature");
static_assert(sizeof(ImagineSelect_C_ImagineSelectApply__DelegateSignature) == 0x000118, "Wrong size on ImagineSelect_C_ImagineSelectApply__DelegateSignature");
static_assert(offsetof(ImagineSelect_C_ImagineSelectApply__DelegateSignature, ItemInfo) == 0x000000, "Member 'ImagineSelect_C_ImagineSelectApply__DelegateSignature::ItemInfo' has a wrong offset!");

// Function ImagineSelect.ImagineSelect_C.ExecuteUbergraph_ImagineSelect
// 0x0240 (0x0240 - 0x0000)
struct ImagineSelect_C_ExecuteUbergraph_ImagineSelect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4053[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0058(0x0028)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBPPtExchangable_ReturnValue;            // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4054[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableUsedCheckDialog_ReturnValue;      // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4055[0x5];                                     // 0x00A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_ComponentBoundEvent_SelectItem;             // 0x00A8(0x0118)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4056[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x01C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01E8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0200(0x0018)()
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4057[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0228(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0230(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect) == 0x000008, "Wrong alignment on ImagineSelect_C_ExecuteUbergraph_ImagineSelect");
static_assert(sizeof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect) == 0x000240, "Wrong size on ImagineSelect_C_ExecuteUbergraph_ImagineSelect");
static_assert(offsetof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect, EntryPoint) == 0x000000, "Member 'ImagineSelect_C_ExecuteUbergraph_ImagineSelect::EntryPoint' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'ImagineSelect_C_ExecuteUbergraph_ImagineSelect::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'ImagineSelect_C_ExecuteUbergraph_ImagineSelect::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect, K2Node_MakeStruct_SlateColor_2) == 0x000058, "Member 'ImagineSelect_C_ExecuteUbergraph_ImagineSelect::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect, CallFunc_PlayAnimation_ReturnValue) == 0x000080, "Member 'ImagineSelect_C_ExecuteUbergraph_ImagineSelect::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect, CallFunc_PlayAnimationForward_ReturnValue) == 0x000088, "Member 'ImagineSelect_C_ExecuteUbergraph_ImagineSelect::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect, CallFunc_IsBPPtExchangable_ReturnValue) == 0x000090, "Member 'ImagineSelect_C_ExecuteUbergraph_ImagineSelect::CallFunc_IsBPPtExchangable_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect, CallFunc_GetConfigSaveManager_IsValid) == 0x000091, "Member 'ImagineSelect_C_ExecuteUbergraph_ImagineSelect::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000098, "Member 'ImagineSelect_C_ExecuteUbergraph_ImagineSelect::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect, K2Node_CustomEvent_Result) == 0x0000A0, "Member 'ImagineSelect_C_ExecuteUbergraph_ImagineSelect::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect, CallFunc_IsEnableUsedCheckDialog_ReturnValue) == 0x0000A1, "Member 'ImagineSelect_C_ExecuteUbergraph_ImagineSelect::CallFunc_IsEnableUsedCheckDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000A2, "Member 'ImagineSelect_C_ExecuteUbergraph_ImagineSelect::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect, K2Node_ComponentBoundEvent_SelectItem) == 0x0000A8, "Member 'ImagineSelect_C_ExecuteUbergraph_ImagineSelect::K2Node_ComponentBoundEvent_SelectItem' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect, CallFunc_Not_PreBool_ReturnValue) == 0x0001C0, "Member 'ImagineSelect_C_ExecuteUbergraph_ImagineSelect::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect, CallFunc_GetTextFromAsset_ReturnValue) == 0x0001C8, "Member 'ImagineSelect_C_ExecuteUbergraph_ImagineSelect::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0001D8, "Member 'ImagineSelect_C_ExecuteUbergraph_ImagineSelect::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect, CallFunc_Conv_StringToText_ReturnValue) == 0x0001E8, "Member 'ImagineSelect_C_ExecuteUbergraph_ImagineSelect::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000200, "Member 'ImagineSelect_C_ExecuteUbergraph_ImagineSelect::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000218, "Member 'ImagineSelect_C_ExecuteUbergraph_ImagineSelect::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000220, "Member 'ImagineSelect_C_ExecuteUbergraph_ImagineSelect::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect, CallFunc_Create_ReturnValue) == 0x000228, "Member 'ImagineSelect_C_ExecuteUbergraph_ImagineSelect::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_ExecuteUbergraph_ImagineSelect, K2Node_CreateDelegate_OutputDelegate) == 0x000230, "Member 'ImagineSelect_C_ExecuteUbergraph_ImagineSelect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function ImagineSelect.ImagineSelect_C.BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct ImagineSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature final
{
public:
	struct FOwnItemInfo                           SelectItem;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ImagineSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature) == 0x000008, "Wrong alignment on ImagineSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature");
static_assert(sizeof(ImagineSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature) == 0x000118, "Wrong size on ImagineSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature");
static_assert(offsetof(ImagineSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature, SelectItem) == 0x000000, "Member 'ImagineSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature::SelectItem' has a wrong offset!");

// Function ImagineSelect.ImagineSelect_C.End
// 0x0001 (0x0001 - 0x0000)
struct ImagineSelect_C_End final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineSelect_C_End) == 0x000001, "Wrong alignment on ImagineSelect_C_End");
static_assert(sizeof(ImagineSelect_C_End) == 0x000001, "Wrong size on ImagineSelect_C_End");
static_assert(offsetof(ImagineSelect_C_End, Result) == 0x000000, "Member 'ImagineSelect_C_End::Result' has a wrong offset!");

// Function ImagineSelect.ImagineSelect_C.Initialize
// 0x0028 (0x0028 - 0x0000)
struct ImagineSelect_C_Initialize final
{
public:
	ESBImagineCategoryType                        Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_2;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_3;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4058[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_4;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBImagineCategoryType                        Temp_byte_Variable_5;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  K2Node_Select_Default;                             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               K2Node_Select_Default_1;                           // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineSelect_C_Initialize) == 0x000008, "Wrong alignment on ImagineSelect_C_Initialize");
static_assert(sizeof(ImagineSelect_C_Initialize) == 0x000028, "Wrong size on ImagineSelect_C_Initialize");
static_assert(offsetof(ImagineSelect_C_Initialize, Temp_byte_Variable) == 0x000000, "Member 'ImagineSelect_C_Initialize::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_Initialize, Temp_byte_Variable_1) == 0x000001, "Member 'ImagineSelect_C_Initialize::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_Initialize, Temp_byte_Variable_2) == 0x000002, "Member 'ImagineSelect_C_Initialize::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_Initialize, Temp_byte_Variable_3) == 0x000003, "Member 'ImagineSelect_C_Initialize::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_Initialize, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'ImagineSelect_C_Initialize::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_Initialize, CallFunc_PlayAnimationForward_ReturnValue) == 0x000018, "Member 'ImagineSelect_C_Initialize::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_Initialize, Temp_byte_Variable_4) == 0x000020, "Member 'ImagineSelect_C_Initialize::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_Initialize, Temp_byte_Variable_5) == 0x000021, "Member 'ImagineSelect_C_Initialize::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_Initialize, K2Node_Select_Default) == 0x000022, "Member 'ImagineSelect_C_Initialize::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ImagineSelect_C_Initialize, K2Node_Select_Default_1) == 0x000023, "Member 'ImagineSelect_C_Initialize::K2Node_Select_Default_1' has a wrong offset!");

// Function ImagineSelect.ImagineSelect_C.Terminate
// 0x0001 (0x0001 - 0x0000)
struct ImagineSelect_C_Terminate final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineSelect_C_Terminate) == 0x000001, "Wrong alignment on ImagineSelect_C_Terminate");
static_assert(sizeof(ImagineSelect_C_Terminate) == 0x000001, "Wrong size on ImagineSelect_C_Terminate");
static_assert(offsetof(ImagineSelect_C_Terminate, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'ImagineSelect_C_Terminate::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ImagineSelect.ImagineSelect_C.ApplyImagineType
// 0x0118 (0x0118 - 0x0000)
struct ImagineSelect_C_ApplyImagineType final
{
public:
	struct FOwnItemInfo                           ItemData;                                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ImagineSelect_C_ApplyImagineType) == 0x000008, "Wrong alignment on ImagineSelect_C_ApplyImagineType");
static_assert(sizeof(ImagineSelect_C_ApplyImagineType) == 0x000118, "Wrong size on ImagineSelect_C_ApplyImagineType");
static_assert(offsetof(ImagineSelect_C_ApplyImagineType, ItemData) == 0x000000, "Member 'ImagineSelect_C_ApplyImagineType::ItemData' has a wrong offset!");

}

