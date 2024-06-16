#pragma once

 

// Package: SelectMaterial

#include "Basic.hpp"

#include "Filter_Type_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "SortTypeCategory_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function SelectMaterial.SelectMaterial_C.OnSelected__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct SelectMaterial_C_OnSelected__DelegateSignature final
{
public:
	TArray<struct FOwnItemInfo>                   Uids;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          UseTicket;                                         // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E90[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBUseTicket                     StackBTicket;                                      // 0x0014(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(SelectMaterial_C_OnSelected__DelegateSignature) == 0x000008, "Wrong alignment on SelectMaterial_C_OnSelected__DelegateSignature");
static_assert(sizeof(SelectMaterial_C_OnSelected__DelegateSignature) == 0x000020, "Wrong size on SelectMaterial_C_OnSelected__DelegateSignature");
static_assert(offsetof(SelectMaterial_C_OnSelected__DelegateSignature, Uids) == 0x000000, "Member 'SelectMaterial_C_OnSelected__DelegateSignature::Uids' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_OnSelected__DelegateSignature, UseTicket) == 0x000010, "Member 'SelectMaterial_C_OnSelected__DelegateSignature::UseTicket' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_OnSelected__DelegateSignature, StackBTicket) == 0x000014, "Member 'SelectMaterial_C_OnSelected__DelegateSignature::StackBTicket' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.ExecuteUbergraph_SelectMaterial
// 0x0598 (0x0598 - 0x0000)
struct SelectMaterial_C_ExecuteUbergraph_SelectMaterial final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_ContainsStackBMaterials_ReturnValue;      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E91[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNeedMoreMaterial_ReturnValue;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result_3;                       // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNeedMoreMaterial_ReturnValue_1;         // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E92[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0050(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0078(0x0028)()
	TArray<struct FFilterGroup>                   K2Node_ComponentBoundEvent_Filters;                // 0x00A0(0x0010)(ReferenceParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x00B0(0x0028)()
	struct FOwnItemInfo                           K2Node_ComponentBoundEvent_SelectItem_2;           // 0x00D8(0x0118)()
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result_2;                       // 0x01F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x01F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E93[0x2];                                     // 0x01F6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_ComponentBoundEvent_SelectItem_1;           // 0x01F8(0x0118)()
	bool                                          CallFunc_HasMaterialStorage_bOutExist;             // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E94[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_ComponentBoundEvent_SelectItem;             // 0x0318(0x0118)()
	bool                                          CallFunc_HasMaterialStorage_bOutExist_1;           // 0x0430(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0431(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ContainsBattleSetItem_ReturnValue;        // 0x0432(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result_1;                       // 0x0433(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0434(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0435(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E95[0x2];                                     // 0x0436(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0438(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0448(0x0018)()
	ESBItemSortType                               K2Node_ComponentBoundEvent_SortType;               // 0x0460(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E96[0x7];                                     // 0x0461(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   CallFunc_GenerateUIDs_ReturnValue;                 // 0x0468(0x0010)(ReferenceParm)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0478(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_1;            // 0x0480(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0490(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x04A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x04A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x04A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E97[0x6];                                     // 0x04AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x04B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x04C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E98[0x7];                                     // 0x04C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x04C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x04D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E99[0x7];                                     // 0x04D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x04E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_3;            // 0x04F0(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0500(0x0018)()
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E9A[0x7];                                     // 0x0519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0520(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0530(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0531(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanXOR_ReturnValue;                   // 0x0532(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E9B[0x5];                                     // 0x0533(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0538(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0548(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E9C[0x7];                                     // 0x0549(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0550(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0560(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_1;                     // 0x0570(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x0578(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_PageCurrent;            // 0x0588(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E9D[0x4];                                     // 0x058C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_2;                     // 0x0590(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial) == 0x000008, "Wrong alignment on SelectMaterial_C_ExecuteUbergraph_SelectMaterial");
static_assert(sizeof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial) == 0x000598, "Wrong size on SelectMaterial_C_ExecuteUbergraph_SelectMaterial");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, EntryPoint) == 0x000000, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::EntryPoint' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_ContainsStackBMaterials_ReturnValue) == 0x000014, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_ContainsStackBMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_Create_ReturnValue) == 0x000018, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_IsNeedMoreMaterial_ReturnValue) == 0x000020, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_IsNeedMoreMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, K2Node_CustomEvent_Result_3) == 0x000021, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::K2Node_CustomEvent_Result_3' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000022, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_IsNeedMoreMaterial_ReturnValue_1) == 0x000023, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_IsNeedMoreMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_GetTextFromAsset_ReturnValue) == 0x000028, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, K2Node_MakeStruct_SlateColor) == 0x000050, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, K2Node_MakeStruct_SlateColor_1) == 0x000078, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, K2Node_ComponentBoundEvent_Filters) == 0x0000A0, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::K2Node_ComponentBoundEvent_Filters' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, K2Node_MakeStruct_SlateColor_2) == 0x0000B0, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, K2Node_ComponentBoundEvent_SelectItem_2) == 0x0000D8, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::K2Node_ComponentBoundEvent_SelectItem_2' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_PlaySE_ReturnValue) == 0x0001F0, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, K2Node_CustomEvent_Result_2) == 0x0001F4, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::K2Node_CustomEvent_Result_2' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0001F5, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, K2Node_ComponentBoundEvent_SelectItem_1) == 0x0001F8, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::K2Node_ComponentBoundEvent_SelectItem_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_HasMaterialStorage_bOutExist) == 0x000310, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_HasMaterialStorage_bOutExist' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, K2Node_ComponentBoundEvent_SelectItem) == 0x000318, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::K2Node_ComponentBoundEvent_SelectItem' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_HasMaterialStorage_bOutExist_1) == 0x000430, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_HasMaterialStorage_bOutExist_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, K2Node_ComponentBoundEvent_bIsChecked) == 0x000431, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_ContainsBattleSetItem_ReturnValue) == 0x000432, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_ContainsBattleSetItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, K2Node_CustomEvent_Result_1) == 0x000433, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000434, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_IsChecked_ReturnValue) == 0x000435, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_IsChecked_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000438, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000448, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, K2Node_ComponentBoundEvent_SortType) == 0x000460, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::K2Node_ComponentBoundEvent_SortType' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_GenerateUIDs_ReturnValue) == 0x000468, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_GenerateUIDs_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_PlayAnimationForward_ReturnValue) == 0x000478, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, K2Node_CreateDelegate_OutputDelegate_1) == 0x000480, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, K2Node_CreateDelegate_OutputDelegate_2) == 0x000490, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x0004A0, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, Temp_bool_Variable) == 0x0004A8, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, K2Node_CustomEvent_Result) == 0x0004A9, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0004B0, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0004C0, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_Concat_StrStr_ReturnValue) == 0x0004C8, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, Temp_bool_Variable_1) == 0x0004D8, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0004E0, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, K2Node_CreateDelegate_OutputDelegate_3) == 0x0004F0, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000500, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_IsEmpty_ReturnValue) == 0x000518, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000520, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_IsEmpty_ReturnValue_1) == 0x000530, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_Not_PreBool_ReturnValue) == 0x000531, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_BooleanXOR_ReturnValue) == 0x000532, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_BooleanXOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000538, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_BooleanAND_ReturnValue) == 0x000548, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000550, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, K2Node_Select_Default) == 0x000560, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_Create_ReturnValue_1) == 0x000570, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, K2Node_Select_Default_1) == 0x000578, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, K2Node_ComponentBoundEvent_PageCurrent) == 0x000588, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::K2Node_ComponentBoundEvent_PageCurrent' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_ExecuteUbergraph_SelectMaterial, CallFunc_Create_ReturnValue_2) == 0x000590, "Member 'SelectMaterial_C_ExecuteUbergraph_SelectMaterial::CallFunc_Create_ReturnValue_2' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_StoragePager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct SelectMaterial_C_BndEvt__SelectMaterial_StoragePager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature final
{
public:
	int32                                         PageCurrent;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectMaterial_C_BndEvt__SelectMaterial_StoragePager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature) == 0x000004, "Wrong alignment on SelectMaterial_C_BndEvt__SelectMaterial_StoragePager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature");
static_assert(sizeof(SelectMaterial_C_BndEvt__SelectMaterial_StoragePager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature) == 0x000004, "Wrong size on SelectMaterial_C_BndEvt__SelectMaterial_StoragePager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature");
static_assert(offsetof(SelectMaterial_C_BndEvt__SelectMaterial_StoragePager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature, PageCurrent) == 0x000000, "Member 'SelectMaterial_C_BndEvt__SelectMaterial_StoragePager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature::PageCurrent' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.OnCloseDialog
// 0x0001 (0x0001 - 0x0000)
struct SelectMaterial_C_OnCloseDialog final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectMaterial_C_OnCloseDialog) == 0x000001, "Wrong alignment on SelectMaterial_C_OnCloseDialog");
static_assert(sizeof(SelectMaterial_C_OnCloseDialog) == 0x000001, "Wrong size on SelectMaterial_C_OnCloseDialog");
static_assert(offsetof(SelectMaterial_C_OnCloseDialog, Result) == 0x000000, "Member 'SelectMaterial_C_OnCloseDialog::Result' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.OnEndBattleContains
// 0x0001 (0x0001 - 0x0000)
struct SelectMaterial_C_OnEndBattleContains final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectMaterial_C_OnEndBattleContains) == 0x000001, "Wrong alignment on SelectMaterial_C_OnEndBattleContains");
static_assert(sizeof(SelectMaterial_C_OnEndBattleContains) == 0x000001, "Wrong size on SelectMaterial_C_OnEndBattleContains");
static_assert(offsetof(SelectMaterial_C_OnEndBattleContains, Result) == 0x000000, "Member 'SelectMaterial_C_OnEndBattleContains::Result' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_BagGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct SelectMaterial_C_BndEvt__SelectMaterial_BagGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature final
{
public:
	struct FOwnItemInfo                           SelectItem;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(SelectMaterial_C_BndEvt__SelectMaterial_BagGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature) == 0x000008, "Wrong alignment on SelectMaterial_C_BndEvt__SelectMaterial_BagGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature");
static_assert(sizeof(SelectMaterial_C_BndEvt__SelectMaterial_BagGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature) == 0x000118, "Wrong size on SelectMaterial_C_BndEvt__SelectMaterial_BagGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature");
static_assert(offsetof(SelectMaterial_C_BndEvt__SelectMaterial_BagGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature, SelectItem) == 0x000000, "Member 'SelectMaterial_C_BndEvt__SelectMaterial_BagGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature::SelectItem' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_StorageGrid_K2Node_ComponentBoundEvent_1_SelectedItem__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct SelectMaterial_C_BndEvt__SelectMaterial_StorageGrid_K2Node_ComponentBoundEvent_1_SelectedItem__DelegateSignature final
{
public:
	struct FOwnItemInfo                           SelectItem;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(SelectMaterial_C_BndEvt__SelectMaterial_StorageGrid_K2Node_ComponentBoundEvent_1_SelectedItem__DelegateSignature) == 0x000008, "Wrong alignment on SelectMaterial_C_BndEvt__SelectMaterial_StorageGrid_K2Node_ComponentBoundEvent_1_SelectedItem__DelegateSignature");
static_assert(sizeof(SelectMaterial_C_BndEvt__SelectMaterial_StorageGrid_K2Node_ComponentBoundEvent_1_SelectedItem__DelegateSignature) == 0x000118, "Wrong size on SelectMaterial_C_BndEvt__SelectMaterial_StorageGrid_K2Node_ComponentBoundEvent_1_SelectedItem__DelegateSignature");
static_assert(offsetof(SelectMaterial_C_BndEvt__SelectMaterial_StorageGrid_K2Node_ComponentBoundEvent_1_SelectedItem__DelegateSignature, SelectItem) == 0x000000, "Member 'SelectMaterial_C_BndEvt__SelectMaterial_StorageGrid_K2Node_ComponentBoundEvent_1_SelectedItem__DelegateSignature::SelectItem' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.OnSectedLockedItems
// 0x0001 (0x0001 - 0x0000)
struct SelectMaterial_C_OnSectedLockedItems final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectMaterial_C_OnSectedLockedItems) == 0x000001, "Wrong alignment on SelectMaterial_C_OnSectedLockedItems");
static_assert(sizeof(SelectMaterial_C_OnSectedLockedItems) == 0x000001, "Wrong size on SelectMaterial_C_OnSectedLockedItems");
static_assert(offsetof(SelectMaterial_C_OnSectedLockedItems, Result) == 0x000000, "Member 'SelectMaterial_C_OnSectedLockedItems::Result' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_MaterialGrid_K2Node_ComponentBoundEvent_2_SelectedItem__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct SelectMaterial_C_BndEvt__SelectMaterial_MaterialGrid_K2Node_ComponentBoundEvent_2_SelectedItem__DelegateSignature final
{
public:
	struct FOwnItemInfo                           SelectItem;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(SelectMaterial_C_BndEvt__SelectMaterial_MaterialGrid_K2Node_ComponentBoundEvent_2_SelectedItem__DelegateSignature) == 0x000008, "Wrong alignment on SelectMaterial_C_BndEvt__SelectMaterial_MaterialGrid_K2Node_ComponentBoundEvent_2_SelectedItem__DelegateSignature");
static_assert(sizeof(SelectMaterial_C_BndEvt__SelectMaterial_MaterialGrid_K2Node_ComponentBoundEvent_2_SelectedItem__DelegateSignature) == 0x000118, "Wrong size on SelectMaterial_C_BndEvt__SelectMaterial_MaterialGrid_K2Node_ComponentBoundEvent_2_SelectedItem__DelegateSignature");
static_assert(offsetof(SelectMaterial_C_BndEvt__SelectMaterial_MaterialGrid_K2Node_ComponentBoundEvent_2_SelectedItem__DelegateSignature, SelectItem) == 0x000000, "Member 'SelectMaterial_C_BndEvt__SelectMaterial_MaterialGrid_K2Node_ComponentBoundEvent_2_SelectedItem__DelegateSignature::SelectItem' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_StorageFilter_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct SelectMaterial_C_BndEvt__SelectMaterial_StorageFilter_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature final
{
public:
	TArray<struct FFilterGroup>                   Filters;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(SelectMaterial_C_BndEvt__SelectMaterial_StorageFilter_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature) == 0x000008, "Wrong alignment on SelectMaterial_C_BndEvt__SelectMaterial_StorageFilter_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature");
static_assert(sizeof(SelectMaterial_C_BndEvt__SelectMaterial_StorageFilter_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature) == 0x000010, "Wrong size on SelectMaterial_C_BndEvt__SelectMaterial_StorageFilter_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature");
static_assert(offsetof(SelectMaterial_C_BndEvt__SelectMaterial_StorageFilter_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature, Filters) == 0x000000, "Member 'SelectMaterial_C_BndEvt__SelectMaterial_StorageFilter_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature::Filters' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.OnEndDialog
// 0x0001 (0x0001 - 0x0000)
struct SelectMaterial_C_OnEndDialog final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectMaterial_C_OnEndDialog) == 0x000001, "Wrong alignment on SelectMaterial_C_OnEndDialog");
static_assert(sizeof(SelectMaterial_C_OnEndDialog) == 0x000001, "Wrong size on SelectMaterial_C_OnEndDialog");
static_assert(offsetof(SelectMaterial_C_OnEndDialog, Result) == 0x000000, "Member 'SelectMaterial_C_OnEndDialog::Result' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_CB_MaterialTicketUse_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct SelectMaterial_C_BndEvt__SelectMaterial_CB_MaterialTicketUse_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SelectMaterial_C_BndEvt__SelectMaterial_CB_MaterialTicketUse_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on SelectMaterial_C_BndEvt__SelectMaterial_CB_MaterialTicketUse_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(SelectMaterial_C_BndEvt__SelectMaterial_CB_MaterialTicketUse_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on SelectMaterial_C_BndEvt__SelectMaterial_CB_MaterialTicketUse_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(SelectMaterial_C_BndEvt__SelectMaterial_CB_MaterialTicketUse_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'SelectMaterial_C_BndEvt__SelectMaterial_CB_MaterialTicketUse_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_StorageSort_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct SelectMaterial_C_BndEvt__SelectMaterial_StorageSort_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature final
{
public:
	ESBItemSortType                               SortType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectMaterial_C_BndEvt__SelectMaterial_StorageSort_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature) == 0x000001, "Wrong alignment on SelectMaterial_C_BndEvt__SelectMaterial_StorageSort_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature");
static_assert(sizeof(SelectMaterial_C_BndEvt__SelectMaterial_StorageSort_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature) == 0x000001, "Wrong size on SelectMaterial_C_BndEvt__SelectMaterial_StorageSort_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature");
static_assert(offsetof(SelectMaterial_C_BndEvt__SelectMaterial_StorageSort_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature, SortType) == 0x000000, "Member 'SelectMaterial_C_BndEvt__SelectMaterial_StorageSort_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature::SortType' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.Initialize
// 0x01E8 (0x01E8 - 0x0000)
struct SelectMaterial_C_Initialize final
{
public:
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable;                                // 0x0008(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_1;                              // 0x0009(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable_2;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_3;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_4;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_5;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_6;                              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_7;                              // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_8;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_9;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_10;                             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable_11;                             // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESortTypeCategory                             Temp_byte_Variable_12;                             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESortTypeCategory                             Temp_byte_Variable_13;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESortTypeCategory                             Temp_byte_Variable_14;                             // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESortTypeCategory                             Temp_byte_Variable_15;                             // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESortTypeCategory                             Temp_byte_Variable_16;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESortTypeCategory                             Temp_byte_Variable_17;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESortTypeCategory                             Temp_byte_Variable_18;                             // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESortTypeCategory                             Temp_byte_Variable_19;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable_20;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_21;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_22;                             // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_23;                             // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_24;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_25;                             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_26;                             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_27;                             // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_28;                             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E9E[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_29;                             // 0x002C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_30;                             // 0x002D(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_31;                             // 0x002E(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_Array_Get_Item;                           // 0x0038(0x0118)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_32;                             // 0x0154(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_33;                             // 0x0155(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_34;                             // 0x0156(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable_35;                             // 0x0157(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_isInventoryItemLocked_OutRequiredCnt;     // 0x015A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isInventoryItemLocked_ReturnValue;        // 0x015B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isStorageItemLocked_OutRequiredCnt;       // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isStorageItemLocked_ReturnValue;          // 0x015D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x015E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E9F[0x1];                                     // 0x015F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EA0[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTemporallyStorage*                   CallFunc_CreateEmptyTemporallyStorage_ReturnValue; // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSortFilterSaveType                         K2Node_Select_Default;                             // 0x0171(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_GetSortType_ReturnValue;                  // 0x0172(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               K2Node_Select_Default_1;                           // 0x0173(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x017A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EA1[0x1];                                     // 0x017B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStackBMasterData                    CallFunc_FindStackBMasterData_ReturnValue;         // 0x0180(0x0030)()
	ESBSortFilterSaveType                         K2Node_Select_Default_3;                           // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESortTypeCategory                             K2Node_Select_Default_4;                           // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x01B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EA2[0x5];                                     // 0x01B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPageMax_MaxPage;                       // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EA3[0x4];                                     // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue;         // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue_1;       // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectMaterial_C_Initialize) == 0x000008, "Wrong alignment on SelectMaterial_C_Initialize");
static_assert(sizeof(SelectMaterial_C_Initialize) == 0x0001E8, "Wrong size on SelectMaterial_C_Initialize");
static_assert(offsetof(SelectMaterial_C_Initialize, MasterDataManager) == 0x000000, "Member 'SelectMaterial_C_Initialize::MasterDataManager' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable) == 0x000008, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_1) == 0x000009, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_2) == 0x00000A, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_3) == 0x00000B, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_4) == 0x00000C, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_5) == 0x00000D, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_6) == 0x00000E, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_7) == 0x00000F, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_8) == 0x000010, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_9) == 0x000011, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_10) == 0x000012, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_11) == 0x000013, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_12) == 0x000014, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_13) == 0x000015, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_14) == 0x000016, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_15) == 0x000017, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_16) == 0x000018, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_16' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_17) == 0x000019, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_17' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_18) == 0x00001A, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_18' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_19) == 0x00001B, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_19' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_20) == 0x00001C, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_20' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_21) == 0x00001D, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_21' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_22) == 0x00001E, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_22' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_23) == 0x00001F, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_23' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_24) == 0x000020, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_24' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_25) == 0x000021, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_25' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_26) == 0x000022, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_26' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_27) == 0x000023, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_27' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_28) == 0x000024, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_28' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_int_Array_Index_Variable) == 0x000028, "Member 'SelectMaterial_C_Initialize::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_29) == 0x00002C, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_29' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_30) == 0x00002D, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_30' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_31) == 0x00002E, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_31' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_GetConfigSaveManager_IsValid) == 0x00002F, "Member 'SelectMaterial_C_Initialize::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000030, "Member 'SelectMaterial_C_Initialize::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_Array_Get_Item) == 0x000038, "Member 'SelectMaterial_C_Initialize::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_Array_Length_ReturnValue) == 0x000150, "Member 'SelectMaterial_C_Initialize::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_32) == 0x000154, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_32' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_33) == 0x000155, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_33' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_34) == 0x000156, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_34' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_byte_Variable_35) == 0x000157, "Member 'SelectMaterial_C_Initialize::Temp_byte_Variable_35' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_MakeLiteralByte_ReturnValue) == 0x000158, "Member 'SelectMaterial_C_Initialize::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000159, "Member 'SelectMaterial_C_Initialize::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_isInventoryItemLocked_OutRequiredCnt) == 0x00015A, "Member 'SelectMaterial_C_Initialize::CallFunc_isInventoryItemLocked_OutRequiredCnt' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_isInventoryItemLocked_ReturnValue) == 0x00015B, "Member 'SelectMaterial_C_Initialize::CallFunc_isInventoryItemLocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_isStorageItemLocked_OutRequiredCnt) == 0x00015C, "Member 'SelectMaterial_C_Initialize::CallFunc_isStorageItemLocked_OutRequiredCnt' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_isStorageItemLocked_ReturnValue) == 0x00015D, "Member 'SelectMaterial_C_Initialize::CallFunc_isStorageItemLocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_BooleanOR_ReturnValue) == 0x00015E, "Member 'SelectMaterial_C_Initialize::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_Max_ReturnValue) == 0x000160, "Member 'SelectMaterial_C_Initialize::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_CreateEmptyTemporallyStorage_ReturnValue) == 0x000168, "Member 'SelectMaterial_C_Initialize::CallFunc_CreateEmptyTemporallyStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000170, "Member 'SelectMaterial_C_Initialize::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, K2Node_Select_Default) == 0x000171, "Member 'SelectMaterial_C_Initialize::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_GetSortType_ReturnValue) == 0x000172, "Member 'SelectMaterial_C_Initialize::CallFunc_GetSortType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, K2Node_Select_Default_1) == 0x000173, "Member 'SelectMaterial_C_Initialize::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_int_Loop_Counter_Variable) == 0x000174, "Member 'SelectMaterial_C_Initialize::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, Temp_bool_Variable) == 0x000178, "Member 'SelectMaterial_C_Initialize::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_Less_IntInt_ReturnValue) == 0x000179, "Member 'SelectMaterial_C_Initialize::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, K2Node_Select_Default_2) == 0x00017A, "Member 'SelectMaterial_C_Initialize::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_Add_IntInt_ReturnValue) == 0x00017C, "Member 'SelectMaterial_C_Initialize::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_FindStackBMasterData_ReturnValue) == 0x000180, "Member 'SelectMaterial_C_Initialize::CallFunc_FindStackBMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, K2Node_Select_Default_3) == 0x0001B0, "Member 'SelectMaterial_C_Initialize::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, K2Node_Select_Default_4) == 0x0001B1, "Member 'SelectMaterial_C_Initialize::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_GetMasterDataManager_IsValid) == 0x0001B2, "Member 'SelectMaterial_C_Initialize::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_GetMasterDataManager_ReturnValue) == 0x0001B8, "Member 'SelectMaterial_C_Initialize::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_GetPageMax_MaxPage) == 0x0001C0, "Member 'SelectMaterial_C_Initialize::CallFunc_GetPageMax_MaxPage' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_GetCharacterStorage_ReturnValue) == 0x0001C8, "Member 'SelectMaterial_C_Initialize::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_GetTemporallyStorage_ReturnValue) == 0x0001D0, "Member 'SelectMaterial_C_Initialize::CallFunc_GetTemporallyStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_GetEquipmentBag_ReturnValue) == 0x0001D8, "Member 'SelectMaterial_C_Initialize::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Initialize, CallFunc_GetTemporallyStorage_ReturnValue_1) == 0x0001E0, "Member 'SelectMaterial_C_Initialize::CallFunc_GetTemporallyStorage_ReturnValue_1' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.UpdateMaterialView
// 0x0001 (0x0001 - 0x0000)
struct SelectMaterial_C_UpdateMaterialView final
{
public:
	bool                                          CallFunc_IsMaterialFull_IsOk;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SelectMaterial_C_UpdateMaterialView) == 0x000001, "Wrong alignment on SelectMaterial_C_UpdateMaterialView");
static_assert(sizeof(SelectMaterial_C_UpdateMaterialView) == 0x000001, "Wrong size on SelectMaterial_C_UpdateMaterialView");
static_assert(offsetof(SelectMaterial_C_UpdateMaterialView, CallFunc_IsMaterialFull_IsOk) == 0x000000, "Member 'SelectMaterial_C_UpdateMaterialView::CallFunc_IsMaterialFull_IsOk' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.HasMaterialStorage
// 0x0238 (0x0238 - 0x0000)
struct SelectMaterial_C_HasMaterialStorage final
{
public:
	struct FOwnItemInfo                           ItemInfo;                                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bOutExist;                                         // 0x0118(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EA4[0x6];                                     // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0120(0x0118)(ConstParm)
};
static_assert(alignof(SelectMaterial_C_HasMaterialStorage) == 0x000008, "Wrong alignment on SelectMaterial_C_HasMaterialStorage");
static_assert(sizeof(SelectMaterial_C_HasMaterialStorage) == 0x000238, "Wrong size on SelectMaterial_C_HasMaterialStorage");
static_assert(offsetof(SelectMaterial_C_HasMaterialStorage, ItemInfo) == 0x000000, "Member 'SelectMaterial_C_HasMaterialStorage::ItemInfo' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_HasMaterialStorage, bOutExist) == 0x000118, "Member 'SelectMaterial_C_HasMaterialStorage::bOutExist' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_HasMaterialStorage, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000119, "Member 'SelectMaterial_C_HasMaterialStorage::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_HasMaterialStorage, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000120, "Member 'SelectMaterial_C_HasMaterialStorage::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.RemoveMaterial
// 0x0120 (0x0120 - 0x0000)
struct SelectMaterial_C_RemoveMaterial final
{
public:
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0000(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          CallFunc_SubItemByUniqueId_ReturnValue;            // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SelectMaterial_C_RemoveMaterial) == 0x000008, "Wrong alignment on SelectMaterial_C_RemoveMaterial");
static_assert(sizeof(SelectMaterial_C_RemoveMaterial) == 0x000120, "Wrong size on SelectMaterial_C_RemoveMaterial");
static_assert(offsetof(SelectMaterial_C_RemoveMaterial, OwnItemInfo) == 0x000000, "Member 'SelectMaterial_C_RemoveMaterial::OwnItemInfo' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_RemoveMaterial, CallFunc_SubItemByUniqueId_ReturnValue) == 0x000118, "Member 'SelectMaterial_C_RemoveMaterial::CallFunc_SubItemByUniqueId_ReturnValue' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.TextInitialize
// 0x02E0 (0x02E0 - 0x0000)
struct SelectMaterial_C_TextInitialize final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EA5[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0058(0x0028)()
	bool                                          CallFunc_IsMoneyAmount_isAmount;                   // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EA6[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0088(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_4;                    // 0x00B0(0x0028)()
	bool                                          Temp_bool_Variable_1;                              // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EA7[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_5;                    // 0x00E0(0x0028)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EA8[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0120(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0148(0x0018)()
	bool                                          Temp_bool_Variable_3;                              // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EA9[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_6;                    // 0x0168(0x0028)()
	int32                                         CallFunc_CalclateRewardBoostSupportItemNum_CalculatedAmount; // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0195(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EAA[0x2];                                     // 0x0196(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0198(0x0018)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x01B0(0x0028)()
	int32                                         CallFunc_GetAllStoragesAmount_ReturnValue;         // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x01DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EAB[0x3];                                     // 0x01DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x01E0(0x0018)()
	struct FSlateColor                            K2Node_Select_Default_1;                           // 0x01F8(0x0028)()
	class FString                                 CallFunc_GetNameText_ReturnValue;                  // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0230(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0248(0x0018)()
	int32                                         CallFunc_CalculateLiquidMemoryMoneyDiscount_CalclatedMoney; // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalculateRewardBoostMoney_CalculatedMoney; // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EAC[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0278(0x0018)()
	struct FSlateColor                            K2Node_Select_Default_2;                           // 0x0290(0x0028)()
	struct FSlateColor                            K2Node_Select_Default_3;                           // 0x02B8(0x0028)()
};
static_assert(alignof(SelectMaterial_C_TextInitialize) == 0x000008, "Wrong alignment on SelectMaterial_C_TextInitialize");
static_assert(sizeof(SelectMaterial_C_TextInitialize) == 0x0002E0, "Wrong size on SelectMaterial_C_TextInitialize");
static_assert(offsetof(SelectMaterial_C_TextInitialize, Temp_bool_Variable) == 0x000000, "Member 'SelectMaterial_C_TextInitialize::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'SelectMaterial_C_TextInitialize::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'SelectMaterial_C_TextInitialize::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, K2Node_MakeStruct_SlateColor_2) == 0x000058, "Member 'SelectMaterial_C_TextInitialize::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, CallFunc_IsMoneyAmount_isAmount) == 0x000080, "Member 'SelectMaterial_C_TextInitialize::CallFunc_IsMoneyAmount_isAmount' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, K2Node_MakeStruct_SlateColor_3) == 0x000088, "Member 'SelectMaterial_C_TextInitialize::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, K2Node_MakeStruct_SlateColor_4) == 0x0000B0, "Member 'SelectMaterial_C_TextInitialize::K2Node_MakeStruct_SlateColor_4' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, Temp_bool_Variable_1) == 0x0000D8, "Member 'SelectMaterial_C_TextInitialize::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, K2Node_MakeStruct_SlateColor_5) == 0x0000E0, "Member 'SelectMaterial_C_TextInitialize::K2Node_MakeStruct_SlateColor_5' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, CallFunc_GetTextFromAsset_ReturnValue) == 0x000108, "Member 'SelectMaterial_C_TextInitialize::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, Temp_bool_Variable_2) == 0x000118, "Member 'SelectMaterial_C_TextInitialize::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, CallFunc_Conv_StringToText_ReturnValue) == 0x000120, "Member 'SelectMaterial_C_TextInitialize::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000138, "Member 'SelectMaterial_C_TextInitialize::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000148, "Member 'SelectMaterial_C_TextInitialize::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, Temp_bool_Variable_3) == 0x000160, "Member 'SelectMaterial_C_TextInitialize::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, K2Node_MakeStruct_SlateColor_6) == 0x000168, "Member 'SelectMaterial_C_TextInitialize::K2Node_MakeStruct_SlateColor_6' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, CallFunc_CalclateRewardBoostSupportItemNum_CalculatedAmount) == 0x000190, "Member 'SelectMaterial_C_TextInitialize::CallFunc_CalclateRewardBoostSupportItemNum_CalculatedAmount' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, CallFunc_Less_IntInt_ReturnValue) == 0x000194, "Member 'SelectMaterial_C_TextInitialize::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000195, "Member 'SelectMaterial_C_TextInitialize::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, CallFunc_Conv_IntToText_ReturnValue) == 0x000198, "Member 'SelectMaterial_C_TextInitialize::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, K2Node_Select_Default) == 0x0001B0, "Member 'SelectMaterial_C_TextInitialize::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, CallFunc_GetAllStoragesAmount_ReturnValue) == 0x0001D8, "Member 'SelectMaterial_C_TextInitialize::CallFunc_GetAllStoragesAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0001DC, "Member 'SelectMaterial_C_TextInitialize::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0001E0, "Member 'SelectMaterial_C_TextInitialize::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, K2Node_Select_Default_1) == 0x0001F8, "Member 'SelectMaterial_C_TextInitialize::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, CallFunc_GetNameText_ReturnValue) == 0x000220, "Member 'SelectMaterial_C_TextInitialize::CallFunc_GetNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000230, "Member 'SelectMaterial_C_TextInitialize::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000248, "Member 'SelectMaterial_C_TextInitialize::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, CallFunc_CalculateLiquidMemoryMoneyDiscount_CalclatedMoney) == 0x000260, "Member 'SelectMaterial_C_TextInitialize::CallFunc_CalculateLiquidMemoryMoneyDiscount_CalclatedMoney' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, CallFunc_CalculateRewardBoostMoney_CalculatedMoney) == 0x000264, "Member 'SelectMaterial_C_TextInitialize::CallFunc_CalculateRewardBoostMoney_CalculatedMoney' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, CallFunc_Add_IntInt_ReturnValue) == 0x000268, "Member 'SelectMaterial_C_TextInitialize::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, CallFunc_Subtract_IntInt_ReturnValue) == 0x00026C, "Member 'SelectMaterial_C_TextInitialize::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, CallFunc_Greater_IntInt_ReturnValue) == 0x000270, "Member 'SelectMaterial_C_TextInitialize::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000278, "Member 'SelectMaterial_C_TextInitialize::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, K2Node_Select_Default_2) == 0x000290, "Member 'SelectMaterial_C_TextInitialize::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TextInitialize, K2Node_Select_Default_3) == 0x0002B8, "Member 'SelectMaterial_C_TextInitialize::K2Node_Select_Default_3' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.InitializeTickets
// 0x0018 (0x0018 - 0x0000)
struct SelectMaterial_C_InitializeTickets final
{
public:
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBStackBComponent*                     CallFunc_GetStackBComponent_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SelectMaterial_C_InitializeTickets) == 0x000008, "Wrong alignment on SelectMaterial_C_InitializeTickets");
static_assert(sizeof(SelectMaterial_C_InitializeTickets) == 0x000018, "Wrong size on SelectMaterial_C_InitializeTickets");
static_assert(offsetof(SelectMaterial_C_InitializeTickets, CallFunc_GetSBPlayerController_ReturnValue) == 0x000000, "Member 'SelectMaterial_C_InitializeTickets::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_InitializeTickets, CallFunc_GetStackBComponent_ReturnValue) == 0x000008, "Member 'SelectMaterial_C_InitializeTickets::CallFunc_GetStackBComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_InitializeTickets, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'SelectMaterial_C_InitializeTickets::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_InitializeTickets, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'SelectMaterial_C_InitializeTickets::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.CacheTicketData
// 0x0048 (0x0048 - 0x0000)
struct SelectMaterial_C_CacheTicketData final
{
public:
	TArray<struct FSBStackBTicketData>            Tickets;                                           // 0x0000(0x0010)(Edit, BlueprintVisible)
	ESBStackBItemType                             CallFunc_GetStackBItemType_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EAD[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBStackBComponent*                     CallFunc_GetStackBComponent_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EAE[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBTicketData                    CallFunc_FindTicketDataByTypeLevel_ReturnValue;    // 0x002C(0x001C)(ConstParm, NoDestructor)
};
static_assert(alignof(SelectMaterial_C_CacheTicketData) == 0x000008, "Wrong alignment on SelectMaterial_C_CacheTicketData");
static_assert(sizeof(SelectMaterial_C_CacheTicketData) == 0x000048, "Wrong size on SelectMaterial_C_CacheTicketData");
static_assert(offsetof(SelectMaterial_C_CacheTicketData, Tickets) == 0x000000, "Member 'SelectMaterial_C_CacheTicketData::Tickets' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CacheTicketData, CallFunc_GetStackBItemType_ReturnValue) == 0x000010, "Member 'SelectMaterial_C_CacheTicketData::CallFunc_GetStackBItemType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CacheTicketData, CallFunc_GetItemLevel_ReturnValue) == 0x000014, "Member 'SelectMaterial_C_CacheTicketData::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CacheTicketData, CallFunc_GetSBPlayerController_ReturnValue) == 0x000018, "Member 'SelectMaterial_C_CacheTicketData::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CacheTicketData, CallFunc_GetStackBComponent_ReturnValue) == 0x000020, "Member 'SelectMaterial_C_CacheTicketData::CallFunc_GetStackBComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CacheTicketData, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'SelectMaterial_C_CacheTicketData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CacheTicketData, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'SelectMaterial_C_CacheTicketData::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CacheTicketData, CallFunc_FindTicketDataByTypeLevel_ReturnValue) == 0x00002C, "Member 'SelectMaterial_C_CacheTicketData::CallFunc_FindTicketDataByTypeLevel_ReturnValue' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.UpdateTicketData
// 0x0030 (0x0030 - 0x0000)
struct SelectMaterial_C_UpdateTicketData final
{
public:
	int32                                         CallFunc_GetSotedIndexNum_ReturnValue;             // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EAF[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSotedIndexNum_ReturnValue_1;           // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EB0[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStackBUseTicket                     K2Node_MakeStruct_SBStackBUseTicket;               // 0x0028(0x0008)(NoDestructor)
};
static_assert(alignof(SelectMaterial_C_UpdateTicketData) == 0x000004, "Wrong alignment on SelectMaterial_C_UpdateTicketData");
static_assert(sizeof(SelectMaterial_C_UpdateTicketData) == 0x000030, "Wrong size on SelectMaterial_C_UpdateTicketData");
static_assert(offsetof(SelectMaterial_C_UpdateTicketData, CallFunc_GetSotedIndexNum_ReturnValue) == 0x000000, "Member 'SelectMaterial_C_UpdateTicketData::CallFunc_GetSotedIndexNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateTicketData, CallFunc_Subtract_IntInt_ReturnValue) == 0x000004, "Member 'SelectMaterial_C_UpdateTicketData::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateTicketData, CallFunc_Multiply_IntInt_ReturnValue) == 0x000008, "Member 'SelectMaterial_C_UpdateTicketData::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateTicketData, CallFunc_GetTokenAmount_ReturnValue) == 0x00000C, "Member 'SelectMaterial_C_UpdateTicketData::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateTicketData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000010, "Member 'SelectMaterial_C_UpdateTicketData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateTicketData, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000011, "Member 'SelectMaterial_C_UpdateTicketData::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateTicketData, CallFunc_GetSotedIndexNum_ReturnValue_1) == 0x000014, "Member 'SelectMaterial_C_UpdateTicketData::CallFunc_GetSotedIndexNum_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateTicketData, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000018, "Member 'SelectMaterial_C_UpdateTicketData::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateTicketData, CallFunc_IsChecked_ReturnValue) == 0x00001C, "Member 'SelectMaterial_C_UpdateTicketData::CallFunc_IsChecked_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateTicketData, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x000020, "Member 'SelectMaterial_C_UpdateTicketData::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateTicketData, CallFunc_Max_ReturnValue) == 0x000024, "Member 'SelectMaterial_C_UpdateTicketData::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateTicketData, K2Node_MakeStruct_SBStackBUseTicket) == 0x000028, "Member 'SelectMaterial_C_UpdateTicketData::K2Node_MakeStruct_SBStackBUseTicket' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.TicketTextUpdate
// 0x0128 (0x0128 - 0x0000)
struct SelectMaterial_C_TicketTextUpdate final
{
public:
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0000(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0028(0x0028)()
	bool                                          Temp_bool_Variable;                                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EB1[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenAmount_ReturnValue_1;             // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EB2[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0060(0x0018)()
	ESBStackBItemType                             CallFunc_GetStackBItemType_ReturnValue;            // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EB3[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBStackBComponent*                     CallFunc_GetStackBComponent_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStackBTicketData                    CallFunc_FindTicketDataByTypeLevel_ReturnValue;    // 0x0090(0x001C)(ConstParm, NoDestructor)
	uint8                                         Pad_3EB4[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00B0(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EB5[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemsNum_ReturnValue;                  // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EB6[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x00E0(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EB7[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0100(0x0028)()
};
static_assert(alignof(SelectMaterial_C_TicketTextUpdate) == 0x000008, "Wrong alignment on SelectMaterial_C_TicketTextUpdate");
static_assert(sizeof(SelectMaterial_C_TicketTextUpdate) == 0x000128, "Wrong size on SelectMaterial_C_TicketTextUpdate");
static_assert(offsetof(SelectMaterial_C_TicketTextUpdate, K2Node_MakeStruct_SlateColor) == 0x000000, "Member 'SelectMaterial_C_TicketTextUpdate::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TicketTextUpdate, K2Node_MakeStruct_SlateColor_1) == 0x000028, "Member 'SelectMaterial_C_TicketTextUpdate::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TicketTextUpdate, Temp_bool_Variable) == 0x000050, "Member 'SelectMaterial_C_TicketTextUpdate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TicketTextUpdate, CallFunc_GetTokenAmount_ReturnValue) == 0x000054, "Member 'SelectMaterial_C_TicketTextUpdate::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TicketTextUpdate, CallFunc_GetTokenAmount_ReturnValue_1) == 0x000058, "Member 'SelectMaterial_C_TicketTextUpdate::CallFunc_GetTokenAmount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TicketTextUpdate, CallFunc_Conv_IntToText_ReturnValue) == 0x000060, "Member 'SelectMaterial_C_TicketTextUpdate::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TicketTextUpdate, CallFunc_GetStackBItemType_ReturnValue) == 0x000078, "Member 'SelectMaterial_C_TicketTextUpdate::CallFunc_GetStackBItemType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TicketTextUpdate, CallFunc_GetItemLevel_ReturnValue) == 0x00007C, "Member 'SelectMaterial_C_TicketTextUpdate::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TicketTextUpdate, CallFunc_GetSBPlayerController_ReturnValue) == 0x000080, "Member 'SelectMaterial_C_TicketTextUpdate::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TicketTextUpdate, CallFunc_GetStackBComponent_ReturnValue) == 0x000088, "Member 'SelectMaterial_C_TicketTextUpdate::CallFunc_GetStackBComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TicketTextUpdate, CallFunc_FindTicketDataByTypeLevel_ReturnValue) == 0x000090, "Member 'SelectMaterial_C_TicketTextUpdate::CallFunc_FindTicketDataByTypeLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TicketTextUpdate, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000B0, "Member 'SelectMaterial_C_TicketTextUpdate::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TicketTextUpdate, CallFunc_IsValid_ReturnValue) == 0x0000C8, "Member 'SelectMaterial_C_TicketTextUpdate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TicketTextUpdate, CallFunc_GetItemsNum_ReturnValue) == 0x0000CC, "Member 'SelectMaterial_C_TicketTextUpdate::CallFunc_GetItemsNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TicketTextUpdate, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000D0, "Member 'SelectMaterial_C_TicketTextUpdate::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TicketTextUpdate, CallFunc_Multiply_IntInt_ReturnValue) == 0x0000D4, "Member 'SelectMaterial_C_TicketTextUpdate::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TicketTextUpdate, CallFunc_Max_ReturnValue) == 0x0000D8, "Member 'SelectMaterial_C_TicketTextUpdate::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TicketTextUpdate, CallFunc_Conv_IntToText_ReturnValue_2) == 0x0000E0, "Member 'SelectMaterial_C_TicketTextUpdate::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TicketTextUpdate, CallFunc_Greater_IntInt_ReturnValue) == 0x0000F8, "Member 'SelectMaterial_C_TicketTextUpdate::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_TicketTextUpdate, K2Node_Select_Default) == 0x000100, "Member 'SelectMaterial_C_TicketTextUpdate::K2Node_Select_Default' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.UpdateSelectButton
// 0x0018 (0x0018 - 0x0000)
struct SelectMaterial_C_UpdateSelectButton final
{
public:
	bool                                          CallFunc_IsMoneyAmount_isAmount;                   // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EB8[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMaterialFull_IsOk;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SelectMaterial_C_UpdateSelectButton) == 0x000008, "Wrong alignment on SelectMaterial_C_UpdateSelectButton");
static_assert(sizeof(SelectMaterial_C_UpdateSelectButton) == 0x000018, "Wrong size on SelectMaterial_C_UpdateSelectButton");
static_assert(offsetof(SelectMaterial_C_UpdateSelectButton, CallFunc_IsMoneyAmount_isAmount) == 0x000000, "Member 'SelectMaterial_C_UpdateSelectButton::CallFunc_IsMoneyAmount_isAmount' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SelectMaterial_C_UpdateSelectButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectButton, CallFunc_IsMaterialFull_IsOk) == 0x000010, "Member 'SelectMaterial_C_UpdateSelectButton::CallFunc_IsMaterialFull_IsOk' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectButton, CallFunc_BooleanAND_ReturnValue) == 0x000011, "Member 'SelectMaterial_C_UpdateSelectButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.GenerateUIDs
// 0x0038 (0x0038 - 0x0000)
struct SelectMaterial_C_GenerateUIDs final
{
public:
	TArray<struct FOwnItemInfo>                   ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReturnParm)
	TArray<struct FOwnItemInfo>                   Uids;                                              // 0x0010(0x0010)(Edit, BlueprintVisible)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EB9[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   CallFunc_GetAllItems_ReturnValue;                  // 0x0028(0x0010)(ConstParm, ReferenceParm)
};
static_assert(alignof(SelectMaterial_C_GenerateUIDs) == 0x000008, "Wrong alignment on SelectMaterial_C_GenerateUIDs");
static_assert(sizeof(SelectMaterial_C_GenerateUIDs) == 0x000038, "Wrong size on SelectMaterial_C_GenerateUIDs");
static_assert(offsetof(SelectMaterial_C_GenerateUIDs, ReturnValue) == 0x000000, "Member 'SelectMaterial_C_GenerateUIDs::ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_GenerateUIDs, Uids) == 0x000010, "Member 'SelectMaterial_C_GenerateUIDs::Uids' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_GenerateUIDs, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'SelectMaterial_C_GenerateUIDs::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_GenerateUIDs, CallFunc_GetAllItems_ReturnValue) == 0x000028, "Member 'SelectMaterial_C_GenerateUIDs::CallFunc_GetAllItems_ReturnValue' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.CalclateRewardBoostSupportItemNum
// 0x00E0 (0x00E0 - 0x0000)
struct SelectMaterial_C_CalclateRewardBoostSupportItemNum final
{
public:
	int32                                         BaseAmount;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SupportItemId;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CalculatedAmount;                                  // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalRateEconomyAmount;                            // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalNumEconomyAmount;                             // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EBA[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EBB[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardBoostStackBItemType                  CallFunc_ConvertRewardBoostType_ReturnValue;       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EBC[0x6];                                     // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetStackBEconomyItemRate_EconomyRate;     // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStackBEconomyItemRate_ReturnValue;     // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EBD[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackBEconomyItemNum_EconomyNum;       // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStackBEconomyItemNum_ReturnValue;      // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EBE[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SelectMaterial_C_CalclateRewardBoostSupportItemNum) == 0x000008, "Wrong alignment on SelectMaterial_C_CalclateRewardBoostSupportItemNum");
static_assert(sizeof(SelectMaterial_C_CalclateRewardBoostSupportItemNum) == 0x0000E0, "Wrong size on SelectMaterial_C_CalclateRewardBoostSupportItemNum");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, BaseAmount) == 0x000000, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::BaseAmount' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, SupportItemId) == 0x000004, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::SupportItemId' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CalculatedAmount) == 0x000008, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CalculatedAmount' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, LocalRateEconomyAmount) == 0x00000C, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::LocalRateEconomyAmount' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, LocalNumEconomyAmount) == 0x000010, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::LocalNumEconomyAmount' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000028, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CallFunc_Concat_StrStr_ReturnValue) == 0x000038, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000048, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000058, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000068, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000078, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000088, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CallFunc_Add_IntInt_ReturnValue) == 0x000098, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CallFunc_Subtract_IntInt_ReturnValue) == 0x00009C, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CallFunc_GetStackBNum_ReturnValue) == 0x0000A0, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CallFunc_GetSBPlayerController_ReturnValue) == 0x0000A8, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CallFunc_ConvertRewardBoostType_ReturnValue) == 0x0000B0, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CallFunc_ConvertRewardBoostType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CallFunc_IsValid_ReturnValue) == 0x0000B1, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x0000B8, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CallFunc_GetStackBEconomyItemRate_EconomyRate) == 0x0000C0, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CallFunc_GetStackBEconomyItemRate_EconomyRate' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CallFunc_GetStackBEconomyItemRate_ReturnValue) == 0x0000C4, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CallFunc_GetStackBEconomyItemRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CallFunc_GetStackBEconomyItemNum_EconomyNum) == 0x0000C8, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CallFunc_GetStackBEconomyItemNum_EconomyNum' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CallFunc_GetStackBEconomyItemNum_ReturnValue) == 0x0000CC, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CallFunc_GetStackBEconomyItemNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CallFunc_Multiply_IntFloat_ReturnValue) == 0x0000D0, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CallFunc_FFloor_ReturnValue) == 0x0000D4, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalclateRewardBoostSupportItemNum, CallFunc_IsValid_ReturnValue_1) == 0x0000D8, "Member 'SelectMaterial_C_CalclateRewardBoostSupportItemNum::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.CalculateRewardBoostMoney
// 0x00D0 (0x00D0 - 0x0000)
struct SelectMaterial_C_CalculateRewardBoostMoney final
{
public:
	int32                                         SupportItemId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BasicNeedLuno;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CalculatedMoney;                                   // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalDiscountRate;                                 // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalStackbDiscountMoney;                          // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EBF[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EC0[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EC1[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EC2[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardBoostStackBItemType                  CallFunc_ConvertRewardBoostType_ReturnValue;       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EC3[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetStackBMoneyDiscount_DiscountRate;      // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStackBMoneyDiscount_ReturnValue;       // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SelectMaterial_C_CalculateRewardBoostMoney) == 0x000008, "Wrong alignment on SelectMaterial_C_CalculateRewardBoostMoney");
static_assert(sizeof(SelectMaterial_C_CalculateRewardBoostMoney) == 0x0000D0, "Wrong size on SelectMaterial_C_CalculateRewardBoostMoney");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, SupportItemId) == 0x000000, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::SupportItemId' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, BasicNeedLuno) == 0x000004, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::BasicNeedLuno' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, CalculatedMoney) == 0x000008, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::CalculatedMoney' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, LocalDiscountRate) == 0x00000C, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::LocalDiscountRate' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, LocalStackbDiscountMoney) == 0x000010, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::LocalStackbDiscountMoney' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, CallFunc_Conv_FloatToString_ReturnValue) == 0x000028, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000038, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, CallFunc_Concat_StrStr_ReturnValue) == 0x000048, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000058, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000060, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, CallFunc_FFloor_ReturnValue) == 0x000070, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000078, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000088, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000098, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, CallFunc_GetStackBNum_ReturnValue) == 0x0000A8, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, CallFunc_GetSBPlayerController_ReturnValue) == 0x0000B0, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, CallFunc_ConvertRewardBoostType_ReturnValue) == 0x0000B8, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::CallFunc_ConvertRewardBoostType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, CallFunc_IsValid_ReturnValue) == 0x0000B9, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x0000C0, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, CallFunc_GetStackBMoneyDiscount_DiscountRate) == 0x0000C8, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::CallFunc_GetStackBMoneyDiscount_DiscountRate' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, CallFunc_GetStackBMoneyDiscount_ReturnValue) == 0x0000CC, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::CallFunc_GetStackBMoneyDiscount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateRewardBoostMoney, CallFunc_IsValid_ReturnValue_1) == 0x0000CD, "Member 'SelectMaterial_C_CalculateRewardBoostMoney::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.CalculateLiquidMemoryMoneyDiscount
// 0x00F0 (0x00F0 - 0x0000)
struct SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount final
{
public:
	int32                                         BaseMoney;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CalclatedMoney;                                    // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalLiquidMemoryEffectValue;                      // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EC4[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EC5[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EC6[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EC7[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_OutIsValid; // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EC8[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_ReturnValue; // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount) == 0x000008, "Wrong alignment on SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount");
static_assert(sizeof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount) == 0x0000F0, "Wrong size on SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount");
static_assert(offsetof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount, BaseMoney) == 0x000000, "Member 'SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount::BaseMoney' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount, CalclatedMoney) == 0x000004, "Member 'SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount::CalclatedMoney' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount, LocalLiquidMemoryEffectValue) == 0x000008, "Member 'SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount::LocalLiquidMemoryEffectValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount, CallFunc_Conv_FloatToString_ReturnValue) == 0x000010, "Member 'SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount, CallFunc_Conv_IntToString_ReturnValue) == 0x000020, "Member 'SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000040, "Member 'SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000048, "Member 'SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount, CallFunc_Conv_FloatToString_ReturnValue_1) == 0x000058, "Member 'SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount::CallFunc_Conv_FloatToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000068, "Member 'SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount, CallFunc_FFloor_ReturnValue) == 0x000078, "Member 'SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000080, "Member 'SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000090, "Member 'SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount, CallFunc_Concat_StrStr_ReturnValue_4) == 0x0000A0, "Member 'SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount, CallFunc_Concat_StrStr_ReturnValue_5) == 0x0000B0, "Member 'SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount, CallFunc_Concat_StrStr_ReturnValue_6) == 0x0000C0, "Member 'SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount, CallFunc_GetNetworkDataCache_IsValid) == 0x0000D0, "Member 'SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0000D8, "Member 'SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount, CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_OutIsValid) == 0x0000E0, "Member 'SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount::CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_OutIsValid' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount, CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_ReturnValue) == 0x0000E4, "Member 'SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount::CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000E8, "Member 'SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.SetFilterType
// 0x0001 (0x0001 - 0x0000)
struct SelectMaterial_C_SetFilterType final
{
public:
	EFilter_Type                                  FilterType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectMaterial_C_SetFilterType) == 0x000001, "Wrong alignment on SelectMaterial_C_SetFilterType");
static_assert(sizeof(SelectMaterial_C_SetFilterType) == 0x000001, "Wrong size on SelectMaterial_C_SetFilterType");
static_assert(offsetof(SelectMaterial_C_SetFilterType, FilterType) == 0x000000, "Member 'SelectMaterial_C_SetFilterType::FilterType' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.IsMoneyAmount
// 0x001C (0x001C - 0x0000)
struct SelectMaterial_C_IsMoneyAmount final
{
public:
	bool                                          IsAmount;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EC9[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMoney_ReturnValue;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalculateLiquidMemoryMoneyDiscount_CalclatedMoney; // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalculateRewardBoostMoney_CalculatedMoney; // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SelectMaterial_C_IsMoneyAmount) == 0x000004, "Wrong alignment on SelectMaterial_C_IsMoneyAmount");
static_assert(sizeof(SelectMaterial_C_IsMoneyAmount) == 0x00001C, "Wrong size on SelectMaterial_C_IsMoneyAmount");
static_assert(offsetof(SelectMaterial_C_IsMoneyAmount, IsAmount) == 0x000000, "Member 'SelectMaterial_C_IsMoneyAmount::IsAmount' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_IsMoneyAmount, CallFunc_GetMoney_ReturnValue) == 0x000004, "Member 'SelectMaterial_C_IsMoneyAmount::CallFunc_GetMoney_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_IsMoneyAmount, CallFunc_CalculateLiquidMemoryMoneyDiscount_CalclatedMoney) == 0x000008, "Member 'SelectMaterial_C_IsMoneyAmount::CallFunc_CalculateLiquidMemoryMoneyDiscount_CalclatedMoney' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_IsMoneyAmount, CallFunc_CalculateRewardBoostMoney_CalculatedMoney) == 0x00000C, "Member 'SelectMaterial_C_IsMoneyAmount::CallFunc_CalculateRewardBoostMoney_CalculatedMoney' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_IsMoneyAmount, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'SelectMaterial_C_IsMoneyAmount::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_IsMoneyAmount, CallFunc_Subtract_IntInt_ReturnValue) == 0x000014, "Member 'SelectMaterial_C_IsMoneyAmount::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_IsMoneyAmount, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000018, "Member 'SelectMaterial_C_IsMoneyAmount::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.UpdateText
// 0x0020 (0x0020 - 0x0000)
struct SelectMaterial_C_UpdateText final
{
public:
	int32                                         CallFunc_GetUsedGridNum_UsedGridNum;               // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3ECA[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(SelectMaterial_C_UpdateText) == 0x000008, "Wrong alignment on SelectMaterial_C_UpdateText");
static_assert(sizeof(SelectMaterial_C_UpdateText) == 0x000020, "Wrong size on SelectMaterial_C_UpdateText");
static_assert(offsetof(SelectMaterial_C_UpdateText, CallFunc_GetUsedGridNum_UsedGridNum) == 0x000000, "Member 'SelectMaterial_C_UpdateText::CallFunc_GetUsedGridNum_UsedGridNum' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateText, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'SelectMaterial_C_UpdateText::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateText, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'SelectMaterial_C_UpdateText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.Get_HB_SelectAlert_ToolTipWidget_0
// 0x0058 (0x0058 - 0x0000)
struct SelectMaterial_C_Get_HB_SelectAlert_ToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_MultiLine_C*  CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
};
static_assert(alignof(SelectMaterial_C_Get_HB_SelectAlert_ToolTipWidget_0) == 0x000008, "Wrong alignment on SelectMaterial_C_Get_HB_SelectAlert_ToolTipWidget_0");
static_assert(sizeof(SelectMaterial_C_Get_HB_SelectAlert_ToolTipWidget_0) == 0x000058, "Wrong size on SelectMaterial_C_Get_HB_SelectAlert_ToolTipWidget_0");
static_assert(offsetof(SelectMaterial_C_Get_HB_SelectAlert_ToolTipWidget_0, ReturnValue) == 0x000000, "Member 'SelectMaterial_C_Get_HB_SelectAlert_ToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Get_HB_SelectAlert_ToolTipWidget_0, CallFunc_Create_ReturnValue) == 0x000008, "Member 'SelectMaterial_C_Get_HB_SelectAlert_ToolTipWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Get_HB_SelectAlert_ToolTipWidget_0, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'SelectMaterial_C_Get_HB_SelectAlert_ToolTipWidget_0::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Get_HB_SelectAlert_ToolTipWidget_0, CallFunc_Concat_StrStr_ReturnValue) == 0x000020, "Member 'SelectMaterial_C_Get_HB_SelectAlert_ToolTipWidget_0::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Get_HB_SelectAlert_ToolTipWidget_0, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000030, "Member 'SelectMaterial_C_Get_HB_SelectAlert_ToolTipWidget_0::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_Get_HB_SelectAlert_ToolTipWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'SelectMaterial_C_Get_HB_SelectAlert_ToolTipWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.UpdateSelectAlert
// 0x02D8 (0x02D8 - 0x0000)
struct SelectMaterial_C_UpdateSelectAlert final
{
public:
	TArray<class FString>                         Texts;                                             // 0x0000(0x0010)(Edit, BlueprintVisible)
	struct FOwnItemInfo                           Material;                                          // 0x0010(0x0118)(Edit, BlueprintVisible)
	bool                                          WeaponSkin;                                        // 0x0128(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          BattleSet;                                         // 0x0129(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          StackB;                                            // 0x012A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x012B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ECB[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0145(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3ECC[0x2];                                     // 0x0146(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_JoinStringArray_ReturnValue;              // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x015A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ECD[0x5];                                     // 0x015B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0160(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ECE[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  K2Node_MakeArray_Array_1;                          // 0x0188(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_Get_Item;                           // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3ECF[0x3];                                     // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x01A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerPresetEquipItem_ReturnValue;      // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x01A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_5;                  // 0x01A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3ED0[0x1];                                     // 0x01A7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ED1[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_GetItem_ReturnValue;                   // 0x01B0(0x0118)(ConstParm)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_6;                  // 0x02C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3ED2[0x2];                                     // 0x02CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemsNum_ReturnValue;                  // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SelectMaterial_C_UpdateSelectAlert) == 0x000008, "Wrong alignment on SelectMaterial_C_UpdateSelectAlert");
static_assert(sizeof(SelectMaterial_C_UpdateSelectAlert) == 0x0002D8, "Wrong size on SelectMaterial_C_UpdateSelectAlert");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, Texts) == 0x000000, "Member 'SelectMaterial_C_UpdateSelectAlert::Texts' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, Material) == 0x000010, "Member 'SelectMaterial_C_UpdateSelectAlert::Material' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, WeaponSkin) == 0x000128, "Member 'SelectMaterial_C_UpdateSelectAlert::WeaponSkin' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, BattleSet) == 0x000129, "Member 'SelectMaterial_C_UpdateSelectAlert::BattleSet' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, StackB) == 0x00012A, "Member 'SelectMaterial_C_UpdateSelectAlert::StackB' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, Temp_bool_Variable) == 0x00012B, "Member 'SelectMaterial_C_UpdateSelectAlert::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, Temp_int_Loop_Counter_Variable) == 0x00012C, "Member 'SelectMaterial_C_UpdateSelectAlert::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_Add_IntInt_ReturnValue) == 0x000130, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, Temp_int_Array_Index_Variable) == 0x000134, "Member 'SelectMaterial_C_UpdateSelectAlert::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_MakeLiteralByte_ReturnValue) == 0x000138, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, Temp_int_Variable) == 0x00013C, "Member 'SelectMaterial_C_UpdateSelectAlert::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_Add_IntInt_ReturnValue_1) == 0x000140, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000144, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_BooleanOR_ReturnValue) == 0x000145, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_JoinStringArray_ReturnValue) == 0x000148, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_BooleanOR_ReturnValue_1) == 0x000158, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_BooleanOR_ReturnValue_2) == 0x000159, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, K2Node_Select_Default) == 0x00015A, "Member 'SelectMaterial_C_UpdateSelectAlert::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, K2Node_MakeArray_Array) == 0x000160, "Member 'SelectMaterial_C_UpdateSelectAlert::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_GetTextFromAsset_ReturnValue) == 0x000170, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_Array_Add_ReturnValue) == 0x000180, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, K2Node_MakeArray_Array_1) == 0x000188, "Member 'SelectMaterial_C_UpdateSelectAlert::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_Array_Get_Item) == 0x000198, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_Array_Length_ReturnValue) == 0x00019C, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_Less_IntInt_ReturnValue) == 0x0001A0, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001A1, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_BooleanAND_ReturnValue) == 0x0001A2, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_BooleanOR_ReturnValue_3) == 0x0001A3, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_IsPlayerPresetEquipItem_ReturnValue) == 0x0001A4, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_IsPlayerPresetEquipItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_BooleanOR_ReturnValue_4) == 0x0001A5, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_BooleanOR_ReturnValue_5) == 0x0001A6, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_BooleanOR_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_GetStackBNum_ReturnValue) == 0x0001A8, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_BP_GetItem_ReturnValue) == 0x0001B0, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_BP_GetItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_Greater_IntInt_ReturnValue) == 0x0002C8, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_BooleanOR_ReturnValue_6) == 0x0002C9, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_BooleanOR_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_GetItemsNum_ReturnValue) == 0x0002CC, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_GetItemsNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_Subtract_IntInt_ReturnValue) == 0x0002D0, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_UpdateSelectAlert, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0002D4, "Member 'SelectMaterial_C_UpdateSelectAlert::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.IsMaterialFull
// 0x0010 (0x0010 - 0x0000)
struct SelectMaterial_C_IsMaterialFull final
{
public:
	bool                                          IsOk;                                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3ED3[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAllStoragesAmount_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFullyContent_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SelectMaterial_C_IsMaterialFull) == 0x000004, "Wrong alignment on SelectMaterial_C_IsMaterialFull");
static_assert(sizeof(SelectMaterial_C_IsMaterialFull) == 0x000010, "Wrong size on SelectMaterial_C_IsMaterialFull");
static_assert(offsetof(SelectMaterial_C_IsMaterialFull, IsOk) == 0x000000, "Member 'SelectMaterial_C_IsMaterialFull::IsOk' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_IsMaterialFull, Temp_bool_Variable) == 0x000001, "Member 'SelectMaterial_C_IsMaterialFull::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_IsMaterialFull, Temp_bool_Variable_1) == 0x000002, "Member 'SelectMaterial_C_IsMaterialFull::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_IsMaterialFull, CallFunc_GetAllStoragesAmount_ReturnValue) == 0x000004, "Member 'SelectMaterial_C_IsMaterialFull::CallFunc_GetAllStoragesAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_IsMaterialFull, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'SelectMaterial_C_IsMaterialFull::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_IsMaterialFull, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000009, "Member 'SelectMaterial_C_IsMaterialFull::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_IsMaterialFull, K2Node_Select_Default) == 0x00000A, "Member 'SelectMaterial_C_IsMaterialFull::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_IsMaterialFull, CallFunc_IsChecked_ReturnValue) == 0x00000B, "Member 'SelectMaterial_C_IsMaterialFull::CallFunc_IsChecked_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_IsMaterialFull, CallFunc_IsFullyContent_ReturnValue) == 0x00000C, "Member 'SelectMaterial_C_IsMaterialFull::CallFunc_IsFullyContent_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_IsMaterialFull, CallFunc_BooleanAND_ReturnValue) == 0x00000D, "Member 'SelectMaterial_C_IsMaterialFull::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function SelectMaterial.SelectMaterial_C.IsNeedMoreMaterial
// 0x000C (0x000C - 0x0000)
struct SelectMaterial_C_IsNeedMoreMaterial final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3ED4[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemsNum_ReturnValue;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SelectMaterial_C_IsNeedMoreMaterial) == 0x000004, "Wrong alignment on SelectMaterial_C_IsNeedMoreMaterial");
static_assert(sizeof(SelectMaterial_C_IsNeedMoreMaterial) == 0x00000C, "Wrong size on SelectMaterial_C_IsNeedMoreMaterial");
static_assert(offsetof(SelectMaterial_C_IsNeedMoreMaterial, ReturnValue) == 0x000000, "Member 'SelectMaterial_C_IsNeedMoreMaterial::ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_IsNeedMoreMaterial, CallFunc_GetItemsNum_ReturnValue) == 0x000004, "Member 'SelectMaterial_C_IsNeedMoreMaterial::CallFunc_GetItemsNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMaterial_C_IsNeedMoreMaterial, CallFunc_Less_IntInt_ReturnValue) == 0x000008, "Member 'SelectMaterial_C_IsNeedMoreMaterial::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

